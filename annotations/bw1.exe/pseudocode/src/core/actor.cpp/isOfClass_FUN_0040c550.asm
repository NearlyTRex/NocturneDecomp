; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_isOfClass_FUN_0040c550(CDemonActor *actor_ptr,char *class_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[74]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040c870 at 0040c909
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_00409f20 at 0040a1ba
;   core_ammo.cpp_CAmmo_canPickup_FUN_0040dfe0 at 0040dfea
;   core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040e4f0 at 0040e50a
;   core_barrier.cpp_CBarrier_getCollisionType_FUN_004109a0 at 004109cf
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 0041362a
;   core_battery.cpp_CBattery_canPickup_FUN_004144a0 at 004144aa
;   core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041c9a0 at 0041ce74
;   core_boxactor.cpp_CBoxActor_canPickup_FUN_00422c30 at 00422c52
;   core_carved.cpp_CCarved_isGrabbable_FUN_0042bd50 at 0042bd5a
;   ... and 64 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040c5b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c550
        ;   Label: core_actor.cpp_isOfClass_FUN_0040c550
    TEST EAX,EAX                        ; 0040c554
    JNZ 0x0040c559                      ; 0040c556
        ;   XREF to: 0040c559 (CONDITIONAL_JUMP)  ; LAB_0040c559
    RET                                 ; 0040c558
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c559
        ;   Label: LAB_0040c559
    PUSH EDX                            ; 0040c55d
    PUSH EAX                            ; 0040c55e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c55f
    CALL dword ptr [EDX + 0xcc]         ; 0040c565
    ADD ESP,0x4                         ; 0040c56b
    PUSH EAX                            ; 0040c56e
    CALL core_actor.cpp_matchesClassName_FUN_0040c5b0 ; 0040c56f
        ;   XREF to: 0040c5b0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchesClassName_FUN_0040c5b0(CDemonActorType * type_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040c574
    RET                                 ; 0040c577

