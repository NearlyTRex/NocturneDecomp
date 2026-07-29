; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_004574e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x1c]:4  local_1c
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_005be368
;   undefined4 DAT_01b4d738
;   undefined4 DAT_01b4d750
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0
;   core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200
;   engine_3d.c_isVisiblePlane_FUN_00404610
;   engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050
;   engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004574e0
        ;   Label: engine_drender.cpp_FUN_004574e0
    PUSH ESI                            ; 004574e1
    PUSH EDI                            ; 004574e2
    PUSH EBP                            ; 004574e3
    SUB ESP,0x48                        ; 004574e4
    MOV EDI,dword ptr [ESP + 0x5c]      ; 004574e7
    PUSH 0x0                            ; 004574eb
    MOV EDX,dword ptr [0x005ae704]      ; 004574ed | DAT_005ae704
    PUSH EDX                            ; 004574f3 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0 ; 004574f4
        ;   XREF to: 00460fb0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004574f9
    PUSH 0x0                            ; 004574fc
    MOV ECX,dword ptr [0x005ae704]      ; 004574fe | DAT_005ae704
    PUSH ECX                            ; 00457504 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 00457505
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    MOV EDX,dword ptr [EDI + 0x20]      ; 0045750a
    MOV EBX,dword ptr [EDI + 0x28]      ; 0045750d
    MOV EAX,EDX                         ; 00457510
    SAR EDX,0x1f                        ; 00457512
    IDIV EBX                            ; 00457515
    MOV EBX,dword ptr [EDI + 0x384]     ; 00457517
    IMUL EBX,EAX                        ; 0045751d
    MOV EDX,EAX                         ; 00457520
    LEA EAX,[EBX*0x4 + 0x0]             ; 00457522
    SUB EAX,EBX                         ; 00457529
    SHL EAX,0x2                         ; 0045752b
    MOV EBX,dword ptr [EDI + 0x2c]      ; 0045752e
    ADD ESP,0x8                         ; 00457531
    ADD EAX,EBX                         ; 00457534
    PUSH EAX                            ; 00457536
    PUSH EDX                            ; 00457537
    MOV ESI,dword ptr [0x005be368]      ; 00457538 | DAT_005be368
    PUSH ESI                            ; 0045753e | DAT_01e57284
    CALL core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200 ; 0045753f
        ;   XREF to: 0050c200 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_rotateVerticies_FUN_0050c200(CDemonSet * this_ptr, int vertex_count, CVector3i * input_vertices)
    MOV EAX,[0x005ae704]                ; 00457544 | DAT_005ae704
    MOV EDX,dword ptr [EAX + 0x18]      ; 00457549 | DAT_01b4d750
    ADD ESP,0xc                         ; 0045754c
    TEST EDX,EDX                        ; 0045754f
    JNZ 0x004575a6                      ; 00457551
        ;   XREF to: 004575a6 (CONDITIONAL_JUMP)  ; LAB_004575a6
    MOV EBP,dword ptr [EDI + 0x24]      ; 00457553
        ;   Label: LAB_00457553
    MOV EBX,dword ptr [EDI + 0x34]      ; 00457556
    XOR ESI,ESI                         ; 00457559
    TEST EBP,EBP                        ; 0045755b
    JLE 0x0045757c                      ; 0045755d
        ;   XREF to: 0045757c (CONDITIONAL_JUMP)  ; LAB_0045757c
    MOV EBP,0x3                         ; 0045755f
    PUSH EBX                            ; 00457564
        ;   Label: LAB_00457564
    CALL engine_3d.c_isVisiblePlane_FUN_00404610 ; 00457565
        ;   XREF to: 00404610 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00404610(SClipPlane * plane)
    ADD ESP,0x4                         ; 0045756a
    TEST EAX,EAX                        ; 0045756d
    JNZ 0x004575b3                      ; 0045756f
        ;   XREF to: 004575b3 (CONDITIONAL_JUMP)  ; LAB_004575b3
    INC ESI                             ; 00457571
        ;   Label: LAB_00457571
    MOV EAX,dword ptr [EDI + 0x24]      ; 00457572
    ADD EBX,0x20                        ; 00457575
    CMP ESI,EAX                         ; 00457578
    JL 0x00457564                       ; 0045757a
        ;   XREF to: 00457564 (CONDITIONAL_JUMP)  ; LAB_00457564
    PUSH 0x1                            ; 0045757c
        ;   Label: LAB_0045757c
    MOV ECX,dword ptr [0x005ae704]      ; 0045757e | DAT_005ae704
    PUSH ECX                            ; 00457584 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0 ; 00457585
        ;   XREF to: 00460fa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0045758a
    PUSH 0x1                            ; 0045758d
    MOV EBX,dword ptr [0x005ae704]      ; 0045758f | DAT_005ae704
    PUSH EBX                            ; 00457595 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 00457596
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 0045759b
    ADD ESP,0x48                        ; 0045759e
    POP EBP                             ; 004575a1
    POP EDI                             ; 004575a2
    POP ESI                             ; 004575a3
    POP EBX                             ; 004575a4
    RET                                 ; 004575a5
    PUSH 0x1                            ; 004575a6
        ;   Label: LAB_004575a6
    PUSH EAX                            ; 004575a8 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050 ; 004575a9
        ;   XREF to: 00461050 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004575ae
    JMP 0x00457553                      ; 004575b1
        ;   XREF to: 00457553 (UNCONDITIONAL_JUMP)  ; LAB_00457553
    MOV EAX,ESI                         ; 004575b3
        ;   Label: LAB_004575b3
    AND EAX,0x7f                        ; 004575b5
    ADD EAX,0x80                        ; 004575b8
    NEG EAX                             ; 004575bd
    PUSH EAX                            ; 004575bf
    MOV EDX,dword ptr [0x005ae704]      ; 004575c0 | DAT_005ae704
    PUSH EDX                            ; 004575c6 | DAT_01b4d738
    CALL engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10 ; 004575c7
        ;   XREF to: 00460f10 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_00460f10(CDemonRenderer * this_ptr, int color)
    ADD ESP,0x8                         ; 004575cc
    MOV EAX,dword ptr [EBX]             ; 004575cf
    MOV dword ptr [ESP + 0x8],EAX       ; 004575d1
    MOV EAX,dword ptr [EBX + 0x4]       ; 004575d5
    MOV dword ptr [ESP + 0xc],EAX       ; 004575d8
    MOV EAX,dword ptr [EBX + 0x8]       ; 004575dc
    MOV dword ptr [ESP + 0x10],EAX      ; 004575df
    MOV EAX,dword ptr [EBX + 0xc]       ; 004575e3
    MOV dword ptr [ESP + 0x14],EAX      ; 004575e6
    MOV EAX,dword ptr [EBX + 0x10]      ; 004575ea
    MOV dword ptr [ESP + 0x18],EAX      ; 004575ed
    MOV EAX,dword ptr [EBX + 0x14]      ; 004575f1
    MOV dword ptr [ESP + 0x24],EAX      ; 004575f4
    MOV EAX,dword ptr [EBX + 0x18]      ; 004575f8
    MOV dword ptr [ESP + 0x30],EAX      ; 004575fb
    MOV ECX,dword ptr [EBX + 0x1c]      ; 004575ff
    CMP ECX,-0x1                        ; 00457602
    JZ 0x0045762f                       ; 00457605
        ;   XREF to: 0045762f (CONDITIONAL_JUMP)  ; LAB_0045762f
    MOV EAX,0x4                         ; 00457607
    MOV dword ptr [ESP + 0x3c],ECX      ; 0045760c
    MOV dword ptr [ESP + 0x4],EAX       ; 00457610
    PUSH 0x1                            ; 00457614
        ;   Label: LAB_00457614
    LEA EAX,[ESP + 0x4]                 ; 00457616
    PUSH EAX                            ; 0045761a
    MOV EDX,dword ptr [0x005be368]      ; 0045761b | DAT_005be368
    PUSH EDX                            ; 00457621 | DAT_01e57284
    CALL core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0 ; 00457622
        ;   XREF to: 0050dfe0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_renderTexturedPrimitiveListVariant_FUN_0050dfe0(CDemonSet * this_ptr, SMRGLHeaderPrimitive * prim, int count)
    ADD ESP,0xc                         ; 00457627
    JMP 0x00457571                      ; 0045762a
        ;   XREF to: 00457571 (UNCONDITIONAL_JUMP)  ; LAB_00457571
    MOV dword ptr [ESP + 0x4],EBP       ; 0045762f
        ;   Label: LAB_0045762f
    JMP 0x00457614                      ; 00457633
        ;   XREF to: 00457614 (UNCONDITIONAL_JUMP)  ; LAB_00457614

