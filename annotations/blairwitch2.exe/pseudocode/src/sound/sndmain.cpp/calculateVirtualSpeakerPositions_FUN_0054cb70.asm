; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_0054cb70(void)
;
; Local Variables:
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined8       Stack[-0x28]:8  local_28
; undefined8       Stack[-0x20]:8  local_20
; undefined8       Stack[-0x18]:8  local_18
;
; XREF[3]:
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_0054e8c0 at 0054e9b1
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00554510 at 005545be
;   sound_sndmain.cpp_pollAndMixSfx_FUN_005541f0 at 00554259
;
; Referenced Globals:
;   undefined4 DAT_005e7f2e
;   undefined4 DAT_0061bc9c
;   undefined4 DAT_0061bcb8
;   undefined4 DAT_02648428
;   undefined4 DAT_02648438
;   undefined4 DAT_02648448
;   undefined4 DAT_026484b8
;   undefined4 DAT_02648f40
;   undefined4 DAT_02648f48
;   undefined4 DAT_02648f80
;   undefined4 DAT_02648f88
;   undefined4 DAT_02648fc0
;   undefined4 DAT_02648fc8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cb70
        ;   Label: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_0054cb70
    PUSH EBP                            ; 0054cb71
    MOV EBP,ESP                         ; 0054cb72
    SUB ESP,0x34                        ; 0054cb74
    AND ESP,0xfffffff8                  ; 0054cb77
    MOV ECX,dword ptr [0x0061bc9c]      ; 0054cb7a | DAT_0061bc9c
    MOV EAX,[0x026484b8]                ; 0054cb80 | DAT_026484b8
    SHL EAX,0x3                         ; 0054cb85
    CMP ECX,0x2                         ; 0054cb88
    JZ 0x0054cc2b                       ; 0054cb8b
        ;   XREF to: 0054cc2b (CONDITIONAL_JUMP)  ; LAB_0054cc2b
    TEST ECX,ECX                        ; 0054cb91
    JLE 0x0054cc20                      ; 0054cb93
        ;   XREF to: 0054cc20 (CONDITIONAL_JUMP)  ; LAB_0054cc20
    MOV EDX,dword ptr [EAX + 0x2648428] ; 0054cb99 | DAT_02648428
    MOV dword ptr [ESP + 0x10],EDX      ; 0054cb9f
    MOV EDX,dword ptr [EAX + 0x264842c] ; 0054cba3
    MOV dword ptr [ESP + 0x14],EDX      ; 0054cba9
    MOV EDX,dword ptr [EAX + 0x2648438] ; 0054cbad | DAT_02648438
    MOV dword ptr [ESP + 0x8],EDX       ; 0054cbb3
    MOV EDX,dword ptr [EAX + 0x264843c] ; 0054cbb7
    MOV dword ptr [ESP + 0xc],EDX       ; 0054cbbd
    MOV EDX,dword ptr [EAX + 0x2648448] ; 0054cbc1 | DAT_02648448
    MOV EAX,dword ptr [EAX + 0x264844c] ; 0054cbc7
    MOV dword ptr [ESP],EDX             ; 0054cbcd
    MOV dword ptr [ESP + 0x4],EAX       ; 0054cbd0
    LEA EDX,[ECX*0x8 + 0x0]             ; 0054cbd4
    XOR EAX,EAX                         ; 0054cbdb
    ADD EAX,0x8                         ; 0054cbdd
        ;   Label: LAB_0054cbdd
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054cbe0
    MOV dword ptr [EAX + 0x2648f38],EBX ; 0054cbe4 | DAT_02648f40 | DAT_02648f48
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054cbea
    MOV dword ptr [EAX + 0x2648f3c],EBX ; 0054cbee
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054cbf4
    MOV dword ptr [EAX + 0x2648f78],EBX ; 0054cbf8 | DAT_02648f80 | DAT_02648f88
    MOV EBX,dword ptr [ESP + 0xc]       ; 0054cbfe
    MOV dword ptr [EAX + 0x2648f7c],EBX ; 0054cc02
    MOV EBX,dword ptr [ESP]             ; 0054cc08
    MOV dword ptr [EAX + 0x2648fb8],EBX ; 0054cc0b | DAT_02648fc0 | DAT_02648fc8
    MOV EBX,dword ptr [ESP + 0x4]       ; 0054cc11
    MOV dword ptr [EAX + 0x2648fbc],EBX ; 0054cc15
    CMP EAX,EDX                         ; 0054cc1b
    JL 0x0054cbdd                       ; 0054cc1d
        ;   XREF to: 0054cbdd (CONDITIONAL_JUMP)  ; LAB_0054cbdd
    NOP                                 ; 0054cc1f
    MOV dword ptr [0x0061bc9c],ECX      ; 0054cc20 | DAT_0061bc9c
        ;   Label: LAB_0054cc20
    MOV ESP,EBP                         ; 0054cc26
    POP EBP                             ; 0054cc28
    POP EBX                             ; 0054cc29
    RET                                 ; 0054cc2a
    FLD float ptr [0x0061bcb8]          ; 0054cc2b | DAT_0061bcb8
        ;   Label: LAB_0054cc2b
    MOV EDX,dword ptr [0x026484b8]      ; 0054cc31 | DAT_026484b8
    FMUL float ptr [0x005e7f2e]         ; 0054cc37 | DAT_005e7f2e
    FLD float ptr [EDX*0x4 + 0x2648470] ; 0054cc3d
    FMUL ST1                            ; 0054cc44
    FLD float ptr [EDX*0x4 + 0x2648478] ; 0054cc46
    FMUL ST2                            ; 0054cc4d
    FLD float ptr [EDX*0x4 + 0x2648480] ; 0054cc4f
    FMULP ST3                           ; 0054cc56
    FLD double ptr [EAX + 0x2648428]    ; 0054cc58 | DAT_02648428
    FLD double ptr [EAX + 0x2648438]    ; 0054cc5e | DAT_02648438
    FLD double ptr [EAX + 0x2648448]    ; 0054cc64 | DAT_02648448
    FLD double ptr [EAX + 0x2648428]    ; 0054cc6a | DAT_02648428
    FXCH ST5                            ; 0054cc70
    FSTP double ptr [ESP + 0x28]        ; 0054cc72
    FLD double ptr [EAX + 0x2648438]    ; 0054cc76 | DAT_02648438
    FXCH ST3                            ; 0054cc7c
    FSUB double ptr [ESP + 0x28]        ; 0054cc7e
    FXCH ST4                            ; 0054cc82
    FSTP double ptr [ESP + 0x18]        ; 0054cc84
    FLD double ptr [EAX + 0x2648448]    ; 0054cc88 | DAT_02648448
    FXCH ST2                            ; 0054cc8e
    FSUB double ptr [ESP + 0x18]        ; 0054cc90
    FXCH ST6                            ; 0054cc94
    FSTP double ptr [ESP + 0x20]        ; 0054cc96
    FSUB double ptr [ESP + 0x20]        ; 0054cc9a
    FXCH ST4                            ; 0054cc9e
    FADD double ptr [ESP + 0x28]        ; 0054cca0
    FXCH ST2                            ; 0054cca4
    FADD double ptr [ESP + 0x18]        ; 0054cca6
    FXCH                                ; 0054ccaa
    FADD double ptr [ESP + 0x20]        ; 0054ccac
    FXCH ST3                            ; 0054ccb0
    FSTP double ptr [0x02648f40]        ; 0054ccb2 | DAT_02648f40
    FXCH ST4                            ; 0054ccb8
    FSTP double ptr [0x02648f80]        ; 0054ccba | DAT_02648f80
    FXCH ST2                            ; 0054ccc0
    FSTP double ptr [0x02648fc0]        ; 0054ccc2 | DAT_02648fc0
    FXCH                                ; 0054ccc8
    FSTP double ptr [0x02648f48]        ; 0054ccca | DAT_02648f48
    FXCH                                ; 0054ccd0
    FSTP double ptr [0x02648f88]        ; 0054ccd2 | DAT_02648f88
    FSTP double ptr [0x02648fc8]        ; 0054ccd8 | DAT_02648fc8
    MOV dword ptr [0x0061bc9c],ECX      ; 0054ccde | DAT_0061bc9c
    MOV ESP,EBP                         ; 0054cce4
    POP EBP                             ; 0054cce6
    POP EBX                             ; 0054cce7
    RET                                 ; 0054cce8

