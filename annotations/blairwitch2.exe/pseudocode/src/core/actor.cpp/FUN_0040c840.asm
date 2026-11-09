; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_FUN_0040c840(CDemonActor *actor_ptr,char *class_name)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[60]:
;   core_actor.cpp_FUN_0040a050 at 0040a419
;   core_actor.cpp_FUN_0040cb60 at 0040cbed
;   core_ammo.cpp_CAmmo_canPickup_FUN_0040e490 at 0040e49a
;   core_ammobox.cpp_FUN_0040e950 at 0040e96a
;   core_barrier.cpp_FUN_00410e20 at 00410e4f
;   core_batman.cpp_FUN_00412f40 at 00413930
;   core_battery.cpp_CBattery_canPickup_FUN_004147b0 at 004147ba
;   core_boneguy.cpp_FUN_00419520 at 004199f4
;   core_boxactor.cpp_FUN_0041ccc0 at 0041cce2
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 at 00426ea4
;   ... and 50 more
;
; Called Functions:
;   core_actor.cpp_matchesClassName_FUN_0040c8a0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c840
        ;   Label: core_actor.cpp_FUN_0040c840
    TEST EAX,EAX                        ; 0040c844
    JNZ 0x0040c849                      ; 0040c846
        ;   XREF to: 0040c849 (CONDITIONAL_JUMP)  ; LAB_0040c849
    RET                                 ; 0040c848
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c849
        ;   Label: LAB_0040c849
    PUSH EDX                            ; 0040c84d
    PUSH EAX                            ; 0040c84e
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0040c84f
    CALL dword ptr [EDX + 0xd4]         ; 0040c855
    ADD ESP,0x4                         ; 0040c85b
    PUSH EAX                            ; 0040c85e
    CALL core_actor.cpp_matchesClassName_FUN_0040c8a0 ; 0040c85f
        ;   XREF to: 0040c8a0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_matchesClassName_FUN_0040c8a0()
    ADD ESP,0x8                         ; 0040c864
    RET                                 ; 0040c867

