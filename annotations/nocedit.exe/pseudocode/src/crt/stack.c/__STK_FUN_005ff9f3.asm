; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stk_probe crt_stack_c___STK_FUN_005ff9f3(void)
;
;
; XREF[94]:
;   core_skeledit.cpp_CBoneStructure_applyMatrixArray_FUN_0058af40 at 0058af45
;   core_skeledit.cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80 at 0058ac85
;   core_skeledit.cpp_CBoneStructure_computeWorldMatrices_FUN_0058ad30 at 0058ad35
;   core_skeledit.cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160 at 0058b165
;   core_skeledit.cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200 at 0058b205
;   core_skeledit.cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0 at 0058aeb5
;   core_skeledit.cpp_CBoneStructure_findBoneByName_FUN_0058ac30 at 0058ac35
;   core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0 at 0058adb5
;   core_skeledit.cpp_CBoneStructure_importBON_FUN_0058a3d0 at 0058a3d5
;   core_skeledit.cpp_CBoneStructure_readBONframe_FUN_0058aa10 at 0058aa15
;   ... and 84 more
;
; Called Functions:
;   crt_stack.c_check_stack_target_FUN_005ffa03
;
; *****************************************************************************

section .text

    XCHG dword ptr [ESP + 0x4],EAX      ; 005ff9f3
        ;   Label: crt_stack.c___STK_FUN_005ff9f3
    CALL crt_stack.c_check_stack_target_FUN_005ffa03 ; 005ff9f7
        ;   XREF to: 005ffa03 (UNCONDITIONAL_CALL)  ; void crt_stack.c_check_stack_target_FUN_005ffa03()
    MOV EAX,dword ptr [ESP + 0x4]       ; 005ff9fc
    RET 0x4                             ; 005ffa00

