; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476820(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005da690
;   TerminatedCString s_Bip01_Head_005da69d
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00476820
        ;   Label: FUN_00476820
    PUSH ESI                            ; 00476821
    MOV ESI,dword ptr [ESP + 0xc]       ; 00476822
    LEA EBX,[ESI + 0x158]               ; 00476826
    PUSH EBX                            ; 0047682c
    CALL FUN_00569b20                   ; 0047682d
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 00476832
    PUSH EBX                            ; 00476835
    CALL FUN_00569f30                   ; 00476836
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0047683b
    PUSH 0x1                            ; 0047683e
    PUSH 0x5da690                       ; 00476840 | = "Bip01 Spine1"
    PUSH EAX                            ; 00476845
    MOV EBX,EAX                         ; 00476846
    CALL FUN_005634f0                   ; 00476848
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0047684d
    PUSH 0x1                            ; 00476850
    PUSH 0x5da69d                       ; 00476852 | = "Bip01 Head"
    PUSH EBX                            ; 00476857
    MOV dword ptr [ESI + 0xc268],EAX    ; 00476858
    CALL FUN_005634f0                   ; 0047685e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00476863
    PUSH ESI                            ; 00476866
    MOV dword ptr [ESI + 0xc26c],EAX    ; 00476867
    CALL FUN_004a0510                   ; 0047686d
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 00476872
    POP ESI                             ; 00476875
    POP EBX                             ; 00476876
    RET                                 ; 00476877

