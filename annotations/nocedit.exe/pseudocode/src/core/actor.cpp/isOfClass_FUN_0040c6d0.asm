; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_isOfClass_FUN_0040c6d0(CDemonActor *actor_ptr,char *class_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[65]:
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a86a
;   core_ammo.cpp_CAmmo_canPickup_FUN_004111c0 at 004111ca
;   core_ammobox.cpp_CAmmoBox_canPickup_FUN_004119f0 at 00411a0a
;   core_barrier.cpp_CBarrier_FUN_004143a0 at 004143cf
;   core_batman.cpp_CBatman_process_FUN_00416870 at 004170c6
;   core_battery.cpp_FUN_00417f20 at 00417f2a
;   core_boneguy.cpp_FUN_0041cc40 at 0041d050
;   core_boxactor.cpp_CBoxActor_canPickup_FUN_004224b0 at 004224d2
;   core_charactr.cpp_CCharacter_FUN_0042b5b0 at 0042b5e4
;   core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_0042d5a0 at 0042d86a
;   ... and 55 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040c740
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c6d0
        ;   Label: core_actor.cpp_isOfClass_FUN_0040c6d0
    TEST EAX,EAX                        ; 0040c6d4
    JNZ 0x0040c6d9                      ; 0040c6d6
        ;   XREF to: 0040c6d9 (CONDITIONAL_JUMP)  ; LAB_0040c6d9
    RET                                 ; 0040c6d8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c6d9
        ;   Label: LAB_0040c6d9
    PUSH EDX                            ; 0040c6dd
    PUSH EAX                            ; 0040c6de
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c6df
    CALL dword ptr [EDX + 0xc4]         ; 0040c6e5
    ADD ESP,0x4                         ; 0040c6eb
    PUSH EAX                            ; 0040c6ee
    CALL core_actor.cpp_matchesClassName_FUN_0040c740 ; 0040c6ef
        ;   XREF to: 0040c740 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchesClassName_FUN_0040c740(CDemonActorType * type_ptr, char * class_name)
    ADD ESP,0x8                         ; 0040c6f4
    RET                                 ; 0040c6f7

