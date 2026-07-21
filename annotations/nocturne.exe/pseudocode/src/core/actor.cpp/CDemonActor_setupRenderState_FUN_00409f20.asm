; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(int param_1)
;
;
; XREF[63]:
;   FUN_0040ff80 at 0040ff95
;   FUN_004110f0 at 004111e8
;   FUN_00411e30 at 00411e3a
;   FUN_00414340 at 004143a8
;   FUN_00415760 at 0041577d
;   FUN_004161a0 at 004161e9
;   FUN_00416300 at 0041635e
;   FUN_00419c20 at 00419c3c
;   FUN_00421540 at 00421571
;   FUN_00426510 at 00426527
;   ... and 53 more
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f20
        ;   Label: core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
    ADD EAX,0x20                        ; 00409f24
    PUSH EAX                            ; 00409f27
    MOV EDX,dword ptr [0x005ae704]      ; 00409f28 | DAT_005ae704
    PUSH EDX                            ; 00409f2e | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 00409f2f
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00()
    ADD ESP,0x8                         ; 00409f34
    MOV EAX,dword ptr [ESP + 0x4]       ; 00409f37
    PUSH 0x0                            ; 00409f3b
    ADD EAX,0x30                        ; 00409f3d
    PUSH EAX                            ; 00409f40
    MOV ECX,dword ptr [0x005ae704]      ; 00409f41 | DAT_005ae704
    PUSH ECX                            ; 00409f47 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00409f48
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00409f4d
    RET                                 ; 00409f50

