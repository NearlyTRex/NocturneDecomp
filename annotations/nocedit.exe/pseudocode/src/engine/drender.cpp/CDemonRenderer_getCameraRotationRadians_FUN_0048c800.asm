; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CVector3f * __cdecl engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_0048c800(CDemonRenderer *this_ptr,CVector3f *output)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   output
; Local Variables:
; CVector3i        Stack[-0x20]:12  local_20
;
; XREF[11]:
;   core_dlight.cpp_CDemonLight_renderLightBloomQuad_FUN_00473a20 at 00473a64
;   core_dlight.cpp_CDemonLight_renderLightGlowSprites_FUN_00473f90 at 004743d2
;   core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0 at 00474ebd
;   core_fire.cpp_CExplosion_render_FUN_004c3b10 at 004c3b8a
;   core_fire.cpp_CGunFlame_render_FUN_004c50b0 at 004c512a
;   core_fire.cpp_CLaserBeam_render_FUN_004c25c0 at 004c29eb
;   core_fire.cpp_CLightningBolt_render_FUN_004c5720 at 004c5893
;   core_fire.cpp_CTrail_render_FUN_004c5e90 at 004c5f37
;   core_flame.cpp_CFlame_renderTransparent_FUN_004ca110 at 004ca6a5
;   core_set.cpp_CDemonSet_setupMirrorRendering_FUN_005709e0 at 00570a2a
;   ... and 1 more
;
; Referenced Globals:
;   double g_AngleToRadianScale = 0.000030517578125
;   double g_Pi_0062206d = 3.14159265350000
;
; Called Functions:
;   engine_matrix.c_getCameraRotation_FUN_0050e2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048c800
        ;   Label: engine_drender.cpp_CDemonRenderer_getCameraRotationRadians_FUN_0048c800
    PUSH ESI                            ; 0048c801
    PUSH EBP                            ; 0048c802
    MOV EBP,ESP                         ; 0048c803
    SUB ESP,0x10                        ; 0048c805
    AND ESP,0xfffffff8                  ; 0048c808
    MOV EBX,dword ptr [EBP + 0x14]      ; 0048c80b
    MOV ESI,ESP                         ; 0048c80e
    CALL engine_matrix.c_getCameraRotation_FUN_0050e2f0 ; 0048c810
        ;   XREF to: 0050e2f0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_getCameraRotation_FUN_0050e2f0(CVector3i * output)
    MOV EAX,dword ptr [ESP]             ; 0048c815
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c818
    FLD double ptr [0x00622065]         ; 0048c81c | g_AngleToRadianScale
    FILD dword ptr [ESP + 0xc]          ; 0048c822
    FMUL ST1                            ; 0048c826
    FLD double ptr [0x0062206d]         ; 0048c828 | g_Pi_0062206d
    FXCH                                ; 0048c82e
    FMUL ST1                            ; 0048c830
    FSTP float ptr [EBX]                ; 0048c832
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c834
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c838
    FILD dword ptr [ESP + 0xc]          ; 0048c83c
    FMUL ST2                            ; 0048c840
    FMUL ST1                            ; 0048c842
    FSTP float ptr [EBX + 0x8]          ; 0048c844
    MOV EAX,dword ptr [ESP + 0x8]       ; 0048c847
    MOV dword ptr [ESP + 0xc],EAX       ; 0048c84b
    FILD dword ptr [ESP + 0xc]          ; 0048c84f
    FMULP ST2                           ; 0048c853
    FMULP                               ; 0048c855
    MOV EAX,EBX                         ; 0048c857
    FSTP float ptr [EBX + 0x4]          ; 0048c859
    MOV ESP,EBP                         ; 0048c85c
    POP EBP                             ; 0048c85e
    POP ESI                             ; 0048c85f
    POP EBX                             ; 0048c860
    RET                                 ; 0048c861

