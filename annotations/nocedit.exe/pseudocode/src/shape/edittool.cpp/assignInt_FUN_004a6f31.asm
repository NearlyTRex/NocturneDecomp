; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int * shape_edittool.cpp_assignInt_FUN_004a6f31(int * dest_ptr, int * src_ptr)
;
; Parameters:
; int *            Stack[0x4]:4   dest_ptr
; int *            Stack[0x8]:4   src_ptr
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    PUSH ESP                            ; 004a6f31
        ;   Label: shape_edittool.cpp_assignInt_FUN_004a6f31
    AND AL,0x4                          ; 004a6f32
    MOV EAX,dword ptr [ESP + 0x8]       ; 004a6f34
    MOV EAX,dword ptr [EAX]             ; 004a6f38
    MOV dword ptr [EDX],EAX             ; 004a6f3a
    MOV EAX,EDX                         ; 004a6f3c
    RET                                 ; 004a6f3e

