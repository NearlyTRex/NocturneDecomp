; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(int param_1)
;
;
; XREF[30]:
;   FUN_004150b0 at 004150ba
;   FUN_00415430 at 00415447
;   FUN_004b48d0 at 004b48dc
;   FUN_004d4650 at 004d469c
;   FUN_00540c20 at 00540c74
;   FUN_0054c3e0 at 0054c3fb
;   core_batcreat.cpp_CBatCreature_setup_FUN_00412160 at 00412177
;   core_batman.cpp_CBatman_setup_FUN_004134a0 at 004134b7
;   core_boneguy.cpp_CBoneGuy_setup_FUN_00418800 at 0041880e
;   core_bride.cpp_CBride_setup_FUN_0041fc20 at 0041fc31
;   ... and 20 more
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00
;   core_skeleton.cpp_getDeformableModel_FUN_0051f570
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0051dcd0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_0051dcd0
    ADD EAX,0x2260                      ; 0051dcd4
    PUSH EAX                            ; 0051dcd9
    CALL core_skeleton.cpp_getDeformableModel_FUN_0051f570 ; 0051dcda
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_getDeformableModel_FUN_0051f570()
    ADD ESP,0x4                         ; 0051dcdf
    PUSH EAX                            ; 0051dce2
    MOV EDX,dword ptr [ESP + 0x8]       ; 0051dce3
    PUSH EDX                            ; 0051dce7
    CALL core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00 ; 0051dce8
        ;   XREF to: 0051dd00 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_0051dd00()
    ADD ESP,0x8                         ; 0051dced
    RET                                 ; 0051dcf0

