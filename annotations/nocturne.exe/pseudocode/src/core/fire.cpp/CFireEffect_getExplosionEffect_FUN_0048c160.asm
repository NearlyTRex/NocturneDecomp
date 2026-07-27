; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_fire_cpp_CFireEffect_getExplosionEffect_FUN_0048c160(undefined4 param_1,float *param_2,float param_3,float *param_4,float *param_5)
;
; Local Variables:
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
;
; XREF[2]:
;   core_set.cpp_CDemonSet_processActors_FUN_00509140 at 00509440
;   core_trigger.cpp_FUN_00547b30 at 00547ed0
;
; Referenced Globals:
;   double DOUBLE_0058150c = 0.5
;   double DOUBLE_00581514 = 5.48113170615542E-315
;   undefined4 DAT_01c5d714
;   undefined4 DAT_01c5d724
;   undefined4 DAT_01c5d728
;   undefined4 DAT_01c5d72c
;   undefined4 DAT_01c5d730
;   undefined4 DAT_01c5d734
;   undefined4 DAT_01c5d738
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c160
        ;   Label: core_fire.cpp_CFireEffect_getExplosionEffect_FUN_0048c160
    PUSH ESI                            ; 0048c161
    PUSH EDI                            ; 0048c162
    PUSH EBP                            ; 0048c163
    MOV EBP,ESP                         ; 0048c164
    SUB ESP,0x3c                        ; 0048c166
    AND ESP,0xfffffff8                  ; 0048c169
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0048c16c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0048c16f
    MOV dword ptr [ESP + 0x4],EAX       ; 0048c172
    MOV EDX,0x1c5d708                   ; 0048c176
    XOR ECX,ECX                         ; 0048c17b
    FLD float ptr [EDX + 0xc]           ; 0048c17d | DAT_01c5d714 | DAT_01c5d730
        ;   Label: LAB_0048c17d
    MOV ESI,EDX                         ; 0048c180
    FCOMP double ptr [0x0058150c]       ; 0048c182 | DOUBLE_0058150c
    FNSTSW AX                           ; 0048c188
    SAHF                                ; 0048c18a
    JA 0x0048c19f                       ; 0048c18b
        ;   XREF to: 0048c19f (CONDITIONAL_JUMP)  ; LAB_0048c19f
    INC ECX                             ; 0048c18d
        ;   Label: LAB_0048c18d
    ADD EDX,0x1c                        ; 0048c18e
    CMP ECX,0xa                         ; 0048c191
    JL 0x0048c17d                       ; 0048c194
        ;   XREF to: 0048c17d (CONDITIONAL_JUMP)  ; LAB_0048c17d
    XOR EAX,EAX                         ; 0048c196
    MOV ESP,EBP                         ; 0048c198
    POP EBP                             ; 0048c19a
    POP EDI                             ; 0048c19b
    POP ESI                             ; 0048c19c
    POP EBX                             ; 0048c19d
    RET                                 ; 0048c19e
    FLD float ptr [EBX]                 ; 0048c19f
        ;   Label: LAB_0048c19f
    FSUB float ptr [EDX]                ; 0048c1a1 | DAT_01c5d724
    FSTP float ptr [ESP + 0x2c]         ; 0048c1a3
    FLD float ptr [EBX + 0x4]           ; 0048c1a7
    FSUB float ptr [EDX + 0x4]          ; 0048c1aa | DAT_01c5d728
    LEA EDI,[ESP + 0x2c]                ; 0048c1ad
    FSTP float ptr [ESP + 0x30]         ; 0048c1b1
    FLD float ptr [EBX + 0x8]           ; 0048c1b5
    FSUB float ptr [EDX + 0x8]          ; 0048c1b8 | DAT_01c5d72c
    LEA EAX,[ESP + 0x8]                 ; 0048c1bb
    FSTP float ptr [ESP + 0x34]         ; 0048c1bf
    CMP EAX,EDI                         ; 0048c1c3
    JZ 0x0048c1df                       ; 0048c1c5
        ;   XREF to: 0048c1df (CONDITIONAL_JUMP)  ; LAB_0048c1df
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0048c1c7
    MOV dword ptr [ESP + 0x8],EAX       ; 0048c1cb
    MOV EAX,dword ptr [ESP + 0x30]      ; 0048c1cf
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c1d3
    MOV EAX,dword ptr [ESP + 0x34]      ; 0048c1d7
    MOV dword ptr [ESP + 0x10],EAX      ; 0048c1db
    FLD float ptr [ESP + 0xc]           ; 0048c1df
        ;   Label: LAB_0048c1df
    FMUL ST0                            ; 0048c1e3
    FLD float ptr [ESP + 0x8]           ; 0048c1e5
    FMUL ST0                            ; 0048c1e9
    FADDP                               ; 0048c1eb
    FLD float ptr [ESP + 0x10]          ; 0048c1ed
    FMUL ST0                            ; 0048c1f1
    FADDP                               ; 0048c1f3
    FSQRT                               ; 0048c1f5
    FLD float ptr [ESI + 0x10]          ; 0048c1f7 | DAT_01c5d734
    FMUL double ptr [0x0058150c]        ; 0048c1fa | DOUBLE_0058150c
    FADD float ptr [ESP + 0x4]          ; 0048c200
    FXCH                                ; 0048c204
    FST float ptr [ESP]                 ; 0048c206
    FCOMPP                              ; 0048c209
    FNSTSW AX                           ; 0048c20b
    SAHF                                ; 0048c20d
    JNC 0x0048c18d                      ; 0048c20e
        ;   XREF to: 0048c18d (CONDITIONAL_JUMP)  ; LAB_0048c18d
    MOV EDX,dword ptr [EBP + 0x20]      ; 0048c214
    TEST EDX,EDX                        ; 0048c217
    JZ 0x0048c282                       ; 0048c219
        ;   XREF to: 0048c282 (CONDITIONAL_JUMP)  ; LAB_0048c282
    FLD1                                ; 0048c21b
    FLD float ptr [ESP + 0x8]           ; 0048c21d
    FXCH                                ; 0048c221
    FDIV float ptr [ESP]                ; 0048c223
    FXCH                                ; 0048c226
    FMUL ST1                            ; 0048c228
    FLD float ptr [ESP + 0xc]           ; 0048c22a
    FMUL ST2                            ; 0048c22e
    FLD float ptr [ESP + 0x10]          ; 0048c230
    FMULP ST3                           ; 0048c234
    FXCH                                ; 0048c236
    FST float ptr [ESP + 0x20]          ; 0048c238
    FLD float ptr [0x00581514]          ; 0048c23c | DOUBLE_00581514
    FXCH                                ; 0048c242
    FMUL ST1                            ; 0048c244
    FXCH ST2                            ; 0048c246
    FST float ptr [ESP + 0x24]          ; 0048c248
    FMUL ST1                            ; 0048c24c
    FXCH ST3                            ; 0048c24e
    FST float ptr [ESP + 0x28]          ; 0048c250
    FMULP                               ; 0048c254
    LEA EAX,[ESP + 0x14]                ; 0048c256
    FXCH                                ; 0048c25a
    FSTP float ptr [ESP + 0x14]         ; 0048c25c
    FXCH                                ; 0048c260
    FSTP float ptr [ESP + 0x18]         ; 0048c262
    FSTP float ptr [ESP + 0x1c]         ; 0048c266
    CMP EAX,EDX                         ; 0048c26a
    JZ 0x0048c282                       ; 0048c26c
        ;   XREF to: 0048c282 (CONDITIONAL_JUMP)  ; LAB_0048c282
    MOV EAX,dword ptr [ESP + 0x14]      ; 0048c26e
    MOV dword ptr [EDX],EAX             ; 0048c272
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048c274
    MOV dword ptr [EDX + 0x4],EAX       ; 0048c278
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048c27b
    MOV dword ptr [EDX + 0x8],EAX       ; 0048c27f
    MOV EBX,dword ptr [EBP + 0x24]      ; 0048c282
        ;   Label: LAB_0048c282
    TEST EBX,EBX                        ; 0048c285
    JZ 0x0048c28e                       ; 0048c287
        ;   XREF to: 0048c28e (CONDITIONAL_JUMP)  ; LAB_0048c28e
    MOV EAX,dword ptr [ESI + 0x14]      ; 0048c289 | DAT_01c5d738
    MOV dword ptr [EBX],EAX             ; 0048c28c
    MOV EAX,0x1                         ; 0048c28e
        ;   Label: LAB_0048c28e
    MOV ESP,EBP                         ; 0048c293
    POP EBP                             ; 0048c295
    POP EDI                             ; 0048c296
    POP ESI                             ; 0048c297
    POP EBX                             ; 0048c298
    RET                                 ; 0048c299

