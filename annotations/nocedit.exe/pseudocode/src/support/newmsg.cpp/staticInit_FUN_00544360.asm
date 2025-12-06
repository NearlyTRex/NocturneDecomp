; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void support_newmsg.cpp_staticInit_FUN_00544360(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CMouseDestructorNode
;   CMouse g_CMouseInstance
;
; Called Functions:
;   crt_stdlib.c_atexit_FUN_005ff060
;   support_newmsg.cpp_CMouse_ctor_FUN_00544380
;
; *****************************************************************************

section .text

    PUSH 0x2fd8a80                      ; 00544360 | CMouse g_CMouseInstance
        ;   Label: support_newmsg.cpp_staticInit_FUN_00544360
    CALL support_newmsg.cpp_CMouse_ctor_FUN_00544380 ; 00544365 | CMouse * support_newmsg.cpp_CMouse_ctor_FUN_00544380(CMouse * ptr)
        ;   XREF to: 00544380 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0054436a
    PUSH 0x680b70                       ; 0054436d | WatcomStaticDestructorNode g_CMouseDestructorNode
    CALL crt_stdlib.c_atexit_FUN_005ff060 ; 00544372 | void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00544377
    RET                                 ; 0054437a

