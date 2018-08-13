@echo off
prompt Rex:$g 
color f0
REM runs only if gcc command is added to the path variable
:label
cls
gcc -Irizzu FaceB.c -o FaceB
pause 
FaceB
echo Want to Run it again ? If Yes, Press any key else Ctrl+C or close this window
pause >nul
goto label