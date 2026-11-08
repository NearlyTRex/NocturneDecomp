; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005aab50(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_Chasing_005f0bca
;   TerminatedCString s_Chasing_005f0bd2
;   undefined4 DAT_005f0bde
;   undefined4 DAT_00600a6c
;   undefined4 DAT_00600a70
;
; Called Functions:
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_00503e60
;   FUN_0059d8e0
;   FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aab50
        ;   Label: FUN_005aab50
    PUSH ESI                            ; 005aab51
    PUSH EDI                            ; 005aab52
    PUSH EBP                            ; 005aab53
    SUB ESP,0x10                        ; 005aab54
    MOV EBX,dword ptr [ESP + 0x24]      ; 005aab57
    PUSH EBX                            ; 005aab5b
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005aab5c
    CALL dword ptr [EAX + 0x17c]        ; 005aab62
    ADD ESP,0x4                         ; 005aab68
    TEST EAX,EAX                        ; 005aab6b
    JZ 0x005aabe8                       ; 005aab6d
        ;   XREF to: 005aabe8 (CONDITIONAL_JUMP)  ; LAB_005aabe8
    LEA EAX,[EBX + 0x20]                ; 005aab73
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 005aab76
    FLD float ptr [EAX]                 ; 005aab7c
    FSUB float ptr [EDX + 0x20]         ; 005aab7e
    FMUL ST0                            ; 005aab81
    FLD float ptr [EAX + 0x8]           ; 005aab83
    FSUB float ptr [EDX + 0x28]         ; 005aab86
    FMUL ST0                            ; 005aab89
    FADDP                               ; 005aab8b
    FSQRT                               ; 005aab8d
    ADD EDX,0x20                        ; 005aab8f
    FST float ptr [ESP + 0x8]           ; 005aab92
    FCOMP float ptr [0x00600a6c]        ; 005aab96 | DAT_00600a6c
    FNSTSW AX                           ; 005aab9c
    SAHF                                ; 005aab9e
    JA 0x005aabf0                       ; 005aab9f
        ;   XREF to: 005aabf0 (CONDITIONAL_JUMP)  ; LAB_005aabf0
    PUSH EDX                            ; 005aaba1
    PUSH EBX                            ; 005aaba2
    CALL FUN_00423850                   ; 005aaba3
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005aaba8
    FLD float ptr [ESP + 0x8]           ; 005aabab
    FCOMP float ptr [0x00600a70]        ; 005aabaf | DAT_00600a70
    FNSTSW AX                           ; 005aabb5
    SAHF                                ; 005aabb7
    JA 0x005aac20                       ; 005aabb8
        ;   XREF to: 005aac20 (CONDITIONAL_JUMP)  ; LAB_005aac20
    MOV ESI,0x5                         ; 005aabba
    LEA EDI,[EBX + 0x2b4]               ; 005aabbf
        ;   Label: LAB_005aabbf
    PUSH EDI                            ; 005aabc5
    CALL FUN_005035c0                   ; 005aabc6
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005aabcb
    ADD ESP,0x4                         ; 005aabce
    MOV EBP,EAX                         ; 005aabd1
    TEST EAX,EAX                        ; 005aabd3
    JNZ 0x005aac3a                      ; 005aabd5
        ;   XREF to: 005aac3a (CONDITIONAL_JUMP)  ; LAB_005aac3a
    PUSH 0x1                            ; 005aabd7
    PUSH ESI                            ; 005aabd9
    PUSH EDI                            ; 005aabda
        ;   Label: LAB_005aabda
    CALL FUN_00503620                   ; 005aabdb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005aabe0
    CMP EBP,0x4                         ; 005aabe3
        ;   Label: LAB_005aabe3
    JZ 0x005aac4a                       ; 005aabe6
        ;   XREF to: 005aac4a (CONDITIONAL_JUMP)  ; LAB_005aac4a
    ADD ESP,0x10                        ; 005aabe8
        ;   Label: LAB_005aabe8
    POP EBP                             ; 005aabeb
    POP EDI                             ; 005aabec
    POP ESI                             ; 005aabed
    POP EBX                             ; 005aabee
    RET                                 ; 005aabef
    PUSH 0x3f000000                     ; 005aabf0
        ;   Label: LAB_005aabf0
    ADD EBX,0x10af8                     ; 005aabf5
    FLD float ptr [0x00600a6c]          ; 005aabfb | DAT_00600a6c
    PUSH EBX                            ; 005aac01
    FSTP float ptr [EBX + 0x89c]        ; 005aac02
    CALL FUN_0059dcb0                   ; 005aac08
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dcb0()
    ADD ESP,0x8                         ; 005aac0d
    PUSH 0x5f0bca                       ; 005aac10 | = "Chasing"
    PUSH EBX                            ; 005aac15
    CALL FUN_0059d8e0                   ; 005aac16
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aac1b
    JMP 0x005aabe8                      ; 005aac1e
        ;   XREF to: 005aabe8 (UNCONDITIONAL_JUMP)  ; LAB_005aabe8
    FLD float ptr [ESP + 0x8]           ; 005aac20
        ;   Label: LAB_005aac20
    FCOMP float ptr [0x00600a6c]        ; 005aac24 | DAT_00600a6c
    FNSTSW AX                           ; 005aac2a
    SAHF                                ; 005aac2c
    JA 0x005aac36                       ; 005aac2d
        ;   XREF to: 005aac36 (CONDITIONAL_JUMP)  ; LAB_005aac36
    MOV ESI,0x4                         ; 005aac2f
    JMP 0x005aabbf                      ; 005aac34
        ;   XREF to: 005aabbf (UNCONDITIONAL_JUMP)  ; LAB_005aabbf
    XOR ESI,ESI                         ; 005aac36
        ;   Label: LAB_005aac36
    JMP 0x005aabbf                      ; 005aac38
        ;   XREF to: 005aabbf (UNCONDITIONAL_JUMP)  ; LAB_005aabbf
    CMP EAX,0x5                         ; 005aac3a
        ;   Label: LAB_005aac3a
    JZ 0x005aabe3                       ; 005aac3d
        ;   XREF to: 005aabe3 (CONDITIONAL_JUMP)  ; LAB_005aabe3
    CMP EAX,0x4                         ; 005aac3f
    JZ 0x005aabe3                       ; 005aac42
        ;   XREF to: 005aabe3 (CONDITIONAL_JUMP)  ; LAB_005aabe3
    PUSH 0x1                            ; 005aac44
    PUSH 0x0                            ; 005aac46
    JMP 0x005aabda                      ; 005aac48
        ;   XREF to: 005aabda (UNCONDITIONAL_JUMP)  ; LAB_005aabda
    LEA EAX,[EBX + 0x2b4]               ; 005aac4a
        ;   Label: LAB_005aac4a
    PUSH EAX                            ; 005aac50
    CALL FUN_00503e60                   ; 005aac51
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; undefined FUN_00503e60()
    MOV dword ptr [ESP + 0x10],EAX      ; 005aac56
    FLD float ptr [ESP + 0x10]          ; 005aac5a
    ADD ESP,0x4                         ; 005aac5e
    FCOMP double ptr [0x005f0bde]       ; 005aac61 | DAT_005f0bde
    FNSTSW AX                           ; 005aac67
    SAHF                                ; 005aac69
    JBE 0x005aabe8                      ; 005aac6a
        ;   XREF to: 005aabe8 (CONDITIONAL_JUMP)  ; LAB_005aabe8
    PUSH 0x5f0bd2                       ; 005aac70 | = "Chasing"
    ADD EBX,0x10af8                     ; 005aac75
    FLD float ptr [0x00600a70]          ; 005aac7b | DAT_00600a70
    PUSH EBX                            ; 005aac81
    FSTP float ptr [EBX + 0x89c]        ; 005aac82
    CALL FUN_0059d8e0                   ; 005aac88
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005aac8d
    ADD ESP,0x10                        ; 005aac90
    POP EBP                             ; 005aac93
    POP EDI                             ; 005aac94
    POP ESI                             ; 005aac95
    POP EBX                             ; 005aac96
    RET                                 ; 005aac97

