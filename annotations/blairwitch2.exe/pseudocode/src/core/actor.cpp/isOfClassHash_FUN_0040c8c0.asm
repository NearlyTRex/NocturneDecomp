; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c8c0(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[4]:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0 at 0040c903
;   core_event.cpp_resolveActorByName_FUN_00488d00 at 00488d95
;   core_script.cpp_getActor_FUN_00521290 at 00521316
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00536990 at 005369d8
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040c870
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c8c0
        ;   Label: core_actor.cpp_isOfClassHash_FUN_0040c8c0
    TEST EAX,EAX                        ; 0040c8c4
    JNZ 0x0040c8c9                      ; 0040c8c6
        ;   XREF to: 0040c8c9 (CONDITIONAL_JUMP)  ; LAB_0040c8c9
    RET                                 ; 0040c8c8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c8c9
        ;   Label: LAB_0040c8c9
    PUSH EDX                            ; 0040c8cd
    PUSH EAX                            ; 0040c8ce
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0040c8cf
    CALL dword ptr [EDX + 0xd4]         ; 0040c8d5
    ADD ESP,0x4                         ; 0040c8db
    PUSH EAX                            ; 0040c8de
    CALL core_actor.cpp_checkNameHash_FUN_0040c870 ; 0040c8df
        ;   XREF to: 0040c870 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_checkNameHash_FUN_0040c870(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c8e4
    RET                                 ; 0040c8e7

