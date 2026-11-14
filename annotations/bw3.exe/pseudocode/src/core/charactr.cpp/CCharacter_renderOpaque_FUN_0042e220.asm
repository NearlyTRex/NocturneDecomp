; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x20]:1  local_20
;
; XREF[14]:
;   core_baal.cpp_CBaal_renderOpaque_FUN_00597940 at 0059794f
;   core_bird.cpp_CBird_renderOpaque_FUN_0040fe90 at 0040feca
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_00418f60 at 00418f79
;   core_carved.cpp_CCarved_renderOpaque_FUN_00428640 at 00428645
;   core_construc.cpp_CConstruct_renderOpaque_FUN_00443c90 at 00443c95
;   core_demnfolk.cpp_CDemnfolk_renderOpaque_FUN_004581c0 at 004581f0
;   core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004c5e40 at 004c5e45
;   core_kedward.cpp_CKedward_renderOpaque_FUN_00591670 at 00591675
;   core_mattnntt.cpp_CMattanntote_renderOpaque_FUN_00593700 at 00593705
;   core_npc.cpp_CNPC_renderOpaque_FUN_00509560 at 005095aa
;   ... and 4 more
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01d8e40c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_FUN_0042d8e0
;   core_motion.cpp_FUN_004fcdc0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e220
        ;   Label: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
    PUSH EBP                            ; 0042e221
    SUB ESP,0x30                        ; 0042e222
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0042e225
    MOV EDX,dword ptr [0x005f2afc]      ; 0042e229 | DAT_005f2afc
    PUSH EDX                            ; 0042e22f | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860 ; 0042e230
        ;   XREF to: 0046d860 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_0046d860(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042e235
    TEST EAX,EAX                        ; 0042e238
    JZ 0x0042e2ed                       ; 0042e23a
        ;   XREF to: 0042e2ed (CONDITIONAL_JUMP)  ; LAB_0042e2ed
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0042e240
        ;   Label: LAB_0042e240
    JNZ 0x0042e2f8                      ; 0042e247
        ;   XREF to: 0042e2f8 (CONDITIONAL_JUMP)  ; LAB_0042e2f8
    PUSH EDI                            ; 0042e24d
    PUSH ESI                            ; 0042e24e
    PUSH EBX                            ; 0042e24f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0042e250
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042e255
    PUSH 0x0                            ; 0042e258
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042e25a
    PUSH EBX                            ; 0042e260
    LEA ESI,[ESP + 0x10]                ; 0042e261
    LEA EDI,[ESP + 0x28]                ; 0042e265
    CALL dword ptr [EAX + 0x1c]         ; 0042e269
    MOV ECX,0x6                         ; 0042e26c
    ADD ESP,0x4                         ; 0042e271
    LEA EAX,[ESP + 0x24]                ; 0042e274
    LEA ESI,[ESP + 0xc]                 ; 0042e278
    PUSH EAX                            ; 0042e27c
    MOVSD.REP ES:EDI,ESI                ; 0042e27d
    CALL core_box.cpp_FUN_0041daf0      ; 0042e27f
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0042e284
    MOV ESI,EAX                         ; 0042e287
    TEST EAX,EAX                        ; 0042e289
    JZ 0x0042e2da                       ; 0042e28b
        ;   XREF to: 0042e2da (CONDITIONAL_JUMP)  ; LAB_0042e2da
    PUSH EBX                            ; 0042e28d
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0042e28e
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0042e298
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    MOV EDI,dword ptr [0x01d8e40c]      ; 0042e29d | DAT_01d8e40c
    ADD ESP,0x4                         ; 0042e2a3
    TEST EDI,EDI                        ; 0042e2a6
    JZ 0x0042e2da                       ; 0042e2a8
        ;   XREF to: 0042e2da (CONDITIONAL_JUMP)  ; LAB_0042e2da
    MOV EBP,dword ptr [0x005f2afc]      ; 0042e2aa | DAT_005f2afc
    PUSH EBP                            ; 0042e2b0 | DAT_01bdd7e4
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540 ; 0042e2b1
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_0046d540(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042e2b6
    TEST EAX,EAX                        ; 0042e2b9
    JNZ 0x0042e2da                      ; 0042e2bb
        ;   XREF to: 0042e2da (CONDITIONAL_JUMP)  ; LAB_0042e2da
    PUSH EBX                            ; 0042e2bd
    LEA EAX,[EBX + 0x158]               ; 0042e2be
    PUSH EAX                            ; 0042e2c4
    CALL core_motion.cpp_FUN_004fcdc0   ; 0042e2c5
        ;   XREF to: 004fcdc0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_004fcdc0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042e2ca
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042e2cd
    PUSH EBX                            ; 0042e2d3
    CALL dword ptr [EAX + 0x58]         ; 0042e2d4
    ADD ESP,0x4                         ; 0042e2d7
    PUSH EBX                            ; 0042e2da
        ;   Label: LAB_0042e2da
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0042e2db
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042e2e0
    MOV EAX,ESI                         ; 0042e2e3
    POP ESI                             ; 0042e2e5
    POP EDI                             ; 0042e2e6
    ADD ESP,0x30                        ; 0042e2e7
    POP EBP                             ; 0042e2ea
    POP EBX                             ; 0042e2eb
    RET                                 ; 0042e2ec
    MOV dword ptr [EBX + 0x27bc],EAX    ; 0042e2ed
        ;   Label: LAB_0042e2ed
    JMP 0x0042e240                      ; 0042e2f3
        ;   XREF to: 0042e240 (UNCONDITIONAL_JUMP)  ; LAB_0042e240
    XOR EAX,EAX                         ; 0042e2f8
        ;   Label: LAB_0042e2f8
    ADD ESP,0x30                        ; 0042e2fa
    POP EBP                             ; 0042e2fd
    POP EBX                             ; 0042e2fe
    RET                                 ; 0042e2ff

