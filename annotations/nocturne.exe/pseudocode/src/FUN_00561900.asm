; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00561900(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc9454
;
; Called Functions:
;   FUN_00426440
;   FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00561900
        ;   Label: FUN_00561900
    ADD EAX,0x150                       ; 00561904
    PUSH EAX                            ; 00561909
    CALL FUN_004e1660                   ; 0056190a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056190f
    ADD ESP,0x4                         ; 00561912
    CMP EAX,0xe                         ; 00561915
    JNZ 0x00561928                      ; 00561918
        ;   XREF to: 00561928 (CONDITIONAL_JUMP)  ; LAB_00561928
    MOV EAX,[0x005baf90]                ; 0056191a | DAT_005baf90
    CMP dword ptr [EAX + 0x4],0x0       ; 0056191f | DAT_01cc9454
    JNZ 0x00561928                      ; 00561923
        ;   XREF to: 00561928 (CONDITIONAL_JUMP)  ; LAB_00561928
    XOR EAX,EAX                         ; 00561925
    RET                                 ; 00561927
    MOV ECX,dword ptr [ESP + 0x4]       ; 00561928
        ;   Label: LAB_00561928
    PUSH ECX                            ; 0056192c
    CALL FUN_00426440                   ; 0056192d
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined FUN_00426440()
    ADD ESP,0x4                         ; 00561932
    RET                                 ; 00561935

