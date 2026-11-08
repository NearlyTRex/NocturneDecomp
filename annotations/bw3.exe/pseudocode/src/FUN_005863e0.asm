; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005863e0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_Spine1_005d8210
;   TerminatedCString s_Bip01_Head_005d821d
;   TerminatedCString s_Bip01_Pelvis_005d8228
;   TerminatedCString s_Bip01_Spine_005d8235
;   TerminatedCString s_Bip01_Spine1_005d8241
;   TerminatedCString s_Bip01_Spine2_005d824e
;   TerminatedCString s_Bip01_Head_005d825b
;
; Called Functions:
;   FUN_00489110
;   FUN_00548090
;   FUN_0054e6b0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005863e0
        ;   Label: FUN_005863e0
    PUSH ESI                            ; 005863e1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005863e2
    LEA EBX,[ESI + 0x158]               ; 005863e6
    PUSH EBX                            ; 005863ec
    CALL FUN_0054e6b0                   ; 005863ed
        ;   XREF to: 0054e6b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054e6b0()
    ADD ESP,0x4                         ; 005863f2
    PUSH EBX                            ; 005863f5
    CALL FUN_0054eac0                   ; 005863f6
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    ADD ESP,0x4                         ; 005863fb
    PUSH 0x1                            ; 005863fe
    PUSH 0x5d8210                       ; 00586400 | = "Bip01 Spine1"
    PUSH EAX                            ; 00586405
    MOV EBX,EAX                         ; 00586406
    CALL FUN_00548090                   ; 00586408
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0058640d
    PUSH 0x1                            ; 00586410
    PUSH 0x5d821d                       ; 00586412 | = "Bip01 Head"
    PUSH EBX                            ; 00586417
    MOV dword ptr [ESI + 0xd054],EAX    ; 00586418
    CALL FUN_00548090                   ; 0058641e
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00586423
    PUSH 0x1                            ; 00586426
    PUSH 0x5d8228                       ; 00586428 | = "Bip01 Pelvis"
    PUSH EBX                            ; 0058642d
    MOV dword ptr [ESI + 0xd058],EAX    ; 0058642e
    CALL FUN_00548090                   ; 00586434
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00586439
    PUSH 0x1                            ; 0058643c
    PUSH 0x5d8235                       ; 0058643e | = "Bip01 Spine"
    PUSH EBX                            ; 00586443
    MOV dword ptr [ESI + 0xd05c],EAX    ; 00586444
    CALL FUN_00548090                   ; 0058644a
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0058644f
    PUSH 0x1                            ; 00586452
    PUSH 0x5d8241                       ; 00586454 | = "Bip01 Spine1"
    PUSH EBX                            ; 00586459
    MOV dword ptr [ESI + 0xd060],EAX    ; 0058645a
    CALL FUN_00548090                   ; 00586460
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00586465
    PUSH 0x1                            ; 00586468
    PUSH 0x5d824e                       ; 0058646a | = "Bip01 Spine2"
    PUSH EBX                            ; 0058646f
    MOV dword ptr [ESI + 0xd064],EAX    ; 00586470
    CALL FUN_00548090                   ; 00586476
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 0058647b
    PUSH 0x1                            ; 0058647e
    PUSH 0x5d825b                       ; 00586480 | = "Bip01 Head"
    PUSH EBX                            ; 00586485
    MOV dword ptr [ESI + 0xd068],EAX    ; 00586486
    CALL FUN_00548090                   ; 0058648c
        ;   XREF to: 00548090 (UNCONDITIONAL_CALL)  ; undefined FUN_00548090()
    ADD ESP,0xc                         ; 00586491
    PUSH ESI                            ; 00586494
    MOV dword ptr [ESI + 0xd06c],EAX    ; 00586495
    CALL FUN_00489110                   ; 0058649b
        ;   XREF to: 00489110 (UNCONDITIONAL_CALL)  ; undefined FUN_00489110()
    ADD ESP,0x4                         ; 005864a0
    POP ESI                             ; 005864a3
    POP EBX                             ; 005864a4
    RET                                 ; 005864a5

