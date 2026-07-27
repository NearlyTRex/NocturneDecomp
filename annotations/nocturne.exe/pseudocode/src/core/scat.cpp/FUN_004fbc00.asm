; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_scat_cpp_FUN_004fbc00(undefined4 param_1)
;
;
; XREF[1]:
;   core_scat.cpp_FUN_004fbbd0 at 004fbbe3
;
; Referenced Globals:
;   TerminatedCString s_scat_dfm_0058dd12
;   TerminatedCString s_draw_stand2coatPocket_0058dd1b
;   TerminatedCString s_draw_coatPocket2aimPisto_0058dd31
;   undefined1* PTR_core_scat.cpp_CScat_setup_FUN_004fbcc0_005a1554 = 004fbcc0
;
; Called Functions:
;   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760
;   core_hero.cpp_FUN_004b46d0
;   core_scat.cpp_FUN_004fbe80
;   core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fbc00
        ;   Label: core_scat.cpp_FUN_004fbc00
    MOV EDX,dword ptr [ESP + 0x8]       ; 004fbc01
    PUSH EDX                            ; 004fbc05
    CALL core_hero.cpp_FUN_004b46d0     ; 004fbc06
        ;   XREF to: 004b46d0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b46d0()
    ADD ESP,0x4                         ; 004fbc0b
    MOV EBX,EAX                         ; 004fbc0e
    ADD EAX,0x150                       ; 004fbc10
    PUSH 0x58dd12                       ; 004fbc15 | = "scat.dfm"
    MOV dword ptr [EAX + -0x4],0x5a1554 ; 004fbc1a | PTR_core_scat.cpp_CScat_setup_FUN_004fbcc0_005a1554
    PUSH EAX                            ; 004fbc21
    MOV dword ptr [EAX + 0x1f8ec],0x0   ; 004fbc22
    CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0 ; 004fbc2c
        ;   XREF to: 0051e0c0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_init_FUN_0051e0c0()
    LEA EAX,[EBX + 0x1fa40]             ; 004fbc31
    MOV dword ptr [EBX + 0x1fa4c],0x3f800000 ; 004fbc37
    ADD ESP,0x8                         ; 004fbc41
    MOV dword ptr [EAX + 0x8],0x0       ; 004fbc44
    PUSH EBX                            ; 004fbc4b
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fbc4c
    MOV dword ptr [EAX + 0x4],EDX       ; 004fbc4f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fbc52
    MOV dword ptr [EAX],EDX             ; 004fbc55
    CALL core_scat.cpp_FUN_004fbe80     ; 004fbc57
        ;   XREF to: 004fbe80 (UNCONDITIONAL_CALL)  ; undefined core_scat.cpp_FUN_004fbe80()
    ADD ESP,0x4                         ; 004fbc5c
    MOV dword ptr [EBX + 0x1fa50],0x0   ; 004fbc5f
    PUSH 0x0                            ; 004fbc69
    MOV dword ptr [EBX + 0x1fa58],0x0   ; 004fbc6b
    PUSH 0x58dd1b                       ; 004fbc75 | = "draw_stand2coatPocket"
    MOV dword ptr [EBX + 0x1fa60],0x0   ; 004fbc7a
    PUSH 0x1                            ; 004fbc84
    MOV dword ptr [EBX + 0x1fa64],0x0   ; 004fbc86
    PUSH 0x0                            ; 004fbc90
    FLD float ptr [EBX + 0x1fa58]       ; 004fbc92
    PUSH EBX                            ; 004fbc98
    FSTP float ptr [EBX + 0x1fa54]      ; 004fbc99
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 004fbc9f
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 004fbca4
    PUSH 0x0                            ; 004fbca7
    PUSH 0x58dd31                       ; 004fbca9 | = "draw_coatPocket2aimPistols"
    PUSH 0x2                            ; 004fbcae
    PUSH 0x1                            ; 004fbcb0
    PUSH EBX                            ; 004fbcb2
    CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760 ; 004fbcb3
        ;   XREF to: 0042a760 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_addLayerAction_FUN_0042a760()
    ADD ESP,0x14                        ; 004fbcb8
    MOV EAX,EBX                         ; 004fbcbb
    POP EBX                             ; 004fbcbd
    RET                                 ; 004fbcbe

