; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_gasmask_cpp_CGasMask_FUN_004e5d70(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_0062dab5
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x62dab5                       ; 004e5d70 | = "CHero"
        ;   Label: core_gasmask.cpp_CGasMask_FUN_004e5d70
    MOV EDX,dword ptr [ESP + 0xc]       ; 004e5d75
    PUSH EDX                            ; 004e5d79
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004e5d7a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004e5d7f
    TEST EAX,EAX                        ; 004e5d82
    JZ 0x004e5d90                       ; 004e5d84
        ;   XREF to: 004e5d90 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004e5d86
    LEA EAX,[EAX]                       ; 004e5d8b
    MOV ECX,ECX                         ; 004e5d8e

