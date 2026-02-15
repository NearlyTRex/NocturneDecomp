; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_memdbg_cpp_staticInit_FUN_0050ee40(void)
;
;
; Referenced Globals:
;   WatcomStaticDestructorNode g_CLeakCheckerDestructorNode
;   CLeakChecker g_CLeakCheckerInstance
;
; Called Functions:
;   crt_stdlib.c__atexit_FUN_005ff060
;   shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0
;
; *****************************************************************************

section .text

    PUSH 0x2f214ec                      ; 0050ee40 | g_CLeakCheckerInstance
        ;   Label: shape_memdbg.cpp_staticInit_FUN_0050ee40
    CALL shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0 ; 0050ee45
        ;   XREF to: 0050fba0 (UNCONDITIONAL_CALL)  ; CLeakChecker * shape_memdbg.cpp_CLeakChecker_ctor_FUN_0050fba0(CLeakChecker * this_ptr)
    ADD ESP,0x4                         ; 0050ee4a
    PUSH 0x67d1e0                       ; 0050ee4d | g_CLeakCheckerDestructorNode
    CALL crt_stdlib.c__atexit_FUN_005ff060 ; 0050ee52
        ;   XREF to: 005ff060 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 0050ee57
    RET                                 ; 0050ee5a

