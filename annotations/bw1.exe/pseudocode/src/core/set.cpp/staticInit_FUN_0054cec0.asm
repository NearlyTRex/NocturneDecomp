; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_staticInit_FUN_0054cec0(void)
;
;
; Called Functions:
;   core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0
;   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0
;   core_dtrace.cpp_CDemonRaytrace_ctor_FUN_0048a8f0
;   core_set.cpp_CDemonSet_ctor_FUN_0054d000
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;
; *****************************************************************************

section .text

    PUSH 0x1e82168                      ; 0054cec0
        ;   Label: core_set.cpp_staticInit_FUN_0054cec0
    CALL core_set.cpp_CDemonSet_ctor_FUN_0054d000 ; 0054cec5
        ;   XREF to: 0054d000 (UNCONDITIONAL_CALL)  ; CDemonSet * core_set.cpp_CDemonSet_ctor_FUN_0054d000(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0054ceca
    PUSH 0x622bd8                       ; 0054cecd
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0054ced2
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0054ced7
    PUSH 0x1fe37ec                      ; 0054ceda
    CALL core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0 ; 0054cedf
        ;   XREF to: 0044caa0 (UNCONDITIONAL_CALL)  ; CDemonCamera * core_dcamera.cpp_CDemonCamera_ctor_FUN_0044caa0(CDemonCamera * this_ptr)
    ADD ESP,0x4                         ; 0054cee4
    PUSH 0x622be8                       ; 0054cee7
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0054ceec
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0054cef1
    PUSH 0x1fe5c1c                      ; 0054cef4
    CALL core_dtrace.cpp_CDemonRaytrace_ctor_FUN_0048a8f0 ; 0054cef9
        ;   XREF to: 0048a8f0 (UNCONDITIONAL_CALL)  ; CDemonRaytrace * core_dtrace.cpp_CDemonRaytrace_ctor_FUN_0048a8f0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0054cefe
    PUSH 0x622bf8                       ; 0054cf01
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0054cf06
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0054cf0b
    PUSH 0x1fe5fac                      ; 0054cf0e
    CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0 ; 0054cf13
        ;   XREF to: 004667e0 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModel_ctor_FUN_004667e0(CKeyFramedModel * this_ptr)
    ADD ESP,0x4                         ; 0054cf18
    PUSH 0x622c08                       ; 0054cf1b
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 0054cf20
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005c1093()
    ADD ESP,0x4                         ; 0054cf25
    PUSH 0x5fb430                       ; 0054cf28
    PUSH 0xfa0                          ; 0054cf2d
    PUSH 0x202a8a8                      ; 0054cf32
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 0054cf37
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___arrinit_FUN_005c0357()
    ADD ESP,0xc                         ; 0054cf3c
    RET                                 ; 0054cf3f

