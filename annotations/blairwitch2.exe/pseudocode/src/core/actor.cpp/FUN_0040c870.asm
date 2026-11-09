; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_FUN_0040c870(CDemonActorType *type_ptr,uint name_hash)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; uint             Stack[0x8]:4   name_hash
;
; XREF[2]:
;   core_actor.cpp_isOfClassHash_FUN_0040c8c0 at 0040c8df
;   core_actor.cpp_matchClassTerm_FUN_0040c660 at 0040c759
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0040c870
        ;   Label: core_actor.cpp_FUN_0040c870
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c874
    MOV EAX,ECX                         ; 0040c878
    TEST ECX,ECX                        ; 0040c87a
    JZ 0x0040c890                       ; 0040c87c
        ;   XREF to: 0040c890 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x38]      ; 0040c87e
        ;   Label: LAB_0040c87e
    JZ 0x00408b80                       ; 0040c881
        ;   XREF to: 00408b80 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x28]      ; 0040c887
    TEST EAX,EAX                        ; 0040c88a
    JNZ 0x0040c87e                      ; 0040c88c
        ;   XREF to: 0040c87e (CONDITIONAL_JUMP)  ; LAB_0040c87e
    MOV EAX,EAX                         ; 0040c88e

