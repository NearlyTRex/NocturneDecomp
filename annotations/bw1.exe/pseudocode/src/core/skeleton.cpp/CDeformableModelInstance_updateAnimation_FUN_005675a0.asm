; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
;
; XREF[50]:
;   core_armour.cpp_CArmour_process_FUN_0040eaa0 at 0040eb59
;   core_baron.cpp_CBaron_process_FUN_0040f4d0 at 0040f67a
;   core_batcreat.cpp_CBatCreature_process_FUN_004115b0 at 0041181b
;   core_batman.cpp_CBatman_process_FUN_00412ba0 at 00412e18
;   core_beast.cpp_CBeast_process_FUN_00414770 at 004147dc
;   core_biggs.cpp_CBiggs_process_FUN_00414b30 at 00414d24
;   core_bird.cpp_CBird_process_FUN_00415340 at 004155b1
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bb40 at 0041c15b
;   core_bride.cpp_CBride_process_FUN_00423b70 at 00424754
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429875
;   ... and 40 more
;
; Referenced Globals:
;   undefined4 DAT_005f24c9
;
; Called Functions:
;   core_skeleton.cpp_FUN_00567620
;   core_skeleton.cpp_FUN_00568100
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005675a0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005675a1
    PUSH -0x1                           ; 005675a5
    MOV EDX,dword ptr [EBX + 0x4]       ; 005675a7
    PUSH dword ptr [EBX + 0x8]          ; 005675aa
    PUSH EDX                            ; 005675ad
    PUSH EBX                            ; 005675ae
    CALL core_skeleton.cpp_FUN_00567620 ; 005675af
        ;   XREF to: 00567620 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00567620()
    FLD float ptr [EBX + 0x14]          ; 005675b4
    ADD ESP,0x10                        ; 005675b7
    FCOMP double ptr [0x005f24c9]       ; 005675ba | DAT_005f24c9
    FNSTSW AX                           ; 005675c0
    SAHF                                ; 005675c2
    JA 0x005675c7                       ; 005675c3
        ;   XREF to: 005675c7 (CONDITIONAL_JUMP)  ; LAB_005675c7
    POP EBX                             ; 005675c5
    RET                                 ; 005675c6
    PUSH 0x567360                       ; 005675c7
        ;   Label: LAB_005675c7
    PUSH -0x1                           ; 005675cc
    PUSH dword ptr [EBX + 0x14]         ; 005675ce
    MOV ECX,dword ptr [EBX + 0x18]      ; 005675d1
    PUSH dword ptr [EBX + 0x1c]         ; 005675d4
    PUSH ECX                            ; 005675d7
    PUSH EBX                            ; 005675d8
    CALL core_skeleton.cpp_FUN_00568100 ; 005675d9
        ;   XREF to: 00568100 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00568100()
    ADD ESP,0x18                        ; 005675de
    POP EBX                             ; 005675e1
    RET                                 ; 005675e2

