; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_terrain_cpp_CTerrain_render_FUN_0057b860(CTerrain *this_ptr,int render_pass)
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
;   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0052d0e0 at 0052d223
;   core_set.cpp_FUN_0052f2a0 at 0052f641
;
; Referenced Globals:
;   undefined4 DAT_005ed549
;   undefined4 DAT_0060b280
;   CGround* g_CGroundPtr = 01cedd88
;   undefined4 DAT_02653650
;
; Called Functions:
;   core_ground.cpp_CGround_getHeightAtPosition_FUN_004cb7a0
;   core_ground.cpp_CGround_render_FUN_004cb700
;   crt_math.c_round_FUN_005b7ff0
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
;   engine_drender.cpp_FUN_0046b5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057b860
        ;   Label: core_terrain.cpp_CTerrain_render_FUN_0057b860
    PUSH ESI                            ; 0057b861
    PUSH EDI                            ; 0057b862
    PUSH EBP                            ; 0057b863
    MOV EBP,ESP                         ; 0057b864
    SUB ESP,0x28                        ; 0057b866
    AND ESP,0xfffffff8                  ; 0057b869
    CMP dword ptr [0x02653650],0x0      ; 0057b86c | DAT_02653650
    JNZ 0x0057b87c                      ; 0057b873
        ;   XREF to: 0057b87c (CONDITIONAL_JUMP)  ; LAB_0057b87c
    MOV ESP,EBP                         ; 0057b875
    POP EBP                             ; 0057b877
    POP EDI                             ; 0057b878
    POP ESI                             ; 0057b879
    POP EBX                             ; 0057b87a
    RET                                 ; 0057b87b
    MOV ECX,dword ptr [0x0060b280]      ; 0057b87c | DAT_0060b280
        ;   Label: LAB_0057b87c
    PUSH ECX                            ; 0057b882
    LEA ESI,[ESP + 0x10]                ; 0057b883
    LEA EDI,[ESP + 0x4]                 ; 0057b887
    CALL engine_drender.cpp_FUN_0046b5e0 ; 0057b88b
        ;   XREF to: 0046b5e0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_0046b5e0()
    LEA ESI,[ESP + 0x10]                ; 0057b890
    ADD ESP,0x4                         ; 0057b894
    MOV EBX,0x40800                     ; 0057b897
    MOVSD ES:EDI,ESI                    ; 0057b89c
    MOVSD ES:EDI,ESI                    ; 0057b89d
    MOVSD ES:EDI,ESI                    ; 0057b89e
    PUSH EBX                            ; 0057b89f
    XOR ESI,ESI                         ; 0057b8a0
    PUSH ESI                            ; 0057b8a2
    MOV EDI,dword ptr [0x00617a08]      ; 0057b8a3 | g_CGroundPtr
    PUSH EDI                            ; 0057b8a9
    MOV dword ptr [ESP + 0x24],EBX      ; 0057b8aa
    MOV dword ptr [ESP + 0x2c],ESI      ; 0057b8ae
    CALL core_ground.cpp_CGround_getHeightAtPosition_FUN_004cb7a0 ; 0057b8b2
        ;   XREF to: 004cb7a0 (UNCONDITIONAL_CALL)  ; int core_ground.cpp_CGround_getHeightAtPosition_FUN_004cb7a0(CGround * this_ptr, int world_x, int world_z)
    ADD ESP,0xc                         ; 0057b8b7
    FLD double ptr [0x005ed549]         ; 0057b8ba | DAT_005ed549
    FLD float ptr [ESP]                 ; 0057b8c0
    FMUL ST1                            ; 0057b8c3
    FLD float ptr [ESP + 0x4]           ; 0057b8c5
    FMUL ST2                            ; 0057b8c9
    FLD float ptr [ESP + 0x8]           ; 0057b8cb
    FMULP ST3                           ; 0057b8cf
    MOV EDX,EAX                         ; 0057b8d1
    MOV ECX,dword ptr [ESP + 0x18]      ; 0057b8d3
    MOV EBX,dword ptr [ESP + 0x20]      ; 0057b8d7
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057b8db
    FXCH                                ; 0057b8df
    CALL crt_math.c_round_FUN_005b7ff0  ; 0057b8e1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0057b8e6
    CALL crt_math.c_round_FUN_005b7ff0  ; 0057b8e8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FXCH                                ; 0057b8ed
    FISTP dword ptr [ESP + 0x24]        ; 0057b8ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057b8f3
    FISTP dword ptr [ESP + 0x24]        ; 0057b8f7
    ADD ECX,EAX                         ; 0057b8fb
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057b8fd
    CALL crt_math.c_round_FUN_005b7ff0  ; 0057b901
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    ADD EAX,EDX                         ; 0057b906
    FISTP dword ptr [ESP + 0x24]        ; 0057b908
    MOV dword ptr [ESP + 0x1c],EAX      ; 0057b90c
    MOV EAX,dword ptr [ESP + 0x24]      ; 0057b910
    MOV dword ptr [ESP + 0x18],ECX      ; 0057b914
    ADD EBX,EAX                         ; 0057b918
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057b91a
    MOV dword ptr [ESP + 0x20],EBX      ; 0057b91d
    MOV ESI,EBX                         ; 0057b921
    SUB ESI,dword ptr [EAX]             ; 0057b923
    LEA EAX,[ESP + 0x18]                ; 0057b925
    PUSH EAX                            ; 0057b929
    MOV EDI,dword ptr [0x0060b280]      ; 0057b92a | DAT_0060b280
    PUSH EDI                            ; 0057b930
    MOV dword ptr [ESP + 0x28],ESI      ; 0057b931
    CALL engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90 ; 0057b935
        ;   XREF to: 0046af90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90(CDemonRenderer * this_ptr, CVector3i * origin)
    ADD ESP,0x8                         ; 0057b93a
    MOV EAX,[0x00617a08]                ; 0057b93d | g_CGroundPtr
    PUSH EAX                            ; 0057b942
    CALL core_ground.cpp_CGround_render_FUN_004cb700 ; 0057b943
        ;   XREF to: 004cb700 (UNCONDITIONAL_CALL)  ; void core_ground.cpp_CGround_render_FUN_004cb700(CGround * this_ptr)
    ADD ESP,0x4                         ; 0057b948
    MOV EAX,ESP                         ; 0057b94b
    PUSH EAX                            ; 0057b94d
    MOV EDX,dword ptr [0x0060b280]      ; 0057b94e | DAT_0060b280
    PUSH EDX                            ; 0057b954
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 ; 0057b955
        ;   XREF to: 0046afb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 0057b95a
    MOV ESP,EBP                         ; 0057b95d
    POP EBP                             ; 0057b95f
    POP EDI                             ; 0057b960
    POP ESI                             ; 0057b961
    POP EBX                             ; 0057b962
    RET                                 ; 0057b963

