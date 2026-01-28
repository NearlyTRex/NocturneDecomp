; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_ladder_cpp_CLadder_FUN_00502620(CLadder *this_ptr)
;
; Parameters:
; CLadder *        Stack[0x4]:4   this_ptr
; Local Variables:
; SRenderVertex    Stack[-0x74]:48  local_74
;
; Referenced Globals:
;   double DOUBLE_00630e18 = 0.5
;   double DOUBLE_00630e20 = 0.00100000000000000
;   float FLOAT_006605d0 = 256
;   float FLOAT_006605e8 = 1
;   CDemonRenderer* g_CDemonRendererPtr2 = 02c6d578
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   CDemonRenderer g_CDemonRendererInstance
;   int g_ActiveRenderColor
;   CDemonMission g_CDemonMissionInstance
;   undefined4 DAT_02f33744
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
;   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
;   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
;   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
;   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
;   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502620
        ;   Label: core_ladder.cpp_CLadder_FUN_00502620
    PUSH ESI                            ; 00502621
    PUSH EDI                            ; 00502622
    PUSH EBP                            ; 00502623
    MOV EBP,ESP                         ; 00502624
    SUB ESP,0x70                        ; 00502626
    AND ESP,0xfffffff8                  ; 00502629
    MOV EDX,dword ptr [EBP + 0x14]      ; 0050262c
    PUSH EDX                            ; 0050262f
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00 ; 00502630
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00(CDemonActor * actor)
    ADD ESP,0x4                         ; 00502635
    LEA EBX,[ESP + 0xc]                 ; 00502638
    PUSH EBX                            ; 0050263c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050263d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502640
    PUSH ECX                            ; 00502643
    MOV EAX,dword ptr [EAX + 0x154]     ; 00502644
    CALL dword ptr [EAX + 0x14]         ; 0050264a
    ADD ESP,0x8                         ; 0050264d
    PUSH EAX                            ; 00502650
    CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0 ; 00502651
        ;   XREF to: 004204f0 (UNCONDITIONAL_CALL)  ; int core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0(CBoundingBox3D * this_ptr)
    ADD ESP,0x4                         ; 00502656
    MOV dword ptr [ESP + 0x6c],EAX      ; 00502659
    TEST EAX,EAX                        ; 0050265d
    JZ 0x0050287f                       ; 0050265f
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV EAX,[0x0067d550]                ; 00502665 | g_CDemonMissionInstance | g_CDemonMissionPtr
    CMP dword ptr [EAX + 0x4],0x0       ; 0050266a | DAT_02f33744
    JZ 0x0050287f                       ; 0050266e
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV ESI,dword ptr [0x006703ec]      ; 00502674 | g_CDemonRendererPtr2
    PUSH ESI                            ; 0050267a | g_CDemonRendererInstance
    CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0 ; 0050267b
        ;   XREF to: 0048cae0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(CDemonRenderer * this_ptr)
    ADD ESP,0x4                         ; 00502680
    TEST EAX,EAX                        ; 00502683
    JNZ 0x0050287f                      ; 00502685
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    MOV EDI,0xfb                        ; 0050268b
    MOV dword ptr [ESP + 0x8],EAX       ; 00502690
    MOV dword ptr [0x02d02570],EDI      ; 00502694 | g_ActiveRenderColor
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050269a
        ;   Label: LAB_0050269a
    FLD float ptr [EAX + 0x2d8]         ; 0050269d
    FADD double ptr [0x00630e20]        ; 005026a3 | DOUBLE_00630e20
    FLD float ptr [ESP + 0x8]           ; 005026a9
    FSTP double ptr [ESP]               ; 005026ad
    FCOMP double ptr [ESP]              ; 005026b0
    FNSTSW AX                           ; 005026b3
    SAHF                                ; 005026b5
    JBE 0x0050287f                      ; 005026b6
        ;   XREF to: 0050287f (CONDITIONAL_JUMP)  ; LAB_0050287f
    FLDZ                                ; 005026bc
    FCOMP double ptr [ESP]              ; 005026be
    FNSTSW AX                           ; 005026c1
    SAHF                                ; 005026c3
    JC 0x005027cc                       ; 005026c4
        ;   XREF to: 005027cc (CONDITIONAL_JUMP)  ; LAB_005027cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005026ca
        ;   Label: LAB_005026ca
    FLD float ptr [EAX + 0x2d4]         ; 005026cd
    FCHS                                ; 005026d3
    FLD double ptr [0x00630e18]         ; 005026d5 | DOUBLE_00630e18
    FXCH                                ; 005026db
    FMUL ST1                            ; 005026dd
    XOR EBX,EBX                         ; 005026df
    MOV EAX,dword ptr [ESP + 0x8]       ; 005026e1
    MOV dword ptr [ESP + 0x44],EBX      ; 005026e5
    MOV dword ptr [ESP + 0x40],EAX      ; 005026e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005026ed
    FSTP float ptr [ESP + 0x3c]         ; 005026f0
    FMUL float ptr [EAX + 0x2d4]        ; 005026f4
    MOV EDI,dword ptr [0x006703ec]      ; 005026fa | g_CDemonRendererPtr2
    MOV EAX,dword ptr [ESP + 0x8]       ; 00502700
    MOV dword ptr [ESP + 0x5c],EBX      ; 00502704
    LEA EBX,[ESP + 0x48]                ; 00502708
    MOV dword ptr [ESP + 0x58],EAX      ; 0050270c
    LEA EAX,[ESP + 0x3c]                ; 00502710
    FSTP float ptr [ESP + 0x54]         ; 00502714
    FLD float ptr [EAX]                 ; 00502718
    FMUL float ptr [0x006605d0]         ; 0050271a | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 00502720
    FLD float ptr [EAX + 0x4]           ; 00502722
    FMUL float ptr [0x006605d0]         ; 00502725 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 0050272b
    FLD float ptr [EAX + 0x8]           ; 0050272e
    FMUL float ptr [0x006605d0]         ; 00502731 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 00502737
    LEA EAX,[ESP + 0x48]                ; 0050273a
    PUSH EAX                            ; 0050273e
    MOV EAX,dword ptr [EDI]             ; 0050273f | g_CDemonRendererInstance
    PUSH EAX                            ; 00502741
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00502742
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0x2c]                ; 00502747
    ADD ESP,0x8                         ; 0050274b
    LEA EAX,[ESP + 0x54]                ; 0050274e
    MOV EDI,dword ptr [0x006703ec]      ; 00502752 | g_CDemonRendererPtr2
    FLD float ptr [EAX]                 ; 00502758
    FMUL float ptr [0x006605d0]         ; 0050275a | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 00502760
    FLD float ptr [EAX + 0x4]           ; 00502762
    FMUL float ptr [0x006605d0]         ; 00502765 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 0050276b
    FLD float ptr [EAX + 0x8]           ; 0050276e
    FMUL float ptr [0x006605d0]         ; 00502771 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 00502777
    LEA EAX,[ESP + 0x24]                ; 0050277a
    PUSH EAX                            ; 0050277e
    MOV EAX,dword ptr [EDI]             ; 0050277f | g_CDemonRendererInstance
    ADD EAX,0x30                        ; 00502781
    PUSH EAX                            ; 00502784
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00502785
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050278a
    MOV EAX,[0x006703ec]                ; 0050278d | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00502792
    MOV EAX,dword ptr [EAX]             ; 00502795 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00502797
    MOV EDI,ESP                         ; 0050279c
    LEA ESI,[EAX + 0x30]                ; 0050279e
    MOVSD.REP ES:EDI,ESI                ; 005027a1
    SUB ESP,0x30                        ; 005027a3
    MOV ECX,0xc                         ; 005027a6
    MOV EDI,ESP                         ; 005027ab
    MOV ESI,EAX                         ; 005027ad
    MOVSD.REP ES:EDI,ESI                ; 005027af
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 005027b1
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 005027b6
    FLD float ptr [ESP + 0x8]           ; 005027b9
    FADD float ptr [0x006605e8]         ; 005027bd | FLOAT_006605e8
    FSTP float ptr [ESP + 0x8]          ; 005027c3
    JMP 0x0050269a                      ; 005027c7
        ;   XREF to: 0050269a (UNCONDITIONAL_JUMP)  ; LAB_0050269a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005027cc
        ;   Label: LAB_005027cc
    LEA EBX,[ESP + 0x30]                ; 005027d0
    XOR EDX,EDX                         ; 005027d4
    MOV EDI,dword ptr [0x006703ec]      ; 005027d6 | g_CDemonRendererPtr2
    MOV dword ptr [ESP + 0x60],EDX      ; 005027dc
    MOV dword ptr [ESP + 0x64],EAX      ; 005027e0
    LEA EAX,[ESP + 0x60]                ; 005027e4
    MOV dword ptr [ESP + 0x68],EDX      ; 005027e8
    FLD float ptr [EAX]                 ; 005027ec
    FMUL float ptr [0x006605d0]         ; 005027ee | FLOAT_006605d0
    FISTP dword ptr [EBX]               ; 005027f4
    FLD float ptr [EAX + 0x4]           ; 005027f6
    FMUL float ptr [0x006605d0]         ; 005027f9 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x4]         ; 005027ff
    FLD float ptr [EAX + 0x8]           ; 00502802
    FMUL float ptr [0x006605d0]         ; 00502805 | FLOAT_006605d0
    FISTP dword ptr [EBX + 0x8]         ; 0050280b
    LEA EAX,[ESP + 0x30]                ; 0050280e
    PUSH EAX                            ; 00502812
    MOV EAX,dword ptr [EDI]             ; 00502813 | g_CDemonRendererInstance
    ADD EAX,0x60                        ; 00502815
    PUSH EAX                            ; 00502818
    CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c ; 00502819
        ;   XREF to: 005b575c (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 0050281e
    MOV EAX,[0x006703ec]                ; 00502821 | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00502826
    MOV EAX,dword ptr [EAX]             ; 00502829 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 0050282b
    MOV EDI,ESP                         ; 00502830
    LEA ESI,[EAX + 0x60]                ; 00502832
    MOVSD.REP ES:EDI,ESI                ; 00502835
    SUB ESP,0x30                        ; 00502837
    MOV ECX,0xc                         ; 0050283a
    MOV EDI,ESP                         ; 0050283f
    MOV ESI,EAX                         ; 00502841
    MOVSD.REP ES:EDI,ESI                ; 00502843
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00502845
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 0050284a
    MOV EAX,[0x006703ec]                ; 0050284d | g_CDemonRendererPtr2
    SUB ESP,0x30                        ; 00502852
    MOV EAX,dword ptr [EAX]             ; 00502855 | g_CDemonRendererInstance
    MOV ECX,0xc                         ; 00502857
    MOV EDI,ESP                         ; 0050285c
    LEA ESI,[EAX + 0x60]                ; 0050285e
    MOVSD.REP ES:EDI,ESI                ; 00502861
    SUB ESP,0x30                        ; 00502863
    MOV ECX,0xc                         ; 00502866
    MOV EDI,ESP                         ; 0050286b
    LEA ESI,[EAX + 0x30]                ; 0050286d
    MOVSD.REP ES:EDI,ESI                ; 00502870
    CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70 ; 00502872
        ;   XREF to: 00407d70 (UNCONDITIONAL_CALL)  ; void engine_3d.c_clipAndDrawLine2D_FUN_00407d70(SRenderVertex vertex1, SRenderVertex vertex2)
    ADD ESP,0x60                        ; 00502877
    JMP 0x005026ca                      ; 0050287a
        ;   XREF to: 005026ca (UNCONDITIONAL_JUMP)  ; LAB_005026ca
    CMP dword ptr [ESP + 0x6c],0x0      ; 0050287f
        ;   Label: LAB_0050287f
    JNZ 0x0050289d                      ; 00502884
        ;   XREF to: 0050289d (CONDITIONAL_JUMP)  ; LAB_0050289d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00502886
        ;   Label: LAB_00502886
    PUSH EAX                            ; 00502889
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40 ; 0050288a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0050288f
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00502892
    MOV ESP,EBP                         ; 00502896
    POP EBP                             ; 00502898
    POP EDI                             ; 00502899
    POP ESI                             ; 0050289a
    POP EBX                             ; 0050289b
    RET                                 ; 0050289c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050289d
        ;   Label: LAB_0050289d
    PUSH -0x1                           ; 005028a0
    ADD EAX,0x158                       ; 005028a2
    PUSH 0x0                            ; 005028a7
    PUSH EAX                            ; 005028a9
    CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 ; 005028aa
        ;   XREF to: 00478d20 (UNCONDITIONAL_CALL)  ; void core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(CKeyFramedModelInstance * this_ptr, float animation_frame, int render_flags)
    ADD ESP,0xc                         ; 005028af
    JMP 0x00502886                      ; 005028b2
        ;   XREF to: 00502886 (UNCONDITIONAL_JUMP)  ; LAB_00502886

