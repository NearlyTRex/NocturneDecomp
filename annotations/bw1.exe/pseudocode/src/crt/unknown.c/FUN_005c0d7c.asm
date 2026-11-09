; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c0d7c(int param_1)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005c0d8c at 005c0de8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005c0d7c
        ;   Label: crt_unknown.c_FUN_005c0d7c
    ADD EAX,0x30                        ; 005c0d80
    CMP EAX,0x39                        ; 005c0d83
    JLE 0x005c0d8b                      ; 005c0d86
        ;   XREF to: 005c0d8b (CONDITIONAL_JUMP)  ; LAB_005c0d8b
    ADD EAX,0x27                        ; 005c0d88
    RET                                 ; 005c0d8b
        ;   Label: LAB_005c0d8b

