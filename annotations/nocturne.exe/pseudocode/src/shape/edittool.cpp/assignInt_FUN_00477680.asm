; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl shape_edittool_cpp_assignInt_FUN_00477680(int *dest,int *src)
;
; Parameters:
; int *            Stack[0x4]:4   dest
; int *            Stack[0x8]:4   src
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00477680
        ;   Label: shape_edittool.cpp_assignInt_FUN_00477680
    MOV EAX,dword ptr [ESP + 0x8]       ; 00477684
    MOV EAX,dword ptr [EAX]             ; 00477688
    MOV dword ptr [EDX],EAX             ; 0047768a
    MOV EAX,EDX                         ; 0047768c
    RET                                 ; 0047768e

