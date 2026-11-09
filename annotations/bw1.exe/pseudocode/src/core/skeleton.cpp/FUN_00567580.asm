; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00567580(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[10]:
;   core_cloth.cpp_FUN_0043eea0 at 0043f8b6
;   core_mimic.cpp_FUN_0050f290 at 0050f50c
;   core_moloch.cpp_FUN_005204e0 at 00520aaf
;   core_morph.cpp_FUN_00522650 at 00522657
;   core_passngr.cpp_FUN_00532930 at 005329d4
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_00569b50 at 00569c7a
;   core_succubus.cpp_FUN_00591ff0 at 005922e5
;   core_succubus.cpp_FUN_00592320 at 005925d0
;   core_vampboss.cpp_FUN_005a52a0 at 005a544e
;   core_vampboss.cpp_FUN_005a5550 at 005a55b1
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
;   core_skeleton.cpp_FUN_00569180
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00567580
        ;   Label: core_skeleton.cpp_FUN_00567580
    PUSH EDX                            ; 00567584
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00567585
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0056758a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056758d
    PUSH ECX                            ; 00567591
    CALL core_skeleton.cpp_FUN_00569180 ; 00567592
        ;   XREF to: 00569180 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_00569180(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00567597
    RET                                 ; 0056759a

