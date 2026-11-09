; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_actor.cpp_archivePartStatus_FUN_0040bc50 at 0040bd05
;   core_charactr.cpp_FUN_0042b440 at 0042b482
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 at 005478ef
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00547460
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_clearAllTextureSetIndices_FUN_00547460
    MOV EAX,EDX                         ; 00547464
    ADD EDX,0x78                        ; 00547466
    ADD EAX,0x4                         ; 00547469
        ;   Label: LAB_00547469
    MOV dword ptr [EAX + 0x21b4],0x0    ; 0054746c
    CMP EAX,EDX                         ; 00547476
    JNZ 0x00547469                      ; 00547478
        ;   XREF to: 00547469 (CONDITIONAL_JUMP)  ; LAB_00547469
    RET                                 ; 0054747a

