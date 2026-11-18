; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SFollowSlotStruct * __cdecl core_muzzle_cpp_SFollowFormation_getSlots_FUN_0059e0f0(SFollowFormation *this_ptr)
;
; Parameters:
; SFollowFormation * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 at 0042560e
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0059e0f0
        ;   Label: core_muzzle.cpp_SFollowFormation_getSlots_FUN_0059e0f0
    ADD EAX,0x4                         ; 0059e0f4
    RET                                 ; 0059e0f7

