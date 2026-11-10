; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[63]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 at 004087bf
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040e7b0 at 0040e7d5
;   core_baron.cpp_CBaron_renderTransparent_FUN_004101f0 at 00410297
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414500 at 00414515
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_004224f0 at 00422550
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00422600 at 00422638
;   core_crate.cpp_CCrate_renderOpaque_FUN_004493e0 at 004493f5
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_00457f70 at 00457f85
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_0045ec60 at 0045ec7a
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_0045ea60 at 0045ea79
;   ... and 53 more
;
; Referenced Globals:
;   undefined4 DAT_005db37c
;
; Called Functions:
;   crt_math.c_round_FUN_005c03a0
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 004837b0
        ;   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004837b3
    FLD double ptr [0x005db37c]         ; 004837b7 | DAT_005db37c
    FLD float ptr [EAX]                 ; 004837bd
    FMUL ST1                            ; 004837bf
    CALL crt_math.c_round_FUN_005c03a0  ; 004837c1
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x4]         ; 004837c6
    FLD float ptr [EAX + 0x4]           ; 004837ca
    FMUL ST1                            ; 004837cd
    CALL crt_math.c_round_FUN_005c03a0  ; 004837cf
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x8]         ; 004837d4
    FMUL float ptr [EAX + 0x8]          ; 004837d8
    MOV EAX,ESP                         ; 004837db
    CALL crt_math.c_round_FUN_005c03a0  ; 004837dd
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    PUSH EAX                            ; 004837e2
    FISTP dword ptr [ESP + 0x10]        ; 004837e3
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 004837e7
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_004037e0()
    ADD ESP,0x4                         ; 004837ec
    ADD ESP,0x10                        ; 004837ef
    RET                                 ; 004837f2

