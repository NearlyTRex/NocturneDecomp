; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_checkNameHash_FUN_0040c700(CDemonActorType * type_ptr, uint name_hash)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; uint             Stack[0x8]:4   name_hash
;
; XREF[2]:
;   core_actor.cpp_isOfClassHash_FUN_0040c760 at 0040c77f
;   core_actor.cpp_matchClassTerm_FUN_0040c4f0 at 0040c5e9
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c700
        ;   Label: core_actor.cpp_checkNameHash_FUN_0040c700
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c704
    MOV EAX,ECX                         ; 0040c708
    TEST ECX,ECX                        ; 0040c70a
    JZ 0x0040c720                       ; 0040c70c
        ;   XREF to: 0040c720 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c70e
        ;   Label: LAB_0040c70e
    JZ 0x0040c730                       ; 0040c711
        ;   XREF to: 0040c730 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c713
    TEST EAX,EAX                        ; 0040c716
    JNZ 0x0040c70e                      ; 0040c718 | LAB_0040c70e
        ;   XREF to: 0040c70e (CONDITIONAL_JUMP)
    LEA EAX,[EAX]                       ; 0040c71a

