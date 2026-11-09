; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[25]:
;   core_actor.cpp_CDemonActor_ctor_FUN_00408600 at 00408674
;   core_actor.cpp_FUN_00408890 at 004088aa
;   core_actor.cpp_FUN_00409d00 at 00409d39
;   core_baal.cpp_FUN_005968a0 at 005970c7
;   core_bodypart.cpp_FUN_00414550 at 004145d1
;   core_bodypart.cpp_FUN_00415350 at 0041549f
;   core_bodypart.cpp_FUN_00415e30 at 00416115
;   core_boxactor.cpp_CBoxActor_setPositionAndOrientation_FUN_00420290 at 004202ca
;   core_boxactor.cpp_FUN_0041f360 at 0041f5e9
;   core_charactr.cpp_FUN_0042c230 at 0042c8b4
;   ... and 15 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cfa0
;   core_dirmat.cpp_FUN_0045b550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004088f0
        ;   Label: core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
    SUB ESP,0x4                         ; 004088f1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004088f4
    PUSH dword ptr [EBX + 0x30]         ; 004088f8
    CALL core_actor.cpp_FUN_0040cfa0    ; 004088fb
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4],EAX       ; 00408900
    FLD float ptr [ESP + 0x4]           ; 00408904
    ADD ESP,0x4                         ; 00408908
    PUSH dword ptr [EBX + 0x38]         ; 0040890b
    FSTP float ptr [EBX + 0x30]         ; 0040890e
    CALL core_actor.cpp_FUN_0040cfa0    ; 00408911
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4],EAX       ; 00408916
    FLD float ptr [ESP + 0x4]           ; 0040891a
    ADD ESP,0x4                         ; 0040891e
    PUSH dword ptr [EBX + 0x34]         ; 00408921
    FSTP float ptr [EBX + 0x38]         ; 00408924
    CALL core_actor.cpp_FUN_0040cfa0    ; 00408927
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cfa0()
    MOV dword ptr [ESP + 0x4],EAX       ; 0040892c
    FLD float ptr [ESP + 0x4]           ; 00408930
    ADD ESP,0x4                         ; 00408934
    LEA EAX,[EBX + 0x30]                ; 00408937
    PUSH EAX                            ; 0040893a
    ADD EBX,0x3c                        ; 0040893b
    PUSH EBX                            ; 0040893e
    FSTP float ptr [EBX + -0x8]         ; 0040893f
    CALL core_dirmat.cpp_FUN_0045b550   ; 00408942
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 00408947
    ADD ESP,0x4                         ; 0040894a
    POP EBX                             ; 0040894d
    RET                                 ; 0040894e

