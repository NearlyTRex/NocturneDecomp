; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_staticInit_FUN_004ec6f0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e2974
;   undefined4 DAT_01d7a6b4
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005a30d7
;   crt_stdlib.c__atexit_FUN_005a3e13
;   engine_mini3d.cpp_CMini3D_ctor_FUN_004ec730
;
; *****************************************************************************

section .text

    PUSH 0x1d76c30                      ; 004ec6f0
        ;   Label: engine_mini3d.cpp_staticInit_FUN_004ec6f0
    CALL engine_mini3d.cpp_CMini3D_ctor_FUN_004ec730 ; 004ec6f5
        ;   XREF to: 004ec730 (UNCONDITIONAL_CALL)  ; CMini3D * engine_mini3d.cpp_CMini3D_ctor_FUN_004ec730(CMini3D * this_ptr)
    ADD ESP,0x4                         ; 004ec6fa
    PUSH 0x6004a8                       ; 004ec6fd
    CALL crt_stdlib.c__atexit_FUN_005a3e13 ; 004ec702
        ;   XREF to: 005a3e13 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005a3e13(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004ec707
    PUSH 0x5e29a0                       ; 004ec70a
    PUSH 0x32                           ; 004ec70f
    PUSH 0x1d79788                      ; 004ec711
    CALL crt_memory.c___arrinit_FUN_005a30d7 ; 004ec716
        ;   XREF to: 005a30d7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005a30d7(void * array_start, int element_count, WatcomTypeInfo * type_info)
    FLD float ptr [0x005e2974]          ; 004ec71b | DAT_005e2974
    ADD ESP,0xc                         ; 004ec721
    FSTP float ptr [0x01d7a6b4]         ; 004ec724 | DAT_01d7a6b4
    RET                                 ; 004ec72a

