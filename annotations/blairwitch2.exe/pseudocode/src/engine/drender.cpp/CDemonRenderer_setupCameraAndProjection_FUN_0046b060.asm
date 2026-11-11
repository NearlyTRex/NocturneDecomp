; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060(CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CMatrix3x3f *    Stack[0x8]:4   transform_matrix
; Local Variables:
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0043c040 at 0043c1c2
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0043b7f0 at 0043b9fb
;   core_dlight.cpp_CDemonLight_beginScene_FUN_0044a020 at 0044a0dd
;   core_mirror.cpp_CMirrorReflection_setupMirrorCamera_FUN_004f9950 at 004f9985
;   core_moon.cpp_CMoon_render_FUN_00502510 at 005025bd
;   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030 at 0046b04d
;
; Referenced Globals:
;   undefined4 DAT_005d156b
;   undefined4 DAT_005d1573
;   undefined4 DAT_005d157b
;   undefined4 DAT_006141e4
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c38b84
;   undefined4 DAT_01c38b88
;   undefined4 DAT_01c38b8c
;   undefined4 DAT_01c38b9c
;   undefined4 DAT_01c38ba0
;   undefined4 DAT_01c38ba4
;   undefined4 DAT_01c38ba8
;   ... and 5 more
;
; Called Functions:
;   core_dirmat.cpp_FUN_004496e0
;   crt_math.c_round_FUN_005b7ff0
;   engine_matrix.c_invertTransformMatrix_FUN_004e8730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b060
        ;   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046b060
    PUSH ESI                            ; 0046b061
    PUSH EDI                            ; 0046b062
    PUSH EBP                            ; 0046b063
    SUB ESP,0x18                        ; 0046b064
    MOV EBP,dword ptr [ESP + 0x2c]      ; 0046b067
    MOV EBX,dword ptr [ESP + 0x30]      ; 0046b06b
    PUSH EBX                            ; 0046b06f
    LEA ESI,[ESP + 0x4]                 ; 0046b070
    LEA EDI,[ESP + 0x10]                ; 0046b074
    CALL core_dirmat.cpp_FUN_004496e0   ; 0046b078
        ;   XREF to: 004496e0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_004496e0()
    LEA ESI,[ESP + 0x4]                 ; 0046b07d
    ADD ESP,0x4                         ; 0046b081
    MOVSD ES:EDI,ESI                    ; 0046b084
    MOVSD ES:EDI,ESI                    ; 0046b085
    MOVSD ES:EDI,ESI                    ; 0046b086
    FLD float ptr [0x005d156b]          ; 0046b087 | DAT_005d156b
    FLD float ptr [ESP + 0xc]           ; 0046b08d
    FMUL ST1                            ; 0046b091
    FLD float ptr [ESP + 0x14]          ; 0046b093
    FMUL ST2                            ; 0046b097
    FLD float ptr [ESP + 0x10]          ; 0046b099
    FMULP ST3                           ; 0046b09d
    FLD float ptr [EBX]                 ; 0046b09f
    FMUL double ptr [0x005d157b]        ; 0046b0a1 | DAT_005d157b
    FLD float ptr [EBX + 0x4]           ; 0046b0a7
    FMUL double ptr [0x005d157b]        ; 0046b0aa | DAT_005d157b
    FLD float ptr [EBX + 0x8]           ; 0046b0b0
    FMUL double ptr [0x005d157b]        ; 0046b0b3 | DAT_005d157b
    FLD float ptr [EBX + 0xc]           ; 0046b0b9
    FMUL double ptr [0x005d157b]        ; 0046b0bc | DAT_005d157b
    FXCH ST5                            ; 0046b0c2
    FMUL double ptr [0x005d1573]        ; 0046b0c4 | DAT_005d1573
    FXCH ST4                            ; 0046b0ca
    FMUL double ptr [0x005d1573]        ; 0046b0cc | DAT_005d1573
    FXCH ST6                            ; 0046b0d2
    FMUL double ptr [0x005d1573]        ; 0046b0d4 | DAT_005d1573
    FXCH ST3                            ; 0046b0da
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b0dc
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38b9c]        ; 0046b0e1 | DAT_01c38b9c
    FLD float ptr [EBX + 0x10]          ; 0046b0e7
    FMUL double ptr [0x005d157b]        ; 0046b0ea | DAT_005d157b
    FXCH ST2                            ; 0046b0f0
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b0f2
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba0]        ; 0046b0f7 | DAT_01c38ba0
    FLD float ptr [EBX + 0x14]          ; 0046b0fd
    FMUL double ptr [0x005d157b]        ; 0046b100 | DAT_005d157b
    FXCH                                ; 0046b106
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b108
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba4]        ; 0046b10d | DAT_01c38ba4
    FLD float ptr [EBX + 0x18]          ; 0046b113
    FMUL double ptr [0x005d157b]        ; 0046b116 | DAT_005d157b
    FXCH ST5                            ; 0046b11c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b11e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38ba8]        ; 0046b123 | DAT_01c38ba8
    FLD float ptr [EBX + 0x1c]          ; 0046b129
    FMUL double ptr [0x005d157b]        ; 0046b12c | DAT_005d157b
    MOV EDX,0x10000                     ; 0046b132
    FXCH ST2                            ; 0046b137
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b139
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [0x01c38bac]        ; 0046b13e | DAT_01c38bac
    FLD float ptr [EBX + 0x20]          ; 0046b144
    FMUL double ptr [0x005d157b]        ; 0046b147 | DAT_005d157b
    MOV EAX,EDX                         ; 0046b14d
    MOV EBX,dword ptr [0x006141e4]      ; 0046b14f | DAT_006141e4
    FXCH                                ; 0046b155
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b157
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 0046b15c
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b15e
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b163
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b165
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0046b16a
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b16c
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST5                            ; 0046b171
    FISTP dword ptr [0x01c38bb0]        ; 0046b173 | DAT_01c38bb0
    FXCH                                ; 0046b179
    FISTP dword ptr [0x01c38bb4]        ; 0046b17b | DAT_01c38bb4
    FISTP dword ptr [0x01c38bb8]        ; 0046b181 | DAT_01c38bb8
    FXCH ST2                            ; 0046b187
    FISTP dword ptr [0x01c38bbc]        ; 0046b189 | DAT_01c38bbc
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b18f
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b194
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b196
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0046b19b
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b19d
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH ST2                            ; 0046b1a2
    FISTP dword ptr [0x01c38b84]        ; 0046b1a4 | DAT_01c38b84
    FISTP dword ptr [0x01c38b88]        ; 0046b1aa | DAT_01c38b88
    FISTP dword ptr [0x01c38b8c]        ; 0046b1b0 | DAT_01c38b8c
    IMUL EDX                            ; 0046b1b6
    IDIV EBX                            ; 0046b1b8
    MOV EDX,dword ptr [0x01c35e50]      ; 0046b1ba | DAT_01c35e50
    MOV ECX,dword ptr [0x01c35e48]      ; 0046b1c0 | DAT_01c35e48
    MOV EBX,dword ptr [0x01c35e54]      ; 0046b1c6 | DAT_01c35e54
    MOV ESI,dword ptr [0x01c35e4c]      ; 0046b1cc | DAT_01c35e4c
    SUB EDX,ECX                         ; 0046b1d2
    MOV dword ptr [EBP + 0x24],EAX      ; 0046b1d4
    INC EDX                             ; 0046b1d7
    SUB EBX,ESI                         ; 0046b1d8
    SHL EDX,0x10                        ; 0046b1da
    INC EBX                             ; 0046b1dd
    MOV EAX,EDX                         ; 0046b1de
    SAR EDX,0x1f                        ; 0046b1e0
    IDIV EBX                            ; 0046b1e3
    MOV EDX,0x10000                     ; 0046b1e5
    MOV EBX,dword ptr [0x006141e4]      ; 0046b1ea | DAT_006141e4
    MOV dword ptr [EBP + 0x28],EAX      ; 0046b1f0
    IMUL EDX                            ; 0046b1f3
    IDIV EBX                            ; 0046b1f5
    MOV dword ptr [EBP + 0x28],EAX      ; 0046b1f7
    MOV EDX,dword ptr [0x01c38b9c]      ; 0046b1fa | DAT_01c38b9c
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046b200
    IMUL EDX                            ; 0046b203
    SHRD EAX,EDX,0x10                   ; 0046b205
    MOV [0x01c38b9c],EAX                ; 0046b209 | DAT_01c38b9c
    MOV EDX,dword ptr [0x01c38ba8]      ; 0046b20e | DAT_01c38ba8
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046b214
    IMUL EDX                            ; 0046b217
    SHRD EAX,EDX,0x10                   ; 0046b219
    MOV EDX,dword ptr [0x01c38bb4]      ; 0046b21d | DAT_01c38bb4
    MOV [0x01c38ba8],EAX                ; 0046b223 | DAT_01c38ba8
    MOV EAX,dword ptr [EBP + 0x24]      ; 0046b228
    IMUL EDX                            ; 0046b22b
    SHRD EAX,EDX,0x10                   ; 0046b22d
    MOV EDX,dword ptr [0x01c38ba0]      ; 0046b231 | DAT_01c38ba0
    MOV [0x01c38bb4],EAX                ; 0046b237 | DAT_01c38bb4
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046b23c
    IMUL EDX                            ; 0046b23f
    SHRD EAX,EDX,0x10                   ; 0046b241
    MOV EDX,dword ptr [0x01c38bac]      ; 0046b245 | DAT_01c38bac
    MOV [0x01c38ba0],EAX                ; 0046b24b | DAT_01c38ba0
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046b250
    IMUL EDX                            ; 0046b253
    SHRD EAX,EDX,0x10                   ; 0046b255
    MOV EDX,dword ptr [0x01c38bb8]      ; 0046b259 | DAT_01c38bb8
    MOV [0x01c38bac],EAX                ; 0046b25f | DAT_01c38bac
    MOV EAX,dword ptr [EBP + 0x28]      ; 0046b264
    IMUL EDX                            ; 0046b267
    SHRD EAX,EDX,0x10                   ; 0046b269
    MOV [0x01c38bb8],EAX                ; 0046b26d | DAT_01c38bb8
    CALL engine_matrix.c_invertTransformMatrix_FUN_004e8730 ; 0046b272
        ;   XREF to: 004e8730 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_004e8730()
    ADD ESP,0x18                        ; 0046b277
    POP EBP                             ; 0046b27a
    POP EDI                             ; 0046b27b
    POP ESI                             ; 0046b27c
    POP EBX                             ; 0046b27d
    RET                                 ; 0046b27e

