; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00559d90(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
;
; Parameters:
; LPVOID *         Stack[0x4]:4   channel_buffers
; int              Stack[0x8]:4   bits_per_sample
; int              Stack[0xc]:4   num_channels
; int              Stack[0x10]:4   samples_per_sec
; int              Stack[0x14]:4   samples_per_block
; int              Stack[0x18]:4   block_align
; Local Variables:
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_snddx.cpp_fillStreamBuffer_FUN_0055a820 at 0055a907
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0055d6f0 at 0055d7a4
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005d2a6b
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005d2a80
;   TerminatedCString s_sound_sndmain_cpp_005d2aa0
;   TerminatedCString s_nextMixingBuffer_shouldn_005d2ab5
;   TerminatedCString s_sound_sndmain_cpp_005d3ea6
;   TerminatedCString s_pollSfx_must_be_locked_005d3ebb
;   undefined4 DAT_00604228
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604230
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   undefined4 DAT_02ce7338
;   undefined4 DAT_02ceb91c
;   undefined4 DAT_02cf3294
;   undefined4 DAT_02cf3298
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_memory.c_memset_FUN_005a28f0
;   crt_string.c_memmove_FUN_005a54c0
;   sound_sndmain.cpp_convertMixBufToOutput_FUN_00552d90
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430
;   sound_sndmain.cpp_FUN_005526d0
;   sound_sndmain.cpp_FUN_00554920
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559d90
        ;   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90
    PUSH ESI                            ; 00559d91
    PUSH EDI                            ; 00559d92
    PUSH EBP                            ; 00559d93
    SUB ESP,0x5c                        ; 00559d94
    CMP dword ptr [0x02cf341c],0x0      ; 00559d97 | DAT_02cf341c
    JLE 0x0055a04b                      ; 00559d9e
        ;   XREF to: 0055a04b (CONDITIONAL_JUMP)  ; LAB_0055a04b
    MOV ESI,dword ptr [ESP + 0x78]      ; 00559da4
        ;   Label: LAB_00559da4
    TEST ESI,ESI                        ; 00559da8
    JLE 0x00559dc9                      ; 00559daa
        ;   XREF to: 00559dc9 (CONDITIONAL_JUMP)  ; LAB_00559dc9
    LEA EDX,[ESI*0x4 + 0x0]             ; 00559dac
    XOR EAX,EAX                         ; 00559db3
    CMP dword ptr [EAX + 0x2cf32cc],0x0 ; 00559db5
        ;   Label: LAB_00559db5
    JZ 0x0055a09b                       ; 00559dbc
        ;   XREF to: 0055a09b (CONDITIONAL_JUMP)  ; LAB_0055a09b
    ADD EAX,0x4                         ; 00559dc2
    CMP EAX,EDX                         ; 00559dc5
    JL 0x00559db5                       ; 00559dc7
        ;   XREF to: 00559db5 (CONDITIONAL_JUMP)  ; LAB_00559db5
    MOV EAX,dword ptr [ESP + 0x74]      ; 00559dc9
        ;   Label: LAB_00559dc9
    CMP EAX,dword ptr [0x00604228]      ; 00559dcd | DAT_00604228
    JNZ 0x0055a09b                      ; 00559dd3
        ;   XREF to: 0055a09b (CONDITIONAL_JUMP)  ; LAB_0055a09b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00559dd9
    CMP EAX,dword ptr [0x0060422c]      ; 00559ddd | DAT_0060422c
    JNZ 0x0055a09b                      ; 00559de3
        ;   XREF to: 0055a09b (CONDITIONAL_JUMP)  ; LAB_0055a09b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00559de9
    CMP EAX,dword ptr [0x00604230]      ; 00559ded | DAT_00604230
    JNZ 0x0055a09b                      ; 00559df3
        ;   XREF to: 0055a09b (CONDITIONAL_JUMP)  ; LAB_0055a09b
    CALL sound_sndmain.cpp_FUN_005526d0 ; 00559df9
        ;   XREF to: 005526d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005526d0()
    MOV ECX,dword ptr [ESP + 0x78]      ; 00559dfe
    XOR EAX,EAX                         ; 00559e02
    TEST ECX,ECX                        ; 00559e04
    JLE 0x00559e20                      ; 00559e06
        ;   XREF to: 00559e20 (CONDITIONAL_JUMP)  ; LAB_00559e20
    MOV EDX,dword ptr [ESP + 0x70]      ; 00559e08
    INC EAX                             ; 00559e0c
        ;   Label: LAB_00559e0c
    MOV ESI,dword ptr [EDX]             ; 00559e0d
    MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI ; 00559e0f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00559e13
    ADD EDX,0x4                         ; 00559e17
    CMP EAX,ESI                         ; 00559e1a
    JL 0x00559e0c                       ; 00559e1c
        ;   XREF to: 00559e0c (CONDITIONAL_JUMP)  ; LAB_00559e0c
    MOV EAX,EAX                         ; 00559e1e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00559e20
        ;   Label: LAB_00559e20
    SHL EAX,0x2                         ; 00559e24
    MOV dword ptr [ESP + 0x4c],EAX      ; 00559e27
    MOV EAX,0x2ce721c                   ; 00559e2b
    ADD EAX,0x4700                      ; 00559e30
    MOV dword ptr [ESP + 0x54],EAX      ; 00559e35 | DAT_02ceb91c
    MOV dword ptr [ESP + 0x50],EAX      ; 00559e39 | DAT_02ceb91c
    CMP dword ptr [ESP + 0x80],0x0      ; 00559e3d
        ;   Label: LAB_00559e3d
    JLE 0x0055a09b                      ; 00559e45
        ;   XREF to: 0055a09b (CONDITIONAL_JUMP)  ; LAB_0055a09b
    CMP dword ptr [0x02cf3294],0x1      ; 00559e4b | DAT_02cf3294
    JGE 0x00559fb3                      ; 00559e52
        ;   XREF to: 00559fb3 (CONDITIONAL_JUMP)  ; LAB_00559fb3
    CMP dword ptr [0x02cf341c],0x0      ; 00559e58 | DAT_02cf341c
    JLE 0x0055a073                      ; 00559e5f
        ;   XREF to: 0055a073 (CONDITIONAL_JUMP)  ; LAB_0055a073
    CMP dword ptr [0x02cf3294],0x0      ; 00559e65 | DAT_02cf3294
        ;   Label: LAB_00559e65
    JLE 0x00559e91                      ; 00559e6c
        ;   XREF to: 00559e91 (CONDITIONAL_JUMP)  ; LAB_00559e91
    MOV ESI,0x5d2aa0                    ; 00559e6e | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x599                       ; 00559e73
    PUSH 0x5d2ab5                       ; 00559e78 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x01d71de0],ESI      ; 00559e7d | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 00559e83 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00559e89
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00559e8e
    MOV ESI,dword ptr [0x02cf329c]      ; 00559e91 | DAT_02cf329c
        ;   Label: LAB_00559e91
    MOV EBP,dword ptr [0x0060422c]      ; 00559e97 | DAT_0060422c
    XOR EDI,EDI                         ; 00559e9d
    SHL ESI,0x2                         ; 00559e9f
    TEST EBP,EBP                        ; 00559ea2
    JLE 0x00559f01                      ; 00559ea4
        ;   XREF to: 00559f01 (CONDITIONAL_JUMP)  ; LAB_00559f01
    XOR EBX,EBX                         ; 00559ea6
    MOV EAX,[0x02cf32a0]                ; 00559ea8 | DAT_02cf32a0
        ;   Label: LAB_00559ea8
    DEC EAX                             ; 00559ead
    IMUL EAX,ESI                        ; 00559eae
    MOV EDX,dword ptr [0x02cf329c]      ; 00559eb1 | DAT_02cf329c
    SHL EDX,0x2                         ; 00559eb7
    PUSH EAX                            ; 00559eba
    MOV EAX,dword ptr [EBX + 0x2cf32cc] ; 00559ebb
    ADD EDX,EAX                         ; 00559ec1
    PUSH EDX                            ; 00559ec3
    PUSH EAX                            ; 00559ec4
    CALL crt_string.c_memmove_FUN_005a54c0 ; 00559ec5
        ;   XREF to: 005a54c0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005a54c0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02cf32a0]                ; 00559eca | DAT_02cf32a0
    MOV EDX,dword ptr [0x02cf329c]      ; 00559ecf | DAT_02cf329c
    DEC EAX                             ; 00559ed5
    IMUL EAX,EDX                        ; 00559ed6
    ADD ESP,0xc                         ; 00559ed9
    PUSH ESI                            ; 00559edc
    SHL EAX,0x2                         ; 00559edd
    MOV EDX,dword ptr [EBX + 0x2cf32cc] ; 00559ee0
    PUSH 0x0                            ; 00559ee6
    ADD EAX,EDX                         ; 00559ee8
    PUSH EAX                            ; 00559eea
    ADD EBX,0x4                         ; 00559eeb
    INC EDI                             ; 00559eee
    CALL crt_memory.c_memset_FUN_005a28f0 ; 00559eef
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005a28f0(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x0060422c]      ; 00559ef4 | DAT_0060422c
    ADD ESP,0xc                         ; 00559efa
    CMP EDI,ECX                         ; 00559efd
    JL 0x00559ea8                       ; 00559eff
        ;   XREF to: 00559ea8 (CONDITIONAL_JUMP)  ; LAB_00559ea8
    MOV EAX,[0x02cf329c]                ; 00559f01 | DAT_02cf329c
        ;   Label: LAB_00559f01
    MOV dword ptr [ESP + 0x20],EAX      ; 00559f06
    MOV EAX,[0x0060422c]                ; 00559f0a | DAT_0060422c
    MOV dword ptr [ESP + 0x24],EAX      ; 00559f0f
    MOV EAX,[0x00604230]                ; 00559f13 | DAT_00604230
    MOV EBX,dword ptr [ESP + 0x24]      ; 00559f18
    MOV dword ptr [ESP + 0x28],EAX      ; 00559f1c
    TEST EBX,EBX                        ; 00559f20
    JLE 0x00559f3a                      ; 00559f22
        ;   XREF to: 00559f3a (CONDITIONAL_JUMP)  ; LAB_00559f3a
    SHL EBX,0x2                         ; 00559f24
    XOR EAX,EAX                         ; 00559f27
    ADD EAX,0x4                         ; 00559f29
        ;   Label: LAB_00559f29
    MOV EDX,dword ptr [EAX + 0x2cf32c8] ; 00559f2c
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00559f32
    CMP EAX,EBX                         ; 00559f36
    JL 0x00559f29                       ; 00559f38
        ;   XREF to: 00559f29 (CONDITIONAL_JUMP)  ; LAB_00559f29
    FILD dword ptr [0x02cf329c]         ; 00559f3a | DAT_02cf329c
        ;   Label: LAB_00559f3a
    FILD dword ptr [0x00604230]         ; 00559f40 | DAT_00604230
    FDIVP                               ; 00559f46
    MOV EBX,0x2ce721c                   ; 00559f48
    MOV ESI,dword ptr [ESP + 0x50]      ; 00559f4d
    FSTP float ptr [ESP + 0x58]         ; 00559f51
    PUSH dword ptr [ESP + 0x58]         ; 00559f55
        ;   Label: LAB_00559f55
    PUSH EBX                            ; 00559f59 | DAT_02ce7338
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 ; 00559f5a
        ;   XREF to: 00554430 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 00559f5f
    ADD ESP,0x8                         ; 00559f65
    CMP EBX,ESI                         ; 00559f68
    JNZ 0x00559f55                      ; 00559f6a
        ;   XREF to: 00559f55 (CONDITIONAL_JUMP)  ; LAB_00559f55
    MOV EBX,0x2ce721c                   ; 00559f6c
    SUB ESP,0x2c                        ; 00559f71
        ;   Label: LAB_00559f71
    MOV EDI,ESP                         ; 00559f74
    MOV ECX,0xb                         ; 00559f76
    LEA ESI,[ESP + 0x2c]                ; 00559f7b
    PUSH EBX                            ; 00559f7f | DAT_02ce7338
    MOVSD.REP ES:EDI,ESI                ; 00559f80
    CALL sound_sndmain.cpp_FUN_00554920 ; 00559f82
        ;   XREF to: 00554920 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00554920()
    ADD ESP,0x30                        ; 00559f87
    ADD EBX,0x11c                       ; 00559f8a
    CMP EBX,dword ptr [ESP + 0x54]      ; 00559f90
    JNZ 0x00559f71                      ; 00559f94
        ;   XREF to: 00559f71 (CONDITIONAL_JUMP)  ; LAB_00559f71
    MOV EAX,[0x02cf329c]                ; 00559f96 | DAT_02cf329c
    MOV [0x02cf3294],EAX                ; 00559f9b | DAT_02cf3294
    MOV EAX,[0x02cf3338]                ; 00559fa0 | DAT_02cf3338
    XOR EBP,EBP                         ; 00559fa5
    INC EAX                             ; 00559fa7
    MOV dword ptr [0x02cf3298],EBP      ; 00559fa8 | DAT_02cf3298
    MOV [0x02cf3338],EAX                ; 00559fae | DAT_02cf3338
    MOV EDX,dword ptr [ESP + 0x80]      ; 00559fb3
        ;   Label: LAB_00559fb3
    MOV ESI,dword ptr [0x02cf3294]      ; 00559fba | DAT_02cf3294
    CMP ESI,EDX                         ; 00559fc0
    JLE 0x00559fc6                      ; 00559fc2
        ;   XREF to: 00559fc6 (CONDITIONAL_JUMP)  ; LAB_00559fc6
    MOV ESI,EDX                         ; 00559fc4
    CMP dword ptr [ESP + 0x78],0x0      ; 00559fc6
        ;   Label: LAB_00559fc6
    JLE 0x0055a01a                      ; 00559fcb
        ;   XREF to: 0055a01a (CONDITIONAL_JUMP)  ; LAB_0055a01a
    MOV EDI,dword ptr [ESP + 0x84]      ; 00559fcd
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00559fd4
    XOR EBX,EBX                         ; 00559fd8
    IMUL EDI,ESI                        ; 00559fda
    MOV EAX,dword ptr [ESP + 0x84]      ; 00559fdd
        ;   Label: LAB_00559fdd
    PUSH EAX                            ; 00559fe4
    MOV EDX,dword ptr [ESP + 0x78]      ; 00559fe5
    PUSH ESI                            ; 00559fe9
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34] ; 00559fea
    MOV EAX,[0x02cf3298]                ; 00559fee | DAT_02cf3298
    PUSH EDX                            ; 00559ff3
    SHL EAX,0x2                         ; 00559ff4
    MOV EDX,dword ptr [EBX + 0x2cf32cc] ; 00559ff7
    PUSH ECX                            ; 00559ffd
    ADD EAX,EDX                         ; 00559ffe
    PUSH EAX                            ; 0055a000
    CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_00552d90 ; 0055a001
        ;   XREF to: 00552d90 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_convertMixBufToOutput_FUN_00552d90(float * input_samples, ushort * output_buffer, int bits_per_sample, int num_samples, ...)
    ADD ESP,0x14                        ; 0055a006
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c] ; 0055a009
    ADD EBX,0x4                         ; 0055a00d
    ADD EAX,EDI                         ; 0055a010
    MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX ; 0055a012
    CMP EBX,EBP                         ; 0055a016
    JL 0x00559fdd                       ; 0055a018
        ;   XREF to: 00559fdd (CONDITIONAL_JUMP)  ; LAB_00559fdd
    MOV EBX,dword ptr [ESP + 0x80]      ; 0055a01a
        ;   Label: LAB_0055a01a
    MOV EDI,dword ptr [0x02cf3294]      ; 0055a021 | DAT_02cf3294
    MOV EBP,dword ptr [0x02cf3298]      ; 0055a027 | DAT_02cf3298
    SUB EDI,ESI                         ; 0055a02d
    ADD EBP,ESI                         ; 0055a02f
    SUB EBX,ESI                         ; 0055a031
    MOV dword ptr [0x02cf3294],EDI      ; 0055a033 | DAT_02cf3294
    MOV dword ptr [0x02cf3298],EBP      ; 0055a039 | DAT_02cf3298
    MOV dword ptr [ESP + 0x80],EBX      ; 0055a03f
    JMP 0x00559e3d                      ; 0055a046
        ;   XREF to: 00559e3d (UNCONDITIONAL_JUMP)  ; LAB_00559e3d
    MOV ECX,0x5d3ea6                    ; 0055a04b | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055a04b
    MOV EBX,0x19ad                      ; 0055a050
    PUSH 0x5d3ebb                       ; 0055a055 | = "pollSfx - must be locked!"
    MOV dword ptr [0x01d71de0],ECX      ; 0055a05a | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EBX      ; 0055a060 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055a066
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055a06b
    JMP 0x00559da4                      ; 0055a06e
        ;   XREF to: 00559da4 (UNCONDITIONAL_JUMP)  ; LAB_00559da4
    MOV EDX,0x5d2a6b                    ; 0055a073 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_0055a073
    MOV ECX,0x595                       ; 0055a078
    PUSH 0x5d2a80                       ; 0055a07d | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d71de0],EDX      ; 0055a082 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0055a088 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055a08e
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055a093
    JMP 0x00559e65                      ; 0055a096
        ;   XREF to: 00559e65 (UNCONDITIONAL_JUMP)  ; LAB_00559e65
    ADD ESP,0x5c                        ; 0055a09b
        ;   Label: LAB_0055a09b
    POP EBP                             ; 0055a09e
    POP EDI                             ; 0055a09f
    POP ESI                             ; 0055a0a0
    POP EBX                             ; 0055a0a1
    RET                                 ; 0055a0a2

