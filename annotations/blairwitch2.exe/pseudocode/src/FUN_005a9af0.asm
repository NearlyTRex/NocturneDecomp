; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a9af0(int param_1,uint param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ghostchilslap0_wav_005f09a7
;   TerminatedCString s_ghostchilddeath0_wav_005f09bb
;   TerminatedCString s_robinscream0_wav_005f09d1
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_0055ae50
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9af0
        ;   Label: FUN_005a9af0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005a9af4
    LEA EAX,[EDX + 0x20]                ; 005a9af8
    CMP ECX,0x2261                      ; 005a9afb
    JNC 0x005a9b53                      ; 005a9b01
        ;   XREF to: 005a9b53 (CONDITIONAL_JUMP)  ; LAB_005a9b53
    CMP ECX,0x2260                      ; 005a9b03
    JZ 0x005a9b0c                       ; 005a9b09
        ;   XREF to: 005a9b0c (CONDITIONAL_JUMP)  ; LAB_005a9b0c
    RET                                 ; 005a9b0b
    PUSH EBX                            ; 005a9b0c
        ;   Label: LAB_005a9b0c
    PUSH EAX                            ; 005a9b0d
    PUSH 0x5f09a7                       ; 005a9b0e | = "ghostchilslap0?.wav"
    PUSH EDX                            ; 005a9b13
    MOV EBX,dword ptr [0x0061c068]      ; 005a9b14 | DAT_0061c068
    PUSH EBX                            ; 005a9b1a
    CALL FUN_0055ae50                   ; 005a9b1b
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a9b20
    POP EBX                             ; 005a9b23
    RET                                 ; 005a9b24
    PUSH EAX                            ; 005a9b25
        ;   Label: LAB_005a9b25
    PUSH 0x5f09bb                       ; 005a9b26 | = "ghostchilddeath0?.wav"
    PUSH EDX                            ; 005a9b2b
    MOV ECX,dword ptr [0x0061c068]      ; 005a9b2c | DAT_0061c068
    PUSH ECX                            ; 005a9b32
    CALL FUN_0055ae50                   ; 005a9b33
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a9b38
    RET                                 ; 005a9b3b
    PUSH EAX                            ; 005a9b3c
        ;   Label: LAB_005a9b3c
    PUSH 0x5f09d1                       ; 005a9b3d | = "robinscream0?.wav"
    PUSH EDX                            ; 005a9b42
    MOV EDX,dword ptr [0x0061c068]      ; 005a9b43 | DAT_0061c068
    PUSH EDX                            ; 005a9b49
    CALL FUN_0055ae50                   ; 005a9b4a
        ;   XREF to: 0055ae50 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae50()
    ADD ESP,0x10                        ; 005a9b4f
    RET                                 ; 005a9b52
    JBE 0x005a9b25                      ; 005a9b53
        ;   XREF to: 005a9b25 (CONDITIONAL_JUMP)  ; LAB_005a9b25
        ;   Label: LAB_005a9b53
    CMP ECX,0x2262                      ; 005a9b55
    JZ 0x005a9b3c                       ; 005a9b5b
        ;   XREF to: 005a9b3c (CONDITIONAL_JUMP)  ; LAB_005a9b3c
    RET                                 ; 005a9b5d

