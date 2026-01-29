; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hero_cpp_CHero_FUN_004f3fa0(CHero *this_ptr)
;
; Parameters:
; CHero *          Stack[0x4]:4   this_ptr
;
; XREF[9]:
;   core_baron.cpp_CBaron_FUN_00414070 at 0041407a
;   core_colonel.cpp_FUN_00440630 at 0044063a
;   core_gabriela.cpp_FUN_004d7630 at 004d763a
;   core_haystack.cpp_FUN_004f1cf0 at 004f1cfa
;   core_icepick.cpp_FUN_004f97c0 at 004f97ca
;   core_moloch.cpp_FUN_005299b0 at 005299ba
;   core_scat.cpp_FUN_00559140 at 0055914a
;   core_stranger.cpp_CStranger_FUN_005c6910 at 005c691a
;   core_svetlana.cpp_CSvetlana_FUN_005d9f30 at 005d9f3a
;
; Referenced Globals:
;   TerminatedCString s_MODELS_s_0062edc4
;
; Called Functions:
;   core_skeledit.cpp_FUN_0058a2b0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f3fa0
        ;   Label: core_hero.cpp_CHero_FUN_004f3fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f3fa1
    ADD EBX,0x158                       ; 004f3fa5
    PUSH EBX                            ; 004f3fab
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004f3fac
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f3fb1
    ADD EAX,0x8fb0                      ; 004f3fb4
    PUSH EAX                            ; 004f3fb9
    PUSH 0x62edc4                       ; 004f3fba | = "MODELS\\%s\n"
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f3fbf
    PUSH EDX                            ; 004f3fc3
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 004f3fc4
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0xc                         ; 004f3fc9
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f3fcc
    PUSH ECX                            ; 004f3fd0
    PUSH EBX                            ; 004f3fd1
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0 ; 004f3fd2
        ;   XREF to: 005a07a0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004f3fd7
    PUSH EAX                            ; 004f3fda
    CALL core_skeledit.cpp_FUN_0058a2b0 ; 004f3fdb
        ;   XREF to: 0058a2b0 (UNCONDITIONAL_CALL)  ; undefined core_skeledit.cpp_FUN_0058a2b0()
    ADD ESP,0x8                         ; 004f3fe0
    POP EBX                             ; 004f3fe3
    RET                                 ; 004f3fe4

