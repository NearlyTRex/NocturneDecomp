; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00547670(int param_1)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547670
        ;   Label: FUN_00547670
    PUSH ESI                            ; 00547671
    PUSH EBP                            ; 00547672
    SUB ESP,0x30                        ; 00547673
    MOV EBX,dword ptr [ESP + 0x40]      ; 00547676
    PUSH EBX                            ; 0054767a
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20 ; 0054767b
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_setupRenderState_FUN_00409f20()
    ADD ESP,0x4                         ; 00547680
    PUSH 0x0                            ; 00547683
    LEA ESI,[ESP + 0x4]                 ; 00547685
    PUSH ESI                            ; 00547689
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0054768a
    PUSH EBX                            ; 00547690
    CALL dword ptr [EAX + 0x14]         ; 00547691
    ADD ESP,0x8                         ; 00547694
    PUSH EAX                            ; 00547697
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0 ; 00547698
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_CBoundingBox3D_isVisible_FUN_0041ceb0()
    ADD ESP,0x8                         ; 0054769d
    MOV ESI,EAX                         ; 005476a0
    TEST EAX,EAX                        ; 005476a2
    JNZ 0x005476b8                      ; 005476a4
        ;   XREF to: 005476b8 (CONDITIONAL_JUMP)  ; LAB_005476b8
    PUSH EBX                            ; 005476a6
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 005476a7
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 005476ac
    MOV EAX,ESI                         ; 005476af
    ADD ESP,0x30                        ; 005476b1
    POP EBP                             ; 005476b4
    POP ESI                             ; 005476b5
    POP EBX                             ; 005476b6
    RET                                 ; 005476b7
    PUSH EDI                            ; 005476b8
        ;   Label: LAB_005476b8
    MOV EAX,dword ptr [EBX + 0x308]     ; 005476b9
    MOV dword ptr [ESP + 0x20],EAX      ; 005476bf
    LEA EAX,[ESP + 0x1c]                ; 005476c3
    PUSH EAX                            ; 005476c7
    LEA EAX,[ESP + 0x2c]                ; 005476c8
    PUSH EAX                            ; 005476cc
    XOR EDX,EDX                         ; 005476cd
    PUSH EBX                            ; 005476cf
    MOV dword ptr [ESP + 0x28],EDX      ; 005476d0
    MOV dword ptr [ESP + 0x30],EDX      ; 005476d4
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 005476d8
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220()
    ADD ESP,0xc                         ; 005476dd
    LEA EAX,[ESP + 0x28]                ; 005476e0
    PUSH EAX                            ; 005476e4
    PUSH 0x2dd1184                      ; 005476e5 | DAT_02dd1184
    MOV EDI,dword ptr [0x005ae704]      ; 005476ea | DAT_005ae704
    PUSH EDI                            ; 005476f0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005476f1
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0()
    ADD ESP,0xc                         ; 005476f6
    PUSH -0x1                           ; 005476f9
    LEA EAX,[EBX + 0x150]               ; 005476fb
    PUSH 0x0                            ; 00547701
    PUSH EAX                            ; 00547703
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 00547704
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0()
    ADD ESP,0xc                         ; 00547709
    MOV EBP,dword ptr [0x005ae704]      ; 0054770c | DAT_005ae704
    PUSH EBP                            ; 00547712 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 00547713
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 00547718
    POP EDI                             ; 0054771b
    PUSH EBX                            ; 0054771c
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60 ; 0054771d
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_restoreRenderState_FUN_00409f60()
    ADD ESP,0x4                         ; 00547722
    MOV EAX,ESI                         ; 00547725
    ADD ESP,0x30                        ; 00547727
    POP EBP                             ; 0054772a
    POP ESI                             ; 0054772b
    POP EBX                             ; 0054772c
    RET                                 ; 0054772d

