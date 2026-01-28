; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined4 core_crate_cpp_FUN_00448600(void)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_00619b0a
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH 0x619b0a                       ; 00448600 | = "CHero"
        ;   Label: core_crate.cpp_FUN_00448600
    MOV EDX,dword ptr [ESP + 0xc]       ; 00448605
    PUSH EDX                            ; 00448609
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0044860a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0044860f
    TEST EAX,EAX                        ; 00448612
    JZ 0x0044861b                       ; 00448614
        ;   XREF to: 0044861b (CONDITIONAL_JUMP)  ; LAB_0044861b
    MOV EAX,0x4                         ; 00448616
    RET                                 ; 0044861b
        ;   Label: LAB_0044861b

