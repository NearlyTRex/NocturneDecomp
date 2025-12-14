; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[45]:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0 at 00408924
;   core_actor.cpp_CDemonActor_setPositionAndOrientation_FUN_00409fb0 at 00409ffd
;   core_actor.cpp_CDemonActor_setup_FUN_00408bb0 at 00408bd3
;   core_bodypart.cpp_CBodyPart_process_FUN_00419be0 at 00419d51
;   core_bodypart.cpp_CreateBodyPart_FUN_00418e10 at 00418e98
;   core_bodypart.cpp_FUN_0041a630 at 0041a8e1
;   core_boxactor.cpp_CBoxActor_process_FUN_004219e0 at 00421c95
;   core_boxactor.cpp_FUN_00422640 at 0042267a
;   core_bride.cpp_FUN_00423a30 at 004243b1
;   core_bugs.cpp_FUN_004278d0 at 00427916
;   ... and 35 more
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408c10
        ;   Label: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
    SUB ESP,0x4                         ; 00408c11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00408c14
    PUSH dword ptr [EBX + 0x30]         ; 00408c18
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00408c1b
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408c20
    FLD float ptr [ESP + 0x4]           ; 00408c24
    ADD ESP,0x4                         ; 00408c28
    PUSH dword ptr [EBX + 0x38]         ; 00408c2b
    FSTP float ptr [EBX + 0x30]         ; 00408c2e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00408c31
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408c36
    FLD float ptr [ESP + 0x4]           ; 00408c3a
    ADD ESP,0x4                         ; 00408c3e
    PUSH dword ptr [EBX + 0x34]         ; 00408c41
    FSTP float ptr [EBX + 0x38]         ; 00408c44
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00408c47
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x4],EAX       ; 00408c4c
    FLD float ptr [ESP + 0x4]           ; 00408c50
    ADD ESP,0x4                         ; 00408c54
    LEA EAX,[EBX + 0x30]                ; 00408c57
    PUSH EAX                            ; 00408c5a
    ADD EBX,0x3c                        ; 00408c5b
    PUSH EBX                            ; 00408c5e
    FSTP float ptr [EBX + -0x8]         ; 00408c5f
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30 ; 00408c62
        ;   XREF to: 00471d30 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00408c67
    ADD ESP,0x4                         ; 00408c6a
    POP EBX                             ; 00408c6d
    RET                                 ; 00408c6e

