; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dlight_cpp_FUN_0044b020(CDemonLight *this_ptr)
;
; Parameters:
; CDemonLight *    Stack[0x4]:4   this_ptr
; Local Variables:
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
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x58]:1  local_58
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
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_set.cpp_FUN_0052f2a0 at 0052f9e2
;
; Referenced Globals:
;   undefined4 DAT_005cf467
;   undefined4 DAT_005cf46f
;   undefined4 DAT_005f5050
;   undefined4 DAT_0060afe0
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c38aec
;
; Called Functions:
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0
;   engine_drender.cpp_FUN_0046b670
;   engine_drender.cpp_pop_FUN_0046b4a0
;   engine_special.cpp_FUN_0055d723
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b020
        ;   Label: core_dlight.cpp_FUN_0044b020
    PUSH ESI                            ; 0044b021
    PUSH EDI                            ; 0044b022
    PUSH EBP                            ; 0044b023
    MOV EBP,ESP                         ; 0044b024
    SUB ESP,0xe4                        ; 0044b026
    AND ESP,0xfffffff8                  ; 0044b02c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b02f
    CMP dword ptr [EAX + 0x1cbc],0x0    ; 0044b032
    JNZ 0x0044b051                      ; 0044b039
        ;   XREF to: 0044b051 (CONDITIONAL_JUMP)  ; LAB_0044b051
    MOV ESP,EBP                         ; 0044b03b
    POP EBP                             ; 0044b03d
    POP EDI                             ; 0044b03e
    POP ESI                             ; 0044b03f
    POP EBX                             ; 0044b040
    LEA EAX,[EAX]                       ; 0044b041
    LEA EDX,[EDX]                       ; 0044b047
    LEA EAX,[EAX]                       ; 0044b04d
    LEA EBX,[EAX + 0x4]                 ; 0044b051
        ;   Label: LAB_0044b051
    PUSH EBX                            ; 0044b054
    MOV ECX,dword ptr [0x0060b280]      ; 0044b055 | DAT_0060b280
    PUSH ECX                            ; 0044b05b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0 ; 0044b05c
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 0044b061
    MOV ESI,dword ptr [0x0060b280]      ; 0044b064 | DAT_0060b280
    PUSH ESI                            ; 0044b06a | DAT_01ba5c50
    LEA ESI,[ESP + 0x98]                ; 0044b06b
    LEA EDI,[ESP + 0x8c]                ; 0044b072
    CALL engine_drender.cpp_FUN_0046b670 ; 0044b079
        ;   XREF to: 0046b670 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b670()
    ADD ESP,0x4                         ; 0044b07e
    LEA ESI,[ESP + 0x94]                ; 0044b081
    LEA EAX,[ESP + 0x88]                ; 0044b088
    PUSH 0x0                            ; 0044b08f
    MOVSD ES:EDI,ESI                    ; 0044b091
    MOVSD ES:EDI,ESI                    ; 0044b092
    MOVSD ES:EDI,ESI                    ; 0044b093
    PUSH EAX                            ; 0044b094
    MOV EDI,dword ptr [0x0060b280]      ; 0044b095 | DAT_0060b280
    PUSH EDI                            ; 0044b09b | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0044b09c
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0044b0a1
    MOV EAX,[0x0060b280]                ; 0044b0a4 | DAT_0060b280
    PUSH EAX                            ; 0044b0a9 | DAT_01ba5c50
    LEA ESI,[ESP + 0xa4]                ; 0044b0aa
    LEA EDI,[ESP + 0xc8]                ; 0044b0b1
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0 ; 0044b0b8
        ;   XREF to: 0046b5c0 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(CDemonRenderer * this_ptr, CVector3i * output)
    LEA ESI,[ESP + 0xa4]                ; 0044b0bd
    ADD ESP,0x4                         ; 0044b0c4
    MOVSD ES:EDI,ESI                    ; 0044b0c7
    MOVSD ES:EDI,ESI                    ; 0044b0c8
    MOVSD ES:EDI,ESI                    ; 0044b0c9
    MOV EAX,dword ptr [ESP + 0xc4]      ; 0044b0ca
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044b0d1
    FILD dword ptr [ESP + 0xe0]         ; 0044b0d8
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0044b0df
    FLD double ptr [0x005cf467]         ; 0044b0e6 | DAT_005cf467
    FXCH                                ; 0044b0ec
    FMUL ST1                            ; 0044b0ee
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044b0f0
    MOV EAX,dword ptr [ESP + 0xcc]      ; 0044b0f7
    FILD dword ptr [ESP + 0xe0]         ; 0044b0fe
    MOV dword ptr [ESP + 0xe0],EAX      ; 0044b105
    FMUL ST2                            ; 0044b10c
    FILD dword ptr [ESP + 0xe0]         ; 0044b10e
    FMULP ST3                           ; 0044b115
    LEA EDX,[ESP + 0x58]                ; 0044b117
    FLD float ptr [EBX]                 ; 0044b11b
    FLD float ptr [EBX + 0x4]           ; 0044b11d
    FLD float ptr [EBX + 0x8]           ; 0044b120
    LEA EDI,[ESP + 0x64]                ; 0044b123
    LEA ESI,[ESP + 0x4c]                ; 0044b127
    FXCH ST4                            ; 0044b12b
    FSTP float ptr [ESP + 0x7c]         ; 0044b12d
    FXCH                                ; 0044b131
    FSUB float ptr [ESP + 0x7c]         ; 0044b133
    FXCH ST2                            ; 0044b137
    FSTP float ptr [ESP + 0x80]         ; 0044b139
    FXCH                                ; 0044b140
    FSTP float ptr [ESP + 0x4c]         ; 0044b142
    LEA EAX,[ESP + 0x64]                ; 0044b146
    FSUB float ptr [ESP + 0x80]         ; 0044b14a
    FXCH ST2                            ; 0044b151
    FSTP float ptr [ESP + 0x84]         ; 0044b153
    FSUB float ptr [ESP + 0x84]         ; 0044b15a
    FXCH                                ; 0044b161
    FSTP float ptr [ESP + 0x50]         ; 0044b163
    FSTP float ptr [ESP + 0x54]         ; 0044b167
    MOVSD ES:EDI,ESI                    ; 0044b16b
    MOVSD ES:EDI,ESI                    ; 0044b16c
    MOVSD ES:EDI,ESI                    ; 0044b16d
    CMP EDX,EAX                         ; 0044b16e
    JZ 0x0044b18a                       ; 0044b170
        ;   XREF to: 0044b18a (CONDITIONAL_JUMP)  ; LAB_0044b18a
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044b172
    MOV dword ptr [ESP + 0x58],EAX      ; 0044b176
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044b17a
    MOV dword ptr [ESP + 0x5c],EAX      ; 0044b17e
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044b182
    MOV dword ptr [ESP + 0x60],EAX      ; 0044b186
    FLD float ptr [ESP + 0x5c]          ; 0044b18a
        ;   Label: LAB_0044b18a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b18e
    FMUL float ptr [ESP + 0x5c]         ; 0044b191
    MOV EAX,dword ptr [EAX + 0x18]      ; 0044b195
    FLD float ptr [ESP + 0x58]          ; 0044b198
    FMUL ST0                            ; 0044b19c
    MOV dword ptr [ESP + 0x40],EAX      ; 0044b19e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b1a2
    FADDP                               ; 0044b1a5
    MOV EAX,dword ptr [EAX + 0x24]      ; 0044b1a7
    FLD float ptr [ESP + 0x60]          ; 0044b1aa
    MOV dword ptr [ESP + 0x44],EAX      ; 0044b1ae
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b1b2
    FMUL float ptr [ESP + 0x60]         ; 0044b1b5
    MOV EAX,dword ptr [EAX + 0x30]      ; 0044b1b9
    FADDP                               ; 0044b1bc
    MOV dword ptr [ESP + 0x48],EAX      ; 0044b1be
    FSQRT                               ; 0044b1c2
    FLDZ                                ; 0044b1c4
    FXCH                                ; 0044b1c6
    FSTP float ptr [ESP + 0xd8]         ; 0044b1c8
    FCOMP float ptr [ESP + 0xd8]        ; 0044b1cf
    FNSTSW AX                           ; 0044b1d6
    SAHF                                ; 0044b1d8
    JNC 0x0044b595                      ; 0044b1d9
        ;   XREF to: 0044b595 (CONDITIONAL_JUMP)  ; LAB_0044b595
    FLD1                                ; 0044b1df
    FLD float ptr [ESP + 0x58]          ; 0044b1e1
    FXCH                                ; 0044b1e5
    FDIV float ptr [ESP + 0xd8]         ; 0044b1e7
    FXCH                                ; 0044b1ee
    FMUL ST1                            ; 0044b1f0
    FLD float ptr [ESP + 0x5c]          ; 0044b1f2
    FMUL ST2                            ; 0044b1f6
    FLD float ptr [ESP + 0x60]          ; 0044b1f8
    FMULP ST3                           ; 0044b1fc
    FXCH                                ; 0044b1fe
    FSTP float ptr [ESP + 0x58]         ; 0044b200
    FSTP float ptr [ESP + 0x5c]         ; 0044b204
    FSTP float ptr [ESP + 0x60]         ; 0044b208
    FLD float ptr [ESP + 0x5c]          ; 0044b20c
        ;   Label: LAB_0044b20c
    FMUL float ptr [ESP + 0x44]         ; 0044b210
    FLD float ptr [ESP + 0x58]          ; 0044b214
    FMUL float ptr [ESP + 0x40]         ; 0044b218
    FADDP                               ; 0044b21c
    FLD float ptr [ESP + 0x60]          ; 0044b21e
    FMUL float ptr [ESP + 0x48]         ; 0044b222
    FADDP                               ; 0044b226
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b228
    FCHS                                ; 0044b22b
    FMUL float ptr [EAX + 0x2fac]       ; 0044b22d
    MOV EAX,[0x01c38aec]                ; 0044b233 | DAT_01c38aec
    MOV EDX,EAX                         ; 0044b238
    SAR EDX,0x1f                        ; 0044b23a
    SUB EAX,EDX                         ; 0044b23d
    SAR EAX,0x1                         ; 0044b23f
    FST float ptr [ESP + 0xd0]          ; 0044b241
    FMUL float ptr [ESP + 0xd0]         ; 0044b248
    FMUL float ptr [ESP + 0xd0]         ; 0044b24f
    FMUL float ptr [ESP + 0xd0]         ; 0044b256
    FMUL double ptr [0x005cf46f]        ; 0044b25d | DAT_005cf46f
    MOV EDX,0xffff                      ; 0044b263
    CALL crt_math.c_round_FUN_005b7ff0  ; 0044b268
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    SUB EDX,EAX                         ; 0044b26d
    FISTP dword ptr [ESP + 0xd4]        ; 0044b26f
    MOV EAX,EDX                         ; 0044b276
    MOV EDX,dword ptr [ESP + 0xd4]      ; 0044b278
    IMUL EDX                            ; 0044b27f
    SHRD EAX,EDX,0x10                   ; 0044b281
    FLDZ                                ; 0044b285
    MOV ESI,EAX                         ; 0044b287
    FCOMP float ptr [ESP + 0xd0]        ; 0044b289
    FNSTSW AX                           ; 0044b290
    SAHF                                ; 0044b292
    JNC 0x0044b563                      ; 0044b293
        ;   XREF to: 0044b563 (CONDITIONAL_JUMP)  ; LAB_0044b563
    MOV EDI,0x3f800000                  ; 0044b299
    MOV EDX,0xbf000000                  ; 0044b29e
    LEA EBX,[ESP + 0xb8]                ; 0044b2a3
    LEA EAX,[ESP + 0x28]                ; 0044b2aa
    MOV dword ptr [ESP + 0x28],EDI      ; 0044b2ae
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044b2b2
    MOV dword ptr [ESP + 0x30],EDX      ; 0044b2b6
    MOV EDX,dword ptr [0x0060b280]      ; 0044b2ba | DAT_0060b280
    FLD float ptr [EAX]                 ; 0044b2c0
    FMUL float ptr [0x005f5050]         ; 0044b2c2 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044b2c8
    FLD float ptr [EAX + 0x4]           ; 0044b2ca
    FMUL float ptr [0x005f5050]         ; 0044b2cd | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044b2d3
    FLD float ptr [EAX + 0x8]           ; 0044b2d6
    FMUL float ptr [0x005f5050]         ; 0044b2d9 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044b2df
    LEA EAX,[ESP + 0xb8]                ; 0044b2e2
    PUSH EAX                            ; 0044b2e9
    MOV EAX,dword ptr [EDX]             ; 0044b2ea | DAT_01ba5c50
    PUSH EAX                            ; 0044b2ec
    CALL engine_special.cpp_FUN_0055d723 ; 0044b2ed
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbf800000                  ; 0044b2f2
    LEA EBX,[ESP + 0x3c]                ; 0044b2f7
    LEA EAX,[ESP + 0x30]                ; 0044b2fb
    ADD ESP,0x8                         ; 0044b2ff
    MOV EDX,dword ptr [0x0060b280]      ; 0044b302 | DAT_0060b280
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044b308
    MOV EDI,0xbf000000                  ; 0044b30c
    MOV dword ptr [ESP + 0x28],ECX      ; 0044b311
    MOV dword ptr [ESP + 0x30],EDI      ; 0044b315
    FLD float ptr [EAX]                 ; 0044b319
    FMUL float ptr [0x005f5050]         ; 0044b31b | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044b321
    FLD float ptr [EAX + 0x4]           ; 0044b323
    FMUL float ptr [0x005f5050]         ; 0044b326 | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044b32c
    FLD float ptr [EAX + 0x8]           ; 0044b32f
    FMUL float ptr [0x005f5050]         ; 0044b332 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044b338
    LEA EAX,[ESP + 0x34]                ; 0044b33b
    PUSH EAX                            ; 0044b33f
    MOV EAX,dword ptr [EDX]             ; 0044b340 | DAT_01ba5c50
    ADD EAX,0x30                        ; 0044b342
    PUSH EAX                            ; 0044b345
    CALL engine_special.cpp_FUN_0055d723 ; 0044b346
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EAX,0xbf800000                  ; 0044b34b
    LEA EBX,[ESP + 0x78]                ; 0044b350
    ADD ESP,0x8                         ; 0044b354
    MOV EDX,dword ptr [0x0060b280]      ; 0044b357 | DAT_0060b280
    MOV dword ptr [ESP + 0x28],EAX      ; 0044b35d
    MOV dword ptr [ESP + 0x2c],EAX      ; 0044b361
    LEA EAX,[ESP + 0x28]                ; 0044b365
    MOV dword ptr [ESP + 0x30],EDI      ; 0044b369
    FLD float ptr [EAX]                 ; 0044b36d
    FMUL float ptr [0x005f5050]         ; 0044b36f | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044b375
    FLD float ptr [EAX + 0x4]           ; 0044b377
    FMUL float ptr [0x005f5050]         ; 0044b37a | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044b380
    FLD float ptr [EAX + 0x8]           ; 0044b383
    FMUL float ptr [0x005f5050]         ; 0044b386 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044b38c
    LEA EAX,[ESP + 0x70]                ; 0044b38f
    PUSH EAX                            ; 0044b393
    MOV EAX,dword ptr [EDX]             ; 0044b394 | DAT_01ba5c50
    ADD EAX,0x60                        ; 0044b396
    PUSH EAX                            ; 0044b399
    MOV EDI,0xbf800000                  ; 0044b39a
    CALL engine_special.cpp_FUN_0055d723 ; 0044b39f
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x3f800000                  ; 0044b3a4
    MOV EAX,0xbf000000                  ; 0044b3a9
    ADD ESP,0x8                         ; 0044b3ae
    MOV EDX,dword ptr [0x0060b280]      ; 0044b3b1 | DAT_0060b280
    MOV dword ptr [ESP + 0x28],EBX      ; 0044b3b7
    MOV dword ptr [ESP + 0x30],EAX      ; 0044b3bb
    LEA EBX,[ESP + 0xac]                ; 0044b3bf
    LEA EAX,[ESP + 0x28]                ; 0044b3c6
    MOV dword ptr [ESP + 0x2c],EDI      ; 0044b3ca
    FLD float ptr [EAX]                 ; 0044b3ce
    FMUL float ptr [0x005f5050]         ; 0044b3d0 | DAT_005f5050
    FISTP dword ptr [EBX]               ; 0044b3d6
    FLD float ptr [EAX + 0x4]           ; 0044b3d8
    FMUL float ptr [0x005f5050]         ; 0044b3db | DAT_005f5050
    FISTP dword ptr [EBX + 0x4]         ; 0044b3e1
    FLD float ptr [EAX + 0x8]           ; 0044b3e4
    FMUL float ptr [0x005f5050]         ; 0044b3e7 | DAT_005f5050
    FISTP dword ptr [EBX + 0x8]         ; 0044b3ed
    LEA EAX,[ESP + 0xac]                ; 0044b3f0
    PUSH EAX                            ; 0044b3f7
    MOV EAX,dword ptr [EDX]             ; 0044b3f8 | DAT_01ba5c50
    ADD EAX,0x90                        ; 0044b3fa
    PUSH EAX                            ; 0044b3ff
    CALL engine_special.cpp_FUN_0055d723 ; 0044b400
        ;   XREF to: 0055d723 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0055d723(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0044b405
    MOV EAX,[0x0060b280]                ; 0044b408 | DAT_0060b280
    MOV EBX,dword ptr [EAX]             ; 0044b40d | DAT_01ba5c50
    MOV dword ptr [EBX + 0x18],0xf80000 ; 0044b40f
    MOV EBX,dword ptr [EAX]             ; 0044b416 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x1c],0xf80000 ; 0044b418
    MOV EBX,dword ptr [EAX]             ; 0044b41f | DAT_01ba5c50
    MOV dword ptr [EBX + 0x2c],ESI      ; 0044b421
    MOV EBX,dword ptr [EAX]             ; 0044b424 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x48],0x80000  ; 0044b426
    MOV EDX,dword ptr [EAX]             ; 0044b42d | DAT_01ba5c50
    MOV dword ptr [EDX + 0x4c],0xf80000 ; 0044b42f
    MOV EDX,dword ptr [EAX]             ; 0044b436 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x5c],ESI      ; 0044b438
    MOV EBX,dword ptr [EAX]             ; 0044b43b | DAT_01ba5c50
    MOV dword ptr [EBX + 0x78],0x80000  ; 0044b43d
    MOV EBX,dword ptr [EAX]             ; 0044b444 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x7c],0x80000  ; 0044b446
    MOV EBX,dword ptr [EAX]             ; 0044b44d | DAT_01ba5c50
    MOV dword ptr [EBX + 0x8c],ESI      ; 0044b44f
    MOV EBX,dword ptr [EAX]             ; 0044b455 | DAT_01ba5c50
    MOV dword ptr [EBX + 0xa8],0xf80000 ; 0044b457
    MOV EDX,dword ptr [EAX]             ; 0044b461 | DAT_01ba5c50
    MOV dword ptr [EDX + 0xac],0x80000  ; 0044b463
    MOV EDX,dword ptr [EAX]             ; 0044b46d | DAT_01ba5c50
    MOV dword ptr [EDX + 0xbc],ESI      ; 0044b46f
    MOV EBX,dword ptr [EAX]             ; 0044b475 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x20],0xffff   ; 0044b477
    MOV EDX,dword ptr [EAX]             ; 0044b47e | DAT_01ba5c50
    MOV dword ptr [EDX + 0x24],0xffff   ; 0044b480
    MOV EDX,dword ptr [EAX]             ; 0044b487 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x28],0xffff   ; 0044b489
    MOV EBX,dword ptr [EAX]             ; 0044b490 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x50],0xffff   ; 0044b492
    MOV EDX,dword ptr [EAX]             ; 0044b499 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x54],0xffff   ; 0044b49b
    MOV EDX,dword ptr [EAX]             ; 0044b4a2 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x58],0xffff   ; 0044b4a4
    MOV EDX,dword ptr [EAX]             ; 0044b4ab | DAT_01ba5c50
    MOV dword ptr [EDX + 0x80],0xffff   ; 0044b4ad
    MOV EDX,dword ptr [EAX]             ; 0044b4b7 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x84],0xffff   ; 0044b4b9
    MOV EDX,dword ptr [EAX]             ; 0044b4c3 | DAT_01ba5c50
    MOV dword ptr [EDX + 0x88],0xffff   ; 0044b4c5
    MOV EBX,dword ptr [EAX]             ; 0044b4cf | DAT_01ba5c50
    MOV dword ptr [EBX + 0xb0],0xffff   ; 0044b4d1
    MOV EDX,dword ptr [EAX]             ; 0044b4db | DAT_01ba5c50
    MOV dword ptr [EDX + 0xb4],0xffff   ; 0044b4dd
    PUSH 0x60afe0                       ; 0044b4e7 | DAT_0060afe0
    MOV EDX,dword ptr [EAX]             ; 0044b4ec | DAT_01ba5c50
    PUSH EAX                            ; 0044b4ee | DAT_01ba5c50
    MOV dword ptr [EDX + 0xb8],0xffff   ; 0044b4ef
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 0044b4f9
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 0044b4fe
    PUSH 0x1                            ; 0044b501
    MOV EDX,dword ptr [0x0060b280]      ; 0044b503 | DAT_0060b280
    MOV EDI,0xffff0001                  ; 0044b509
    PUSH EDX                            ; 0044b50e | DAT_01ba5c50
    MOV ESI,0x3                         ; 0044b50f
    XOR EBX,EBX                         ; 0044b514
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044b516
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    MOV ECX,0x4                         ; 0044b51b
    ADD ESP,0x8                         ; 0044b520
    MOV EAX,ESP                         ; 0044b523
    MOV dword ptr [ESP + 0x4],ECX       ; 0044b525
    MOV dword ptr [ESP + 0x8],EBX       ; 0044b529
    MOV dword ptr [ESP + 0xc],EBX       ; 0044b52d
    MOV dword ptr [ESP + 0x10],EDI      ; 0044b531
    MOV dword ptr [ESP + 0x14],EDI      ; 0044b535
    MOV dword ptr [ESP + 0x18],EBX      ; 0044b539
    MOV dword ptr [ESP + 0x24],ESI      ; 0044b53d
    PUSH EAX                            ; 0044b541
    MOV ECX,0x1                         ; 0044b542
    MOV EDI,dword ptr [0x0060b280]      ; 0044b547 | DAT_0060b280
    MOV EBX,0x2                         ; 0044b54d
    PUSH EDI                            ; 0044b552 | DAT_01ba5c50
    MOV dword ptr [ESP + 0x24],ECX      ; 0044b553
    MOV dword ptr [ESP + 0x28],EBX      ; 0044b557
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930 ; 0044b55b
        ;   XREF to: 0046a930 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 0044b560
    PUSH 0x0                            ; 0044b563
        ;   Label: LAB_0044b563
    MOV EAX,[0x0060b280]                ; 0044b565 | DAT_0060b280
    PUSH EAX                            ; 0044b56a | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0 ; 0044b56b
        ;   XREF to: 0046b8d0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 0044b570
    MOV EDX,dword ptr [0x0060b280]      ; 0044b573 | DAT_0060b280
    PUSH EDX                            ; 0044b579 | DAT_01ba5c50
    CALL engine_drender.cpp_pop_FUN_0046b4a0 ; 0044b57a
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_0046b4a0()
    ADD ESP,0x4                         ; 0044b57f
    MOV ECX,dword ptr [EBP + 0x14]      ; 0044b582
    PUSH ECX                            ; 0044b585
    CALL core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960 ; 0044b586
        ;   XREF to: 0044b960 (UNCONDITIONAL_CALL)  ; void core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(CDemonLight * this_ptr)
    ADD ESP,0x4                         ; 0044b58b
    MOV ESP,EBP                         ; 0044b58e
    POP EBP                             ; 0044b590
    POP EDI                             ; 0044b591
    POP ESI                             ; 0044b592
    POP EBX                             ; 0044b593
    RET                                 ; 0044b594
    XOR EDX,EDX                         ; 0044b595
        ;   Label: LAB_0044b595
    MOV dword ptr [ESP + 0x5c],EDX      ; 0044b597
    MOV dword ptr [ESP + 0x58],EDX      ; 0044b59b
    MOV dword ptr [ESP + 0x60],EDX      ; 0044b59f
    JMP 0x0044b20c                      ; 0044b5a3
        ;   XREF to: 0044b20c (UNCONDITIONAL_JUMP)  ; LAB_0044b20c

