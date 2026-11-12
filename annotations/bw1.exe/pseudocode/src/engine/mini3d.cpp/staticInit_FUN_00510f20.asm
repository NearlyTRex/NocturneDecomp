; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_staticInit_FUN_00510f20(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00603c94
;   undefined4 DAT_01d25f34
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005c0357
;   crt_stdlib.c__atexit_FUN_005c1093
;   engine_mini3d.cpp_CMini3D_ctor_FUN_00510f60
;
; *****************************************************************************

section .text

    PUSH 0x1d224b0                      ; 00510f20
        ;   Label: engine_mini3d.cpp_staticInit_FUN_00510f20
    CALL engine_mini3d.cpp_CMini3D_ctor_FUN_00510f60 ; 00510f25
        ;   XREF to: 00510f60 (UNCONDITIONAL_CALL)  ; CMini3D * engine_mini3d.cpp_CMini3D_ctor_FUN_00510f60(CMini3D * this_ptr)
    ADD ESP,0x4                         ; 00510f2a
    PUSH 0x61f5c8                       ; 00510f2d
    CALL crt_stdlib.c__atexit_FUN_005c1093 ; 00510f32
        ;   XREF to: 005c1093 (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005c1093(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 00510f37
    PUSH 0x603cc0                       ; 00510f3a
    PUSH 0x32                           ; 00510f3f
    PUSH 0x1d25008                      ; 00510f41
    CALL crt_memory.c___arrinit_FUN_005c0357 ; 00510f46
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005c0357(void * array_start, int element_count, WatcomTypeInfo * type_info)
    FLD float ptr [0x00603c94]          ; 00510f4b | DAT_00603c94
    ADD ESP,0xc                         ; 00510f51
    FSTP float ptr [0x01d25f34]         ; 00510f54 | DAT_01d25f34
    RET                                 ; 00510f5a

