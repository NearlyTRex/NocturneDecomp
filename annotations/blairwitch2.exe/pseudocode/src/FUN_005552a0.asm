; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005552a0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   undefined4 s_Stop_secondary_sound_buf_005e9af8+1
;   TerminatedCString s_Stop_primary_sound_buffe_005e9b15
;   undefined4 DAT_0264a5c8
;   undefined4 DAT_0264a5cc
;
; Called Functions:
;   FUN_00553270
;   FUN_005549c0
;   FUN_00554ad0
;   FUN_00554e50
;   FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005552a0
        ;   Label: FUN_005552a0
    PUSH ESI                            ; 005552a1
    SUB ESP,0x320                       ; 005552a2
    MOV EDX,dword ptr [0x0264a5cc]      ; 005552a8 | DAT_0264a5cc
    MOV ESI,0x1                         ; 005552ae
    TEST EDX,EDX                        ; 005552b3
    JNZ 0x005552f6                      ; 005552b5
        ;   XREF to: 005552f6 (CONDITIONAL_JUMP)  ; LAB_005552f6
    MOV ECX,dword ptr [0x0264a5c8]      ; 005552b7 | DAT_0264a5c8
        ;   Label: LAB_005552b7
    TEST ECX,ECX                        ; 005552bd
    JNZ 0x0055533b                      ; 005552bf
        ;   XREF to: 0055533b (CONDITIONAL_JUMP)  ; LAB_0055533b
    XOR EBX,EBX                         ; 005552c5
        ;   Label: LAB_005552c5
    PUSH EBX                            ; 005552c7
        ;   Label: LAB_005552c7
    CALL FUN_00554e50                   ; 005552c8
        ;   XREF to: 00554e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00554e50()
    ADD ESP,0x4                         ; 005552cd
    TEST EAX,EAX                        ; 005552d0
    JZ 0x00555378                       ; 005552d2
        ;   XREF to: 00555378 (CONDITIONAL_JUMP)  ; LAB_00555378
    INC EBX                             ; 005552d8
        ;   Label: LAB_005552d8
    CMP EBX,0x1f                        ; 005552d9
    JL 0x005552c7                       ; 005552dc
        ;   XREF to: 005552c7 (CONDITIONAL_JUMP)  ; LAB_005552c7
    CALL FUN_00553270                   ; 005552de
        ;   XREF to: 00553270 (UNCONDITIONAL_CALL)  ; undefined FUN_00553270()
    TEST EAX,EAX                        ; 005552e3
    JZ 0x0055537f                       ; 005552e5
        ;   XREF to: 0055537f (CONDITIONAL_JUMP)  ; LAB_0055537f
    MOV EAX,ESI                         ; 005552eb
    ADD ESP,0x320                       ; 005552ed
    POP ESI                             ; 005552f3
    POP EBX                             ; 005552f4
    RET                                 ; 005552f5
    PUSH EDX                            ; 005552f6
        ;   Label: LAB_005552f6
    MOV EBX,dword ptr [EDX]             ; 005552f7
    CALL dword ptr [EBX + 0x48]         ; 005552f9
    TEST EAX,EAX                        ; 005552fc
    JZ 0x005552b7                       ; 005552fe
        ;   XREF to: 005552b7 (CONDITIONAL_JUMP)  ; LAB_005552b7
    PUSH EAX                            ; 00555300
    CALL FUN_00554ad0                   ; 00555301
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 00555306
    PUSH EAX                            ; 00555309
    PUSH 0x5e9af9                       ; 0055530a | s_Stop_secondary_sound_buf_005e9af8+1
    PUSH 0x5e9a3b                       ; 0055530f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00555314
    PUSH EAX                            ; 0055531b
    CALL FUN_005b7790                   ; 0055531c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00555321
    LEA EAX,[ESP + 0x190]               ; 00555324
    PUSH EAX                            ; 0055532b
    XOR ESI,ESI                         ; 0055532c
    CALL FUN_005549c0                   ; 0055532e
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00555333
    JMP 0x005552b7                      ; 00555336
        ;   XREF to: 005552b7 (UNCONDITIONAL_JUMP)  ; LAB_005552b7
    PUSH ECX                            ; 0055533b
        ;   Label: LAB_0055533b
    MOV EBX,dword ptr [ECX]             ; 0055533c
    CALL dword ptr [EBX + 0x48]         ; 0055533e
    TEST EAX,EAX                        ; 00555341
    JZ 0x005552c5                       ; 00555343
        ;   XREF to: 005552c5 (CONDITIONAL_JUMP)  ; LAB_005552c5
    PUSH EAX                            ; 00555345
    CALL FUN_00554ad0                   ; 00555346
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00554ad0()
    ADD ESP,0x4                         ; 0055534b
    PUSH EAX                            ; 0055534e
    PUSH 0x5e9b15                       ; 0055534f | = "Stop primary sound buffer"
    PUSH 0x5e9a3b                       ; 00555354 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 00555359
    PUSH EAX                            ; 0055535d
    CALL FUN_005b7790                   ; 0055535e
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 00555363
    MOV EAX,ESP                         ; 00555366
    PUSH EAX                            ; 00555368
    XOR ESI,ESI                         ; 00555369
    CALL FUN_005549c0                   ; 0055536b
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005549c0()
    ADD ESP,0x4                         ; 00555370
    JMP 0x005552c5                      ; 00555373
        ;   XREF to: 005552c5 (UNCONDITIONAL_JUMP)  ; LAB_005552c5
    XOR ESI,ESI                         ; 00555378
        ;   Label: LAB_00555378
    JMP 0x005552d8                      ; 0055537a
        ;   XREF to: 005552d8 (UNCONDITIONAL_JUMP)  ; LAB_005552d8
    XOR ESI,ESI                         ; 0055537f
        ;   Label: LAB_0055537f
    MOV EAX,ESI                         ; 00555381
    ADD ESP,0x320                       ; 00555383
    POP ESI                             ; 00555389
    POP EBX                             ; 0055538a
    RET                                 ; 0055538b

