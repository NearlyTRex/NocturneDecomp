; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_skipToEndOfLine_FUN_005477e0(_FILE *file_ptr)
;
; Parameters:
; _FILE *          Stack[0x4]:4   file_ptr
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005477e0
        ;   Label: core_skeleton.cpp_skipToEndOfLine_FUN_005477e0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005477e1
    PUSH EBX                            ; 005477e5
        ;   Label: LAB_005477e5
    CALL crt_stdio.c_fgetc_FUN_005a32b0 ; 005477e6
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgetc_FUN_005a32b0()
    ADD ESP,0x4                         ; 005477eb
    TEST EAX,EAX                        ; 005477ee
    JL 0x005477f7                       ; 005477f0
        ;   XREF to: 005477f7 (CONDITIONAL_JUMP)  ; LAB_005477f7
    CMP EAX,0xa                         ; 005477f2
    JNZ 0x005477e5                      ; 005477f5
        ;   XREF to: 005477e5 (CONDITIONAL_JUMP)  ; LAB_005477e5
    POP EBX                             ; 005477f7
        ;   Label: LAB_005477f7
    RET                                 ; 005477f8

