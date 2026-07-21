; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004980d0(int param_1,undefined4 param_2)
;
; Local Variables:
; undefined        Stack[-0x3ac]:1  local_3ac
; undefined        Stack[-0x37c]:1  local_37c
; undefined        Stack[-0x34c]:1  local_34c
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x2ec]:1  local_2ec
; undefined        Stack[-0x2bc]:1  local_2bc
; undefined        Stack[-0x28c]:1  local_28c
; undefined        Stack[-0x25c]:1  local_25c
; undefined        Stack[-0x22c]:1  local_22c
; undefined        Stack[-0x1fc]:1  local_1fc
; undefined        Stack[-0x1cc]:1  local_1cc
; undefined        Stack[-0x19c]:1  local_19c
; undefined        Stack[-0x16c]:1  local_16c
; undefined        Stack[-0x13c]:1  local_13c
; undefined        Stack[-0x10c]:1  local_10c
; undefined        Stack[-0xdc]:1  local_dc
; undefined        Stack[-0xac]:1  local_ac
; undefined        Stack[-0x7c]:1  local_7c
; undefined        Stack[-0x4c]:1  local_4c
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x34]:1  local_34
; undefined4       Stack[-0x2c]:4  local_2c
; undefined        Stack[-0x28]:1  local_28
; undefined4       Stack[-0x14]:4  local_14
; undefined        Stack[-0x10]:1  local_10
;
; XREF[1]:
;   FUN_00495a20 at 00496173
;
; Referenced Globals:
;   undefined4 s_CCrossbow_00582129+1
;   undefined4 DAT_0059dca4
;   undefined4 DAT_01c713c0
;   undefined4 DAT_01c713dc
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220
;   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0
;   core_xform.cpp_buildRotationX_FUN_0055c730
;   core_xform.cpp_buildRotationY_FUN_0055c7b0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004980d0
        ;   Label: FUN_004980d0
    PUSH ESI                            ; 004980d1
    PUSH EDI                            ; 004980d2
    PUSH EBP                            ; 004980d3
    MOV EBP,ESP                         ; 004980d4
    SUB ESP,0x39c                       ; 004980d6
    SUB EBP,0x7e                        ; 004980dc
    MOV EBX,dword ptr [EBP + 0x92]      ; 004980df
    PUSH dword ptr [EBP + 0x96]         ; 004980e5
    PUSH EBX                            ; 004980eb
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220 ; 004980ec
        ;   XREF to: 00429220 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00429220()
    ADD ESP,0x8                         ; 004980f1
    LEA EAX,[EBX + 0x30]                ; 004980f4
    PUSH EAX                            ; 004980f7
    LEA EAX,[EBX + 0x20]                ; 004980f8
    PUSH EAX                            ; 004980fb
    LEA EAX,[EBP + 0xfffffd42]          ; 004980fc
    PUSH EAX                            ; 00498102
    LEA ESI,[EBX + 0xfd0]               ; 00498103
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 00498109
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    FLD float ptr [EBX + 0x1fa44]       ; 0049810e
    LEA EAX,[EBX + 0x1f5a0]             ; 00498114
    ADD ESP,0xc                         ; 0049811a
    MOV dword ptr [EBP + 0x7a],EAX      ; 0049811d
    FCOMP float ptr [0x0059dca4]        ; 00498120 | DAT_0059dca4
    FNSTSW AX                           ; 00498126
    SAHF                                ; 00498128
    JC 0x00498352                       ; 00498129
        ;   XREF to: 00498352 (CONDITIONAL_JUMP)  ; LAB_00498352
    MOV EAX,dword ptr [EBP + 0x7a]      ; 0049812f
    PUSH 0x2                            ; 00498132
    MOV EAX,dword ptr [EAX + 0x330]     ; 00498134
    PUSH EAX                            ; 0049813a
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049813b
    CALL dword ptr [EDX + 0xd4]         ; 00498141
    ADD ESP,0x8                         ; 00498147
    PUSH 0x2dd1184                      ; 0049814a | DAT_02dd1184
    PUSH 0x1c71364                      ; 0049814f
    LEA EAX,[EBP + 0xffffff52]          ; 00498154
    PUSH EAX                            ; 0049815a
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0049815b
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    MOV EDX,dword ptr [0x01c713dc]      ; 00498160 | DAT_01c713dc
    LEA EAX,[EDX*0x4 + 0x0]             ; 00498166
    SUB EAX,EDX                         ; 0049816d
    SHL EAX,0x4                         ; 0049816f
    ADD ESP,0xc                         ; 00498172
    ADD EAX,ESI                         ; 00498175
    PUSH EAX                            ; 00498177
    LEA EAX,[EBP + 0xffffff52]          ; 00498178
    PUSH EAX                            ; 0049817e
    LEA ESI,[EBP + 0xffffff22]          ; 0049817f
    PUSH 0x3fc90fdb                     ; 00498185
    LEA EDI,[EBP + 0xfffffe02]          ; 0049818a
    CALL core_xform.cpp_buildRotationX_FUN_0055c730 ; 00498190
        ;   XREF to: 0055c730 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationX_FUN_0055c730()
    MOV ECX,0xc                         ; 00498195
    ADD ESP,0x4                         ; 0049819a
    LEA EAX,[EBP + 0xfffffe02]          ; 0049819d
    LEA ESI,[EBP + 0xffffff22]          ; 004981a3
    PUSH EAX                            ; 004981a9
    MOVSD.REP ES:EDI,ESI                ; 004981aa
    PUSH 0x3fc90fdb                     ; 004981ac
    LEA ESI,[EBP + 0xfffffce2]          ; 004981b1
    LEA EDI,[EBP + 0xfffffdd2]          ; 004981b7
    CALL core_xform.cpp_buildRotationY_FUN_0055c7b0 ; 004981bd
        ;   XREF to: 0055c7b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildRotationY_FUN_0055c7b0()
    MOV ECX,0xc                         ; 004981c2
    LEA ESI,[EBP + 0xfffffce2]          ; 004981c7
    LEA EAX,[EBP + 0xfffffdd2]          ; 004981cd
    ADD ESP,0x4                         ; 004981d3
    MOVSD.REP ES:EDI,ESI                ; 004981d6
    PUSH EAX                            ; 004981d8
    LEA ESI,[EBP + 0xfffffd12]          ; 004981d9
    LEA EDI,[EBP + 0xfffffe32]          ; 004981df
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004981e5
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004981ea
    LEA ESI,[EBP + 0xfffffd12]          ; 004981ef
    LEA EAX,[EBP + 0xfffffe32]          ; 004981f5
    ADD ESP,0x8                         ; 004981fb
    MOVSD.REP ES:EDI,ESI                ; 004981fe
    PUSH EAX                            ; 00498200
    LEA ESI,[EBP + -0x1e]               ; 00498201
    LEA EDI,[EBP + 0xfffffef2]          ; 00498204
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0049820a
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 0049820f
    LEA ESI,[EBP + -0x1e]               ; 00498214
    LEA EAX,[EBP + 0xfffffef2]          ; 00498217
    ADD ESP,0x8                         ; 0049821d
    MOVSD.REP ES:EDI,ESI                ; 00498220
    PUSH EAX                            ; 00498222
    LEA ESI,[EBP + 0x12]                ; 00498223
    LEA EDI,[EBP + 0xfffffda2]          ; 00498226
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 0049822c
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 00498231
    LEA ESI,[EBP + 0x12]                ; 00498236
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00498239
    ADD ESP,0x8                         ; 0049823c
    MOVSD.REP ES:EDI,ESI                ; 0049823f
    PUSH 0x58212a                       ; 00498241 | s_CCrossbow_00582129+1
    MOV EAX,dword ptr [EAX + 0x330]     ; 00498246
    PUSH EAX                            ; 0049824c
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 0049824d
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_isOfClass_FUN_0040d7e0()
    ADD ESP,0x8                         ; 00498252
    TEST EAX,EAX                        ; 00498255
    JZ 0x004982ac                       ; 00498257
        ;   XREF to: 004982ac (CONDITIONAL_JUMP)  ; LAB_004982ac
    LEA EAX,[EBP + 0x4e]                ; 00498259
    PUSH EAX                            ; 0049825c
    LEA EAX,[EBP + 0xfffffda2]          ; 0049825d
    PUSH EAX                            ; 00498263
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 00498264
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_getTranslation_FUN_0055bc00()
    ADD ESP,0x8                         ; 00498269
    LEA EAX,[EBP + 0x5a]                ; 0049826c
    PUSH EAX                            ; 0049826f
    LEA EAX,[EBP + 0xfffffda2]          ; 00498270
    PUSH EAX                            ; 00498276
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 00498277
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    FLD float ptr [EBX + 0x1fa78]       ; 0049827c
    FLD1                                ; 00498282
    LEA EAX,[EBP + 0x5a]                ; 00498284
    ADD ESP,0x8                         ; 00498287
    FSUBRP                              ; 0049828a
    PUSH EAX                            ; 0049828c
    FLD float ptr [EBP + 0x62]          ; 0049828d
    LEA EAX,[EBP + 0x4e]                ; 00498290
    FXCH                                ; 00498293
    FMUL ST1                            ; 00498295
    PUSH EAX                            ; 00498297
    LEA EAX,[EBP + 0xfffffda2]          ; 00498298
    FSTP ST1                            ; 0049829e
    PUSH EAX                            ; 004982a0
    FSTP float ptr [EBP + 0x62]         ; 004982a1
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 004982a4
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 004982a9
    LEA EAX,[EBP + 0xfffffd42]          ; 004982ac
        ;   Label: LAB_004982ac
    PUSH EAX                            ; 004982b2
    LEA EAX,[EBP + 0xfffffda2]          ; 004982b3
    PUSH EAX                            ; 004982b9
    LEA ESI,[EBP + -0x7e]               ; 004982ba
    LEA EDI,[EBP + 0xfffffd72]          ; 004982bd
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004982c3
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004982c8
    LEA ESI,[EBP + -0x7e]               ; 004982cd
    ADD ESP,0x8                         ; 004982d0
        ;   Label: LAB_004982d0
    MOVSD.REP ES:EDI,ESI                ; 004982d3
    LEA EAX,[EBP + 0x66]                ; 004982d5
    PUSH EAX                            ; 004982d8
    LEA EAX,[EBP + 0xfffffd72]          ; 004982d9
    PUSH EAX                            ; 004982df
    LEA ESI,[EBX + 0x1f5a0]             ; 004982e0
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 004982e6
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_getTranslation_FUN_0055bc00()
    MOV EDX,dword ptr [ESI + 0x330]     ; 004982eb
    FLD float ptr [EAX]                 ; 004982f1
    ADD ESP,0x8                         ; 004982f3
    FSTP float ptr [EDX + 0x20]         ; 004982f6
    MOV ECX,dword ptr [EAX + 0x4]       ; 004982f9
    MOV dword ptr [EDX + 0x24],ECX      ; 004982fc
    FLD float ptr [EAX + 0x8]           ; 004982ff
    LEA EAX,[EBP + 0x42]                ; 00498302
    PUSH EAX                            ; 00498305
    LEA EAX,[EBP + 0xfffffd72]          ; 00498306
    PUSH EAX                            ; 0049830c
    FSTP float ptr [EDX + 0x28]         ; 0049830d
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 00498310
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    MOV EDX,dword ptr [ESI + 0x330]     ; 00498315
    ADD EDX,0x30                        ; 0049831b
    ADD ESP,0x8                         ; 0049831e
    CMP EDX,EAX                         ; 00498321
    JZ 0x00498335                       ; 00498323
        ;   XREF to: 00498335 (CONDITIONAL_JUMP)  ; LAB_00498335
    MOV ECX,dword ptr [EAX]             ; 00498325
    MOV dword ptr [EDX],ECX             ; 00498327
    MOV ECX,dword ptr [EAX + 0x4]       ; 00498329
    MOV dword ptr [EDX + 0x4],ECX       ; 0049832c
    MOV ECX,dword ptr [EAX + 0x8]       ; 0049832f
    MOV dword ptr [EDX + 0x8],ECX       ; 00498332
    LEA EAX,[EBX + 0x1f5a0]             ; 00498335
        ;   Label: LAB_00498335
    MOV EAX,dword ptr [EAX + 0x330]     ; 0049833b
    PUSH EAX                            ; 00498341
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00498342
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    ADD ESP,0x4                         ; 00498347
    LEA ESP,[EBP + 0x7e]                ; 0049834a
    POP EBP                             ; 0049834d
    POP EDI                             ; 0049834e
    POP ESI                             ; 0049834f
    POP EBX                             ; 00498350
    RET                                 ; 00498351
    MOV EAX,dword ptr [EBP + 0x7a]      ; 00498352
        ;   Label: LAB_00498352
    PUSH 0x1                            ; 00498355
    MOV EAX,dword ptr [EAX + 0x330]     ; 00498357
    PUSH EAX                            ; 0049835d
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0049835e
    CALL dword ptr [EDX + 0xd4]         ; 00498364
    ADD ESP,0x8                         ; 0049836a
    PUSH 0x1c7137c                      ; 0049836d
    PUSH 0x1c71370                      ; 00498372
    LEA EAX,[EBP + 0xfffffe62]          ; 00498377
    PUSH EAX                            ; 0049837d
    CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0 ; 0049837e
        ;   XREF to: 0055afb0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0()
    ADD ESP,0xc                         ; 00498383
    LEA EAX,[EBP + 0xfffffd42]          ; 00498386
    MOV EDX,dword ptr [0x01c713c0]      ; 0049838c | DAT_01c713c0
    PUSH EAX                            ; 00498392
    LEA EAX,[EDX*0x4 + 0x0]             ; 00498393
    SUB EAX,EDX                         ; 0049839a
    SHL EAX,0x4                         ; 0049839c
    ADD EAX,ESI                         ; 0049839f
    PUSH EAX                            ; 004983a1
    LEA EAX,[EBP + 0xfffffe62]          ; 004983a2
    PUSH EAX                            ; 004983a8
    LEA ESI,[EBP + 0xfffffec2]          ; 004983a9
    LEA EDI,[EBP + 0xfffffe92]          ; 004983af
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004983b5
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004983ba
    LEA ESI,[EBP + 0xfffffec2]          ; 004983bf
    LEA EAX,[EBP + 0xfffffe92]          ; 004983c5
    ADD ESP,0x8                         ; 004983cb
    MOVSD.REP ES:EDI,ESI                ; 004983ce
    PUSH EAX                            ; 004983d0
    LEA ESI,[EBP + -0x4e]               ; 004983d1
    LEA EDI,[EBP + 0xfffffd72]          ; 004983d4
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00 ; 004983da
        ;   XREF to: 0055aa00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_multiplyMatrix3x4_FUN_0055aa00()
    MOV ECX,0xc                         ; 004983df
    LEA ESI,[EBP + -0x4e]               ; 004983e4
    JMP 0x004982d0                      ; 004983e7
        ;   XREF to: 004982d0 (UNCONDITIONAL_JUMP)  ; LAB_004982d0

