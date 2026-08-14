; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_CSfxSlot_mix_FUN_00524d10(CSfxSlot *this_ptr,SMixBuffer mix_buffer)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
; SMixBuffer       Stack[0x8]:44   mix_buffer
; Local Variables:
; undefined8       Stack[-0xc8]:8  local_c8
; undefined8       Stack[-0xc0]:8  local_c0
; undefined8       Stack[-0xb8]:8  local_b8
; undefined8       Stack[-0xb0]:8  local_b0
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined8       Stack[-0x74]:8  local_74
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   sound_sndmain.cpp_nextMixingBuffer_FUN_00523170 at 005232c0
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005294f0 at 005296e2
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_00592f4e
;   TerminatedCString s_SfxSlot_mix_must_be_lock_00592f63
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02dc8340
;   undefined4 DAT_02dc84bc
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_floor_FUN_005648c0
;   crt_math.c_round_FUN_00563a30
;   crt_memory.c_memset_FUN_00563cc0
;   sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570
;   sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870
;   sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610
;   sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524d10
        ;   Label: sound_sndmain.cpp_CSfxSlot_mix_FUN_00524d10
    PUSH ESI                            ; 00524d11
    PUSH EDI                            ; 00524d12
    PUSH EBP                            ; 00524d13
    MOV EBP,ESP                         ; 00524d14
    SUB ESP,0xb0                        ; 00524d16
    AND ESP,0xfffffff8                  ; 00524d1c
    MOV EDI,dword ptr [EBP + 0x14]      ; 00524d1f
    CMP dword ptr [0x02dc84bc],0x0      ; 00524d22 | DAT_02dc84bc
    JLE 0x00524e7e                      ; 00524d29
        ;   XREF to: 00524e7e (CONDITIONAL_JUMP)  ; LAB_00524e7e
    CMP dword ptr [EDI + 0x70],0x0      ; 00524d2f
        ;   Label: LAB_00524d2f
    JZ 0x00524e77                       ; 00524d33
        ;   XREF to: 00524e77 (CONDITIONAL_JUMP)  ; LAB_00524e77
    MOV EAX,dword ptr [EBP + 0x38]      ; 00524d39
    MOV dword ptr [ESP + 0x68],EAX      ; 00524d3c
    MOV EAX,0x1                         ; 00524d40
    MOV EDX,dword ptr [EDI + 0x74]      ; 00524d45
    MOV dword ptr [ESP + 0x5c],EAX      ; 00524d48
    TEST EDX,EDX                        ; 00524d4c
    JZ 0x00524d98                       ; 00524d4e
        ;   XREF to: 00524d98 (CONDITIONAL_JUMP)  ; LAB_00524d98
    MOV ECX,dword ptr [EDX + 0x104]     ; 00524d50
    ADD ECX,0x6                         ; 00524d56
    SHL EAX,CL                          ; 00524d59
    MOV dword ptr [ESP + 0xac],EAX      ; 00524d5b
    FILD dword ptr [ESP + 0xac]         ; 00524d62
    FLD1                                ; 00524d69
    FDIVRP                              ; 00524d6b
    MOV EBX,dword ptr [EBP + 0x3c]      ; 00524d6d
    XOR ECX,ECX                         ; 00524d70
    FSTP float ptr [ESP + 0x54]         ; 00524d72
    TEST EBX,EBX                        ; 00524d76
    JLE 0x00524d98                      ; 00524d78
        ;   XREF to: 00524d98 (CONDITIONAL_JUMP)  ; LAB_00524d98
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00524d7a
    MOV EDX,EDI                         ; 00524d7d
    FLD float ptr [EDX + 0x9c]          ; 00524d7f
        ;   Label: LAB_00524d7f
    FCOMP float ptr [ESP + 0x54]        ; 00524d85
    FNSTSW AX                           ; 00524d89
    SAHF                                ; 00524d8b
    JBE 0x00524ea6                      ; 00524d8c
        ;   XREF to: 00524ea6 (CONDITIONAL_JUMP)  ; LAB_00524ea6
    XOR EAX,EAX                         ; 00524d92
    MOV dword ptr [ESP + 0x5c],EAX      ; 00524d94
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00524d98
        ;   Label: LAB_00524d98
    XOR ESI,ESI                         ; 00524d9b
    TEST EDX,EDX                        ; 00524d9d
    JLE 0x00524e1f                      ; 00524d9f
        ;   XREF to: 00524e1f (CONDITIONAL_JUMP)  ; LAB_00524e1f
    MOV EBX,EDI                         ; 00524da5
    CMP dword ptr [ESP + 0x5c],0x0      ; 00524da7
        ;   Label: LAB_00524da7
    JZ 0x00524eb7                       ; 00524dac
        ;   XREF to: 00524eb7 (CONDITIONAL_JUMP)  ; LAB_00524eb7
    MOV EAX,dword ptr [EBX + 0xbc]      ; 00524db2
        ;   Label: LAB_00524db2
    MOV dword ptr [EBX + 0xdc],EAX      ; 00524db8
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00524dbe
        ;   Label: LAB_00524dbe
    LEA ECX,[ESI*0x4 + 0x0]             ; 00524dc4
    SHL EAX,0x2                         ; 00524dcb
    ADD dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 00524dce
    MOV EAX,dword ptr [EBX + 0xdc]      ; 00524dd2
    SUB EAX,dword ptr [EBX + 0xbc]      ; 00524dd8
    CDQ                                 ; 00524dde
    XOR EAX,EDX                         ; 00524ddf
    SUB EAX,EDX                         ; 00524de1
    CMP EAX,0x1                         ; 00524de3
    JLE 0x00524ec9                      ; 00524de6
        ;   XREF to: 00524ec9 (CONDITIONAL_JUMP)  ; LAB_00524ec9
    MOV EAX,dword ptr [ECX + EBP*0x1 + 0x18] ; 00524dec
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 00524df0
    MOV EAX,dword ptr [ECX + 0x2dc833c] ; 00524df4 | DAT_02dc8340
    MOV dword ptr [ECX + EBP*0x1 + 0x18],EAX ; 00524dfa
    MOV EAX,dword ptr [EBP + 0x38]      ; 00524dfe
    SHL EAX,0x2                         ; 00524e01
    PUSH EAX                            ; 00524e04
    PUSH 0x0                            ; 00524e05
    MOV EDX,dword ptr [ECX + EBP*0x1 + 0x18] ; 00524e07
    PUSH EDX                            ; 00524e0b
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00524e0c
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 00524e11
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00524e14
        ;   Label: LAB_00524e14
    INC ESI                             ; 00524e17
    ADD EBX,0x4                         ; 00524e18
    CMP ESI,ECX                         ; 00524e1b
    JL 0x00524da7                       ; 00524e1d
        ;   XREF to: 00524da7 (CONDITIONAL_JUMP)  ; LAB_00524da7
    LEA EAX,[EDI + 0x9c]                ; 00524e1f
        ;   Label: LAB_00524e1f
    MOV dword ptr [ESP + 0x58],EAX      ; 00524e25
    CMP dword ptr [EDI + 0x70],0x0      ; 00524e29
        ;   Label: LAB_00524e29
    JNZ 0x00524ed4                      ; 00524e2d
        ;   XREF to: 00524ed4 (CONDITIONAL_JUMP)  ; LAB_00524ed4
    PUSH EDI                            ; 00524e33
        ;   Label: LAB_00524e33
    CALL sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570 ; 00524e34
        ;   XREF to: 00525570 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_kill_FUN_00525570(CSfxSlot * this_ptr)
    ADD ESP,0x4                         ; 00524e39
    XOR EBX,EBX                         ; 00524e3c
        ;   Label: LAB_00524e3c
    MOV ESI,dword ptr [EBP + 0x3c]      ; 00524e3e
    MOV dword ptr [ESP + 0x6c],EBX      ; 00524e41
    TEST ESI,ESI                        ; 00524e45
    JLE 0x00524e77                      ; 00524e47
        ;   XREF to: 00524e77 (CONDITIONAL_JUMP)  ; LAB_00524e77
    MOV dword ptr [ESP + 0x74],EBX      ; 00524e49
    MOV EAX,dword ptr [ESP + 0x74]      ; 00524e4d
        ;   Label: LAB_00524e4d
    CMP dword ptr [ESP + EAX*0x1 + 0x1c],0x0 ; 00524e51
    JNZ 0x005254b9                      ; 00524e56
        ;   XREF to: 005254b9 (CONDITIONAL_JUMP)  ; LAB_005254b9
    MOV EAX,dword ptr [ESP + 0x74]      ; 00524e5c
        ;   Label: LAB_00524e5c
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00524e60
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00524e64
    ADD EAX,0x4                         ; 00524e67
    INC EDX                             ; 00524e6a
    MOV dword ptr [ESP + 0x74],EAX      ; 00524e6b
    MOV dword ptr [ESP + 0x6c],EDX      ; 00524e6f
    CMP EDX,ECX                         ; 00524e73
    JL 0x00524e4d                       ; 00524e75
        ;   XREF to: 00524e4d (CONDITIONAL_JUMP)  ; LAB_00524e4d
    MOV ESP,EBP                         ; 00524e77
        ;   Label: LAB_00524e77
    POP EBP                             ; 00524e79
    POP EDI                             ; 00524e7a
    POP ESI                             ; 00524e7b
    POP EBX                             ; 00524e7c
    RET                                 ; 00524e7d
    MOV ECX,0x592f4e                    ; 00524e7e | = "..\\sound\\sndmain.cpp"
        ;   Label: LAB_00524e7e
    MOV EBX,0xa1a                       ; 00524e83
    PUSH 0x592f63                       ; 00524e88 | = "SfxSlot::mix - must be locked!"
    MOV dword ptr [0x01cc4800],ECX      ; 00524e8d | g_CurrentFilename
    MOV dword ptr [0x01cc4804],EBX      ; 00524e93 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00524e99
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00524e9e
    JMP 0x00524d2f                      ; 00524ea1
        ;   XREF to: 00524d2f (UNCONDITIONAL_JUMP)  ; LAB_00524d2f
    INC ECX                             ; 00524ea6
        ;   Label: LAB_00524ea6
    ADD EDX,0x4                         ; 00524ea7
    CMP ECX,ESI                         ; 00524eaa
    JL 0x00524d7f                       ; 00524eac
        ;   XREF to: 00524d7f (CONDITIONAL_JUMP)  ; LAB_00524d7f
    JMP 0x00524d98                      ; 00524eb2
        ;   XREF to: 00524d98 (UNCONDITIONAL_JUMP)  ; LAB_00524d98
    CMP dword ptr [EBX + 0xdc],0x0      ; 00524eb7
        ;   Label: LAB_00524eb7
    JL 0x00524db2                       ; 00524ebe
        ;   XREF to: 00524db2 (CONDITIONAL_JUMP)  ; LAB_00524db2
    JMP 0x00524dbe                      ; 00524ec4
        ;   XREF to: 00524dbe (UNCONDITIONAL_JUMP)  ; LAB_00524dbe
    XOR EAX,EAX                         ; 00524ec9
        ;   Label: LAB_00524ec9
    MOV dword ptr [ESP + ECX*0x1 + 0x1c],EAX ; 00524ecb
    JMP 0x00524e14                      ; 00524ecf
        ;   XREF to: 00524e14 (UNCONDITIONAL_JUMP)  ; LAB_00524e14
    MOV EBX,dword ptr [EDI + 0x74]      ; 00524ed4
        ;   Label: LAB_00524ed4
    TEST EBX,EBX                        ; 00524ed7
    JZ 0x00524e33                       ; 00524ed9
        ;   XREF to: 00524e33 (CONDITIONAL_JUMP)  ; LAB_00524e33
    FLDZ                                ; 00524edf
    FCOMP double ptr [EDI + 0x60]       ; 00524ee1
    FNSTSW AX                           ; 00524ee4
    SAHF                                ; 00524ee6
    JA 0x00524e33                       ; 00524ee7
        ;   XREF to: 00524e33 (CONDITIONAL_JUMP)  ; LAB_00524e33
    MOV ESI,dword ptr [EBP + 0x38]      ; 00524eed
    CMP ESI,0x1                         ; 00524ef0
    JL 0x00524e3c                       ; 00524ef3
        ;   XREF to: 00524e3c (CONDITIONAL_JUMP)  ; LAB_00524e3c
    MOV EDX,EBX                         ; 00524ef9
    FILD dword ptr [EDX + 0x10c]        ; 00524efb
    FILD dword ptr [EBP + 0x40]         ; 00524f01
    FDIVP                               ; 00524f04
    FMUL float ptr [EDI + 0x78]         ; 00524f06
    FLDZ                                ; 00524f09
    FXCH                                ; 00524f0b
    FSTP double ptr [ESP + 0x10]        ; 00524f0d
    FCOMP double ptr [ESP + 0x10]       ; 00524f11
    FNSTSW AX                           ; 00524f15
    SAHF                                ; 00524f17
    JNC 0x00524e3c                      ; 00524f18
        ;   XREF to: 00524e3c (CONDITIONAL_JUMP)  ; LAB_00524e3c
    FILD dword ptr [EDX + 0x138]        ; 00524f1e
    MOV EAX,ESI                         ; 00524f24
    FSTP double ptr [ESP + 0x8]         ; 00524f26
    MOV dword ptr [ESP + 0x18],ESI      ; 00524f2a
    XOR EAX,ESI                         ; 00524f2e
    MOV ECX,dword ptr [EBX + 0x110]     ; 00524f30
    MOV dword ptr [ESP + 0x70],EAX      ; 00524f36
    TEST ECX,ECX                        ; 00524f3a
    JLE 0x00524f83                      ; 00524f3c
        ;   XREF to: 00524f83 (CONDITIONAL_JUMP)  ; LAB_00524f83
    FILD dword ptr [EDX + 0x110]        ; 00524f3e
    FSUB double ptr [EDI + 0x60]        ; 00524f44
    FDIV double ptr [ESP + 0x10]        ; 00524f47
    SUB ESP,0x8                         ; 00524f4b
    FSTP double ptr [ESP]               ; 00524f4e
    CALL crt_math.c_floor_FUN_005648c0  ; 00524f51
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00524f56
    MOV dword ptr [ESP + 0x58],EDX      ; 00524f5a
    FLD double ptr [ESP + 0x54]         ; 00524f5e
    ADD ESP,0x8                         ; 00524f62
    CALL crt_math.c_round_FUN_00563a30  ; 00524f65
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x60]        ; 00524f6a
    MOV EBX,dword ptr [ESP + 0x60]      ; 00524f6e
    CMP ESI,EBX                         ; 00524f72
    JLE 0x00524f83                      ; 00524f74
        ;   XREF to: 00524f83 (CONDITIONAL_JUMP)  ; LAB_00524f83
    MOV ESI,0x1                         ; 00524f76
    MOV dword ptr [ESP + 0x18],EBX      ; 00524f7b
    MOV dword ptr [ESP + 0x70],ESI      ; 00524f7f
    MOV EAX,dword ptr [EDI + 0x118]     ; 00524f83
        ;   Label: LAB_00524f83
    MOV dword ptr [ESP],EAX             ; 00524f89
    MOV EAX,dword ptr [EDI + 0x11c]     ; 00524f8c
    MOV dword ptr [ESP + 0x4],EAX       ; 00524f92
    FLD double ptr [ESP + 0x8]          ; 00524f96
    FSUB double ptr [ESP]               ; 00524f9a
    FDIV double ptr [ESP + 0x10]        ; 00524f9d
    XOR EAX,EAX                         ; 00524fa1
    MOV dword ptr [ESP + 0x64],EAX      ; 00524fa3
    SUB ESP,0x8                         ; 00524fa7
    FSTP double ptr [ESP]               ; 00524faa
    CALL crt_math.c_floor_FUN_005648c0  ; 00524fad
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00524fb2
    MOV dword ptr [ESP + 0x58],EDX      ; 00524fb6
    FLD double ptr [ESP + 0x54]         ; 00524fba
    ADD ESP,0x8                         ; 00524fbe
    CALL crt_math.c_round_FUN_00563a30  ; 00524fc1
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 00524fc6
    CMP dword ptr [ESP + 0x78],0x1      ; 00524fca
    JGE 0x0052501e                      ; 00524fcf
        ;   XREF to: 0052501e (CONDITIONAL_JUMP)  ; LAB_0052501e
    FLD double ptr [ESP]                ; 00524fd1
    FSUB double ptr [ESP + 0x8]         ; 00524fd4
    FLDZ                                ; 00524fd8
    FXCH                                ; 00524fda
    FSTP double ptr [ESP]               ; 00524fdc
    FCOMP double ptr [ESP]              ; 00524fdf
    FNSTSW AX                           ; 00524fe2
    SAHF                                ; 00524fe4
    JBE 0x00524ff0                      ; 00524fe5
        ;   XREF to: 00524ff0 (CONDITIONAL_JUMP)  ; LAB_00524ff0
    XOR ECX,ECX                         ; 00524fe7
    MOV dword ptr [ESP],ECX             ; 00524fe9
    MOV dword ptr [ESP + 0x4],ECX       ; 00524fec
    FLD double ptr [ESP + 0x8]          ; 00524ff0
        ;   Label: LAB_00524ff0
    FSUB double ptr [ESP]               ; 00524ff4
    FDIV double ptr [ESP + 0x10]        ; 00524ff7
    SUB ESP,0x8                         ; 00524ffb
    FSTP double ptr [ESP]               ; 00524ffe
    CALL crt_math.c_floor_FUN_005648c0  ; 00525001
        ;   XREF to: 005648c0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005648c0(double input_value)
    MOV dword ptr [ESP + 0x54],EAX      ; 00525006
    MOV dword ptr [ESP + 0x58],EDX      ; 0052500a
    FLD double ptr [ESP + 0x54]         ; 0052500e
    ADD ESP,0x8                         ; 00525012
    CALL crt_math.c_round_FUN_00563a30  ; 00525015
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x78]        ; 0052501a
    MOV EAX,dword ptr [ESP + 0x78]      ; 0052501e
        ;   Label: LAB_0052501e
    MOV ESI,dword ptr [ESP + 0x18]      ; 00525022
    CMP EAX,ESI                         ; 00525026
    JGE 0x005250f5                      ; 00525028
        ;   XREF to: 005250f5 (CONDITIONAL_JUMP)  ; LAB_005250f5
    XOR EBX,EBX                         ; 0052502e
    MOV dword ptr [ESP + 0x18],EAX      ; 00525030
    MOV dword ptr [ESP + 0x70],EBX      ; 00525034
    CMP dword ptr [ESP + 0x5c],0x0      ; 00525038
        ;   Label: LAB_00525038
    JZ 0x00525108                       ; 0052503d
        ;   XREF to: 00525108 (CONDITIONAL_JUMP)  ; LAB_00525108
    MOV EAX,dword ptr [ESP + 0x18]      ; 00525043
    MOV dword ptr [ESP + 0xac],EAX      ; 00525047
    FILD dword ptr [ESP + 0xac]         ; 0052504e
    FMUL double ptr [ESP + 0x10]        ; 00525055
    FADD double ptr [ESP]               ; 00525059
    FSTP double ptr [ESP]               ; 0052505c
        ;   Label: LAB_0052505c
    CMP dword ptr [ESP + 0x64],0x0      ; 0052505f
        ;   Label: LAB_0052505f
    JZ 0x0052506f                       ; 00525064
        ;   XREF to: 0052506f (CONDITIONAL_JUMP)  ; LAB_0052506f
    XOR ESI,ESI                         ; 00525066
    MOV dword ptr [ESP],ESI             ; 00525068
    MOV dword ptr [ESP + 0x4],ESI       ; 0052506b
    FLD double ptr [ESP]                ; 0052506f
        ;   Label: LAB_0052506f
    FCOMP double ptr [ESP + 0x8]        ; 00525072
    FNSTSW AX                           ; 00525076
    SAHF                                ; 00525078
    JC 0x00525085                       ; 00525079
        ;   XREF to: 00525085 (CONDITIONAL_JUMP)  ; LAB_00525085
    FLD double ptr [ESP]                ; 0052507b
    FSUB double ptr [ESP + 0x8]         ; 0052507e
    FSTP double ptr [ESP]               ; 00525082
    MOV EDX,dword ptr [ESP + 0x4]       ; 00525085
        ;   Label: LAB_00525085
    PUSH EDX                            ; 00525089
    MOV ECX,dword ptr [ESP + 0x4]       ; 0052508a
    PUSH ECX                            ; 0052508e
    PUSH EDI                            ; 0052508f
    CALL sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870 ; 00525090
        ;   XREF to: 00525870 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_00525870(CSfxSlot * this_ptr, double hardware_playback_pos)
    ADD ESP,0xc                         ; 00525095
    CMP dword ptr [ESP + 0x70],0x0      ; 00525098
    JZ 0x005250be                       ; 0052509d
        ;   XREF to: 005250be (CONDITIONAL_JUMP)  ; LAB_005250be
    MOV EAX,dword ptr [EDI + 0x74]      ; 0052509f
    MOV ESI,dword ptr [EAX + 0x124]     ; 005250a2
    TEST ESI,ESI                        ; 005250a8
    JZ 0x005254aa                       ; 005250aa
        ;   XREF to: 005254aa (CONDITIONAL_JUMP)  ; LAB_005254aa
    MOV dword ptr [EDI + 0x60],0x0      ; 005250b0
    MOV dword ptr [EDI + 0x64],0x0      ; 005250b7
    MOV EAX,dword ptr [ESP + 0x18]      ; 005250be
        ;   Label: LAB_005250be
    MOV EDX,dword ptr [EBP + 0x38]      ; 005250c2
    SUB EDX,EAX                         ; 005250c5
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005250c7
    MOV dword ptr [EBP + 0x38],EDX      ; 005250ca
    XOR EDX,EDX                         ; 005250cd
    TEST ECX,ECX                        ; 005250cf
    JLE 0x00524e29                      ; 005250d1
        ;   XREF to: 00524e29 (CONDITIONAL_JUMP)  ; LAB_00524e29
    LEA ECX,[EAX*0x4 + 0x0]             ; 005250d7
    XOR EAX,EAX                         ; 005250de
    ADD dword ptr [EAX + EBP*0x1 + 0x18],ECX ; 005250e0
        ;   Label: LAB_005250e0
    INC EDX                             ; 005250e4
    MOV ESI,dword ptr [EBP + 0x3c]      ; 005250e5
    ADD EAX,0x4                         ; 005250e8
    CMP EDX,ESI                         ; 005250eb
    JGE 0x00524e29                      ; 005250ed
        ;   XREF to: 00524e29 (CONDITIONAL_JUMP)  ; LAB_00524e29
    JMP 0x005250e0                      ; 005250f3
        ;   XREF to: 005250e0 (UNCONDITIONAL_JUMP)  ; LAB_005250e0
    JNZ 0x00525038                      ; 005250f5
        ;   XREF to: 00525038 (CONDITIONAL_JUMP)  ; LAB_00525038
        ;   Label: LAB_005250f5
    MOV dword ptr [ESP + 0x64],0x1      ; 005250fb
    JMP 0x00525038                      ; 00525103
        ;   XREF to: 00525038 (UNCONDITIONAL_JUMP)  ; LAB_00525038
    MOV EAX,dword ptr [EDI + 0x74]      ; 00525108
        ;   Label: LAB_00525108
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052510b
    MOV ECX,dword ptr [EAX + 0x104]     ; 0052510f
    SHL EDX,0x2                         ; 00525115
    CMP ECX,0x8                         ; 00525118
    JNZ 0x005252bf                      ; 0052511b
        ;   XREF to: 005252bf (CONDITIONAL_JUMP)  ; LAB_005252bf
    CMP dword ptr [EAX + 0x108],0x2     ; 00525121
    JNZ 0x00525217                      ; 00525128
        ;   XREF to: 00525217 (CONDITIONAL_JUMP)  ; LAB_00525217
    CMP dword ptr [ESP + 0x18],0x0      ; 0052512e
    JLE 0x0052505f                      ; 00525133
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    XOR EAX,EAX                         ; 00525139
    MOV dword ptr [ESP + 0x84],EDX      ; 0052513b
    MOV dword ptr [ESP + 0xa0],EAX      ; 00525142
    FLD double ptr [ESP]                ; 00525149
        ;   Label: LAB_00525149
    MOV EDX,dword ptr [EDI + 0x74]      ; 0052514c
    CALL crt_math.c_round_FUN_00563a30  ; 0052514f
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EDX,dword ptr [EDX + 0x120]     ; 00525154
    FISTP dword ptr [ESP + 0xac]        ; 0052515a
    MOV EAX,dword ptr [ESP + 0xac]      ; 00525161
    MOV DL,byte ptr [EDX + EAX*0x2]     ; 00525168
    AND EDX,0xff                        ; 0052516b
    SUB EDX,0x80                        ; 00525171
    MOV dword ptr [ESP + 0xac],EDX      ; 00525177
    FILD dword ptr [ESP + 0xac]         ; 0052517e
    FSTP float ptr [ESP + 0x44]         ; 00525185
    MOV EDX,dword ptr [EDI + 0x74]      ; 00525189
    MOV EDX,dword ptr [EDX + 0x120]     ; 0052518c
    MOV AL,byte ptr [EDX + EAX*0x2 + 0x1] ; 00525192
    AND EAX,0xff                        ; 00525196
    SUB EAX,0x80                        ; 0052519b
    MOV dword ptr [ESP + 0xac],EAX      ; 005251a0
    MOV EDX,dword ptr [EBP + 0x3c]      ; 005251a7
    FILD dword ptr [ESP + 0xac]         ; 005251aa
    FSTP float ptr [ESP + 0x48]         ; 005251b1
    XOR EAX,EAX                         ; 005251b5
    TEST EDX,EDX                        ; 005251b7
    JLE 0x005251e8                      ; 005251b9
        ;   XREF to: 005251e8 (CONDITIONAL_JUMP)  ; LAB_005251e8
    MOV ESI,dword ptr [ESP + 0xa0]      ; 005251bb
    MOV EDX,EDI                         ; 005251c2
    MOV EBX,EAX                         ; 005251c4
        ;   Label: LAB_005251c4
    AND EBX,0x1                         ; 005251c6
    FLD float ptr [ESP + EBX*0x4 + 0x44] ; 005251c9
    FMUL float ptr [EDX + 0x9c]         ; 005251cd
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 005251d3
    FADD float ptr [ECX + ESI*0x1]      ; 005251d7
    INC EAX                             ; 005251da
    FSTP float ptr [ECX + ESI*0x1]      ; 005251db
    MOV ECX,dword ptr [EBP + 0x3c]      ; 005251de
    ADD EDX,0x4                         ; 005251e1
    CMP EAX,ECX                         ; 005251e4
    JL 0x005251c4                       ; 005251e6
        ;   XREF to: 005251c4 (CONDITIONAL_JUMP)  ; LAB_005251c4
    FLD double ptr [ESP]                ; 005251e8
        ;   Label: LAB_005251e8
    MOV EBX,dword ptr [ESP + 0xa0]      ; 005251eb
    MOV ESI,dword ptr [ESP + 0x84]      ; 005251f2
    FADD double ptr [ESP + 0x10]        ; 005251f9
    ADD EBX,0x4                         ; 005251fd
    FSTP double ptr [ESP]               ; 00525200
    MOV dword ptr [ESP + 0xa0],EBX      ; 00525203
    CMP EBX,ESI                         ; 0052520a
    JGE 0x0052505f                      ; 0052520c
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    JMP 0x00525149                      ; 00525212
        ;   XREF to: 00525149 (UNCONDITIONAL_JUMP)  ; LAB_00525149
    CMP dword ptr [ESP + 0x18],0x0      ; 00525217
        ;   Label: LAB_00525217
    JLE 0x0052505f                      ; 0052521c
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    MOV dword ptr [ESP + 0x80],EDX      ; 00525222
    XOR ESI,ESI                         ; 00525229
    FLD double ptr [ESP]                ; 0052522b
        ;   Label: LAB_0052522b
    CALL crt_math.c_round_FUN_00563a30  ; 0052522e
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [EDI + 0x74]      ; 00525233
    FISTP dword ptr [ESP + 0xac]        ; 00525236
    MOV EAX,dword ptr [EAX + 0x120]     ; 0052523d
    ADD EAX,dword ptr [ESP + 0xac]      ; 00525243
    MOV AL,byte ptr [EAX]               ; 0052524a
    AND EAX,0xff                        ; 0052524c
    SUB EAX,0x80                        ; 00525251
    MOV dword ptr [ESP + 0xac],EAX      ; 00525256
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0052525d
    FILD dword ptr [ESP + 0xac]         ; 00525260
    FSTP float ptr [ESP + 0xa4]         ; 00525267
    XOR EAX,EAX                         ; 0052526e
    TEST ECX,ECX                        ; 00525270
    JLE 0x0052529e                      ; 00525272
        ;   XREF to: 0052529e (CONDITIONAL_JUMP)  ; LAB_0052529e
    FLD float ptr [ESP + 0xa4]          ; 00525274
    MOV EDX,EDI                         ; 0052527b
    MOV EBX,ESI                         ; 0052527d
    FLD ST0                             ; 0052527f
        ;   Label: LAB_0052527f
    FMUL float ptr [EDX + 0x9c]         ; 00525281
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 00525287
    FADD float ptr [ECX + EBX*0x1]      ; 0052528b
    INC EAX                             ; 0052528e
    FSTP float ptr [ECX + EBX*0x1]      ; 0052528f
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00525292
    ADD EDX,0x4                         ; 00525295
    CMP EAX,ECX                         ; 00525298
    JL 0x0052527f                       ; 0052529a
        ;   XREF to: 0052527f (CONDITIONAL_JUMP)  ; LAB_0052527f
    FSTP ST0                            ; 0052529c
    FLD double ptr [ESP]                ; 0052529e
        ;   Label: LAB_0052529e
    MOV EBX,dword ptr [ESP + 0x80]      ; 005252a1
    FADD double ptr [ESP + 0x10]        ; 005252a8
    ADD ESI,0x4                         ; 005252ac
    FSTP double ptr [ESP]               ; 005252af
    CMP ESI,EBX                         ; 005252b2
    JGE 0x0052505f                      ; 005252b4
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    JMP 0x0052522b                      ; 005252ba
        ;   XREF to: 0052522b (UNCONDITIONAL_JUMP)  ; LAB_0052522b
    MOV EBX,dword ptr [EAX + 0x108]     ; 005252bf
        ;   Label: LAB_005252bf
    CMP EBX,0x2                         ; 005252c5
    JNZ 0x005253d0                      ; 005252c8
        ;   XREF to: 005253d0 (CONDITIONAL_JUMP)  ; LAB_005253d0
    CMP EBX,dword ptr [EBP + 0x3c]      ; 005252ce
    JZ 0x0052538e                       ; 005252d1
        ;   XREF to: 0052538e (CONDITIONAL_JUMP)  ; LAB_0052538e
    CMP dword ptr [ESP + 0x18],0x0      ; 005252d7
    JLE 0x0052505f                      ; 005252dc
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    XOR EAX,EAX                         ; 005252e2
    MOV dword ptr [ESP + 0x88],EDX      ; 005252e4
    MOV dword ptr [ESP + 0x9c],EAX      ; 005252eb
    FLD double ptr [ESP]                ; 005252f2
        ;   Label: LAB_005252f2
    MOV EDX,dword ptr [EDI + 0x74]      ; 005252f5
    CALL crt_math.c_round_FUN_00563a30  ; 005252f8
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EDX,dword ptr [EDX + 0x120]     ; 005252fd
    FISTP dword ptr [ESP + 0xac]        ; 00525303
    MOV EAX,dword ptr [ESP + 0xac]      ; 0052530a
    FILD word ptr [EDX + EAX*0x4]       ; 00525311
    FSTP float ptr [ESP + 0x3c]         ; 00525314
    MOV EDX,dword ptr [EDI + 0x74]      ; 00525318
    MOV EDX,dword ptr [EDX + 0x120]     ; 0052531b
    FILD word ptr [EDX + EAX*0x4 + 0x2] ; 00525321
    FSTP float ptr [ESP + 0x40]         ; 00525325
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00525329
    XOR EAX,EAX                         ; 0052532c
    TEST EDX,EDX                        ; 0052532e
    JLE 0x0052535f                      ; 00525330
        ;   XREF to: 0052535f (CONDITIONAL_JUMP)  ; LAB_0052535f
    MOV ESI,dword ptr [ESP + 0x9c]      ; 00525332
    MOV EDX,EDI                         ; 00525339
    MOV EBX,EAX                         ; 0052533b
        ;   Label: LAB_0052533b
    AND EBX,0x1                         ; 0052533d
    FLD float ptr [ESP + EBX*0x4 + 0x3c] ; 00525340
    FMUL float ptr [EDX + 0x9c]         ; 00525344
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 0052534a
    FADD float ptr [ECX + ESI*0x1]      ; 0052534e
    INC EAX                             ; 00525351
    FSTP float ptr [ECX + ESI*0x1]      ; 00525352
    MOV ECX,dword ptr [EBP + 0x3c]      ; 00525355
    ADD EDX,0x4                         ; 00525358
    CMP EAX,ECX                         ; 0052535b
    JL 0x0052533b                       ; 0052535d
        ;   XREF to: 0052533b (CONDITIONAL_JUMP)  ; LAB_0052533b
    FLD double ptr [ESP]                ; 0052535f
        ;   Label: LAB_0052535f
    MOV EBX,dword ptr [ESP + 0x9c]      ; 00525362
    MOV ESI,dword ptr [ESP + 0x88]      ; 00525369
    FADD double ptr [ESP + 0x10]        ; 00525370
    ADD EBX,0x4                         ; 00525374
    FSTP double ptr [ESP]               ; 00525377
    MOV dword ptr [ESP + 0x9c],EBX      ; 0052537a
    CMP EBX,ESI                         ; 00525381
    JGE 0x0052505f                      ; 00525383
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    JMP 0x005252f2                      ; 00525389
        ;   XREF to: 005252f2 (UNCONDITIONAL_JUMP)  ; LAB_005252f2
    MOV EDX,dword ptr [ESP + 0x18]      ; 0052538e
        ;   Label: LAB_0052538e
    PUSH EDX                            ; 00525392
    MOV ECX,dword ptr [ESP + 0x18]      ; 00525393
    PUSH ECX                            ; 00525397
    MOV EBX,dword ptr [ESP + 0x18]      ; 00525398
    PUSH EBX                            ; 0052539c
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052539d
    PUSH ESI                            ; 005253a1
    MOV EDX,dword ptr [ESP + 0x10]      ; 005253a2
    PUSH EDX                            ; 005253a6
    MOV ECX,dword ptr [ESP + 0x6c]      ; 005253a7
    PUSH ECX                            ; 005253ab
    LEA EDX,[EBP + 0x18]                ; 005253ac
    PUSH EDX                            ; 005253af
    MOV EBX,dword ptr [EAX + 0x120]     ; 005253b0
    PUSH EBX                            ; 005253b6
    CALL sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750 ; 005253b7
        ;   XREF to: 00523750 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleStereoToStereo_FUN_00523750(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x6c],EAX      ; 005253bc
    MOV dword ptr [ESP + 0x70],EDX      ; 005253c0
    FLD double ptr [ESP + 0x6c]         ; 005253c4
    ADD ESP,0x20                        ; 005253c8
    JMP 0x0052505c                      ; 005253cb
        ;   XREF to: 0052505c (UNCONDITIONAL_JUMP)  ; LAB_0052505c
    CMP dword ptr [EBP + 0x3c],0x2      ; 005253d0
        ;   Label: LAB_005253d0
    JZ 0x00525468                       ; 005253d4
        ;   XREF to: 00525468 (CONDITIONAL_JUMP)  ; LAB_00525468
    CMP dword ptr [ESP + 0x18],0x0      ; 005253da
    JLE 0x0052505f                      ; 005253df
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    MOV dword ptr [ESP + 0x8c],EDX      ; 005253e5
    XOR ESI,ESI                         ; 005253ec
    FLD double ptr [ESP]                ; 005253ee
        ;   Label: LAB_005253ee
    MOV EAX,dword ptr [EDI + 0x74]      ; 005253f1
    CALL crt_math.c_round_FUN_00563a30  ; 005253f4
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    MOV EAX,dword ptr [EAX + 0x120]     ; 005253f9
    FISTP dword ptr [ESP + 0xac]        ; 005253ff
    MOV EDX,dword ptr [ESP + 0xac]      ; 00525406
    FILD word ptr [EAX + EDX*0x2]       ; 0052540d
    FSTP float ptr [ESP + 0xa8]         ; 00525410
    MOV EDX,dword ptr [EBP + 0x3c]      ; 00525417
    XOR EAX,EAX                         ; 0052541a
    TEST EDX,EDX                        ; 0052541c
    JLE 0x0052544a                      ; 0052541e
        ;   XREF to: 0052544a (CONDITIONAL_JUMP)  ; LAB_0052544a
    FLD float ptr [ESP + 0xa8]          ; 00525420
    MOV EDX,EDI                         ; 00525427
    MOV EBX,ESI                         ; 00525429
    FLD ST0                             ; 0052542b
        ;   Label: LAB_0052542b
    FMUL float ptr [EDX + 0x9c]         ; 0052542d
    MOV ECX,dword ptr [EBP + EAX*0x4 + 0x18] ; 00525433
    FADD float ptr [ECX + EBX*0x1]      ; 00525437
    INC EAX                             ; 0052543a
    FSTP float ptr [ECX + EBX*0x1]      ; 0052543b
    MOV ECX,dword ptr [EBP + 0x3c]      ; 0052543e
    ADD EDX,0x4                         ; 00525441
    CMP EAX,ECX                         ; 00525444
    JL 0x0052542b                       ; 00525446
        ;   XREF to: 0052542b (CONDITIONAL_JUMP)  ; LAB_0052542b
    FSTP ST0                            ; 00525448
    FLD double ptr [ESP]                ; 0052544a
        ;   Label: LAB_0052544a
    MOV EAX,dword ptr [ESP + 0x8c]      ; 0052544d
    FADD double ptr [ESP + 0x10]        ; 00525454
    ADD ESI,0x4                         ; 00525458
    FSTP double ptr [ESP]               ; 0052545b
    CMP ESI,EAX                         ; 0052545e
    JGE 0x0052505f                      ; 00525460
        ;   XREF to: 0052505f (CONDITIONAL_JUMP)  ; LAB_0052505f
    JMP 0x005253ee                      ; 00525466
        ;   XREF to: 005253ee (UNCONDITIONAL_JUMP)  ; LAB_005253ee
    MOV EDX,dword ptr [ESP + 0x18]      ; 00525468
        ;   Label: LAB_00525468
    PUSH EDX                            ; 0052546c
    MOV ECX,dword ptr [ESP + 0x18]      ; 0052546d
    PUSH ECX                            ; 00525471
    MOV EBX,dword ptr [ESP + 0x18]      ; 00525472
    PUSH EBX                            ; 00525476
    MOV ESI,dword ptr [ESP + 0x10]      ; 00525477
    PUSH ESI                            ; 0052547b
    MOV EDX,dword ptr [ESP + 0x10]      ; 0052547c
    PUSH EDX                            ; 00525480
    MOV ECX,dword ptr [ESP + 0x6c]      ; 00525481
    PUSH ECX                            ; 00525485
    LEA EDX,[EBP + 0x18]                ; 00525486
    PUSH EDX                            ; 00525489
    MOV EBX,dword ptr [EAX + 0x120]     ; 0052548a
    PUSH EBX                            ; 00525490
    CALL sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610 ; 00525491
        ;   XREF to: 00523610 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_mixResampleMonoToStereo_FUN_00523610(short * sample_data, SStereoBuffers * channel_buffers, SStereoGains * channel_gains, double resample_position, ...)
    MOV dword ptr [ESP + 0x6c],EAX      ; 00525496
    MOV dword ptr [ESP + 0x70],EDX      ; 0052549a
    FLD double ptr [ESP + 0x6c]         ; 0052549e
    ADD ESP,0x20                        ; 005254a2
    JMP 0x0052505c                      ; 005254a5
        ;   XREF to: 0052505c (UNCONDITIONAL_JUMP)  ; LAB_0052505c
    MOV dword ptr [EDI + 0x64],0xbff00000 ; 005254aa
        ;   Label: LAB_005254aa
    MOV dword ptr [EDI + 0x60],ESI      ; 005254b1
    JMP 0x005250be                      ; 005254b4
        ;   XREF to: 005250be (UNCONDITIONAL_JUMP)  ; LAB_005250be
    MOV EDX,dword ptr [ESP + 0x68]      ; 005254b9
        ;   Label: LAB_005254b9
    MOV dword ptr [ESP + 0x98],EAX      ; 005254bd
    MOV ECX,dword ptr [EDI + EAX*0x1 + 0xbc] ; 005254c4
    MOV EBX,dword ptr [EDI + EAX*0x1 + 0xdc] ; 005254cb
    MOV EAX,dword ptr [ESP + 0x68]      ; 005254d2
    ADD EDX,ECX                         ; 005254d6
    MOV dword ptr [ESP + 0x7c],EAX      ; 005254d8
    IMUL ECX,EAX,0x0                    ; 005254dc
    SUB EDX,EBX                         ; 005254df
    MOV dword ptr [ESP + 0x90],EDX      ; 005254e1
    LEA EAX,[EDX*0x4 + 0x0]             ; 005254e8
    XOR EBX,EBX                         ; 005254ef
    MOV dword ptr [ESP + 0x94],EAX      ; 005254f1
    TEST EAX,EAX                        ; 005254f8
    JLE 0x00525552                      ; 005254fa
        ;   XREF to: 00525552 (CONDITIONAL_JUMP)  ; LAB_00525552
    MOV EDX,ECX                         ; 005254fc
        ;   Label: LAB_005254fc
    MOV EAX,ECX                         ; 005254fe
    SAR EDX,0x1f                        ; 00525500
    IDIV dword ptr [ESP + 0x90]         ; 00525503
    SHL EAX,0x2                         ; 0052550a
    MOV dword ptr [ESP + 0xac],EAX      ; 0052550d
    MOV EAX,dword ptr [ESP + 0x98]      ; 00525514
    MOV EDX,dword ptr [ESP + 0xac]      ; 0052551b
    MOV EAX,dword ptr [EAX + 0x2dc833c] ; 00525522
    MOV ESI,dword ptr [ESP + 0x98]      ; 00525528
    ADD EAX,EDX                         ; 0052552f
    MOV ESI,dword ptr [ESP + ESI*0x1 + 0x1c] ; 00525531
    FLD float ptr [EAX]                 ; 00525535
    FADD float ptr [ESI + EBX*0x1]      ; 00525537
    ADD EBX,0x4                         ; 0052553a
    FSTP float ptr [ESI + EBX*0x1 + -0x4] ; 0052553d
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00525541
    MOV EAX,dword ptr [ESP + 0x94]      ; 00525545
    ADD ECX,ESI                         ; 0052554c
    CMP EBX,EAX                         ; 0052554e
    JL 0x005254fc                       ; 00525550
        ;   XREF to: 005254fc (CONDITIONAL_JUMP)  ; LAB_005254fc
    MOV EAX,dword ptr [ESP + 0x98]      ; 00525552
        ;   Label: LAB_00525552
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0xbc] ; 00525559
    MOV dword ptr [EDI + EAX*0x1 + 0xdc],EDX ; 00525560
    JMP 0x00524e5c                      ; 00525567
        ;   XREF to: 00524e5c (UNCONDITIONAL_JUMP)  ; LAB_00524e5c

