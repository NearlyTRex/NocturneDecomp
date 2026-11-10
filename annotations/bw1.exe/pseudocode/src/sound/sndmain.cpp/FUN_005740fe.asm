; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_sndmain_cpp_FUN_005740fe(char *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02c78ff0
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0
;   sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020
;   sound_sndmain.cpp_freeSampleByName_FUN_00574380
;   sound_sndmain.cpp_FUN_00572400
;   sound_sndmain.cpp_FUN_00573e70
;   sound_sndmain.cpp_lockSound_FUN_00575d20
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 005740fe
        ;   Label: sound_sndmain.cpp_FUN_005740fe
    PUSH EBX                            ; 00574100
    PUSH ESI                            ; 00574101
    PUSH EDI                            ; 00574102
    PUSH EBP                            ; 00574103
    MOV EBX,dword ptr [0x02c78ff0]      ; 00574104 | DAT_02c78ff0
    MOV ESI,dword ptr [ESP + 0x14]      ; 0057410a
    CALL sound_sndmain.cpp_lockSound_FUN_00575d20 ; 0057410e
        ;   XREF to: 00575d20 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_lockSound_FUN_00575d20()
    PUSH 0x1                            ; 00574113
    PUSH ESI                            ; 00574115
    CALL sound_sndmain.cpp_freeSampleByName_FUN_00574380 ; 00574116
        ;   XREF to: 00574380 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_freeSampleByName_FUN_00574380(char * sample_name, int kill_active_slots)
    ADD ESP,0x8                         ; 0057411b
    XOR ECX,ECX                         ; 0057411e
    XOR EBP,EBP                         ; 00574120
    MOV EBX,dword ptr [0x02c78ff0]      ; 00574122 | DAT_02c78ff0
        ;   Label: LAB_00574122
    INC EBX                             ; 00574128
    CMP EBX,0x40                        ; 00574129
    JL 0x00574130                       ; 0057412c
        ;   XREF to: 00574130 (CONDITIONAL_JUMP)  ; LAB_00574130
    MOV EBX,EBP                         ; 0057412e
    IMUL EAX,EBX,0x1b0                  ; 00574130
        ;   Label: LAB_00574130
    MOV EDX,dword ptr [EAX + 0x2c79144] ; 00574136
    CMP EBP,EDX                         ; 0057413c
    JZ 0x0057415e                       ; 0057413e
        ;   XREF to: 0057415e (CONDITIONAL_JUMP)  ; LAB_0057415e
    INC ECX                             ; 00574140
        ;   Label: LAB_00574140
    MOV dword ptr [0x02c78ff0],EBX      ; 00574141 | DAT_02c78ff0
    CMP ECX,0x40                        ; 00574147
    JL 0x00574122                       ; 0057414a
        ;   XREF to: 00574122 (CONDITIONAL_JUMP)  ; LAB_00574122
    CALL sound_sndmain.cpp_FUN_00573e70 ; 0057414c
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
        ;   Label: LAB_0057414c
    XOR EAX,EAX                         ; 00574151
    MOV EBX,dword ptr [0x02c78ff0]      ; 00574153 | DAT_02c78ff0
    POP EBP                             ; 00574159
    POP EDI                             ; 0057415a
    POP ESI                             ; 0057415b
    POP EBX                             ; 0057415c
    RET                                 ; 0057415d
    MOV EDI,dword ptr [EAX + 0x2c79148] ; 0057415e
        ;   Label: LAB_0057415e
    CMP EDX,EDI                         ; 00574164
    JNZ 0x00574140                      ; 00574166
        ;   XREF to: 00574140 (CONDITIONAL_JUMP)  ; LAB_00574140
    MOV EDX,dword ptr [EAX + 0x2c79150] ; 00574168
    CMP EDI,EDX                         ; 0057416e
    JNZ 0x00574140                      ; 00574170
        ;   XREF to: 00574140 (CONDITIONAL_JUMP)  ; LAB_00574140
    CMP EDX,dword ptr [EAX + 0x2c791a0] ; 00574172
    JNZ 0x00574140                      ; 00574178
        ;   XREF to: 00574140 (CONDITIONAL_JUMP)  ; LAB_00574140
    MOV EBP,0x2c78ff4                   ; 0057417a
    MOV dword ptr [0x02c78ff0],EBX      ; 0057417f | DAT_02c78ff0
    ADD EBP,EAX                         ; 00574185
    JZ 0x0057414c                       ; 00574187
        ;   XREF to: 0057414c (CONDITIONAL_JUMP)  ; LAB_0057414c
    MOV ECX,0x54                        ; 00574189
    MOV EDI,EBP                         ; 0057418e
    MOVSD.REP ES:EDI,ESI                ; 00574190
    MOV dword ptr [EBP + 0x150],0x0     ; 00574192
    MOV dword ptr [EBP + 0x154],0x0     ; 0057419c
    MOV dword ptr [EBP + 0x158],0x0     ; 005741a6
    MOV dword ptr [EBP + 0x15c],0x1     ; 005741b0
    MOV dword ptr [EBP + 0x160],0xffffffff ; 005741ba
    MOV EAX,dword ptr [EBP + 0x110]     ; 005741c4
    MOV dword ptr [EBP + 0x164],EAX     ; 005741ca
    PUSH EAX                            ; 005741d0
    MOV dword ptr [EBP + 0x16c],EAX     ; 005741d1
    PUSH EBP                            ; 005741d7
    MOV dword ptr [EBP + 0x170],EAX     ; 005741d8
    CALL sound_sndmain.cpp_FUN_00572400 ; 005741de
        ;   XREF to: 00572400 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00572400()
    ADD ESP,0x8                         ; 005741e3
    PUSH EBP                            ; 005741e6
    MOV dword ptr [EBP + 0x168],EAX     ; 005741e7
    CALL sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0 ; 005741ed
        ;   XREF to: 0056feb0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSample_allocateHwSample_FUN_0056feb0(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 005741f2
    TEST EAX,EAX                        ; 005741f5
    JZ 0x0057420e                       ; 005741f7
        ;   XREF to: 0057420e (CONDITIONAL_JUMP)  ; LAB_0057420e
    CALL sound_sndmain.cpp_FUN_00573e70 ; 005741f9
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573e70()
    MOV EAX,0x1                         ; 005741fe
    MOV EBX,dword ptr [0x02c78ff0]      ; 00574203 | DAT_02c78ff0
    POP EBP                             ; 00574209
    POP EDI                             ; 0057420a
    POP ESI                             ; 0057420b
    POP EBX                             ; 0057420c
    RET                                 ; 0057420d
    PUSH EBP                            ; 0057420e
        ;   Label: LAB_0057420e
    CALL sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020 ; 0057420f
        ;   XREF to: 00570020 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSample_freeMemory_FUN_00570020(CSfxSample * this_ptr)
    ADD ESP,0x4                         ; 00574214
    XOR EAX,EAX                         ; 00574217
    MOV EBX,dword ptr [0x02c78ff0]      ; 00574219 | DAT_02c78ff0
    POP EBP                             ; 0057421f
    POP EDI                             ; 00574220
    POP ESI                             ; 00574221
    POP EBX                             ; 00574222
    RET                                 ; 00574223

