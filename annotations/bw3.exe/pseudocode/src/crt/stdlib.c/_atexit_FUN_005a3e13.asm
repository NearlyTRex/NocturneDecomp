; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__atexit_FUN_005a3e13(undefined4 param_1)
;
;
; XREF[31]:
;   core_boxactor.cpp_staticInit_FUN_0041ef40 at 0041ef7c
;   core_dcamera.cpp_staticInit_FUN_004486c0 at 004486f0
;   core_dfilter.cpp_staticInit_FUN_00459610 at 00459629
;   core_dmodel.cpp_staticInit_FUN_00460430 at 0046044c
;   core_fire.cpp_staticInit_FUN_00496930 at 004969f0
;   core_game.cpp_staticInit_FUN_004b3cd0 at 004b3cec
;   core_gore.cpp_staticInit_FUN_004cc8d0 at 004cc8e2
;   core_level.cpp_staticInit_FUN_004dfc10 at 004dfc2f
;   core_menu.cpp_staticInit_FUN_004e7610 at 004e7629
;   core_minecar.cpp_staticInit_FUN_004ec6f0 at 004ec702
;   ... and 21 more
;
; Called Functions:
;   crt_unknown.c_FUN_005a9e4b
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a3e13
        ;   Label: crt_stdlib.c__atexit_FUN_005a3e13
    PUSH EDX                            ; 005a3e17
    CALL crt_unknown.c_FUN_005a9e4b     ; 005a3e18
        ;   XREF to: 005a9e4b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a9e4b()
    ADD ESP,0x4                         ; 005a3e1d
    RET                                 ; 005a3e20

