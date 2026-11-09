; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_actor_cpp_isOfClassHash_FUN_0040c5d0(int param_1,uint param_2)
;
;
; XREF[4]:
;   core_actor.cpp_castToClassHash_FUN_0040c600 at 0040c613
;   core_event.cpp_resolveActorByName_FUN_004a1370 at 004a1405
;   core_script.cpp_getActor_FUN_005433c0 at 00543446
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00557db0 at 00557df8
;
; Called Functions:
;   core_actor.cpp_FUN_0040c580
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c5d0
        ;   Label: core_actor.cpp_isOfClassHash_FUN_0040c5d0
    TEST EAX,EAX                        ; 0040c5d4
    JNZ 0x0040c5d9                      ; 0040c5d6
        ;   XREF to: 0040c5d9 (CONDITIONAL_JUMP)  ; LAB_0040c5d9
    RET                                 ; 0040c5d8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c5d9
        ;   Label: LAB_0040c5d9
    PUSH EDX                            ; 0040c5dd
    PUSH EAX                            ; 0040c5de
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c5df
    CALL dword ptr [EDX + 0xcc]         ; 0040c5e5
    ADD ESP,0x4                         ; 0040c5eb
    PUSH EAX                            ; 0040c5ee
    CALL core_actor.cpp_FUN_0040c580    ; 0040c5ef
        ;   XREF to: 0040c580 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c580(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c5f4
    RET                                 ; 0040c5f7

