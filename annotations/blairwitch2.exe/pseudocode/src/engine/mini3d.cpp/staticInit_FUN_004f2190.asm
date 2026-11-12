; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_staticInit_FUN_004f2190(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa164
;   undefined4 DAT_01d0d2d4
;
; Called Functions:
;   crt_memory.c___arrinit_FUN_005b7f5f
;   crt_stdlib.c__atexit_FUN_005b8d8c
;   engine_mini3d.cpp_CMini3D_ctor_FUN_004f21d0
;
; *****************************************************************************

section .text

    PUSH 0x1d09850                      ; 004f2190
        ;   Label: engine_mini3d.cpp_staticInit_FUN_004f2190
    CALL engine_mini3d.cpp_CMini3D_ctor_FUN_004f21d0 ; 004f2195
        ;   XREF to: 004f21d0 (UNCONDITIONAL_CALL)  ; CMini3D * engine_mini3d.cpp_CMini3D_ctor_FUN_004f21d0(CMini3D * this_ptr)
    ADD ESP,0x4                         ; 004f219a
    PUSH 0x6180e0                       ; 004f219d
    CALL crt_stdlib.c__atexit_FUN_005b8d8c ; 004f21a2
        ;   XREF to: 005b8d8c (UNCONDITIONAL_CALL)  ; void crt_stdlib.c__atexit_FUN_005b8d8c(WatcomStaticDestructorNode * exit_node)
    ADD ESP,0x4                         ; 004f21a7
    PUSH 0x5fa190                       ; 004f21aa
    PUSH 0x32                           ; 004f21af
    PUSH 0x1d0c3a4                      ; 004f21b1
    CALL crt_memory.c___arrinit_FUN_005b7f5f ; 004f21b6
        ;   XREF to: 005b7f5f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrinit_FUN_005b7f5f(void * array_start, int element_count, WatcomTypeInfo * type_info)
    FLD float ptr [0x005fa164]          ; 004f21bb | DAT_005fa164
    ADD ESP,0xc                         ; 004f21c1
    FSTP float ptr [0x01d0d2d4]         ; 004f21c4 | DAT_01d0d2d4
    RET                                 ; 004f21ca

