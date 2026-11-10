; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90(CDemonRenderer *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[59]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 at 004087ff
;   core_battery.cpp_CBattery_renderOpaque_FUN_0040f590 at 0040f5a5
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041f8e0 at 0041f940
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041f9f0 at 0041fa50
;   core_crate.cpp_CCrate_renderOpaque_FUN_00445fa0 at 00445fb5
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004540c0 at 004540d5
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045add0 at 0045adea
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045abd0 at 0045abe9
;   core_dlight.cpp_CDemonLight_renderCoronaGeometry_FUN_0045d170 at 0045d18d
;   core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70 at 0045ef9e
;   ... and 49 more
;
; Referenced Globals:
;   undefined4 DAT_005bc513
;
; Called Functions:
;   crt_math.c_round_FUN_005a3120
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046ce90
        ;   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046ce93
    FLD double ptr [0x005bc513]         ; 0046ce97 | DAT_005bc513
    FLD float ptr [EAX]                 ; 0046ce9d
    FMUL ST1                            ; 0046ce9f
    CALL crt_math.c_round_FUN_005a3120  ; 0046cea1
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x4]         ; 0046cea6
    FLD float ptr [EAX + 0x4]           ; 0046ceaa
    FMUL ST1                            ; 0046cead
    CALL crt_math.c_round_FUN_005a3120  ; 0046ceaf
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x8]         ; 0046ceb4
    FMUL float ptr [EAX + 0x8]          ; 0046ceb8
    MOV EAX,ESP                         ; 0046cebb
    CALL crt_math.c_round_FUN_005a3120  ; 0046cebd
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    PUSH EAX                            ; 0046cec2
    FISTP dword ptr [ESP + 0x10]        ; 0046cec3
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0046cec7
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004037e0()
    ADD ESP,0x4                         ; 0046cecc
    ADD ESP,0x10                        ; 0046cecf
    RET                                 ; 0046ced2

