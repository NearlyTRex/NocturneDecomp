; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_muzzle_cpp_SFollowFormation_setLeader_FUN_0059df80(SFollowFormation *this_ptr,CCharacter *leader)
;
; Parameters:
; SFollowFormation * Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   leader
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_ctor_FUN_00422340 at 0042278d
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0059df80
        ;   Label: core_muzzle.cpp_SFollowFormation_setLeader_FUN_0059df80
    MOV EAX,dword ptr [ESP + 0x8]       ; 0059df84
    MOV dword ptr [EDX],EAX             ; 0059df88
    RET                                 ; 0059df8a

