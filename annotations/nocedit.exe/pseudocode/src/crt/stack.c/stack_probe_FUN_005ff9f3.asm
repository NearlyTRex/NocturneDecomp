; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __stdcall uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
;
; Parameters:
; uint             Stack[0x4]:4   stack_size
;
; XREF[94]:
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 at 0058adb5
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 at 0058a3d5
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 at 0058aa15
;   core_skeledit.cpp_CBoneStructure_readBONheader_FUN_0058a4a0 at 0058a4a5
;   core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0 at 0058abb5
;   core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0 at 00598ee5
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005968b5
;   core_skeledit.cpp_CDeformableModel_calcRootOffsetScale_FUN_0058e690 at 0058e695
;   core_skeledit.cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810 at 0058f815
;   core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0 at 00595fc5
;   ... and 84 more
;
; Called Functions:
;   crt_stack.c_check_stack_target_FUN_005ffa03
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005ff9f3
        ;   Label: crt_stack.c_stack_probe_FUN_005ff9f3
    CALL crt_stack.c_check_stack_target_FUN_005ffa03 ; 005ff9f7
        ;   XREF to: 005ffa03 (UNCONDITIONAL_CALL)  ; void crt_stack.c_check_stack_target_FUN_005ffa03(void * target_stack_ptr)
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff9fc
    RET 0x4                             ; 005ffa00

