; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void sound_sndmain_cpp_FUN_0056f1e0(void)
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
;   sound_sndmain.cpp_CSfxSlot_compute_FUN_00570f30 at 00571021
;   sound_sndmain.cpp_pollAllSfxSlots_FUN_00576f40 at 00576fee
;   sound_sndmain.cpp_pollAndMixSfx_FUN_00576c20 at 00576c89
;
; Referenced Globals:
;   undefined4 DAT_005f3128
;   undefined4 DAT_006232ec
;   undefined4 DAT_00623308
;   undefined4 DAT_02c7fbf8
;   undefined4 DAT_02c7fc08
;   undefined4 DAT_02c7fc18
;   undefined4 DAT_02c7fc88
;   undefined4 DAT_02c80710
;   undefined4 DAT_02c80718
;   undefined4 DAT_02c80750
;   undefined4 DAT_02c80758
;   undefined4 DAT_02c80790
;   undefined4 DAT_02c80798
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f1e0
        ;   Label: sound_sndmain.cpp_FUN_0056f1e0
    PUSH EBP                            ; 0056f1e1
    MOV EBP,ESP                         ; 0056f1e2
    SUB ESP,0x34                        ; 0056f1e4
    AND ESP,0xfffffff8                  ; 0056f1e7
    MOV ECX,dword ptr [0x006232ec]      ; 0056f1ea | DAT_006232ec
    MOV EAX,[0x02c7fc88]                ; 0056f1f0 | DAT_02c7fc88
    SHL EAX,0x3                         ; 0056f1f5
    CMP ECX,0x2                         ; 0056f1f8
    JZ 0x0056f29b                       ; 0056f1fb
        ;   XREF to: 0056f29b (CONDITIONAL_JUMP)  ; LAB_0056f29b
    TEST ECX,ECX                        ; 0056f201
    JLE 0x0056f290                      ; 0056f203
        ;   XREF to: 0056f290 (CONDITIONAL_JUMP)  ; LAB_0056f290
    MOV EDX,dword ptr [EAX + 0x2c7fbf8] ; 0056f209 | DAT_02c7fbf8
    MOV dword ptr [ESP + 0x10],EDX      ; 0056f20f
    MOV EDX,dword ptr [EAX + 0x2c7fbfc] ; 0056f213
    MOV dword ptr [ESP + 0x14],EDX      ; 0056f219
    MOV EDX,dword ptr [EAX + 0x2c7fc08] ; 0056f21d | DAT_02c7fc08
    MOV dword ptr [ESP + 0x8],EDX       ; 0056f223
    MOV EDX,dword ptr [EAX + 0x2c7fc0c] ; 0056f227
    MOV dword ptr [ESP + 0xc],EDX       ; 0056f22d
    MOV EDX,dword ptr [EAX + 0x2c7fc18] ; 0056f231 | DAT_02c7fc18
    MOV EAX,dword ptr [EAX + 0x2c7fc1c] ; 0056f237
    MOV dword ptr [ESP],EDX             ; 0056f23d
    MOV dword ptr [ESP + 0x4],EAX       ; 0056f240
    LEA EDX,[ECX*0x8 + 0x0]             ; 0056f244
    XOR EAX,EAX                         ; 0056f24b
    ADD EAX,0x8                         ; 0056f24d
        ;   Label: LAB_0056f24d
    MOV EBX,dword ptr [ESP + 0x10]      ; 0056f250
    MOV dword ptr [EAX + 0x2c80708],EBX ; 0056f254 | DAT_02c80710 | DAT_02c80718
    MOV EBX,dword ptr [ESP + 0x14]      ; 0056f25a
    MOV dword ptr [EAX + 0x2c8070c],EBX ; 0056f25e
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056f264
    MOV dword ptr [EAX + 0x2c80748],EBX ; 0056f268 | DAT_02c80750 | DAT_02c80758
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056f26e
    MOV dword ptr [EAX + 0x2c8074c],EBX ; 0056f272
    MOV EBX,dword ptr [ESP]             ; 0056f278
    MOV dword ptr [EAX + 0x2c80788],EBX ; 0056f27b | DAT_02c80790 | DAT_02c80798
    MOV EBX,dword ptr [ESP + 0x4]       ; 0056f281
    MOV dword ptr [EAX + 0x2c8078c],EBX ; 0056f285
    CMP EAX,EDX                         ; 0056f28b
    JL 0x0056f24d                       ; 0056f28d
        ;   XREF to: 0056f24d (CONDITIONAL_JUMP)  ; LAB_0056f24d
    NOP                                 ; 0056f28f
    MOV dword ptr [0x006232ec],ECX      ; 0056f290 | DAT_006232ec
        ;   Label: LAB_0056f290
    MOV ESP,EBP                         ; 0056f296
    POP EBP                             ; 0056f298
    POP EBX                             ; 0056f299
    RET                                 ; 0056f29a
    FLD float ptr [0x00623308]          ; 0056f29b | DAT_00623308
        ;   Label: LAB_0056f29b
    MOV EDX,dword ptr [0x02c7fc88]      ; 0056f2a1 | DAT_02c7fc88
    FMUL float ptr [0x005f3128]         ; 0056f2a7 | DAT_005f3128
    FLD float ptr [EDX*0x4 + 0x2c7fc40] ; 0056f2ad
    FMUL ST1                            ; 0056f2b4
    FLD float ptr [EDX*0x4 + 0x2c7fc48] ; 0056f2b6
    FMUL ST2                            ; 0056f2bd
    FLD float ptr [EDX*0x4 + 0x2c7fc50] ; 0056f2bf
    FMULP ST3                           ; 0056f2c6
    FLD double ptr [EAX + 0x2c7fbf8]    ; 0056f2c8 | DAT_02c7fbf8
    FLD double ptr [EAX + 0x2c7fc08]    ; 0056f2ce | DAT_02c7fc08
    FLD double ptr [EAX + 0x2c7fc18]    ; 0056f2d4 | DAT_02c7fc18
    FLD double ptr [EAX + 0x2c7fbf8]    ; 0056f2da | DAT_02c7fbf8
    FXCH ST5                            ; 0056f2e0
    FSTP double ptr [ESP + 0x28]        ; 0056f2e2
    FLD double ptr [EAX + 0x2c7fc08]    ; 0056f2e6 | DAT_02c7fc08
    FXCH ST3                            ; 0056f2ec
    FSUB double ptr [ESP + 0x28]        ; 0056f2ee
    FXCH ST4                            ; 0056f2f2
    FSTP double ptr [ESP + 0x18]        ; 0056f2f4
    FLD double ptr [EAX + 0x2c7fc18]    ; 0056f2f8 | DAT_02c7fc18
    FXCH ST2                            ; 0056f2fe
    FSUB double ptr [ESP + 0x18]        ; 0056f300
    FXCH ST6                            ; 0056f304
    FSTP double ptr [ESP + 0x20]        ; 0056f306
    FSUB double ptr [ESP + 0x20]        ; 0056f30a
    FXCH ST4                            ; 0056f30e
    FADD double ptr [ESP + 0x28]        ; 0056f310
    FXCH ST2                            ; 0056f314
    FADD double ptr [ESP + 0x18]        ; 0056f316
    FXCH                                ; 0056f31a
    FADD double ptr [ESP + 0x20]        ; 0056f31c
    FXCH ST3                            ; 0056f320
    FSTP double ptr [0x02c80710]        ; 0056f322 | DAT_02c80710
    FXCH ST4                            ; 0056f328
    FSTP double ptr [0x02c80750]        ; 0056f32a | DAT_02c80750
    FXCH ST2                            ; 0056f330
    FSTP double ptr [0x02c80790]        ; 0056f332 | DAT_02c80790
    FXCH                                ; 0056f338
    FSTP double ptr [0x02c80718]        ; 0056f33a | DAT_02c80718
    FXCH                                ; 0056f340
    FSTP double ptr [0x02c80758]        ; 0056f342 | DAT_02c80758
    FSTP double ptr [0x02c80798]        ; 0056f348 | DAT_02c80798
    MOV dword ptr [0x006232ec],ECX      ; 0056f34e | DAT_006232ec
    MOV ESP,EBP                         ; 0056f354
    POP EBP                             ; 0056f356
    POP EBX                             ; 0056f357
    RET                                 ; 0056f358

