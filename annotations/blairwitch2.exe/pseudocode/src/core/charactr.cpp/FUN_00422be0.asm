; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00422be0(int param_1)
;
;
; Called Functions:
;   core_actor.cpp_FUN_00408ac0
;   core_skeleton.cpp_markModelInUse_FUN_00549210
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00422be0
        ;   Label: core_charactr.cpp_FUN_00422be0
    PUSH EDX                            ; 00422be4
    CALL core_actor.cpp_FUN_00408ac0    ; 00422be5
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    ADD ESP,0x4                         ; 00422bea
    MOV EAX,dword ptr [ESP + 0x4]       ; 00422bed
    MOV DL,byte ptr [EAX + 0x2514]      ; 00422bf1
    ADD EAX,0x2514                      ; 00422bf7
    TEST DL,DL                          ; 00422bfc
    JNZ 0x00422c01                      ; 00422bfe
        ;   XREF to: 00422c01 (CONDITIONAL_JUMP)  ; LAB_00422c01
    RET                                 ; 00422c00
    PUSH EAX                            ; 00422c01
        ;   Label: LAB_00422c01
    CALL core_skeleton.cpp_markModelInUse_FUN_00549210 ; 00422c02
        ;   XREF to: 00549210 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_markModelInUse_FUN_00549210(char * model_filename)
    ADD ESP,0x4                         ; 00422c07
    RET                                 ; 00422c0a

