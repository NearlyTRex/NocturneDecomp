; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_staticInit_FUN_0051bfd0(void)
;
;
; Referenced Globals:
;   undefined4 g_CDemonPodInstance.base.vtable
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_pod.cpp_CPod_ctor_FUN_0051b080
;
; *****************************************************************************

section .text

    PUSH 0x1e614b0                      ; 0051bfd0
        ;   Label: core_podmain.cpp_staticInit_FUN_0051bfd0
    CALL engine_pod.cpp_CPod_ctor_FUN_0051b080 ; 0051bfd5
        ;   XREF to: 0051b080 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_0051b080(CPod * this_ptr)
    ADD ESP,0x4                         ; 0051bfda
    MOV EDX,0x5fadd4                    ; 0051bfdd
    PUSH 0x61b3fc                       ; 0051bfe2
    MOV dword ptr [0x01e61644],EDX      ; 0051bfe7 | g_CDemonPodInstance.base.vtable
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 0051bfed
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 0051bff2
    RET                                 ; 0051bff5

