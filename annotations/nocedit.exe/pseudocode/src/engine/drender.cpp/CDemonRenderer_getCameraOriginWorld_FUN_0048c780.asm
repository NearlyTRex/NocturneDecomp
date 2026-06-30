; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780(CDemonRenderer *this_ptr,CVector3f *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; Local Variables:
; CVector3i        Stack[-0x20]:12  local_20
;
; XREF[10]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00471400 at 00471428
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_004736c0 at 0047382e
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0 at 00475a13
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 00473fc1
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 at 00474b0c
;   core_fire.cpp_CGunFlame_render_FUN_004c50b0 at 004c5190
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c268a
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0056fbd0 at 0056fc15
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 005709f7
;   core_terrain.cpp_CTerrain_render_FUN_005e1f50 at 005e1f76
;
; Referenced Globals:
;   double g_CameraOriginScale = 0.00390625
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_0050e2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c780
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_0048c780
    PUSH ESI                            ; 0048c781
    PUSH EBP                            ; 0048c782
    MOV EBP,ESP                         ; 0048c783
    SUB ESP,0x10                        ; 0048c785
    AND ESP,0xfffffff8                  ; 0048c788
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048c78b
    MOV ESI,ESP                         ; 0048c78e
    CALL engine_matrix.c_getCameraOrigin_FUN_0050e2c0 ; 0048c790
        ;   XREF to: 0050e2c0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_0050e2c0(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 0048c795
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c798
    FLD double ptr [0x0062205d]         ; 0048c79c | g_CameraOriginScale
    FILD dword ptr [ESP + 0xc]          ; 0048c7a2
    FMUL ST1                            ; 0048c7a6
    FSTP float ptr [EBX]                ; 0048c7a8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c7aa
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c7ae
    FILD dword ptr [ESP + 0xc]          ; 0048c7b2
    FMUL ST1                            ; 0048c7b6
    FSTP float ptr [EBX + 0x4]          ; 0048c7b8
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048c7bb
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c7bf
    FILD dword ptr [ESP + 0xc]          ; 0048c7c3
    FMULP                               ; 0048c7c7
    MOV EAX,EBX                         ; 0048c7c9
    FSTP float ptr [EBX + 0x8]          ; 0048c7cb
    MOV ESP,EBP                         ; 0048c7ce
    POP EBP                             ; 0048c7d0
    POP ESI                             ; 0048c7d1
    POP EBX                             ; 0048c7d2
    RET                                 ; 0048c7d3

