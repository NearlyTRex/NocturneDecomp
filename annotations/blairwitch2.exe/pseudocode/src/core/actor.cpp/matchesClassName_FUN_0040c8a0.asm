; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchesClassName_FUN_0040c8a0(CDemonActorType *type_ptr,char *class_name)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[1]:
;   core_actor.cpp_isOfClass_FUN_0040c840 at 0040c85f
;
; Called Functions:
;   core_actor.cpp_matchClassExpression_FUN_0040c780
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040c8a0
        ;   Label: core_actor.cpp_matchesClassName_FUN_0040c8a0
    PUSH EAX                            ; 0040c8a4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c8a5
    PUSH EDX                            ; 0040c8a9
    CALL core_actor.cpp_matchClassExpression_FUN_0040c780 ; 0040c8aa
        ;   XREF to: 0040c780 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040c780(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c8af
    TEST EAX,EAX                        ; 0040c8b2
    SETG AL                             ; 0040c8b4
    AND EAX,0xff                        ; 0040c8b7
    RET                                 ; 0040c8bc

