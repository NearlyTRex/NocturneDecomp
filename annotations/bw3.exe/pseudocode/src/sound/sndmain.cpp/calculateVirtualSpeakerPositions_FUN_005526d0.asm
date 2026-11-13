; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl sound_sndmain_cpp_calculateVirtualSpeakerPositions_FUN_005526d0(void)
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
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00554430 at 00554521
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_0055a0b0 at 0055a15e
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00559d90 at 00559df9
;
; Referenced Globals:
;   undefined4 DAT_005d2a12
;   undefined4 DAT_0060422c
;   undefined4 DAT_00604244
;   undefined4 DAT_02cf2828
;   undefined4 DAT_02cf2838
;   undefined4 DAT_02cf2848
;   undefined4 DAT_02cf28b8
;   undefined4 DAT_02cf3340
;   undefined4 DAT_02cf3348
;   undefined4 DAT_02cf3380
;   undefined4 DAT_02cf3388
;   undefined4 DAT_02cf33c0
;   undefined4 DAT_02cf33c8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005526d0
        ;   Label: sound_sndmain.cpp_calculateVirtualSpeakerPositions_FUN_005526d0
    PUSH EBP                            ; 005526d1
    MOV EBP,ESP                         ; 005526d2
    SUB ESP,0x34                        ; 005526d4
    AND ESP,0xfffffff8                  ; 005526d7
    MOV ECX,dword ptr [0x0060422c]      ; 005526da | DAT_0060422c
    MOV EAX,[0x02cf28b8]                ; 005526e0 | DAT_02cf28b8
    SHL EAX,0x3                         ; 005526e5
    CMP ECX,0x2                         ; 005526e8
    JZ 0x0055278b                       ; 005526eb
        ;   XREF to: 0055278b (CONDITIONAL_JUMP)  ; LAB_0055278b
    TEST ECX,ECX                        ; 005526f1
    JLE 0x00552780                      ; 005526f3
        ;   XREF to: 00552780 (CONDITIONAL_JUMP)  ; LAB_00552780
    MOV EDX,dword ptr [EAX + 0x2cf2828] ; 005526f9 | DAT_02cf2828
    MOV dword ptr [ESP + 0x10],EDX      ; 005526ff
    MOV EDX,dword ptr [EAX + 0x2cf282c] ; 00552703
    MOV dword ptr [ESP + 0x14],EDX      ; 00552709
    MOV EDX,dword ptr [EAX + 0x2cf2838] ; 0055270d | DAT_02cf2838
    MOV dword ptr [ESP + 0x8],EDX       ; 00552713
    MOV EDX,dword ptr [EAX + 0x2cf283c] ; 00552717
    MOV dword ptr [ESP + 0xc],EDX       ; 0055271d
    MOV EDX,dword ptr [EAX + 0x2cf2848] ; 00552721 | DAT_02cf2848
    MOV EAX,dword ptr [EAX + 0x2cf284c] ; 00552727
    MOV dword ptr [ESP],EDX             ; 0055272d
    MOV dword ptr [ESP + 0x4],EAX       ; 00552730
    LEA EDX,[ECX*0x8 + 0x0]             ; 00552734
    XOR EAX,EAX                         ; 0055273b
    ADD EAX,0x8                         ; 0055273d
        ;   Label: LAB_0055273d
    MOV EBX,dword ptr [ESP + 0x10]      ; 00552740
    MOV dword ptr [EAX + 0x2cf3338],EBX ; 00552744 | DAT_02cf3340 | DAT_02cf3348
    MOV EBX,dword ptr [ESP + 0x14]      ; 0055274a
    MOV dword ptr [EAX + 0x2cf333c],EBX ; 0055274e
    MOV EBX,dword ptr [ESP + 0x8]       ; 00552754
    MOV dword ptr [EAX + 0x2cf3378],EBX ; 00552758 | DAT_02cf3380 | DAT_02cf3388
    MOV EBX,dword ptr [ESP + 0xc]       ; 0055275e
    MOV dword ptr [EAX + 0x2cf337c],EBX ; 00552762
    MOV EBX,dword ptr [ESP]             ; 00552768
    MOV dword ptr [EAX + 0x2cf33b8],EBX ; 0055276b | DAT_02cf33c0 | DAT_02cf33c8
    MOV EBX,dword ptr [ESP + 0x4]       ; 00552771
    MOV dword ptr [EAX + 0x2cf33bc],EBX ; 00552775
    CMP EAX,EDX                         ; 0055277b
    JL 0x0055273d                       ; 0055277d
        ;   XREF to: 0055273d (CONDITIONAL_JUMP)  ; LAB_0055273d
    NOP                                 ; 0055277f
    MOV dword ptr [0x0060422c],ECX      ; 00552780 | DAT_0060422c
        ;   Label: LAB_00552780
    MOV ESP,EBP                         ; 00552786
    POP EBP                             ; 00552788
    POP EBX                             ; 00552789
    RET                                 ; 0055278a
    FLD float ptr [0x00604244]          ; 0055278b | DAT_00604244
        ;   Label: LAB_0055278b
    MOV EDX,dword ptr [0x02cf28b8]      ; 00552791 | DAT_02cf28b8
    FMUL float ptr [0x005d2a12]         ; 00552797 | DAT_005d2a12
    FLD float ptr [EDX*0x4 + 0x2cf2870] ; 0055279d
    FMUL ST1                            ; 005527a4
    FLD float ptr [EDX*0x4 + 0x2cf2878] ; 005527a6
    FMUL ST2                            ; 005527ad
    FLD float ptr [EDX*0x4 + 0x2cf2880] ; 005527af
    FMULP ST3                           ; 005527b6
    FLD double ptr [EAX + 0x2cf2828]    ; 005527b8 | DAT_02cf2828
    FLD double ptr [EAX + 0x2cf2838]    ; 005527be | DAT_02cf2838
    FLD double ptr [EAX + 0x2cf2848]    ; 005527c4 | DAT_02cf2848
    FLD double ptr [EAX + 0x2cf2828]    ; 005527ca | DAT_02cf2828
    FXCH ST5                            ; 005527d0
    FSTP double ptr [ESP + 0x28]        ; 005527d2
    FLD double ptr [EAX + 0x2cf2838]    ; 005527d6 | DAT_02cf2838
    FXCH ST3                            ; 005527dc
    FSUB double ptr [ESP + 0x28]        ; 005527de
    FXCH ST4                            ; 005527e2
    FSTP double ptr [ESP + 0x18]        ; 005527e4
    FLD double ptr [EAX + 0x2cf2848]    ; 005527e8 | DAT_02cf2848
    FXCH ST2                            ; 005527ee
    FSUB double ptr [ESP + 0x18]        ; 005527f0
    FXCH ST6                            ; 005527f4
    FSTP double ptr [ESP + 0x20]        ; 005527f6
    FSUB double ptr [ESP + 0x20]        ; 005527fa
    FXCH ST4                            ; 005527fe
    FADD double ptr [ESP + 0x28]        ; 00552800
    FXCH ST2                            ; 00552804
    FADD double ptr [ESP + 0x18]        ; 00552806
    FXCH                                ; 0055280a
    FADD double ptr [ESP + 0x20]        ; 0055280c
    FXCH ST3                            ; 00552810
    FSTP double ptr [0x02cf3340]        ; 00552812 | DAT_02cf3340
    FXCH ST4                            ; 00552818
    FSTP double ptr [0x02cf3380]        ; 0055281a | DAT_02cf3380
    FXCH ST2                            ; 00552820
    FSTP double ptr [0x02cf33c0]        ; 00552822 | DAT_02cf33c0
    FXCH                                ; 00552828
    FSTP double ptr [0x02cf3348]        ; 0055282a | DAT_02cf3348
    FXCH                                ; 00552830
    FSTP double ptr [0x02cf3388]        ; 00552832 | DAT_02cf3388
    FSTP double ptr [0x02cf33c8]        ; 00552838 | DAT_02cf33c8
    MOV dword ptr [0x0060422c],ECX      ; 0055283e | DAT_0060422c
    MOV ESP,EBP                         ; 00552844
    POP EBP                             ; 00552846
    POP EBX                             ; 00552847
    RET                                 ; 00552848

