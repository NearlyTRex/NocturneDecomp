; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_pollAndMixSfx_FUN_00576c20(LPVOID *channel_buffers,int bits_per_sample,int num_channels,int samples_per_sec,int samples_per_block,int block_align)
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
;   sound_snddx.cpp_fillStreamBuffer_FUN_005776b0 at 00577797
;   sound_sndwav.cpp_writeWavOutBuffer_FUN_0057a5c0 at 0057a674
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_005f3181
;   TerminatedCString s_SfxSlot_kill_must_be_loc_005f3196
;   TerminatedCString s_sound_sndmain_cpp_005f31b6
;   TerminatedCString s_nextMixingBuffer_shouldn_005f31cb
;   TerminatedCString s_sound_sndmain_cpp_005f45ac
;   TerminatedCString s_pollSfx_must_be_locked_005f45c1
;   undefined4 DAT_006232e8
;   undefined4 DAT_006232ec
;   undefined4 DAT_006232f0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c74708
;   undefined4 DAT_02c78cec
;   undefined4 DAT_02c80660
;   undefined4 DAT_02c80664
;   ... and 4 more
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   crt_memory.c_memset_FUN_005bfb70
;   crt_string.c_memmove_FUN_005c25d0
;   sound_sndmain.cpp_convertMixBufToOutput_FUN_0056f890
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30
;   sound_sndmain.cpp_FUN_0056f1e0
;   sound_sndmain.cpp_FUN_00571420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00576c20
        ;   Label: sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20
    PUSH ESI                            ; 00576c21
    PUSH EDI                            ; 00576c22
    PUSH EBP                            ; 00576c23
    SUB ESP,0x5c                        ; 00576c24
    CMP dword ptr [0x02c807ec],0x0      ; 00576c27 | DAT_02c807ec
    JLE 0x00576edb                      ; 00576c2e
        ;   XREF to: 00576edb (CONDITIONAL_JUMP)  ; LAB_00576edb
    MOV ESI,dword ptr [ESP + 0x78]      ; 00576c34
        ;   Label: LAB_00576c34
    TEST ESI,ESI                        ; 00576c38
    JLE 0x00576c59                      ; 00576c3a
        ;   XREF to: 00576c59 (CONDITIONAL_JUMP)  ; LAB_00576c59
    LEA EDX,[ESI*0x4 + 0x0]             ; 00576c3c
    XOR EAX,EAX                         ; 00576c43
    CMP dword ptr [EAX + 0x2c80698],0x0 ; 00576c45
        ;   Label: LAB_00576c45
    JZ 0x00576f2b                       ; 00576c4c
        ;   XREF to: 00576f2b (CONDITIONAL_JUMP)  ; LAB_00576f2b
    ADD EAX,0x4                         ; 00576c52
    CMP EAX,EDX                         ; 00576c55
    JL 0x00576c45                       ; 00576c57
        ;   XREF to: 00576c45 (CONDITIONAL_JUMP)  ; LAB_00576c45
    MOV EAX,dword ptr [ESP + 0x74]      ; 00576c59
        ;   Label: LAB_00576c59
    CMP EAX,dword ptr [0x006232e8]      ; 00576c5d | DAT_006232e8
    JNZ 0x00576f2b                      ; 00576c63
        ;   XREF to: 00576f2b (CONDITIONAL_JUMP)  ; LAB_00576f2b
    MOV EAX,dword ptr [ESP + 0x78]      ; 00576c69
    CMP EAX,dword ptr [0x006232ec]      ; 00576c6d | DAT_006232ec
    JNZ 0x00576f2b                      ; 00576c73
        ;   XREF to: 00576f2b (CONDITIONAL_JUMP)  ; LAB_00576f2b
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00576c79
    CMP EAX,dword ptr [0x006232f0]      ; 00576c7d | DAT_006232f0
    JNZ 0x00576f2b                      ; 00576c83
        ;   XREF to: 00576f2b (CONDITIONAL_JUMP)  ; LAB_00576f2b
    CALL sound_sndmain.cpp_FUN_0056f1e0 ; 00576c89
        ;   XREF to: 0056f1e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_0056f1e0()
    MOV ECX,dword ptr [ESP + 0x78]      ; 00576c8e
    XOR EAX,EAX                         ; 00576c92
    TEST ECX,ECX                        ; 00576c94
    JLE 0x00576cb0                      ; 00576c96
        ;   XREF to: 00576cb0 (CONDITIONAL_JUMP)  ; LAB_00576cb0
    MOV EDX,dword ptr [ESP + 0x70]      ; 00576c98
    INC EAX                             ; 00576c9c
        ;   Label: LAB_00576c9c
    MOV ESI,dword ptr [EDX]             ; 00576c9d
    MOV dword ptr [ESP + EAX*0x4 + 0x28],ESI ; 00576c9f
    MOV ESI,dword ptr [ESP + 0x78]      ; 00576ca3
    ADD EDX,0x4                         ; 00576ca7
    CMP EAX,ESI                         ; 00576caa
    JL 0x00576c9c                       ; 00576cac
        ;   XREF to: 00576c9c (CONDITIONAL_JUMP)  ; LAB_00576c9c
    MOV EAX,EAX                         ; 00576cae
    MOV EAX,dword ptr [ESP + 0x78]      ; 00576cb0
        ;   Label: LAB_00576cb0
    SHL EAX,0x2                         ; 00576cb4
    MOV dword ptr [ESP + 0x4c],EAX      ; 00576cb7
    MOV EAX,0x2c745ec                   ; 00576cbb
    ADD EAX,0x4700                      ; 00576cc0
    MOV dword ptr [ESP + 0x54],EAX      ; 00576cc5 | DAT_02c78cec
    MOV dword ptr [ESP + 0x50],EAX      ; 00576cc9 | DAT_02c78cec
    CMP dword ptr [ESP + 0x80],0x0      ; 00576ccd
        ;   Label: LAB_00576ccd
    JLE 0x00576f2b                      ; 00576cd5
        ;   XREF to: 00576f2b (CONDITIONAL_JUMP)  ; LAB_00576f2b
    CMP dword ptr [0x02c80660],0x1      ; 00576cdb | DAT_02c80660
    JGE 0x00576e43                      ; 00576ce2
        ;   XREF to: 00576e43 (CONDITIONAL_JUMP)  ; LAB_00576e43
    CMP dword ptr [0x02c807ec],0x0      ; 00576ce8 | DAT_02c807ec
    JLE 0x00576f03                      ; 00576cef
        ;   XREF to: 00576f03 (CONDITIONAL_JUMP)  ; LAB_00576f03
    CMP dword ptr [0x02c80660],0x0      ; 00576cf5 | DAT_02c80660
        ;   Label: LAB_00576cf5
    JLE 0x00576d21                      ; 00576cfc
        ;   XREF to: 00576d21 (CONDITIONAL_JUMP)  ; LAB_00576d21
    MOV ESI,0x5f31b6                    ; 00576cfe | = "..\\sound\\sndmain.cpp"
    MOV EDI,0x597                       ; 00576d03
    PUSH 0x5f31cb                       ; 00576d08 | = "nextMixingBuffer - shouldn't have any..."
    MOV dword ptr [0x01d1d400],ESI      ; 00576d0d | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 00576d13 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00576d19
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00576d1e
    MOV ESI,dword ptr [0x02c80668]      ; 00576d21 | DAT_02c80668
        ;   Label: LAB_00576d21
    MOV EBP,dword ptr [0x006232ec]      ; 00576d27 | DAT_006232ec
    XOR EDI,EDI                         ; 00576d2d
    SHL ESI,0x2                         ; 00576d2f
    TEST EBP,EBP                        ; 00576d32
    JLE 0x00576d91                      ; 00576d34
        ;   XREF to: 00576d91 (CONDITIONAL_JUMP)  ; LAB_00576d91
    XOR EBX,EBX                         ; 00576d36
    MOV EAX,[0x02c8066c]                ; 00576d38 | DAT_02c8066c
        ;   Label: LAB_00576d38
    DEC EAX                             ; 00576d3d
    IMUL EAX,ESI                        ; 00576d3e
    MOV EDX,dword ptr [0x02c80668]      ; 00576d41 | DAT_02c80668
    SHL EDX,0x2                         ; 00576d47
    PUSH EAX                            ; 00576d4a
    MOV EAX,dword ptr [EBX + 0x2c80698] ; 00576d4b
    ADD EDX,EAX                         ; 00576d51
    PUSH EDX                            ; 00576d53
    PUSH EAX                            ; 00576d54
    CALL crt_string.c_memmove_FUN_005c25d0 ; 00576d55
        ;   XREF to: 005c25d0 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_005c25d0(void * dest, void * src, SIZE_T n)
    MOV EAX,[0x02c8066c]                ; 00576d5a | DAT_02c8066c
    MOV EDX,dword ptr [0x02c80668]      ; 00576d5f | DAT_02c80668
    DEC EAX                             ; 00576d65
    IMUL EAX,EDX                        ; 00576d66
    ADD ESP,0xc                         ; 00576d69
    PUSH ESI                            ; 00576d6c
    SHL EAX,0x2                         ; 00576d6d
    MOV EDX,dword ptr [EBX + 0x2c80698] ; 00576d70
    PUSH 0x0                            ; 00576d76
    ADD EAX,EDX                         ; 00576d78
    PUSH EAX                            ; 00576d7a
    ADD EBX,0x4                         ; 00576d7b
    INC EDI                             ; 00576d7e
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00576d7f
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV ECX,dword ptr [0x006232ec]      ; 00576d84 | DAT_006232ec
    ADD ESP,0xc                         ; 00576d8a
    CMP EDI,ECX                         ; 00576d8d
    JL 0x00576d38                       ; 00576d8f
        ;   XREF to: 00576d38 (CONDITIONAL_JUMP)  ; LAB_00576d38
    MOV EAX,[0x02c80668]                ; 00576d91 | DAT_02c80668
        ;   Label: LAB_00576d91
    MOV dword ptr [ESP + 0x20],EAX      ; 00576d96
    MOV EAX,[0x006232ec]                ; 00576d9a | DAT_006232ec
    MOV dword ptr [ESP + 0x24],EAX      ; 00576d9f
    MOV EAX,[0x006232f0]                ; 00576da3 | DAT_006232f0
    MOV EBX,dword ptr [ESP + 0x24]      ; 00576da8
    MOV dword ptr [ESP + 0x28],EAX      ; 00576dac
    TEST EBX,EBX                        ; 00576db0
    JLE 0x00576dca                      ; 00576db2
        ;   XREF to: 00576dca (CONDITIONAL_JUMP)  ; LAB_00576dca
    SHL EBX,0x2                         ; 00576db4
    XOR EAX,EAX                         ; 00576db7
    ADD EAX,0x4                         ; 00576db9
        ;   Label: LAB_00576db9
    MOV EDX,dword ptr [EAX + 0x2c80694] ; 00576dbc
    MOV dword ptr [ESP + EAX*0x1 + -0x4],EDX ; 00576dc2
    CMP EAX,EBX                         ; 00576dc6
    JL 0x00576db9                       ; 00576dc8
        ;   XREF to: 00576db9 (CONDITIONAL_JUMP)  ; LAB_00576db9
    FILD dword ptr [0x02c80668]         ; 00576dca | DAT_02c80668
        ;   Label: LAB_00576dca
    FILD dword ptr [0x006232f0]         ; 00576dd0 | DAT_006232f0
    FDIVP                               ; 00576dd6
    MOV EBX,0x2c745ec                   ; 00576dd8
    MOV ESI,dword ptr [ESP + 0x50]      ; 00576ddd
    FSTP float ptr [ESP + 0x58]         ; 00576de1
    PUSH dword ptr [ESP + 0x58]         ; 00576de5
        ;   Label: LAB_00576de5
    PUSH EBX                            ; 00576de9 | DAT_02c74708
    CALL sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 ; 00576dea
        ;   XREF to: 00570f30 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30(CSfxSlot * this_ptr, float delta_time)
    ADD EBX,0x11c                       ; 00576def
    ADD ESP,0x8                         ; 00576df5
    CMP EBX,ESI                         ; 00576df8
    JNZ 0x00576de5                      ; 00576dfa
        ;   XREF to: 00576de5 (CONDITIONAL_JUMP)  ; LAB_00576de5
    MOV EBX,0x2c745ec                   ; 00576dfc
    SUB ESP,0x2c                        ; 00576e01
        ;   Label: LAB_00576e01
    MOV EDI,ESP                         ; 00576e04
    MOV ECX,0xb                         ; 00576e06
    LEA ESI,[ESP + 0x2c]                ; 00576e0b
    PUSH EBX                            ; 00576e0f | DAT_02c74708
    MOVSD.REP ES:EDI,ESI                ; 00576e10
    CALL sound_sndmain.cpp_FUN_00571420 ; 00576e12
        ;   XREF to: 00571420 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00571420()
    ADD ESP,0x30                        ; 00576e17
    ADD EBX,0x11c                       ; 00576e1a
    CMP EBX,dword ptr [ESP + 0x54]      ; 00576e20
    JNZ 0x00576e01                      ; 00576e24
        ;   XREF to: 00576e01 (CONDITIONAL_JUMP)  ; LAB_00576e01
    MOV EAX,[0x02c80668]                ; 00576e26 | DAT_02c80668
    MOV [0x02c80660],EAX                ; 00576e2b | DAT_02c80660
    MOV EAX,[0x02c80708]                ; 00576e30 | DAT_02c80708
    XOR EBP,EBP                         ; 00576e35
    INC EAX                             ; 00576e37
    MOV dword ptr [0x02c80664],EBP      ; 00576e38 | DAT_02c80664
    MOV [0x02c80708],EAX                ; 00576e3e | DAT_02c80708
    MOV EDX,dword ptr [ESP + 0x80]      ; 00576e43
        ;   Label: LAB_00576e43
    MOV ESI,dword ptr [0x02c80660]      ; 00576e4a | DAT_02c80660
    CMP ESI,EDX                         ; 00576e50
    JLE 0x00576e56                      ; 00576e52
        ;   XREF to: 00576e56 (CONDITIONAL_JUMP)  ; LAB_00576e56
    MOV ESI,EDX                         ; 00576e54
    CMP dword ptr [ESP + 0x78],0x0      ; 00576e56
        ;   Label: LAB_00576e56
    JLE 0x00576eaa                      ; 00576e5b
        ;   XREF to: 00576eaa (CONDITIONAL_JUMP)  ; LAB_00576eaa
    MOV EDI,dword ptr [ESP + 0x84]      ; 00576e5d
    MOV EBP,dword ptr [ESP + 0x4c]      ; 00576e64
    XOR EBX,EBX                         ; 00576e68
    IMUL EDI,ESI                        ; 00576e6a
    MOV EAX,dword ptr [ESP + 0x84]      ; 00576e6d
        ;   Label: LAB_00576e6d
    PUSH EAX                            ; 00576e74
    MOV EDX,dword ptr [ESP + 0x78]      ; 00576e75
    PUSH ESI                            ; 00576e79
    MOV ECX,dword ptr [ESP + EBX*0x1 + 0x34] ; 00576e7a
    MOV EAX,[0x02c80664]                ; 00576e7e | DAT_02c80664
    PUSH EDX                            ; 00576e83
    SHL EAX,0x2                         ; 00576e84
    MOV EDX,dword ptr [EBX + 0x2c80698] ; 00576e87
    PUSH ECX                            ; 00576e8d
    ADD EAX,EDX                         ; 00576e8e
    PUSH EAX                            ; 00576e90
    CALL sound_sndmain.cpp_convertMixBufToOutput_FUN_0056f890 ; 00576e91
        ;   XREF to: 0056f890 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_convertMixBufToOutput_FUN_0056f890()
    ADD ESP,0x14                        ; 00576e96
    MOV EAX,dword ptr [ESP + EBX*0x1 + 0x2c] ; 00576e99
    ADD EBX,0x4                         ; 00576e9d
    ADD EAX,EDI                         ; 00576ea0
    MOV dword ptr [ESP + EBX*0x1 + 0x28],EAX ; 00576ea2
    CMP EBX,EBP                         ; 00576ea6
    JL 0x00576e6d                       ; 00576ea8
        ;   XREF to: 00576e6d (CONDITIONAL_JUMP)  ; LAB_00576e6d
    MOV EBX,dword ptr [ESP + 0x80]      ; 00576eaa
        ;   Label: LAB_00576eaa
    MOV EDI,dword ptr [0x02c80660]      ; 00576eb1 | DAT_02c80660
    MOV EBP,dword ptr [0x02c80664]      ; 00576eb7 | DAT_02c80664
    SUB EDI,ESI                         ; 00576ebd
    ADD EBP,ESI                         ; 00576ebf
    SUB EBX,ESI                         ; 00576ec1
    MOV dword ptr [0x02c80660],EDI      ; 00576ec3 | DAT_02c80660
    MOV dword ptr [0x02c80664],EBP      ; 00576ec9 | DAT_02c80664
    MOV dword ptr [ESP + 0x80],EBX      ; 00576ecf
    JMP 0x00576ccd                      ; 00576ed6
        ;   XREF to: 00576ccd (UNCONDITIONAL_JUMP)  ; LAB_00576ccd
    MOV ECX,0x5f45ac                    ; 00576edb | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00576edb
    MOV EBX,0x199a                      ; 00576ee0
    PUSH 0x5f45c1                       ; 00576ee5 | = "pollSfx - must be locked!"
    MOV dword ptr [0x01d1d400],ECX      ; 00576eea | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBX      ; 00576ef0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00576ef6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00576efb
    JMP 0x00576c34                      ; 00576efe
        ;   XREF to: 00576c34 (UNCONDITIONAL_JUMP)  ; LAB_00576c34
    MOV EDX,0x5f3181                    ; 00576f03 | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00576f03
    MOV ECX,0x593                       ; 00576f08
    PUSH 0x5f3196                       ; 00576f0d | = "SfxSlot::kill - must be locked!"
    MOV dword ptr [0x01d1d400],EDX      ; 00576f12 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 00576f18 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00576f1e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00576f23
    JMP 0x00576cf5                      ; 00576f26
        ;   XREF to: 00576cf5 (UNCONDITIONAL_JUMP)  ; LAB_00576cf5
    ADD ESP,0x5c                        ; 00576f2b
        ;   Label: LAB_00576f2b
    POP EBP                             ; 00576f2e
    POP EDI                             ; 00576f2f
    POP ESI                             ; 00576f30
    POP EBX                             ; 00576f31
    RET                                 ; 00576f32

