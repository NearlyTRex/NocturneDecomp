; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c810(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[4]:
;   core_actor.cpp_castToClassHash_FUN_0040c840 at 0040c853
;   core_event.cpp_resolveActorByName_FUN_0048b950 at 0048b9e5
;   core_script.cpp_getActor_FUN_005289b0 at 00528a36
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_0053d770 at 0053d7b8
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040c7c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c810
        ;   Label: core_actor.cpp_isOfClassHash_FUN_0040c810
    TEST EAX,EAX                        ; 0040c814
    JNZ 0x0040c819                      ; 0040c816
        ;   XREF to: 0040c819 (CONDITIONAL_JUMP)  ; LAB_0040c819
    RET                                 ; 0040c818
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c819
        ;   Label: LAB_0040c819
    PUSH EDX                            ; 0040c81d
    PUSH EAX                            ; 0040c81e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c81f
    CALL dword ptr [EDX + 0xcc]         ; 0040c825
    ADD ESP,0x4                         ; 0040c82b
    PUSH EAX                            ; 0040c82e
    CALL core_actor.cpp_checkNameHash_FUN_0040c7c0 ; 0040c82f
        ;   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_checkNameHash_FUN_0040c7c0(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c834
    RET                                 ; 0040c837

