; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005947b0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Hand_005f7666
;   TerminatedCString s_Bip01_R_Hand_005f7673
;
; Called Functions:
;   FUN_00531720
;   FUN_005634f0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005947b0
        ;   Label: FUN_005947b0
    PUSH ESI                            ; 005947b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005947b2
    PUSH EBX                            ; 005947b6
    CALL FUN_00531720                   ; 005947b7
        ;   XREF to: 00531720 (UNCONDITIONAL_CALL)  ; undefined FUN_00531720()
    ADD ESP,0x4                         ; 005947bc
    LEA EAX,[EBX + 0x158]               ; 005947bf
    PUSH EAX                            ; 005947c5
    CALL FUN_00569f30                   ; 005947c6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 005947cb
    PUSH 0x1                            ; 005947ce
    PUSH 0x5f7666                       ; 005947d0 | = "Bip01 L Hand"
    PUSH EAX                            ; 005947d5
    MOV ESI,EAX                         ; 005947d6
    CALL FUN_005634f0                   ; 005947d8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 005947dd
    PUSH 0x1                            ; 005947e0
    PUSH 0x5f7673                       ; 005947e2 | = "Bip01 R Hand"
    PUSH ESI                            ; 005947e7
    MOV dword ptr [EBX + 0x1fab8],EAX   ; 005947e8
    CALL FUN_005634f0                   ; 005947ee
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    MOV dword ptr [EBX + 0x25ac],0x0    ; 005947f3
    MOV dword ptr [EBX + 0x1fabc],EAX   ; 005947fd
    MOV EAX,dword ptr [EBX + 0x1fab8]   ; 00594803
    ADD ESP,0xc                         ; 00594809
    MOV dword ptr [EBX + 0x25a8],EAX    ; 0059480c
    POP ESI                             ; 00594812
    POP EBX                             ; 00594813
    RET                                 ; 00594814

