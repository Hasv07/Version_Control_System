# Version_Control_System
1-Initialize WorkSpace
```bash
mkdir Version_Control_System && cd Version_Control_System
git init
echo "# Version_Control_System" >> README.md
git branch -M main
git add README.md
git commit -m"Add Readme"
git remote add origin git@github.com:Hasv07/Version_Control_System.git
git push -u origin main
```
2-Add Get_Sum func
```bash
touch main.cpp
-implement getSum() in main.cpp
git add main.cpp
git commit -m "Add Main:getSum"
```
3-Create Two Branches
```bash
git branch AVG
git branch MIN
```
4-Add getAvg() in AVG branch
```bash
git checkout AVG
-implement getAvg() in main.cpp
git add main.cpp
git commit -m "AVG: Add Main:getAvg()"
```
5-Add getMin() in Min branch
```bash
git checkout MIN
-implement getMIN() in main.cpp
git add main.cpp
git commit -m "MIN: Add Main:getMin()"
```
6-Merge branches & resolve conflicts
```bash
git checkout main
git merge AVG
git merge MIN
```

```cpp

<<<<<<< HEAD
double getAverage(const std::vector<int>& vec) {
    double sum = getSum(vec);
    double average = sum / vec.size();
    return average;
}


=======
int getMin(const std::vector<int>& vec) {
    int min = vec[0];
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] < min) {
            min = vec[i];
        }
    }
    return min;
}

>>>>>>> MIN
```
```bash
-Accept Both Changes
git add main.cpp
git commit -m "merge main and MIN :Completed"
```

7-Update README.md & Upload to remote repo
```bash
git add README.md
git commit -m "README.md:Updated"
git push origin main
```