; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_podmain_cpp_staticInit_FUN_00551990(void)
;
;
; Referenced Globals:
;   CDemonPod_vtable g_CDemonPodVTable
;   WatcomStaticDestructorNode g_CDemonPodMainDestructorNode
;   CDemonPod g_CDemonPodInstance
;   undefined4 DAT_030e5224
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005ff060
;   engine_pod.cpp_CPod_ctor_FUN_00550980
;
; *****************************************************************************

section .text

    PUSH 0x30e5090                      ; 00551990 | g_CDemonPodInstance
        ;   Label: core_podmain.cpp_staticInit_FUN_00551990
    CALL engine_pod.cpp_CPod_ctor_FUN_00550980 ; 00551995
        ;   XREF to: 00550980 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_00550980(CPod * this_ptr)
    ADD ESP,0x4                         ; 0055199a
    MOV EDX,0x662404                    ; 0055199d | g_CDemonPodVTable
    PUSH 0x680ccc                       ; 005519a2 | g_CDemonPodMainDestructorNode
    MOV dword ptr [0x030e5224],EDX      ; 005519a7 | DAT_030e5224
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 005519ad
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 005519b2
    RET                                 ; 005519b5

