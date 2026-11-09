; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00547440(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_archivePartStatus_FUN_0040bc50 at 0040bca2
;   core_boneguy.cpp_FUN_004186c0 at 004189c5
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005478b0 at 005478e6
;   unkafter_conveyor.cpp_FUN_00436e80 at 0043728c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00547440
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440
    MOV EAX,EDX                         ; 00547444
    ADD EDX,0x78                        ; 00547446
    ADD EAX,0x4                         ; 00547449
        ;   Label: LAB_00547449
    MOV dword ptr [EAX + 0x213c],0x1    ; 0054744c
    CMP EAX,EDX                         ; 00547456
    JNZ 0x00547449                      ; 00547458
        ;   XREF to: 00547449 (CONDITIONAL_JUMP)  ; LAB_00547449
    RET                                 ; 0054745a

