; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_castToClassHash_FUN_0040c790(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[151]:
;   core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0 at 00408e35
;   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 at 0040a7c2
;   core_ammo.cpp_CAmmo_propertyActionCallback_FUN_004112b0 at 004112bc
;   core_ammo.cpp_CAmmo_propertyDisplayCallback_FUN_00411200 at 00411212
;   core_ammobox.cpp_CAmmoBox_propertyActionFunc_FUN_00411ab0 at 00411abc
;   core_ammobox.cpp_CAmmoBox_propertyDisplayCallback_FUN_00411a30 at 00411a42
;   core_baron.cpp_CBaronWeapon_FUN_00413f20 at 00413f5f
;   core_baron.cpp_CBaron_FUN_004135e0 at 00413667
;   core_baron.cpp_CBaron_engageTarget_FUN_00413470 at 004134a1
;   core_batman.cpp_CBatman_process_FUN_00416870 at 004170f6
;   ... and 141 more
;
; Called Functions:
;   core_actor.cpp_isOfClassHash_FUN_0040c760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c790
        ;   Label: core_actor.cpp_castToClassHash_FUN_0040c790
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040c791
    TEST EBX,EBX                        ; 0040c795
    JNZ 0x0040c79d                      ; 0040c797
        ;   XREF to: 0040c79d (CONDITIONAL_JUMP)  ; LAB_0040c79d
    XOR EAX,EAX                         ; 0040c799
    POP EBX                             ; 0040c79b
        ;   Label: LAB_0040c79b
    RET                                 ; 0040c79c
    MOV EDX,dword ptr [ESP + 0xc]       ; 0040c79d
        ;   Label: LAB_0040c79d
    PUSH EDX                            ; 0040c7a1
    PUSH EBX                            ; 0040c7a2
    CALL core_actor.cpp_isOfClassHash_FUN_0040c760 ; 0040c7a3
        ;   XREF to: 0040c760 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClassHash_FUN_0040c760(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0040c7a8
    TEST EAX,EAX                        ; 0040c7ab
    JZ 0x0040c79b                       ; 0040c7ad
        ;   XREF to: 0040c79b (CONDITIONAL_JUMP)  ; LAB_0040c79b
    MOV EAX,EBX                         ; 0040c7af
    POP EBX                             ; 0040c7b1
    RET                                 ; 0040c7b2

