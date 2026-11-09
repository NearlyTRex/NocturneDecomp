; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CFireEffect_renderDecals_FUN_004b54a0(CFireEffect *this_ptr,int render_mode,int render_completeness)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   render_mode
; int              Stack[0xc]:4   render_completeness
;
; XREF[4]:
;   core_set.cpp_CDemonSet_expireDecals_FUN_00556040 at 00556066
;   core_set.cpp_CDemonSet_renderDecals_FUN_00556080 at 005560be
;   core_set.cpp_CDemonSet_setCameraView_FUN_0054f0d0 at 0054fb30
;   core_set.cpp_FUN_00550580 at 005509ff
;
; Referenced Globals:
;   undefined4 DAT_01c6eaa0
;   undefined4 DAT_01c726a8
;   undefined4 g_StakePool[0].field600_0x258
;   undefined4 g_StakePool[1].field600_0x258
;
; Called Functions:
;   core_fire.cpp_CBulletHole_render_FUN_004ac770
;   core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0
;   core_fire.cpp_CCrater_render_FUN_004b23a0
;   core_fire.cpp_FUN_004ace60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b54a0
        ;   Label: core_fire.cpp_CFireEffect_renderDecals_FUN_004b54a0
    PUSH ESI                            ; 004b54a1
    PUSH EDI                            ; 004b54a2
    PUSH EBP                            ; 004b54a3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b54a4
    PUSH 0x1c6eaa8                      ; 004b54a8
    CALL core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0 ; 004b54ad
        ;   XREF to: 004ac6f0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_setupRenderState_FUN_004ac6f0(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004b54b2
    CMP dword ptr [ESP + 0x18],0x0      ; 004b54b5
    JZ 0x004b5585                       ; 004b54ba
        ;   XREF to: 004b5585 (CONDITIONAL_JUMP)  ; LAB_004b5585
    MOV EBX,dword ptr [0x01c6eaa0]      ; 004b54c0 | DAT_01c6eaa0
    XOR ESI,ESI                         ; 004b54c6
    TEST EBX,EBX                        ; 004b54c8
    JLE 0x004b54f4                      ; 004b54ca
        ;   XREF to: 004b54f4 (CONDITIONAL_JUMP)  ; LAB_004b54f4
    XOR EBX,EBX                         ; 004b54cc
    CMP dword ptr [EBX + 0x1c6eab8],0x0 ; 004b54ce
        ;   Label: LAB_004b54ce
    JNZ 0x004b54e7                      ; 004b54d5
        ;   XREF to: 004b54e7 (CONDITIONAL_JUMP)  ; LAB_004b54e7
    MOV EAX,0x1c6eaa8                   ; 004b54d7
    ADD EAX,EBX                         ; 004b54dc
    PUSH EAX                            ; 004b54de
    CALL core_fire.cpp_CBulletHole_render_FUN_004ac770 ; 004b54df
        ;   XREF to: 004ac770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004ac770(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004b54e4
    MOV EAX,[0x01c6eaa0]                ; 004b54e7 | DAT_01c6eaa0
        ;   Label: LAB_004b54e7
    INC ESI                             ; 004b54ec
    ADD EBX,0x3c                        ; 004b54ed
    CMP ESI,EAX                         ; 004b54f0
    JL 0x004b54ce                       ; 004b54f2
        ;   XREF to: 004b54ce (CONDITIONAL_JUMP)  ; LAB_004b54ce
    CMP dword ptr [ESP + 0x18],0x0      ; 004b54f4
        ;   Label: LAB_004b54f4
    JZ 0x004b554c                       ; 004b54f9
        ;   XREF to: 004b554c (CONDITIONAL_JUMP)  ; LAB_004b554c
    MOV ECX,dword ptr [0x01c726a8]      ; 004b54fb | DAT_01c726a8
    XOR ESI,ESI                         ; 004b5501
    TEST ECX,ECX                        ; 004b5503
    JLE 0x004b554c                      ; 004b5505
        ;   XREF to: 004b554c (CONDITIONAL_JUMP)  ; LAB_004b554c
    MOV EDI,0x1c726b0                   ; 004b5507
    XOR EBX,EBX                         ; 004b550c
    MOV EAX,dword ptr [EDI + 0x258]     ; 004b550e | g_StakePool[0].field600_0x258 | g_StakePool[1].field600_0x258
        ;   Label: LAB_004b550e
    TEST EAX,EAX                        ; 004b5514
    JZ 0x004b55d7                       ; 004b5516
        ;   XREF to: 004b55d7 (CONDITIONAL_JUMP)  ; LAB_004b55d7
    CMP dword ptr [EBX + 0x1c726b0],0x0 ; 004b551c
    JZ 0x004b5535                       ; 004b5523
        ;   XREF to: 004b5535 (CONDITIONAL_JUMP)  ; LAB_004b5535
    MOV EAX,0x1c726b0                   ; 004b5525
        ;   Label: LAB_004b5525
    ADD EAX,EBX                         ; 004b552a
    PUSH EAX                            ; 004b552c
    CALL core_fire.cpp_FUN_004ace60     ; 004b552d
        ;   XREF to: 004ace60 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004ace60(CStake * this_ptr)
    ADD ESP,0x4                         ; 004b5532
    MOV ECX,dword ptr [0x01c726a8]      ; 004b5535 | DAT_01c726a8
        ;   Label: LAB_004b5535
    ADD EBX,0x260                       ; 004b553b
    INC ESI                             ; 004b5541
    ADD EDI,0x260                       ; 004b5542
    CMP ESI,ECX                         ; 004b5548
    JL 0x004b550e                       ; 004b554a
        ;   XREF to: 004b550e (CONDITIONAL_JUMP)  ; LAB_004b550e
    MOV EBX,dword ptr [ESP + 0x18]      ; 004b554c
        ;   Label: LAB_004b554c
    TEST EBX,EBX                        ; 004b5550
    JZ 0x004b55e6                       ; 004b5552
        ;   XREF to: 004b55e6 (CONDITIONAL_JUMP)  ; LAB_004b55e6
    MOV EBX,0x1cb4f60                   ; 004b5558
    LEA ESI,[EBX + 0x8c0]               ; 004b555d
    PUSH EBX                            ; 004b5563
        ;   Label: LAB_004b5563
    CALL core_fire.cpp_CCrater_render_FUN_004b23a0 ; 004b5564
        ;   XREF to: 004b23a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004b23a0(CCrater * this_ptr)
    ADD EBX,0x70                        ; 004b5569
    ADD ESP,0x4                         ; 004b556c
    CMP EBX,ESI                         ; 004b556f
    JNZ 0x004b5563                      ; 004b5571
        ;   XREF to: 004b5563 (CONDITIONAL_JUMP)  ; LAB_004b5563
    LEA EAX,[EAX]                       ; 004b5573
    LEA EDX,[EDX]                       ; 004b5579
    NOP                                 ; 004b557f
    POP EBP                             ; 004b5580
        ;   Label: LAB_004b5580
    POP EDI                             ; 004b5581
    POP ESI                             ; 004b5582
    POP EBX                             ; 004b5583
    RET                                 ; 004b5584
    MOV ECX,dword ptr [0x01c6eaa0]      ; 004b5585 | DAT_01c6eaa0
        ;   Label: LAB_004b5585
    XOR ESI,ESI                         ; 004b558b
    TEST ECX,ECX                        ; 004b558d
    JLE 0x004b54f4                      ; 004b558f
        ;   XREF to: 004b54f4 (CONDITIONAL_JUMP)  ; LAB_004b54f4
    XOR EBX,EBX                         ; 004b5595
    XOR EDI,EDI                         ; 004b5597
    CMP EDI,dword ptr [EBX + 0x1c6eab4] ; 004b5599
        ;   Label: LAB_004b5599
    JZ 0x004b55c3                       ; 004b559f
        ;   XREF to: 004b55c3 (CONDITIONAL_JUMP)  ; LAB_004b55c3
    CMP EDI,dword ptr [EBX + 0x1c6eab8] ; 004b55a1
    JNZ 0x004b55c3                      ; 004b55a7
        ;   XREF to: 004b55c3 (CONDITIONAL_JUMP)  ; LAB_004b55c3
    MOV EAX,0x1c6eaa8                   ; 004b55a9
    ADD EAX,EBX                         ; 004b55ae
    PUSH EAX                            ; 004b55b0
    CALL core_fire.cpp_CBulletHole_render_FUN_004ac770 ; 004b55b1
        ;   XREF to: 004ac770 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CBulletHole_render_FUN_004ac770(CBulletHole * this_ptr)
    ADD ESP,0x4                         ; 004b55b6
    TEST EBP,EBP                        ; 004b55b9
    JZ 0x004b55c3                       ; 004b55bb
        ;   XREF to: 004b55c3 (CONDITIONAL_JUMP)  ; LAB_004b55c3
    MOV dword ptr [EBX + 0x1c6eab4],EDI ; 004b55bd
    MOV ECX,dword ptr [0x01c6eaa0]      ; 004b55c3 | DAT_01c6eaa0
        ;   Label: LAB_004b55c3
    INC ESI                             ; 004b55c9
    ADD EBX,0x3c                        ; 004b55ca
    CMP ESI,ECX                         ; 004b55cd
    JGE 0x004b54f4                      ; 004b55cf
        ;   XREF to: 004b54f4 (CONDITIONAL_JUMP)  ; LAB_004b54f4
    JMP 0x004b5599                      ; 004b55d5
        ;   XREF to: 004b5599 (UNCONDITIONAL_JUMP)  ; LAB_004b5599
    MOV dword ptr [EBX + 0x1c726b0],0x1 ; 004b55d7
        ;   Label: LAB_004b55d7
    JMP 0x004b5525                      ; 004b55e1
        ;   XREF to: 004b5525 (UNCONDITIONAL_JUMP)  ; LAB_004b5525
    XOR EDI,EDI                         ; 004b55e6
        ;   Label: LAB_004b55e6
    CMP EDI,dword ptr [EBX + 0x1cb4f64] ; 004b55e8
        ;   Label: LAB_004b55e8
    JZ 0x004b560a                       ; 004b55ee
        ;   XREF to: 004b560a (CONDITIONAL_JUMP)  ; LAB_004b560a
    MOV ESI,0x1cb4f60                   ; 004b55f0
    ADD ESI,EBX                         ; 004b55f5
    PUSH ESI                            ; 004b55f7
    CALL core_fire.cpp_CCrater_render_FUN_004b23a0 ; 004b55f8
        ;   XREF to: 004b23a0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CCrater_render_FUN_004b23a0(CCrater * this_ptr)
    ADD ESP,0x4                         ; 004b55fd
    TEST EBP,EBP                        ; 004b5600
    JZ 0x004b560a                       ; 004b5602
        ;   XREF to: 004b560a (CONDITIONAL_JUMP)  ; LAB_004b560a
    MOV dword ptr [EBX + 0x1cb4f64],EDI ; 004b5604
    ADD EBX,0x70                        ; 004b560a
        ;   Label: LAB_004b560a
    CMP EBX,0x8c0                       ; 004b560d
    JZ 0x004b5580                       ; 004b5613
        ;   XREF to: 004b5580 (CONDITIONAL_JUMP)  ; LAB_004b5580
    JMP 0x004b55e8                      ; 004b5619
        ;   XREF to: 004b55e8 (UNCONDITIONAL_JUMP)  ; LAB_004b55e8

