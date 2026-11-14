; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__atexit_FUN_005a3e13(WatcomStaticDestructorNode *exit_node)
;
; Parameters:
; WatcomStaticDestructorNode * Stack[0x4]:4   exit_node
;
; XREF[32]:
;   core_bmppuzzl.cpp_staticInit_FUN_004118e0 at 004118f9
;   core_boxactor.cpp_staticInit_FUN_0041ef40 at 0041ef7c
;   core_dcamera.cpp_staticInit_FUN_004486c0 at 004486f0
;   core_dfilter.cpp_staticInit_FUN_00459610 at 00459629
;   core_dmodel.cpp_staticInit_FUN_00460430 at 0046044c
;   core_fire.cpp_staticInit_FUN_00496930 at 004969f0
;   core_flashlit.cpp_FUN_004a76f0 at 004a7709
;   core_game.cpp_staticInit_FUN_004b3cd0 at 004b3cec
;   core_gore.cpp_staticInit_FUN_004cc8d0 at 004cc8e2
;   core_ground.cpp_staticInit_FUN_004cf850 at 004cf86c
;   ... and 22 more
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

