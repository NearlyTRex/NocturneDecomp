; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00571d30(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00503620
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571d30
        ;   Label: FUN_00571d30
    MOV ECX,dword ptr [EDX + 0x281c]    ; 00571d34
    TEST ECX,ECX                        ; 00571d3a
    JNZ 0x00571d5a                      ; 00571d3c
        ;   XREF to: 00571d5a (CONDITIONAL_JUMP)  ; LAB_00571d5a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00571d3e
    FLD float ptr [EAX + 0x4]           ; 00571d42
    FSUBR float ptr [EDX + 0x25a8]      ; 00571d45
    FST float ptr [EDX + 0x25a8]        ; 00571d4b
    FLDZ                                ; 00571d51
    FCOMPP                              ; 00571d53
    FNSTSW AX                           ; 00571d55
    SAHF                                ; 00571d57
    JNC 0x00571d5b                      ; 00571d58
        ;   XREF to: 00571d5b (CONDITIONAL_JUMP)  ; LAB_00571d5b
    RET                                 ; 00571d5a
        ;   Label: LAB_00571d5a
    PUSH 0x1                            ; 00571d5b
        ;   Label: LAB_00571d5b
    PUSH 0x3                            ; 00571d5d
    ADD EDX,0x2b4                       ; 00571d5f
    PUSH EDX                            ; 00571d65
    MOV dword ptr [EDX + 0x22f4],ECX    ; 00571d66
    CALL FUN_00503620                   ; 00571d6c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00571d71
    RET                                 ; 00571d74

