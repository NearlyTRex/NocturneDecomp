; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005990d0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_bipHand_005f7f61
;   TerminatedCString s_bipArm_2_005f7f69
;   TerminatedCString s_bipArm_1_005f7f72
;   undefined4 DAT_02c8ad48
;   undefined4 DAT_02c8ad4c
;   undefined4 DAT_02c8ad50
;   undefined4 DAT_02c8ad54
;
; Called Functions:
;   FUN_004a0510
;   FUN_005634f0
;   FUN_00569b20
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005990d0
        ;   Label: FUN_005990d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005990d1
    ADD EBX,0x158                       ; 005990d5
    PUSH EBX                            ; 005990db
    CALL FUN_00569b20                   ; 005990dc
        ;   XREF to: 00569b20 (UNCONDITIONAL_CALL)  ; undefined FUN_00569b20()
    ADD ESP,0x4                         ; 005990e1
    MOV EDX,dword ptr [ESP + 0x8]       ; 005990e4
    PUSH EDX                            ; 005990e8
    CALL FUN_004a0510                   ; 005990e9
        ;   XREF to: 004a0510 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0510()
    ADD ESP,0x4                         ; 005990ee
    PUSH EBX                            ; 005990f1
    CALL FUN_00569f30                   ; 005990f2
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 005990f7
    PUSH 0x1                            ; 005990fa
    PUSH 0x5f7f61                       ; 005990fc | = "bipHand"
    PUSH EAX                            ; 00599101
    MOV EBX,EAX                         ; 00599102
    CALL FUN_005634f0                   ; 00599104
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00599109
    PUSH 0x1                            ; 0059910c
    PUSH 0x5f7f69                       ; 0059910e | = "bipArm 2"
    PUSH EBX                            ; 00599113
    MOV [0x02c8ad48],EAX                ; 00599114 | DAT_02c8ad48
    CALL FUN_005634f0                   ; 00599119
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 0059911e
    PUSH 0x1                            ; 00599121
    PUSH 0x5f7f72                       ; 00599123 | = "bipArm 1"
    PUSH EBX                            ; 00599128
    MOV [0x02c8ad4c],EAX                ; 00599129 | DAT_02c8ad4c
    CALL FUN_005634f0                   ; 0059912e
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 00599133
    XOR ECX,ECX                         ; 00599136
    MOV [0x02c8ad50],EAX                ; 00599138 | DAT_02c8ad50
    MOV dword ptr [0x02c8ad54],ECX      ; 0059913d | DAT_02c8ad54
    POP EBX                             ; 00599143
    RET                                 ; 00599144

