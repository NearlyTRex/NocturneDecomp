; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30(CDemonRenderer *this_ptr,CVector3f *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[10]:
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0044ce80 at 0044cea8
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00451350 at 004514a2
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520 at 0045055c
;   core_dlight.cpp_FUN_0044f0b0 at 0044f225
;   core_dlight.cpp_FUN_0044f9b0 at 0044f9e1
;   core_fire.cpp_CGunFlame_render_FUN_00488580 at 00488660
;   core_fire.cpp_CLaserBeam_render_FUN_00485a90 at 00485b5a
;   core_set.cpp_CDemonSet_buildDisplayList_FUN_0050d2d0 at 0050d317
;   core_set.cpp_FUN_0050e080 at 0050e097
;   core_terrain.cpp_CTerrain_render_FUN_00549310 at 00549336
;
; Referenced Globals:
;   double DOUBLE_0057dc6d = 0.00390625
;
; Called Functions:
;   engine_matrix.c_getCameraOrigin_FUN_004ce760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460d30
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
    PUSH ESI                            ; 00460d31
    PUSH EBP                            ; 00460d32
    MOV EBP,ESP                         ; 00460d33
    SUB ESP,0x10                        ; 00460d35
    AND ESP,0xfffffff8                  ; 00460d38
    MOV EBX,dword ptr [EBP + 0x14]      ; 00460d3b
    MOV ESI,ESP                         ; 00460d3e
    CALL engine_matrix.c_getCameraOrigin_FUN_004ce760 ; 00460d40
        ;   XREF to: 004ce760 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraOrigin_FUN_004ce760(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 00460d45
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d48
    FLD double ptr [0x0057dc6d]         ; 00460d4c | DOUBLE_0057dc6d
    FILD dword ptr [ESP + 0xc]          ; 00460d52
    FMUL ST1                            ; 00460d56
    FSTP float ptr [EBX]                ; 00460d58
    MOV EAX,dword ptr [ESP + 0x4]       ; 00460d5a
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d5e
    FILD dword ptr [ESP + 0xc]          ; 00460d62
    FMUL ST1                            ; 00460d66
    FSTP float ptr [EBX + 0x4]          ; 00460d68
    MOV EAX,dword ptr [ESP + 0x8]       ; 00460d6b
    MOV dword ptr [ESP + 0xc],EAX       ; 00460d6f
    FILD dword ptr [ESP + 0xc]          ; 00460d73
    FMULP                               ; 00460d77
    MOV EAX,EBX                         ; 00460d79
    FSTP float ptr [EBX + 0x8]          ; 00460d7b
    MOV ESP,EBP                         ; 00460d7e
    POP EBP                             ; 00460d80
    POP ESI                             ; 00460d81
    POP EBX                             ; 00460d82
    RET                                 ; 00460d83

