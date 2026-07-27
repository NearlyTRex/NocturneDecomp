; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * core_course_cpp_FUN_0043b500(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043b500
        ;   Label: core_course.cpp_FUN_0043b500
    MOV EAX,dword ptr [ESP + 0x8]       ; 0043b504
    MOV EAX,dword ptr [EAX]             ; 0043b508
    MOV dword ptr [EDX],EAX             ; 0043b50a
    MOV EAX,EDX                         ; 0043b50c
    RET                                 ; 0043b50e

