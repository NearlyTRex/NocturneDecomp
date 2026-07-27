; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trigger_cpp_FUN_00547880(void)
;
;
; Called Functions:
;   core_trigger.cpp_CTrigger_ctor_FUN_005478b0
;   crt_unknown.c_FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH 0x368                          ; 00547880
        ;   Label: core_trigger.cpp_FUN_00547880
    CALL crt_unknown.c_FUN_0056497c     ; 00547885
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056497c()
    ADD ESP,0x4                         ; 0054788a
    TEST EAX,EAX                        ; 0054788d
    JNZ 0x00547892                      ; 0054788f
        ;   XREF to: 00547892 (CONDITIONAL_JUMP)  ; LAB_00547892
    RET                                 ; 00547891
    PUSH EAX                            ; 00547892
        ;   Label: LAB_00547892
    CALL core_trigger.cpp_CTrigger_ctor_FUN_005478b0 ; 00547893
        ;   XREF to: 005478b0 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_ctor_FUN_005478b0()
    ADD ESP,0x4                         ; 00547898
    RET                                 ; 0054789b

