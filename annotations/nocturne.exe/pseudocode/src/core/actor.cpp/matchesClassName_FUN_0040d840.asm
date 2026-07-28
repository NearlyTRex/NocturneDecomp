; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_matchesClassName_FUN_0040d840(CDemonActorType *type_ptr,char *class_name)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[1]:
;   core_actor.cpp_isOfClass_FUN_0040d7e0 at 0040d7ff
;
; Called Functions:
;   core_actor.cpp_matchClassExpression_FUN_0040d720
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040d840
        ;   Label: core_actor.cpp_matchesClassName_FUN_0040d840
    PUSH EAX                            ; 0040d844
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d845
    PUSH EDX                            ; 0040d849
    CALL core_actor.cpp_matchClassExpression_FUN_0040d720 ; 0040d84a
        ;   XREF to: 0040d720 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040d720(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040d84f
    TEST EAX,EAX                        ; 0040d852
    SETG AL                             ; 0040d854
    AND EAX,0xff                        ; 0040d857
    RET                                 ; 0040d85c

