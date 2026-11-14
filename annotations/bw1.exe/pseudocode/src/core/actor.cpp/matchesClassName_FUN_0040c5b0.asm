; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchesClassName_FUN_0040c5b0(CDemonActorType *type_ptr,char *class_name)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[1]:
;   core_actor.cpp_isOfClass_FUN_0040c550 at 0040c56f
;
; Called Functions:
;   core_actor.cpp_matchClassExpression_FUN_0040c490
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040c5b0
        ;   Label: core_actor.cpp_matchesClassName_FUN_0040c5b0
    PUSH EAX                            ; 0040c5b4
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c5b5
    PUSH EDX                            ; 0040c5b9
    CALL core_actor.cpp_matchClassExpression_FUN_0040c490 ; 0040c5ba
        ;   XREF to: 0040c490 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040c490(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c5bf
    TEST EAX,EAX                        ; 0040c5c2
    SETG AL                             ; 0040c5c4
    AND EAX,0xff                        ; 0040c5c7
    RET                                 ; 0040c5cc

