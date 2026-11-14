; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_werewolf_cpp_CWerewolf_renderTransparent_FUN_0058d670(CWerewolf *this_ptr)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005ee756
;   undefined4 DAT_005ee75a
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0
;   core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0
;   core_xform.cpp_FUN_00592720
;   core_xform.cpp_matrixToEulerAngles_FUN_00591de0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d670
        ;   Label: core_werewolf.cpp_CWerewolf_renderTransparent_FUN_0058d670
    PUSH EBP                            ; 0058d671
    SUB ESP,0x60                        ; 0058d672
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0058d675
    CMP dword ptr [EBX + 0x2828],0x0    ; 0058d679
    JZ 0x0058d7ac                       ; 0058d680
        ;   XREF to: 0058d7ac (CONDITIONAL_JUMP)  ; LAB_0058d7ac
    CMP dword ptr [EBX + 0x10a64],0x0   ; 0058d686
    JNZ 0x0058d7ac                      ; 0058d68d
        ;   XREF to: 0058d7ac (CONDITIONAL_JUMP)  ; LAB_0058d7ac
    FLD float ptr [EBX + 0x10b3c]       ; 0058d693
    FLD1                                ; 0058d699
    FCOMPP                              ; 0058d69b
    FNSTSW AX                           ; 0058d69d
    SAHF                                ; 0058d69f
    JC 0x0058d7b4                       ; 0058d6a0
        ;   XREF to: 0058d7b4 (CONDITIONAL_JUMP)  ; LAB_0058d7b4
    FLD float ptr [EBX + 0x10b3c]       ; 0058d6a6
        ;   Label: LAB_0058d6a6
    FCOMP double ptr [0x005ee75a]       ; 0058d6ac | DAT_005ee75a
    FNSTSW AX                           ; 0058d6b2
    SAHF                                ; 0058d6b4
    JA 0x0058d7cb                       ; 0058d6b5
        ;   XREF to: 0058d7cb (CONDITIONAL_JUMP)  ; LAB_0058d7cb
    CMP dword ptr [EBX + 0x2828],0x0    ; 0058d6bb
    JZ 0x0058d797                       ; 0058d6c2
        ;   XREF to: 0058d797 (CONDITIONAL_JUMP)  ; LAB_0058d797
    PUSH EDI                            ; 0058d6c8
    PUSH ESI                            ; 0058d6c9
    PUSH EBX                            ; 0058d6ca
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 0058d6cb
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    MOV EDX,dword ptr [EBX + 0x10b0c]   ; 0058d6d0
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058d6d6
    SUB EAX,EDX                         ; 0058d6dd
    LEA EDI,[ESP + 0xc]                 ; 0058d6df
    SHL EAX,0x4                         ; 0058d6e3
    MOV ECX,0xc                         ; 0058d6e6
    LEA ESI,[EBX + EAX*0x1 + 0x1134]    ; 0058d6eb
    ADD ESP,0x4                         ; 0058d6f2
    LEA EAX,[ESP + 0x8]                 ; 0058d6f5
    MOVSD.REP ES:EDI,ESI                ; 0058d6f9
    PUSH EAX                            ; 0058d6fb
    LEA ESI,[ESP + 0x54]                ; 0058d6fc
    LEA EDI,[ESP + 0x48]                ; 0058d700
    CALL core_xform.cpp_matrixToEulerAngles_FUN_00591de0 ; 0058d704
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_00591de0()
    LEA ESI,[ESP + 0x54]                ; 0058d709
    ADD ESP,0x4                         ; 0058d70d
    LEA EAX,[ESP + 0x8]                 ; 0058d710
    MOVSD ES:EDI,ESI                    ; 0058d714
    MOVSD ES:EDI,ESI                    ; 0058d715
    MOVSD ES:EDI,ESI                    ; 0058d716
    PUSH EAX                            ; 0058d717
    LEA ESI,[ESP + 0x60]                ; 0058d718
    LEA EDI,[ESP + 0x3c]                ; 0058d71c
    CALL core_xform.cpp_FUN_00592720    ; 0058d720
        ;   XREF to: 00592720 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00592720()
    ADD ESP,0x4                         ; 0058d725
    LEA EAX,[ESP + 0x38]                ; 0058d728
    LEA ESI,[ESP + 0x5c]                ; 0058d72c
    PUSH EAX                            ; 0058d730
    MOVSD ES:EDI,ESI                    ; 0058d731
    MOVSD ES:EDI,ESI                    ; 0058d732
    MOVSD ES:EDI,ESI                    ; 0058d733
    PUSH 0x265370c                      ; 0058d734 | DAT_0265370c
    MOV EDI,dword ptr [0x0060b280]      ; 0058d739 | DAT_0060b280
    PUSH EDI                            ; 0058d73f | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0058d740
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0058d745
    PUSH 0x0                            ; 0058d748
    LEA EAX,[ESP + 0x48]                ; 0058d74a
    PUSH EAX                            ; 0058d74e
    MOV EBP,dword ptr [0x0060b280]      ; 0058d74f | DAT_0060b280
    PUSH EBP                            ; 0058d755 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350 ; 0058d756
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350(CDemonRenderer * this_ptr, CVector3f * euler_angles, CVector3f * translation)
    ADD ESP,0xc                         ; 0058d75b
    PUSH 0x2662d04                      ; 0058d75e
    PUSH EBX                            ; 0058d763
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0 ; 0058d764
        ;   XREF to: 0058d0b0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0058d769
    PUSH 0x2662d10                      ; 0058d76c
    PUSH EBX                            ; 0058d771
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0 ; 0058d772
        ;   XREF to: 0058d0b0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_0058d0b0(CWerewolf * this_ptr, CVector3f * eye_position)
    ADD ESP,0x8                         ; 0058d777
    PUSH EBX                            ; 0058d77a
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0058d77b
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058d780
    PUSH EBX                            ; 0058d783
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0058d784
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058d789
    PUSH EBX                            ; 0058d78c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 0058d78d
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0058d792
    POP ESI                             ; 0058d795
    POP EDI                             ; 0058d796
    PUSH EBX                            ; 0058d797
        ;   Label: LAB_0058d797
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 0058d798
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058d79d
    MOV EAX,dword ptr [EBX + 0x2828]    ; 0058d7a0
    ADD ESP,0x60                        ; 0058d7a6
    POP EBP                             ; 0058d7a9
    POP EBX                             ; 0058d7aa
    RET                                 ; 0058d7ab
    XOR EAX,EAX                         ; 0058d7ac
        ;   Label: LAB_0058d7ac
    ADD ESP,0x60                        ; 0058d7ae
    POP EBP                             ; 0058d7b1
    POP EBX                             ; 0058d7b2
    RET                                 ; 0058d7b3
    FLD float ptr [EBX + 0x10b3c]       ; 0058d7b4
        ;   Label: LAB_0058d7b4
    FADD float ptr [0x005ee756]         ; 0058d7ba | DAT_005ee756
    FSTP float ptr [EBX + 0x10b3c]      ; 0058d7c0
    JMP 0x0058d6a6                      ; 0058d7c6
        ;   XREF to: 0058d6a6 (UNCONDITIONAL_JUMP)  ; LAB_0058d6a6
    PUSH EBX                            ; 0058d7cb
        ;   Label: LAB_0058d7cb
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0 ; 0058d7cc
        ;   XREF to: 004268b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderTransparent_FUN_004268b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058d7d1
    ADD ESP,0x60                        ; 0058d7d4
    POP EBP                             ; 0058d7d7
    POP EBX                             ; 0058d7d8
    RET                                 ; 0058d7d9

