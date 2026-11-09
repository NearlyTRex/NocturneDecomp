; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_emitter_cpp_FUN_0049f0e0(CEmitter *this_ptr)
;
; Parameters:
; CEmitter *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
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
; undefined8       Stack[-0x44]:8  local_44
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_vampboss.cpp_FUN_005a71e0 at 005a7233
;
; Referenced Globals:
;   undefined4 DAT_005dc947
;   undefined4 DAT_005dc94f
;   undefined4 DAT_005dc957
;   undefined4 DAT_005dc95f
;   undefined4 DAT_005dc967
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_fire.cpp_FUN_004b5e00
;   core_hero.cpp_FUN_004ea640
;   crt_math.c_atan2_FUN_005c1d69
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f0e0
        ;   Label: core_emitter.cpp_FUN_0049f0e0
    PUSH ESI                            ; 0049f0e1
    PUSH EDI                            ; 0049f0e2
    PUSH EBP                            ; 0049f0e3
    MOV EBP,ESP                         ; 0049f0e4
    SUB ESP,0x7c                        ; 0049f0e6
    AND ESP,0xfffffff8                  ; 0049f0e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049f0ec
    ADD EBX,0x20                        ; 0049f0ef
    PUSH EBX                            ; 0049f0f2
    LEA EDI,[ESP + 0x2c]                ; 0049f0f3
    LEA ESI,[ESP + 0x14]                ; 0049f0f7
    CALL core_hero.cpp_FUN_004ea640     ; 0049f0fb
        ;   XREF to: 004ea640 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ea640()
    FLD float ptr [EAX + 0x24]          ; 0049f100
    FLD float ptr [EAX + 0x28]          ; 0049f103
    FLD float ptr [EAX + 0x20]          ; 0049f106
    ADD ESP,0x4                         ; 0049f109
    LEA EAX,[ESP + 0x28]                ; 0049f10c
    FSUB float ptr [EBX]                ; 0049f110
    FXCH ST2                            ; 0049f112
    FSUB float ptr [EBX + 0x4]          ; 0049f114
    FXCH                                ; 0049f117
    FSUB float ptr [EBX + 0x8]          ; 0049f119
    FXCH ST2                            ; 0049f11c
    FSTP float ptr [ESP + 0x10]         ; 0049f11e
    FSTP float ptr [ESP + 0x14]         ; 0049f122
    FSTP float ptr [ESP + 0x18]         ; 0049f126
    LEA EBX,[ESP + 0x34]                ; 0049f12a
    MOVSD ES:EDI,ESI                    ; 0049f12e
    MOVSD ES:EDI,ESI                    ; 0049f12f
    MOVSD ES:EDI,ESI                    ; 0049f130
    CMP EBX,EAX                         ; 0049f131
    JZ 0x0049f14d                       ; 0049f133
        ;   XREF to: 0049f14d (CONDITIONAL_JUMP)  ; LAB_0049f14d
    MOV EAX,dword ptr [ESP + 0x28]      ; 0049f135
    MOV dword ptr [ESP + 0x34],EAX      ; 0049f139
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0049f13d
    MOV dword ptr [ESP + 0x38],EAX      ; 0049f141
    MOV EAX,dword ptr [ESP + 0x30]      ; 0049f145
    MOV dword ptr [ESP + 0x3c],EAX      ; 0049f149
    FLD float ptr [ESP + 0x38]          ; 0049f14d
        ;   Label: LAB_0049f14d
    PUSH 0x41000000                     ; 0049f151
    FADD float ptr [0x005dc947]         ; 0049f156 | DAT_005dc947
    PUSH 0xc1000000                     ; 0049f15c
    FSTP float ptr [ESP + 0x40]         ; 0049f161
    CALL core_actor.cpp_FUN_0040cc00    ; 0049f165
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x80],EAX      ; 0049f16a
    FLD float ptr [ESP + 0x80]          ; 0049f171
    ADD ESP,0x8                         ; 0049f178
    PUSH 0x41000000                     ; 0049f17b
    FADD float ptr [ESP + 0x38]         ; 0049f180
    PUSH 0xc1000000                     ; 0049f184
    FSTP float ptr [ESP + 0x3c]         ; 0049f189
    CALL core_actor.cpp_FUN_0040cc00    ; 0049f18d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    FLD double ptr [0x005dc94f]         ; 0049f192 | DAT_005dc94f
    FLD ST0                             ; 0049f198
    MOV dword ptr [ESP + 0x80],EAX      ; 0049f19a
    FSIN                                ; 0049f1a1
    FLD double ptr [0x005dc95f]         ; 0049f1a3 | DAT_005dc95f
    FPTAN                               ; 0049f1a9
    FSTP ST0                            ; 0049f1ab
    FLD float ptr [ESP + 0x80]          ; 0049f1ad
    ADD ESP,0x8                         ; 0049f1b4
    FADD float ptr [ESP + 0x3c]         ; 0049f1b7
    FST float ptr [ESP + 0x3c]          ; 0049f1bb
    FLD float ptr [ESP + 0x34]          ; 0049f1bf
    CALL crt_math.c_atan2_FUN_005c1d69  ; 0049f1c3
        ;   XREF to: 005c1d69 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005c1d69()
    FLD float ptr [ESP + 0x3c]          ; 0049f1c8
    FMUL ST0                            ; 0049f1cc
    FLD float ptr [ESP + 0x34]          ; 0049f1ce
    FMUL ST0                            ; 0049f1d2
    FADDP                               ; 0049f1d4
    FSQRT                               ; 0049f1d6
    FXCH ST4                            ; 0049f1d8
    FCOS                                ; 0049f1da
    FLD ST1                             ; 0049f1dc
    FSIN                                ; 0049f1de
    FXCH ST2                            ; 0049f1e0
    FCOS                                ; 0049f1e2
    FXCH ST5                            ; 0049f1e4
    FSTP double ptr [ESP + 0x4c]        ; 0049f1e6
    FXCH ST2                            ; 0049f1ea
    FMUL double ptr [ESP + 0x4c]        ; 0049f1ec
    FSUB float ptr [ESP + 0x38]         ; 0049f1f0
    FLD ST2                             ; 0049f1f4
    FMUL float ptr [0x005dc967]         ; 0049f1f6 | DAT_005dc967
    FLD double ptr [ESP + 0x4c]         ; 0049f1fc
    FMUL double ptr [0x005dc957]        ; 0049f200 | DAT_005dc957
    FXCH                                ; 0049f206
    FMUL ST4                            ; 0049f208
    FXCH                                ; 0049f20a
    FMUL double ptr [ESP + 0x4c]        ; 0049f20c
    FXCH                                ; 0049f210
    FMULP ST2                           ; 0049f212
    FXCH ST2                            ; 0049f214
    FMUL ST3                            ; 0049f216
    FXCH ST5                            ; 0049f218
    FMULP ST3                           ; 0049f21a
    FXCH                                ; 0049f21c
    FSTP float ptr [ESP + 0x70]         ; 0049f21e
    FXCH ST2                            ; 0049f222
    FCHS                                ; 0049f224
    FSTP float ptr [ESP + 0x44]         ; 0049f226
    FXCH                                ; 0049f22a
    FST float ptr [ESP]                 ; 0049f22c
    FLDZ                                ; 0049f22f
    FXCH ST3                            ; 0049f231
    FSTP float ptr [ESP + 0x40]         ; 0049f233
    FXCH                                ; 0049f237
    FSTP float ptr [ESP + 0x48]         ; 0049f239
    FXCH                                ; 0049f23d
    FCOMPP                              ; 0049f23f
    FNSTSW AX                           ; 0049f241
    SAHF                                ; 0049f243
    JNC 0x0049f2cd                      ; 0049f244
        ;   XREF to: 0049f2cd (CONDITIONAL_JUMP)  ; LAB_0049f2cd
    FLD float ptr [ESP + 0x70]          ; 0049f24a
    FDIV float ptr [ESP]                ; 0049f24e
    FSQRT                               ; 0049f251
    FLD float ptr [ESP + 0x40]          ; 0049f253
    FXCH                                ; 0049f257
    FSTP float ptr [ESP + 0x74]         ; 0049f259
    FMUL float ptr [ESP + 0x74]         ; 0049f25d
    FLD float ptr [ESP + 0x44]          ; 0049f261
    FMUL float ptr [ESP + 0x74]         ; 0049f265
    FLD float ptr [ESP + 0x48]          ; 0049f269
    FMUL float ptr [ESP + 0x74]         ; 0049f26d
    LEA EDI,[ESP + 0x4]                 ; 0049f271
    LEA ESI,[ESP + 0x1c]                ; 0049f275
    LEA EBX,[ESP + 0x4]                 ; 0049f279
    LEA EAX,[ESP + 0x40]                ; 0049f27d
    FXCH ST2                            ; 0049f281
    FSTP float ptr [ESP + 0x1c]         ; 0049f283
    FSTP float ptr [ESP + 0x20]         ; 0049f287
    FSTP float ptr [ESP + 0x24]         ; 0049f28b
    MOVSD ES:EDI,ESI                    ; 0049f28f
    MOVSD ES:EDI,ESI                    ; 0049f290
    MOVSD ES:EDI,ESI                    ; 0049f291
    CMP EAX,EBX                         ; 0049f292
    JZ 0x0049f2ae                       ; 0049f294
        ;   XREF to: 0049f2ae (CONDITIONAL_JUMP)  ; LAB_0049f2ae
    MOV EAX,dword ptr [ESP + 0x4]       ; 0049f296
    MOV dword ptr [ESP + 0x40],EAX      ; 0049f29a
    MOV EAX,dword ptr [ESP + 0x8]       ; 0049f29e
    MOV dword ptr [ESP + 0x44],EAX      ; 0049f2a2
    MOV EAX,dword ptr [ESP + 0xc]       ; 0049f2a6
    MOV dword ptr [ESP + 0x48],EAX      ; 0049f2aa
    PUSH 0x0                            ; 0049f2ae
        ;   Label: LAB_0049f2ae
    PUSH 0x0                            ; 0049f2b0
    LEA EAX,[ESP + 0x48]                ; 0049f2b2
    PUSH EAX                            ; 0049f2b6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f2b7
    ADD EAX,0x20                        ; 0049f2ba
    PUSH EAX                            ; 0049f2bd
    MOV EDX,dword ptr [0x0061c010]      ; 0049f2be | DAT_0061c010
    PUSH EDX                            ; 0049f2c4
    CALL core_fire.cpp_FUN_004b5e00     ; 0049f2c5
        ;   XREF to: 004b5e00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b5e00(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 0049f2ca
    MOV ESP,EBP                         ; 0049f2cd
        ;   Label: LAB_0049f2cd
    POP EBP                             ; 0049f2cf
    POP EDI                             ; 0049f2d0
    POP ESI                             ; 0049f2d1
    POP EBX                             ; 0049f2d2
    RET                                 ; 0049f2d3

