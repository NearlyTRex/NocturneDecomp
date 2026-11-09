; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_FUN_0040c790(CDemonActor *actor_ptr,char *class_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[55]:
;   core_actor.cpp_FUN_00409f60 at 0040a0e8
;   core_actor.cpp_FUN_0040cab0 at 0040cb49
;   core_ammo.cpp_FUN_0040e080 at 0040e08a
;   core_ammobox.cpp_CAmmoBox_canPickup_FUN_0040e9e0 at 0040e9fa
;   core_barrier.cpp_CBarrier_getCollisionType_FUN_0040ec30 at 0040ec5f
;   core_battery.cpp_CBattery_canPickup_FUN_0040f530 at 0040f53a
;   core_boneguy.cpp_FUN_00418930 at 00418e04
;   core_boxactor.cpp_FUN_004200a0 at 004200b7
;   core_carved.cpp_FUN_00427bc0 at 00428387
;   core_carved.cpp_FUN_00428fc0 at 00428fca
;   ... and 45 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040c7f0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c790
        ;   Label: core_actor.cpp_FUN_0040c790
    TEST EAX,EAX                        ; 0040c794
    JNZ 0x0040c799                      ; 0040c796
        ;   XREF to: 0040c799 (CONDITIONAL_JUMP)  ; LAB_0040c799
    RET                                 ; 0040c798
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c799
        ;   Label: LAB_0040c799
    PUSH EDX                            ; 0040c79d
    PUSH EAX                            ; 0040c79e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c79f
    CALL dword ptr [EDX + 0xcc]         ; 0040c7a5
    ADD ESP,0x4                         ; 0040c7ab
    PUSH EAX                            ; 0040c7ae
    CALL core_actor.cpp_matchesClassName_FUN_0040c7f0 ; 0040c7af
        ;   XREF to: 0040c7f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchesClassName_FUN_0040c7f0()
    ADD ESP,0x8                         ; 0040c7b4
    RET                                 ; 0040c7b7

