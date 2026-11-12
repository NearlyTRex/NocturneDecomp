; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000(CDemonRaytrace *this_ptr,float fov_or_radius,int render_mode)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   fov_or_radius
; int              Stack[0xc]:4   render_mode
; Local Variables:
; undefined8       Stack[-0x1b0]:8  local_1b0
; undefined8       Stack[-0x1a8]:8  local_1a8
; undefined8       Stack[-0x1a0]:8  local_1a0
; undefined4       Stack[-0x198]:4  local_198
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined4       Stack[-0x188]:4  local_188
; undefined4       Stack[-0x184]:4  local_184
; undefined4       Stack[-0x180]:4  local_180
; undefined4       Stack[-0x17c]:4  local_17c
; undefined4       Stack[-0x178]:4  local_178
; undefined4       Stack[-0x174]:4  local_174
; undefined4       Stack[-0x170]:4  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined4       Stack[-0x168]:4  local_168
; undefined4       Stack[-0x164]:4  local_164
; undefined4       Stack[-0x160]:4  local_160
; undefined        Stack[-0x15c]:1  local_15c
; undefined4       Stack[-0x150]:4  local_150
; undefined4       Stack[-0x14c]:4  local_14c
; undefined4       Stack[-0x148]:4  local_148
; undefined4       Stack[-0x144]:4  local_144
; undefined4       Stack[-0x140]:4  local_140
; undefined4       Stack[-0x13c]:4  local_13c
; undefined4       Stack[-0x138]:4  local_138
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
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
;
; XREF[1]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d155
;
; Referenced Globals:
;   undefined4 DAT_005d1bc3
;   undefined4 DAT_005d1bcb
;   undefined4 DAT_005d1bd3
;   undefined4 DAT_0060b27c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01bd3c4c
;   undefined4 DAT_01bd3c50
;   undefined4 DAT_01bd3c54
;   undefined4 DAT_01bd3c58
;   undefined4 DAT_01bd3c5c
;   undefined4 DAT_01bd3c60
;   undefined4 DAT_01d04fb8
;   undefined4 DAT_01d04fbc
;   undefined4 DAT_01d04fc0
;   undefined4 DAT_01d04fc4
;   ... and 6 more
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0
;   core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280
;   engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0
;   engine_drender.cpp_FUN_0046b5c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00475000
        ;   Label: core_dtrace.cpp_CDemonRaytrace_renderFrustumCubes_FUN_00475000
    PUSH ESI                            ; 00475001
    PUSH EDI                            ; 00475002
    PUSH EBP                            ; 00475003
    MOV EBP,ESP                         ; 00475004
    SUB ESP,0x19c                       ; 00475006
    AND ESP,0xfffffff8                  ; 0047500c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0047500f
    CMP dword ptr [0x01bd3c60],0x0      ; 00475012 | DAT_01bd3c60
    JZ 0x00475025                       ; 00475019
        ;   XREF to: 00475025 (CONDITIONAL_JUMP)  ; LAB_00475025
    CMP dword ptr [EBP + 0x1c],0x0      ; 0047501b
    JNZ 0x00475931                      ; 0047501f
        ;   XREF to: 00475931 (CONDITIONAL_JUMP)  ; LAB_00475931
    XOR ESI,ESI                         ; 00475025
        ;   Label: LAB_00475025
    MOV dword ptr [0x01bd3c4c],ESI      ; 00475027 | DAT_01bd3c4c
    MOV dword ptr [0x01bd3c50],ESI      ; 0047502d | DAT_01bd3c50
    MOV dword ptr [0x01bd3c54],ESI      ; 00475033 | DAT_01bd3c54
    MOV dword ptr [0x01bd3c58],ESI      ; 00475039 | DAT_01bd3c58
    MOV dword ptr [0x01bd3c5c],ESI      ; 0047503f | DAT_01bd3c5c
    MOV ESI,dword ptr [0x0060b27c]      ; 00475045 | DAT_0060b27c
    PUSH ESI                            ; 0047504b | DAT_01ba5c50
    LEA ESI,[ESP + 0x58]                ; 0047504c
    LEA EDI,[ESP + 0x7c]                ; 00475050
    CALL engine_drender.cpp_FUN_0046b5c0 ; 00475054
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5c0()
    LEA ESI,[ESP + 0x58]                ; 00475059
    ADD ESP,0x4                         ; 0047505d
    MOVSD ES:EDI,ESI                    ; 00475060
    MOVSD ES:EDI,ESI                    ; 00475061
    MOVSD ES:EDI,ESI                    ; 00475062
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475063
    MOV dword ptr [ESP + 0x190],EAX     ; 00475067
    FLD double ptr [0x005d1bc3]         ; 0047506e | DAT_005d1bc3
    FILD dword ptr [ESP + 0x190]        ; 00475074
    FMUL ST1                            ; 0047507b
    FST float ptr [ESP + 0x60]          ; 0047507d
    FSUB float ptr [EBX + 0x10]         ; 00475081
    FDIV float ptr [EBX + 0x28]         ; 00475084
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00475087
    MOV dword ptr [ESP + 0x190],EAX     ; 0047508b
    FILD dword ptr [ESP + 0x190]        ; 00475092
    FMUL ST2                            ; 00475099
    FST float ptr [ESP + 0x64]          ; 0047509b
    FXCH                                ; 0047509f
    CALL crt_math.c_round_FUN_005b7ff0  ; 004750a1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x78]        ; 004750a6
    FSUB float ptr [EBX + 0x14]         ; 004750aa
    FDIV float ptr [EBX + 0x2c]         ; 004750ad
    MOV EAX,dword ptr [ESP + 0x80]      ; 004750b0
    MOV dword ptr [ESP + 0x190],EAX     ; 004750b7
    FILD dword ptr [ESP + 0x190]        ; 004750be
    FMULP ST2                           ; 004750c5
    FXCH                                ; 004750c7
    FST float ptr [ESP + 0x68]          ; 004750c9
    FXCH                                ; 004750cd
    CALL crt_math.c_round_FUN_005b7ff0  ; 004750cf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x7c]        ; 004750d4
    FSUB float ptr [EBX + 0x18]         ; 004750d8
    FDIV float ptr [EBX + 0x30]         ; 004750db
    FLD float ptr [EBP + 0x18]          ; 004750de
    FMUL float ptr [0x005d1bcb]         ; 004750e1 | DAT_005d1bcb
    CALL crt_math.c_round_FUN_005b7ff0  ; 004750e7
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x6c]        ; 004750ec
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004750f0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004750f4
    MOV dword ptr [ESP + 0x70],EAX      ; 004750f8
    MOV dword ptr [ESP + 0x74],EAX      ; 004750fc
    MOV EAX,[0x01d04fb8]                ; 00475100 | DAT_01d04fb8
    CALL crt_math.c_round_FUN_005b7ff0  ; 00475105
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x80]        ; 0047510a
    IMUL EDX                            ; 00475111
    SHRD EAX,EDX,0x10                   ; 00475113
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475117
    MOV ECX,EAX                         ; 0047511b
    MOV EAX,[0x01d04fc4]                ; 0047511d | DAT_01d04fc4
    IMUL EDX                            ; 00475122
    SHRD EAX,EDX,0x10                   ; 00475124
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475128
    ADD ECX,EAX                         ; 0047512c
    MOV EAX,[0x01d04fd0]                ; 0047512e | DAT_01d04fd0
    IMUL EDX                            ; 00475133
    SHRD EAX,EDX,0x10                   ; 00475135
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475139
    ADD ECX,EAX                         ; 0047513d
    MOV EAX,[0x01d04fbc]                ; 0047513f | DAT_01d04fbc
    MOV dword ptr [ESP + 0x18],ECX      ; 00475144
    IMUL EDX                            ; 00475148
    SHRD EAX,EDX,0x10                   ; 0047514a
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0047514e
    MOV ECX,EAX                         ; 00475152
    MOV EAX,[0x01d04fc8]                ; 00475154 | DAT_01d04fc8
    IMUL EDX                            ; 00475159
    SHRD EAX,EDX,0x10                   ; 0047515b
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0047515f
    ADD ECX,EAX                         ; 00475163
    MOV EAX,[0x01d04fd4]                ; 00475165 | DAT_01d04fd4
    IMUL EDX                            ; 0047516a
    SHRD EAX,EDX,0x10                   ; 0047516c
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475170
    ADD ECX,EAX                         ; 00475174
    MOV EAX,[0x01d04fc0]                ; 00475176 | DAT_01d04fc0
    MOV dword ptr [ESP + 0x1c],ECX      ; 0047517b
    IMUL EDX                            ; 0047517f
    SHRD EAX,EDX,0x10                   ; 00475181
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475185
    MOV ECX,EAX                         ; 00475189
    MOV EAX,[0x01d04fcc]                ; 0047518b | DAT_01d04fcc
    IMUL EDX                            ; 00475190
    SHRD EAX,EDX,0x10                   ; 00475192
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475196
    ADD ECX,EAX                         ; 0047519a
    MOV EAX,[0x01d04fd8]                ; 0047519c | DAT_01d04fd8
    IMUL EDX                            ; 004751a1
    SHRD EAX,EDX,0x10                   ; 004751a3
    ADD ECX,EAX                         ; 004751a7
    MOV dword ptr [ESP + 0x20],ECX      ; 004751a9
    MOV EDI,dword ptr [ESP + 0x6c]      ; 004751ad
    NEG EDI                             ; 004751b1
    MOV EAX,[0x01d04fb8]                ; 004751b3 | DAT_01d04fb8
    MOV EDX,EDI                         ; 004751b8
    IMUL EDX                            ; 004751ba
    SHRD EAX,EDX,0x10                   ; 004751bc
    MOV EDX,dword ptr [ESP + 0x70]      ; 004751c0
    MOV ECX,EAX                         ; 004751c4
    MOV EAX,[0x01d04fc4]                ; 004751c6 | DAT_01d04fc4
    IMUL EDX                            ; 004751cb
    SHRD EAX,EDX,0x10                   ; 004751cd
    MOV EDX,dword ptr [ESP + 0x74]      ; 004751d1
    ADD ECX,EAX                         ; 004751d5
    MOV EAX,[0x01d04fd0]                ; 004751d7 | DAT_01d04fd0
    IMUL EDX                            ; 004751dc
    SHRD EAX,EDX,0x10                   ; 004751de
    MOV EDX,EDI                         ; 004751e2
    ADD ECX,EAX                         ; 004751e4
    MOV EAX,[0x01d04fbc]                ; 004751e6 | DAT_01d04fbc
    MOV dword ptr [ESP + 0x24],ECX      ; 004751eb
    IMUL EDX                            ; 004751ef
    SHRD EAX,EDX,0x10                   ; 004751f1
    MOV EDX,dword ptr [ESP + 0x70]      ; 004751f5
    MOV ECX,EAX                         ; 004751f9
    MOV EAX,[0x01d04fc8]                ; 004751fb | DAT_01d04fc8
    IMUL EDX                            ; 00475200
    SHRD EAX,EDX,0x10                   ; 00475202
    MOV EDX,dword ptr [ESP + 0x74]      ; 00475206
    ADD ECX,EAX                         ; 0047520a
    MOV EAX,[0x01d04fd4]                ; 0047520c | DAT_01d04fd4
    IMUL EDX                            ; 00475211
    SHRD EAX,EDX,0x10                   ; 00475213
    MOV EDX,EDI                         ; 00475217
    ADD ECX,EAX                         ; 00475219
    MOV EAX,[0x01d04fc0]                ; 0047521b | DAT_01d04fc0
    MOV dword ptr [ESP + 0x28],ECX      ; 00475220
    IMUL EDX                            ; 00475224
    SHRD EAX,EDX,0x10                   ; 00475226
    MOV EDX,dword ptr [ESP + 0x70]      ; 0047522a
    MOV ECX,EAX                         ; 0047522e
    MOV EAX,[0x01d04fcc]                ; 00475230 | DAT_01d04fcc
    IMUL EDX                            ; 00475235
    SHRD EAX,EDX,0x10                   ; 00475237
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047523b
    ADD ECX,EAX                         ; 0047523f
    MOV EAX,[0x01d04fd8]                ; 00475241 | DAT_01d04fd8
    IMUL EDX                            ; 00475246
    SHRD EAX,EDX,0x10                   ; 00475248
    ADD ECX,EAX                         ; 0047524c
    MOV EAX,dword ptr [ESP + 0x70]      ; 0047524e
    NEG EAX                             ; 00475252
    MOV EDX,EDI                         ; 00475254
    MOV dword ptr [ESP + 0x70],EAX      ; 00475256
    MOV EAX,[0x01d04fb8]                ; 0047525a | DAT_01d04fb8
    MOV dword ptr [ESP + 0x2c],ECX      ; 0047525f
    IMUL EDX                            ; 00475263
    SHRD EAX,EDX,0x10                   ; 00475265
    MOV EDX,dword ptr [ESP + 0x70]      ; 00475269
    MOV ECX,EAX                         ; 0047526d
    MOV EAX,[0x01d04fc4]                ; 0047526f | DAT_01d04fc4
    IMUL EDX                            ; 00475274
    SHRD EAX,EDX,0x10                   ; 00475276
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047527a
    ADD ECX,EAX                         ; 0047527e
    MOV EAX,[0x01d04fd0]                ; 00475280 | DAT_01d04fd0
    IMUL EDX                            ; 00475285
    SHRD EAX,EDX,0x10                   ; 00475287
    ADD ECX,EAX                         ; 0047528b
    MOV dword ptr [ESP + 0x6c],EDI      ; 0047528d
    MOV dword ptr [ESP + 0x30],ECX      ; 00475291
    MOV EAX,[0x01d04fbc]                ; 00475295 | DAT_01d04fbc
    MOV EDX,EDI                         ; 0047529a
    IMUL EDX                            ; 0047529c
    SHRD EAX,EDX,0x10                   ; 0047529e
    MOV EDX,dword ptr [ESP + 0x70]      ; 004752a2
    MOV ECX,EAX                         ; 004752a6
    MOV EAX,[0x01d04fc8]                ; 004752a8 | DAT_01d04fc8
    IMUL EDX                            ; 004752ad
    SHRD EAX,EDX,0x10                   ; 004752af
    MOV EDX,dword ptr [ESP + 0x74]      ; 004752b3
    ADD ECX,EAX                         ; 004752b7
    MOV EAX,[0x01d04fd4]                ; 004752b9 | DAT_01d04fd4
    IMUL EDX                            ; 004752be
    SHRD EAX,EDX,0x10                   ; 004752c0
    MOV EDX,EDI                         ; 004752c4
    ADD ECX,EAX                         ; 004752c6
    MOV EAX,[0x01d04fc0]                ; 004752c8 | DAT_01d04fc0
    MOV dword ptr [ESP + 0x34],ECX      ; 004752cd
    IMUL EDX                            ; 004752d1
    SHRD EAX,EDX,0x10                   ; 004752d3
    MOV EDX,dword ptr [ESP + 0x70]      ; 004752d7
    MOV ECX,EAX                         ; 004752db
    MOV EAX,[0x01d04fcc]                ; 004752dd | DAT_01d04fcc
    IMUL EDX                            ; 004752e2
    SHRD EAX,EDX,0x10                   ; 004752e4
    MOV EDX,dword ptr [ESP + 0x74]      ; 004752e8
    ADD ECX,EAX                         ; 004752ec
    MOV EAX,[0x01d04fd8]                ; 004752ee | DAT_01d04fd8
    IMUL EDX                            ; 004752f3
    SHRD EAX,EDX,0x10                   ; 004752f5
    MOV EDX,EDI                         ; 004752f9
    ADD ECX,EAX                         ; 004752fb
    MOV EAX,[0x01d04fb8]                ; 004752fd | DAT_01d04fb8
    NEG EDX                             ; 00475302
    MOV dword ptr [ESP + 0x38],ECX      ; 00475304
    MOV dword ptr [ESP + 0x6c],EDX      ; 00475308
    IMUL EDX                            ; 0047530c
    SHRD EAX,EDX,0x10                   ; 0047530e
    MOV EDX,dword ptr [ESP + 0x70]      ; 00475312
    MOV ECX,EAX                         ; 00475316
    MOV EAX,[0x01d04fc4]                ; 00475318 | DAT_01d04fc4
    IMUL EDX                            ; 0047531d
    SHRD EAX,EDX,0x10                   ; 0047531f
    MOV EDX,dword ptr [ESP + 0x74]      ; 00475323
    ADD ECX,EAX                         ; 00475327
    MOV EAX,[0x01d04fd0]                ; 00475329 | DAT_01d04fd0
    IMUL EDX                            ; 0047532e
    SHRD EAX,EDX,0x10                   ; 00475330
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475334
    ADD ECX,EAX                         ; 00475338
    MOV EAX,[0x01d04fbc]                ; 0047533a | DAT_01d04fbc
    MOV dword ptr [ESP + 0x3c],ECX      ; 0047533f
    IMUL EDX                            ; 00475343
    SHRD EAX,EDX,0x10                   ; 00475345
    MOV EDX,dword ptr [ESP + 0x70]      ; 00475349
    MOV ECX,EAX                         ; 0047534d
    MOV EAX,[0x01d04fc8]                ; 0047534f | DAT_01d04fc8
    IMUL EDX                            ; 00475354
    SHRD EAX,EDX,0x10                   ; 00475356
    MOV EDX,dword ptr [ESP + 0x74]      ; 0047535a
    ADD ECX,EAX                         ; 0047535e
    MOV EAX,[0x01d04fd4]                ; 00475360 | DAT_01d04fd4
    IMUL EDX                            ; 00475365
    SHRD EAX,EDX,0x10                   ; 00475367
    ADD ECX,EAX                         ; 0047536b
    MOV dword ptr [ESP + 0x40],ECX      ; 0047536d
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00475371
    MOV EAX,[0x01d04fc0]                ; 00475375 | DAT_01d04fc0
    IMUL EDX                            ; 0047537a
    SHRD EAX,EDX,0x10                   ; 0047537c
    MOV EDX,dword ptr [ESP + 0x70]      ; 00475380
    MOV ECX,EAX                         ; 00475384
    MOV EAX,[0x01d04fcc]                ; 00475386 | DAT_01d04fcc
    IMUL EDX                            ; 0047538b
    SHRD EAX,EDX,0x10                   ; 0047538d
    MOV EDX,dword ptr [ESP + 0x74]      ; 00475391
    ADD ECX,EAX                         ; 00475395
    MOV EAX,[0x01d04fd8]                ; 00475397 | DAT_01d04fd8
    IMUL EDX                            ; 0047539c
    SHRD EAX,EDX,0x10                   ; 0047539e
    ADD ECX,EAX                         ; 004753a2
    MOV dword ptr [ESP + 0x44],ECX      ; 004753a4
    XOR ECX,ECX                         ; 004753a8
    MOV dword ptr [ESP + 0x48],ECX      ; 004753aa
    MOV dword ptr [ESP + 0x4c],ECX      ; 004753ae
    MOV dword ptr [ESP + 0x50],ECX      ; 004753b2
    FLD double ptr [0x005d1bd3]         ; 004753b6 | DAT_005d1bd3
    FLD float ptr [EBX + 0x28]          ; 004753bc
    FMUL ST1                            ; 004753bf
    FLD float ptr [EBX + 0x2c]          ; 004753c1
    FMUL ST2                            ; 004753c4
    FLD float ptr [EBX + 0x30]          ; 004753c6
    FMULP ST3                           ; 004753c9
    MOV EDX,0xfffffc19                  ; 004753cb
    MOV EAX,0x3e7                       ; 004753d0
    MOV EDI,EDX                         ; 004753d5
    MOV dword ptr [ESP + 0xa8],EAX      ; 004753d7
    MOV dword ptr [ESP + 0xac],EAX      ; 004753de
    MOV ESI,EAX                         ; 004753e5
    MOV dword ptr [ESP + 0xb0],EAX      ; 004753e7
    XOR ESI,EAX                         ; 004753ee
    MOV ECX,EDX                         ; 004753f0
    FXCH                                ; 004753f2
    FSTP double ptr [ESP + 0x10]        ; 004753f4
    FSTP double ptr [ESP + 0x8]         ; 004753f8
    FSTP double ptr [ESP]               ; 004753fc
    FILD dword ptr [ESP + ESI*0x1 + 0x18] ; 004753ff
        ;   Label: LAB_004753ff
    FDIV double ptr [ESP + 0x10]        ; 00475403
    FILD dword ptr [ESP + ESI*0x1 + 0x1c] ; 00475407
    FDIV double ptr [ESP + 0x8]         ; 0047540b
    FILD dword ptr [ESP + ESI*0x1 + 0x20] ; 0047540f
    FDIV double ptr [ESP]               ; 00475413
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475416
    MOV dword ptr [ESP + 0x190],EAX     ; 0047541a
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00475421
    MOV dword ptr [ESP + 0x194],EAX     ; 00475425
    MOV EAX,dword ptr [ESP + 0x80]      ; 0047542c
    MOV dword ptr [ESP + 0x198],EAX     ; 00475433
    FILD dword ptr [ESP + 0x190]        ; 0047543a
    FILD dword ptr [ESP + 0x194]        ; 00475441
    FILD dword ptr [ESP + 0x198]        ; 00475448
    FXCH ST2                            ; 0047544f
    FADDP ST5,ST0                       ; 00475451
    FADDP ST3,ST0                       ; 00475453
    FADDP                               ; 00475455
    FXCH ST2                            ; 00475457
    CALL crt_math.c_round_FUN_005b7ff0  ; 00475459
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0047545e
    CALL crt_math.c_round_FUN_005b7ff0  ; 00475460
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 00475465
    CALL crt_math.c_round_FUN_005b7ff0  ; 00475467
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0047546c
    FISTP dword ptr [ESP + 0x9c]        ; 0047546e
    FXCH                                ; 00475475
    FISTP dword ptr [ESP + 0xa0]        ; 00475477
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0047547e
    FISTP dword ptr [ESP + 0xa4]        ; 00475485
    CMP EAX,dword ptr [ESP + 0xa8]      ; 0047548c
    JGE 0x0047549c                      ; 00475493
        ;   XREF to: 0047549c (CONDITIONAL_JUMP)  ; LAB_0047549c
    MOV dword ptr [ESP + 0xa8],EAX      ; 00475495
    MOV EAX,dword ptr [ESP + 0xa0]      ; 0047549c
        ;   Label: LAB_0047549c
    CMP EAX,dword ptr [ESP + 0xac]      ; 004754a3
    JGE 0x004754b3                      ; 004754aa
        ;   XREF to: 004754b3 (CONDITIONAL_JUMP)  ; LAB_004754b3
    MOV dword ptr [ESP + 0xac],EAX      ; 004754ac
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004754b3
        ;   Label: LAB_004754b3
    CMP EAX,dword ptr [ESP + 0xb0]      ; 004754ba
    JGE 0x004754ca                      ; 004754c1
        ;   XREF to: 004754ca (CONDITIONAL_JUMP)  ; LAB_004754ca
    MOV dword ptr [ESP + 0xb0],EAX      ; 004754c3
    MOV EAX,dword ptr [ESP + 0x9c]      ; 004754ca
        ;   Label: LAB_004754ca
    CMP EDX,EAX                         ; 004754d1
    JGE 0x004754d7                      ; 004754d3
        ;   XREF to: 004754d7 (CONDITIONAL_JUMP)  ; LAB_004754d7
    MOV EDX,EAX                         ; 004754d5
    MOV EAX,dword ptr [ESP + 0xa0]      ; 004754d7
        ;   Label: LAB_004754d7
    CMP ECX,EAX                         ; 004754de
    JGE 0x004754e4                      ; 004754e0
        ;   XREF to: 004754e4 (CONDITIONAL_JUMP)  ; LAB_004754e4
    MOV ECX,EAX                         ; 004754e2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 004754e4
        ;   Label: LAB_004754e4
    CMP EDI,EAX                         ; 004754eb
    JGE 0x004754f1                      ; 004754ed
        ;   XREF to: 004754f1 (CONDITIONAL_JUMP)  ; LAB_004754f1
    MOV EDI,EAX                         ; 004754ef
    ADD ESI,0xc                         ; 004754f1
        ;   Label: LAB_004754f1
    CMP ESI,0x3c                        ; 004754f4
    JNZ 0x004753ff                      ; 004754f7
        ;   XREF to: 004753ff (CONDITIONAL_JUMP)  ; LAB_004753ff
    MOV EAX,dword ptr [ESP + 0xa8]      ; 004754fd
    INC EDX                             ; 00475504
    MOV dword ptr [EBX + 0x54],EAX      ; 00475505
    INC ECX                             ; 00475508
    MOV dword ptr [EBX + 0x60],EDX      ; 00475509
    INC EDI                             ; 0047550c
    MOV dword ptr [EBX + 0x64],ECX      ; 0047550d
    MOV dword ptr [EBX + 0x68],EDI      ; 00475510
    MOV EAX,dword ptr [ESP + 0xac]      ; 00475513
    MOV dword ptr [EBX + 0x58],EAX      ; 0047551a
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0047551d
    MOV EDX,dword ptr [EBX + 0x54]      ; 00475524
    MOV dword ptr [EBX + 0x5c],EAX      ; 00475527
    TEST EDX,EDX                        ; 0047552a
    JL 0x00475941                       ; 0047552c
        ;   XREF to: 00475941 (CONDITIONAL_JUMP)  ; LAB_00475941
    CMP dword ptr [EBX + 0x58],0x0      ; 00475532
        ;   Label: LAB_00475532
    JL 0x0047594d                       ; 00475536
        ;   XREF to: 0047594d (CONDITIONAL_JUMP)  ; LAB_0047594d
    CMP dword ptr [EBX + 0x5c],0x0      ; 0047553c
        ;   Label: LAB_0047553c
    JL 0x00475959                       ; 00475540
        ;   XREF to: 00475959 (CONDITIONAL_JUMP)  ; LAB_00475959
    MOV EDI,dword ptr [EBX + 0x40]      ; 00475546
        ;   Label: LAB_00475546
    CMP EDI,dword ptr [EBX + 0x60]      ; 00475549
    JG 0x00475554                       ; 0047554c
        ;   XREF to: 00475554 (CONDITIONAL_JUMP)  ; LAB_00475554
    LEA EAX,[EDI + -0x1]                ; 0047554e
    MOV dword ptr [EBX + 0x60],EAX      ; 00475551
    MOV EDX,dword ptr [EBX + 0x44]      ; 00475554
        ;   Label: LAB_00475554
    CMP EDX,dword ptr [EBX + 0x64]      ; 00475557
    JG 0x00475562                       ; 0047555a
        ;   XREF to: 00475562 (CONDITIONAL_JUMP)  ; LAB_00475562
    LEA EAX,[EDX + -0x1]                ; 0047555c
    MOV dword ptr [EBX + 0x64],EAX      ; 0047555f
    MOV ECX,dword ptr [EBX + 0x48]      ; 00475562
        ;   Label: LAB_00475562
    CMP ECX,dword ptr [EBX + 0x68]      ; 00475565
    JG 0x00475570                       ; 00475568
        ;   XREF to: 00475570 (CONDITIONAL_JUMP)  ; LAB_00475570
    LEA EAX,[ECX + -0x1]                ; 0047556a
    MOV dword ptr [EBX + 0x68],EAX      ; 0047556d
    PUSH 0x1c21e68                      ; 00475570
        ;   Label: LAB_00475570
    MOV EDI,dword ptr [0x0060b27c]      ; 00475575 | DAT_0060b27c
    XOR ESI,ESI                         ; 0047557b
    PUSH EDI                            ; 0047557d | DAT_01ba5c50
    MOV dword ptr [0x01e61b58],ESI      ; 0047557e | DAT_01e61b58
    CALL engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280 ; 00475584
        ;   XREF to: 0046b280 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_copyAndTransform3DPoint_FUN_0046b280(CDemonRenderer * this_ptr, CVector3i * input_point)
    ADD ESP,0x8                         ; 00475589
    PUSH 0xff                           ; 0047558c
    PUSH 0xff                           ; 00475591
    PUSH 0xff                           ; 00475596
    MOV EAX,[0x0060b27c]                ; 0047559b | DAT_0060b27c
    PUSH EAX                            ; 004755a0 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0 ; 004755a1
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRGBAColor_FUN_0046b7f0(CDemonRenderer * this_ptr, int red_component, int green_component, int blue_component)
    MOV EDX,dword ptr [EBX]             ; 004755a6
    ADD ESP,0x10                        ; 004755a8
    CMP EDX,0x4                         ; 004755ab
    JLE 0x00475965                      ; 004755ae
        ;   XREF to: 00475965 (CONDITIONAL_JUMP)  ; LAB_00475965
    MOV dword ptr [EBX],0x1             ; 004755b4
        ;   Label: LAB_004755b4
    MOV EAX,[0x01d04fd0]                ; 004755ba | DAT_01d04fd0
        ;   Label: LAB_004755ba
    CDQ                                 ; 004755bf
    XOR EAX,EDX                         ; 004755c0
    SUB EAX,EDX                         ; 004755c2
    MOV ECX,EAX                         ; 004755c4
    MOV dword ptr [ESP + 0xb4],EAX      ; 004755c6
    MOV EAX,[0x01d04fd4]                ; 004755cd | DAT_01d04fd4
    CDQ                                 ; 004755d2
    XOR EAX,EDX                         ; 004755d3
    SUB EAX,EDX                         ; 004755d5
    MOV ESI,EAX                         ; 004755d7
    MOV EDI,EAX                         ; 004755d9
    MOV EAX,[0x01d04fd8]                ; 004755db | DAT_01d04fd8
    CDQ                                 ; 004755e0
    XOR EAX,EDX                         ; 004755e1
    SUB EAX,EDX                         ; 004755e3
    MOV EDX,EAX                         ; 004755e5
    CMP ECX,ESI                         ; 004755e7
    JL 0x00475972                       ; 004755e9
        ;   XREF to: 00475972 (CONDITIONAL_JUMP)  ; LAB_00475972
    CMP ECX,EAX                         ; 004755ef
    JL 0x00475972                       ; 004755f1
        ;   XREF to: 00475972 (CONDITIONAL_JUMP)  ; LAB_00475972
    MOV EDI,dword ptr [ESP + 0x78]      ; 004755f7
    CMP EDI,dword ptr [EBX + 0x60]      ; 004755fb
    JG 0x00475788                       ; 004755fe
        ;   XREF to: 00475788 (CONDITIONAL_JUMP)  ; LAB_00475788
    MOV EAX,dword ptr [ESP + 0x80]      ; 00475604
    DEC EAX                             ; 0047560b
    MOV dword ptr [ESP + 0x138],EAX     ; 0047560c
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00475613
    DEC EAX                             ; 00475617
    MOV dword ptr [ESP + 0x13c],EAX     ; 00475618
    MOV EAX,EDI                         ; 0047561f
    NEG EAX                             ; 00475621
    ADD EAX,EDI                         ; 00475623
    MOV dword ptr [ESP + 0x158],EAX     ; 00475625
    MOV EAX,dword ptr [ESP + 0x7c]      ; 0047562c
        ;   Label: LAB_0047562c
    MOV ECX,dword ptr [EBX + 0x64]      ; 00475630
    MOV dword ptr [ESP + 0x18c],EAX     ; 00475633
    CMP EAX,ECX                         ; 0047563a
    JG 0x004756cb                       ; 0047563c
        ;   XREF to: 004756cb (CONDITIONAL_JUMP)  ; LAB_004756cb
    MOV EAX,dword ptr [ESP + 0x158]     ; 00475642
    MOV dword ptr [ESP + 0xb8],EAX      ; 00475649
    MOV dword ptr [ESP + 0xbc],EAX      ; 00475650
    MOV ESI,dword ptr [ESP + 0x80]      ; 00475657
        ;   Label: LAB_00475657
    CMP ESI,dword ptr [EBX + 0x68]      ; 0047565e
    JG 0x00475686                       ; 00475661
        ;   XREF to: 00475686 (CONDITIONAL_JUMP)  ; LAB_00475686
    MOV ECX,dword ptr [ESP + 0xb8]      ; 00475663
        ;   Label: LAB_00475663
    PUSH ECX                            ; 0047566a
    PUSH ESI                            ; 0047566b
    MOV EAX,dword ptr [ESP + 0x194]     ; 0047566c
    PUSH EAX                            ; 00475673
    PUSH EDI                            ; 00475674
    PUSH EBX                            ; 00475675
    INC ESI                             ; 00475676
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475677
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 0047567c
    ADD ESP,0x14                        ; 0047567f
    CMP ESI,EDX                         ; 00475682
    JLE 0x00475663                      ; 00475684
        ;   XREF to: 00475663 (CONDITIONAL_JUMP)  ; LAB_00475663
    MOV ESI,dword ptr [ESP + 0x138]     ; 00475686
        ;   Label: LAB_00475686
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0047568d
    JL 0x004756b5                       ; 00475690
        ;   XREF to: 004756b5 (CONDITIONAL_JUMP)  ; LAB_004756b5
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00475692
        ;   Label: LAB_00475692
    PUSH EAX                            ; 00475699
    PUSH ESI                            ; 0047569a
    MOV EDX,dword ptr [ESP + 0x194]     ; 0047569b
    PUSH EDX                            ; 004756a2
    PUSH EDI                            ; 004756a3
    PUSH EBX                            ; 004756a4
    DEC ESI                             ; 004756a5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 004756a6
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 004756ab
    ADD ESP,0x14                        ; 004756ae
    CMP ESI,ECX                         ; 004756b1
    JGE 0x00475692                      ; 004756b3
        ;   XREF to: 00475692 (CONDITIONAL_JUMP)  ; LAB_00475692
    MOV ESI,dword ptr [ESP + 0x18c]     ; 004756b5
        ;   Label: LAB_004756b5
    INC ESI                             ; 004756bc
    MOV EDX,dword ptr [EBX + 0x64]      ; 004756bd
    MOV dword ptr [ESP + 0x18c],ESI     ; 004756c0
    CMP ESI,EDX                         ; 004756c7
    JLE 0x00475657                      ; 004756c9
        ;   XREF to: 00475657 (CONDITIONAL_JUMP)  ; LAB_00475657
    MOV EAX,dword ptr [ESP + 0x13c]     ; 004756cb
        ;   Label: LAB_004756cb
    MOV ECX,dword ptr [EBX + 0x58]      ; 004756d2
    MOV dword ptr [ESP + 0x188],EAX     ; 004756d5
    CMP EAX,ECX                         ; 004756dc
    JL 0x0047576d                       ; 004756de
        ;   XREF to: 0047576d (CONDITIONAL_JUMP)  ; LAB_0047576d
    MOV EAX,dword ptr [ESP + 0x158]     ; 004756e4
    MOV dword ptr [ESP + 0xc0],EAX      ; 004756eb
    MOV dword ptr [ESP + 0xc4],EAX      ; 004756f2
    MOV ESI,dword ptr [ESP + 0x80]      ; 004756f9
        ;   Label: LAB_004756f9
    CMP ESI,dword ptr [EBX + 0x68]      ; 00475700
    JG 0x00475728                       ; 00475703
        ;   XREF to: 00475728 (CONDITIONAL_JUMP)  ; LAB_00475728
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00475705
        ;   Label: LAB_00475705
    PUSH EAX                            ; 0047570c
    PUSH ESI                            ; 0047570d
    MOV EDX,dword ptr [ESP + 0x190]     ; 0047570e
    PUSH EDX                            ; 00475715
    PUSH EDI                            ; 00475716
    PUSH EBX                            ; 00475717
    INC ESI                             ; 00475718
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475719
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 0047571e
    ADD ESP,0x14                        ; 00475721
    CMP ESI,ECX                         ; 00475724
    JLE 0x00475705                      ; 00475726
        ;   XREF to: 00475705 (CONDITIONAL_JUMP)  ; LAB_00475705
    MOV ESI,dword ptr [ESP + 0x138]     ; 00475728
        ;   Label: LAB_00475728
    CMP ESI,dword ptr [EBX + 0x5c]      ; 0047572f
    JL 0x00475757                       ; 00475732
        ;   XREF to: 00475757 (CONDITIONAL_JUMP)  ; LAB_00475757
    MOV ECX,dword ptr [ESP + 0xc4]      ; 00475734
        ;   Label: LAB_00475734
    PUSH ECX                            ; 0047573b
    PUSH ESI                            ; 0047573c
    MOV EAX,dword ptr [ESP + 0x190]     ; 0047573d
    PUSH EAX                            ; 00475744
    PUSH EDI                            ; 00475745
    PUSH EBX                            ; 00475746
    DEC ESI                             ; 00475747
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475748
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 0047574d
    ADD ESP,0x14                        ; 00475750
    CMP ESI,EDX                         ; 00475753
    JGE 0x00475734                      ; 00475755
        ;   XREF to: 00475734 (CONDITIONAL_JUMP)  ; LAB_00475734
    MOV ESI,dword ptr [ESP + 0x188]     ; 00475757
        ;   Label: LAB_00475757
    DEC ESI                             ; 0047575e
    MOV EDX,dword ptr [EBX + 0x58]      ; 0047575f
    MOV dword ptr [ESP + 0x188],ESI     ; 00475762
    CMP ESI,EDX                         ; 00475769
    JGE 0x004756f9                      ; 0047576b
        ;   XREF to: 004756f9 (CONDITIONAL_JUMP)  ; LAB_004756f9
    MOV ECX,dword ptr [ESP + 0x158]     ; 0047576d
        ;   Label: LAB_0047576d
    INC EDI                             ; 00475774
    INC ECX                             ; 00475775
    MOV ESI,dword ptr [EBX + 0x60]      ; 00475776
    MOV dword ptr [ESP + 0x158],ECX     ; 00475779
    CMP EDI,ESI                         ; 00475780
    JLE 0x0047562c                      ; 00475782
        ;   XREF to: 0047562c (CONDITIONAL_JUMP)  ; LAB_0047562c
    MOV EDI,dword ptr [ESP + 0x78]      ; 00475788
        ;   Label: LAB_00475788
    MOV EAX,dword ptr [EBX + 0x54]      ; 0047578c
    DEC EDI                             ; 0047578f
    CMP EDI,EAX                         ; 00475790
    JL 0x00475920                       ; 00475792
        ;   XREF to: 00475920 (CONDITIONAL_JUMP)  ; LAB_00475920
    MOV EAX,dword ptr [ESP + 0x80]      ; 00475798
    DEC EAX                             ; 0047579f
    MOV dword ptr [ESP + 0x140],EAX     ; 004757a0
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004757a7
    DEC EAX                             ; 004757ab
    MOV dword ptr [ESP + 0x144],EAX     ; 004757ac
    MOV EAX,EDI                         ; 004757b3
    MOV EDX,dword ptr [ESP + 0x78]      ; 004757b5
    NEG EAX                             ; 004757b9
    ADD EAX,EDX                         ; 004757bb
    MOV dword ptr [ESP + 0x15c],EAX     ; 004757bd
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004757c4
        ;   Label: LAB_004757c4
    MOV ECX,dword ptr [EBX + 0x64]      ; 004757c8
    MOV dword ptr [ESP + 0x184],EAX     ; 004757cb
    CMP EAX,ECX                         ; 004757d2
    JG 0x00475863                       ; 004757d4
        ;   XREF to: 00475863 (CONDITIONAL_JUMP)  ; LAB_00475863
    MOV EAX,dword ptr [ESP + 0x15c]     ; 004757da
    MOV dword ptr [ESP + 0xc8],EAX      ; 004757e1
    MOV dword ptr [ESP + 0xcc],EAX      ; 004757e8
    MOV ESI,dword ptr [ESP + 0x80]      ; 004757ef
        ;   Label: LAB_004757ef
    CMP ESI,dword ptr [EBX + 0x68]      ; 004757f6
    JG 0x0047581e                       ; 004757f9
        ;   XREF to: 0047581e (CONDITIONAL_JUMP)  ; LAB_0047581e
    MOV ECX,dword ptr [ESP + 0xc8]      ; 004757fb
        ;   Label: LAB_004757fb
    PUSH ECX                            ; 00475802
    PUSH ESI                            ; 00475803
    MOV EAX,dword ptr [ESP + 0x18c]     ; 00475804
    PUSH EAX                            ; 0047580b
    PUSH EDI                            ; 0047580c
    PUSH EBX                            ; 0047580d
    INC ESI                             ; 0047580e
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 0047580f
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00475814
    ADD ESP,0x14                        ; 00475817
    CMP ESI,EDX                         ; 0047581a
    JLE 0x004757fb                      ; 0047581c
        ;   XREF to: 004757fb (CONDITIONAL_JUMP)  ; LAB_004757fb
    MOV ESI,dword ptr [ESP + 0x140]     ; 0047581e
        ;   Label: LAB_0047581e
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00475825
    JL 0x0047584d                       ; 00475828
        ;   XREF to: 0047584d (CONDITIONAL_JUMP)  ; LAB_0047584d
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0047582a
        ;   Label: LAB_0047582a
    PUSH EAX                            ; 00475831
    PUSH ESI                            ; 00475832
    MOV EDX,dword ptr [ESP + 0x18c]     ; 00475833
    PUSH EDX                            ; 0047583a
    PUSH EDI                            ; 0047583b
    PUSH EBX                            ; 0047583c
    DEC ESI                             ; 0047583d
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 0047583e
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00475843
    ADD ESP,0x14                        ; 00475846
    CMP ESI,ECX                         ; 00475849
    JGE 0x0047582a                      ; 0047584b
        ;   XREF to: 0047582a (CONDITIONAL_JUMP)  ; LAB_0047582a
    MOV ESI,dword ptr [ESP + 0x184]     ; 0047584d
        ;   Label: LAB_0047584d
    INC ESI                             ; 00475854
    MOV EDX,dword ptr [EBX + 0x64]      ; 00475855
    MOV dword ptr [ESP + 0x184],ESI     ; 00475858
    CMP ESI,EDX                         ; 0047585f
    JLE 0x004757ef                      ; 00475861
        ;   XREF to: 004757ef (CONDITIONAL_JUMP)  ; LAB_004757ef
    MOV EAX,dword ptr [ESP + 0x144]     ; 00475863
        ;   Label: LAB_00475863
    MOV ECX,dword ptr [EBX + 0x58]      ; 0047586a
    MOV dword ptr [ESP + 0x180],EAX     ; 0047586d
    CMP EAX,ECX                         ; 00475874
    JL 0x00475905                       ; 00475876
        ;   XREF to: 00475905 (CONDITIONAL_JUMP)  ; LAB_00475905
    MOV EAX,dword ptr [ESP + 0x15c]     ; 0047587c
    MOV dword ptr [ESP + 0xd0],EAX      ; 00475883
    MOV dword ptr [ESP + 0xd4],EAX      ; 0047588a
    MOV ESI,dword ptr [ESP + 0x80]      ; 00475891
        ;   Label: LAB_00475891
    CMP ESI,dword ptr [EBX + 0x68]      ; 00475898
    JG 0x004758c0                       ; 0047589b
        ;   XREF to: 004758c0 (CONDITIONAL_JUMP)  ; LAB_004758c0
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0047589d
        ;   Label: LAB_0047589d
    PUSH EAX                            ; 004758a4
    PUSH ESI                            ; 004758a5
    MOV EDX,dword ptr [ESP + 0x188]     ; 004758a6
    PUSH EDX                            ; 004758ad
    PUSH EDI                            ; 004758ae
    PUSH EBX                            ; 004758af
    INC ESI                             ; 004758b0
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 004758b1
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 004758b6
    ADD ESP,0x14                        ; 004758b9
    CMP ESI,ECX                         ; 004758bc
    JLE 0x0047589d                      ; 004758be
        ;   XREF to: 0047589d (CONDITIONAL_JUMP)  ; LAB_0047589d
    MOV ESI,dword ptr [ESP + 0x140]     ; 004758c0
        ;   Label: LAB_004758c0
    CMP ESI,dword ptr [EBX + 0x5c]      ; 004758c7
    JL 0x004758ef                       ; 004758ca
        ;   XREF to: 004758ef (CONDITIONAL_JUMP)  ; LAB_004758ef
    MOV ECX,dword ptr [ESP + 0xd4]      ; 004758cc
        ;   Label: LAB_004758cc
    PUSH ECX                            ; 004758d3
    PUSH ESI                            ; 004758d4
    MOV EAX,dword ptr [ESP + 0x188]     ; 004758d5
    PUSH EAX                            ; 004758dc
    PUSH EDI                            ; 004758dd
    PUSH EBX                            ; 004758de
    DEC ESI                             ; 004758df
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 004758e0
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 004758e5
    ADD ESP,0x14                        ; 004758e8
    CMP ESI,EDX                         ; 004758eb
    JGE 0x004758cc                      ; 004758ed
        ;   XREF to: 004758cc (CONDITIONAL_JUMP)  ; LAB_004758cc
    MOV ESI,dword ptr [ESP + 0x180]     ; 004758ef
        ;   Label: LAB_004758ef
    DEC ESI                             ; 004758f6
    MOV EDX,dword ptr [EBX + 0x58]      ; 004758f7
    MOV dword ptr [ESP + 0x180],ESI     ; 004758fa
    CMP ESI,EDX                         ; 00475901
    JGE 0x00475891                      ; 00475903
        ;   XREF to: 00475891 (CONDITIONAL_JUMP)  ; LAB_00475891
    MOV ECX,dword ptr [ESP + 0x15c]     ; 00475905
        ;   Label: LAB_00475905
    DEC EDI                             ; 0047590c
    INC ECX                             ; 0047590d
    MOV ESI,dword ptr [EBX + 0x54]      ; 0047590e
    MOV dword ptr [ESP + 0x15c],ECX     ; 00475911
    CMP EDI,ESI                         ; 00475918
    JGE 0x004757c4                      ; 0047591a
        ;   XREF to: 004757c4 (CONDITIONAL_JUMP)  ; LAB_004757c4
    MOV dword ptr [0x01bd3c60],0x1      ; 00475920 | DAT_01bd3c60
        ;   Label: LAB_00475920
    MOV ESP,EBP                         ; 0047592a
    POP EBP                             ; 0047592c
    POP EDI                             ; 0047592d
    POP ESI                             ; 0047592e
    POP EBX                             ; 0047592f
    RET                                 ; 00475930
    PUSH EBX                            ; 00475931
        ;   Label: LAB_00475931
    CALL core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280 ; 00475932
        ;   XREF to: 00476280 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderPVSCubes_FUN_00476280(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 00475937
    MOV ESP,EBP                         ; 0047593a
    POP EBP                             ; 0047593c
    POP EDI                             ; 0047593d
    POP ESI                             ; 0047593e
    POP EBX                             ; 0047593f
    RET                                 ; 00475940
    MOV dword ptr [EBX + 0x54],0x0      ; 00475941
        ;   Label: LAB_00475941
    JMP 0x00475532                      ; 00475948
        ;   XREF to: 00475532 (UNCONDITIONAL_JUMP)  ; LAB_00475532
    MOV dword ptr [EBX + 0x58],0x0      ; 0047594d
        ;   Label: LAB_0047594d
    JMP 0x0047553c                      ; 00475954
        ;   XREF to: 0047553c (UNCONDITIONAL_JUMP)  ; LAB_0047553c
    MOV dword ptr [EBX + 0x5c],0x0      ; 00475959
        ;   Label: LAB_00475959
    JMP 0x00475546                      ; 00475960
        ;   XREF to: 00475546 (UNCONDITIONAL_JUMP)  ; LAB_00475546
    TEST EDX,EDX                        ; 00475965
        ;   Label: LAB_00475965
    JGE 0x004755ba                      ; 00475967
        ;   XREF to: 004755ba (CONDITIONAL_JUMP)  ; LAB_004755ba
    JMP 0x004755b4                      ; 0047596d
        ;   XREF to: 004755b4 (UNCONDITIONAL_JUMP)  ; LAB_004755b4
    CMP EDI,dword ptr [ESP + 0xb4]      ; 00475972
        ;   Label: LAB_00475972
    JL 0x00475cbb                       ; 00475979
        ;   XREF to: 00475cbb (CONDITIONAL_JUMP)  ; LAB_00475cbb
    CMP EDI,EDX                         ; 0047597f
    JL 0x00475cbb                       ; 00475981
        ;   XREF to: 00475cbb (CONDITIONAL_JUMP)  ; LAB_00475cbb
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00475987
    CMP EDI,dword ptr [EBX + 0x64]      ; 0047598b
    JG 0x00475b18                       ; 0047598e
        ;   XREF to: 00475b18 (CONDITIONAL_JUMP)  ; LAB_00475b18
    MOV EAX,dword ptr [ESP + 0x80]      ; 00475994
    DEC EAX                             ; 0047599b
    MOV dword ptr [ESP + 0x128],EAX     ; 0047599c
    MOV EAX,dword ptr [ESP + 0x78]      ; 004759a3
    DEC EAX                             ; 004759a7
    MOV dword ptr [ESP + 0x12c],EAX     ; 004759a8
    MOV EAX,EDI                         ; 004759af
    NEG EAX                             ; 004759b1
    ADD EAX,EDI                         ; 004759b3
    MOV dword ptr [ESP + 0x150],EAX     ; 004759b5
    MOV EAX,dword ptr [ESP + 0x78]      ; 004759bc
        ;   Label: LAB_004759bc
    MOV ECX,dword ptr [EBX + 0x60]      ; 004759c0
    MOV dword ptr [ESP + 0x16c],EAX     ; 004759c3
    CMP EAX,ECX                         ; 004759ca
    JG 0x00475a5b                       ; 004759cc
        ;   XREF to: 00475a5b (CONDITIONAL_JUMP)  ; LAB_00475a5b
    MOV EAX,dword ptr [ESP + 0x150]     ; 004759d2
    MOV dword ptr [ESP + 0xd8],EAX      ; 004759d9
    MOV dword ptr [ESP + 0xdc],EAX      ; 004759e0
    MOV ESI,dword ptr [ESP + 0x80]      ; 004759e7
        ;   Label: LAB_004759e7
    CMP ESI,dword ptr [EBX + 0x68]      ; 004759ee
    JG 0x00475a16                       ; 004759f1
        ;   XREF to: 00475a16 (CONDITIONAL_JUMP)  ; LAB_00475a16
    MOV ECX,dword ptr [ESP + 0xd8]      ; 004759f3
        ;   Label: LAB_004759f3
    PUSH ECX                            ; 004759fa
    PUSH ESI                            ; 004759fb
    PUSH EDI                            ; 004759fc
    MOV EAX,dword ptr [ESP + 0x178]     ; 004759fd
    PUSH EAX                            ; 00475a04
    PUSH EBX                            ; 00475a05
    INC ESI                             ; 00475a06
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475a07
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00475a0c
    ADD ESP,0x14                        ; 00475a0f
    CMP ESI,EDX                         ; 00475a12
    JLE 0x004759f3                      ; 00475a14
        ;   XREF to: 004759f3 (CONDITIONAL_JUMP)  ; LAB_004759f3
    MOV ESI,dword ptr [ESP + 0x128]     ; 00475a16
        ;   Label: LAB_00475a16
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00475a1d
    JL 0x00475a45                       ; 00475a20
        ;   XREF to: 00475a45 (CONDITIONAL_JUMP)  ; LAB_00475a45
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00475a22
        ;   Label: LAB_00475a22
    PUSH EAX                            ; 00475a29
    PUSH ESI                            ; 00475a2a
    PUSH EDI                            ; 00475a2b
    MOV EDX,dword ptr [ESP + 0x178]     ; 00475a2c
    PUSH EDX                            ; 00475a33
    PUSH EBX                            ; 00475a34
    DEC ESI                             ; 00475a35
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475a36
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00475a3b
    ADD ESP,0x14                        ; 00475a3e
    CMP ESI,ECX                         ; 00475a41
    JGE 0x00475a22                      ; 00475a43
        ;   XREF to: 00475a22 (CONDITIONAL_JUMP)  ; LAB_00475a22
    MOV ESI,dword ptr [ESP + 0x16c]     ; 00475a45
        ;   Label: LAB_00475a45
    INC ESI                             ; 00475a4c
    MOV EDX,dword ptr [EBX + 0x60]      ; 00475a4d
    MOV dword ptr [ESP + 0x16c],ESI     ; 00475a50
    CMP ESI,EDX                         ; 00475a57
    JLE 0x004759e7                      ; 00475a59
        ;   XREF to: 004759e7 (CONDITIONAL_JUMP)  ; LAB_004759e7
    MOV EAX,dword ptr [ESP + 0x12c]     ; 00475a5b
        ;   Label: LAB_00475a5b
    MOV ECX,dword ptr [EBX + 0x54]      ; 00475a62
    MOV dword ptr [ESP + 0x168],EAX     ; 00475a65
    CMP EAX,ECX                         ; 00475a6c
    JL 0x00475afd                       ; 00475a6e
        ;   XREF to: 00475afd (CONDITIONAL_JUMP)  ; LAB_00475afd
    MOV EAX,dword ptr [ESP + 0x150]     ; 00475a74
    MOV dword ptr [ESP + 0xe0],EAX      ; 00475a7b
    MOV dword ptr [ESP + 0xe4],EAX      ; 00475a82
    MOV ESI,dword ptr [ESP + 0x80]      ; 00475a89
        ;   Label: LAB_00475a89
    CMP ESI,dword ptr [EBX + 0x68]      ; 00475a90
    JG 0x00475ab8                       ; 00475a93
        ;   XREF to: 00475ab8 (CONDITIONAL_JUMP)  ; LAB_00475ab8
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00475a95
        ;   Label: LAB_00475a95
    PUSH EAX                            ; 00475a9c
    PUSH ESI                            ; 00475a9d
    PUSH EDI                            ; 00475a9e
    MOV EDX,dword ptr [ESP + 0x174]     ; 00475a9f
    PUSH EDX                            ; 00475aa6
    PUSH EBX                            ; 00475aa7
    INC ESI                             ; 00475aa8
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475aa9
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00475aae
    ADD ESP,0x14                        ; 00475ab1
    CMP ESI,ECX                         ; 00475ab4
    JLE 0x00475a95                      ; 00475ab6
        ;   XREF to: 00475a95 (CONDITIONAL_JUMP)  ; LAB_00475a95
    MOV ESI,dword ptr [ESP + 0x128]     ; 00475ab8
        ;   Label: LAB_00475ab8
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00475abf
    JL 0x00475ae7                       ; 00475ac2
        ;   XREF to: 00475ae7 (CONDITIONAL_JUMP)  ; LAB_00475ae7
    MOV ECX,dword ptr [ESP + 0xe4]      ; 00475ac4
        ;   Label: LAB_00475ac4
    PUSH ECX                            ; 00475acb
    PUSH ESI                            ; 00475acc
    PUSH EDI                            ; 00475acd
    MOV EAX,dword ptr [ESP + 0x174]     ; 00475ace
    PUSH EAX                            ; 00475ad5
    PUSH EBX                            ; 00475ad6
    DEC ESI                             ; 00475ad7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475ad8
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00475add
    ADD ESP,0x14                        ; 00475ae0
    CMP ESI,EDX                         ; 00475ae3
    JGE 0x00475ac4                      ; 00475ae5
        ;   XREF to: 00475ac4 (CONDITIONAL_JUMP)  ; LAB_00475ac4
    MOV ESI,dword ptr [ESP + 0x168]     ; 00475ae7
        ;   Label: LAB_00475ae7
    DEC ESI                             ; 00475aee
    MOV EDX,dword ptr [EBX + 0x54]      ; 00475aef
    MOV dword ptr [ESP + 0x168],ESI     ; 00475af2
    CMP ESI,EDX                         ; 00475af9
    JGE 0x00475a89                      ; 00475afb
        ;   XREF to: 00475a89 (CONDITIONAL_JUMP)  ; LAB_00475a89
    MOV ECX,dword ptr [ESP + 0x150]     ; 00475afd
        ;   Label: LAB_00475afd
    INC EDI                             ; 00475b04
    INC ECX                             ; 00475b05
    MOV ESI,dword ptr [EBX + 0x64]      ; 00475b06
    MOV dword ptr [ESP + 0x150],ECX     ; 00475b09
    CMP EDI,ESI                         ; 00475b10
    JLE 0x004759bc                      ; 00475b12
        ;   XREF to: 004759bc (CONDITIONAL_JUMP)  ; LAB_004759bc
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00475b18
        ;   Label: LAB_00475b18
    MOV EAX,dword ptr [EBX + 0x58]      ; 00475b1c
    DEC EDI                             ; 00475b1f
    CMP EDI,EAX                         ; 00475b20
    JL 0x00475920                       ; 00475b22
        ;   XREF to: 00475920 (CONDITIONAL_JUMP)  ; LAB_00475920
    MOV EAX,dword ptr [ESP + 0x80]      ; 00475b28
    DEC EAX                             ; 00475b2f
    MOV dword ptr [ESP + 0x130],EAX     ; 00475b30
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475b37
    DEC EAX                             ; 00475b3b
    MOV dword ptr [ESP + 0x134],EAX     ; 00475b3c
    MOV EAX,EDI                         ; 00475b43
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00475b45
    NEG EAX                             ; 00475b49
    ADD EAX,EDX                         ; 00475b4b
    MOV dword ptr [ESP + 0x154],EAX     ; 00475b4d
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475b54
        ;   Label: LAB_00475b54
    MOV ECX,dword ptr [EBX + 0x60]      ; 00475b58
    MOV dword ptr [ESP + 0x164],EAX     ; 00475b5b
    CMP EAX,ECX                         ; 00475b62
    JLE 0x00475ca4                      ; 00475b64
        ;   XREF to: 00475ca4 (CONDITIONAL_JUMP)  ; LAB_00475ca4
    MOV EAX,dword ptr [ESP + 0x134]     ; 00475b6a
        ;   Label: LAB_00475b6a
    MOV ECX,dword ptr [EBX + 0x54]      ; 00475b71
    MOV dword ptr [ESP + 0x160],EAX     ; 00475b74
    CMP EAX,ECX                         ; 00475b7b
    JL 0x00475c0c                       ; 00475b7d
        ;   XREF to: 00475c0c (CONDITIONAL_JUMP)  ; LAB_00475c0c
    MOV EAX,dword ptr [ESP + 0x154]     ; 00475b83
    MOV dword ptr [ESP + 0xf0],EAX      ; 00475b8a
    MOV dword ptr [ESP + 0xf4],EAX      ; 00475b91
    MOV ESI,dword ptr [ESP + 0x80]      ; 00475b98
        ;   Label: LAB_00475b98
    CMP ESI,dword ptr [EBX + 0x68]      ; 00475b9f
    JG 0x00475bc7                       ; 00475ba2
        ;   XREF to: 00475bc7 (CONDITIONAL_JUMP)  ; LAB_00475bc7
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00475ba4
        ;   Label: LAB_00475ba4
    PUSH EAX                            ; 00475bab
    PUSH ESI                            ; 00475bac
    PUSH EDI                            ; 00475bad
    MOV EDX,dword ptr [ESP + 0x16c]     ; 00475bae
    PUSH EDX                            ; 00475bb5
    PUSH EBX                            ; 00475bb6
    INC ESI                             ; 00475bb7
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475bb8
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x68]      ; 00475bbd
    ADD ESP,0x14                        ; 00475bc0
    CMP ESI,ECX                         ; 00475bc3
    JLE 0x00475ba4                      ; 00475bc5
        ;   XREF to: 00475ba4 (CONDITIONAL_JUMP)  ; LAB_00475ba4
    MOV ESI,dword ptr [ESP + 0x130]     ; 00475bc7
        ;   Label: LAB_00475bc7
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00475bce
    JL 0x00475bf6                       ; 00475bd1
        ;   XREF to: 00475bf6 (CONDITIONAL_JUMP)  ; LAB_00475bf6
    MOV ECX,dword ptr [ESP + 0xf4]      ; 00475bd3
        ;   Label: LAB_00475bd3
    PUSH ECX                            ; 00475bda
    PUSH ESI                            ; 00475bdb
    PUSH EDI                            ; 00475bdc
    MOV EAX,dword ptr [ESP + 0x16c]     ; 00475bdd
    PUSH EAX                            ; 00475be4
    PUSH EBX                            ; 00475be5
    DEC ESI                             ; 00475be6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475be7
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x5c]      ; 00475bec
    ADD ESP,0x14                        ; 00475bef
    CMP ESI,EDX                         ; 00475bf2
    JGE 0x00475bd3                      ; 00475bf4
        ;   XREF to: 00475bd3 (CONDITIONAL_JUMP)  ; LAB_00475bd3
    MOV ESI,dword ptr [ESP + 0x160]     ; 00475bf6
        ;   Label: LAB_00475bf6
    DEC ESI                             ; 00475bfd
    MOV EDX,dword ptr [EBX + 0x54]      ; 00475bfe
    MOV dword ptr [ESP + 0x160],ESI     ; 00475c01
    CMP ESI,EDX                         ; 00475c08
    JGE 0x00475b98                      ; 00475c0a
        ;   XREF to: 00475b98 (CONDITIONAL_JUMP)  ; LAB_00475b98
    MOV ECX,dword ptr [ESP + 0x154]     ; 00475c0c
        ;   Label: LAB_00475c0c
    DEC EDI                             ; 00475c13
    INC ECX                             ; 00475c14
    MOV ESI,dword ptr [EBX + 0x58]      ; 00475c15
    MOV dword ptr [ESP + 0x154],ECX     ; 00475c18
    CMP EDI,ESI                         ; 00475c1f
    JL 0x00475920                       ; 00475c21
        ;   XREF to: 00475920 (CONDITIONAL_JUMP)  ; LAB_00475920
    JMP 0x00475b54                      ; 00475c27
        ;   XREF to: 00475b54 (UNCONDITIONAL_JUMP)  ; LAB_00475b54
    MOV ESI,dword ptr [ESP + 0x164]     ; 00475c2c
        ;   Label: LAB_00475c2c
    INC ESI                             ; 00475c33
    MOV EDX,dword ptr [EBX + 0x60]      ; 00475c34
    MOV dword ptr [ESP + 0x164],ESI     ; 00475c37
    CMP ESI,EDX                         ; 00475c3e
    JG 0x00475b6a                       ; 00475c40
        ;   XREF to: 00475b6a (CONDITIONAL_JUMP)  ; LAB_00475b6a
    MOV ESI,dword ptr [ESP + 0x80]      ; 00475c46
        ;   Label: LAB_00475c46
    CMP ESI,dword ptr [EBX + 0x68]      ; 00475c4d
    JG 0x00475c75                       ; 00475c50
        ;   XREF to: 00475c75 (CONDITIONAL_JUMP)  ; LAB_00475c75
    MOV ECX,dword ptr [ESP + 0xe8]      ; 00475c52
        ;   Label: LAB_00475c52
    PUSH ECX                            ; 00475c59
    PUSH ESI                            ; 00475c5a
    PUSH EDI                            ; 00475c5b
    MOV EAX,dword ptr [ESP + 0x170]     ; 00475c5c
    PUSH EAX                            ; 00475c63
    PUSH EBX                            ; 00475c64
    INC ESI                             ; 00475c65
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475c66
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x68]      ; 00475c6b
    ADD ESP,0x14                        ; 00475c6e
    CMP ESI,EDX                         ; 00475c71
    JLE 0x00475c52                      ; 00475c73
        ;   XREF to: 00475c52 (CONDITIONAL_JUMP)  ; LAB_00475c52
    MOV ESI,dword ptr [ESP + 0x130]     ; 00475c75
        ;   Label: LAB_00475c75
    CMP ESI,dword ptr [EBX + 0x5c]      ; 00475c7c
    JL 0x00475c2c                       ; 00475c7f
        ;   XREF to: 00475c2c (CONDITIONAL_JUMP)  ; LAB_00475c2c
        ;   Label: LAB_00475c7f
    MOV EAX,dword ptr [ESP + 0xec]      ; 00475c81
    PUSH EAX                            ; 00475c88
    PUSH ESI                            ; 00475c89
    PUSH EDI                            ; 00475c8a
    MOV EDX,dword ptr [ESP + 0x170]     ; 00475c8b
    PUSH EDX                            ; 00475c92
    PUSH EBX                            ; 00475c93
    DEC ESI                             ; 00475c94
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475c95
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00475c9a
    ADD ESP,0x14                        ; 00475c9d
    CMP ESI,ECX                         ; 00475ca0
    JMP 0x00475c7f                      ; 00475ca2
        ;   XREF to: 00475c7f (UNCONDITIONAL_JUMP)  ; LAB_00475c7f
    MOV EAX,dword ptr [ESP + 0x154]     ; 00475ca4
        ;   Label: LAB_00475ca4
    MOV dword ptr [ESP + 0xe8],EAX      ; 00475cab
    MOV dword ptr [ESP + 0xec],EAX      ; 00475cb2
    JMP 0x00475c46                      ; 00475cb9
        ;   XREF to: 00475c46 (UNCONDITIONAL_JUMP)  ; LAB_00475c46
    MOV EDI,dword ptr [ESP + 0x80]      ; 00475cbb
        ;   Label: LAB_00475cbb
    CMP EDI,dword ptr [EBX + 0x68]      ; 00475cc2
    JG 0x00475e46                       ; 00475cc5
        ;   XREF to: 00475e46 (CONDITIONAL_JUMP)  ; LAB_00475e46
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00475ccb
    DEC EAX                             ; 00475ccf
    MOV dword ptr [ESP + 0x118],EAX     ; 00475cd0
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475cd7
    DEC EAX                             ; 00475cdb
    MOV dword ptr [ESP + 0x11c],EAX     ; 00475cdc
    MOV EAX,EDI                         ; 00475ce3
    NEG EAX                             ; 00475ce5
    ADD EAX,EDI                         ; 00475ce7
    MOV dword ptr [ESP + 0x148],EAX     ; 00475ce9
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475cf0
        ;   Label: LAB_00475cf0
    MOV EDX,dword ptr [EBX + 0x60]      ; 00475cf4
    MOV dword ptr [ESP + 0x17c],EAX     ; 00475cf7
    CMP EAX,EDX                         ; 00475cfe
    JG 0x00475d8c                       ; 00475d00
        ;   XREF to: 00475d8c (CONDITIONAL_JUMP)  ; LAB_00475d8c
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475d06
    MOV dword ptr [ESP + 0xf8],EAX      ; 00475d0d
    MOV dword ptr [ESP + 0xfc],EAX      ; 00475d14
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00475d1b
        ;   Label: LAB_00475d1b
    CMP ESI,dword ptr [EBX + 0x64]      ; 00475d1f
    JG 0x00475d47                       ; 00475d22
        ;   XREF to: 00475d47 (CONDITIONAL_JUMP)  ; LAB_00475d47
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00475d24
        ;   Label: LAB_00475d24
    PUSH EAX                            ; 00475d2b
    PUSH EDI                            ; 00475d2c
    PUSH ESI                            ; 00475d2d
    MOV EDX,dword ptr [ESP + 0x188]     ; 00475d2e
    PUSH EDX                            ; 00475d35
    PUSH EBX                            ; 00475d36
    INC ESI                             ; 00475d37
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475d38
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00475d3d
    ADD ESP,0x14                        ; 00475d40
    CMP ESI,ECX                         ; 00475d43
    JLE 0x00475d24                      ; 00475d45
        ;   XREF to: 00475d24 (CONDITIONAL_JUMP)  ; LAB_00475d24
    MOV ESI,dword ptr [ESP + 0x118]     ; 00475d47
        ;   Label: LAB_00475d47
    CMP ESI,dword ptr [EBX + 0x58]      ; 00475d4e
    JL 0x00475d76                       ; 00475d51
        ;   XREF to: 00475d76 (CONDITIONAL_JUMP)  ; LAB_00475d76
    MOV ECX,dword ptr [ESP + 0xfc]      ; 00475d53
        ;   Label: LAB_00475d53
    PUSH ECX                            ; 00475d5a
    PUSH EDI                            ; 00475d5b
    PUSH ESI                            ; 00475d5c
    MOV EAX,dword ptr [ESP + 0x188]     ; 00475d5d
    PUSH EAX                            ; 00475d64
    PUSH EBX                            ; 00475d65
    DEC ESI                             ; 00475d66
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475d67
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00475d6c
    ADD ESP,0x14                        ; 00475d6f
    CMP ESI,EDX                         ; 00475d72
    JGE 0x00475d53                      ; 00475d74
        ;   XREF to: 00475d53 (CONDITIONAL_JUMP)  ; LAB_00475d53
    MOV ECX,dword ptr [ESP + 0x17c]     ; 00475d76
        ;   Label: LAB_00475d76
    INC ECX                             ; 00475d7d
    MOV ESI,dword ptr [EBX + 0x60]      ; 00475d7e
    MOV dword ptr [ESP + 0x17c],ECX     ; 00475d81
    CMP ECX,ESI                         ; 00475d88
    JLE 0x00475d1b                      ; 00475d8a
        ;   XREF to: 00475d1b (CONDITIONAL_JUMP)  ; LAB_00475d1b
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00475d8c
        ;   Label: LAB_00475d8c
    MOV EDX,dword ptr [EBX + 0x54]      ; 00475d93
    MOV dword ptr [ESP + 0x178],EAX     ; 00475d96
    CMP EAX,EDX                         ; 00475d9d
    JL 0x00475e2b                       ; 00475d9f
        ;   XREF to: 00475e2b (CONDITIONAL_JUMP)  ; LAB_00475e2b
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475da5
    MOV dword ptr [ESP + 0x100],EAX     ; 00475dac
    MOV dword ptr [ESP + 0x104],EAX     ; 00475db3
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00475dba
        ;   Label: LAB_00475dba
    CMP ESI,dword ptr [EBX + 0x64]      ; 00475dbe
    JG 0x00475de6                       ; 00475dc1
        ;   XREF to: 00475de6 (CONDITIONAL_JUMP)  ; LAB_00475de6
    MOV ECX,dword ptr [ESP + 0x100]     ; 00475dc3
        ;   Label: LAB_00475dc3
    PUSH ECX                            ; 00475dca
    PUSH EDI                            ; 00475dcb
    PUSH ESI                            ; 00475dcc
    MOV EAX,dword ptr [ESP + 0x184]     ; 00475dcd
    PUSH EAX                            ; 00475dd4
    PUSH EBX                            ; 00475dd5
    INC ESI                             ; 00475dd6
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475dd7
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00475ddc
    ADD ESP,0x14                        ; 00475ddf
    CMP ESI,EDX                         ; 00475de2
    JLE 0x00475dc3                      ; 00475de4
        ;   XREF to: 00475dc3 (CONDITIONAL_JUMP)  ; LAB_00475dc3
    MOV ESI,dword ptr [ESP + 0x118]     ; 00475de6
        ;   Label: LAB_00475de6
    CMP ESI,dword ptr [EBX + 0x58]      ; 00475ded
    JL 0x00475e15                       ; 00475df0
        ;   XREF to: 00475e15 (CONDITIONAL_JUMP)  ; LAB_00475e15
    MOV EAX,dword ptr [ESP + 0x104]     ; 00475df2
        ;   Label: LAB_00475df2
    PUSH EAX                            ; 00475df9
    PUSH EDI                            ; 00475dfa
    PUSH ESI                            ; 00475dfb
    MOV EDX,dword ptr [ESP + 0x184]     ; 00475dfc
    PUSH EDX                            ; 00475e03
    PUSH EBX                            ; 00475e04
    DEC ESI                             ; 00475e05
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475e06
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00475e0b
    ADD ESP,0x14                        ; 00475e0e
    CMP ESI,ECX                         ; 00475e11
    JGE 0x00475df2                      ; 00475e13
        ;   XREF to: 00475df2 (CONDITIONAL_JUMP)  ; LAB_00475df2
    MOV ECX,dword ptr [ESP + 0x178]     ; 00475e15
        ;   Label: LAB_00475e15
    DEC ECX                             ; 00475e1c
    MOV ESI,dword ptr [EBX + 0x54]      ; 00475e1d
    MOV dword ptr [ESP + 0x178],ECX     ; 00475e20
    CMP ECX,ESI                         ; 00475e27
    JGE 0x00475dba                      ; 00475e29
        ;   XREF to: 00475dba (CONDITIONAL_JUMP)  ; LAB_00475dba
    MOV EAX,dword ptr [ESP + 0x148]     ; 00475e2b
        ;   Label: LAB_00475e2b
    INC EDI                             ; 00475e32
    INC EAX                             ; 00475e33
    MOV EDX,dword ptr [EBX + 0x68]      ; 00475e34
    MOV dword ptr [ESP + 0x148],EAX     ; 00475e37
    CMP EDI,EDX                         ; 00475e3e
    JLE 0x00475cf0                      ; 00475e40
        ;   XREF to: 00475cf0 (CONDITIONAL_JUMP)  ; LAB_00475cf0
    MOV EDI,dword ptr [ESP + 0x80]      ; 00475e46
        ;   Label: LAB_00475e46
    MOV ECX,dword ptr [EBX + 0x5c]      ; 00475e4d
    DEC EDI                             ; 00475e50
    CMP EDI,ECX                         ; 00475e51
    JL 0x00475920                       ; 00475e53
        ;   XREF to: 00475920 (CONDITIONAL_JUMP)  ; LAB_00475920
    MOV EAX,dword ptr [ESP + 0x7c]      ; 00475e59
    DEC EAX                             ; 00475e5d
    MOV dword ptr [ESP + 0x120],EAX     ; 00475e5e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475e65
    DEC EAX                             ; 00475e69
    MOV dword ptr [ESP + 0x124],EAX     ; 00475e6a
    MOV EAX,EDI                         ; 00475e71
    MOV EDX,dword ptr [ESP + 0x80]      ; 00475e73
    NEG EAX                             ; 00475e7a
    ADD EAX,EDX                         ; 00475e7c
    MOV dword ptr [ESP + 0x14c],EAX     ; 00475e7e
    MOV EAX,dword ptr [ESP + 0x78]      ; 00475e85
        ;   Label: LAB_00475e85
    MOV ECX,dword ptr [EBX + 0x60]      ; 00475e89
    MOV dword ptr [ESP + 0x174],EAX     ; 00475e8c
    CMP EAX,ECX                         ; 00475e93
    JLE 0x00475fcf                      ; 00475e95
        ;   XREF to: 00475fcf (CONDITIONAL_JUMP)  ; LAB_00475fcf
    MOV EAX,dword ptr [ESP + 0x124]     ; 00475e9b
        ;   Label: LAB_00475e9b
    MOV ECX,dword ptr [EBX + 0x54]      ; 00475ea2
    MOV dword ptr [ESP + 0x170],EAX     ; 00475ea5
    CMP EAX,ECX                         ; 00475eac
    JL 0x00475f3a                       ; 00475eae
        ;   XREF to: 00475f3a (CONDITIONAL_JUMP)  ; LAB_00475f3a
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00475eb4
    MOV dword ptr [ESP + 0x110],EAX     ; 00475ebb
    MOV dword ptr [ESP + 0x114],EAX     ; 00475ec2
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00475ec9
        ;   Label: LAB_00475ec9
    CMP ESI,dword ptr [EBX + 0x64]      ; 00475ecd
    JG 0x00475ef5                       ; 00475ed0
        ;   XREF to: 00475ef5 (CONDITIONAL_JUMP)  ; LAB_00475ef5
    MOV EAX,dword ptr [ESP + 0x110]     ; 00475ed2
        ;   Label: LAB_00475ed2
    PUSH EAX                            ; 00475ed9
    PUSH EDI                            ; 00475eda
    PUSH ESI                            ; 00475edb
    MOV EDX,dword ptr [ESP + 0x17c]     ; 00475edc
    PUSH EDX                            ; 00475ee3
    PUSH EBX                            ; 00475ee4
    INC ESI                             ; 00475ee5
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475ee6
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x64]      ; 00475eeb
    ADD ESP,0x14                        ; 00475eee
    CMP ESI,ECX                         ; 00475ef1
    JLE 0x00475ed2                      ; 00475ef3
        ;   XREF to: 00475ed2 (CONDITIONAL_JUMP)  ; LAB_00475ed2
    MOV ESI,dword ptr [ESP + 0x120]     ; 00475ef5
        ;   Label: LAB_00475ef5
    CMP ESI,dword ptr [EBX + 0x58]      ; 00475efc
    JL 0x00475f24                       ; 00475eff
        ;   XREF to: 00475f24 (CONDITIONAL_JUMP)  ; LAB_00475f24
    MOV ECX,dword ptr [ESP + 0x114]     ; 00475f01
        ;   Label: LAB_00475f01
    PUSH ECX                            ; 00475f08
    PUSH EDI                            ; 00475f09
    PUSH ESI                            ; 00475f0a
    MOV EAX,dword ptr [ESP + 0x17c]     ; 00475f0b
    PUSH EAX                            ; 00475f12
    PUSH EBX                            ; 00475f13
    DEC ESI                             ; 00475f14
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475f15
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x58]      ; 00475f1a
    ADD ESP,0x14                        ; 00475f1d
    CMP ESI,EDX                         ; 00475f20
    JGE 0x00475f01                      ; 00475f22
        ;   XREF to: 00475f01 (CONDITIONAL_JUMP)  ; LAB_00475f01
    MOV ESI,dword ptr [ESP + 0x170]     ; 00475f24
        ;   Label: LAB_00475f24
    DEC ESI                             ; 00475f2b
    MOV EDX,dword ptr [EBX + 0x54]      ; 00475f2c
    MOV dword ptr [ESP + 0x170],ESI     ; 00475f2f
    CMP ESI,EDX                         ; 00475f36
    JGE 0x00475ec9                      ; 00475f38
        ;   XREF to: 00475ec9 (CONDITIONAL_JUMP)  ; LAB_00475ec9
    MOV ESI,dword ptr [ESP + 0x14c]     ; 00475f3a
        ;   Label: LAB_00475f3a
    DEC EDI                             ; 00475f41
    INC ESI                             ; 00475f42
    MOV EAX,dword ptr [EBX + 0x5c]      ; 00475f43
    MOV dword ptr [ESP + 0x14c],ESI     ; 00475f46
    CMP EDI,EAX                         ; 00475f4d
    JL 0x00475920                       ; 00475f4f
        ;   XREF to: 00475920 (CONDITIONAL_JUMP)  ; LAB_00475920
    JMP 0x00475e85                      ; 00475f55
        ;   XREF to: 00475e85 (UNCONDITIONAL_JUMP)  ; LAB_00475e85
    MOV ESI,dword ptr [ESP + 0x174]     ; 00475f5a
        ;   Label: LAB_00475f5a
    INC ESI                             ; 00475f61
    MOV EDX,dword ptr [EBX + 0x60]      ; 00475f62
    MOV dword ptr [ESP + 0x174],ESI     ; 00475f65
    CMP ESI,EDX                         ; 00475f6c
    JG 0x00475e9b                       ; 00475f6e
        ;   XREF to: 00475e9b (CONDITIONAL_JUMP)  ; LAB_00475e9b
    MOV ESI,dword ptr [ESP + 0x7c]      ; 00475f74
        ;   Label: LAB_00475f74
    CMP ESI,dword ptr [EBX + 0x64]      ; 00475f78
    JG 0x00475fa0                       ; 00475f7b
        ;   XREF to: 00475fa0 (CONDITIONAL_JUMP)  ; LAB_00475fa0
    MOV ECX,dword ptr [ESP + 0x108]     ; 00475f7d
        ;   Label: LAB_00475f7d
    PUSH ECX                            ; 00475f84
    PUSH EDI                            ; 00475f85
    PUSH ESI                            ; 00475f86
    MOV EAX,dword ptr [ESP + 0x180]     ; 00475f87
    PUSH EAX                            ; 00475f8e
    PUSH EBX                            ; 00475f8f
    INC ESI                             ; 00475f90
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475f91
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV EDX,dword ptr [EBX + 0x64]      ; 00475f96
    ADD ESP,0x14                        ; 00475f99
    CMP ESI,EDX                         ; 00475f9c
    JLE 0x00475f7d                      ; 00475f9e
        ;   XREF to: 00475f7d (CONDITIONAL_JUMP)  ; LAB_00475f7d
    MOV ESI,dword ptr [ESP + 0x120]     ; 00475fa0
        ;   Label: LAB_00475fa0
    CMP ESI,dword ptr [EBX + 0x58]      ; 00475fa7
    JL 0x00475f5a                       ; 00475faa
        ;   XREF to: 00475f5a (CONDITIONAL_JUMP)  ; LAB_00475f5a
        ;   Label: LAB_00475faa
    MOV EAX,dword ptr [ESP + 0x10c]     ; 00475fac
    PUSH EAX                            ; 00475fb3
    PUSH EDI                            ; 00475fb4
    PUSH ESI                            ; 00475fb5
    MOV EDX,dword ptr [ESP + 0x180]     ; 00475fb6
    PUSH EDX                            ; 00475fbd
    PUSH EBX                            ; 00475fbe
    DEC ESI                             ; 00475fbf
    CALL core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0 ; 00475fc0
        ;   XREF to: 004746b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_004746b0(CDemonRaytrace * this_ptr, int grid_x, int grid_y, int grid_z, ...)
    MOV ECX,dword ptr [EBX + 0x58]      ; 00475fc5
    ADD ESP,0x14                        ; 00475fc8
    CMP ESI,ECX                         ; 00475fcb
    JMP 0x00475faa                      ; 00475fcd
        ;   XREF to: 00475faa (UNCONDITIONAL_JUMP)  ; LAB_00475faa
    MOV EAX,dword ptr [ESP + 0x14c]     ; 00475fcf
        ;   Label: LAB_00475fcf
    MOV dword ptr [ESP + 0x108],EAX     ; 00475fd6
    MOV dword ptr [ESP + 0x10c],EAX     ; 00475fdd
    JMP 0x00475f74                      ; 00475fe4
        ;   XREF to: 00475f74 (UNCONDITIONAL_JUMP)  ; LAB_00475f74

