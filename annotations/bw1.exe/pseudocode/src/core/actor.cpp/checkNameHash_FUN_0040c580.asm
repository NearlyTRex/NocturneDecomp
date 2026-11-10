; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_checkNameHash_FUN_0040c580(CDemonActorType *type_ptr,uint name_hash)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; uint             Stack[0x8]:4   name_hash
;
; XREF[2]:
;   core_actor.cpp_isOfClassHash_FUN_0040c5d0 at 0040c5ef
;   core_actor.cpp_matchClassTerm_FUN_0040c370 at 0040c469
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c580
        ;   Label: core_actor.cpp_checkNameHash_FUN_0040c580
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c584
    MOV EAX,ECX                         ; 0040c588
    TEST ECX,ECX                        ; 0040c58a
    JZ 0x0040c5a0                       ; 0040c58c
        ;   XREF to: 0040c5a0 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c58e
        ;   Label: LAB_0040c58e
    JZ 0x00408950                       ; 0040c591
        ;   XREF to: 00408950 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c597
    TEST EAX,EAX                        ; 0040c59a
    JNZ 0x0040c58e                      ; 0040c59c
        ;   XREF to: 0040c58e (CONDITIONAL_JUMP)  ; LAB_0040c58e
    MOV EAX,EAX                         ; 0040c59e

