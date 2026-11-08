; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a6760(int param_1)
;
;
; Called Functions:
;   FUN_0059f980
;   FUN_005a8290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6760
        ;   Label: FUN_005a6760
    PUSH ESI                            ; 005a6761
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a6762
    PUSH ESI                            ; 005a6766
    CALL FUN_0059f980                   ; 005a6767
        ;   XREF to: 0059f980 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f980()
    ADD ESP,0x4                         ; 005a676c
    MOV EBX,EAX                         ; 005a676f
    LEA EAX,[ESI + 0x154]               ; 005a6771
    PUSH EAX                            ; 005a6777
    CALL FUN_005a8290                   ; 005a6778
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005a677d
    LEA EAX,[ESI + 0x198]               ; 005a6780
    PUSH EAX                            ; 005a6786
    CALL FUN_005a8290                   ; 005a6787
        ;   XREF to: 005a8290 (UNCONDITIONAL_CALL)  ; undefined FUN_005a8290()
    ADD ESP,0x4                         ; 005a678c
    MOV EAX,EBX                         ; 005a678f
    POP ESI                             ; 005a6791
    POP EBX                             ; 005a6792
    RET                                 ; 005a6793

