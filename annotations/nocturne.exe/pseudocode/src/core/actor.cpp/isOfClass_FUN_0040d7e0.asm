; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_isOfClass_FUN_0040d7e0(CDemonActor *actor_ptr,char *class_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[56]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040b300 at 0040b533
;   core_ammo.cpp_CAmmo_canPickup_FUN_0040ef70 at 0040ef7a
;   core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040f480 at 0040f49a
;   core_barrier.cpp_CBarrier_getCollisionType_FUN_00411860 at 0041188f
;   core_batman.cpp_CBatman_process_FUN_00413800 at 00414056
;   core_battery.cpp_CBattery_canPickup_FUN_00414e10 at 00414e1a
;   core_boneguy.cpp_CBoneGuy_FUN_004196b0 at 00419ac0
;   core_boxactor.cpp_CBoxActor_canPickup_FUN_0041f0b0 at 0041f0d2
;   core_charactr.cpp_CCharacter_FUN_00427730 at 00427764
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429730 at 004299fa
;   ... and 46 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040d840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d7e0
        ;   Label: core_actor.cpp_isOfClass_FUN_0040d7e0
    TEST EAX,EAX                        ; 0040d7e4
    JNZ 0x0040d7e9                      ; 0040d7e6
        ;   XREF to: 0040d7e9 (CONDITIONAL_JUMP)  ; LAB_0040d7e9
    RET                                 ; 0040d7e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d7e9
        ;   Label: LAB_0040d7e9
    PUSH EDX                            ; 0040d7ed
    PUSH EAX                            ; 0040d7ee
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040d7ef
    CALL dword ptr [EDX + 0xc4]         ; 0040d7f5
    ADD ESP,0x4                         ; 0040d7fb
    PUSH EAX                            ; 0040d7fe
    CALL core_actor.cpp_matchesClassName_FUN_0040d840 ; 0040d7ff
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchesClassName_FUN_0040d840(CDemonActorType * type_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040d804
    RET                                 ; 0040d807

