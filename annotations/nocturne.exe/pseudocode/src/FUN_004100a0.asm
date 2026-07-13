; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004100a0(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004100a0
        ;   Label: FUN_004100a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004100a1
    CMP dword ptr [EBX + 0x2cc],0x0     ; 004100a5
    JNZ 0x004100b2                      ; 004100ac
        ;   XREF to: 004100b2 (CONDITIONAL_JUMP)  ; LAB_004100b2
    XOR EAX,EAX                         ; 004100ae
    POP EBX                             ; 004100b0
    RET                                 ; 004100b1
    LEA EAX,[EBX + 0x150]               ; 004100b2
        ;   Label: LAB_004100b2
    PUSH EAX                            ; 004100b8
    CALL FUN_00454530                   ; 004100b9
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV ECX,dword ptr [EAX + 0x358]     ; 004100be
    ADD ESP,0x4                         ; 004100c4
    TEST ECX,ECX                        ; 004100c7
    JZ 0x004100d8                       ; 004100c9
        ;   XREF to: 004100d8 (CONDITIONAL_JUMP)  ; LAB_004100d8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004100cb
    ADD EBX,0x150                       ; 004100cf
    MOV dword ptr [EAX + 0x24],EBX      ; 004100d5
    MOV EAX,0x1                         ; 004100d8
        ;   Label: LAB_004100d8
    POP EBX                             ; 004100dd
    RET                                 ; 004100de

