; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_render_FUN_00549310(int *param_1)
;
; Local Variables:
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   FUN_00509a80 at 00509de0
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_00507c80 at 00507de6
;
; Referenced Globals:
;   undefined4 DAT_00596cd5
;   undefined4 DAT_005ae704
;   undefined4 DAT_005ba8ec
;   undefined4 DAT_01b4d738
;   undefined4 DAT_02dd10cc
;
; Called Functions:
;   core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0
;   core_ground.cpp_CGround_render_FUN_004b2110
;   crt_math.c_round_FUN_00563a30
;   engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00549310
        ;   Label: core_terrain.cpp_CTerrain_render_FUN_00549310
    PUSH ESI                            ; 00549311
    PUSH EDI                            ; 00549312
    PUSH EBP                            ; 00549313
    MOV EBP,ESP                         ; 00549314
    SUB ESP,0x1c                        ; 00549316
    AND ESP,0xfffffff8                  ; 00549319
    CMP dword ptr [0x02dd10cc],0x0      ; 0054931c | DAT_02dd10cc
    JNZ 0x0054932c                      ; 00549323
        ;   XREF to: 0054932c (CONDITIONAL_JUMP)  ; LAB_0054932c
    MOV ESP,EBP                         ; 00549325
    POP EBP                             ; 00549327
    POP EDI                             ; 00549328
    POP ESI                             ; 00549329
    POP EBX                             ; 0054932a
    RET                                 ; 0054932b
    MOV EAX,ESP                         ; 0054932c
        ;   Label: LAB_0054932c
    PUSH EAX                            ; 0054932e
    MOV ECX,dword ptr [0x005ae704]      ; 0054932f | DAT_005ae704
    PUSH ECX                            ; 00549335 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30 ; 00549336
        ;   XREF to: 00460d30 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30()
    ADD ESP,0x8                         ; 0054933b
    MOV EBX,0x40800                     ; 0054933e
    PUSH EBX                            ; 00549343
    XOR ESI,ESI                         ; 00549344
    PUSH ESI                            ; 00549346
    MOV EDI,dword ptr [0x005ba8ec]      ; 00549347 | DAT_005ba8ec
    PUSH EDI                            ; 0054934d
    MOV dword ptr [ESP + 0x18],EBX      ; 0054934e
    MOV dword ptr [ESP + 0x20],ESI      ; 00549352
    CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0 ; 00549356
        ;   XREF to: 004b21b0 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_getHeightAtPosition_FUN_004b21b0()
    ADD ESP,0xc                         ; 0054935b
    FLD double ptr [0x00596cd5]         ; 0054935e | DAT_00596cd5
    FLD float ptr [ESP]                 ; 00549364
    FMUL ST1                            ; 00549367
    FLD float ptr [ESP + 0x4]           ; 00549369
    FMUL ST2                            ; 0054936d
    FLD float ptr [ESP + 0x8]           ; 0054936f
    FMULP ST3                           ; 00549373
    MOV EDX,EAX                         ; 00549375
    MOV ECX,dword ptr [ESP + 0xc]       ; 00549377
    MOV EBX,dword ptr [ESP + 0x14]      ; 0054937b
    MOV dword ptr [ESP + 0x10],EAX      ; 0054937f
    FXCH                                ; 00549383
    CALL crt_math.c_round_FUN_00563a30  ; 00549385
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 0054938a
    CALL crt_math.c_round_FUN_00563a30  ; 0054938c
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    FXCH                                ; 00549391
    FISTP dword ptr [ESP + 0x18]        ; 00549393
    MOV EAX,dword ptr [ESP + 0x18]      ; 00549397
    FISTP dword ptr [ESP + 0x18]        ; 0054939b
    ADD ECX,EAX                         ; 0054939f
    MOV EAX,dword ptr [ESP + 0x18]      ; 005493a1
    CALL crt_math.c_round_FUN_00563a30  ; 005493a5
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_00563a30()
    ADD EAX,EDX                         ; 005493aa
    FISTP dword ptr [ESP + 0x18]        ; 005493ac
    MOV dword ptr [ESP + 0x10],EAX      ; 005493b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 005493b4
    MOV dword ptr [ESP + 0xc],ECX       ; 005493b8
    ADD EBX,EAX                         ; 005493bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005493be
    MOV dword ptr [ESP + 0x14],EBX      ; 005493c1
    MOV ESI,EBX                         ; 005493c5
    SUB ESI,dword ptr [EAX]             ; 005493c7
    LEA EAX,[ESP + 0xc]                 ; 005493c9
    PUSH EAX                            ; 005493cd
    MOV EDI,dword ptr [0x005ae704]      ; 005493ce | DAT_005ae704
    PUSH EDI                            ; 005493d4 | DAT_01b4d738
    MOV dword ptr [ESP + 0x1c],ESI      ; 005493d5
    CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0 ; 005493d9
        ;   XREF to: 004606e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_004606e0()
    ADD ESP,0x8                         ; 005493de
    MOV EAX,[0x005ba8ec]                ; 005493e1 | DAT_005ba8ec
    PUSH EAX                            ; 005493e6
    CALL core_ground.cpp_CGround_render_FUN_004b2110 ; 005493e7
        ;   XREF to: 004b2110 (UNCONDITIONAL_CALL)  ; undefined core_ground.cpp_CGround_render_FUN_004b2110()
    ADD ESP,0x4                         ; 005493ec
    MOV EAX,ESP                         ; 005493ef
    PUSH EAX                            ; 005493f1
    MOV EDX,dword ptr [0x005ae704]      ; 005493f2 | DAT_005ae704
    PUSH EDX                            ; 005493f8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700 ; 005493f9
        ;   XREF to: 00460700 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700()
    ADD ESP,0x8                         ; 005493fe
    MOV ESP,EBP                         ; 00549401
    POP EBP                             ; 00549403
    POP EDI                             ; 00549404
    POP ESI                             ; 00549405
    POP EBX                             ; 00549406
    RET                                 ; 00549407

