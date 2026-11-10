; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005b1e90(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005b1720 at 005b1775
;
; Called Functions:
;   crt_unknown.c_FUN_005b2080
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1e90
        ;   Label: crt_unknown.c_FUN_005b1e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b1e91
    PUSH EBX                            ; 005b1e95
    CALL crt_unknown.c_FUN_005b2080     ; 005b1e96
        ;   XREF to: 005b2080 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b2080()
    ADD ESP,0x4                         ; 005b1e9b
    TEST EAX,EAX                        ; 005b1e9e
    JZ 0x005b1ea7                       ; 005b1ea0
        ;   XREF to: 005b1ea7 (CONDITIONAL_JUMP)  ; LAB_005b1ea7
    LEA EAX,[EBX + -0x21]               ; 005b1ea2
    POP EBX                             ; 005b1ea5
    RET                                 ; 005b1ea6
    MOV EAX,EBX                         ; 005b1ea7
        ;   Label: LAB_005b1ea7
    POP EBX                             ; 005b1ea9
    RET                                 ; 005b1eaa

