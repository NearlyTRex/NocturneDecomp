; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   core_actor.cpp_archivePartStatus_FUN_0040b960 at 0040b9b2
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041be45
;   core_construc.cpp_CConstruct_process_FUN_00445cb0 at 0044643a
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_00569f50 at 00569f86
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00569ae0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00569ae0
    MOV EAX,EDX                         ; 00569ae4
    ADD EDX,0xf0                        ; 00569ae6
    ADD EAX,0x4                         ; 00569aec
        ;   Label: LAB_00569aec
    MOV dword ptr [EAX + 0x213c],0x1    ; 00569aef
    CMP EAX,EDX                         ; 00569af9
    JNZ 0x00569aec                      ; 00569afb
        ;   XREF to: 00569aec (CONDITIONAL_JUMP)  ; LAB_00569aec
    RET                                 ; 00569afd

