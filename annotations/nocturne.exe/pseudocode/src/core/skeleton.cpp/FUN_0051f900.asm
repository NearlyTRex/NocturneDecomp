; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_skeleton_cpp_FUN_0051f900(void *param_1)
;
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModel_dtor_FUN_00517c80 at 00517c97
;
; Referenced Globals:
;   WatcomTypeInfo g_CBoundingBox3D_005993f0
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x5993f0                       ; 0051f900 | g_CBoundingBox3D_005993f0
        ;   Label: core_skeleton.cpp_FUN_0051f900
    PUSH 0x64                           ; 0051f905
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f907
    PUSH EDX                            ; 0051f90b
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0051f90c
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f911
    RET                                 ; 0051f914

