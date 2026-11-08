; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a1f40(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_RangeAttack_005efe0f
;   TerminatedCString s_ChaseComplete_005efe1b
;   TerminatedCString s_Chasing_005efe29
;   TerminatedCString s_MeleeAttack_005efe31
;   TerminatedCString s_ChaseComplete_005efe3d
;   TerminatedCString s_MeleeAttack_005efe4b
;   undefined4 DAT_005efe57
;   undefined4 DAT_005efe5f
;   undefined4 DAT_005efe63
;   undefined4 DAT_005fef90
;   undefined4 DAT_005fef94
;
; Called Functions:
;   FUN_00408de0
;   FUN_00423850
;   FUN_005035c0
;   FUN_00503620
;   FUN_005838f0
;   FUN_0059d7f0
;   FUN_0059d8e0
;   FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1f40
        ;   Label: FUN_005a1f40
    PUSH ESI                            ; 005a1f41
    PUSH EDI                            ; 005a1f42
    PUSH EBP                            ; 005a1f43
    MOV EBP,ESP                         ; 005a1f44
    SUB ESP,0x48                        ; 005a1f46
    AND ESP,0xfffffff8                  ; 005a1f49
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a1f4c
    LEA ESI,[EBX + 0x2b4]               ; 005a1f4f
    PUSH ESI                            ; 005a1f55
    CALL FUN_005035c0                   ; 005a1f56
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a1f5b
    ADD ESP,0x4                         ; 005a1f5e
    CMP EAX,0x2                         ; 005a1f61
    JNZ 0x005a2067                      ; 005a1f64
        ;   XREF to: 005a2067 (CONDITIONAL_JUMP)  ; LAB_005a2067
    FLD float ptr [ESI + 0x8]           ; 005a1f6a
    FCOMP float ptr [0x005efe5f]        ; 005a1f6d | DAT_005efe5f
    FNSTSW AX                           ; 005a1f73
    SAHF                                ; 005a1f75
    JC 0x005a201b                       ; 005a1f76
        ;   XREF to: 005a201b (CONDITIONAL_JUMP)  ; LAB_005a201b
    LEA EAX,[EBX + 0x2b4]               ; 005a1f7c
        ;   Label: LAB_005a1f7c
    FLD float ptr [EAX + 0x8]           ; 005a1f82
    FCOMP float ptr [0x005efe63]        ; 005a1f85 | DAT_005efe63
    FNSTSW AX                           ; 005a1f8b
    SAHF                                ; 005a1f8d
    JBE 0x005a2014                      ; 005a1f8e
        ;   XREF to: 005a2014 (CONDITIONAL_JUMP)  ; LAB_005a2014
    LEA EAX,[EBX + 0x2508]              ; 005a1f94
    MOV dword ptr [EAX + 0x8],0x0       ; 005a1f9a
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a1fa1
    MOV dword ptr [EAX + 0x4],EDX       ; 005a1fa4
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a1fa7
    MOV dword ptr [EAX],EDX             ; 005a1faa
    LEA EAX,[EBX + 0x20]                ; 005a1fac
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a1faf
    FLD float ptr [EAX]                 ; 005a1fb5
    FSUB float ptr [ESI + 0x20]         ; 005a1fb7
    FMUL ST0                            ; 005a1fba
    FLD float ptr [EAX + 0x8]           ; 005a1fbc
    FSUB float ptr [ESI + 0x28]         ; 005a1fbf
    FMUL ST0                            ; 005a1fc2
    FADDP                               ; 005a1fc4
    FSQRT                               ; 005a1fc6
    LEA ESI,[EBX + 0x10af8]             ; 005a1fc8
    FCOMP float ptr [0x005fef90]        ; 005a1fce | DAT_005fef90
    FNSTSW AX                           ; 005a1fd4
    SAHF                                ; 005a1fd6
    JBE 0x005a2033                      ; 005a1fd7
        ;   XREF to: 005a2033 (CONDITIONAL_JUMP)  ; LAB_005a2033
    PUSH 0x5efe0f                       ; 005a1fd9 | = "RangeAttack"
    PUSH 0x5efe1b                       ; 005a1fde | = "ChaseComplete"
    FLD float ptr [0x005fef90]          ; 005a1fe3 | DAT_005fef90
    PUSH ESI                            ; 005a1fe9
    FSTP float ptr [EBX + 0x11394]      ; 005a1fea
    CALL FUN_0059d7f0                   ; 005a1ff0
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a1ff5
    PUSH 0x3dcccccd                     ; 005a1ff8
    PUSH ESI                            ; 005a1ffd
    CALL FUN_0059dcb0                   ; 005a1ffe
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a2003
    PUSH 0x5efe29                       ; 005a2006 | = "Chasing"
    PUSH ESI                            ; 005a200b
    CALL FUN_0059d8e0                   ; 005a200c
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a2011
    MOV ESP,EBP                         ; 005a2014
        ;   Label: LAB_005a2014
    POP EBP                             ; 005a2016
    POP EDI                             ; 005a2017
    POP ESI                             ; 005a2018
    POP EBX                             ; 005a2019
    RET                                 ; 005a201a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a201b
        ;   Label: LAB_005a201b
    ADD EAX,0x20                        ; 005a2021
    PUSH EAX                            ; 005a2024
    PUSH EBX                            ; 005a2025
    CALL FUN_00423850                   ; 005a2026
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005a202b
    JMP 0x005a1f7c                      ; 005a202e
        ;   XREF to: 005a1f7c (UNCONDITIONAL_JUMP)  ; LAB_005a1f7c
    PUSH 0x5efe31                       ; 005a2033 | = "MeleeAttack"
        ;   Label: LAB_005a2033
    PUSH 0x5efe3d                       ; 005a2038 | = "ChaseComplete"
    FLD float ptr [0x005fef94]          ; 005a203d | DAT_005fef94
    PUSH ESI                            ; 005a2043
    FSTP float ptr [EBX + 0x11394]      ; 005a2044
    CALL FUN_0059d7f0                   ; 005a204a
        ;   XREF to: 0059d7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d7f0()
    ADD ESP,0xc                         ; 005a204f
    PUSH 0x5efe4b                       ; 005a2052 | = "MeleeAttack"
    PUSH ESI                            ; 005a2057
    CALL FUN_0059d8e0                   ; 005a2058
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a205d
    MOV ESP,EBP                         ; 005a2060
    POP EBP                             ; 005a2062
    POP EDI                             ; 005a2063
    POP ESI                             ; 005a2064
    POP EBX                             ; 005a2065
    RET                                 ; 005a2066
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a2067
        ;   Label: LAB_005a2067
    ADD EAX,0x20                        ; 005a206d
    PUSH EAX                            ; 005a2070
    PUSH EBX                            ; 005a2071
    LEA ESI,[ESP + 0x8]                 ; 005a2072
    LEA EDI,[ESP + 0x14]                ; 005a2076
    CALL FUN_00408de0                   ; 005a207a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    LEA ESI,[ESP + 0x8]                 ; 005a207f
    ADD ESP,0x8                         ; 005a2083
    LEA EAX,[ESP + 0xc]                 ; 005a2086
    MOVSD ES:EDI,ESI                    ; 005a208a
    MOVSD ES:EDI,ESI                    ; 005a208b
    MOVSD ES:EDI,ESI                    ; 005a208c
    PUSH EAX                            ; 005a208d
    LEA ESI,[ESP + 0x28]                ; 005a208e
    LEA EDI,[ESP + 0x34]                ; 005a2092
    CALL FUN_005838f0                   ; 005a2096
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[ESP + 0x28]                ; 005a209b
    ADD ESP,0x4                         ; 005a209f
    MOVSD ES:EDI,ESI                    ; 005a20a2
    MOVSD ES:EDI,ESI                    ; 005a20a3
    MOVSD ES:EDI,ESI                    ; 005a20a4
    LEA EAX,[ESP + 0x30]                ; 005a20a5
    LEA ESI,[ESP + 0x18]                ; 005a20a9
    CMP ESI,EAX                         ; 005a20ad
    JZ 0x005a20c9                       ; 005a20af
        ;   XREF to: 005a20c9 (CONDITIONAL_JUMP)  ; LAB_005a20c9
    MOV EAX,dword ptr [ESP + 0x30]      ; 005a20b1
    MOV dword ptr [ESP + 0x18],EAX      ; 005a20b5
    MOV EAX,dword ptr [ESP + 0x34]      ; 005a20b9
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a20bd
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a20c1
    MOV dword ptr [ESP + 0x20],EAX      ; 005a20c5
    FLD float ptr [ESP + 0x1c]          ; 005a20c9
        ;   Label: LAB_005a20c9
    FCOMP double ptr [0x005efe57]       ; 005a20cd | DAT_005efe57
    FNSTSW AX                           ; 005a20d3
    SAHF                                ; 005a20d5
    JBE 0x005a210a                      ; 005a20d6
        ;   XREF to: 005a210a (CONDITIONAL_JUMP)  ; LAB_005a210a
    LEA EAX,[EBX + 0x2508]              ; 005a20d8
    MOV dword ptr [EAX + 0x8],0x0       ; 005a20de
    MOV EDX,dword ptr [EAX + 0x8]       ; 005a20e5
    MOV dword ptr [EAX + 0x4],EDX       ; 005a20e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a20eb
    MOV dword ptr [EAX],EDX             ; 005a20ee
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005a20f0
    ADD EAX,0x20                        ; 005a20f6
    PUSH EAX                            ; 005a20f9
    PUSH EBX                            ; 005a20fa
    CALL FUN_00423850                   ; 005a20fb
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; undefined FUN_00423850()
    ADD ESP,0x8                         ; 005a2100
    MOV ESP,EBP                         ; 005a2103
    POP EBP                             ; 005a2105
    POP EDI                             ; 005a2106
    POP ESI                             ; 005a2107
    POP EBX                             ; 005a2108
    RET                                 ; 005a2109
    PUSH 0x1                            ; 005a210a
        ;   Label: LAB_005a210a
    PUSH 0x2                            ; 005a210c
    ADD EBX,0x2b4                       ; 005a210e
    PUSH EBX                            ; 005a2114
    CALL FUN_00503620                   ; 005a2115
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 005a211a
    MOV ESP,EBP                         ; 005a211d
    POP EBP                             ; 005a211f
    POP EDI                             ; 005a2120
    POP ESI                             ; 005a2121
    POP EBX                             ; 005a2122
    RET                                 ; 005a2123

