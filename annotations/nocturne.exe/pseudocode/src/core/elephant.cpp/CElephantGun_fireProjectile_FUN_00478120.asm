; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_elephant_cpp_CElephantGun_fireProjectile_FUN_00478120(CElephantGun *this_ptr)
;
; Parameters:
; CElephantGun *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x44]:1  local_44
;
; Referenced Globals:
;   double DOUBLE_0057f17c = 3.14159265350000
;   double DOUBLE_0057f184 = 0.00555555555555555
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b80f0
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478120
        ;   Label: core_elephant.cpp_CElephantGun_fireProjectile_FUN_00478120
    PUSH EDI                            ; 00478121
    PUSH EBP                            ; 00478122
    MOV EBP,ESP                         ; 00478123
    SUB ESP,0x68                        ; 00478125
    AND ESP,0xfffffff8                  ; 00478128
    MOV EBX,dword ptr [EBP + 0x10]      ; 0047812b
    MOV EDX,dword ptr [0x005ae704]      ; 0047812e | DAT_005ae704
    PUSH EDX                            ; 00478134 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00478135
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0047813a
    TEST EAX,EAX                        ; 0047813d
    JZ 0x00478147                       ; 0047813f
        ;   XREF to: 00478147 (CONDITIONAL_JUMP)  ; LAB_00478147
    MOV ESP,EBP                         ; 00478141
    POP EBP                             ; 00478143
    POP EDI                             ; 00478144
    POP EBX                             ; 00478145
    RET                                 ; 00478146
    LEA EAX,[ESP + 0x34]                ; 00478147
        ;   Label: LAB_00478147
    PUSH EAX                            ; 0047814b
    MOV EDX,dword ptr [EBX + 0x14c]     ; 0047814c
    PUSH EBX                            ; 00478152
    CALL dword ptr [EDX + 0xd8]         ; 00478153
    ADD ESP,0x8                         ; 00478159
    PUSH EAX                            ; 0047815c
    LEA EAX,[ESP + 0x14]                ; 0047815d
    PUSH EAX                            ; 00478161
    PUSH EBX                            ; 00478162
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00478163
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00478168
    MOV EAX,dword ptr [EBX + 0x2e0]     ; 0047816b
    MOV dword ptr [ESP + 0x60],EAX      ; 00478171
    LEA EAX,[ESP + 0x58]                ; 00478175
    PUSH EAX                            ; 00478179
    LEA EAX,[ESP + 0x8]                 ; 0047817a
    PUSH EAX                            ; 0047817e
    XOR ECX,ECX                         ; 0047817f
    PUSH EBX                            ; 00478181
    MOV dword ptr [ESP + 0x64],ECX      ; 00478182
    MOV dword ptr [ESP + 0x68],ECX      ; 00478186
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 0047818a
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_0040a200(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    LEA EAX,[ESP + 0x4c]                ; 0047818f
    ADD ESP,0xc                         ; 00478193
    LEA EDX,[ESP + 0x28]                ; 00478196
    FLD float ptr [ESP + 0x10]          ; 0047819a
    FLD float ptr [ESP + 0x14]          ; 0047819e
    FLD float ptr [ESP + 0x18]          ; 004781a2
    FLD float ptr [ESP + 0x4]           ; 004781a6
    FLD float ptr [ESP + 0x8]           ; 004781aa
    FLD float ptr [ESP + 0xc]           ; 004781ae
    FXCH ST2                            ; 004781b2
    FCHS                                ; 004781b4
    FXCH                                ; 004781b6
    FCHS                                ; 004781b8
    FXCH ST2                            ; 004781ba
    FCHS                                ; 004781bc
    FXCH                                ; 004781be
    FSTP float ptr [ESP + 0x40]         ; 004781c0
    FXCH                                ; 004781c4
    FSTP float ptr [ESP + 0x44]         ; 004781c6
    FSTP float ptr [ESP + 0x48]         ; 004781ca
    FXCH ST2                            ; 004781ce
    FADD float ptr [ESP + 0x4]          ; 004781d0
    FXCH                                ; 004781d4
    FADD float ptr [ESP + 0x8]          ; 004781d6
    FXCH ST2                            ; 004781da
    FADD float ptr [ESP + 0xc]          ; 004781dc
    FXCH                                ; 004781e0
    FSTP float ptr [ESP + 0x4c]         ; 004781e2
    FXCH                                ; 004781e6
    FSTP float ptr [ESP + 0x50]         ; 004781e8
    FSTP float ptr [ESP + 0x54]         ; 004781ec
    CMP EDX,EAX                         ; 004781f0
    JZ 0x0047820c                       ; 004781f2
        ;   XREF to: 0047820c (CONDITIONAL_JUMP)  ; LAB_0047820c
    MOV EAX,dword ptr [ESP + 0x40]      ; 004781f4
    MOV dword ptr [ESP + 0x28],EAX      ; 004781f8
    MOV EAX,dword ptr [ESP + 0x44]      ; 004781fc
    MOV dword ptr [ESP + 0x2c],EAX      ; 00478200
    MOV EAX,dword ptr [ESP + 0x48]      ; 00478204
    MOV dword ptr [ESP + 0x30],EAX      ; 00478208
    FLD float ptr [ESP + 0x2c]          ; 0047820c
        ;   Label: LAB_0047820c
    FMUL ST0                            ; 00478210
    FLD float ptr [ESP + 0x28]          ; 00478212
    FMUL ST0                            ; 00478216
    FADDP                               ; 00478218
    FLD float ptr [ESP + 0x30]          ; 0047821a
    FMUL ST0                            ; 0047821e
    FADDP                               ; 00478220
    FSQRT                               ; 00478222
    FST float ptr [ESP]                 ; 00478224
    FLDZ                                ; 00478227
    FCOMPP                              ; 00478229
    FNSTSW AX                           ; 0047822b
    SAHF                                ; 0047822d
    JNC 0x004782f0                      ; 0047822e
        ;   XREF to: 004782f0 (CONDITIONAL_JUMP)  ; LAB_004782f0
    FLD1                                ; 00478234
    FLD float ptr [ESP + 0x28]          ; 00478236
    FXCH                                ; 0047823a
    FDIV float ptr [ESP]                ; 0047823c
    FXCH                                ; 0047823f
    FMUL ST1                            ; 00478241
    FLD float ptr [ESP + 0x2c]          ; 00478243
    FMUL ST2                            ; 00478247
    FLD float ptr [ESP + 0x30]          ; 00478249
    FMULP ST3                           ; 0047824d
    FXCH                                ; 0047824f
    FSTP float ptr [ESP + 0x28]         ; 00478251
    FSTP float ptr [ESP + 0x2c]         ; 00478255
    FSTP float ptr [ESP + 0x30]         ; 00478259
    FLD float ptr [EBX + 0x570]         ; 0047825d
        ;   Label: LAB_0047825d
    FMUL double ptr [0x0057f17c]        ; 00478263 | DOUBLE_0057f17c
    FMUL double ptr [0x0057f184]        ; 00478269 | DOUBLE_0057f184
    SUB ESP,0x4                         ; 0047826f
    FSTP float ptr [ESP]                ; 00478272
    PUSH 0x0                            ; 00478275
    PUSH 0xff                           ; 00478277
    PUSH 0x0                            ; 0047827c
    LEA EAX,[ESP + 0x5c]                ; 0047827e
    PUSH 0x3f800000                     ; 00478282
    PUSH EAX                            ; 00478287
    LEA EAX,[ESP + 0x28]                ; 00478288
    PUSH EAX                            ; 0047828c
    MOV ECX,dword ptr [0x005b80f0]      ; 0047828d | DAT_005b80f0
    PUSH ECX                            ; 00478293
    CALL core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0 ; 00478294
        ;   XREF to: 0048b3e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLaserCone_FUN_0048b3e0(CFireEffect * this_ptr, CVector3f * origin, CVector3f * hit_position, float beam_width, ...)
    ADD ESP,0x20                        ; 00478299
    MOV dword ptr [EBX + 0x574],0x1     ; 0047829c
    FLD float ptr [ESP + 0x4c]          ; 004782a6
    FLD float ptr [ESP + 0x50]          ; 004782aa
    FSUB float ptr [ESP + 0x14]         ; 004782ae
    FXCH                                ; 004782b2
    FSUB float ptr [ESP + 0x10]         ; 004782b4
    FXCH                                ; 004782b8
    FST float ptr [ESP + 0x20]          ; 004782ba
    FMUL float ptr [ESP + 0x20]         ; 004782be
    FXCH                                ; 004782c2
    FST float ptr [ESP + 0x1c]          ; 004782c4
    FMUL float ptr [ESP + 0x1c]         ; 004782c8
    FLD float ptr [ESP + 0x54]          ; 004782cc
    FSUB float ptr [ESP + 0x18]         ; 004782d0
    FXCH                                ; 004782d4
    FADDP ST2,ST0                       ; 004782d6
    FST float ptr [ESP + 0x24]          ; 004782d8
    FMUL float ptr [ESP + 0x24]         ; 004782dc
    FADDP                               ; 004782e0
    FSQRT                               ; 004782e2
    FSTP float ptr [EBX + 0x578]        ; 004782e4
    MOV ESP,EBP                         ; 004782ea
    POP EBP                             ; 004782ec
    POP EDI                             ; 004782ed
    POP EBX                             ; 004782ee
    RET                                 ; 004782ef
    XOR EDI,EDI                         ; 004782f0
        ;   Label: LAB_004782f0
    MOV dword ptr [ESP + 0x2c],EDI      ; 004782f2
    MOV dword ptr [ESP + 0x28],EDI      ; 004782f6
    MOV dword ptr [ESP + 0x30],EDI      ; 004782fa
    JMP 0x0047825d                      ; 004782fe
        ;   XREF to: 0047825d (UNCONDITIONAL_JUMP)  ; LAB_0047825d

