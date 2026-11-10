; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408a80(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[44]:
;   core_ammo.cpp_CAmmo_setup_FUN_0040deb0 at 0040dec7
;   core_ammobox.cpp_CAmmoBox_setup_FUN_0040e5c0 at 0040e5d5
;   core_anvil.cpp_CAnvil_setup_FUN_0040eac0 at 0040eac5
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040f3a0 at 0040f3b5
;   core_barrier.cpp_CBarrier_setup_FUN_00410d00 at 00410d06
;   core_bat.cpp_CBat_setup_FUN_004110a0 at 004110ce
;   core_battery.cpp_CBattery_setup_FUN_00414780 at 00414786
;   core_bodypart.cpp_CBodyPart_setup_FUN_00415ee0 at 00415ee8
;   core_boxactor.cpp_CBoxActor_setup_FUN_0041be70 at 0041be7a
;   core_chain.cpp_FUN_005b48e0 at 005b48ec
;   ... and 34 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408a80
        ;   Label: core_actor.cpp_CDemonActor_setup_FUN_00408a80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408a81
    MOV dword ptr [EBX + 0x114],0x0     ; 00408a85
    PUSH EBX                            ; 00408a8f
    MOV dword ptr [EBX + 0x11c],0x0     ; 00408a90
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 00408a9a
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 00408a9f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00408aa2
    PUSH EBX                            ; 00408aa8
    CALL dword ptr [EAX + 0xcc]         ; 00408aa9
    ADD ESP,0x4                         ; 00408aaf
    TEST EAX,EAX                        ; 00408ab2
    JNZ 0x00408ac1                      ; 00408ab4
        ;   XREF to: 00408ac1 (CONDITIONAL_JUMP)  ; LAB_00408ac1
    POP EBX                             ; 00408ab6
    LEA EAX,[EAX]                       ; 00408ab7
    LEA EDX,[EDX]                       ; 00408abd
    PUSH 0x1                            ; 00408ac1
        ;   Label: LAB_00408ac1
    ADD EBX,0x20                        ; 00408ac3
    PUSH EBX                            ; 00408ac6
    PUSH EAX                            ; 00408ac7
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0 ; 00408ac8
        ;   XREF to: 005121a0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_005121a0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 00408acd
    POP EBX                             ; 00408ad0
    RET                                 ; 00408ad1

