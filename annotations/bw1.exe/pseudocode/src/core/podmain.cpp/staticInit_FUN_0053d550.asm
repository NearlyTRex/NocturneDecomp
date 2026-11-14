; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_staticInit_FUN_0053d550(void)
;
;
; Referenced Globals:
;   undefined4 g_CDemonPodInstance.base.vtable
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_pod.cpp_CPod_ctor_FUN_0053c5c0
;
; *****************************************************************************

section .text

    PUSH 0x1e7d420                      ; 0053d550
        ;   Label: core_podmain.cpp_staticInit_FUN_0053d550
    CALL engine_pod.cpp_CPod_ctor_FUN_0053c5c0 ; 0053d555
        ;   XREF to: 0053c5c0 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_0053c5c0(CPod * this_ptr)
    ADD ESP,0x4                         ; 0053d55a
    MOV EDX,0x604aa4                    ; 0053d55d
    PUSH 0x622a5c                       ; 0053d562
    MOV dword ptr [0x01e7d5b4],EDX      ; 0053d567 | g_CDemonPodInstance.base.vtable
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0053d56d
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0053d572
    RET                                 ; 0053d575

