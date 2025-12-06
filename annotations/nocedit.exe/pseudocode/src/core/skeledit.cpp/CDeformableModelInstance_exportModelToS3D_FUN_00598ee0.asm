; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance * this_ptr, char * filename)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filename
;
; XREF[1]:
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005988f5
;
; Called Functions:
;   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_stack.c_stack_probe_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x14                           ; 00598ee0
        ;   Label: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00598ee5 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [ESP + 0x4]       ; 00598eea
    LEA EAX,[EDX + 0xe80]               ; 00598eee
    PUSH EAX                            ; 00598ef4
    PUSH 0x0                            ; 00598ef5
    MOV ECX,dword ptr [ESP + 0x10]      ; 00598ef7
    PUSH ECX                            ; 00598efb
    PUSH EDX                            ; 00598efc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00598efd | CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00598f02
    PUSH EAX                            ; 00598f05
    CALL core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 ; 00598f06 | void core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices)
        ;   XREF to: 00595fc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00598f0b
    RET                                 ; 00598f0e

