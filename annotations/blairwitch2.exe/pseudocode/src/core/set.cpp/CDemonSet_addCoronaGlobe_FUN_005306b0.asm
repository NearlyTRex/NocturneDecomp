; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(CDemonSet *this_ptr,CDemonGlobe *globe)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; CDemonGlobe *    Stack[0x8]:4   globe
;
; XREF[8]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d144
;   core_emitter.cpp_CEmitter_process_FUN_00486cb0 at 00486e43
;   core_fire.cpp_CFireball_process_FUN_00495960 at 00495a11
;   core_fire.cpp_FUN_004969a0 at 004969e4
;   core_keyactor.cpp_CKeyActor_process_FUN_004df1c0 at 004df24e
;   core_muzzle.cpp_CMuzzleEffect_init_FUN_0059d360 at 0059d3a4
;   core_shadow.cpp_FUN_0053c500 at 0053d023
;   core_weapon.cpp_CWeapon_updateLighting_FUN_00589fd0 at 0058a1ed
;
; Referenced Globals:
;   undefined4 DAT_01fc961c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01fc961c]      ; 005306b0 | DAT_01fc961c
        ;   Label: core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005306b0
    MOV ECX,dword ptr [ESP + 0x8]       ; 005306b6
    CMP dword ptr [ECX + 0xc],0x100     ; 005306ba
    JL 0x005306c8                       ; 005306c1
        ;   XREF to: 005306c8 (CONDITIONAL_JUMP)  ; LAB_005306c8
    CMP EDX,0x64                        ; 005306c3
    JL 0x005306cf                       ; 005306c6
        ;   XREF to: 005306cf (CONDITIONAL_JUMP)  ; LAB_005306cf
    MOV dword ptr [0x01fc961c],EDX      ; 005306c8 | DAT_01fc961c
        ;   Label: LAB_005306c8
    RET                                 ; 005306ce
    INC EDX                             ; 005306cf
        ;   Label: LAB_005306cf
    MOV dword ptr [EDX*0x4 + 0x1fc961c],ECX ; 005306d0 | DAT_01fc961c
    MOV dword ptr [0x01fc961c],EDX      ; 005306d7 | DAT_01fc961c
    RET                                 ; 005306dd

