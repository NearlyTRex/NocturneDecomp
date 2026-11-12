; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_stdlib_c__atexit_FUN_005c1093(WatcomStaticDestructorNode *exit_node)
;
; Parameters:
; WatcomStaticDestructorNode * Stack[0x4]:4   exit_node
;
; XREF[32]:
;   core_boxactor.cpp_staticInit_FUN_00421c00 at 00421c3c
;   core_dcamera.cpp_staticInit_FUN_0044c580 at 0044c5b0
;   core_dfilter.cpp_staticInit_FUN_0045d6c0 at 0045d6d9
;   core_dmodel.cpp_staticInit_FUN_00466780 at 0046679c
;   core_fire.cpp_staticInit_FUN_004aba90 at 004abb50
;   core_flashlit.cpp_FUN_004b9ab0 at 004b9ac9
;   core_game.cpp_staticInit_FUN_004cb7d0 at 004cb7ec
;   core_gore.cpp_staticInit_FUN_004e3d40 at 004e3d52
;   core_ground.cpp_staticInit_FUN_004e6ec0 at 004e6edc
;   core_inv.cpp_staticInit_FUN_004f5ef0 at 004f5f02
;   ... and 22 more
;
; Called Functions:
;   crt_unknown.c_FUN_005c6fdb
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005c1093
        ;   Label: crt_stdlib.c__atexit_FUN_005c1093
    PUSH EDX                            ; 005c1097
    CALL crt_unknown.c_FUN_005c6fdb     ; 005c1098
        ;   XREF to: 005c6fdb (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c6fdb()
    ADD ESP,0x4                         ; 005c109d
    RET                                 ; 005c10a0

