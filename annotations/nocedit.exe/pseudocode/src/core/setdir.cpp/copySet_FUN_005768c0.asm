; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonSet * __cdecl core_setdir_cpp_copySet_FUN_005768c0(CDemonSet **set1,CDemonSet **set2)
;
; Parameters:
; CDemonSet * *    Stack[0x4]:4   set1
; CDemonSet * *    Stack[0x8]:4   set2
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005768c0
        ;   Label: core_setdir.cpp_copySet_FUN_005768c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005768c4
    MOV EAX,dword ptr [EAX]             ; 005768c8
    MOV dword ptr [EDX],EAX             ; 005768ca
    MOV EAX,EDX                         ; 005768cc
    RET                                 ; 005768ce

