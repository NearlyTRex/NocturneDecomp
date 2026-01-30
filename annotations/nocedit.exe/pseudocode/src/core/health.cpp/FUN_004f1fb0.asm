; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_health_cpp_FUN_004f1fb0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_0062ea29
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x62ea29                       ; 004f1fb0 | = "CHero"
        ;   Label: core_health.cpp_FUN_004f1fb0
    MOV EDX,dword ptr [ESP + 0xc]       ; 004f1fb5
    PUSH EDX                            ; 004f1fb9
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 004f1fba
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004f1fbf
    TEST EAX,EAX                        ; 004f1fc2
    JZ 0x004f1fcb                       ; 004f1fc4
        ;   XREF to: 004f1fcb (CONDITIONAL_JUMP)  ; LAB_004f1fcb
    MOV EAX,0x2                         ; 004f1fc6
    RET                                 ; 004f1fcb
        ;   Label: LAB_004f1fcb

