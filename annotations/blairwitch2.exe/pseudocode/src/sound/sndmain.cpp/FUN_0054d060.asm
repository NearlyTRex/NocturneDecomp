; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0054d060(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bca0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_02648e90
;   undefined4 DAT_02648e94
;   undefined4 DAT_02648e98
;   undefined4 DAT_02648e9c
;   undefined4 DAT_02648f38
;   undefined4 DAT_0264901c
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_memory.c_memset_FUN_005b77c0
;   crt_string.c_memmove_FUN_005ba1f0
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0
;   sound_sndmain.cpp_FUN_0054edb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d060
        ;   Label: sound_sndmain.cpp_FUN_0054d060
    PUSH ESI                            ; 0054d061
    PUSH EDI                            ; 0054d062
    PUSH EBP                            ; 0054d063
    SUB ESP,0x30                        ; 0054d064
    CMP dword ptr [0x0264901c],0x0      ; 0054d067 | DAT_0264901c
    JLE 0x0054d1e9                      ; 0054d06e
        ;   XREF to: 0054d1e9 (CONDITIONAL_JUMP)  ; LAB_0054d1e9
    CMP dword ptr [0x02648e90],0x0      ; 0054d074 | DAT_02648e90
        ;   Label: LAB_0054d074
    JLE 0x0054d0a0                      ; 0054d07b
        ;   XREF to: 0054d0a0 (CONDITIONAL_JUMP)  ; LAB_0054d0a0
    MOV EDI,0x5e7fbc                    ; 0054d07d
    MOV EBP,0x597                       ; 0054d082
    PUSH 0x5e7fd1                       ; 0054d087
    MOV dword ptr [0x01d046a0],EDI      ; 0054d08c | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 0054d092 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054d098
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054d09d
    MOV ESI,dword ptr [0x02648e98]      ; 0054d0a0 | DAT_02648e98
        ;   Label: LAB_0054d0a0
    MOV EAX,[0x0061bc9c]                ; 0054d0a6 | DAT_0061bc9c
    XOR EDI,EDI                         ; 0054d0ab
    SHL ESI,0x2                         ; 0054d0ad
    TEST EAX,EAX                        ; 0054d0b0
    JLE 0x0054d120                      ; 0054d0b2
        ;   XREF to: 0054d120 (CONDITIONAL_JUMP)  ; LAB_0054d120
    XOR EBX,EBX                         ; 0054d0b4
    MOV EAX,[0x02648e9c]                ; 0054d0b6 | DAT_02648e9c
        ;   Label: LAB_0054d0b6
    DEC EAX                             ; 0054d0bb
    IMUL EAX,ESI                        ; 0054d0bc
    MOV EDX,dword ptr [0x02648e98]      ; 0054d0bf | DAT_02648e98
    SHL EDX,0x2                         ; 0054d0c5
    PUSH EAX                            ; 0054d0c8
    MOV EAX,dword ptr [EBX + 0x2648ec8] ; 0054d0c9
    ADD EDX,EAX                         ; 0054d0cf
    PUSH EDX                            ; 0054d0d1
    PUSH EAX                            ; 0054d0d2
    CALL crt_string.c_memmove_FUN_005ba1f0 ; 0054d0d3
        ;   XREF to: 005ba1f0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005ba1f0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02648e9c]                ; 0054d0d8 | DAT_02648e9c
    MOV EDX,dword ptr [0x02648e98]      ; 0054d0dd | DAT_02648e98
    DEC EAX                             ; 0054d0e3
    IMUL EAX,EDX                        ; 0054d0e4
    ADD ESP,0xc                         ; 0054d0e7
    LEA EDX,[EAX*0x4 + 0x0]             ; 0054d0ea
    PUSH ESI                            ; 0054d0f1
    MOV EAX,dword ptr [EBX + 0x2648ec8] ; 0054d0f2
    PUSH 0x0                            ; 0054d0f8
    ADD EAX,EDX                         ; 0054d0fa
    PUSH EAX                            ; 0054d0fc
    ADD EBX,0x4                         ; 0054d0fd
    INC EDI                             ; 0054d100
    CALL crt_memory.c_memset_FUN_005b77c0 ; 0054d101
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x0061bc9c]      ; 0054d106 | DAT_0061bc9c
    ADD ESP,0xc                         ; 0054d10c
    CMP EDI,ECX                         ; 0054d10f
    JL 0x0054d0b6                       ; 0054d111
        ;   XREF to: 0054d0b6 (CONDITIONAL_JUMP)  ; LAB_0054d0b6
    LEA EAX,[EAX]                       ; 0054d113
    LEA EDX,[EDX]                       ; 0054d119
    NOP                                 ; 0054d11f
    MOV EAX,[0x02648e98]                ; 0054d120 | DAT_02648e98
        ;   Label: LAB_0054d120
    MOV dword ptr [ESP + 0x20],EAX      ; 0054d125
    MOV EAX,[0x0061bc9c]                ; 0054d129 | DAT_0061bc9c
    MOV dword ptr [ESP + 0x24],EAX      ; 0054d12e
    MOV EAX,[0x0061bca0]                ; 0054d132 | DAT_0061bca0
    MOV EBX,dword ptr [ESP + 0x24]      ; 0054d137
    MOV dword ptr [ESP + 0x28],EAX      ; 0054d13b
    TEST EBX,EBX                        ; 0054d13f
    JLE 0x0054d160                      ; 0054d141
        ;   XREF to: 0054d160 (CONDITIONAL_JUMP)  ; LAB_0054d160
    SHL EBX,0x2                         ; 0054d143
    XOR EAX,EAX                         ; 0054d146
    ADD EAX,0x4                         ; 0054d148
        ;   Label: LAB_0054d148
    MOV EDX,dword ptr [EAX + 0x2648ec4] ; 0054d14b
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 0054d151
    CMP EAX,EBX                         ; 0054d155
    JL 0x0054d148                       ; 0054d157
        ;   XREF to: 0054d148 (CONDITIONAL_JUMP)  ; LAB_0054d148
    LEA EAX,[EAX]                       ; 0054d159
    NOP                                 ; 0054d15f
    FILD dword ptr [0x02648e98]         ; 0054d160 | DAT_02648e98
        ;   Label: LAB_0054d160
    FILD dword ptr [0x0061bca0]         ; 0054d166 | DAT_0061bca0
    FDIVP                               ; 0054d16c
    MOV EBX,0x263cf1c                   ; 0054d16e
    LEA ESI,[EBX + 0x4700]              ; 0054d173
    FSTP float ptr [ESP + 0x2c]         ; 0054d179
    PUSH dword ptr [ESP + 0x2c]         ; 0054d17d
        ;   Label: LAB_0054d17d
    PUSH EBX                            ; 0054d181
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 ; 0054d182
        ;   XREF to: 0054e8c0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 0054d187
    ADD ESP,0x8                         ; 0054d18d
    CMP EBX,ESI                         ; 0054d190
    JNZ 0x0054d17d                      ; 0054d192
        ;   XREF to: 0054d17d (CONDITIONAL_JUMP)  ; LAB_0054d17d
    MOV EBX,0x263cf1c                   ; 0054d194
    LEA EBP,[EBX + 0x4700]              ; 0054d199
    SUB ESP,0x2c                        ; 0054d19f
        ;   Label: LAB_0054d19f
    MOV EDI,ESP                         ; 0054d1a2
    MOV ECX,0xb                         ; 0054d1a4
    LEA ESI,[ESP + 0x2c]                ; 0054d1a9
    PUSH EBX                            ; 0054d1ad
    MOVSD.REP ES:EDI,ESI                ; 0054d1ae
    CALL sound_sndmain.cpp_FUN_0054edb0 ; 0054d1b0
        ;   XREF to: 0054edb0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0054edb0()
    ADD EBX,0x11c                       ; 0054d1b5
    ADD ESP,0x30                        ; 0054d1bb
    CMP EBX,EBP                         ; 0054d1be
    JNZ 0x0054d19f                      ; 0054d1c0
        ;   XREF to: 0054d19f (CONDITIONAL_JUMP)  ; LAB_0054d19f
    MOV EAX,[0x02648e98]                ; 0054d1c2 | DAT_02648e98
    MOV EDI,dword ptr [0x02648f38]      ; 0054d1c7 | DAT_02648f38
    XOR ESI,ESI                         ; 0054d1cd
    MOV [0x02648e90],EAX                ; 0054d1cf | DAT_02648e90
    INC EDI                             ; 0054d1d4
    MOV dword ptr [0x02648e94],ESI      ; 0054d1d5 | DAT_02648e94
    MOV dword ptr [0x02648f38],EDI      ; 0054d1db | DAT_02648f38
    ADD ESP,0x30                        ; 0054d1e1
    POP EBP                             ; 0054d1e4
    POP EDI                             ; 0054d1e5
    POP ESI                             ; 0054d1e6
    POP EBX                             ; 0054d1e7
    RET                                 ; 0054d1e8
    MOV ECX,0x5e7f87                    ; 0054d1e9
        ;   Label: LAB_0054d1e9
    MOV EBX,0x593                       ; 0054d1ee
    PUSH 0x5e7f9c                       ; 0054d1f3
    MOV dword ptr [0x01d046a0],ECX      ; 0054d1f8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0054d1fe | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0054d204
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0054d209
    JMP 0x0054d074                      ; 0054d20c
        ;   XREF to: 0054d074 (UNCONDITIONAL_JUMP)  ; LAB_0054d074

