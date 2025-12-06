; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * shape_edittool.cpp_assignInt_FUN_004a6f40(int * dest_ptr, int * src_ptr)
;
; Parameters:
; int *            Stack[0x4]:4   dest_ptr
; int *            Stack[0x8]:4   src_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a6f40
        ;   Label: shape_edittool.cpp_assignInt_FUN_004a6f40
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6f44
    MOV EAX,dword ptr [EAX]             ; 004a6f48
    MOV dword ptr [EDX],EAX             ; 004a6f4a
    MOV EAX,EDX                         ; 004a6f4c
    RET                                 ; 004a6f4e

