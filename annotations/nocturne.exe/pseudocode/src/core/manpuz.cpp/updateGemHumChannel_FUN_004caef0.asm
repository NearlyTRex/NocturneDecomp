; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_manpuz_cpp_updateGemHumChannel_FUN_004caef0(float *param_1,float param_2,float param_3,undefined4 *param_4,undefined4 param_5,float *param_6)
;
; Local Variables:
; undefined8       Stack[-0x30]:8  local_30
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004cb010 at 004cb07c
;
; Referenced Globals:
;   undefined4 DAT_00587fc2
;
; Called Functions:
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;   sound_sndmain.cpp_popSfxOptions_FUN_005263c0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00526340
;   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50
;   sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0
;   sound_sndmain.cpp_setSfxPosition_FUN_00526e10
;   sound_sndmain.cpp_setSfxVolume_FUN_005270d0
;   sound_sndmain.cpp_startSfx_FUN_005265a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004caef0
        ;   Label: core_manpuz.cpp_updateGemHumChannel_FUN_004caef0
    PUSH ESI                            ; 004caef1
    PUSH EDI                            ; 004caef2
    PUSH EBP                            ; 004caef3
    MOV EBP,ESP                         ; 004caef4
    SUB ESP,0x8                         ; 004caef6
    AND ESP,0xfffffff8                  ; 004caef9
    MOV EDX,dword ptr [EBP + 0x14]      ; 004caefc
    MOV ESI,dword ptr [EBP + 0x20]      ; 004caeff
    MOV EBX,dword ptr [EBP + 0x28]      ; 004caf02
    FLD float ptr [EBP + 0x18]          ; 004caf05
    FLD float ptr [EBP + 0x1c]          ; 004caf08
    FCHS                                ; 004caf0b
    FXCH                                ; 004caf0d
    FSUB float ptr [EDX]                ; 004caf0f
    XOR EDI,EDI                         ; 004caf11
    FSTP float ptr [ESP + 0x4]          ; 004caf13
    FCOMP float ptr [ESP + 0x4]         ; 004caf17
    FNSTSW AX                           ; 004caf1b
    SAHF                                ; 004caf1d
    JA 0x004caf9a                       ; 004caf1e
        ;   XREF to: 004caf9a (CONDITIONAL_JUMP)  ; LAB_004caf9a
    FLD float ptr [ESP + 0x4]           ; 004caf24
    FCOMP float ptr [EBP + 0x1c]        ; 004caf28
    FNSTSW AX                           ; 004caf2b
    SAHF                                ; 004caf2d
    JBE 0x004cafa1                      ; 004caf2e
        ;   XREF to: 004cafa1 (CONDITIONAL_JUMP)  ; LAB_004cafa1
    FLD float ptr [EDX]                 ; 004caf30
    FADD float ptr [EBP + 0x1c]         ; 004caf32
    FSTP float ptr [EDX]                ; 004caf35
        ;   Label: LAB_004caf35
    FLD float ptr [EDX]                 ; 004caf37
        ;   Label: LAB_004caf37
    FMUL double ptr [0x00587fc2]        ; 004caf39 | DAT_00587fc2
    FST float ptr [ESP]                 ; 004caf3f
    FLDZ                                ; 004caf42
    FCOMPP                              ; 004caf44
    FNSTSW AX                           ; 004caf46
    SAHF                                ; 004caf48
    JNC 0x004caffb                      ; 004caf49
        ;   XREF to: 004caffb (CONDITIONAL_JUMP)  ; LAB_004caffb
    MOV ECX,dword ptr [ESI]             ; 004caf4f
    PUSH ECX                            ; 004caf51
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 004caf52
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_isSfxPlaying_FUN_00526c50()
    ADD ESP,0x4                         ; 004caf57
    TEST EAX,EAX                        ; 004caf5a
    JZ 0x004cafad                       ; 004caf5c
        ;   XREF to: 004cafad (CONDITIONAL_JUMP)  ; LAB_004cafad
    SUB ESP,0x8                         ; 004caf5e
    FLD float ptr [EBX + 0x8]           ; 004caf61
    FSTP double ptr [ESP]               ; 004caf64
    SUB ESP,0x8                         ; 004caf67
    FLD float ptr [EBX + 0x4]           ; 004caf6a
    FSTP double ptr [ESP]               ; 004caf6d
    SUB ESP,0x8                         ; 004caf70
    FLD float ptr [EBX]                 ; 004caf73
    FSTP double ptr [ESP]               ; 004caf75
    MOV EAX,dword ptr [ESI]             ; 004caf78
    PUSH EAX                            ; 004caf7a
    CALL sound_sndmain.cpp_setSfxPosition_FUN_00526e10 ; 004caf7b
        ;   XREF to: 00526e10 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxPosition_FUN_00526e10()
    ADD ESP,0x1c                        ; 004caf80
    MOV EDX,dword ptr [ESI]             ; 004caf83
    PUSH dword ptr [ESP]                ; 004caf85
    PUSH EDX                            ; 004caf88
    CALL sound_sndmain.cpp_setSfxVolume_FUN_005270d0 ; 004caf89
        ;   XREF to: 005270d0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setSfxVolume_FUN_005270d0()
    ADD ESP,0x8                         ; 004caf8e
    MOV EAX,EDI                         ; 004caf91
    MOV ESP,EBP                         ; 004caf93
    POP EBP                             ; 004caf95
    POP EDI                             ; 004caf96
    POP ESI                             ; 004caf97
    POP EBX                             ; 004caf98
    RET                                 ; 004caf99
    FLD float ptr [EDX]                 ; 004caf9a
        ;   Label: LAB_004caf9a
    FSUB float ptr [EBP + 0x1c]         ; 004caf9c
    JMP 0x004caf35                      ; 004caf9f
        ;   XREF to: 004caf35 (UNCONDITIONAL_JUMP)  ; LAB_004caf35
    MOV EAX,dword ptr [EBP + 0x18]      ; 004cafa1
        ;   Label: LAB_004cafa1
    MOV EDI,0x1                         ; 004cafa4
    MOV dword ptr [EDX],EAX             ; 004cafa9
    JMP 0x004caf37                      ; 004cafab
        ;   XREF to: 004caf37 (UNCONDITIONAL_JUMP)  ; LAB_004caf37
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00526340 ; 004cafad
        ;   XREF to: 00526340 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_pushSfxOptions_FUN_00526340()
        ;   Label: LAB_004cafad
    PUSH dword ptr [ESP]                ; 004cafb2
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0 ; 004cafb5
        ;   XREF to: 005260f0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxVolume_FUN_005260f0()
    ADD ESP,0x4                         ; 004cafba
    SUB ESP,0x8                         ; 004cafbd
    FLD float ptr [EBX + 0x8]           ; 004cafc0
    FSTP double ptr [ESP]               ; 004cafc3
    SUB ESP,0x8                         ; 004cafc6
    FLD float ptr [EBX + 0x4]           ; 004cafc9
    FSTP double ptr [ESP]               ; 004cafcc
    SUB ESP,0x8                         ; 004cafcf
    FLD float ptr [EBX]                 ; 004cafd2
    FSTP double ptr [ESP]               ; 004cafd4
    CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50 ; 004cafd7
        ;   XREF to: 00525f50 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_setNextSfxStaticPosition_FUN_00525f50()
    ADD ESP,0x18                        ; 004cafdc
    MOV EBX,dword ptr [EBP + 0x24]      ; 004cafdf
    PUSH EBX                            ; 004cafe2
    CALL sound_sndmain.cpp_startSfx_FUN_005265a0 ; 004cafe3
        ;   XREF to: 005265a0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_startSfx_FUN_005265a0()
    ADD ESP,0x4                         ; 004cafe8
    MOV dword ptr [ESI],EAX             ; 004cafeb
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005263c0 ; 004cafed
        ;   XREF to: 005263c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_popSfxOptions_FUN_005263c0()
    MOV EAX,EDI                         ; 004caff2
    MOV ESP,EBP                         ; 004caff4
    POP EBP                             ; 004caff6
    POP EDI                             ; 004caff7
    POP ESI                             ; 004caff8
    POP EBX                             ; 004caff9
    RET                                 ; 004caffa
    MOV EDX,dword ptr [ESI]             ; 004caffb
        ;   Label: LAB_004caffb
    PUSH EDX                            ; 004caffd
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004caffe
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_killSfx_FUN_00527230()
    ADD ESP,0x4                         ; 004cb003
    MOV EAX,EDI                         ; 004cb006
    MOV ESP,EBP                         ; 004cb008
    POP EBP                             ; 004cb00a
    POP EDI                             ; 004cb00b
    POP ESI                             ; 004cb00c
    POP EBX                             ; 004cb00d
    RET                                 ; 004cb00e

