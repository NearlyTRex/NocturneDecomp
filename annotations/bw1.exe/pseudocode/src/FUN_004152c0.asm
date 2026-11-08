; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004152c0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Bip01_L_Foot_005d3c9b
;   TerminatedCString s_Bip01_R_Foot_005d3ca8
;   undefined4 DAT_007c3908
;   undefined4 DAT_007c390c
;
; Called Functions:
;   FUN_0042c510
;   FUN_005634f0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004152c0
        ;   Label: FUN_004152c0
    PUSH ESI                            ; 004152c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004152c2
    PUSH EBX                            ; 004152c6
    CALL FUN_0042c510                   ; 004152c7
        ;   XREF to: 0042c510 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c510()
    ADD ESP,0x4                         ; 004152cc
    LEA EAX,[EBX + 0x158]               ; 004152cf
    PUSH EAX                            ; 004152d5
    CALL FUN_00569f30                   ; 004152d6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 004152db
    PUSH 0x0                            ; 004152de
    PUSH 0x5d3c9b                       ; 004152e0 | = "Bip01 L Foot"
    PUSH EAX                            ; 004152e5
    MOV ESI,EAX                         ; 004152e6
    CALL FUN_005634f0                   ; 004152e8
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    ADD ESP,0xc                         ; 004152ed
    PUSH 0x0                            ; 004152f0
    PUSH 0x5d3ca8                       ; 004152f2 | = "Bip01 R Foot"
    PUSH ESI                            ; 004152f7
    MOV [0x007c3908],EAX                ; 004152f8 | DAT_007c3908
    CALL FUN_005634f0                   ; 004152fd
        ;   XREF to: 005634f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005634f0()
    MOV ESI,dword ptr [0x007c3908]      ; 00415302 | DAT_007c3908
    ADD ESP,0xc                         ; 00415308
    MOV dword ptr [EBX + 0x2620],EAX    ; 0041530b
    MOV [0x007c390c],EAX                ; 00415311 | DAT_007c390c
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 00415316
    MOV dword ptr [EBX + 0x25a8],ESI    ; 0041531c
    TEST EDX,EDX                        ; 00415322
    JNZ 0x00415329                      ; 00415324
        ;   XREF to: 00415329 (CONDITIONAL_JUMP)  ; LAB_00415329
    POP ESI                             ; 00415326
    POP EBX                             ; 00415327
    RET                                 ; 00415328
    MOV dword ptr [EBX + 0xfc],0x1      ; 00415329
        ;   Label: LAB_00415329
    POP ESI                             ; 00415333
    POP EBX                             ; 00415334
    RET                                 ; 00415335

