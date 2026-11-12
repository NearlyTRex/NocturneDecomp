; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fire_cpp_CRainDrop_render_FUN_004b46e0(CRainDrop *this_ptr)
;
; Parameters:
; CRainDrop *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   undefined4 DAT_005df5ac
;   undefined4 DAT_005fff94
;   undefined4 DAT_00612560
;   undefined4 DAT_0061cb54
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
;   ... and 8 more
;
; Called Functions:
;   core_set.cpp_CDemonSet_computeLighting_FUN_00552a70
;   crt_math.c_round_FUN_005c03a0
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0
;   engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50
;   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
;   engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
;   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
;   engine_drender.cpp_pop_FUN_004839a0
;   engine_special.cpp_FUN_00580173
;   engine_special.cpp_FUN_0058043c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b46e0
        ;   Label: core_fire.cpp_CRainDrop_render_FUN_004b46e0
    PUSH ESI                            ; 004b46e1
    PUSH EBP                            ; 004b46e2
    SUB ESP,0x9c                        ; 004b46e3
    MOV EBP,dword ptr [ESP + 0xac]      ; 004b46e9
    MOV ESI,dword ptr [0x00612560]      ; 004b46f0 | DAT_00612560
    LEA EBX,[ESP + 0x40]                ; 004b46f6
    MOV EAX,EBP                         ; 004b46fa
    MOV ESI,dword ptr [ESI]             ; 004b46fc | DAT_01bc120c
    FLD float ptr [EAX]                 ; 004b46fe
    FMUL float ptr [0x005fff94]         ; 004b4700 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4706
    FLD float ptr [EAX + 0x4]           ; 004b4708
    FMUL float ptr [0x005fff94]         ; 004b470b | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b4711
    FLD float ptr [EAX + 0x8]           ; 004b4714
    FMUL float ptr [0x005fff94]         ; 004b4717 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b471d
    LEA EAX,[ESP + 0x40]                ; 004b4720
    PUSH EAX                            ; 004b4724
    PUSH ESI                            ; 004b4725
    CALL engine_special.cpp_FUN_0058043c ; 004b4726
        ;   XREF to: 0058043c (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_0058043c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b472b
    PUSH ESI                            ; 004b472e
    MOV EDX,dword ptr [0x00612560]      ; 004b472f | DAT_00612560
    PUSH EDX                            ; 004b4735 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0 ; 004b4736
        ;   XREF to: 00484fd0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_depthTest_FUN_00484fd0(CDemonRenderer * this_ptr, SRenderVertex * vertex_ptr)
    ADD ESP,0x8                         ; 004b473b
    TEST EAX,EAX                        ; 004b473e
    JNZ 0x004b474c                      ; 004b4740
        ;   XREF to: 004b474c (CONDITIONAL_JUMP)  ; LAB_004b474c
    ADD ESP,0x9c                        ; 004b4742
    POP EBP                             ; 004b4748
    POP ESI                             ; 004b4749
    POP EBX                             ; 004b474a
    RET                                 ; 004b474b
    PUSH EDI                            ; 004b474c
        ;   Label: LAB_004b474c
    PUSH EBP                            ; 004b474d
    MOV ECX,dword ptr [0x00612560]      ; 004b474e | DAT_00612560
    PUSH ECX                            ; 004b4754 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0 ; 004b4755
        ;   XREF to: 004837b0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0(CDemonRenderer * this_ptr, CVector3f * world_position)
    ADD ESP,0x8                         ; 004b475a
    MOV EBX,dword ptr [0x00612560]      ; 004b475d | DAT_00612560
    PUSH EBX                            ; 004b4763 | DAT_01bc120c
    LEA ESI,[ESP + 0x90]                ; 004b4764
    LEA EDI,[ESP + 0x78]                ; 004b476b
    CALL engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50 ; 004b476f
        ;   XREF to: 00483b50 (UNCONDITIONAL_CALL)  ; CVector3i * engine_drender.cpp_CDemonRenderer_getCameraRotationFixed_FUN_00483b50(CDemonRenderer * this_ptr, CVector3i * output)
    ADD ESP,0x4                         ; 004b4774
    LEA ESI,[ESP + 0x8c]                ; 004b4777
    LEA EAX,[ESP + 0x74]                ; 004b477e
    PUSH 0x0                            ; 004b4782
    MOVSD ES:EDI,ESI                    ; 004b4784
    MOVSD ES:EDI,ESI                    ; 004b4785
    MOVSD ES:EDI,ESI                    ; 004b4786
    PUSH EAX                            ; 004b4787
    MOV ESI,dword ptr [0x00612560]      ; 004b4788 | DAT_00612560
    PUSH ESI                            ; 004b478e | DAT_01bc120c
    LEA EBX,[ESP + 0x68]                ; 004b478f
    MOV EDI,0xbe000000                  ; 004b4793
    CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800 ; 004b4798
        ;   XREF to: 00483800 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_00483800(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)
    LEA EAX,[ESP + 0x5c]                ; 004b479d
    MOV ESI,dword ptr [0x00612560]      ; 004b47a1 | DAT_00612560
    ADD ESP,0xc                         ; 004b47a7
    XOR EDX,EDX                         ; 004b47aa
    MOV dword ptr [ESP + 0x50],EDI      ; 004b47ac
    MOV dword ptr [ESP + 0x54],EDI      ; 004b47b0
    MOV dword ptr [ESP + 0x58],EDX      ; 004b47b4
    FLD float ptr [EAX]                 ; 004b47b8
    FMUL float ptr [0x005fff94]         ; 004b47ba | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b47c0
    FLD float ptr [EAX + 0x4]           ; 004b47c2
    FMUL float ptr [0x005fff94]         ; 004b47c5 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b47cb
    FLD float ptr [EAX + 0x8]           ; 004b47ce
    FMUL float ptr [0x005fff94]         ; 004b47d1 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b47d7
    LEA EAX,[ESP + 0x5c]                ; 004b47da
    PUSH EAX                            ; 004b47de
    MOV EAX,dword ptr [ESI]             ; 004b47df | DAT_01bc120c
    PUSH EAX                            ; 004b47e1
    CALL engine_special.cpp_FUN_00580173 ; 004b47e2
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    XOR ESI,ESI                         ; 004b47e7
    MOV ECX,0x3e000000                  ; 004b47e9
    LEA EBX,[ESP + 0x34]                ; 004b47ee
    ADD ESP,0x8                         ; 004b47f2
    LEA EAX,[ESP + 0x50]                ; 004b47f5
    MOV dword ptr [ESP + 0x50],ECX      ; 004b47f9
    MOV dword ptr [ESP + 0x54],EDI      ; 004b47fd
    MOV dword ptr [ESP + 0x58],ESI      ; 004b4801
    MOV ESI,dword ptr [0x00612560]      ; 004b4805 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b480b
    FMUL float ptr [0x005fff94]         ; 004b480d | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4813
    FLD float ptr [EAX + 0x4]           ; 004b4815
    FMUL float ptr [0x005fff94]         ; 004b4818 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b481e
    FLD float ptr [EAX + 0x8]           ; 004b4821
    FMUL float ptr [0x005fff94]         ; 004b4824 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b482a
    LEA EAX,[ESP + 0x2c]                ; 004b482d
    PUSH EAX                            ; 004b4831
    MOV EAX,dword ptr [ESI]             ; 004b4832 | DAT_01bc120c
    ADD EAX,0x30                        ; 004b4834
    PUSH EAX                            ; 004b4837
    MOV EDI,0x3e000000                  ; 004b4838
    CALL engine_special.cpp_FUN_00580173 ; 004b483d
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ESI,dword ptr [0x00612560]      ; 004b4842 | DAT_00612560
    ADD ESP,0x8                         ; 004b4848
    XOR EDX,EDX                         ; 004b484b
    MOV dword ptr [ESP + 0x50],EDI      ; 004b484d
    MOV dword ptr [ESP + 0x54],EDI      ; 004b4851
    MOV dword ptr [ESP + 0x58],EDX      ; 004b4855
    LEA EBX,[ESP + 0x38]                ; 004b4859
    LEA EAX,[ESP + 0x50]                ; 004b485d
    FLD float ptr [EAX]                 ; 004b4861
    FMUL float ptr [0x005fff94]         ; 004b4863 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b4869
    FLD float ptr [EAX + 0x4]           ; 004b486b
    FMUL float ptr [0x005fff94]         ; 004b486e | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b4874
    FLD float ptr [EAX + 0x8]           ; 004b4877
    FMUL float ptr [0x005fff94]         ; 004b487a | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b4880
    LEA EAX,[ESP + 0x38]                ; 004b4883
    PUSH EAX                            ; 004b4887
    MOV EAX,dword ptr [ESI]             ; 004b4888 | DAT_01bc120c
    ADD EAX,0x60                        ; 004b488a
    PUSH EAX                            ; 004b488d
    XOR ESI,ESI                         ; 004b488e
    CALL engine_special.cpp_FUN_00580173 ; 004b4890
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV ECX,0xbe000000                  ; 004b4895
    LEA EBX,[ESP + 0x70]                ; 004b489a
    ADD ESP,0x8                         ; 004b489e
    LEA EAX,[ESP + 0x50]                ; 004b48a1
    MOV dword ptr [ESP + 0x50],ECX      ; 004b48a5
    MOV dword ptr [ESP + 0x54],EDI      ; 004b48a9
    MOV dword ptr [ESP + 0x58],ESI      ; 004b48ad
    MOV ESI,dword ptr [0x00612560]      ; 004b48b1 | DAT_00612560
    FLD float ptr [EAX]                 ; 004b48b7
    FMUL float ptr [0x005fff94]         ; 004b48b9 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b48bf
    FLD float ptr [EAX + 0x4]           ; 004b48c1
    FMUL float ptr [0x005fff94]         ; 004b48c4 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b48ca
    FLD float ptr [EAX + 0x8]           ; 004b48cd
    FMUL float ptr [0x005fff94]         ; 004b48d0 | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b48d6
    LEA EAX,[ESP + 0x68]                ; 004b48d9
    PUSH EAX                            ; 004b48dd
    MOV EAX,dword ptr [ESI]             ; 004b48de | DAT_01bc120c
    ADD EAX,0x90                        ; 004b48e0
    PUSH EAX                            ; 004b48e5
    CALL engine_special.cpp_FUN_00580173 ; 004b48e6
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004b48eb
    PUSH 0x61cb54                       ; 004b48ee | DAT_0061cb54
    MOV EDI,dword ptr [0x00612560]      ; 004b48f3 | DAT_00612560
    PUSH EDI                            ; 004b48f9 | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004b48fa
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004b48ff
    PUSH 0x0                            ; 004b4902
    MOV EAX,[0x007c6120]                ; 004b4904 | DAT_007c6120
    PUSH EBP                            ; 004b4909
    MOV EBX,dword ptr [EAX + 0x3c]      ; 004b490a
    PUSH EAX                            ; 004b490d
    CALL dword ptr [EBX + 0x4]          ; 004b490e
    FLD float ptr [EBP + 0x24]          ; 004b4911
    FMUL double ptr [0x005df5ac]        ; 004b4914 | DAT_005df5ac
    MOV EAX,0xffff                      ; 004b491a
    MOV EDX,dword ptr [0x01c51cac]      ; 004b491f | DAT_01c51cac
    ADD ESP,0xc                         ; 004b4925
    SUB EAX,EDX                         ; 004b4928
    MOV dword ptr [ESP + 0x9c],EAX      ; 004b492a
    FILD dword ptr [ESP + 0x9c]         ; 004b4931
    FMULP                               ; 004b4938
    MOV ESI,0xd00000                    ; 004b493a
    MOV ECX,0x800000                    ; 004b493f | DAT_00800000
    MOV EBX,0xdc0000                    ; 004b4944
    MOV dword ptr [0x0062905c],ESI      ; 004b4949 | DAT_0062905c
    MOV dword ptr [0x0062902c],ECX      ; 004b494f | DAT_0062902c
    MOV dword ptr [0x00629030],EBX      ; 004b4955 | DAT_00629030
    MOV dword ptr [0x00629060],EBX      ; 004b495b | DAT_00629060
    MOV dword ptr [0x0062908c],ECX      ; 004b4961 | DAT_0062908c
    MOV dword ptr [0x006290bc],ECX      ; 004b4967 | DAT_006290bc
    MOV EDX,0x900000                    ; 004b496d
    MOV dword ptr [ESP + 0x98],EAX      ; 004b4972
    MOV dword ptr [0x00629090],EDX      ; 004b4979 | DAT_00629090
    CALL crt_math.c_round_FUN_005c03a0  ; 004b497f
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [ESP + 0x98]        ; 004b4984
    MOV EAX,dword ptr [ESP + 0x98]      ; 004b498b
    MOV dword ptr [0x006290c0],EDX      ; 004b4992 | DAT_006290c0
    MOV [0x00629040],EAX                ; 004b4998 | DAT_00629040
    MOV [0x00629070],EAX                ; 004b499d | DAT_00629070
    MOV [0x006290a0],EAX                ; 004b49a2 | DAT_006290a0
    MOV [0x006290d0],EAX                ; 004b49a7 | DAT_006290d0
    LEA EBX,[ESP + 0x80]                ; 004b49ac
    MOV EAX,EBP                         ; 004b49b3
    FLD float ptr [EAX]                 ; 004b49b5
    FMUL float ptr [0x005fff94]         ; 004b49b7 | DAT_005fff94
    FISTP dword ptr [EBX]               ; 004b49bd
    FLD float ptr [EAX + 0x4]           ; 004b49bf
    FMUL float ptr [0x005fff94]         ; 004b49c2 | DAT_005fff94
    FISTP dword ptr [EBX + 0x4]         ; 004b49c8
    FLD float ptr [EAX + 0x8]           ; 004b49cb
    FMUL float ptr [0x005fff94]         ; 004b49ce | DAT_005fff94
    FISTP dword ptr [EBX + 0x8]         ; 004b49d4
    PUSH 0x4                            ; 004b49d7
    PUSH 0x0                            ; 004b49d9
    PUSH 0x1c57084                      ; 004b49db | DAT_01c57084
    LEA EAX,[ESP + 0x8c]                ; 004b49e0
    PUSH EAX                            ; 004b49e7
    MOV ESI,dword ptr [0x00622c18]      ; 004b49e8 | g_CDemonSetPtr
    PUSH ESI                            ; 004b49ee | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_computeLighting_FUN_00552a70 ; 004b49ef
        ;   XREF to: 00552a70 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_computeLighting_FUN_00552a70(CDemonSet * this_ptr, CVector3i * world_position, CVector3i * surface_normal, int start_vertex_index, ...)
    ADD ESP,0x14                        ; 004b49f4
    PUSH 0x1                            ; 004b49f7
    MOV EDI,dword ptr [0x00612560]      ; 004b49f9 | DAT_00612560
    PUSH EDI                            ; 004b49ff | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b4a00
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b4a05
    XOR EAX,EAX                         ; 004b4a08
    MOV EBP,0x4                         ; 004b4a0a
    MOV dword ptr [ESP + 0x18],EAX      ; 004b4a0f
    MOV dword ptr [ESP + 0x14],EAX      ; 004b4a13
    MOV dword ptr [ESP + 0x10],EAX      ; 004b4a17
    MOV dword ptr [ESP + 0xc],EAX       ; 004b4a1b
    MOV dword ptr [ESP + 0x1c],EAX      ; 004b4a1f
    MOV EAX,0x3                         ; 004b4a23
    MOV EDI,0x1                         ; 004b4a28
    MOV dword ptr [ESP + 0x28],EAX      ; 004b4a2d
    LEA EAX,[ESP + 0x4]                 ; 004b4a31
    MOV EDX,dword ptr [0x00612560]      ; 004b4a35 | DAT_00612560
    PUSH EAX                            ; 004b4a3b
    MOV dword ptr [ESP + 0xc],EBP       ; 004b4a3c
    MOV EBP,0x2                         ; 004b4a40
    PUSH EDX                            ; 004b4a45 | DAT_01bc120c
    MOV dword ptr [ESP + 0x28],EDI      ; 004b4a46
    MOV dword ptr [ESP + 0x2c],EBP      ; 004b4a4a
    CALL engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30 ; 004b4a4e
        ;   XREF to: 00482e30 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30(CDemonRenderer * this_ptr, SMRGLHeaderPrimitive * prim)
    ADD ESP,0x8                         ; 004b4a53
    XOR EBX,EBX                         ; 004b4a56
    PUSH EBX                            ; 004b4a58
    MOV ECX,dword ptr [0x00612560]      ; 004b4a59 | DAT_00612560
    PUSH ECX                            ; 004b4a5f | DAT_01bc120c
    CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0 ; 004b4a60
        ;   XREF to: 00483dd0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(CDemonRenderer * this_ptr, int blend_mode)
    ADD ESP,0x8                         ; 004b4a65
    MOV EBX,dword ptr [0x00612560]      ; 004b4a68 | DAT_00612560
    PUSH EBX                            ; 004b4a6e | DAT_01bc120c
    CALL engine_drender.cpp_pop_FUN_004839a0 ; 004b4a6f
        ;   XREF to: 004839a0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_pop_FUN_004839a0()
    ADD ESP,0x4                         ; 004b4a74
    POP EDI                             ; 004b4a77
    ADD ESP,0x9c                        ; 004b4a78
    POP EBP                             ; 004b4a7e
    POP ESI                             ; 004b4a7f
    POP EBX                             ; 004b4a80
    RET                                 ; 004b4a81

