; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[8]:
;   core_boxactor.cpp_CLightActor_process_FUN_00422f90 at 004230b4
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004301e0 at 00430301
;   core_emitter.cpp_CEmitter_process_FUN_0049f310 at 0049f4a3
;   core_fire.cpp_CFireball_process_FUN_004ae300 at 004ae3b1
;   core_fire.cpp_CMuzzleFlash_init_FUN_004af340 at 004af384
;   core_keyactor.cpp_CKeyActor_process_FUN_004fc590 at 004fc61e
;   core_shadow.cpp_CShadow_process_FUN_0055de50 at 0055eab2
;   core_weapon.cpp_CWeapon_updateLighting_FUN_005adb20 at 005add3d
;
; Referenced Globals:
;   undefined4 DAT_01fe55d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01fe55d0]      ; 00551960 | DAT_01fe55d0
        ;   Label: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_00551960
    MOV ECX,dword ptr [ESP + 0x8]       ; 00551966
    CMP dword ptr [ECX + 0xc],0x100     ; 0055196a
    JL 0x00551978                       ; 00551971
        ;   XREF to: 00551978 (CONDITIONAL_JUMP)  ; LAB_00551978
    CMP EDX,0x64                        ; 00551973
    JL 0x0055197f                       ; 00551976
        ;   XREF to: 0055197f (CONDITIONAL_JUMP)  ; LAB_0055197f
    MOV dword ptr [0x01fe55d0],EDX      ; 00551978 | DAT_01fe55d0
        ;   Label: LAB_00551978
    RET                                 ; 0055197e
    INC EDX                             ; 0055197f
        ;   Label: LAB_0055197f
    MOV dword ptr [EDX*0x4 + 0x1fe55d0],ECX ; 00551980 | DAT_01fe55d0
    MOV dword ptr [0x01fe55d0],EDX      ; 00551987 | DAT_01fe55d0
    RET                                 ; 0055198d

