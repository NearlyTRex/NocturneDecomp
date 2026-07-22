; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005576a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x20]:1  local_20
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   float FLOAT_00597e35 = -1
;   double DOUBLE_00597e39 = 0.800000000000000
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260
;   core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0
;   core_xform.cpp_getTranslation_FUN_0055bc00
;   core_xform.cpp_matrixToEulerAngles_FUN_0055b180
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005576a0
        ;   Label: FUN_005576a0
    PUSH EBP                            ; 005576a1
    SUB ESP,0x48                        ; 005576a2
    MOV EBX,dword ptr [ESP + 0x54]      ; 005576a5
    CMP dword ptr [EBX + 0x2618],0x0    ; 005576a9
    JZ 0x005577c8                       ; 005576b0
        ;   XREF to: 005577c8 (CONDITIONAL_JUMP)  ; LAB_005577c8
    CMP dword ptr [EBX + 0xbc90],0x0    ; 005576b6
    JNZ 0x005577c8                      ; 005576bd
        ;   XREF to: 005577c8 (CONDITIONAL_JUMP)  ; LAB_005577c8
    FLD float ptr [EBX + 0xbd68]        ; 005576c3
    FLD1                                ; 005576c9
    FCOMPP                              ; 005576cb
    FNSTSW AX                           ; 005576cd
    SAHF                                ; 005576cf
    JC 0x005577d0                       ; 005576d0
        ;   XREF to: 005577d0 (CONDITIONAL_JUMP)  ; LAB_005577d0
    FLD float ptr [EBX + 0xbd68]        ; 005576d6
        ;   Label: LAB_005576d6
    FCOMP double ptr [0x00597e39]       ; 005576dc | DOUBLE_00597e39
    FNSTSW AX                           ; 005576e2
    SAHF                                ; 005576e4
    JA 0x005577e7                       ; 005576e5
        ;   XREF to: 005577e7 (CONDITIONAL_JUMP)  ; LAB_005577e7
    CMP dword ptr [EBX + 0x2618],0x0    ; 005576eb
    JZ 0x005577b3                       ; 005576f2
        ;   XREF to: 005577b3 (CONDITIONAL_JUMP)  ; LAB_005577b3
    PUSH EDI                            ; 005576f8
    PUSH ESI                            ; 005576f9
    PUSH EBX                            ; 005576fa
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 005576fb
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    MOV EDX,dword ptr [EBX + 0xbd38]    ; 00557700
    LEA EAX,[EDX*0x4 + 0x0]             ; 00557706
    SUB EAX,EDX                         ; 0055770d
    SHL EAX,0x4                         ; 0055770f
    ADD ESP,0x4                         ; 00557712
    LEA ESI,[EBX + EAX*0x1 + 0xfd0]     ; 00557715
    LEA EAX,[ESP + 0x44]                ; 0055771c
    LEA EDI,[ESP + 0x8]                 ; 00557720
    PUSH EAX                            ; 00557724
    LEA EAX,[ESP + 0xc]                 ; 00557725
    MOV ECX,0xc                         ; 00557729
    PUSH EAX                            ; 0055772e
    MOVSD.REP ES:EDI,ESI                ; 0055772f
    CALL core_xform.cpp_matrixToEulerAngles_FUN_0055b180 ; 00557731
        ;   XREF to: 0055b180 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_matrixToEulerAngles_FUN_0055b180()
    ADD ESP,0x8                         ; 00557736
    LEA EAX,[ESP + 0x38]                ; 00557739
    PUSH EAX                            ; 0055773d
    LEA EAX,[ESP + 0xc]                 ; 0055773e
    PUSH EAX                            ; 00557742
    CALL core_xform.cpp_getTranslation_FUN_0055bc00 ; 00557743
        ;   XREF to: 0055bc00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_getTranslation_FUN_0055bc00()
    ADD ESP,0x8                         ; 00557748
    LEA EAX,[ESP + 0x38]                ; 0055774b
    PUSH EAX                            ; 0055774f
    PUSH 0x2dd1184                      ; 00557750 | DAT_02dd1184
    MOV EDI,dword ptr [0x005ae704]      ; 00557755 | DAT_005ae704
    PUSH EDI                            ; 0055775b | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 0055775c
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00557761
    PUSH 0x0                            ; 00557764
    LEA EAX,[ESP + 0x48]                ; 00557766
    PUSH EAX                            ; 0055776a
    MOV EBP,dword ptr [0x005ae704]      ; 0055776b | DAT_005ae704
    PUSH EBP                            ; 00557771 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 00557772
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 00557777
    PUSH 0x2de0774                      ; 0055777a
    PUSH EBX                            ; 0055777f
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0 ; 00557780
        ;   XREF to: 005570b0 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0()
    ADD ESP,0x8                         ; 00557785
    PUSH 0x2de0780                      ; 00557788
    PUSH EBX                            ; 0055778d
    CALL core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0 ; 0055778e
        ;   XREF to: 005570b0 (UNCONDITIONAL_CALL)  ; undefined core_werewolf.cpp_CWerewolf_renderEyeGlow_FUN_005570b0()
    ADD ESP,0x8                         ; 00557793
    PUSH EBX                            ; 00557796
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 00557797
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 0055779c
    PUSH EBX                            ; 0055779f
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 005577a0
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 005577a5
    PUSH EBX                            ; 005577a8
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 005577a9
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 005577ae
    POP ESI                             ; 005577b1
    POP EDI                             ; 005577b2
    PUSH EBX                            ; 005577b3
        ;   Label: LAB_005577b3
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 ; 005577b4
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260()
    ADD ESP,0x4                         ; 005577b9
    MOV EAX,dword ptr [EBX + 0x2618]    ; 005577bc
    ADD ESP,0x48                        ; 005577c2
    POP EBP                             ; 005577c5
    POP EBX                             ; 005577c6
    RET                                 ; 005577c7
    XOR EAX,EAX                         ; 005577c8
        ;   Label: LAB_005577c8
    ADD ESP,0x48                        ; 005577ca
    POP EBP                             ; 005577cd
    POP EBX                             ; 005577ce
    RET                                 ; 005577cf
    FLD float ptr [EBX + 0xbd68]        ; 005577d0
        ;   Label: LAB_005577d0
    FADD float ptr [0x00597e35]         ; 005577d6 | FLOAT_00597e35
    FSTP float ptr [EBX + 0xbd68]       ; 005577dc
    JMP 0x005576d6                      ; 005577e2
        ;   XREF to: 005576d6 (UNCONDITIONAL_JUMP)  ; LAB_005576d6
    PUSH EBX                            ; 005577e7
        ;   Label: LAB_005577e7
    CALL core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260 ; 005577e8
        ;   XREF to: 00427260 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderTransparent_FUN_00427260()
    ADD ESP,0x4                         ; 005577ed
    ADD ESP,0x48                        ; 005577f0
    POP EBP                             ; 005577f3
    POP EBX                             ; 005577f4
    RET                                 ; 005577f5

