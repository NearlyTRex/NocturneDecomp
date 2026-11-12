; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[39]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408790 at 00408817
;   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409e70 at 00409ea9
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80 at 00408a9a
;   core_bodypart.cpp_CBodyPart_applyRotation_FUN_00416d70 at 00417055
;   core_bodypart.cpp_CBodyPart_process_FUN_004162b0 at 004163ff
;   core_bodypart.cpp_createBodyPart_FUN_004154f0 at 00415571
;   core_boxactor.cpp_CBoxActor_process_FUN_0041c090 at 0041c368
;   core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_0041ce90 at 0041ceca
;   core_bride.cpp_CBride_process_FUN_0041dbe0 at 0041e613
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 at 00429019
;   ... and 29 more
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408ae0
        ;   Label: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
    SUB ESP,0x4                         ; 00408ae1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408ae4
    PUSH dword ptr [EBX + 0x30]         ; 00408ae8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00408aeb
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408af0
    FLD float ptr [ESP + 0x4]           ; 00408af4
    ADD ESP,0x4                         ; 00408af8
    PUSH dword ptr [EBX + 0x38]         ; 00408afb
    FSTP float ptr [EBX + 0x30]         ; 00408afe
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00408b01
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408b06
    FLD float ptr [ESP + 0x4]           ; 00408b0a
    ADD ESP,0x4                         ; 00408b0e
    PUSH dword ptr [EBX + 0x34]         ; 00408b11
    FSTP float ptr [EBX + 0x38]         ; 00408b14
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00408b17
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408b1c
    FLD float ptr [ESP + 0x4]           ; 00408b20
    ADD ESP,0x4                         ; 00408b24
    LEA EAX,[EBX + 0x30]                ; 00408b27
    PUSH EAX                            ; 00408b2a
    ADD EBX,0x3c                        ; 00408b2b
    PUSH EBX                            ; 00408b2e
    FSTP float ptr [EBX + -0x8]         ; 00408b2f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280 ; 00408b32
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00408b37
    ADD ESP,0x4                         ; 00408b3a
    POP EBX                             ; 00408b3d
    RET                                 ; 00408b3e

