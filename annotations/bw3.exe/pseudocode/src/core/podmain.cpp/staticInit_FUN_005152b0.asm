; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_staticInit_FUN_005152b0(void)
;
;
; Referenced Globals:
;   undefined4 g_CDemonPodInstance.field404_0x194
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_pod.cpp_CPod_ctor_FUN_00514320
;
; *****************************************************************************

section .text

    PUSH 0x1ed2af0                      ; 005152b0
        ;   Label: core_podmain.cpp_staticInit_FUN_005152b0
    CALL engine_pod.cpp_CPod_ctor_FUN_00514320 ; 005152b5
        ;   XREF to: 00514320 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_00514320(CPod * this_ptr)
    ADD ESP,0x4                         ; 005152ba
    MOV EDX,0x5e3494                    ; 005152bd
    PUSH 0x60394c                       ; 005152c2
    MOV dword ptr [0x01ed2c84],EDX      ; 005152c7 | g_CDemonPodInstance.field404_0x194
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 005152cd
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005a3e13()
    ADD ESP,0x4                         ; 005152d2
    RET                                 ; 005152d5

