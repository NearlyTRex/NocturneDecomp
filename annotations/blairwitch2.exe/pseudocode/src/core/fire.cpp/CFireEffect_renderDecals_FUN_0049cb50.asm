; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_0049cb50(CFireEffect *this_ptr,int render_mode,int render_completeness)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; int              Stack[0xc]:4   render_completeness
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_00534be0 at 00534c06
;   core_set.cpp_CDemonSet_renderDecals_FUN_00534c20 at 00534c5e
;   core_set.cpp_CDemonSet_setCameraView_FUN_0052ddf0 at 0052e850
;   core_set.cpp_FUN_0052f2a0 at 0052f71f
;
; Referenced Globals:
;   undefined4 DAT_01c558e0
;   undefined4 DAT_01c594e8
;   undefined4 g_StakePool[0].field600_0x258
;   undefined4 g_StakePool[1].field600_0x258
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_00493dd0
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50
;   core_fire.cpp_CCrater_render_FUN_00499a00
;   core_fire.cpp_FUN_004944c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049cb50
        ;   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_0049cb50
    PUSH ESI                            ; 0049cb51
    PUSH EDI                            ; 0049cb52
    PUSH EBP                            ; 0049cb53
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049cb54
    PUSH 0x1c558e8                      ; 0049cb58
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50 ; 0049cb5d
        ;   XREF to: 00493d50 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_00493d50(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0049cb62
    CMP dword ptr [ESP + 0x18],0x0      ; 0049cb65
    JZ 0x0049cc35                       ; 0049cb6a
        ;   XREF to: 0049cc35 (CONDITIONAL_JUMP)  ; LAB_0049cc35
    MOV EBX,dword ptr [0x01c558e0]      ; 0049cb70 | DAT_01c558e0
    XOR ESI,ESI                         ; 0049cb76
    TEST EBX,EBX                        ; 0049cb78
    JLE 0x0049cba4                      ; 0049cb7a
        ;   XREF to: 0049cba4 (CONDITIONAL_JUMP)  ; LAB_0049cba4
    XOR EBX,EBX                         ; 0049cb7c
    CMP dword ptr [EBX + 0x1c558f8],0x0 ; 0049cb7e
        ;   Label: LAB_0049cb7e
    JNZ 0x0049cb97                      ; 0049cb85
        ;   XREF to: 0049cb97 (CONDITIONAL_JUMP)  ; LAB_0049cb97
    MOV EAX,0x1c558e8                   ; 0049cb87
    ADD EAX,EBX                         ; 0049cb8c
    PUSH EAX                            ; 0049cb8e
    CALL core_fire.cpp_CBulletHole_render_FUN_00493dd0 ; 0049cb8f
        ;   XREF to: 00493dd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00493dd0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0049cb94
    MOV EAX,[0x01c558e0]                ; 0049cb97 | DAT_01c558e0
        ;   Label: LAB_0049cb97
    INC ESI                             ; 0049cb9c
    ADD EBX,0x3c                        ; 0049cb9d
    CMP ESI,EAX                         ; 0049cba0
    JL 0x0049cb7e                       ; 0049cba2
        ;   XREF to: 0049cb7e (CONDITIONAL_JUMP)  ; LAB_0049cb7e
    CMP dword ptr [ESP + 0x18],0x0      ; 0049cba4
        ;   Label: LAB_0049cba4
    JZ 0x0049cbfc                       ; 0049cba9
        ;   XREF to: 0049cbfc (CONDITIONAL_JUMP)  ; LAB_0049cbfc
    MOV ECX,dword ptr [0x01c594e8]      ; 0049cbab | DAT_01c594e8
    XOR ESI,ESI                         ; 0049cbb1
    TEST ECX,ECX                        ; 0049cbb3
    JLE 0x0049cbfc                      ; 0049cbb5
        ;   XREF to: 0049cbfc (CONDITIONAL_JUMP)  ; LAB_0049cbfc
    MOV EDI,0x1c594f0                   ; 0049cbb7
    XOR EBX,EBX                         ; 0049cbbc
    MOV EAX,dword ptr [EDI + 0x258]     ; 0049cbbe | g_StakePool[0].field600_0x258 | g_StakePool[1].field600_0x258
        ;   Label: LAB_0049cbbe
    TEST EAX,EAX                        ; 0049cbc4
    JZ 0x0049cc87                       ; 0049cbc6
        ;   XREF to: 0049cc87 (CONDITIONAL_JUMP)  ; LAB_0049cc87
    CMP dword ptr [EBX + 0x1c594f0],0x0 ; 0049cbcc
    JZ 0x0049cbe5                       ; 0049cbd3
        ;   XREF to: 0049cbe5 (CONDITIONAL_JUMP)  ; LAB_0049cbe5
    MOV EAX,0x1c594f0                   ; 0049cbd5
        ;   Label: LAB_0049cbd5
    ADD EAX,EBX                         ; 0049cbda
    PUSH EAX                            ; 0049cbdc
    CALL core_fire.cpp_FUN_004944c0     ; 0049cbdd
        ;   XREF to: 004944c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004944c0(CStake * this_ptr)
    ADD ESP,0x4                         ; 0049cbe2
    MOV ECX,dword ptr [0x01c594e8]      ; 0049cbe5 | DAT_01c594e8
        ;   Label: LAB_0049cbe5
    ADD EBX,0x260                       ; 0049cbeb
    INC ESI                             ; 0049cbf1
    ADD EDI,0x260                       ; 0049cbf2
    CMP ESI,ECX                         ; 0049cbf8
    JL 0x0049cbbe                       ; 0049cbfa
        ;   XREF to: 0049cbbe (CONDITIONAL_JUMP)  ; LAB_0049cbbe
    MOV EBX,dword ptr [ESP + 0x18]      ; 0049cbfc
        ;   Label: LAB_0049cbfc
    TEST EBX,EBX                        ; 0049cc00
    JZ 0x0049cc96                       ; 0049cc02
        ;   XREF to: 0049cc96 (CONDITIONAL_JUMP)  ; LAB_0049cc96
    MOV EBX,0x1c9c4d4                   ; 0049cc08
    LEA ESI,[EBX + 0x8c0]               ; 0049cc0d
    PUSH EBX                            ; 0049cc13
        ;   Label: LAB_0049cc13
    CALL core_fire.cpp_CCrater_render_FUN_00499a00 ; 0049cc14
        ;   XREF to: 00499a00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00499a00(CCrater * this_ptr)
    ADD EBX,0x70                        ; 0049cc19
    ADD ESP,0x4                         ; 0049cc1c
    CMP EBX,ESI                         ; 0049cc1f
    JNZ 0x0049cc13                      ; 0049cc21
        ;   XREF to: 0049cc13 (CONDITIONAL_JUMP)  ; LAB_0049cc13
    LEA EAX,[EAX]                       ; 0049cc23
    LEA EDX,[EDX]                       ; 0049cc29
    NOP                                 ; 0049cc2f
    POP EBP                             ; 0049cc30
        ;   Label: LAB_0049cc30
    POP EDI                             ; 0049cc31
    POP ESI                             ; 0049cc32
    POP EBX                             ; 0049cc33
    RET                                 ; 0049cc34
    MOV ECX,dword ptr [0x01c558e0]      ; 0049cc35 | DAT_01c558e0
        ;   Label: LAB_0049cc35
    XOR ESI,ESI                         ; 0049cc3b
    TEST ECX,ECX                        ; 0049cc3d
    JLE 0x0049cba4                      ; 0049cc3f
        ;   XREF to: 0049cba4 (CONDITIONAL_JUMP)  ; LAB_0049cba4
    XOR EBX,EBX                         ; 0049cc45
    XOR EDI,EDI                         ; 0049cc47
    CMP EDI,dword ptr [EBX + 0x1c558f4] ; 0049cc49
        ;   Label: LAB_0049cc49
    JZ 0x0049cc73                       ; 0049cc4f
        ;   XREF to: 0049cc73 (CONDITIONAL_JUMP)  ; LAB_0049cc73
    CMP EDI,dword ptr [EBX + 0x1c558f8] ; 0049cc51
    JNZ 0x0049cc73                      ; 0049cc57
        ;   XREF to: 0049cc73 (CONDITIONAL_JUMP)  ; LAB_0049cc73
    MOV EAX,0x1c558e8                   ; 0049cc59
    ADD EAX,EBX                         ; 0049cc5e
    PUSH EAX                            ; 0049cc60
    CALL core_fire.cpp_CBulletHole_render_FUN_00493dd0 ; 0049cc61
        ;   XREF to: 00493dd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_00493dd0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 0049cc66
    TEST EBP,EBP                        ; 0049cc69
    JZ 0x0049cc73                       ; 0049cc6b
        ;   XREF to: 0049cc73 (CONDITIONAL_JUMP)  ; LAB_0049cc73
    MOV dword ptr [EBX + 0x1c558f4],EDI ; 0049cc6d
    MOV ECX,dword ptr [0x01c558e0]      ; 0049cc73 | DAT_01c558e0
        ;   Label: LAB_0049cc73
    INC ESI                             ; 0049cc79
    ADD EBX,0x3c                        ; 0049cc7a
    CMP ESI,ECX                         ; 0049cc7d
    JGE 0x0049cba4                      ; 0049cc7f
        ;   XREF to: 0049cba4 (CONDITIONAL_JUMP)  ; LAB_0049cba4
    JMP 0x0049cc49                      ; 0049cc85
        ;   XREF to: 0049cc49 (UNCONDITIONAL_JUMP)  ; LAB_0049cc49
    MOV dword ptr [EBX + 0x1c594f0],0x1 ; 0049cc87
        ;   Label: LAB_0049cc87
    JMP 0x0049cbd5                      ; 0049cc91
        ;   XREF to: 0049cbd5 (UNCONDITIONAL_JUMP)  ; LAB_0049cbd5
    XOR EDI,EDI                         ; 0049cc96
        ;   Label: LAB_0049cc96
    CMP EDI,dword ptr [EBX + 0x1c9c4d8] ; 0049cc98
        ;   Label: LAB_0049cc98
    JZ 0x0049ccba                       ; 0049cc9e
        ;   XREF to: 0049ccba (CONDITIONAL_JUMP)  ; LAB_0049ccba
    MOV ESI,0x1c9c4d4                   ; 0049cca0
    ADD ESI,EBX                         ; 0049cca5
    PUSH ESI                            ; 0049cca7
    CALL core_fire.cpp_CCrater_render_FUN_00499a00 ; 0049cca8
        ;   XREF to: 00499a00 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_00499a00(CCrater * this_ptr)
    ADD ESP,0x4                         ; 0049ccad
    TEST EBP,EBP                        ; 0049ccb0
    JZ 0x0049ccba                       ; 0049ccb2
        ;   XREF to: 0049ccba (CONDITIONAL_JUMP)  ; LAB_0049ccba
    MOV dword ptr [EBX + 0x1c9c4d8],EDI ; 0049ccb4
    ADD EBX,0x70                        ; 0049ccba
        ;   Label: LAB_0049ccba
    CMP EBX,0x8c0                       ; 0049ccbd
    JZ 0x0049cc30                       ; 0049ccc3
        ;   XREF to: 0049cc30 (CONDITIONAL_JUMP)  ; LAB_0049cc30
    JMP 0x0049cc98                      ; 0049ccc9
        ;   XREF to: 0049cc98 (UNCONDITIONAL_JUMP)  ; LAB_0049cc98

