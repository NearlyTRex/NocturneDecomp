; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl uint core_dcube.cpp_clipTriangleToAABB_FUN_00456400(CVector3f * * triangle_vertices, CVector3f * aabb_min, CVector3f * aabb_max)
;
; Parameters:
; CVector3f * *    Stack[0x4]:4   triangle_vertices
; CVector3f *      Stack[0x8]:4   aabb_min
; CVector3f *      Stack[0xc]:4   aabb_max
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_dcube.cpp_CDemonCube_testAABBIntersection_FUN_00457ca0 at 00457cc3
;
; Referenced Globals:
;   uint g_CubeInputTriangleCount
;   CVector3f[16] g_CubeInputTriangleBuffer
;   undefined4 g_CubeInputTriangleBuffer[0].y
;   undefined4 g_CubeInputTriangleBuffer[0].z
;   undefined4 g_CubeInputTriangleBuffer[1].x
;   undefined4 g_CubeInputTriangleBuffer[1].y
;   undefined4 g_CubeInputTriangleBuffer[1].z
;   undefined4 g_CubeInputTriangleBuffer[2].x
;   undefined4 g_CubeInputTriangleBuffer[2].y
;   undefined4 g_CubeInputTriangleBuffer[2].z
;   uint g_CubeClipStage1Count
;   uint g_CubeClipStage2Count
;   uint g_CubeClipStage3Count
;   uint g_CubeClipStage4Count
;   uint g_CubeClipStage5Count
;   ... and 10 more
;
; Called Functions:
;   core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
;   core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
;   core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
;   core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
;   core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
;   core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456400
        ;   Label: core_dcube.cpp_clipTriangleToAABB_FUN_00456400
    PUSH ESI                            ; 00456401
    PUSH EDI                            ; 00456402
    PUSH EBP                            ; 00456403
    SUB ESP,0x8                         ; 00456404
    MOV ESI,dword ptr [ESP + 0x20]      ; 00456407
    MOV EDI,dword ptr [ESP + 0x24]      ; 0045640b
    MOV dword ptr [0x015c42a4],0x3      ; 0045640f | uint g_CubeInputTriangleCount
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00456419
    MOV EDX,dword ptr [EDX]             ; 0045641d
    CMP EDX,0x15c42a8                   ; 0045641f | CVector3f[16] g_CubeInputTriangleBuffer
    JNZ 0x004565ae                      ; 00456425 | LAB_004565ae
        ;   XREF to: 004565ae (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045642b
        ;   Label: LAB_0045642b
    MOV EDX,dword ptr [EDX + 0x4]       ; 0045642f
    CMP EDX,0x15c42b4                   ; 00456432 | g_CubeInputTriangleBuffer[1].x
    JZ 0x00456453                       ; 00456438 | LAB_00456453
        ;   XREF to: 00456453 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 0045643a
    FLD float ptr [EDX + 0x8]           ; 0045643c
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045643f
    MOV [0x015c42b8],EAX                ; 00456442 | g_CubeInputTriangleBuffer[1].y
    FSTP float ptr [0x015c42bc]         ; 00456447 | g_CubeInputTriangleBuffer[1].z
    FSTP float ptr [0x015c42b4]         ; 0045644d | g_CubeInputTriangleBuffer[1].x
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00456453
        ;   Label: LAB_00456453
    MOV EDX,dword ptr [EDX + 0x8]       ; 00456457
    CMP EDX,0x15c42c0                   ; 0045645a | g_CubeInputTriangleBuffer[2].x
    JZ 0x0045647b                       ; 00456460 | LAB_0045647b
        ;   XREF to: 0045647b (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 00456462
    FLD float ptr [EDX + 0x8]           ; 00456464
    MOV EAX,dword ptr [EDX + 0x4]       ; 00456467
    MOV [0x015c42c4],EAX                ; 0045646a | g_CubeInputTriangleBuffer[2].y
    FSTP float ptr [0x015c42c8]         ; 0045646f | g_CubeInputTriangleBuffer[2].z
    FSTP float ptr [0x015c42c0]         ; 00456475 | g_CubeInputTriangleBuffer[2].x
    MOV ECX,0xffffffff                  ; 0045647b
        ;   Label: LAB_0045647b
    MOV EAX,[0x015c42a4]                ; 00456480 | uint g_CubeInputTriangleCount
    XOR EBX,EBX                         ; 00456485
    XOR EBP,EBP                         ; 00456487
    MOV dword ptr [ESP],EBX             ; 00456489
    MOV dword ptr [ESP + 0x4],ECX       ; 0045648c
    TEST EAX,EAX                        ; 00456490
    JLE 0x00456513                      ; 00456492 | LAB_00456513
        ;   XREF to: 00456513 (CONDITIONAL_JUMP)
    MOV EBX,0x15c42a8                   ; 00456498 | CVector3f[16] g_CubeInputTriangleBuffer
    FLD float ptr [EBX]                 ; 0045649d | CVector3f[16] g_CubeInputTriangleBuffer
        ;   Label: LAB_0045649d
    MOV ECX,EBX                         ; 0045649f
    XOR EDX,EDX                         ; 004564a1
    FCOMP float ptr [EDI]               ; 004564a3
    FNSTSW AX                           ; 004564a5
    SAHF                                ; 004564a7
    JBE 0x004564af                      ; 004564a8 | LAB_004564af
        ;   XREF to: 004564af (CONDITIONAL_JUMP)
    MOV EDX,0x1                         ; 004564aa
    FLD float ptr [ECX + 0x4]           ; 004564af | g_CubeInputTriangleBuffer[0].y
        ;   Label: LAB_004564af
    FCOMP float ptr [EDI + 0x4]         ; 004564b2
    FNSTSW AX                           ; 004564b5
    SAHF                                ; 004564b7
    JBE 0x004564bd                      ; 004564b8 | LAB_004564bd
        ;   XREF to: 004564bd (CONDITIONAL_JUMP)
    OR DL,0x2                           ; 004564ba
    FLD float ptr [ECX + 0x8]           ; 004564bd | g_CubeInputTriangleBuffer[0].z
        ;   Label: LAB_004564bd
    FCOMP float ptr [EDI + 0x8]         ; 004564c0
    FNSTSW AX                           ; 004564c3
    SAHF                                ; 004564c5
    JBE 0x004564cb                      ; 004564c6 | LAB_004564cb
        ;   XREF to: 004564cb (CONDITIONAL_JUMP)
    OR DL,0x4                           ; 004564c8
    FLD float ptr [ECX]                 ; 004564cb | CVector3f[16] g_CubeInputTriangleBuffer
        ;   Label: LAB_004564cb
    FCOMP float ptr [ESI]               ; 004564cd
    FNSTSW AX                           ; 004564cf
    SAHF                                ; 004564d1
    JNC 0x004564d7                      ; 004564d2 | LAB_004564d7
        ;   XREF to: 004564d7 (CONDITIONAL_JUMP)
    OR DL,0x8                           ; 004564d4
    FLD float ptr [ECX + 0x4]           ; 004564d7 | g_CubeInputTriangleBuffer[0].y
        ;   Label: LAB_004564d7
    FCOMP float ptr [ESI + 0x4]         ; 004564da
    FNSTSW AX                           ; 004564dd
    SAHF                                ; 004564df
    JNC 0x004564e5                      ; 004564e0 | LAB_004564e5
        ;   XREF to: 004564e5 (CONDITIONAL_JUMP)
    OR DL,0x10                          ; 004564e2
    FLD float ptr [ECX + 0x8]           ; 004564e5 | g_CubeInputTriangleBuffer[0].z
        ;   Label: LAB_004564e5
    FCOMP float ptr [ESI + 0x8]         ; 004564e8
    FNSTSW AX                           ; 004564eb
    SAHF                                ; 004564ed
    JNC 0x004564f3                      ; 004564ee | LAB_004564f3
        ;   XREF to: 004564f3 (CONDITIONAL_JUMP)
    OR DL,0x20                          ; 004564f0
    MOV ECX,dword ptr [ESP + 0x4]       ; 004564f3
        ;   Label: LAB_004564f3
    MOV EAX,dword ptr [ESP]             ; 004564f7
    ADD EBX,0xc                         ; 004564fa
    INC EBP                             ; 004564fd
    AND ECX,EDX                         ; 004564fe
    OR EAX,EDX                          ; 00456500
    MOV EDX,dword ptr [0x015c42a4]      ; 00456502 | uint g_CubeInputTriangleCount
    MOV dword ptr [ESP + 0x4],ECX       ; 00456508
    MOV dword ptr [ESP],EAX             ; 0045650c
    CMP EBP,EDX                         ; 0045650f
    JL 0x0045649d                       ; 00456511 | LAB_0045649d
        ;   XREF to: 0045649d (CONDITIONAL_JUMP)
    CMP dword ptr [ESP],0x0             ; 00456513
        ;   Label: LAB_00456513
    JNZ 0x004565cc                      ; 00456517 | LAB_004565cc
        ;   XREF to: 004565cc (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045651d
    MOV EBP,0x3                         ; 00456521
    MOV EDX,dword ptr [EDX]             ; 00456526
    MOV dword ptr [0x015c473c],EBP      ; 00456528 | uint g_CubeClippedTriangleCount
    CMP EDX,0x15c4740                   ; 0045652e | CVector3f[16] g_CubeClippedTriangleBuffer
    JZ 0x0045654f                       ; 00456534 | LAB_0045654f
        ;   XREF to: 0045654f (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 00456536
    FLD float ptr [EDX + 0x8]           ; 00456538
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045653b
    MOV [0x015c4744],EAX                ; 0045653e | g_CubeClippedTriangleBuffer[0].y
    FSTP float ptr [0x015c4748]         ; 00456543 | g_CubeClippedTriangleBuffer[0].z
    FSTP float ptr [0x015c4740]         ; 00456549 | CVector3f[16] g_CubeClippedTriangleBuffer
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0045654f
        ;   Label: LAB_0045654f
    MOV EDX,dword ptr [EDX + 0x4]       ; 00456553
    CMP EDX,0x15c474c                   ; 00456556 | g_CubeClippedTriangleBuffer[1].x
    JZ 0x00456577                       ; 0045655c | LAB_00456577
        ;   XREF to: 00456577 (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 0045655e
    FLD float ptr [EDX + 0x8]           ; 00456560
    MOV EAX,dword ptr [EDX + 0x4]       ; 00456563
    MOV [0x015c4750],EAX                ; 00456566 | g_CubeClippedTriangleBuffer[1].y
    FSTP float ptr [0x015c4754]         ; 0045656b | g_CubeClippedTriangleBuffer[1].z
    FSTP float ptr [0x015c474c]         ; 00456571 | g_CubeClippedTriangleBuffer[1].x
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00456577
        ;   Label: LAB_00456577
    MOV EDX,dword ptr [EDX + 0x8]       ; 0045657b
    CMP EDX,0x15c4758                   ; 0045657e | g_CubeClippedTriangleBuffer[2].x
    JZ 0x0045659f                       ; 00456584 | LAB_0045659f
        ;   XREF to: 0045659f (CONDITIONAL_JUMP)
    FLD float ptr [EDX]                 ; 00456586
    FLD float ptr [EDX + 0x8]           ; 00456588
    MOV EAX,dword ptr [EDX + 0x4]       ; 0045658b
    MOV [0x015c475c],EAX                ; 0045658e | g_CubeClippedTriangleBuffer[2].y
    FSTP float ptr [0x015c4760]         ; 00456593 | g_CubeClippedTriangleBuffer[2].z
    FSTP float ptr [0x015c4758]         ; 00456599 | g_CubeClippedTriangleBuffer[2].x
    MOV EDX,0x1                         ; 0045659f
        ;   Label: LAB_0045659f
    MOV EAX,EDX                         ; 004565a4
    ADD ESP,0x8                         ; 004565a6
    POP EBP                             ; 004565a9
    POP EDI                             ; 004565aa
    POP ESI                             ; 004565ab
    POP EBX                             ; 004565ac
    RET                                 ; 004565ad
    FLD float ptr [EDX]                 ; 004565ae
        ;   Label: LAB_004565ae
    FLD float ptr [EDX + 0x8]           ; 004565b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004565b3
    MOV [0x015c42ac],EAX                ; 004565b6 | g_CubeInputTriangleBuffer[0].y
    FSTP float ptr [0x015c42b0]         ; 004565bb | g_CubeInputTriangleBuffer[0].z
    FSTP float ptr [0x015c42a8]         ; 004565c1 | CVector3f[16] g_CubeInputTriangleBuffer
    JMP 0x0045642b                      ; 004565c7 | LAB_0045642b
        ;   XREF to: 0045642b (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [ESP + 0x4]       ; 004565cc
        ;   Label: LAB_004565cc
    TEST EBX,EBX                        ; 004565d0
    JZ 0x004565e0                       ; 004565d2 | LAB_004565e0
        ;   XREF to: 004565e0 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004565d4
    MOV EAX,EDX                         ; 004565d6
    ADD ESP,0x8                         ; 004565d8
    POP EBP                             ; 004565db
    POP EDI                             ; 004565dc
    POP ESI                             ; 004565dd
    POP EBX                             ; 004565de
    RET                                 ; 004565df
    PUSH dword ptr [EDI + 0x4]          ; 004565e0
        ;   Label: LAB_004565e0
    MOV dword ptr [0x015c4368],EBX      ; 004565e3 | uint g_CubeClipStage1Count
    MOV dword ptr [0x015c442c],EBX      ; 004565e9 | uint g_CubeClipStage2Count
    MOV dword ptr [0x015c44f0],EBX      ; 004565ef | uint g_CubeClipStage3Count
    MOV dword ptr [0x015c45b4],EBX      ; 004565f5 | uint g_CubeClipStage4Count
    MOV dword ptr [0x015c4678],EBX      ; 004565fb | uint g_CubeClipStage5Count
    MOV dword ptr [0x015c473c],EBX      ; 00456601 | uint g_CubeClippedTriangleCount
    CALL core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970 ; 00456607 | void core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)
        ;   XREF to: 00454970 (UNCONDITIONAL_CALL)
    MOV EAX,[0x015c4368]                ; 0045660c | uint g_CubeClipStage1Count
    ADD ESP,0x4                         ; 00456611
    CMP EAX,0x3                         ; 00456614
    JGE 0x00456625                      ; 00456617 | LAB_00456625
        ;   XREF to: 00456625 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 00456619
    MOV EAX,EDX                         ; 0045661b
    ADD ESP,0x8                         ; 0045661d
    POP EBP                             ; 00456620
    POP EDI                             ; 00456621
    POP ESI                             ; 00456622
    POP EBX                             ; 00456623
    RET                                 ; 00456624
    PUSH dword ptr [ESI + 0x4]          ; 00456625
        ;   Label: LAB_00456625
    CALL core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0 ; 00456628 | void core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)
        ;   XREF to: 00454ad0 (UNCONDITIONAL_CALL)
    MOV EDX,dword ptr [0x015c442c]      ; 0045662d | uint g_CubeClipStage2Count
    ADD ESP,0x4                         ; 00456633
    CMP EDX,0x3                         ; 00456636
    JGE 0x00456647                      ; 00456639 | LAB_00456647
        ;   XREF to: 00456647 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0045663b
    MOV EAX,EDX                         ; 0045663d
    ADD ESP,0x8                         ; 0045663f
    POP EBP                             ; 00456642
    POP EDI                             ; 00456643
    POP ESI                             ; 00456644
    POP EBX                             ; 00456645
    RET                                 ; 00456646
    PUSH dword ptr [EDI]                ; 00456647
        ;   Label: LAB_00456647
    CALL core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40 ; 00456649 | void core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)
        ;   XREF to: 00454c40 (UNCONDITIONAL_CALL)
    MOV ECX,dword ptr [0x015c44f0]      ; 0045664e | uint g_CubeClipStage3Count
    ADD ESP,0x4                         ; 00456654
    CMP ECX,0x3                         ; 00456657
    JGE 0x00456668                      ; 0045665a | LAB_00456668
        ;   XREF to: 00456668 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0045665c
    MOV EAX,EDX                         ; 0045665e
    ADD ESP,0x8                         ; 00456660
    POP EBP                             ; 00456663
    POP EDI                             ; 00456664
    POP ESI                             ; 00456665
    POP EBX                             ; 00456666
    RET                                 ; 00456667
    PUSH dword ptr [ESI]                ; 00456668
        ;   Label: LAB_00456668
    CALL core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0 ; 0045666a | void core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)
        ;   XREF to: 00454da0 (UNCONDITIONAL_CALL)
    MOV EBX,dword ptr [0x015c45b4]      ; 0045666f | uint g_CubeClipStage4Count
    ADD ESP,0x4                         ; 00456675
    CMP EBX,0x3                         ; 00456678
    JGE 0x00456689                      ; 0045667b | LAB_00456689
        ;   XREF to: 00456689 (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0045667d
    MOV EAX,EDX                         ; 0045667f
    ADD ESP,0x8                         ; 00456681
    POP EBP                             ; 00456684
    POP EDI                             ; 00456685
    POP ESI                             ; 00456686
    POP EBX                             ; 00456687
    RET                                 ; 00456688
    PUSH dword ptr [ESI + 0x8]          ; 00456689
        ;   Label: LAB_00456689
    CALL core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00 ; 0045668c | void core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)
        ;   XREF to: 00454f00 (UNCONDITIONAL_CALL)
    MOV ESI,dword ptr [0x015c4678]      ; 00456691 | uint g_CubeClipStage5Count
    ADD ESP,0x4                         ; 00456697
    CMP ESI,0x3                         ; 0045669a
    JGE 0x004566ab                      ; 0045669d | LAB_004566ab
        ;   XREF to: 004566ab (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 0045669f
    MOV EAX,EDX                         ; 004566a1
    ADD ESP,0x8                         ; 004566a3
    POP EBP                             ; 004566a6
    POP EDI                             ; 004566a7
    POP ESI                             ; 004566a8
    POP EBX                             ; 004566a9
    RET                                 ; 004566aa
    PUSH dword ptr [EDI + 0x8]          ; 004566ab
        ;   Label: LAB_004566ab
    CALL core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070 ; 004566ae | void core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)
        ;   XREF to: 00455070 (UNCONDITIONAL_CALL)
    MOV EDI,dword ptr [0x015c473c]      ; 004566b3 | uint g_CubeClippedTriangleCount
    ADD ESP,0x4                         ; 004566b9
    CMP EDI,0x3                         ; 004566bc
    JGE 0x0045659f                      ; 004566bf | LAB_0045659f
        ;   XREF to: 0045659f (CONDITIONAL_JUMP)
    XOR EDX,EDX                         ; 004566c5
    MOV EAX,EDX                         ; 004566c7
    ADD ESP,0x8                         ; 004566c9
    POP EBP                             ; 004566cc
    POP EDI                             ; 004566cd
    POP ESI                             ; 004566ce
    POP EBX                             ; 004566cf
    RET                                 ; 004566d0

