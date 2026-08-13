; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPushAndRotate_FUN_004cdfa0(int rotation_x,int rotation_y,int rotation_z)
;
; Parameters:
; int              Stack[0x4]:4   rotation_x
; int              Stack[0x8]:4   rotation_y
; int              Stack[0xc]:4   rotation_z
; Local Variables:
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
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_0058828b
;   TerminatedCString s_Matrix_unbalance_0058829e
;   undefined4 DAT_005882b3
;   undefined4 DAT_005882bb
;   int g_RelativeX
;   int g_RelativeY
;   int g_RelativeZ
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   CMatrix3x3i g_TransformMatrix
;   undefined4 g_TransformMatrix.m[0].y
;   undefined4 g_TransformMatrix.m[0].z
;   undefined4 g_TransformMatrix.m[1].x
;   undefined4 g_TransformMatrix.m[1].y
;   ... and 7 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_math.c_atan2_FUN_00566c81
;   crt_math.c_round_FUN_00563a30
;   engine_matrix.c_interpolatedCos_FUN_004ccaa0
;   engine_matrix.c_interpolatedSin_FUN_004cca60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cdfa0
        ;   Label: engine_matrix.c_matrixPushAndRotate_FUN_004cdfa0
    PUSH ESI                            ; 004cdfa1
    PUSH EDI                            ; 004cdfa2
    PUSH EBP                            ; 004cdfa3
    SUB ESP,0x40                        ; 004cdfa4
    MOV EAX,[0x01cc5174]                ; 004cdfa7 | DAT_01cc5174
    MOV EDX,dword ptr [0x01c039b8]      ; 004cdfac | g_RelativeX
    MOV dword ptr [EAX*0x4 + 0x1cc52e0],EDX ; 004cdfb2
    MOV EDX,dword ptr [0x01c039bc]      ; 004cdfb9 | g_RelativeY
    MOV dword ptr [EAX*0x4 + 0x1cc5308],EDX ; 004cdfbf
    MOV EDX,dword ptr [0x01c039c0]      ; 004cdfc6 | g_RelativeZ
    MOV dword ptr [EAX*0x4 + 0x1cc5330],EDX ; 004cdfcc
    MOV EDX,dword ptr [0x01c039dc]      ; 004cdfd3 | DAT_01c039dc
    MOV dword ptr [EAX*0x4 + 0x1cc5358],EDX ; 004cdfd9
    MOV EDX,dword ptr [0x01c039e0]      ; 004cdfe0 | DAT_01c039e0
    MOV dword ptr [EAX*0x4 + 0x1cc5380],EDX ; 004cdfe6
    MOV EDX,dword ptr [0x01c039e4]      ; 004cdfed | DAT_01c039e4
    MOV dword ptr [EAX*0x4 + 0x1cc53a8],EDX ; 004cdff3
    MOV EDX,dword ptr [0x01c039e8]      ; 004cdffa | g_TransformMatrix
    MOV dword ptr [EAX*0x4 + 0x1cc5178],EDX ; 004ce000
    MOV EDX,dword ptr [0x01c039ec]      ; 004ce007 | g_TransformMatrix.m[0].y
    MOV dword ptr [EAX*0x4 + 0x1cc51a0],EDX ; 004ce00d
    MOV EDX,dword ptr [0x01c039f0]      ; 004ce014 | g_TransformMatrix.m[0].z
    MOV dword ptr [EAX*0x4 + 0x1cc51c8],EDX ; 004ce01a
    MOV EDX,dword ptr [0x01c039f4]      ; 004ce021 | g_TransformMatrix.m[1].x
    MOV dword ptr [EAX*0x4 + 0x1cc51f0],EDX ; 004ce027
    MOV EDX,dword ptr [0x01c039f8]      ; 004ce02e | g_TransformMatrix.m[1].y
    MOV dword ptr [EAX*0x4 + 0x1cc5218],EDX ; 004ce034
    MOV EDX,dword ptr [0x01c039fc]      ; 004ce03b | g_TransformMatrix.m[1].z
    MOV dword ptr [EAX*0x4 + 0x1cc5240],EDX ; 004ce041
    MOV EDX,dword ptr [0x01c03a00]      ; 004ce048 | g_TransformMatrix.m[2].x
    MOV dword ptr [EAX*0x4 + 0x1cc5268],EDX ; 004ce04e
    MOV EDX,dword ptr [0x01c03a04]      ; 004ce055 | g_TransformMatrix.m[2].y
    MOV dword ptr [EAX*0x4 + 0x1cc5290],EDX ; 004ce05b
    MOV EDX,dword ptr [0x01c03a08]      ; 004ce062 | g_TransformMatrix.m[2].z
    FILD dword ptr [ESP + 0x5c]         ; 004ce068
    MOV dword ptr [EAX*0x4 + 0x1cc52b8],EDX ; 004ce06c
    MOV EAX,[0x01c039b8]                ; 004ce073 | g_RelativeX
    FILD dword ptr [ESP + 0x54]         ; 004ce078
    MOV dword ptr [ESP + 0x14],EAX      ; 004ce07c
    MOV EAX,[0x01c039bc]                ; 004ce080 | g_RelativeY
    FLD ST1                             ; 004ce085
    MOV dword ptr [ESP + 0x18],EAX      ; 004ce087
    MOV EAX,[0x01c039c0]                ; 004ce08b | g_RelativeZ
    FXCH                                ; 004ce090
    MOV dword ptr [ESP + 0x1c],EAX      ; 004ce092
    CALL crt_math.c_atan2_FUN_00566c81  ; 004ce096
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FLD ST1                             ; 004ce09b
    FILD dword ptr [ESP + 0x58]         ; 004ce09d
    CALL crt_math.c_atan2_FUN_00566c81  ; 004ce0a1
        ;   XREF to: 00566c81 (UNCONDITIONAL_CALL)  ; float10 crt_math.c_atan2_FUN_00566c81(float10 y, float10 x)
    FSTP ST2                            ; 004ce0a6
        ;   Label: LAB_004ce0a6
    FXCH                                ; 004ce0a8
    FCHS                                ; 004ce0aa
    FLD double ptr [0x005882b3]         ; 004ce0ac | DAT_005882b3
    FXCH                                ; 004ce0b2
    FMUL ST1                            ; 004ce0b4
    FXCH ST2                            ; 004ce0b6
    FMULP                               ; 004ce0b8
    FXCH                                ; 004ce0ba
    FLD double ptr [0x005882bb]         ; 004ce0bc | DAT_005882bb
    FXCH                                ; 004ce0c2
    FMUL ST1                            ; 004ce0c4
    FXCH ST2                            ; 004ce0c6
    FMULP                               ; 004ce0c8
    FXCH                                ; 004ce0ca
    CALL crt_math.c_round_FUN_00563a30  ; 004ce0cc
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    FISTP dword ptr [ESP + 0x8]         ; 004ce0d1
    MOV EDX,dword ptr [ESP + 0x8]       ; 004ce0d5
    CALL crt_math.c_round_FUN_00563a30  ; 004ce0d9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EDX                            ; 004ce0de
    FISTP dword ptr [ESP + 0x14]        ; 004ce0df
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004ce0e3
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    MOV dword ptr [ESP + 0x30],EAX      ; 004ce0e8
    ADD ESP,0x4                         ; 004ce0ec
    MOV ECX,dword ptr [ESP + 0x8]       ; 004ce0ef
    PUSH ECX                            ; 004ce0f3 | LAB_004ce0a6
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004ce0f4
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV dword ptr [ESP + 0x24],EAX      ; 004ce0f9
    ADD ESP,0x4                         ; 004ce0fd
    PUSH 0x0                            ; 004ce100
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004ce102
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    ADD ESP,0x4                         ; 004ce107
    PUSH 0x0                            ; 004ce10a
    MOV EBP,EAX                         ; 004ce10c
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004ce10e
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    ADD ESP,0x4                         ; 004ce113
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ce116
    PUSH ESI                            ; 004ce11a
    MOV EBX,EAX                         ; 004ce11b
    CALL engine_matrix.c_interpolatedSin_FUN_004cca60 ; 004ce11d
        ;   XREF to: 004cca60 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedSin_FUN_004cca60(int angle)
    MOV dword ptr [ESP + 0x38],EAX      ; 004ce122
    ADD ESP,0x4                         ; 004ce126
    PUSH ESI                            ; 004ce129
    CALL engine_matrix.c_interpolatedCos_FUN_004ccaa0 ; 004ce12a
        ;   XREF to: 004ccaa0 (UNCONDITIONAL_CALL)  ; int engine_matrix.c_interpolatedCos_FUN_004ccaa0(int angle)
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ce12f
    ADD ESP,0x4                         ; 004ce133
    MOV EAX,EBX                         ; 004ce136
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce138
    IMUL EDX                            ; 004ce13c
    SHRD EAX,EDX,0x10                   ; 004ce13e
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ce142
    MOV ECX,EAX                         ; 004ce146
    MOV EAX,EBP                         ; 004ce148
    IMUL EDX                            ; 004ce14a
    SHRD EAX,EDX,0x10                   ; 004ce14c
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ce150
    IMUL EDX                            ; 004ce154
    SHRD EAX,EDX,0x10                   ; 004ce156
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce15a
    ADD ECX,EAX                         ; 004ce15e
    NEG EDX                             ; 004ce160
    MOV EAX,EBP                         ; 004ce162
    MOV dword ptr [ESP + 0x30],ECX      ; 004ce164
    IMUL EDX                            ; 004ce168
    SHRD EAX,EDX,0x10                   ; 004ce16a
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ce16e
    MOV ECX,EAX                         ; 004ce172
    MOV EAX,EBX                         ; 004ce174
    IMUL EDX                            ; 004ce176
    SHRD EAX,EDX,0x10                   ; 004ce178
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ce17c
    IMUL EDX                            ; 004ce180
    SHRD EAX,EDX,0x10                   ; 004ce182
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ce186
    ADD ECX,EAX                         ; 004ce18a
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ce18c
    MOV dword ptr [ESP + 0x28],ECX      ; 004ce190
    IMUL EDX                            ; 004ce194
    SHRD EAX,EDX,0x10                   ; 004ce196
    MOV ECX,EAX                         ; 004ce19a
    MOV EDX,EBP                         ; 004ce19c
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ce19e
    IMUL EDX                            ; 004ce1a2
    SHRD EAX,EDX,0x10                   ; 004ce1a4
    MOV EDI,EAX                         ; 004ce1a8
    MOV EDX,EBX                         ; 004ce1aa
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ce1ac
    IMUL EDX                            ; 004ce1b0
    SHRD EAX,EDX,0x10                   ; 004ce1b2
    MOV ESI,EAX                         ; 004ce1b6
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004ce1b8
    MOV EDX,dword ptr [ESP + 0x34]      ; 004ce1bc
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ce1c0
    NEG EAX                             ; 004ce1c4
    NEG EDX                             ; 004ce1c6
    MOV dword ptr [ESP + 0x3c],EAX      ; 004ce1c8
    MOV EAX,EBX                         ; 004ce1cc
    IMUL EDX                            ; 004ce1ce
    SHRD EAX,EDX,0x10                   ; 004ce1d0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ce1d4
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce1d8
    MOV EAX,EBP                         ; 004ce1dc
    IMUL EDX                            ; 004ce1de
    SHRD EAX,EDX,0x10                   ; 004ce1e0
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce1e4
    IMUL EDX                            ; 004ce1e8
    SHRD EAX,EDX,0x10                   ; 004ce1ea
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce1ee
    ADD EDX,EAX                         ; 004ce1f2
    MOV EAX,dword ptr [ESP + 0x34]      ; 004ce1f4
    MOV dword ptr [ESP + 0x24],EDX      ; 004ce1f8
    MOV EDX,EBP                         ; 004ce1fc
    IMUL EDX                            ; 004ce1fe
    SHRD EAX,EDX,0x10                   ; 004ce200
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004ce204
    MOV EBP,EAX                         ; 004ce208
    MOV EAX,EBX                         ; 004ce20a
    IMUL EDX                            ; 004ce20c
    SHRD EAX,EDX,0x10                   ; 004ce20e
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce212
    IMUL EDX                            ; 004ce216
    SHRD EAX,EDX,0x10                   ; 004ce218
    MOV EDX,dword ptr [ESP + 0x38]      ; 004ce21c
    ADD EBP,EAX                         ; 004ce220
    MOV EAX,dword ptr [ESP + 0x20]      ; 004ce222
    IMUL EDX                            ; 004ce226
    SHRD EAX,EDX,0x10                   ; 004ce228
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ce22c
    MOV EBX,EAX                         ; 004ce230
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ce232
    IMUL EDX                            ; 004ce236
    SHRD EAX,EDX,0x10                   ; 004ce238
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ce23c
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce240
    MOV EAX,EDI                         ; 004ce244
    IMUL EDX                            ; 004ce246
    SHRD EAX,EDX,0x10                   ; 004ce248
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce24c
    ADD EDX,EAX                         ; 004ce250
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ce252
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce256
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ce25a
    IMUL EDX                            ; 004ce25e
    SHRD EAX,EDX,0x10                   ; 004ce260
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce264
    ADD EDX,EAX                         ; 004ce268
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ce26a
    MOV dword ptr [0x01c039b8],EDX      ; 004ce26e | g_RelativeX
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ce274
    IMUL EDX                            ; 004ce278
    SHRD EAX,EDX,0x10                   ; 004ce27a
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ce27e
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce282
    MOV EAX,ESI                         ; 004ce286
    IMUL EDX                            ; 004ce288
    SHRD EAX,EDX,0x10                   ; 004ce28a
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce28e
    ADD EDX,EAX                         ; 004ce292
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce294
    MOV EAX,EBP                         ; 004ce298
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ce29a
    IMUL EDX                            ; 004ce29e
    SHRD EAX,EDX,0x10                   ; 004ce2a0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce2a4
    ADD EDX,EAX                         ; 004ce2a8
    MOV dword ptr [0x01c039bc],EDX      ; 004ce2aa | g_RelativeY
    MOV EDX,dword ptr [ESP + 0x14]      ; 004ce2b0
    MOV EAX,ECX                         ; 004ce2b4
    IMUL EDX                            ; 004ce2b6
    SHRD EAX,EDX,0x10                   ; 004ce2b8
    MOV EDX,dword ptr [ESP + 0x18]      ; 004ce2bc
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce2c0
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ce2c4
    IMUL EDX                            ; 004ce2c8
    SHRD EAX,EDX,0x10                   ; 004ce2ca
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce2ce
    ADD EDX,EAX                         ; 004ce2d2
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce2d4
    MOV EAX,EBX                         ; 004ce2d8
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004ce2da
    IMUL EDX                            ; 004ce2de
    SHRD EAX,EDX,0x10                   ; 004ce2e0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce2e4
    ADD EDX,EAX                         ; 004ce2e8
    MOV dword ptr [0x01c039c0],EDX      ; 004ce2ea | g_RelativeZ
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce2f0 | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x30]      ; 004ce2f6
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004ce2fa
    IMUL EDX                            ; 004ce301
    SHRD EAX,EDX,0x10                   ; 004ce303
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce307 | DAT_01cc5174
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce30d
    MOV EAX,EDI                         ; 004ce311
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004ce313
    IMUL EDX                            ; 004ce31a
    SHRD EAX,EDX,0x10                   ; 004ce31c
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce320
    ADD EDX,EAX                         ; 004ce324
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce326
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce32a | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x24]      ; 004ce330
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004ce334
    IMUL EDX                            ; 004ce33b
    SHRD EAX,EDX,0x10                   ; 004ce33d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce341
    ADD EDX,EAX                         ; 004ce345
    MOV dword ptr [0x01c039dc],EDX      ; 004ce347 | DAT_01c039dc
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce34d | DAT_01cc5174
    MOV EAX,dword ptr [ESP + 0x28]      ; 004ce353
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004ce357
    IMUL EDX                            ; 004ce35e
    SHRD EAX,EDX,0x10                   ; 004ce360
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce364 | DAT_01cc5174
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce36a
    MOV EAX,ESI                         ; 004ce36e
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004ce370
    IMUL EDX                            ; 004ce377
    SHRD EAX,EDX,0x10                   ; 004ce379
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce37d
    ADD EDX,EAX                         ; 004ce381
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce383
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce387 | DAT_01cc5174
    MOV EAX,EBP                         ; 004ce38d
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004ce38f
    IMUL EDX                            ; 004ce396
    SHRD EAX,EDX,0x10                   ; 004ce398
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce39c
    ADD EDX,EAX                         ; 004ce3a0
    MOV dword ptr [0x01c039e0],EDX      ; 004ce3a2 | DAT_01c039e0
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce3a8 | DAT_01cc5174
    MOV EAX,ECX                         ; 004ce3ae
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5358] ; 004ce3b0
    IMUL EDX                            ; 004ce3b7
    SHRD EAX,EDX,0x10                   ; 004ce3b9
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce3bd | DAT_01cc5174
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce3c3
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ce3c7
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc5380] ; 004ce3cb
    IMUL EDX                            ; 004ce3d2
    SHRD EAX,EDX,0x10                   ; 004ce3d4
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce3d8
    ADD EDX,EAX                         ; 004ce3dc
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce3de
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce3e2 | DAT_01cc5174
    MOV EAX,EBX                         ; 004ce3e8
    MOV EDX,dword ptr [EDX*0x4 + 0x1cc53a8] ; 004ce3ea
    IMUL EDX                            ; 004ce3f1
    SHRD EAX,EDX,0x10                   ; 004ce3f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce3f7
    ADD EDX,EAX                         ; 004ce3fb
    MOV dword ptr [0x01c039e4],EDX      ; 004ce3fd | DAT_01c039e4
    MOV EAX,[0x01cc5174]                ; 004ce403 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ce408
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004ce40c
    IMUL EDX                            ; 004ce413
    SHRD EAX,EDX,0x10                   ; 004ce415
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce419
    MOV EAX,[0x01cc5174]                ; 004ce41d | DAT_01cc5174
    MOV EDX,EDI                         ; 004ce422
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004ce424
    IMUL EDX                            ; 004ce42b
    SHRD EAX,EDX,0x10                   ; 004ce42d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce431
    ADD EDX,EAX                         ; 004ce435
    MOV EAX,[0x01cc5174]                ; 004ce437 | DAT_01cc5174
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce43c
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ce440
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004ce444
    IMUL EDX                            ; 004ce44b
    SHRD EAX,EDX,0x10                   ; 004ce44d
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce451
    ADD EDX,EAX                         ; 004ce455
    MOV EAX,[0x01cc5174]                ; 004ce457 | DAT_01cc5174
    MOV dword ptr [0x01c039e8],EDX      ; 004ce45c | g_TransformMatrix
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ce462
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004ce466
    IMUL EDX                            ; 004ce46d
    SHRD EAX,EDX,0x10                   ; 004ce46f
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce473
    MOV EAX,[0x01cc5174]                ; 004ce477 | DAT_01cc5174
    MOV EDX,EDI                         ; 004ce47c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004ce47e
    IMUL EDX                            ; 004ce485
    SHRD EAX,EDX,0x10                   ; 004ce487
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce48b
    ADD EDX,EAX                         ; 004ce48f
    MOV EAX,[0x01cc5174]                ; 004ce491 | DAT_01cc5174
    MOV dword ptr [ESP + 0xc],EDX       ; 004ce496
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ce49a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004ce49e
    IMUL EDX                            ; 004ce4a5
    SHRD EAX,EDX,0x10                   ; 004ce4a7
    MOV EDX,dword ptr [ESP + 0xc]       ; 004ce4ab
    ADD EDX,EAX                         ; 004ce4af
    MOV EAX,[0x01cc5174]                ; 004ce4b1 | DAT_01cc5174
    MOV dword ptr [0x01c039ec],EDX      ; 004ce4b6 | g_TransformMatrix.m[0].y
    MOV EDX,dword ptr [ESP + 0x30]      ; 004ce4bc
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004ce4c0
    IMUL EDX                            ; 004ce4c7
    SHRD EAX,EDX,0x10                   ; 004ce4c9
    MOV dword ptr [ESP + 0xc],EAX       ; 004ce4cd
    MOV EAX,[0x01cc5174]                ; 004ce4d1 | DAT_01cc5174
    MOV EDX,EDI                         ; 004ce4d6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004ce4d8
    MOV EDI,dword ptr [ESP + 0xc]       ; 004ce4df
    IMUL EDX                            ; 004ce4e3
    SHRD EAX,EDX,0x10                   ; 004ce4e5
    ADD EDI,EAX                         ; 004ce4e9
    MOV EAX,[0x01cc5174]                ; 004ce4eb | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x24]      ; 004ce4f0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004ce4f4
    IMUL EDX                            ; 004ce4fb
    SHRD EAX,EDX,0x10                   ; 004ce4fd
    ADD EDI,EAX                         ; 004ce501
    MOV EAX,[0x01cc5174]                ; 004ce503 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ce508
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004ce50c
    MOV dword ptr [0x01c039f0],EDI      ; 004ce513 | g_TransformMatrix.m[0].z
    IMUL EDX                            ; 004ce519
    SHRD EAX,EDX,0x10                   ; 004ce51b
    MOV EDI,EAX                         ; 004ce51f
    MOV EAX,[0x01cc5174]                ; 004ce521 | DAT_01cc5174
    MOV EDX,ESI                         ; 004ce526
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004ce528
    IMUL EDX                            ; 004ce52f
    SHRD EAX,EDX,0x10                   ; 004ce531
    ADD EDI,EAX                         ; 004ce535
    MOV EAX,[0x01cc5174]                ; 004ce537 | DAT_01cc5174
    MOV EDX,EBP                         ; 004ce53c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004ce53e
    IMUL EDX                            ; 004ce545
    SHRD EAX,EDX,0x10                   ; 004ce547
    ADD EDI,EAX                         ; 004ce54b
    MOV dword ptr [0x01c039f4],EDI      ; 004ce54d | g_TransformMatrix.m[1].x
    MOV EAX,[0x01cc5174]                ; 004ce553 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ce558
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004ce55c
    IMUL EDX                            ; 004ce563
    SHRD EAX,EDX,0x10                   ; 004ce565
    MOV EDI,EAX                         ; 004ce569
    MOV EAX,[0x01cc5174]                ; 004ce56b | DAT_01cc5174
    MOV EDX,ESI                         ; 004ce570
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004ce572
    IMUL EDX                            ; 004ce579
    SHRD EAX,EDX,0x10                   ; 004ce57b
    ADD EDI,EAX                         ; 004ce57f
    MOV EAX,[0x01cc5174]                ; 004ce581 | DAT_01cc5174
    MOV EDX,EBP                         ; 004ce586
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004ce588
    IMUL EDX                            ; 004ce58f
    SHRD EAX,EDX,0x10                   ; 004ce591
    ADD EDI,EAX                         ; 004ce595
    MOV EAX,[0x01cc5174]                ; 004ce597 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x28]      ; 004ce59c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004ce5a0
    MOV dword ptr [0x01c039f8],EDI      ; 004ce5a7 | g_TransformMatrix.m[1].y
    IMUL EDX                            ; 004ce5ad
    SHRD EAX,EDX,0x10                   ; 004ce5af
    MOV EDI,EAX                         ; 004ce5b3
    MOV EAX,[0x01cc5174]                ; 004ce5b5 | DAT_01cc5174
    MOV EDX,ESI                         ; 004ce5ba
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004ce5bc
    IMUL EDX                            ; 004ce5c3
    SHRD EAX,EDX,0x10                   ; 004ce5c5
    ADD EDI,EAX                         ; 004ce5c9
    MOV EAX,[0x01cc5174]                ; 004ce5cb | DAT_01cc5174
    MOV EDX,EBP                         ; 004ce5d0
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004ce5d2
    IMUL EDX                            ; 004ce5d9
    SHRD EAX,EDX,0x10                   ; 004ce5db
    ADD EDI,EAX                         ; 004ce5df
    MOV EAX,[0x01cc5174]                ; 004ce5e1 | DAT_01cc5174
    MOV EDX,ECX                         ; 004ce5e6
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004ce5e8
    MOV dword ptr [0x01c039fc],EDI      ; 004ce5ef | g_TransformMatrix.m[1].z
    IMUL EDX                            ; 004ce5f5
    SHRD EAX,EDX,0x10                   ; 004ce5f7
    MOV ESI,EAX                         ; 004ce5fb
    MOV EAX,[0x01cc5174]                ; 004ce5fd | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ce602
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004ce606
    IMUL EDX                            ; 004ce60d
    SHRD EAX,EDX,0x10                   ; 004ce60f
    ADD ESI,EAX                         ; 004ce613
    MOV EAX,[0x01cc5174]                ; 004ce615 | DAT_01cc5174
    MOV EDX,EBX                         ; 004ce61a
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004ce61c
    IMUL EDX                            ; 004ce623
    SHRD EAX,EDX,0x10                   ; 004ce625
    ADD ESI,EAX                         ; 004ce629
    MOV EAX,[0x01cc5174]                ; 004ce62b | DAT_01cc5174
    MOV EDX,ECX                         ; 004ce630
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004ce632
    MOV dword ptr [0x01c03a00],ESI      ; 004ce639 | g_TransformMatrix.m[2].x
    IMUL EDX                            ; 004ce63f
    SHRD EAX,EDX,0x10                   ; 004ce641
    MOV ESI,EAX                         ; 004ce645
    MOV EAX,[0x01cc5174]                ; 004ce647 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ce64c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004ce650
    IMUL EDX                            ; 004ce657
    SHRD EAX,EDX,0x10                   ; 004ce659
    ADD ESI,EAX                         ; 004ce65d
    MOV EAX,[0x01cc5174]                ; 004ce65f | DAT_01cc5174
    MOV EDX,EBX                         ; 004ce664
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004ce666
    IMUL EDX                            ; 004ce66d
    SHRD EAX,EDX,0x10                   ; 004ce66f
    ADD ESI,EAX                         ; 004ce673
    MOV dword ptr [0x01c03a04],ESI      ; 004ce675 | g_TransformMatrix.m[2].y
    MOV EAX,[0x01cc5174]                ; 004ce67b | DAT_01cc5174
    MOV EDX,ECX                         ; 004ce680
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004ce682
    IMUL EDX                            ; 004ce689
    SHRD EAX,EDX,0x10                   ; 004ce68b
    MOV ECX,EAX                         ; 004ce68f
    MOV EAX,[0x01cc5174]                ; 004ce691 | DAT_01cc5174
    MOV EDX,dword ptr [ESP + 0x3c]      ; 004ce696
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004ce69a
    IMUL EDX                            ; 004ce6a1
    SHRD EAX,EDX,0x10                   ; 004ce6a3
    ADD ECX,EAX                         ; 004ce6a7
    MOV EAX,[0x01cc5174]                ; 004ce6a9 | DAT_01cc5174
    MOV EDX,EBX                         ; 004ce6ae
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004ce6b0
    IMUL EDX                            ; 004ce6b7
    SHRD EAX,EDX,0x10                   ; 004ce6b9
    MOV EDX,dword ptr [0x01cc5174]      ; 004ce6bd | DAT_01cc5174
    ADD ECX,EAX                         ; 004ce6c3
    INC EDX                             ; 004ce6c5
    MOV dword ptr [0x01c03a08],ECX      ; 004ce6c6 | g_TransformMatrix.m[2].z
    MOV dword ptr [0x01cc5174],EDX      ; 004ce6cc | DAT_01cc5174
    CMP EDX,0x9                         ; 004ce6d2
    JG 0x004ce6df                       ; 004ce6d5
        ;   XREF to: 004ce6df (CONDITIONAL_JUMP)  ; LAB_004ce6df
    ADD ESP,0x40                        ; 004ce6d7
    POP EBP                             ; 004ce6da
    POP EDI                             ; 004ce6db
    POP ESI                             ; 004ce6dc
    POP EBX                             ; 004ce6dd
    RET                                 ; 004ce6de
    MOV EBX,0x58828b                    ; 004ce6df | = "..\\engine\\matrix.c"
        ;   Label: LAB_004ce6df
    MOV ESI,0x4c6                       ; 004ce6e4
    PUSH 0x58829e                       ; 004ce6e9 | = "Matrix unbalance"
    MOV dword ptr [0x01cc4800],EBX      ; 004ce6ee | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ESI      ; 004ce6f4 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004ce6fa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004ce6ff
    ADD ESP,0x40                        ; 004ce702
    POP EBP                             ; 004ce705
    POP EDI                             ; 004ce706
    POP ESI                             ; 004ce707
    POP EBX                             ; 004ce708
    RET                                 ; 004ce709

