; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x38]:1  local_38
; undefined        Stack[-0x20]:1  local_20
;
; XREF[20]:
;   core_bird.cpp_CBird_renderOpaque_FUN_00415690 at 004156ca
;   core_boneguy.cpp_CBoneGuy_renderOpaque_FUN_0041cfd0 at 0041cfe9
;   core_carved.cpp_CCarved_renderOpaque_FUN_0042b3b0 at 0042b3b5
;   core_colonel.cpp_CColonel_renderOpaque_FUN_004451b0 at 004451b5
;   core_construc.cpp_CConstruct_renderOpaque_FUN_00446e20 at 00446e25
;   core_demnfolk.cpp_CDemnfolk_renderOpaque_FUN_0045bfe0 at 0045c010
;   core_doc.cpp_CDoc_renderOpaque_FUN_00471af0 at 00471b09
;   core_gabriela.cpp_CGabriella_renderOpaque_FUN_004c9fa0 at 004c9faa
;   core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004dd2c0 at 004dd2c5
;   core_haystack.cpp_CHaystack_renderOpaque_FUN_004ea130 at 004ea135
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_01bc120c
;   undefined4 DAT_01d39d34
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0
;   core_box.cpp_FUN_004207b0
;   core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960
;   core_motion.cpp_FUN_005254b0
;   engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180
;   engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f240
        ;   Label: core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
    PUSH EBP                            ; 0042f241
    SUB ESP,0x30                        ; 0042f242
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0042f245
    MOV EDX,dword ptr [0x00612560]      ; 0042f249 | DAT_00612560
    PUSH EDX                            ; 0042f24f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180 ; 0042f250
        ;   XREF to: 00484180 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getAlphaMask_FUN_00484180(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042f255
    TEST EAX,EAX                        ; 0042f258
    JZ 0x0042f30d                       ; 0042f25a
        ;   XREF to: 0042f30d (CONDITIONAL_JUMP)  ; LAB_0042f30d
    CMP dword ptr [EBX + 0x24fc],0x0    ; 0042f260
        ;   Label: LAB_0042f260
    JNZ 0x0042f318                      ; 0042f267
        ;   XREF to: 0042f318 (CONDITIONAL_JUMP)  ; LAB_0042f318
    PUSH EDI                            ; 0042f26d
    PUSH ESI                            ; 0042f26e
    PUSH EBX                            ; 0042f26f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0 ; 0042f270
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f275
    PUSH 0x0                            ; 0042f278
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f27a
    PUSH EBX                            ; 0042f280
    LEA ESI,[ESP + 0x10]                ; 0042f281
    LEA EDI,[ESP + 0x28]                ; 0042f285
    CALL dword ptr [EAX + 0x1c]         ; 0042f289
    MOV ECX,0x6                         ; 0042f28c
    ADD ESP,0x4                         ; 0042f291
    LEA EAX,[ESP + 0x24]                ; 0042f294
    LEA ESI,[ESP + 0xc]                 ; 0042f298
    PUSH EAX                            ; 0042f29c
    MOVSD.REP ES:EDI,ESI                ; 0042f29d
    CALL core_box.cpp_FUN_004207b0      ; 0042f29f
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_004207b0()
    ADD ESP,0x8                         ; 0042f2a4
    MOV ESI,EAX                         ; 0042f2a7
    TEST EAX,EAX                        ; 0042f2a9
    JZ 0x0042f2fa                       ; 0042f2ab
        ;   XREF to: 0042f2fa (CONDITIONAL_JUMP)  ; LAB_0042f2fa
    PUSH EBX                            ; 0042f2ad
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0042f2ae
    CALL core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960 ; 0042f2b8
        ;   XREF to: 0042e960 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderCharacter_FUN_0042e960(CCharacter * this_ptr)
    MOV EDI,dword ptr [0x01d39d34]      ; 0042f2bd | DAT_01d39d34
    ADD ESP,0x4                         ; 0042f2c3
    TEST EDI,EDI                        ; 0042f2c6
    JZ 0x0042f2fa                       ; 0042f2c8
        ;   XREF to: 0042f2fa (CONDITIONAL_JUMP)  ; LAB_0042f2fa
    MOV EBP,dword ptr [0x00612560]      ; 0042f2ca | DAT_00612560
    PUSH EBP                            ; 0042f2d0 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60 ; 0042f2d1
        ;   XREF to: 00483e60 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_isShadowPass_FUN_00483e60(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 0042f2d6
    TEST EAX,EAX                        ; 0042f2d9
    JNZ 0x0042f2fa                      ; 0042f2db
        ;   XREF to: 0042f2fa (CONDITIONAL_JUMP)  ; LAB_0042f2fa
    PUSH EBX                            ; 0042f2dd
    LEA EAX,[EBX + 0x158]               ; 0042f2de
    PUSH EAX                            ; 0042f2e4
    CALL core_motion.cpp_FUN_005254b0   ; 0042f2e5
        ;   XREF to: 005254b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_FUN_005254b0(CMotionController * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0042f2ea
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f2ed
    PUSH EBX                            ; 0042f2f3
    CALL dword ptr [EAX + 0x58]         ; 0042f2f4
    ADD ESP,0x4                         ; 0042f2f7
    PUSH EBX                            ; 0042f2fa
        ;   Label: LAB_0042f2fa
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0 ; 0042f2fb
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f300
    MOV EAX,ESI                         ; 0042f303
    POP ESI                             ; 0042f305
    POP EDI                             ; 0042f306
    ADD ESP,0x30                        ; 0042f307
    POP EBP                             ; 0042f30a
    POP EBX                             ; 0042f30b
    RET                                 ; 0042f30c
    MOV dword ptr [EBX + 0x27bc],EAX    ; 0042f30d
        ;   Label: LAB_0042f30d
    JMP 0x0042f260                      ; 0042f313
        ;   XREF to: 0042f260 (UNCONDITIONAL_JUMP)  ; LAB_0042f260
    XOR EAX,EAX                         ; 0042f318
        ;   Label: LAB_0042f318
    ADD ESP,0x30                        ; 0042f31a
    POP EBP                             ; 0042f31d
    POP EBX                             ; 0042f31e
    RET                                 ; 0042f31f

