; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_stdlib.c_atexit_FUN_005ff060(WatcomStaticDestructorNode * exit_node)
;
; Parameters:
; WatcomStaticDestructorNode * Stack[0x4]:4   exit_node
;
; XREF[39]:
;   core_boxactor.cpp_staticInit_FUN_00421650 at 0042168c
;   core_cloth.cpp_staticInit_FUN_00438b80 at 00438b92
;   core_dcamera.cpp_staticInit_FUN_0044bb10 at 0044bb40
;   core_dfilter.cpp_staticInit_FUN_0046ff50 at 0046ffa4
;   core_dmodel.cpp_staticInit_FUN_00476c50 at 00476c6c
;   core_dracbrid.cpp_staticInit_FUN_00483ef0 at 00483f73
;   core_fire.cpp_staticInit_FUN_004bef20 at 004bf0c7
;   core_game.cpp_staticInit_FUN_004d76d0 at 004d7720
;   core_gore.cpp_staticInit_FUN_004eb8c0 at 004eb945
;   core_ground.cpp_staticInit_FUN_004eeb90 at 004eebac
;   ... and 29 more
;
; Called Functions:
;   crt_stdlib.c_atexitRegisterNode_FUN_00605b89
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ff060
        ;   Label: crt_stdlib.c_atexit_FUN_005ff060
    PUSH EDX                            ; 005ff064
    CALL crt_stdlib.c_atexitRegisterNode_FUN_00605b89 ; 005ff065 | void crt_stdlib.c_atexitRegisterNode_FUN_00605b89(WatcomStaticDestructorNode * node_ptr)
        ;   XREF to: 00605b89 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005ff06a
    RET                                 ; 005ff06d

