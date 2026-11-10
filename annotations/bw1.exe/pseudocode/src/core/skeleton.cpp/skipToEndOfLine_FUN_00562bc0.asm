; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_00562bc0(_FILE *file_ptr)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_ptr
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005c0530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00562bc0
        ;   Label: core_skeleton.cpp_skipToEndOfLine_FUN_00562bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00562bc1
    PUSH EBX                            ; 00562bc5
        ;   Label: LAB_00562bc5
    CALL crt_stdio.c_fgetc_FUN_005c0530 ; 00562bc6
        ;   XREF to: 005c0530 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005c0530()
    ADD ESP,0x4                         ; 00562bcb
    TEST EAX,EAX                        ; 00562bce
    JL 0x00562bd7                       ; 00562bd0
        ;   XREF to: 00562bd7 (CONDITIONAL_JUMP)  ; LAB_00562bd7
    CMP EAX,0xa                         ; 00562bd2
    JNZ 0x00562bc5                      ; 00562bd5
        ;   XREF to: 00562bc5 (CONDITIONAL_JUMP)  ; LAB_00562bc5
    POP EBX                             ; 00562bd7
        ;   Label: LAB_00562bd7
    RET                                 ; 00562bd8

