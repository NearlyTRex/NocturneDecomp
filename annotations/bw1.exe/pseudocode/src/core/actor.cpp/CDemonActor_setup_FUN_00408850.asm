; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_CDemonActor_setup_FUN_00408850(CDemonActor *this_ptr)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   this_ptr
;
; XREF[45]:
;   core_ammo.cpp_CAmmo_setup_FUN_0040dc50 at 0040dc67
;   core_ammobox.cpp_CAmmoBox_setup_FUN_0040e160 at 0040e175
;   core_anvil.cpp_CAnvil_setup_FUN_0040e660 at 0040e665
;   core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ef20 at 0040ef35
;   core_barrier.cpp_CBarrier_setup_FUN_00410880 at 00410886
;   core_bat.cpp_CBat_setup_FUN_00410c20 at 00410c4e
;   core_battery.cpp_CBattery_setup_FUN_00414470 at 00414476
;   core_bodypart.cpp_CBodyPart_setup_FUN_00419350 at 00419358
;   core_boxactor.cpp_CBoxActor_setup_FUN_00421de0 at 00421dea
;   core_chain.cpp_CChain_setup_FUN_00435820 at 0043582c
;   ... and 35 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00408850
        ;   Label: core_actor.cpp_CDemonActor_setup_FUN_00408850
    MOV EBX,dword ptr [ESP + 0x8]       ; 00408851
    MOV dword ptr [EBX + 0x114],0x0     ; 00408855
    PUSH EBX                            ; 0040885f
    MOV dword ptr [EBX + 0x11c],0x0     ; 00408860
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 0040886a
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0040886f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00408872
    PUSH EBX                            ; 00408878
    CALL dword ptr [EAX + 0xc4]         ; 00408879
    ADD ESP,0x4                         ; 0040887f
    TEST EAX,EAX                        ; 00408882
    JNZ 0x00408891                      ; 00408884
        ;   XREF to: 00408891 (CONDITIONAL_JUMP)  ; LAB_00408891
    POP EBX                             ; 00408886
    LEA EAX,[EAX]                       ; 00408887
    LEA EDX,[EDX]                       ; 0040888d
    PUSH 0x1                            ; 00408891
        ;   Label: LAB_00408891
    ADD EBX,0x20                        ; 00408893
    PUSH EBX                            ; 00408896
    PUSH EAX                            ; 00408897
    CALL core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0 ; 00408898
        ;   XREF to: 005334f0 (UNCONDITIONAL_CALL)  ; void core_path.cpp_CPathMap_updateIfNeeded_FUN_005334f0(CPathMap * this_ptr, CVector3f * source_position, int force_update)
    ADD ESP,0xc                         ; 0040889d
    POP EBX                             ; 004088a0
    RET                                 ; 004088a1

