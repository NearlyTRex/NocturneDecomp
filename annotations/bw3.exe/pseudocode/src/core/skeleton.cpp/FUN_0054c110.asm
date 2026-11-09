; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_0054c110(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[12]:
;   core_asgaya.cpp_FUN_005a0b00 at 005a0bce
;   core_cloth.cpp_FUN_0043cb00 at 0043d516
;   core_morph.cpp_FUN_004f9f50 at 004f9f57
;   core_passngr.cpp_FUN_0050a610 at 0050a6b4
;   core_pryemorp.cpp_FUN_005275c0 at 0052775d
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0054e6e0 at 0054e80a
;   core_spirbear.cpp_FUN_0059aba0 at 0059adc4
;   core_spireagl.cpp_FUN_005992f0 at 00599500
;   core_spirindi.cpp_FUN_0059a060 at 0059a284
;   core_styldemo.cpp_FUN_0059e130 at 0059e3c5
;   ... and 2 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
;   core_skeleton.cpp_FUN_0054dd10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0054c110
        ;   Label: core_skeleton.cpp_FUN_0054c110
    PUSH EDX                            ; 0054c114
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0054c115
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c11a
    MOV ECX,dword ptr [ESP + 0x4]       ; 0054c11d
    PUSH ECX                            ; 0054c121
    CALL core_skeleton.cpp_FUN_0054dd10 ; 0054c122
        ;   XREF to: 0054dd10 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_FUN_0054dd10(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0054c127
    RET                                 ; 0054c12a

