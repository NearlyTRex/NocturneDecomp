; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_actor_cpp_isOfClassHash_FUN_0040c760(CDemonActor *actor_ptr,uint class_name_hash)
;
; Parameters:
; CDemonActor *    Stack[0x4]:4   actor_ptr
; uint             Stack[0x8]:4   class_name_hash
;
; XREF[4]:
;   core_actor.cpp_castToClassHash_FUN_0040c790 at 0040c7a3
;   core_event.cpp_FUN_004aa400 at 004aa495
;   core_script.cpp_GetDemonActor_FUN_005594e0 at 00559566
;   core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20 at 00572e68
;
; Called Functions:
;   core_actor.cpp_checkNameHash_FUN_0040c700
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040c760
        ;   Label: core_actor.cpp_isOfClassHash_FUN_0040c760
    TEST EAX,EAX                        ; 0040c764
    JNZ 0x0040c769                      ; 0040c766
        ;   XREF to: 0040c769 (CONDITIONAL_JUMP)  ; LAB_0040c769
    RET                                 ; 0040c768
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c769
        ;   Label: LAB_0040c769
    PUSH EDX                            ; 0040c76d
    PUSH EAX                            ; 0040c76e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0040c76f
    CALL dword ptr [EDX + 0xc4]         ; 0040c775
    ADD ESP,0x4                         ; 0040c77b
    PUSH EAX                            ; 0040c77e
    CALL core_actor.cpp_checkNameHash_FUN_0040c700 ; 0040c77f
        ;   XREF to: 0040c700 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_checkNameHash_FUN_0040c700(CDemonActorType * type_ptr, uint name_hash)
    ADD ESP,0x8                         ; 0040c784
    RET                                 ; 0040c787

