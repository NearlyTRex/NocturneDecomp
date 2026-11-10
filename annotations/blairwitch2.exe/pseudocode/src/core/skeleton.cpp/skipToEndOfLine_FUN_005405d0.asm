; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005405d0(_FILE *file_ptr)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_ptr
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005b8180
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005405d0
        ;   Label: core_skeleton.cpp_skipToEndOfLine_FUN_005405d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005405d1
    PUSH EBX                            ; 005405d5
        ;   Label: LAB_005405d5
    CALL crt_stdio.c_fgetc_FUN_005b8180 ; 005405d6
        ;   XREF to: 005b8180 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005b8180()
    ADD ESP,0x4                         ; 005405db
    TEST EAX,EAX                        ; 005405de
    JL 0x005405e7                       ; 005405e0
        ;   XREF to: 005405e7 (CONDITIONAL_JUMP)  ; LAB_005405e7
    CMP EAX,0xa                         ; 005405e2
    JNZ 0x005405d5                      ; 005405e5
        ;   XREF to: 005405d5 (CONDITIONAL_JUMP)  ; LAB_005405d5
    POP EBX                             ; 005405e7
        ;   Label: LAB_005405e7
    RET                                 ; 005405e8

