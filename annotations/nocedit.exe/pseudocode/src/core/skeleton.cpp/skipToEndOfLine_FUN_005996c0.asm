; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005996c0(_FILE *file_ptr)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_ptr
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005996c0
        ;   Label: core_skeleton.cpp_skipToEndOfLine_FUN_005996c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005996c1
    PUSH EBX                            ; 005996c5
        ;   Label: LAB_005996c5
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 005996c6
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 005996cb
    TEST EAX,EAX                        ; 005996ce
    JL 0x005996d7                       ; 005996d0
        ;   XREF to: 005996d7 (CONDITIONAL_JUMP)  ; LAB_005996d7
    CMP EAX,0xa                         ; 005996d2
    JNZ 0x005996c5                      ; 005996d5
        ;   XREF to: 005996c5 (CONDITIONAL_JUMP)  ; LAB_005996c5
    POP EBX                             ; 005996d7
        ;   Label: LAB_005996d7
    RET                                 ; 005996d8

