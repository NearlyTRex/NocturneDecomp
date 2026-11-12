; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CPopcorn_render_FUN_004b4370(CPopcorn *this_ptr)
;
; Parameters:
; CPopcorn *       Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061cb3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629040
;   undefined4 DAT_0062905c
;   undefined4 DAT_00629060
;   undefined4 DAT_00629070
;   undefined4 DAT_0062908c
;   undefined4 DAT_00629090
;   undefined4 DAT_006290a0
;   undefined4 DAT_006290bc
;   undefined4 DAT_006290c0
;   ... and 6 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_FUN_00483b50
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4370
        ;   Label: core_fire.cpp_CPopcorn_render_FUN_004b4370
    PUSH ESI                            ; 004b4371
    PUSH EBP                            ; 004b4372
    SUB ESP,0x94                        ; 004b4373
    MOV EBP,dword ptr [ESP + 0xa4]      ; 004b4379
    MOV ESI,dword ptr [0x00612560]      ; 004b4380 | DAT_00612560
    LEA EBX,[ESP + 0x58]                ; 004b4386
    MOV EAX,EBP                         ; 004b438a
    MOV ESI,dword ptr [ESI]             ; 004b438c | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004b438e
    FMUL float ptr [0x005fff94]         ; 004b4390 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4396
    FLD float ptr [EAX + 0x4]           ; 004b4398
    FMUL float ptr [0x005fff94]         ; 004b439b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b43a1
    FLD float ptr [EAX + 0x8]           ; 004b43a4
    FMUL float ptr [0x005fff94]         ; 004b43a7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b43ad
    LEA EAX,[ESP + 0x58]                ; 004b43b0
    PUSH EAX                            ; 004b43b4
    PUSH ESI                            ; 004b43b5
    CALL engine_special.cpp_FUN_0058043c ; 004b43b6
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b43bb
    PUSH ESI                            ; 004b43be
    MOV EDX,dword ptr [0x00612560]      ; 004b43bf | DAT_00612560
    PUSH EDX                            ; 004b43c5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 ; 004b43c6
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004b43cb
    TEST EAX,EAX                        ; 004b43ce
    JNZ 0x004b43dc                      ; 004b43d0
        ;   XREF to: 004b43dc (CONDITIONAL_JUMP)  ; LAB_004b43dc
    ADD ESP,0x94                        ; 004b43d2
    POP EBP                             ; 004b43d8
    POP ESI                             ; 004b43d9
    POP EBX                             ; 004b43da
    RET                                 ; 004b43db
    PUSH EDI                            ; 004b43dc
        ;   Label: LAB_004b43dc
    PUSH EBP                            ; 004b43dd
    MOV ECX,dword ptr [0x00612560]      ; 004b43de | DAT_00612560
    PUSH ECX                            ; 004b43e4 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b43e5
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b43ea
    MOV EBX,dword ptr [0x00612560]      ; 004b43ed | DAT_00612560
    PUSH EBX                            ; 004b43f3 | DAT_01bc120c
    LEA ESI,[ESP + 0x30]                ; 004b43f4
    LEA EDI,[ESP + 0x48]                ; 004b43f8
    CALL engine_drender.cpp_FUN_00483b50 ; 004b43fc
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; undefined engine_drender.cpp_FUN_00483b50()
    ADD ESP,0x4                         ; 004b4401
    LEA ESI,[ESP + 0x2c]                ; 004b4404
    LEA EAX,[ESP + 0x44]                ; 004b4408
    PUSH 0x0                            ; 004b440c
    MOVSD ES:EDI,ESI                    ; 004b440e
    MOVSD ES:EDI,ESI                    ; 004b440f
    MOVSD ES:EDI,ESI                    ; 004b4410
    PUSH EAX                            ; 004b4411
    MOV ESI,dword ptr [0x00612560]      ; 004b4412 | DAT_00612560
    PUSH ESI                            ; 004b4418 | DAT_01bc120c
    LEA EBX,[ESP + 0x98]                ; 004b4419
    MOV EDI,0xbe000000                  ; 004b4420
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004b4425
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x80]                ; 004b442a
    MOV ESI,dword ptr [0x00612560]      ; 004b4431 | DAT_00612560
    ADD ESP,0xc                         ; 004b4437
    XOR EDX,EDX                         ; 004b443a
    MOV dword ptr [ESP + 0x74],EDI      ; 004b443c
    MOV dword ptr [ESP + 0x78],EDI      ; 004b4440
    MOV dword ptr [ESP + 0x7c],EDX      ; 004b4444
    FLD float ptr [EAX]                 ; 004b4448
    FMUL float ptr [0x005fff94]         ; 004b444a | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4450
    FLD float ptr [EAX + 0x4]           ; 004b4452
    FMUL float ptr [0x005fff94]         ; 004b4455 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b445b
    FLD float ptr [EAX + 0x8]           ; 004b445e
    FMUL float ptr [0x005fff94]         ; 004b4461 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b4467
    LEA EAX,[ESP + 0x8c]                ; 004b446a
    PUSH EAX                            ; 004b4471
    MOV EAX,dword ptr [ESI]             ; 004b4472 | DAT_01bc120c
    PUSH EAX                            ; 004b4474
    CALL engine_special.cpp_FUN_00580173 ; 004b4475
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004b447a
    MOV ECX,0x3e000000                  ; 004b447c
    LEA EBX,[ESP + 0x70]                ; 004b4481
    ADD ESP,0x8                         ; 004b4485
    LEA EAX,[ESP + 0x74]                ; 004b4488
    MOV dword ptr [ESP + 0x74],ECX      ; 004b448c
    MOV dword ptr [ESP + 0x78],EDI      ; 004b4490
    MOV dword ptr [ESP + 0x7c],ESI      ; 004b4494
    MOV ESI,dword ptr [0x00612560]      ; 004b4498 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b449e
    FMUL float ptr [0x005fff94]         ; 004b44a0 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b44a6
    FLD float ptr [EAX + 0x4]           ; 004b44a8
    FMUL float ptr [0x005fff94]         ; 004b44ab | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b44b1
    FLD float ptr [EAX + 0x8]           ; 004b44b4
    FMUL float ptr [0x005fff94]         ; 004b44b7 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b44bd
    LEA EAX,[ESP + 0x68]                ; 004b44c0
    PUSH EAX                            ; 004b44c4
    MOV EAX,dword ptr [ESI]             ; 004b44c5 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b44c7
    PUSH EAX                            ; 004b44ca
    MOV EDI,0x3e000000                  ; 004b44cb
    CALL engine_special.cpp_FUN_00580173 ; 004b44d0
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x00612560]      ; 004b44d5 | DAT_00612560
    ADD ESP,0x8                         ; 004b44db
    XOR EDX,EDX                         ; 004b44de
    MOV dword ptr [ESP + 0x74],EDI      ; 004b44e0
    MOV dword ptr [ESP + 0x78],EDI      ; 004b44e4
    MOV dword ptr [ESP + 0x7c],EDX      ; 004b44e8
    LEA EBX,[ESP + 0x38]                ; 004b44ec
    LEA EAX,[ESP + 0x74]                ; 004b44f0
    FLD float ptr [EAX]                 ; 004b44f4
    FMUL float ptr [0x005fff94]         ; 004b44f6 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b44fc
    FLD float ptr [EAX + 0x4]           ; 004b44fe
    FMUL float ptr [0x005fff94]         ; 004b4501 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b4507
    FLD float ptr [EAX + 0x8]           ; 004b450a
    FMUL float ptr [0x005fff94]         ; 004b450d | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b4513
    LEA EAX,[ESP + 0x38]                ; 004b4516
    PUSH EAX                            ; 004b451a
    MOV EAX,dword ptr [ESI]             ; 004b451b | DAT_01bc120c
    ADD EAX,0x60                        ; 004b451d
    PUSH EAX                            ; 004b4520
    XOR ESI,ESI                         ; 004b4521
    CALL engine_special.cpp_FUN_00580173 ; 004b4523
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004b4528
    LEA EBX,[ESP + 0x58]                ; 004b452d
    ADD ESP,0x8                         ; 004b4531
    LEA EAX,[ESP + 0x74]                ; 004b4534
    MOV dword ptr [ESP + 0x74],ECX      ; 004b4538
    MOV dword ptr [ESP + 0x78],EDI      ; 004b453c
    MOV dword ptr [ESP + 0x7c],ESI      ; 004b4540
    MOV ESI,dword ptr [0x00612560]      ; 004b4544 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b454a
    FMUL float ptr [0x005fff94]         ; 004b454c | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4552
    FLD float ptr [EAX + 0x4]           ; 004b4554
    FMUL float ptr [0x005fff94]         ; 004b4557 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b455d
    FLD float ptr [EAX + 0x8]           ; 004b4560
    FMUL float ptr [0x005fff94]         ; 004b4563 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b4569
    LEA EAX,[ESP + 0x50]                ; 004b456c
    PUSH EAX                            ; 004b4570
    MOV EAX,dword ptr [ESI]             ; 004b4571 | DAT_01bc120c
    ADD EAX,0x90                        ; 004b4573
    PUSH EAX                            ; 004b4578
    CALL engine_special.cpp_FUN_00580173 ; 004b4579
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b457e
    PUSH 0x61cb3c                       ; 004b4581 | DAT_0061cb3c
    MOV EDI,dword ptr [0x00612560]      ; 004b4586 | DAT_00612560
    PUSH EDI                            ; 004b458c | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b458d
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b4592
    PUSH 0x0                            ; 004b4595
    MOV EAX,[0x007c6120]                ; 004b4597 | DAT_007c6120
    PUSH EBP                            ; 004b459c
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004b459d
    PUSH EAX                            ; 004b45a0
    CALL dword ptr [EBX + 0x4]          ; 004b45a1
    MOV EAX,0xffff                      ; 004b45a4
    MOV ECX,0x80000                     ; 004b45a9
    MOV EBX,0xf80000                    ; 004b45ae
    MOV EDX,dword ptr [0x01c51cac]      ; 004b45b3 | DAT_01c51cac
    ADD ESP,0xc                         ; 004b45b9
    MOV dword ptr [0x0062902c],ECX      ; 004b45bc | DAT_0062902c
    MOV dword ptr [0x00629030],EBX      ; 004b45c2 | DAT_00629030
    MOV dword ptr [0x0062905c],EBX      ; 004b45c8 | DAT_0062905c
    MOV dword ptr [0x00629060],EBX      ; 004b45ce | DAT_00629060
    MOV dword ptr [0x0062908c],EBX      ; 004b45d4 | DAT_0062908c
    MOV dword ptr [0x00629090],ECX      ; 004b45da | DAT_00629090
    MOV dword ptr [0x006290bc],ECX      ; 004b45e0 | DAT_006290bc
    SUB EAX,EDX                         ; 004b45e6
    LEA EBX,[ESP + 0x80]                ; 004b45e8
    MOV [0x00629040],EAX                ; 004b45ef | DAT_00629040
    MOV [0x00629070],EAX                ; 004b45f4 | DAT_00629070
    MOV [0x006290a0],EAX                ; 004b45f9 | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004b45fe | DAT_006290d0
    MOV EAX,EBP                         ; 004b4603
    MOV dword ptr [0x006290c0],ECX      ; 004b4605 | DAT_006290c0
    FLD float ptr [EAX]                 ; 004b460b
    FMUL float ptr [0x005fff94]         ; 004b460d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4613
    FLD float ptr [EAX + 0x4]           ; 004b4615
    FMUL float ptr [0x005fff94]         ; 004b4618 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b461e
    FLD float ptr [EAX + 0x8]           ; 004b4621
    FMUL float ptr [0x005fff94]         ; 004b4624 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b462a
    PUSH 0x4                            ; 004b462d
    PUSH 0x0                            ; 004b462f
    PUSH 0x1c57084                      ; 004b4631 | DAT_01c57084
    LEA EAX,[ESP + 0x8c]                ; 004b4636
    PUSH EAX                            ; 004b463d
    MOV ESI,dword ptr [0x00622c18]      ; 004b463e | g_CDemonSetPtr
    PUSH ESI                            ; 004b4644 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004b4645
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004b464a
    PUSH 0x1                            ; 004b464d
    MOV EDI,dword ptr [0x00612560]      ; 004b464f | DAT_00612560
    PUSH EDI                            ; 004b4655 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b4656
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b465b
    XOR EAX,EAX                         ; 004b465e
    MOV EBP,0x4                         ; 004b4660
    MOV dword ptr [ESP + 0x18],EAX      ; 004b4665
    MOV dword ptr [ESP + 0x14],EAX      ; 004b4669
    MOV dword ptr [ESP + 0x10],EAX      ; 004b466d
    MOV dword ptr [ESP + 0xc],EAX       ; 004b4671
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b4675
    MOV EAX,0x3                         ; 004b4679
    MOV EDI,0x1                         ; 004b467e
    MOV dword ptr [ESP + 0x28],EAX      ; 004b4683
    LEA EAX,[ESP + 0x4]                 ; 004b4687
    MOV EDX,dword ptr [0x00612560]      ; 004b468b | DAT_00612560
    PUSH EAX                            ; 004b4691
    MOV dword ptr [ESP + 0xc],EBP       ; 004b4692
    MOV EBP,0x2                         ; 004b4696
    PUSH EDX                            ; 004b469b | DAT_01bc120c
    MOV dword ptr [ESP + 0x28],EDI      ; 004b469c
    MOV dword ptr [ESP + 0x2c],EBP      ; 004b46a0
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004b46a4
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b46a9
    XOR EBX,EBX                         ; 004b46ac
    PUSH EBX                            ; 004b46ae
    MOV ECX,dword ptr [0x00612560]      ; 004b46af | DAT_00612560
    PUSH ECX                            ; 004b46b5 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b46b6
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b46bb
    MOV EBX,dword ptr [0x00612560]      ; 004b46be | DAT_00612560
    PUSH EBX                            ; 004b46c4 | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004b46c5
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b46ca
    POP EDI                             ; 004b46cd
    ADD ESP,0x94                        ; 004b46ce
    POP EBP                             ; 004b46d4
    POP ESI                             ; 004b46d5
    POP EBX                             ; 004b46d6
    RET                                 ; 004b46d7

