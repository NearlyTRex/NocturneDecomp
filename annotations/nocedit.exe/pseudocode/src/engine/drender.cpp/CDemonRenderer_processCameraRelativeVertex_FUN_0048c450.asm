; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450 (CDemonRenderer *this_ptr,CVector3f *world_position)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   world_position
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[77]:
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 at 00408b0f
;   core_anvil.cpp_CAnvil_FUN_00411ec0 at 00411ee5
;   core_baron.cpp_CBaron_renderTransparent_FUN_00413ae0 at 00413b87
;   core_battery.cpp_FUN_00417f80 at 00417f94
;   core_boxactor.cpp_CBoxActor_renderOpaque_FUN_00421e00 at 00421e5b
;   core_boxactor.cpp_CBoxActor_renderTransparent_FUN_00421ef0 at 00421f28
;   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 at 0043cab0
;   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 at 0043d70a
;   core_course.cpp_FUN_00443760 at 0044394a
;   core_course.cpp_FUN_00443bc0 at 00443d30
;   ... and 67 more
;
; Referenced Globals:
;   double g_WorldToCameraScale = 256
;
; Called Functions:
;   crt_math.c_round_FUN_005fe6b0
;   engine_3d.c_processCameraRelativePoint_FUN_004037e0
;
; *****************************************************************************

section .text

    SUB ESP,0x10                        ; 0048c450
        ;   Label: engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
    MOV EAX,dword ptr [ESP + 0x18]      ; 0048c453
    FLD double ptr [0x00622015]         ; 0048c457 | g_WorldToCameraScale
    FLD float ptr [EAX]                 ; 0048c45d
    FMUL ST1                            ; 0048c45f
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c461
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x4]         ; 0048c466
    FLD float ptr [EAX + 0x4]           ; 0048c46a
    FMUL ST1                            ; 0048c46d
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c46f
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    FISTP dword ptr [ESP + 0x8]         ; 0048c474
    FMUL float ptr [EAX + 0x8]          ; 0048c478
    MOV EAX,ESP                         ; 0048c47b
    CALL crt_math.c_round_FUN_005fe6b0  ; 0048c47d
        ;   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_005fe6b0(double value)
    PUSH EAX                            ; 0048c482
    FISTP dword ptr [ESP + 0x10]        ; 0048c483
    CALL engine_3d.c_processCameraRelativePoint_FUN_004037e0 ; 0048c487
        ;   XREF to: 004037e0 (UNCONDITIONAL_CALL)  ; SMRGLHeaderExtended * engine_3d.c_processCameraRelativePoint_FUN_004037e0(CQuaternion4f * input_point)
    ADD ESP,0x4                         ; 0048c48c
    ADD ESP,0x10                        ; 0048c48f
    RET                                 ; 0048c492

