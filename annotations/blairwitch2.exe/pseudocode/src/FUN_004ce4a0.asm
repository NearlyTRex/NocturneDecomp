; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ce4a0(int param_1)
;
;
; XREF[10]:
;   FUN_0040f780 at 0040f787
;   FUN_00435680 at 00435687
;   FUN_00450620 at 0045062d
;   FUN_004ad3e0 at 004ad3e8
;   FUN_004cc7d0 at 004cc7d7
;   FUN_004d4a20 at 004d4a27
;   FUN_00501480 at 00501509
;   FUN_0051ea60 at 0051ea67
;   FUN_00562b90 at 00562b9c
;   FUN_00570250 at 00570281
;
; Called Functions:
;   FUN_00422930
;   FUN_004dc850
;   FUN_00547480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ce4a0
        ;   Label: FUN_004ce4a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ce4a1
    LEA EAX,[EBX + 0x2b4]               ; 004ce4a5
    PUSH EAX                            ; 004ce4ab
    CALL FUN_00547480                   ; 004ce4ac
        ;   XREF to: 00547480 (UNCONDITIONAL_CALL)  ; undefined FUN_00547480()
    ADD ESP,0x4                         ; 004ce4b1
    PUSH EBX                            ; 004ce4b4
    CALL FUN_00422930                   ; 004ce4b5
        ;   XREF to: 00422930 (UNCONDITIONAL_CALL)  ; undefined FUN_00422930()
    ADD ESP,0x4                         ; 004ce4ba
    LEA EAX,[EBX + 0x2437c]             ; 004ce4bd
    PUSH EAX                            ; 004ce4c3
    MOV dword ptr [EBX + 0x10a60],0x0   ; 004ce4c4
    CALL FUN_004dc850                   ; 004ce4ce
        ;   XREF to: 004dc850 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc850()
    MOV dword ptr [EBX + 0x255f0],0x0   ; 004ce4d3
    MOV dword ptr [EBX + 0x255f4],0x0   ; 004ce4dd
    MOV dword ptr [EBX + 0x255f8],0x0   ; 004ce4e7
    ADD ESP,0x4                         ; 004ce4f1
    MOV dword ptr [EBX + 0x25600],0x7149f2ca ; 004ce4f4
    POP EBX                             ; 004ce4fe
    RET                                 ; 004ce4ff

