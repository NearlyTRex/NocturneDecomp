; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_renderCharacter_FUN_00425c20(int param_1)
;
;
; XREF[9]:
;   core_batman.cpp_FUN_00414340 at 004143e7
;   core_biggs.cpp_FUN_00415760 at 00415865
;   core_boneguy.cpp_FUN_00419c20 at 00419c9d
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 at 004264a6
;   core_charactr.cpp_FUN_00426510 at 00426551
;   core_dracbrid.cpp_FUN_0045a260 at 0045a35b
;   core_moloch.cpp_FUN_004de550 at 004de66c
;   core_passngr.cpp_FUN_004efa60 at 004efac2
;   core_succubus.cpp_FUN_00541640 at 005417af
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005b9354
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01c77808
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0
;   core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80
;   core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0
;   core_charactr.cpp_FUN_004270e0
;   core_cloth.cpp_CClothList_render_FUN_004385a0
;   core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425c20
        ;   Label: core_charactr.cpp_CCharacter_renderCharacter_FUN_00425c20
    PUSH EDI                            ; 00425c21
    MOV EBX,dword ptr [ESP + 0xc]       ; 00425c22
    MOV EDX,dword ptr [EBX + 0xb640]    ; 00425c26
    TEST EDX,EDX                        ; 00425c2c
    JZ 0x00425c86                       ; 00425c2e
        ;   XREF to: 00425c86 (CONDITIONAL_JUMP)  ; LAB_00425c86
    MOV ECX,dword ptr [0x005ae704]      ; 00425c30 | DAT_005ae704
        ;   Label: LAB_00425c30
    PUSH ECX                            ; 00425c36 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090 ; 00425c37
        ;   XREF to: 00461090 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_00461090()
    ADD ESP,0x4                         ; 00425c3c
    TEST EAX,EAX                        ; 00425c3f
    JNZ 0x00425c6b                      ; 00425c41
        ;   XREF to: 00425c6b (CONDITIONAL_JUMP)  ; LAB_00425c6b
    CMP dword ptr [EBX + 0x260c],0x0    ; 00425c43
    JNZ 0x00425c55                      ; 00425c4a
        ;   XREF to: 00425c55 (CONDITIONAL_JUMP)  ; LAB_00425c55
    PUSH EBX                            ; 00425c4c
    CALL core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80 ; 00425c4d
        ;   XREF to: 00426e80 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderBurn_FUN_00426e80()
    ADD ESP,0x4                         ; 00425c52
    FLDZ                                ; 00425c55
        ;   Label: LAB_00425c55
    FCOMP float ptr [EBX + 0xb648]      ; 00425c57
    FNSTSW AX                           ; 00425c5d
    SAHF                                ; 00425c5f
    JNC 0x00425c6b                      ; 00425c60
        ;   XREF to: 00425c6b (CONDITIONAL_JUMP)  ; LAB_00425c6b
    PUSH EBX                            ; 00425c62
    CALL core_charactr.cpp_FUN_004270e0 ; 00425c63
        ;   XREF to: 004270e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004270e0()
    ADD ESP,0x4                         ; 00425c68
    PUSH EBX                            ; 00425c6b
        ;   Label: LAB_00425c6b
    CALL core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0 ; 00425c6c
        ;   XREF to: 004265a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderAttachedModels_FUN_004265a0()
    MOV EAX,[0x005b9354]                ; 00425c71 | DAT_005b9354 | DAT_01c775ec
    MOV EDI,dword ptr [EAX + 0x21c]     ; 00425c76 | DAT_01c77808
    ADD ESP,0x4                         ; 00425c7c
    TEST EDI,EDI                        ; 00425c7f
    JNZ 0x00425cb0                      ; 00425c81
        ;   XREF to: 00425cb0 (CONDITIONAL_JUMP)  ; LAB_00425cb0
    POP EDI                             ; 00425c83
    POP EBX                             ; 00425c84
    RET                                 ; 00425c85
    PUSH ESI                            ; 00425c86
        ;   Label: LAB_00425c86
    PUSH EDX                            ; 00425c87
    PUSH 0x1                            ; 00425c88
    PUSH -0x1                           ; 00425c8a
    PUSH -0x1                           ; 00425c8c
    LEA ESI,[EBX + 0x150]               ; 00425c8e
    PUSH ESI                            ; 00425c94
    CALL core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0 ; 00425c95
        ;   XREF to: 0051d9d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_renderWithOptions_FUN_0051d9d0()
    ADD ESP,0x14                        ; 00425c9a
    PUSH ESI                            ; 00425c9d
    LEA EAX,[EBX + 0x2a8c]              ; 00425c9e
    PUSH EAX                            ; 00425ca4
    CALL core_cloth.cpp_CClothList_render_FUN_004385a0 ; 00425ca5
        ;   XREF to: 004385a0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_CClothList_render_FUN_004385a0()
    ADD ESP,0x8                         ; 00425caa
    POP ESI                             ; 00425cad
    JMP 0x00425c30                      ; 00425cae
        ;   XREF to: 00425c30 (UNCONDITIONAL_JUMP)  ; LAB_00425c30
    PUSH EBX                            ; 00425cb0
        ;   Label: LAB_00425cb0
    CALL core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0 ; 00425cb1
        ;   XREF to: 00425cc0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0()
    ADD ESP,0x4                         ; 00425cb6
    POP EDI                             ; 00425cb9
    POP EBX                             ; 00425cba
    RET                                 ; 00425cbb

