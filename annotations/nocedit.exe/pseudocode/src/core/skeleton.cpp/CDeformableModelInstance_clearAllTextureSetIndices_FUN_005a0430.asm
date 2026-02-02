; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430 (CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_archivePartStatus_FUN_0040bae0 at 0040bb95
;   core_skeledit.cpp_CDeformableModelInstance_viewModel_FUN_005968b0 at 00597181
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840 at 005a087f
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a0430
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_005a0430
    MOV EAX,EDX                         ; 005a0434
    ADD EDX,0x78                        ; 005a0436
    ADD EAX,0x4                         ; 005a0439
        ;   Label: LAB_005a0439
    MOV dword ptr [EAX + 0x21b4],0x0    ; 005a043c
    CMP EAX,EDX                         ; 005a0446
    JNZ 0x005a0439                      ; 005a0448
        ;   XREF to: 005a0439 (CONDITIONAL_JUMP)  ; LAB_005a0439
    RET                                 ; 005a044a

