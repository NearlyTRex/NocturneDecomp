; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_podmain_cpp_staticInit_FUN_004f9280(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01e52a64
;
; Called Functions:
;   crt_unknown.c__atexit_FUN_00564bb0
;   engine_pod.cpp_CPod_ctor_FUN_004f8810
;
; *****************************************************************************

section .text

    PUSH 0x1e528d0                      ; 004f9280
        ;   Label: core_podmain.cpp_staticInit_FUN_004f9280
    CALL engine_pod.cpp_CPod_ctor_FUN_004f8810 ; 004f9285
        ;   XREF to: 004f8810 (UNCONDITIONAL_CALL)  ; CPod * engine_pod.cpp_CPod_ctor_FUN_004f8810(CPod * this_ptr)
    ADD ESP,0x4                         ; 004f928a
    MOV EDX,0x5a14f4                    ; 004f928d
    PUSH 0x5be1bc                       ; 004f9292
    MOV dword ptr [0x01e52a64],EDX      ; 004f9297 | DAT_01e52a64
    CALL crt_unknown.c__atexit_FUN_00564bb0 ; 004f929d
        ;   XREF to: 00564bb0 (UNCONDITIONAL_CALL)  ; void crt_unknown.c__atexit_FUN_00564bb0(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f92a2
    RET                                 ; 004f92a5

