; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0(CDemonRenderer *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 at 004089df
;   core_anvil.cpp_CAnvil_renderOpaque_FUN_0040ec10 at 0040ec35
;   core_baron.cpp_CBaron_renderTransparent_FUN_00410670 at 00410717
;   core_battery.cpp_CBattery_renderOpaque_FUN_00414810 at 00414825
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_0041c580 at 0041c5e0
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_0041c690 at 0041c6c8
;   core_crate.cpp_FUN_0043a130 at 0043a145
;   core_dcube.cpp_CDemonCube_rotateVertices_FUN_004468c0 at 004468d5
;   core_dglobe.cpp_CDemonGlobe_renderCoronaTextured_FUN_00448b00 at 00448b1a
;   core_dglobe.cpp_CDemonGlobe_renderCorona_FUN_00448900 at 00448919
;   ... and 55 more
;
; Referenced Globals:
;   undefined4 DAT_005d1583
;
; Called Functions:
;   crt_math.c_round_FUN_005b7ff0
;   engine_3d.c_processCameraRelativePoint_FUN_00403830
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0046b2b0
        ;   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046b2b3
    FLD double ptr [0x005d1583]         ; 0046b2b7 | DAT_005d1583
    FLD float ptr [EAX]                 ; 0046b2bd
    FMUL ST1                            ; 0046b2bf
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b2c1
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x4]         ; 0046b2c6
    FLD float ptr [EAX + 0x4]           ; 0046b2ca
    FMUL ST1                            ; 0046b2cd
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b2cf
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x8]         ; 0046b2d4
    FMUL float ptr [EAX + 0x8]          ; 0046b2d8
    MOV EAX,ESP                         ; 0046b2db
    CALL crt_math.c_round_FUN_005b7ff0  ; 0046b2dd
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    PUSH EAX                            ; 0046b2e2
    FISTP dword ptr [ESP + 0x10]        ; 0046b2e3
    CALL engine_3d.c_processCameraRelativePoint_FUN_00403830 ; 0046b2e7
        ;   XREF to: 00403830 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_processCameraRelativePoint_FUN_00403830()
    ADD ESP,0x4                         ; 0046b2ec
    ADD ESP,0x10                        ; 0046b2ef
    RET                                 ; 0046b2f2

