; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_005a0410(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bb32
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c256
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 005971eb
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 at 005a0876
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0410
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_005a0410
    MOV EAX,EDX                         ; 005a0414
    ADD EDX,0x78                        ; 005a0416
    ADD EAX,0x4                         ; 005a0419
        ;   Label: LAB_005a0419
    MOV dword ptr [EAX + 0x213c],0x1    ; 005a041c
    CMP EAX,EDX                         ; 005a0426
    JNZ 0x005a0419                      ; 005a0428
        ;   XREF to: 005a0419 (CONDITIONAL_JUMP)  ; LAB_005a0419
    RET                                 ; 005a042a

