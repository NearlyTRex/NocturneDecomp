; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab978(int param_1,uint param_2)
;
;
; XREF[4]:
;   FUN_005a9cf0 at 005a9d39
;   FUN_005a9d80 at 005a9e12
;   FUN_005aa0f0 at 005aa31f
;   FUN_005b0a70 at 005b0b8a
;
; Referenced Globals:
;   undefined4 DAT_00607b88
;   void* PTR_DAT_00607bd8 = 00607b88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab978
        ;   Label: FUN_005ab978
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ab979
    MOV EAX,dword ptr [ESP + 0x8]       ; 005ab97d
    SHL EAX,0x2                         ; 005ab981
    TEST EDX,EDX                        ; 005ab984
    JZ 0x005ab996                       ; 005ab986
        ;   XREF to: 005ab996 (CONDITIONAL_JUMP)  ; LAB_005ab996
    MOV EBX,dword ptr [0x00607bd8]      ; 005ab988 | PTR_DAT_00607bd8
    OR DH,0x40                          ; 005ab98e
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005ab991 | DAT_00607b88
    POP EBX                             ; 005ab994
    RET                                 ; 005ab995
    MOV EBX,dword ptr [0x00607bd8]      ; 005ab996 | PTR_DAT_00607bd8
        ;   Label: LAB_005ab996
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005ab99c | DAT_00607b88
    POP EBX                             ; 005ab99f
    RET                                 ; 005ab9a0

