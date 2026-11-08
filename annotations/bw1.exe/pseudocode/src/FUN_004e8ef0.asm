; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_004e8ef0(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_COMBATMODEHARD_005e43eb
;   undefined4 DAT_005e43fb
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061d95c
;   undefined4 DAT_01ccf460
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004e8ef0
        ;   Label: FUN_004e8ef0
    SUB ESP,0xc                         ; 004e8ef1
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e8ef4
    CMP dword ptr [EAX + 0x56c],0x6     ; 004e8ef8
    JNZ 0x004e8f0e                      ; 004e8eff
        ;   XREF to: 004e8f0e (CONDITIONAL_JUMP)  ; LAB_004e8f0e
    XOR ESI,ESI                         ; 004e8f01
    MOV dword ptr [ESP],ESI             ; 004e8f03
    MOV EAX,dword ptr [ESP]             ; 004e8f06
    ADD ESP,0xc                         ; 004e8f09
    POP ESI                             ; 004e8f0c
    RET                                 ; 004e8f0d
    PUSH EBX                            ; 004e8f0e
        ;   Label: LAB_004e8f0e
    PUSH 0x5e43eb                       ; 004e8f0f | = "COMBATMODEHARD"
    MOV ECX,dword ptr [0x0061b4d0]      ; 004e8f14 | DAT_0061b4d0
    PUSH ECX                            ; 004e8f1a
    CALL FUN_004a6c30                   ; 004e8f1b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004e8f20
    PUSH 0x41c80000                     ; 004e8f23
    PUSH 0x41700000                     ; 004e8f28
    CALL FUN_0040cc00                   ; 004e8f2d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x14],EAX      ; 004e8f32
    MOV EAX,[0x0061d95c]                ; 004e8f36 | DAT_0061d95c
    FLD float ptr [ESP + 0x14]          ; 004e8f3b
    ADD ESP,0x8                         ; 004e8f3f
    MOV EBX,dword ptr [EAX + 0xd0]      ; 004e8f42 | DAT_01ccf460
    FSTP float ptr [ESP + 0x8]          ; 004e8f48
    CMP EBX,0x3                         ; 004e8f4c
    JNZ 0x004e8f5f                      ; 004e8f4f
        ;   XREF to: 004e8f5f (CONDITIONAL_JUMP)  ; LAB_004e8f5f
    FLD float ptr [ESP + 0x8]           ; 004e8f51
    FMUL float ptr [0x005e43fb]         ; 004e8f55 | DAT_005e43fb
    FSTP float ptr [ESP + 0x8]          ; 004e8f5b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e8f5f
        ;   Label: LAB_004e8f5f
    MOV dword ptr [ESP + 0x4],EAX       ; 004e8f63
    POP EBX                             ; 004e8f67
    MOV EAX,dword ptr [ESP]             ; 004e8f68
    ADD ESP,0xc                         ; 004e8f6b
    POP ESI                             ; 004e8f6e
    RET                                 ; 004e8f6f

