; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_script_cpp_staticInit_FUN_00520f90(void)
;
;
; Called Functions:
;   core_script.cpp_CScript_ctor_FUN_005215c0
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   shape_edittool.cpp_CPickList_ctor_FUN_00481fc0
;
; *****************************************************************************

section .text

    PUSH 0x1e65910                      ; 00520f90
        ;   Label: core_script.cpp_staticInit_FUN_00520f90
    CALL shape_edittool.cpp_CPickList_ctor_FUN_00481fc0 ; 00520f95
        ;   XREF to: 00481fc0 (UNCONDITIONAL_CALL)  ; CPickList * shape_edittool.cpp_CPickList_ctor_FUN_00481fc0(CPickList * this_ptr)
    ADD ESP,0x4                         ; 00520f9a
    PUSH 0x61b440                       ; 00520f9d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00520fa2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 00520fa7
    PUSH 0x1e65cd0                      ; 00520faa
    CALL core_script.cpp_CScript_ctor_FUN_005215c0 ; 00520faf
        ;   XREF to: 005215c0 (UNCONDITIONAL_CALL)  ; CScript * core_script.cpp_CScript_ctor_FUN_005215c0(CScript * this_ptr)
    ADD ESP,0x4                         ; 00520fb4
    PUSH 0x61b450                       ; 00520fb7
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 00520fbc
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__atexit_FUN_005b8d8c()
    ADD ESP,0x4                         ; 00520fc1
    RET                                 ; 00520fc4

