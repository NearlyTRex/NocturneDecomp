; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_actor.cpp_matchesClassName_FUN_0040c740(CDemonActorType * type_ptr, char * class_name)
;
; Parameters:
; CDemonActorType * Stack[0x4]:4   type_ptr
; char *           Stack[0x8]:4   class_name
;
; XREF[2]:
;   core_actor.cpp_isOfClass_FUN_0040c6d0 at 0040c6ef
;   core_script.cpp_FUN_00562920 at 00562be2
;
; Called Functions:
;   core_actor.cpp_matchClassExpression_FUN_0040c610
;
; *****************************************************************************

section .text

    LEA EAX,[ESP + 0x8]                 ; 0040c740
        ;   Label: core_actor.cpp_matchesClassName_FUN_0040c740
    PUSH EAX                            ; 0040c744
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040c745
    PUSH EDX                            ; 0040c749
    CALL core_actor.cpp_matchClassExpression_FUN_0040c610 ; 0040c74a
        ;   XREF to: 0040c610 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_matchClassExpression_FUN_0040c610(CDemonActorType * type_ptr, char * * parse_pos)
    ADD ESP,0x8                         ; 0040c74f
    TEST EAX,EAX                        ; 0040c752
    SETG AL                             ; 0040c754
    AND EAX,0xff                        ; 0040c757
    RET                                 ; 0040c75c

