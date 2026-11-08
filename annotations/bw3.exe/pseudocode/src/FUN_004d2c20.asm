; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d2c20(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_stopGettingGrabbed_005c4cc5
;   TerminatedCString s_GETGRABBED_005c4cef
;   TerminatedCString s_STAND_005c4cfa
;   void* PTR_DAT_005f1690 = 007f7ea4
;   undefined4 DAT_0078a123
;   undefined4 DAT_007f7ea4
;
; Called Functions:
;   FUN_004307c0
;   FUN_00441ff0
;   FUN_004fba50
;   FUN_004fc160
;   FUN_004fc310
;   FUN_004fc350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2c20
        ;   Label: FUN_004d2c20
    PUSH ESI                            ; 004d2c21
    SUB ESP,0x4                         ; 004d2c22
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d2c25
    MOV EDX,dword ptr [EBX + 0x26fc]    ; 004d2c29
    TEST EDX,EDX                        ; 004d2c2f
    JNZ 0x004d2cac                      ; 004d2c31
        ;   XREF to: 004d2cac (CONDITIONAL_JUMP)  ; LAB_004d2cac
    CMP dword ptr [EBX + 0x68],0x78a123 ; 004d2c37 | DAT_0078a123
        ;   Label: LAB_004d2c37
    JNZ 0x004d2c9d                      ; 004d2c3e
        ;   XREF to: 004d2c9d (CONDITIONAL_JUMP)  ; LAB_004d2c9d
    LEA EAX,[EBX + 0x158]               ; 004d2c40
    CMP dword ptr [EAX + 0x23a0],0x0    ; 004d2c46
    JZ 0x004d2c9d                       ; 004d2c4d
        ;   XREF to: 004d2c9d (CONDITIONAL_JUMP)  ; LAB_004d2c9d
    PUSH 0x0                            ; 004d2c4f
    PUSH 0x5c4cef                       ; 004d2c51 | = "GETGRABBED"
    LEA ESI,[EBX + 0x158]               ; 004d2c56
    PUSH ESI                            ; 004d2c5c
    CALL FUN_004fc310                   ; 004d2c5d
        ;   XREF to: 004fc310 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc310()
    ADD ESP,0x4                         ; 004d2c62
    PUSH EAX                            ; 004d2c65
    CALL FUN_004fba50                   ; 004d2c66
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 004d2c6b
    TEST EAX,EAX                        ; 004d2c6e
    JL 0x004d2c9d                       ; 004d2c70
        ;   XREF to: 004d2c9d (CONDITIONAL_JUMP)  ; LAB_004d2c9d
    PUSH EAX                            ; 004d2c72
    PUSH ESI                            ; 004d2c73
    CALL FUN_004fc350                   ; 004d2c74
        ;   XREF to: 004fc350 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc350()
    MOV dword ptr [ESP + 0x8],EAX       ; 004d2c79
    FLD float ptr [ESP + 0x8]           ; 004d2c7d
    FLDZ                                ; 004d2c81
    ADD ESP,0x8                         ; 004d2c83
    FCOMPP                              ; 004d2c86
    FNSTSW AX                           ; 004d2c88
    SAHF                                ; 004d2c8a
    JNC 0x004d2c9d                      ; 004d2c8b
        ;   XREF to: 004d2c9d (CONDITIONAL_JUMP)  ; LAB_004d2c9d
    PUSH 0x1                            ; 004d2c8d
    PUSH 0x5c4cfa                       ; 004d2c8f | = "STAND"
    PUSH ESI                            ; 004d2c94
    CALL FUN_004fc160                   ; 004d2c95
        ;   XREF to: 004fc160 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc160()
    ADD ESP,0xc                         ; 004d2c9a
    PUSH EBX                            ; 004d2c9d
        ;   Label: LAB_004d2c9d
    CALL FUN_004307c0                   ; 004d2c9e
        ;   XREF to: 004307c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004307c0()
    ADD ESP,0x4                         ; 004d2ca3
    ADD ESP,0x4                         ; 004d2ca6
    POP ESI                             ; 004d2ca9
    POP EBX                             ; 004d2caa
    RET                                 ; 004d2cab
    PUSH EDI                            ; 004d2cac
        ;   Label: LAB_004d2cac
    MOV ECX,dword ptr [EBX + 0x2700]    ; 004d2cad
    PUSH ECX                            ; 004d2cb3
    PUSH EDX                            ; 004d2cb4
    PUSH 0x5c4cc5                       ; 004d2cb5 | = "CHero::stopGettingGrabbed by %s, type..."
    MOV EDI,dword ptr [0x005f1690]      ; 004d2cba | PTR_DAT_005f1690
    PUSH EDI                            ; 004d2cc0 | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 004d2cc1
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0x10                        ; 004d2cc6
    POP EDI                             ; 004d2cc9
    JMP 0x004d2c37                      ; 004d2cca
        ;   XREF to: 004d2c37 (UNCONDITIONAL_JUMP)  ; LAB_004d2c37

