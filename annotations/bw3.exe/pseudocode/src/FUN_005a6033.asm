; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a6033(int param_1)
;
;
; XREF[2]:
;   FUN_005a6007 at 005a6020
;   FUN_005ad1e0 at 005ad23f
;
; *****************************************************************************

section .text

    PUSH EAX                            ; 005a6033
        ;   Label: FUN_005a6033
    PUSH EBX                            ; 005a6034
    MOV EAX,dword ptr [ESP + 0xc]       ; 005a6035
    MOV EBX,0xfffffffc                  ; 005a6039
    MOV dword ptr [ESP + EBX*0x1],EBX   ; 005a603e
        ;   Label: LAB_005a603e
    SUB EBX,0x1000                      ; 005a6041
    SUB EAX,0x1000                      ; 005a6047
    JG 0x005a603e                       ; 005a604c
        ;   XREF to: 005a603e (CONDITIONAL_JUMP)  ; LAB_005a603e
    POP EBX                             ; 005a604e
    POP EAX                             ; 005a604f
    RET 0x4                             ; 005a6050

