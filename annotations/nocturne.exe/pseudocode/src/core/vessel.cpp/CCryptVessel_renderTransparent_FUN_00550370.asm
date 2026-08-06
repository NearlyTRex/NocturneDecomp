; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_vessel_cpp_CCryptVessel_renderTransparent_FUN_00550370(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_MENUCLD2_RAW_005974ab
;   undefined4 s_MENUCLD2_RAW_005974ab+1
;   undefined4 s_MENUCLD2_RAW_005974ab+2
;   undefined4 s_MENUCLD2_RAW_005974ab+3
;   TerminatedCString s_BWATER_d_RAW_005974b8
;   CDemonRenderer* g_CDemonRenderer_PTR_005ae704 = 01b4d738
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
;   core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0
;   crt_math.c_round_FUN_00563a30
;   crt_stdio.c_sprintf_FUN_00563c90
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
;   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00550370
        ;   Label: core_vessel.cpp_CCryptVessel_renderTransparent_FUN_00550370
    PUSH ESI                            ; 00550371
    PUSH EDI                            ; 00550372
    PUSH EBP                            ; 00550373
    MOV EBP,ESP                         ; 00550374
    SUB ESP,0x1c                        ; 00550376
    MOV EBX,dword ptr [EBP + 0x14]      ; 00550379
    CMP dword ptr [EBX + 0x7d8],0x0     ; 0055037c
    JZ 0x005504c1                       ; 00550383
        ;   XREF to: 005504c1 (CONDITIONAL_JUMP)  ; LAB_005504c1
    CMP dword ptr [EBX + 0x3ac],0x1     ; 00550389
    JZ 0x005504ca                       ; 00550390
        ;   XREF to: 005504ca (CONDITIONAL_JUMP)  ; LAB_005504ca
    LEA EAX,[EBX + 0x20]                ; 00550396
        ;   Label: LAB_00550396
    PUSH EAX                            ; 00550399
    MOV ESI,dword ptr [0x005ae704]      ; 0055039a | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 005503a0 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00 ; 005503a1
        ;   XREF to: 00460a00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 005503a6
    PUSH 0x0                            ; 005503a9
    LEA EAX,[EBX + 0x30]                ; 005503ab
    PUSH EAX                            ; 005503ae
    MOV EDI,dword ptr [0x005ae704]      ; 005503af | g_CDemonRenderer_PTR_005ae704
    PUSH EDI                            ; 005503b5 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005503b6
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    XOR EAX,EAX                         ; 005503bb
    MOV dword ptr [EBP + -0x10],EAX     ; 005503bd
    MOV dword ptr [EBP + -0x8],EAX      ; 005503c0
    MOV ESI,0x400ccccd                  ; 005503c3
    MOV EAX,dword ptr [EBX + 0x658]     ; 005503c8
    ADD ESP,0xc                         ; 005503ce
    MOV dword ptr [EBP + -0xc],EAX      ; 005503d1
    LEA EAX,[EBP + -0x1c]               ; 005503d4
    XOR EDX,EDX                         ; 005503d7
    PUSH EAX                            ; 005503d9
    LEA EAX,[EBP + -0x10]               ; 005503da
    XOR ECX,ECX                         ; 005503dd
    PUSH EAX                            ; 005503df
    MOV EAX,[0x005ae704]                ; 005503e0 | g_CDemonRenderer_PTR_005ae704
    MOV dword ptr [EBP + -0x1c],ECX     ; 005503e5
    PUSH EAX                            ; 005503e8 | DAT_01b4d738
    MOV dword ptr [EBP + -0x18],ESI     ; 005503e9
    MOV dword ptr [EBP + -0x14],EDX     ; 005503ec
    CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0 ; 005503ef
        ;   XREF to: 00460aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer * this_ptr, CVector3f * position, CVector3f * rotation)
    ADD ESP,0xc                         ; 005503f4
    PUSH 0xffff                         ; 005503f7
    MOV EDX,dword ptr [0x005ae704]      ; 005503fc | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00550402 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00550403
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 00550408
    MOV ECX,dword ptr [EBX + 0x3ac]     ; 0055040b
    LEA EAX,[EBX + 0x65c]               ; 00550411
    CMP ECX,0x2                         ; 00550417
    JZ 0x005504f3                       ; 0055041a
        ;   XREF to: 005504f3 (CONDITIONAL_JUMP)  ; LAB_005504f3
    PUSH EAX                            ; 00550420
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00550421
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00550426
    MOV ESI,0x5974ab                    ; 00550429 | = "MENUCLD2.RAW"
    LEA EDI,[EAX + 0x12c]               ; 0055042e
    PUSH EDI                            ; 00550434
    MOV AL,byte ptr [ESI]               ; 00550435 | = "MENUCLD2.RAW" | s_MENUCLD2_RAW_005974ab+2
        ;   Label: LAB_00550435
    MOV byte ptr [EDI],AL               ; 00550437
    CMP AL,0x0                          ; 00550439
    JZ 0x0055044d                       ; 0055043b
        ;   XREF to: 0055044d (CONDITIONAL_JUMP)  ; LAB_0055044d
    MOV AL,byte ptr [ESI + 0x1]         ; 0055043d | s_MENUCLD2_RAW_005974ab+1 | s_MENUCLD2_RAW_005974ab+3
    ADD ESI,0x2                         ; 00550440
    MOV byte ptr [EDI + 0x1],AL         ; 00550443
    ADD EDI,0x2                         ; 00550446
    CMP AL,0x0                          ; 00550449
    JNZ 0x00550435                      ; 0055044b
        ;   XREF to: 00550435 (CONDITIONAL_JUMP)  ; LAB_00550435
    POP EDI                             ; 0055044d
        ;   Label: LAB_0055044d
    CMP dword ptr [EBX + 0x3ac],0x0     ; 0055044e
    JNZ 0x005504de                      ; 00550455
        ;   XREF to: 005504de (CONDITIONAL_JUMP)  ; LAB_005504de
    PUSH 0x1                            ; 0055045b
    MOV EDX,dword ptr [0x005ae704]      ; 0055045d | g_CDemonRenderer_PTR_005ae704
    PUSH EDX                            ; 00550463 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 00550464
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00550469
        ;   Label: LAB_00550469
    PUSH 0x267                          ; 0055046c
    ADD EBX,0x65c                       ; 00550471
    PUSH 0x0                            ; 00550477
    PUSH EBX                            ; 00550479
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0 ; 0055047a
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 0055047f
    PUSH 0x0                            ; 00550482
    MOV ECX,dword ptr [0x005ae704]      ; 00550484 | g_CDemonRenderer_PTR_005ae704
    PUSH ECX                            ; 0055048a | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000 ; 0055048b
        ;   XREF to: 00461000 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00461000(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 00550490
    MOV EBX,dword ptr [0x005ae704]      ; 00550493 | g_CDemonRenderer_PTR_005ae704
    PUSH EBX                            ; 00550499 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 0055049a
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    ADD ESP,0x4                         ; 0055049f
    MOV ESI,dword ptr [0x005ae704]      ; 005504a2 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 005504a8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0 ; 005504a9
        ;   XREF to: 00460bf0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_matrixPop_FUN_00460bf0()
    MOV EAX,0x1                         ; 005504ae
    ADD ESP,0x4                         ; 005504b3
    MOV ESP,EBP                         ; 005504b6
    POP EBP                             ; 005504b8
    POP EDI                             ; 005504b9
    POP ESI                             ; 005504ba
    POP EBX                             ; 005504bb
    LEA EAX,[EAX]                       ; 005504bc
    XOR EAX,EAX                         ; 005504c1
        ;   Label: LAB_005504c1
    MOV ESP,EBP                         ; 005504c3
    POP EBP                             ; 005504c5
    POP EDI                             ; 005504c6
    POP ESI                             ; 005504c7
    POP EBX                             ; 005504c8
    RET                                 ; 005504c9
    LEA EAX,[EBX + 0x3bc]               ; 005504ca
        ;   Label: LAB_005504ca
    PUSH EAX                            ; 005504d0
    CALL core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0 ; 005504d1
        ;   XREF to: 0048d5d0 (UNCONDITIONAL_CALL)  ; int core_flame.cpp_CFlame_renderTransparent_FUN_0048d5d0(CFlame * this_ptr)
    ADD ESP,0x4                         ; 005504d6
    JMP 0x00550396                      ; 005504d9
        ;   XREF to: 00550396 (UNCONDITIONAL_JUMP)  ; LAB_00550396
    PUSH 0x4000                         ; 005504de
        ;   Label: LAB_005504de
    MOV EAX,[0x005ae704]                ; 005504e3 | g_CDemonRenderer_PTR_005ae704
    PUSH EAX                            ; 005504e8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 005504e9
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00550469                      ; 005504ee
        ;   XREF to: 00550469 (UNCONDITIONAL_JUMP)  ; LAB_00550469
    FLD float ptr [EBX + 0x7dc]         ; 005504f3
        ;   Label: LAB_005504f3
    CALL crt_math.c_round_FUN_00563a30  ; 005504f9
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; double crt_math.c_round_FUN_00563a30(double value)
    PUSH EAX                            ; 005504fe
    FISTP dword ptr [EBP + -0x4]        ; 005504ff
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530 ; 00550502
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(CKeyFramedModelInstance * this_ptr)
    MOV EDI,dword ptr [EBP + -0x4]      ; 00550507
    ADD ESP,0x4                         ; 0055050a
    AND EDI,0xf                         ; 0055050d
    PUSH EDI                            ; 00550510
    PUSH 0x5974b8                       ; 00550511 | = "BWATER%d.RAW"
    ADD EAX,0x12c                       ; 00550516
    PUSH EAX                            ; 0055051b
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 0055051c
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 00550521
    PUSH 0xbb80                         ; 00550524
    MOV ESI,dword ptr [0x005ae704]      ; 00550529 | g_CDemonRenderer_PTR_005ae704
    PUSH ESI                            ; 0055052f | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010 ; 00550530
        ;   XREF to: 00461010 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(CDemonRenderer * this_ptr, int render_alpha)
    JMP 0x00550469                      ; 00550535
        ;   XREF to: 00550469 (UNCONDITIONAL_JUMP)  ; LAB_00550469

