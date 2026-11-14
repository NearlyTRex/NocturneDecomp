; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_glass_cpp_CGlass_renderBackground_FUN_004c5840(CGlass *this_ptr,int layer_flag)
;
; Parameters:
; CGlass *         Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 DAT_005f7a60
;   undefined4 DAT_0060b280
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01ba5c50
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0
;   core_box.cpp_FUN_0041a840
;   core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004c5840
        ;   Label: core_glass.cpp_CGlass_renderBackground_FUN_004c5840
    PUSH EDI                            ; 004c5841
    PUSH EBP                            ; 004c5842
    SUB ESP,0x30                        ; 004c5843
    MOV EBP,dword ptr [ESP + 0x40]      ; 004c5846
    MOV EAX,dword ptr [ESP + 0x44]      ; 004c584a
    CMP dword ptr [EBP + 0x4cc],0x0     ; 004c584e
    JZ 0x004c59d3                       ; 004c5855
        ;   XREF to: 004c59d3 (CONDITIONAL_JUMP)  ; LAB_004c59d3
    TEST EAX,EAX                        ; 004c585b
    JNZ 0x004c586c                      ; 004c585d
        ;   XREF to: 004c586c (CONDITIONAL_JUMP)  ; LAB_004c586c
    CMP dword ptr [EBP + 0xc98],0x0     ; 004c585f
    JZ 0x004c59ba                       ; 004c5866
        ;   XREF to: 004c59ba (CONDITIONAL_JUMP)  ; LAB_004c59ba
    PUSH EBP                            ; 004c586c
        ;   Label: LAB_004c586c
    MOV dword ptr [EBP + 0xc98],0x0     ; 004c586d
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0 ; 004c5877
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004089d0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c587c
    PUSH 0x0                            ; 004c587f
    MOV EDX,dword ptr [EBP + 0x2b0]     ; 004c5881
    PUSH EBP                            ; 004c5887
    LEA ESI,[ESP + 0x20]                ; 004c5888
    LEA EDI,[ESP + 0x8]                 ; 004c588c
    CALL dword ptr [EDX + 0x24]         ; 004c5890
    MOV ECX,0x6                         ; 004c5893
    ADD ESP,0x4                         ; 004c5898
    LEA EDX,[ESP + 0x4]                 ; 004c589b
    LEA ESI,[ESP + 0x1c]                ; 004c589f
    PUSH EDX                            ; 004c58a3
    MOVSD.REP ES:EDI,ESI                ; 004c58a4
    CALL core_box.cpp_FUN_0041a840      ; 004c58a6
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041a840()
    MOV EDI,dword ptr [EBP + 0x2dc]     ; 004c58ab
    ADD ESP,0x8                         ; 004c58b1
    TEST EDI,EDI                        ; 004c58b4
    JZ 0x004c59c1                       ; 004c58b6
        ;   XREF to: 004c59c1 (CONDITIONAL_JUMP)  ; LAB_004c59c1
    LEA EDX,[EBP + 0x4d0]               ; 004c58bc
    PUSH EDX                            ; 004c58c2
    MOV EDX,dword ptr [0x0060b280]      ; 004c58c3 | DAT_0060b280
    PUSH EDX                            ; 004c58c9 | DAT_01ba5c50
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00 ; 004c58ca
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0046ca00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
        ;   Label: LAB_004c58ca
    ADD ESP,0x8                         ; 004c58cf
    PUSH EBX                            ; 004c58d2
    LEA ECX,[EBP + 0x4e8]               ; 004c58d3
    MOV EBX,dword ptr [EBP + 0xc90]     ; 004c58d9
    LEA EDI,[EBP + 0x614]               ; 004c58df
    XOR ESI,ESI                         ; 004c58e5
    MOV EDX,EDI                         ; 004c58e7
    TEST EBX,EBX                        ; 004c58e9
    JLE 0x004c5930                      ; 004c58eb
        ;   XREF to: 004c5930 (CONDITIONAL_JUMP)  ; LAB_004c5930
    MOV EBX,EDX                         ; 004c58ed
        ;   Label: LAB_004c58ed
    MOV EAX,ECX                         ; 004c58ef
    FLD float ptr [EAX]                 ; 004c58f1
    FMUL float ptr [0x005f7a60]         ; 004c58f3 | DAT_005f7a60
    FISTP dword ptr [EBX]               ; 004c58f9
    FLD float ptr [EAX + 0x4]           ; 004c58fb
    FMUL float ptr [0x005f7a60]         ; 004c58fe | DAT_005f7a60
    FISTP dword ptr [EBX + 0x4]         ; 004c5904
    FLD float ptr [EAX + 0x8]           ; 004c5907
    FMUL float ptr [0x005f7a60]         ; 004c590a | DAT_005f7a60
    FISTP dword ptr [EBX + 0x8]         ; 004c5910
    INC ESI                             ; 004c5913
    ADD ECX,0xc                         ; 004c5914
    MOV EAX,dword ptr [EBP + 0xc90]     ; 004c5917
    ADD EDX,0xc                         ; 004c591d
    CMP ESI,EAX                         ; 004c5920
    JL 0x004c58ed                       ; 004c5922
        ;   XREF to: 004c58ed (CONDITIONAL_JUMP)  ; LAB_004c58ed
    LEA EAX,[EAX]                       ; 004c5924
    LEA EDX,[EDX]                       ; 004c592a
    PUSH EDI                            ; 004c5930
        ;   Label: LAB_004c5930
    MOV EDX,dword ptr [EBP + 0xc90]     ; 004c5931
    PUSH EDX                            ; 004c5937
    MOV ECX,dword ptr [0x0061b5a8]      ; 004c5938 | g_CDemonSetPtr
    PUSH ECX                            ; 004c593e | g_CDemonSetInstance
    XOR EDI,EDI                         ; 004c593f
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90 ; 004c5941
        ;   XREF to: 00531e90 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_00531e90(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EBX,dword ptr [EBP + 0xc94]     ; 004c5946
    ADD ESP,0xc                         ; 004c594c
    TEST EBX,EBX                        ; 004c594f
    JLE 0x004c59b0                      ; 004c5951
        ;   XREF to: 004c59b0 (CONDITIONAL_JUMP)  ; LAB_004c59b0
    LEA ESI,[EBP + 0x808]               ; 004c5953
    MOV EBX,EBP                         ; 004c5959
    PUSH 0xc1                           ; 004c595b
        ;   Label: LAB_004c595b
    MOV dword ptr [EBX + 0x810],0x0     ; 004c5960
    MOV EAX,[0x0060b280]                ; 004c596a | DAT_0060b280
    MOV dword ptr [EBX + 0x814],0x0     ; 004c596f
    PUSH ESI                            ; 004c5979
    INC EDI                             ; 004c597a
    MOV dword ptr [EBX + 0x818],0x0     ; 004c597b
    PUSH EAX                            ; 004c5985 | DAT_01ba5c50
    MOV dword ptr [EBX + 0x81c],0x0     ; 004c5986
    ADD EBX,0x48                        ; 004c5990
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00 ; 004c5993
        ;   XREF to: 00469d00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00469d00(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESI,0x48                        ; 004c5998
    MOV EDX,dword ptr [EBP + 0xc94]     ; 004c599b
    ADD ESP,0xc                         ; 004c59a1
    CMP EDI,EDX                         ; 004c59a4
    JL 0x004c595b                       ; 004c59a6
        ;   XREF to: 004c595b (CONDITIONAL_JUMP)  ; LAB_004c595b
    LEA EAX,[EAX]                       ; 004c59a8
    MOV EDX,EDX                         ; 004c59ae
    PUSH EBP                            ; 004c59b0
        ;   Label: LAB_004c59b0
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10 ; 004c59b1
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408a10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 004c59b6
    POP EBX                             ; 004c59b9
    ADD ESP,0x30                        ; 004c59ba
        ;   Label: LAB_004c59ba
    POP EBP                             ; 004c59bd
    POP EDI                             ; 004c59be
    POP ESI                             ; 004c59bf
    RET                                 ; 004c59c0
    LEA EDX,[EBP + 0x2c0]               ; 004c59c1
        ;   Label: LAB_004c59c1
    PUSH EDX                            ; 004c59c7
    MOV EAX,[0x0060b280]                ; 004c59c8 | DAT_0060b280
    PUSH EAX                            ; 004c59cd | DAT_01ba5c50
    JMP 0x004c58ca                      ; 004c59ce
        ;   XREF to: 004c58ca (UNCONDITIONAL_JUMP)  ; LAB_004c58ca
    TEST EAX,EAX                        ; 004c59d3
        ;   Label: LAB_004c59d3
    JZ 0x004c59ba                       ; 004c59d5
        ;   XREF to: 004c59ba (CONDITIONAL_JUMP)  ; LAB_004c59ba
    CMP dword ptr [EBP + 0x2dc],0x0     ; 004c59d7
    JZ 0x004c59ba                       ; 004c59de
        ;   XREF to: 004c59ba (CONDITIONAL_JUMP)  ; LAB_004c59ba
    CMP dword ptr [EBP + 0x344],0x0     ; 004c59e0
    JZ 0x004c59ba                       ; 004c59e7
        ;   XREF to: 004c59ba (CONDITIONAL_JUMP)  ; LAB_004c59ba
    PUSH EBP                            ; 004c59e9
    CALL core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640 ; 004c59ea
        ;   XREF to: 004c5640 (UNCONDITIONAL_CALL)  ; void core_glass.cpp_CGlass_renderBrokenGlass_FUN_004c5640(CGlass * this_ptr)
    ADD ESP,0x4                         ; 004c59ef
    ADD ESP,0x30                        ; 004c59f2
    POP EBP                             ; 004c59f5
    POP EDI                             ; 004c59f6
    POP ESI                             ; 004c59f7
    RET                                 ; 004c59f8

