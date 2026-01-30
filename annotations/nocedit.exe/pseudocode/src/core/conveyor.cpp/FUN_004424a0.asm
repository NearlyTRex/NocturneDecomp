; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_conveyor_cpp_FUN_004424a0(void)
;
;
; Called Functions:
;   crt_stdio.c_fgetc_FUN_005fe840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004424a0
        ;   Label: core_conveyor.cpp_FUN_004424a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004424a1
    PUSH EBX                            ; 004424a5
        ;   Label: LAB_004424a5
    CALL crt_stdio.c_fgetc_FUN_005fe840 ; 004424a6
        ;   XREF to: 005fe840 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fgetc_FUN_005fe840(_FILE * file)
    ADD ESP,0x4                         ; 004424ab
    TEST EAX,EAX                        ; 004424ae
    JL 0x004424b7                       ; 004424b0
        ;   XREF to: 004424b7 (CONDITIONAL_JUMP)  ; LAB_004424b7
    CMP EAX,0xa                         ; 004424b2
    JNZ 0x004424a5                      ; 004424b5
        ;   XREF to: 004424a5 (CONDITIONAL_JUMP)  ; LAB_004424a5
    POP EBX                             ; 004424b7
        ;   Label: LAB_004424b7
    RET                                 ; 004424b8

