; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040bab0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[37]:
;   FUN_0040ff80 at 0040ffbd
;   FUN_00419070 at 004190d1
;   FUN_00428650 at 0042868d
;   FUN_00443ca0 at 00443ce7
;   FUN_004456b0 at 004456fd
;   FUN_004583c0 at 00458427
;   FUN_00463460 at 004634ad
;   FUN_004c5e50 at 004c5e8d
;   FUN_004c8cc0 at 004c8d47
;   FUN_004d27b0 at 004d27ea
;   ... and 27 more
;
; Referenced Globals:
;   TerminatedCString s_motion_state_info_openin_005b5b00
;   TerminatedCString s_motion_state_info_closin_005b5b20
;   TerminatedCString s_s_s_005b5b40
;   undefined4 DAT_005b5b4b
;   undefined1 DAT_005f0990
;   undefined4 DAT_007df9b4
;   undefined4 DAT_007df9b8
;
; Called Functions:
;   FUN_0040afa0
;   FUN_0040b2d0
;   FUN_004fcc90
;   FUN_004fcd30
;   FUN_005a3140
;   FUN_005a32b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040bab0
        ;   Label: FUN_0040bab0
    PUSH ESI                            ; 0040bab1
    PUSH EBP                            ; 0040bab2
    MOV EBX,dword ptr [ESP + 0x14]      ; 0040bab3
    CMP dword ptr [0x007df9b8],0x1      ; 0040bab7 | DAT_007df9b8
    JNZ 0x0040bb36                      ; 0040babe
        ;   XREF to: 0040bb36 (CONDITIONAL_JUMP)  ; LAB_0040bb36
    MOV EBP,dword ptr [0x007df9b4]      ; 0040bac4 | DAT_007df9b4
        ;   Label: LAB_0040bac4
    PUSH EBP                            ; 0040baca
    CALL FUN_005a32b0                   ; 0040bacb
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bad0
    MOV ESI,EAX                         ; 0040bad3
    TEST EAX,EAX                        ; 0040bad5
    JL 0x0040bb0f                       ; 0040bad7
        ;   XREF to: 0040bb0f (CONDITIONAL_JUMP)  ; LAB_0040bb0f
    CMP ESI,0xa                         ; 0040bad9
        ;   Label: LAB_0040bad9
    JNZ 0x0040bac4                      ; 0040badc
        ;   XREF to: 0040bac4 (CONDITIONAL_JUMP)  ; LAB_0040bac4
    MOV EAX,[0x007df9b4]                ; 0040bade | DAT_007df9b4
    PUSH EAX                            ; 0040bae3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0040bae4
    PUSH EDX                            ; 0040bae8
    CALL FUN_004fcc90                   ; 0040bae9
        ;   XREF to: 004fcc90 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcc90()
    ADD ESP,0x8                         ; 0040baee
    MOV ECX,dword ptr [0x007df9b4]      ; 0040baf1 | DAT_007df9b4
        ;   Label: LAB_0040baf1
    PUSH ECX                            ; 0040baf7
    CALL FUN_005a32b0                   ; 0040baf8
        ;   XREF to: 005a32b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a32b0()
    ADD ESP,0x4                         ; 0040bafd
    MOV ESI,EAX                         ; 0040bb00
    TEST EAX,EAX                        ; 0040bb02
    JL 0x0040bb1f                       ; 0040bb04
        ;   XREF to: 0040bb1f (CONDITIONAL_JUMP)  ; LAB_0040bb1f
    CMP ESI,0xa                         ; 0040bb06
    JNZ 0x0040baf1                      ; 0040bb09
        ;   XREF to: 0040baf1 (CONDITIONAL_JUMP)  ; LAB_0040baf1
    POP EBP                             ; 0040bb0b
    POP ESI                             ; 0040bb0c
    POP EBX                             ; 0040bb0d
    RET                                 ; 0040bb0e
    PUSH EBX                            ; 0040bb0f
        ;   Label: LAB_0040bb0f
    PUSH 0x5b5b00                       ; 0040bb10 | = "motion state info opening brace"
    CALL FUN_0040b2d0                   ; 0040bb15
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040bb1a
    JMP 0x0040bad9                      ; 0040bb1d
        ;   XREF to: 0040bad9 (UNCONDITIONAL_JUMP)  ; LAB_0040bad9
    PUSH EBX                            ; 0040bb1f
        ;   Label: LAB_0040bb1f
    PUSH 0x5b5b20                       ; 0040bb20 | = "motion state info closing brace"
    CALL FUN_0040b2d0                   ; 0040bb25
        ;   XREF to: 0040b2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b2d0()
    ADD ESP,0x8                         ; 0040bb2a
    CMP ESI,0xa                         ; 0040bb2d
    JNZ 0x0040baf1                      ; 0040bb30
        ;   XREF to: 0040baf1 (CONDITIONAL_JUMP)  ; LAB_0040baf1
    POP EBP                             ; 0040bb32
    POP ESI                             ; 0040bb33
    POP EBX                             ; 0040bb34
    RET                                 ; 0040bb35
    PUSH EDI                            ; 0040bb36
        ;   Label: LAB_0040bb36
    PUSH EBX                            ; 0040bb37
    PUSH 0x5f0990                       ; 0040bb38 | DAT_005f0990
    PUSH 0x5b5b40                       ; 0040bb3d | = "%s{ // %s\n"
    MOV ECX,dword ptr [0x007df9b4]      ; 0040bb42 | DAT_007df9b4
    PUSH ECX                            ; 0040bb48
    CALL FUN_005a3140                   ; 0040bb49
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0x10                        ; 0040bb4e
    PUSH 0x1                            ; 0040bb51
    CALL FUN_0040afa0                   ; 0040bb53
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040bb58
    PUSH 0x5f0990                       ; 0040bb5b | DAT_005f0990
    MOV EBX,dword ptr [0x007df9b4]      ; 0040bb60 | DAT_007df9b4
    PUSH EBX                            ; 0040bb66
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0040bb67
    PUSH ESI                            ; 0040bb6b
    CALL FUN_004fcd30                   ; 0040bb6c
        ;   XREF to: 004fcd30 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcd30()
    ADD ESP,0xc                         ; 0040bb71
    PUSH -0x1                           ; 0040bb74
    CALL FUN_0040afa0                   ; 0040bb76
        ;   XREF to: 0040afa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040afa0()
    ADD ESP,0x4                         ; 0040bb7b
    PUSH 0x5f0990                       ; 0040bb7e | DAT_005f0990
    PUSH 0x5b5b4b                       ; 0040bb83 | DAT_005b5b4b
    MOV EDI,dword ptr [0x007df9b4]      ; 0040bb88 | DAT_007df9b4
    PUSH EDI                            ; 0040bb8e
    CALL FUN_005a3140                   ; 0040bb8f
        ;   XREF to: 005a3140 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3140()
    ADD ESP,0xc                         ; 0040bb94
    POP EDI                             ; 0040bb97
    POP EBP                             ; 0040bb98
    POP ESI                             ; 0040bb99
    POP EBX                             ; 0040bb9a
    RET                                 ; 0040bb9b

