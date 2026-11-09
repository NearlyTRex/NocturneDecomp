; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_render_FUN_0059f3e0(CTerrain *this_ptr,int render_pass)
;
; Parameters:
; CTerrain *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_pass
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined        Stack[-0x2c]:1  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0054e3c0 at 0054e503
;   core_set.cpp_FUN_00550580 at 00550921
;
; Referenced Globals:
;   undefined4 DAT_005f88a5
;   undefined4 DAT_00612560
;   CGround* g_CGroundPtr = 01d06940
;   undefined4 DAT_01bc120c
;   undefined4 DAT_02c8ae6c
;
; Called Functions:
;   core_ground.cpp_CGround_getHeightAtPosition_FUN_004e8020
;   core_ground.cpp_CGround_render_FUN_004e7f80
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490
;   engine_drender.cpp_FUN_004834b0
;   engine_matrix.c_FUN_00483ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059f3e0
        ;   Label: core_terrain.cpp_CTerrain_render_FUN_0059f3e0
    PUSH ESI                            ; 0059f3e1
    PUSH EDI                            ; 0059f3e2
    PUSH EBP                            ; 0059f3e3
    MOV EBP,ESP                         ; 0059f3e4
    SUB ESP,0x28                        ; 0059f3e6
    AND ESP,0xfffffff8                  ; 0059f3e9
    CMP dword ptr [0x02c8ae6c],0x0      ; 0059f3ec | DAT_02c8ae6c
    JNZ 0x0059f3fc                      ; 0059f3f3
        ;   XREF to: 0059f3fc (CONDITIONAL_JUMP)  ; LAB_0059f3fc
    MOV ESP,EBP                         ; 0059f3f5
    POP EBP                             ; 0059f3f7
    POP EDI                             ; 0059f3f8
    POP ESI                             ; 0059f3f9
    POP EBX                             ; 0059f3fa
    RET                                 ; 0059f3fb
    MOV ECX,dword ptr [0x00612560]      ; 0059f3fc | DAT_00612560
        ;   Label: LAB_0059f3fc
    PUSH ECX                            ; 0059f402 | DAT_01bc120c
    LEA ESI,[ESP + 0x10]                ; 0059f403
    LEA EDI,[ESP + 0x4]                 ; 0059f407
    CALL engine_matrix.c_FUN_00483ae0   ; 0059f40b
        ;   XREF to: 00483ae0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_00483ae0()
    LEA ESI,[ESP + 0x10]                ; 0059f410
    ADD ESP,0x4                         ; 0059f414
    MOV EBX,0x40800                     ; 0059f417
    MOVSD ES:EDI,ESI                    ; 0059f41c
    MOVSD ES:EDI,ESI                    ; 0059f41d
    MOVSD ES:EDI,ESI                    ; 0059f41e
    PUSH EBX                            ; 0059f41f
    XOR ESI,ESI                         ; 0059f420
    PUSH ESI                            ; 0059f422
    MOV EDI,dword ptr [0x0061eecc]      ; 0059f423 | g_CGroundPtr
    PUSH EDI                            ; 0059f429
    MOV dword ptr [ESP + 0x24],EBX      ; 0059f42a
    MOV dword ptr [ESP + 0x2c],ESI      ; 0059f42e
    CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004e8020 ; 0059f432
        ;   XREF to: 004e8020 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getHeightAtPosition_FUN_004e8020(CGround * this_ptr, int world_x, int world_z)
    ADD ESP,0xc                         ; 0059f437
    FLD double ptr [0x005f88a5]         ; 0059f43a | DAT_005f88a5
    FLD float ptr [ESP]                 ; 0059f440
    FMUL ST1                            ; 0059f443
    FLD float ptr [ESP + 0x4]           ; 0059f445
    FMUL ST2                            ; 0059f449
    FLD float ptr [ESP + 0x8]           ; 0059f44b
    FMULP ST3                           ; 0059f44f
    MOV EDX,EAX                         ; 0059f451
    MOV ECX,dword ptr [ESP + 0x18]      ; 0059f453
    MOV EBX,dword ptr [ESP + 0x20]      ; 0059f457
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059f45b
    FXCH                                ; 0059f45f
    CALL crt_math.c_round_FUN_005c03a0  ; 0059f461
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0059f466
    CALL crt_math.c_round_FUN_005c03a0  ; 0059f468
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FXCH                                ; 0059f46d
    FISTP dword ptr [ESP + 0x24]        ; 0059f46f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059f473
    FISTP dword ptr [ESP + 0x24]        ; 0059f477
    ADD ECX,EAX                         ; 0059f47b
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059f47d
    CALL crt_math.c_round_FUN_005c03a0  ; 0059f481
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    ADD EAX,EDX                         ; 0059f486
    FISTP dword ptr [ESP + 0x24]        ; 0059f488
    MOV dword ptr [ESP + 0x1c],EAX      ; 0059f48c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0059f490
    MOV dword ptr [ESP + 0x18],ECX      ; 0059f494
    ADD EBX,EAX                         ; 0059f498
    MOV EAX,dword ptr [EBP + 0x14]      ; 0059f49a
    MOV dword ptr [ESP + 0x20],EBX      ; 0059f49d
    MOV ESI,EBX                         ; 0059f4a1
    SUB ESI,dword ptr [EAX]             ; 0059f4a3
    LEA EAX,[ESP + 0x18]                ; 0059f4a5
    PUSH EAX                            ; 0059f4a9
    MOV EDI,dword ptr [0x00612560]      ; 0059f4aa | DAT_00612560
    PUSH EDI                            ; 0059f4b0 | DAT_01bc120c
    MOV dword ptr [ESP + 0x28],ESI      ; 0059f4b1
    CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490 ; 0059f4b5
        ;   XREF to: 00483490 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_00483490(CDemonRenderer * this_ptr, CVector3i * origin)
    ADD ESP,0x8                         ; 0059f4ba
    MOV EAX,[0x0061eecc]                ; 0059f4bd | g_CGroundPtr
    PUSH EAX                            ; 0059f4c2
    CALL core_ground.cpp_CGround_render_FUN_004e7f80 ; 0059f4c3
        ;   XREF to: 004e7f80 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_render_FUN_004e7f80(CGround * this_ptr)
    ADD ESP,0x4                         ; 0059f4c8
    MOV EAX,ESP                         ; 0059f4cb
    PUSH EAX                            ; 0059f4cd
    MOV EDX,dword ptr [0x00612560]      ; 0059f4ce | DAT_00612560
    PUSH EDX                            ; 0059f4d4 | DAT_01bc120c
    CALL engine_drender.cpp_FUN_004834b0 ; 0059f4d5
        ;   XREF to: 004834b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_FUN_004834b0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0059f4da
    MOV ESP,EBP                         ; 0059f4dd
    POP EBP                             ; 0059f4df
    POP EDI                             ; 0059f4e0
    POP ESI                             ; 0059f4e1
    POP EBX                             ; 0059f4e2
    RET                                 ; 0059f4e3

