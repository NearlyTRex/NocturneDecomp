; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_flushSoundChanges_FUN_00575db0(void)
;
;
; XREF[1]:
;   sound_sndmain.cpp_unlockSound_FUN_00573e70 at 00575f9b
;
; Referenced Globals:
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[0].hardware_buffer_handle
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[1].options.channel_index
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[1].options.flags
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[1].hardware_buffer_handle
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[1].changed_flags
;   undefined4 g_CSfxSlot_ARRAY_02c745ec[1].changed_flags+3
;   double g_DOUBLE_02c7fbf8
;   double g_DOUBLE_02c7fc08
;   double g_DOUBLE_02c7fc18
;   int g_INT_02c7fc88
;   CSoundDevice* g_CSoundDevice_PTR_02c80650
;   int g_INT_02c80658
;   byte g_BYTE_02c807f4
;   byte g_BYTE_02c807f7
;
; Called Functions:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70
;   sound_sndmain.cpp_hasHardware3DSound_FUN_00575560
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00575db0
        ;   Label: sound_sndmain.cpp_flushSoundChanges_FUN_00575db0
    CMP dword ptr [0x02c80650],0x0      ; 00575db1 | g_CSoundDevice_PTR_02c80650
    JNZ 0x00575dbc                      ; 00575db8
        ;   XREF to: 00575dbc (CONDITIONAL_JUMP)  ; LAB_00575dbc
    POP EBP                             ; 00575dba
        ;   Label: LAB_00575dba
    RET                                 ; 00575dbb
    CALL sound_sndmain.cpp_hasHardware3DSound_FUN_00575560 ; 00575dbc
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_hasHardware3DSound_FUN_00575560()
        ;   Label: LAB_00575dbc
    CMP EAX,0x1                         ; 00575dc1
    JL 0x00575dba                       ; 00575dc4
        ;   XREF to: 00575dba (CONDITIONAL_JUMP)  ; LAB_00575dba
    PUSH EDI                            ; 00575dc6
    PUSH ESI                            ; 00575dc7
    PUSH EBX                            ; 00575dc8
    MOV ESI,0x2c745ec                   ; 00575dc9
    LEA EDI,[ESI + 0x4700]              ; 00575dce
    MOV ECX,dword ptr [ESI + 0x60]      ; 00575dd4 | g_CSfxSlot_ARRAY_02c745ec[0].hardware_buffer_handle | g_CSfxSlot_ARRAY_02c745ec[1].hardware_buffer_handle
        ;   Label: LAB_00575dd4
    MOV EBX,ESI                         ; 00575dd7
    TEST ECX,ECX                        ; 00575dd9
    JNZ 0x00575ee1                      ; 00575ddb
        ;   XREF to: 00575ee1 (CONDITIONAL_JUMP)  ; LAB_00575ee1
    ADD ESI,0x11c                       ; 00575de1
        ;   Label: LAB_00575de1
    CMP ESI,EDI                         ; 00575de7
    JNZ 0x00575dd4                      ; 00575de9
        ;   XREF to: 00575dd4 (CONDITIONAL_JUMP)  ; LAB_00575dd4
    TEST byte ptr [0x02c807f4],0x2      ; 00575deb | g_BYTE_02c807f4
    JZ 0x00575e38                       ; 00575df2
        ;   XREF to: 00575e38 (CONDITIONAL_JUMP)  ; LAB_00575e38
    MOV EAX,[0x02c7fc88]                ; 00575df4 | g_INT_02c7fc88
    MOV ESI,dword ptr [EAX*0x8 + 0x2c7fc1c] ; 00575df9
    PUSH ESI                            ; 00575e00
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fc18] ; 00575e01 | g_DOUBLE_02c7fc18
    PUSH EDI                            ; 00575e08
    MOV EBP,dword ptr [EAX*0x8 + 0x2c7fc0c] ; 00575e09
    PUSH EBP                            ; 00575e10
    MOV ECX,dword ptr [EAX*0x8 + 0x2c7fc08] ; 00575e11 | g_DOUBLE_02c7fc08
    PUSH ECX                            ; 00575e18
    MOV ESI,dword ptr [EAX*0x8 + 0x2c7fbfc] ; 00575e19
    PUSH ESI                            ; 00575e20
    MOV EDI,dword ptr [EAX*0x8 + 0x2c7fbf8] ; 00575e21 | g_DOUBLE_02c7fbf8
    MOV EDX,dword ptr [0x02c80650]      ; 00575e28 | g_CSoundDevice_PTR_02c80650
    PUSH EDI                            ; 00575e2e
    MOV EBX,dword ptr [EDX]             ; 00575e2f
    PUSH EDX                            ; 00575e31
    CALL dword ptr [EBX + 0x1c]         ; 00575e32
    ADD ESP,0x1c                        ; 00575e35
    TEST byte ptr [0x02c807f7],0x20     ; 00575e38 | g_BYTE_02c807f7
        ;   Label: LAB_00575e38
    JZ 0x00575e94                       ; 00575e3f
        ;   XREF to: 00575e94 (CONDITIONAL_JUMP)  ; LAB_00575e94
    MOV EAX,[0x02c7fc88]                ; 00575e41 | g_INT_02c7fc88
    PUSH dword ptr [EAX*0x4 + 0x2c7fc80] ; 00575e46
    PUSH dword ptr [EAX*0x4 + 0x2c7fc78] ; 00575e4d
    PUSH dword ptr [EAX*0x4 + 0x2c7fc70] ; 00575e54
    PUSH dword ptr [EAX*0x4 + 0x2c7fc68] ; 00575e5b
    PUSH dword ptr [EAX*0x4 + 0x2c7fc60] ; 00575e62
    PUSH dword ptr [EAX*0x4 + 0x2c7fc58] ; 00575e69
    PUSH dword ptr [EAX*0x4 + 0x2c7fc50] ; 00575e70
    MOV EDX,dword ptr [0x02c80650]      ; 00575e77 | g_CSoundDevice_PTR_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc48] ; 00575e7d
    MOV EBX,dword ptr [EDX]             ; 00575e84
    PUSH dword ptr [EAX*0x4 + 0x2c7fc40] ; 00575e86
    PUSH EDX                            ; 00575e8d
    CALL dword ptr [EBX + 0x20]         ; 00575e8e
    ADD ESP,0x28                        ; 00575e91
    TEST byte ptr [0x02c807f4],0x4      ; 00575e94 | g_BYTE_02c807f4
        ;   Label: LAB_00575e94
    JZ 0x00575ec6                       ; 00575e9b
        ;   XREF to: 00575ec6 (CONDITIONAL_JUMP)  ; LAB_00575ec6
    MOV EAX,[0x02c7fc88]                ; 00575e9d | g_INT_02c7fc88
    PUSH dword ptr [EAX*0x4 + 0x2c7fc38] ; 00575ea2
    MOV EDX,dword ptr [0x02c80650]      ; 00575ea9 | g_CSoundDevice_PTR_02c80650
    PUSH dword ptr [EAX*0x4 + 0x2c7fc30] ; 00575eaf
    MOV EBX,dword ptr [EDX]             ; 00575eb6
    PUSH dword ptr [EAX*0x4 + 0x2c7fc28] ; 00575eb8
    PUSH EDX                            ; 00575ebf
    CALL dword ptr [EBX + 0x24]         ; 00575ec0
    ADD ESP,0x10                        ; 00575ec3
    MOV EAX,[0x02c80650]                ; 00575ec6 | g_CSoundDevice_PTR_02c80650
        ;   Label: LAB_00575ec6
    XOR EBP,EBP                         ; 00575ecb
    PUSH EAX                            ; 00575ecd
    MOV EDX,dword ptr [EAX]             ; 00575ece
    MOV dword ptr [0x02c807f4],EBP      ; 00575ed0 | g_BYTE_02c807f4
    CALL dword ptr [EDX + 0x18]         ; 00575ed6
    ADD ESP,0x4                         ; 00575ed9
    POP EBX                             ; 00575edc
    POP ESI                             ; 00575edd
    POP EDI                             ; 00575ede
    POP EBP                             ; 00575edf
    RET                                 ; 00575ee0
    CMP dword ptr [0x02c80658],0x1      ; 00575ee1 | g_INT_02c80658
        ;   Label: LAB_00575ee1
    JNZ 0x00575ef5                      ; 00575ee8
        ;   XREF to: 00575ef5 (CONDITIONAL_JUMP)  ; LAB_00575ef5
    MOV EAX,[0x02c807f4]                ; 00575eea | g_BYTE_02c807f4
    OR dword ptr [ESI + 0x118],EAX      ; 00575eef | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags
    TEST byte ptr [EBX + 0x4c],0x1      ; 00575ef5 | g_CSfxSlot_ARRAY_02c745ec[1].options.flags
        ;   Label: LAB_00575ef5
    JZ 0x00575f05                       ; 00575ef9
        ;   XREF to: 00575f05 (CONDITIONAL_JUMP)  ; LAB_00575f05
    AND dword ptr [EBX + 0x118],0xdffffff9 ; 00575efb | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags
    CMP dword ptr [EBX + 0x118],0x0     ; 00575f05 | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags
        ;   Label: LAB_00575f05
    JZ 0x00575de1                       ; 00575f0c
        ;   XREF to: 00575de1 (CONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH 0x0                            ; 00575f12
    PUSH EBX                            ; 00575f14 | g_CSfxSlot_ARRAY_02c745ec[1].options.channel_index
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 ; 00575f15
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00575f1a
    MOV ECX,dword ptr [EBX + 0x118]     ; 00575f1d | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags
    PUSH ECX                            ; 00575f23
    MOV EAX,[0x02c80650]                ; 00575f24 | g_CSoundDevice_PTR_02c80650
    PUSH EBX                            ; 00575f29 | g_CSfxSlot_ARRAY_02c745ec[1].options.channel_index
    MOV EDX,dword ptr [EAX]             ; 00575f2a
    PUSH EAX                            ; 00575f2c
    CALL dword ptr [EDX + 0x44]         ; 00575f2d
    ADD ESP,0xc                         ; 00575f30
    TEST EAX,EAX                        ; 00575f33
    JZ 0x00575f63                       ; 00575f35
        ;   XREF to: 00575f63 (CONDITIONAL_JUMP)  ; LAB_00575f63
    TEST byte ptr [EBX + 0x11b],0x40    ; 00575f37 | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags+3
    JZ 0x00575de1                       ; 00575f3e
        ;   XREF to: 00575de1 (CONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH EBX                            ; 00575f44 | g_CSfxSlot_ARRAY_02c745ec[1].options.channel_index
    MOV EAX,[0x02c80650]                ; 00575f45 | g_CSoundDevice_PTR_02c80650
    PUSH EAX                            ; 00575f4a
    MOV EDX,dword ptr [EAX]             ; 00575f4b
    CALL dword ptr [EDX + 0x4c]         ; 00575f4d
    ADD ESP,0x8                         ; 00575f50
    TEST EAX,EAX                        ; 00575f53
    JZ 0x00575f63                       ; 00575f55
        ;   XREF to: 00575f63 (CONDITIONAL_JUMP)  ; LAB_00575f63
    AND byte ptr [EBX + 0x11b],0xbf     ; 00575f57 | g_CSfxSlot_ARRAY_02c745ec[1].changed_flags+3
    JMP 0x00575de1                      ; 00575f5e
        ;   XREF to: 00575de1 (UNCONDITIONAL_JUMP)  ; LAB_00575de1
    PUSH EBX                            ; 00575f63 | g_CSfxSlot_ARRAY_02c745ec[1].options.channel_index
        ;   Label: LAB_00575f63
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70 ; 00575f64
        ;   XREF to: 00571d70 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00571d70(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00575f69
    JMP 0x00575de1                      ; 00575f6c
        ;   XREF to: 00575de1 (UNCONDITIONAL_JUMP)  ; LAB_00575de1

