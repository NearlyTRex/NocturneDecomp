; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance *this_ptr,char *filename)
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
;
; *****************************************************************************

section .text

    NOP                                 ; 00598ee0
        ;   Label: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
    NOP                                 ; 00598ee1
    NOP                                 ; 00598ee2
    NOP                                 ; 00598ee3
    NOP                                 ; 00598ee4
    NOP                                 ; 00598ee5
    NOP                                 ; 00598ee6
    NOP                                 ; 00598ee7
    NOP                                 ; 00598ee8
    NOP                                 ; 00598ee9
    MOV EDX,dword ptr [ESP + 0x4]       ; 00598eea
    LEA EAX,[EDX + 0xe80]               ; 00598eee
    PUSH EAX                            ; 00598ef4
    PUSH 0x0                            ; 00598ef5
    MOV ECX,dword ptr [ESP + 0x10]      ; 00598ef7
    PUSH ECX                            ; 00598efb
    PUSH EDX                            ; 00598efc
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 00598efd
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00598f02
    PUSH EAX                            ; 00598f05
    CALL core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 ; 00598f06
        ;   XREF to: 00595fc0 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel * this_ptr, char * output_filename, int lod_level, CMatrix3x4f * bone_matrices)
    ADD ESP,0x10                        ; 00598f0b
    RET                                 ; 00598f0e

