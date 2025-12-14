; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl double shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400(CLodMesh * this_ptr, SLodSamplePoint * sample_point, CLodFace * face)
;
; Parameters:
; CLodMesh *       Stack[0x8]:4   this_ptr
; SLodSamplePoint * Stack[0xc]:4   sample_point
; CLodFace *       Stack[0x10]:4   face
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x8c]:1  local_8c
; undefined        Stack[-0x80]:1  local_80
; undefined        Stack[-0x74]:1  local_74
; undefined4       Stack[-0x38]:4  local_38
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 00519408
;   shape_meshlod.cpp_CLodMesh_findClosestFaceToSamplePoint_FUN_00518300 at 00518378
;   shape_meshlod.cpp_CLodMesh_processGridCell_FUN_0051a030 at 0051a0eb
;
; Referenced Globals:
;   void* PTR_caseD_3_0051a3e4 = 0051a567
;   void* PTR_caseD_5_0051a3ec = 0051a5d5
;   undefined4 DAT_0051a3f4
;   TerminatedCString s_shape_meshlod_cpp_00637aa5
;   TerminatedCString s_anon_00637aba
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
;   shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051a400
        ;   Label: shape_meshlod.cpp_CLodMesh_computePointToFaceDistance_FUN_0051a400
    PUSH ESI                            ; 0051a401
    PUSH EDI                            ; 0051a402
    PUSH EBP                            ; 0051a403
    MOV EBP,ESP                         ; 0051a404
    SUB ESP,0x90                        ; 0051a406
    AND ESP,0xfffffff8                  ; 0051a40c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051a40f
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0051a412
    IMUL EDI,dword ptr [ESI + 0x10],0x4c4 ; 0051a415
    IMUL EAX,dword ptr [ESI + 0x14],0x4c4 ; 0051a41c
    MOV ECX,dword ptr [EBP + 0x14]      ; 0051a423
    MOV ECX,dword ptr [ECX + 0x4]       ; 0051a426
    ADD EDI,ECX                         ; 0051a429
    LEA EDX,[ECX + EAX*0x1]             ; 0051a42b
    MOV dword ptr [ESP + 0x68],EDX      ; 0051a42e
    IMUL EAX,dword ptr [ESI + 0x18],0x4c4 ; 0051a432
    ADD ECX,EAX                         ; 0051a439
    LEA EAX,[ESI + 0x54]                ; 0051a43b
    FLD float ptr [EBX + 0x4]           ; 0051a43e
    FMUL float ptr [EAX + 0x4]          ; 0051a441
    FLD float ptr [EBX]                 ; 0051a444
    FMUL float ptr [EAX]                ; 0051a446
    FADDP                               ; 0051a448
    FLD float ptr [EBX + 0x8]           ; 0051a44a
    FMUL float ptr [EAX + 0x8]          ; 0051a44d
    XOR EDX,EDX                         ; 0051a450
    FADDP                               ; 0051a452
    FCOMP float ptr [ESI + 0x78]        ; 0051a454
    FNSTSW AX                           ; 0051a457
    SAHF                                ; 0051a459
    JBE 0x0051a461                      ; 0051a45a
        ;   XREF to: 0051a461 (CONDITIONAL_JUMP)  ; LAB_0051a461
    MOV EDX,0x1                         ; 0051a45c
    LEA EAX,[ESI + 0x60]                ; 0051a461
        ;   Label: LAB_0051a461
    FLD float ptr [EBX + 0x4]           ; 0051a464
    FMUL float ptr [EAX + 0x4]          ; 0051a467
    FLD float ptr [EBX]                 ; 0051a46a
    FMUL float ptr [EAX]                ; 0051a46c
    FADDP                               ; 0051a46e
    FLD float ptr [EBX + 0x8]           ; 0051a470
    FMUL float ptr [EAX + 0x8]          ; 0051a473
    FADDP                               ; 0051a476
    FCOMP float ptr [ESI + 0x7c]        ; 0051a478
    FNSTSW AX                           ; 0051a47b
    SAHF                                ; 0051a47d
    JBE 0x0051a483                      ; 0051a47e
        ;   XREF to: 0051a483 (CONDITIONAL_JUMP)  ; LAB_0051a483
    OR DL,0x2                           ; 0051a480
    LEA EAX,[ESI + 0x6c]                ; 0051a483
        ;   Label: LAB_0051a483
    FLD float ptr [EBX + 0x4]           ; 0051a486
    FMUL float ptr [EAX + 0x4]          ; 0051a489
    FLD float ptr [EBX]                 ; 0051a48c
    FMUL float ptr [EAX]                ; 0051a48e
    FADDP                               ; 0051a490
    FLD float ptr [EBX + 0x8]           ; 0051a492
    FMUL float ptr [EAX + 0x8]          ; 0051a495
    FADDP                               ; 0051a498
    FCOMP float ptr [ESI + 0x80]        ; 0051a49a
    FNSTSW AX                           ; 0051a4a0
    SAHF                                ; 0051a4a2
    JBE 0x0051a4a8                      ; 0051a4a3
        ;   XREF to: 0051a4a8 (CONDITIONAL_JUMP)  ; LAB_0051a4a8
    OR DL,0x4                           ; 0051a4a5
    CMP EDX,0x6                         ; 0051a4a8
        ;   Label: LAB_0051a4a8
    JA 0x0051a62f                       ; 0051a4ab
        ;   XREF to: 0051a62f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x51a3d8]  ; 0051a4b1 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[ESI + 0x44]                ; 0051a4b8
        ;   Label: caseD_0
    FLD float ptr [EBX + 0x4]           ; 0051a4bb
    FMUL float ptr [EAX + 0x4]          ; 0051a4be
    FLD float ptr [EBX]                 ; 0051a4c1
    FMUL float ptr [EAX]                ; 0051a4c3
    FADDP                               ; 0051a4c5
    FLD float ptr [EBX + 0x8]           ; 0051a4c7
    FMUL float ptr [EAX + 0x8]          ; 0051a4ca
    FADDP                               ; 0051a4cd
    FSUBR float ptr [ESI + 0x50]        ; 0051a4cf
    FMUL ST0                            ; 0051a4d2
    FSTP double ptr [ESP]               ; 0051a4d4
    MOV EAX,dword ptr [ESP]             ; 0051a4d7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a4da
    MOV ESP,EBP                         ; 0051a4de
    POP EBP                             ; 0051a4e0
    POP EDI                             ; 0051a4e1
    POP ESI                             ; 0051a4e2
    POP EBX                             ; 0051a4e3
    RET                                 ; 0051a4e4
    MOV ECX,dword ptr [ESP + 0x68]      ; 0051a4e5
        ;   Label: caseD_1
    PUSH ECX                            ; 0051a4e9
    PUSH EDI                            ; 0051a4ea
    PUSH EBX                            ; 0051a4eb
    LEA EAX,[ESP + 0x38]                ; 0051a4ec
    PUSH EAX                            ; 0051a4f0
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a4f1
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    FLD float ptr [EBX]                 ; 0051a4f6
    ADD ESP,0x10                        ; 0051a4f8
    FSUB float ptr [EAX]                ; 0051a4fb
    FMUL ST0                            ; 0051a4fd
    FLD float ptr [EBX + 0x4]           ; 0051a4ff
    FSUB float ptr [EAX + 0x4]          ; 0051a502
    FMUL ST0                            ; 0051a505
    FLD float ptr [EBX + 0x8]           ; 0051a507
    FXCH                                ; 0051a50a
    FADDP ST2,ST0                       ; 0051a50c
    FSUB float ptr [EAX + 0x8]          ; 0051a50e
    FMUL ST0                            ; 0051a511
    FADDP                               ; 0051a513
    FSTP double ptr [ESP]               ; 0051a515
    MOV EAX,dword ptr [ESP]             ; 0051a518
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a51b
    MOV ESP,EBP                         ; 0051a51f
    POP EBP                             ; 0051a521
    POP EDI                             ; 0051a522
    POP ESI                             ; 0051a523
    POP EBX                             ; 0051a524
    RET                                 ; 0051a525
    PUSH ECX                            ; 0051a526
        ;   Label: caseD_2
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0051a527
    PUSH EDX                            ; 0051a52b
    PUSH EBX                            ; 0051a52c
    LEA EAX,[ESP + 0x20]                ; 0051a52d
    PUSH EAX                            ; 0051a531
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a532
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    FLD float ptr [EBX]                 ; 0051a537
    ADD ESP,0x10                        ; 0051a539
    FSUB float ptr [EAX]                ; 0051a53c
    FMUL ST0                            ; 0051a53e
    FLD float ptr [EBX + 0x4]           ; 0051a540
    FSUB float ptr [EAX + 0x4]          ; 0051a543
    FMUL ST0                            ; 0051a546
    FLD float ptr [EBX + 0x8]           ; 0051a548
    FXCH                                ; 0051a54b
    FADDP ST2,ST0                       ; 0051a54d
    FSUB float ptr [EAX + 0x8]          ; 0051a54f
    FMUL ST0                            ; 0051a552
    FADDP                               ; 0051a554
    FSTP double ptr [ESP]               ; 0051a556
    MOV EAX,dword ptr [ESP]             ; 0051a559
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a55c
    MOV ESP,EBP                         ; 0051a560
    POP EBP                             ; 0051a562
    POP EDI                             ; 0051a563
    POP ESI                             ; 0051a564
    POP EBX                             ; 0051a565
    RET                                 ; 0051a566
    MOV EAX,dword ptr [ESP + 0x68]      ; 0051a567
        ;   Label: caseD_3
    FLD float ptr [EBX]                 ; 0051a56b
    FSUB float ptr [EAX]                ; 0051a56d
    FMUL ST0                            ; 0051a56f
    FLD float ptr [EBX + 0x4]           ; 0051a571
    FSUB float ptr [EAX + 0x4]          ; 0051a574
    FMUL ST0                            ; 0051a577
    FLD float ptr [EBX + 0x8]           ; 0051a579
    FXCH                                ; 0051a57c
    FADDP ST2,ST0                       ; 0051a57e
    FSUB float ptr [EAX + 0x8]          ; 0051a580
    FMUL ST0                            ; 0051a583
    FADDP                               ; 0051a585
    FSTP double ptr [ESP]               ; 0051a587
    MOV EAX,dword ptr [ESP]             ; 0051a58a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a58d
    MOV ESP,EBP                         ; 0051a591
    POP EBP                             ; 0051a593
    POP EDI                             ; 0051a594
    POP ESI                             ; 0051a595
    POP EBX                             ; 0051a596
    RET                                 ; 0051a597
    PUSH EDI                            ; 0051a598
        ;   Label: caseD_4
    PUSH ECX                            ; 0051a599
    PUSH EBX                            ; 0051a59a
    LEA EAX,[ESP + 0x14]                ; 0051a59b
    PUSH EAX                            ; 0051a59f
    CALL shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90 ; 0051a5a0
        ;   XREF to: 00514f90 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_computeClosestPointOnEdge_FUN_00514f90(CVector3f * out_closest_point, CVector3f * query_point, CVector3f * edge_vertex_0, CVector3f * edge_vertex_1)
    FLD float ptr [EBX]                 ; 0051a5a5
    ADD ESP,0x10                        ; 0051a5a7
    FSUB float ptr [EAX]                ; 0051a5aa
    FMUL ST0                            ; 0051a5ac
    FLD float ptr [EBX + 0x4]           ; 0051a5ae
    FSUB float ptr [EAX + 0x4]          ; 0051a5b1
    FMUL ST0                            ; 0051a5b4
    FLD float ptr [EBX + 0x8]           ; 0051a5b6
    FXCH                                ; 0051a5b9
    FADDP ST2,ST0                       ; 0051a5bb
    FSUB float ptr [EAX + 0x8]          ; 0051a5bd
    FMUL ST0                            ; 0051a5c0
    FADDP                               ; 0051a5c2
    FSTP double ptr [ESP]               ; 0051a5c4
    MOV EAX,dword ptr [ESP]             ; 0051a5c7
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a5ca
    MOV ESP,EBP                         ; 0051a5ce
    POP EBP                             ; 0051a5d0
    POP EDI                             ; 0051a5d1
    POP ESI                             ; 0051a5d2
    POP EBX                             ; 0051a5d3
    RET                                 ; 0051a5d4
    FLD float ptr [EBX]                 ; 0051a5d5
        ;   Label: caseD_5
    FSUB float ptr [EDI]                ; 0051a5d7
    FMUL ST0                            ; 0051a5d9
    FLD float ptr [EBX + 0x4]           ; 0051a5db
    FSUB float ptr [EDI + 0x4]          ; 0051a5de
    FMUL ST0                            ; 0051a5e1
    FLD float ptr [EBX + 0x8]           ; 0051a5e3
    FXCH                                ; 0051a5e6
    FADDP ST2,ST0                       ; 0051a5e8
    FSUB float ptr [EDI + 0x8]          ; 0051a5ea
    FMUL ST0                            ; 0051a5ed
    FADDP                               ; 0051a5ef
    FSTP double ptr [ESP]               ; 0051a5f1
    MOV EAX,dword ptr [ESP]             ; 0051a5f4
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a5f7
    MOV ESP,EBP                         ; 0051a5fb
    POP EBP                             ; 0051a5fd
    POP EDI                             ; 0051a5fe
    POP ESI                             ; 0051a5ff
    POP EBX                             ; 0051a600
    RET                                 ; 0051a601
    FLD float ptr [EBX]                 ; 0051a602
        ;   Label: caseD_6
    FSUB float ptr [ECX]                ; 0051a604
    FMUL ST0                            ; 0051a606
    FLD float ptr [EBX + 0x4]           ; 0051a608
    FSUB float ptr [ECX + 0x4]          ; 0051a60b
    FMUL ST0                            ; 0051a60e
    FLD float ptr [EBX + 0x8]           ; 0051a610
    FXCH                                ; 0051a613
    FADDP ST2,ST0                       ; 0051a615
    FSUB float ptr [ECX + 0x8]          ; 0051a617
    FMUL ST0                            ; 0051a61a
    FADDP                               ; 0051a61c
    FSTP double ptr [ESP]               ; 0051a61e
    MOV EAX,dword ptr [ESP]             ; 0051a621
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a624
    MOV ESP,EBP                         ; 0051a628
    POP EBP                             ; 0051a62a
    POP EDI                             ; 0051a62b
    POP ESI                             ; 0051a62c
    POP EBX                             ; 0051a62d
    RET                                 ; 0051a62e
    MOV ECX,0x637aa5                    ; 0051a62f | = "..\\shape\\meshlod.cpp"
        ;   Label: default
    MOV EDI,0xec8                       ; 0051a634
    PUSH 0x637aba                       ; 0051a639 | = "!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0051a63e | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 0051a644 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0051a64a
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0051a64f
    PUSH ESI                            ; 0051a652
    LEA EAX,[ESP + 0x24]                ; 0051a653
    PUSH EAX                            ; 0051a657
    MOV EAX,dword ptr [EBP + 0x14]      ; 0051a658
    PUSH EAX                            ; 0051a65b
    CALL shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870 ; 0051a65c
        ;   XREF to: 00518870 (UNCONDITIONAL_CALL)  ; CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)
    FLD float ptr [EBX]                 ; 0051a661
    ADD ESP,0xc                         ; 0051a663
    FSUB float ptr [EAX]                ; 0051a666
    FMUL ST0                            ; 0051a668
    FLD float ptr [EBX + 0x4]           ; 0051a66a
    FSUB float ptr [EAX + 0x4]          ; 0051a66d
    FMUL ST0                            ; 0051a670
    FLD float ptr [EBX + 0x8]           ; 0051a672
    FXCH                                ; 0051a675
    FADDP ST2,ST0                       ; 0051a677
    FSUB float ptr [EAX + 0x8]          ; 0051a679
    FMUL ST0                            ; 0051a67c
    FADDP                               ; 0051a67e
    FSTP double ptr [ESP]               ; 0051a680
    MOV EAX,dword ptr [ESP]             ; 0051a683
    MOV EDX,dword ptr [ESP + 0x4]       ; 0051a686
    MOV ESP,EBP                         ; 0051a68a
    POP EBP                             ; 0051a68c
    POP EDI                             ; 0051a68d
    POP ESI                             ; 0051a68e
    POP EBX                             ; 0051a68f
    RET                                 ; 0051a690

