; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_lightVertex_FUN_004ef470(float *vertex,float *out_color)
;
; Parameters:
; float *          Stack[0x4]:4   vertex
; float *          Stack[0x8]:4   out_color
;
; XREF[3]:
;   engine_mini3d.cpp_convertVertexD3DL_FUN_004f0170 at 004f019b
;   engine_mini3d.cpp_convertVertexL_FUN_004f0270 at 004f028f
;   engine_mini3d.cpp_polyList_FUN_004edea0 at 004ee070
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a4
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d76cc8
;   undefined4 DAT_01d76cd4
;   undefined4 DAT_01d76cfc
;   undefined4 DAT_01d79784
;   undefined4 DAT_01d7f4f8
;   undefined4 DAT_01d7f4fc
;   undefined4 DAT_01d7f500
;   undefined4 DAT_01d7f508
;   undefined4 DAT_01d7f50c
;   undefined4 DAT_01d7f510
;   undefined4 DAT_01d7f518
;   undefined4 DAT_01d7f51c
;   undefined4 DAT_01d7f520
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ef470
        ;   Label: engine_mini3d.cpp_lightVertex_FUN_004ef470
    PUSH ESI                            ; 004ef471
    PUSH EDI                            ; 004ef472
    PUSH EBP                            ; 004ef473
    MOV EBP,ESP                         ; 004ef474
    SUB ESP,0x68                        ; 004ef476
    AND ESP,0xfffffff8                  ; 004ef479
    MOV ESI,dword ptr [0x01d79784]      ; 004ef47c | DAT_01d79784
    MOV ECX,dword ptr [EBP + 0x14]      ; 004ef482
    MOV EDI,dword ptr [EBP + 0x18]      ; 004ef485
    FLDZ                                ; 004ef488
    FCOMP float ptr [0x01d76cc8]        ; 004ef48a | DAT_01d76cc8
    FNSTSW AX                           ; 004ef490
    SAHF                                ; 004ef492
    JC 0x004ef66c                       ; 004ef493
        ;   XREF to: 004ef66c (CONDITIONAL_JUMP)  ; LAB_004ef66c
    XOR EDX,EDX                         ; 004ef499
        ;   Label: LAB_004ef499
    MOV dword ptr [ESP],EDX             ; 004ef49b
    XOR EBX,EBX                         ; 004ef49e
        ;   Label: LAB_004ef49e
    MOV dword ptr [ESP + 0x30],EBX      ; 004ef4a0
    MOV dword ptr [ESP + 0x34],EBX      ; 004ef4a4
    MOV dword ptr [ESP + 0x2c],EBX      ; 004ef4a8
    TEST ESI,ESI                        ; 004ef4ac
    JLE 0x004ef5ef                      ; 004ef4ae
        ;   XREF to: 004ef5ef (CONDITIONAL_JUMP)  ; LAB_004ef5ef
    FLD float ptr [ECX + 0x4]           ; 004ef4b4
    FMUL float ptr [0x01d7f508]         ; 004ef4b7 | DAT_01d7f508
    FLD float ptr [ECX + 0x4]           ; 004ef4bd
    FMUL float ptr [0x01d7f50c]         ; 004ef4c0 | DAT_01d7f50c
    FLD float ptr [ECX + 0x4]           ; 004ef4c6
    FMUL float ptr [0x01d7f510]         ; 004ef4c9 | DAT_01d7f510
    FLD float ptr [ECX]                 ; 004ef4cf
    FMUL float ptr [0x01d7f4f8]         ; 004ef4d1 | DAT_01d7f4f8
    FLD float ptr [ECX]                 ; 004ef4d7
    FMUL float ptr [0x01d7f4fc]         ; 004ef4d9 | DAT_01d7f4fc
    FLD float ptr [ECX]                 ; 004ef4df
    FXCH ST2                            ; 004ef4e1
    FADDP ST5,ST0                       ; 004ef4e3
    FXCH                                ; 004ef4e5
    FMUL float ptr [0x01d7f500]         ; 004ef4e7 | DAT_01d7f500
    FLD float ptr [ECX + 0x8]           ; 004ef4ed
    FMUL float ptr [0x01d7f518]         ; 004ef4f0 | DAT_01d7f518
    FXCH ST2                            ; 004ef4f6
    FADDP ST4,ST0                       ; 004ef4f8
    FADDP ST2,ST0                       ; 004ef4fa
    FLD float ptr [ECX + 0x8]           ; 004ef4fc
    FMUL float ptr [0x01d7f51c]         ; 004ef4ff | DAT_01d7f51c
    FLD float ptr [ECX + 0x8]           ; 004ef505
    FMUL float ptr [0x01d7f520]         ; 004ef508 | DAT_01d7f520
    MOV EDX,0x1d79788                   ; 004ef50e
    FXCH ST2                            ; 004ef513
    FADDP ST5,ST0                       ; 004ef515
    FADDP ST3,ST0                       ; 004ef517
    FADDP                               ; 004ef519
    FXCH ST2                            ; 004ef51b
    FADD float ptr [0x01d7f528]         ; 004ef51d | DAT_01d7f528
    FXCH                                ; 004ef523
    FADD float ptr [0x01d7f52c]         ; 004ef525 | DAT_01d7f52c
    FXCH ST2                            ; 004ef52b
    FADD float ptr [0x01d7f530]         ; 004ef52d | DAT_01d7f530
    FXCH ST2                            ; 004ef533
    FSTP float ptr [ESP + 0x28]         ; 004ef535
    FXCH                                ; 004ef539
    FSTP float ptr [ESP + 0x20]         ; 004ef53b
    FSTP float ptr [ESP + 0x24]         ; 004ef53f
    JLE 0x004ef5ef                      ; 004ef543
        ;   XREF to: 004ef5ef (CONDITIONAL_JUMP)  ; LAB_004ef5ef
    CMP byte ptr [EBX + 0x1d7a660],0x0  ; 004ef549
        ;   Label: LAB_004ef549
    JZ 0x004ef5e3                       ; 004ef550
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ECX + 0x10]          ; 004ef556
    FMUL float ptr [0x01d7f508]         ; 004ef559 | DAT_01d7f508
    FLD float ptr [ECX + 0xc]           ; 004ef55f
    FMUL float ptr [0x01d7f4fc]         ; 004ef562 | DAT_01d7f4fc
    FLD float ptr [ECX + 0xc]           ; 004ef568
    FMUL float ptr [0x01d7f500]         ; 004ef56b | DAT_01d7f500
    FLD float ptr [ECX + 0xc]           ; 004ef571
    FMUL float ptr [0x01d7f4f8]         ; 004ef574 | DAT_01d7f4f8
    FLD float ptr [ECX + 0x10]          ; 004ef57a
    FMUL float ptr [0x01d7f50c]         ; 004ef57d | DAT_01d7f50c
    FLD float ptr [ECX + 0x10]          ; 004ef583
    FMUL float ptr [0x01d7f510]         ; 004ef586 | DAT_01d7f510
    FXCH ST2                            ; 004ef58c
    FADDP ST5,ST0                       ; 004ef58e
    FADDP ST3,ST0                       ; 004ef590
    FLD float ptr [ECX + 0x14]          ; 004ef592
    FMUL float ptr [0x01d7f518]         ; 004ef595 | DAT_01d7f518
    FLD float ptr [ECX + 0x14]          ; 004ef59b
    FMUL float ptr [0x01d7f51c]         ; 004ef59e | DAT_01d7f51c
    FXCH                                ; 004ef5a4
    FADDP ST5,ST0                       ; 004ef5a6
    FXCH ST4                            ; 004ef5a8
    FMUL float ptr [EDX + 0x14]         ; 004ef5aa
    FXCH                                ; 004ef5ad
    FADDP ST2,ST0                       ; 004ef5af
    FXCH ST3                            ; 004ef5b1
    FADDP ST2,ST0                       ; 004ef5b3
    FXCH                                ; 004ef5b5
    FMUL float ptr [EDX + 0x20]         ; 004ef5b7
    FLD float ptr [ECX + 0x14]          ; 004ef5ba
    FMUL float ptr [0x01d7f520]         ; 004ef5bd | DAT_01d7f520
    FXCH                                ; 004ef5c3
    FADDP ST3,ST0                       ; 004ef5c5
    FADDP                               ; 004ef5c7
    FMUL float ptr [EDX + 0x2c]         ; 004ef5c9
    FADDP                               ; 004ef5cc
    FLDZ                                ; 004ef5ce
    FXCH                                ; 004ef5d0
    FSTP float ptr [ESP + 0x4c]         ; 004ef5d2
    FCOMP float ptr [ESP + 0x4c]        ; 004ef5d6
    FNSTSW AX                           ; 004ef5da
    SAHF                                ; 004ef5dc
    JA 0x004ef6ee                       ; 004ef5dd
        ;   XREF to: 004ef6ee (CONDITIONAL_JUMP)  ; LAB_004ef6ee
    INC EBX                             ; 004ef5e3
        ;   Label: LAB_004ef5e3
    ADD EDX,0x4c                        ; 004ef5e4
    CMP EBX,ESI                         ; 004ef5e7
    JL 0x004ef549                       ; 004ef5e9
        ;   XREF to: 004ef549 (CONDITIONAL_JUMP)  ; LAB_004ef549
    FLD float ptr [0x01d76cc8]          ; 004ef5ef | DAT_01d76cc8
        ;   Label: LAB_004ef5ef
    FLD ST0                             ; 004ef5f5
    FMUL float ptr [ESP]                ; 004ef5f7
    FLD float ptr [ESP + 0x34]          ; 004ef5fa
    FMULP ST2                           ; 004ef5fe
    FSTP float ptr [ESP + 0x1c]         ; 004ef600
    FADD float ptr [ESP + 0x1c]         ; 004ef604
    FSTP float ptr [EDI]                ; 004ef608
    CMP dword ptr [EDI],0x3f800000      ; 004ef60a
    JLE 0x004ef618                      ; 004ef610
        ;   XREF to: 004ef618 (CONDITIONAL_JUMP)  ; LAB_004ef618
    MOV dword ptr [EDI],0x3f800000      ; 004ef612
    FLD float ptr [ESP + 0x30]          ; 004ef618
        ;   Label: LAB_004ef618
    FMUL float ptr [0x01d76cc8]         ; 004ef61c | DAT_01d76cc8
    FADD float ptr [ESP + 0x1c]         ; 004ef622
    FSTP float ptr [EDI + 0x4]          ; 004ef626
    CMP dword ptr [EDI + 0x4],0x3f800000 ; 004ef629
    JLE 0x004ef639                      ; 004ef630
        ;   XREF to: 004ef639 (CONDITIONAL_JUMP)  ; LAB_004ef639
    MOV dword ptr [EDI + 0x4],0x3f800000 ; 004ef632
    FLD float ptr [ESP + 0x2c]          ; 004ef639
        ;   Label: LAB_004ef639
    FMUL float ptr [0x01d76cc8]         ; 004ef63d | DAT_01d76cc8
    FADD float ptr [ESP + 0x1c]         ; 004ef643
    FSTP float ptr [EDI + 0x8]          ; 004ef647
    CMP dword ptr [EDI + 0x8],0x3f800000 ; 004ef64a
    JG 0x004ef878                       ; 004ef651
        ;   XREF to: 004ef878 (CONDITIONAL_JUMP)  ; LAB_004ef878
    MOV EAX,[0x01d76c40]                ; 004ef657 | DAT_01d76c40
        ;   Label: LAB_004ef657
    MOV dword ptr [EDI + 0xc],EAX       ; 004ef65c
    MOV dword ptr [0x01d79784],ESI      ; 004ef65f | DAT_01d79784
    MOV ESP,EBP                         ; 004ef665
    POP EBP                             ; 004ef667
    POP EDI                             ; 004ef668
    POP ESI                             ; 004ef669
    POP EBX                             ; 004ef66a
    RET                                 ; 004ef66b
    MOV EAX,[0x01d76cfc]                ; 004ef66c | DAT_01d76cfc
        ;   Label: LAB_004ef66c
    FLD float ptr [ECX + 0xc]           ; 004ef671
    FMUL float ptr [EAX + 0x30]         ; 004ef674
    FLD float ptr [ECX + 0x10]          ; 004ef677
    FMUL float ptr [EAX + 0x34]         ; 004ef67a
    FADDP                               ; 004ef67d
    FLD float ptr [ECX + 0x14]          ; 004ef67f
    FMUL float ptr [EAX + 0x38]         ; 004ef682
    FADDP                               ; 004ef685
    FSTP float ptr [ESP]                ; 004ef687
    XOR byte ptr [ESP + 0x3],0x80       ; 004ef68a
    FLDZ                                ; 004ef68f
    FCOMP float ptr [ESP]               ; 004ef691
    FNSTSW AX                           ; 004ef694
    SAHF                                ; 004ef696
    JBE 0x004ef6c3                      ; 004ef697
        ;   XREF to: 004ef6c3 (CONDITIONAL_JUMP)  ; LAB_004ef6c3
    XOR EDX,EDX                         ; 004ef699
    MOV dword ptr [ESP],EDX             ; 004ef69b
    FLD1                                ; 004ef69e
        ;   Label: LAB_004ef69e
    FLD float ptr [0x01d76cd4]          ; 004ef6a0 | DAT_01d76cd4
    FXCH                                ; 004ef6a6
    FSUB ST0,ST1                        ; 004ef6a8
    FMUL float ptr [ESP]                ; 004ef6aa
    FADDP                               ; 004ef6ad
    FLDZ                                ; 004ef6af
    FXCH                                ; 004ef6b1
    FSTP float ptr [ESP]                ; 004ef6b3
    FCOMP float ptr [ESP]               ; 004ef6b6
    FNSTSW AX                           ; 004ef6b9
    SAHF                                ; 004ef6bb
    JBE 0x004ef6d5                      ; 004ef6bc
        ;   XREF to: 004ef6d5 (CONDITIONAL_JUMP)  ; LAB_004ef6d5
    JMP 0x004ef499                      ; 004ef6be
        ;   XREF to: 004ef499 (UNCONDITIONAL_JUMP)  ; LAB_004ef499
    CMP dword ptr [ESP],0x3f800000      ; 004ef6c3
        ;   Label: LAB_004ef6c3
    JLE 0x004ef69e                      ; 004ef6ca
        ;   XREF to: 004ef69e (CONDITIONAL_JUMP)  ; LAB_004ef69e
    MOV dword ptr [ESP],0x3f800000      ; 004ef6cc
    JMP 0x004ef69e                      ; 004ef6d3
        ;   XREF to: 004ef69e (UNCONDITIONAL_JUMP)  ; LAB_004ef69e
    CMP dword ptr [ESP],0x3f800000      ; 004ef6d5
        ;   Label: LAB_004ef6d5
    JLE 0x004ef49e                      ; 004ef6dc
        ;   XREF to: 004ef49e (CONDITIONAL_JUMP)  ; LAB_004ef49e
    MOV dword ptr [ESP],0x3f800000      ; 004ef6e2
    JMP 0x004ef49e                      ; 004ef6e9
        ;   XREF to: 004ef49e (UNCONDITIONAL_JUMP)  ; LAB_004ef49e
    FLD float ptr [ESP + 0x28]          ; 004ef6ee
        ;   Label: LAB_004ef6ee
    FLD float ptr [ESP + 0x24]          ; 004ef6f2
    FSUB float ptr [EDX]                ; 004ef6f6
    FXCH                                ; 004ef6f8
    FSUB float ptr [EDX + 0x4]          ; 004ef6fa
    FXCH                                ; 004ef6fd
    FST float ptr [ESP + 0x40]          ; 004ef6ff
    FMUL float ptr [EDX + 0x14]         ; 004ef703
    FXCH                                ; 004ef706
    FST float ptr [ESP + 0x44]          ; 004ef708
    FMUL float ptr [EDX + 0x20]         ; 004ef70c
    FLD float ptr [ESP + 0x20]          ; 004ef70f
    FSUB float ptr [EDX + 0x8]          ; 004ef713
    FXCH                                ; 004ef716
    FADDP ST2,ST0                       ; 004ef718
    FST float ptr [ESP + 0x48]          ; 004ef71a
    FMUL float ptr [EDX + 0x2c]         ; 004ef71e
    MOV AH,byte ptr [ESP + 0x4f]        ; 004ef721
    FLDZ                                ; 004ef725
    XOR AH,0x80                         ; 004ef727
    FXCH                                ; 004ef72a
    FADDP ST2,ST0                       ; 004ef72c
    MOV byte ptr [ESP + 0x4f],AH        ; 004ef72e
    FXCH                                ; 004ef732
    FSTP float ptr [ESP + 0x58]         ; 004ef734
    FCOMP float ptr [ESP + 0x58]        ; 004ef738
    FNSTSW AX                           ; 004ef73c
    SAHF                                ; 004ef73e
    JNC 0x004ef5e3                      ; 004ef73f
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x58]          ; 004ef745
    FCOMP float ptr [EDX + 0x34]        ; 004ef749
    FNSTSW AX                           ; 004ef74c
    SAHF                                ; 004ef74e
    JNC 0x004ef5e3                      ; 004ef74f
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x40]          ; 004ef755
    FMUL float ptr [EDX + 0xc]          ; 004ef759
    FLD float ptr [ESP + 0x44]          ; 004ef75c
    FMUL float ptr [EDX + 0x18]         ; 004ef760
    FADDP                               ; 004ef763
    FLD float ptr [ESP + 0x48]          ; 004ef765
    FMUL float ptr [EDX + 0x24]         ; 004ef769
    FADDP                               ; 004ef76c
    FST float ptr [ESP + 0x50]          ; 004ef76e
    FCOMP float ptr [ESP + 0x58]        ; 004ef772
    FNSTSW AX                           ; 004ef776
    SAHF                                ; 004ef778
    JNC 0x004ef5e3                      ; 004ef779
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x50]          ; 004ef77f
    FLD float ptr [ESP + 0x58]          ; 004ef783
    FCHS                                ; 004ef787
    FSTP float ptr [ESP + 0x38]         ; 004ef789
    FCOMP float ptr [ESP + 0x38]        ; 004ef78d
    FNSTSW AX                           ; 004ef791
    SAHF                                ; 004ef793
    JBE 0x004ef5e3                      ; 004ef794
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x40]          ; 004ef79a
    FMUL float ptr [EDX + 0x10]         ; 004ef79e
    FLD float ptr [ESP + 0x44]          ; 004ef7a1
    FMUL float ptr [EDX + 0x1c]         ; 004ef7a5
    FADDP                               ; 004ef7a8
    FLD float ptr [ESP + 0x48]          ; 004ef7aa
    FMUL float ptr [EDX + 0x28]         ; 004ef7ae
    FADDP                               ; 004ef7b1
    FST float ptr [ESP + 0x54]          ; 004ef7b3
    FCOMP float ptr [ESP + 0x58]        ; 004ef7b7
    FNSTSW AX                           ; 004ef7bb
    SAHF                                ; 004ef7bd
    JNC 0x004ef5e3                      ; 004ef7be
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x54]          ; 004ef7c4
    FCOMP float ptr [ESP + 0x38]        ; 004ef7c8
    FNSTSW AX                           ; 004ef7cc
    SAHF                                ; 004ef7ce
    JBE 0x004ef5e3                      ; 004ef7cf
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD1                                ; 004ef7d5
    FLD float ptr [ESP + 0x50]          ; 004ef7d7
    FXCH                                ; 004ef7db
    FDIV float ptr [ESP + 0x58]         ; 004ef7dd
    FXCH                                ; 004ef7e1
    FMUL ST1                            ; 004ef7e3
    FLD float ptr [ESP + 0x54]          ; 004ef7e5
    FMULP ST2                           ; 004ef7e9
    FST float ptr [ESP + 0x50]          ; 004ef7eb
    FMUL float ptr [ESP + 0x50]         ; 004ef7ef
    FXCH                                ; 004ef7f3
    FST float ptr [ESP + 0x54]          ; 004ef7f5
    FMUL float ptr [ESP + 0x54]         ; 004ef7f9
    FADDP                               ; 004ef7fd
    FSTP float ptr [ESP + 0x3c]         ; 004ef7ff
    CMP dword ptr [ESP + 0x3c],0x3f800000 ; 004ef803
    JGE 0x004ef5e3                      ; 004ef80b
        ;   XREF to: 004ef5e3 (CONDITIONAL_JUMP)  ; LAB_004ef5e3
    FLD float ptr [ESP + 0x58]          ; 004ef811
    FDIV float ptr [EDX + 0x34]         ; 004ef815
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004ef818
    SAR EAX,0x1                         ; 004ef81c
    FLD1                                ; 004ef81e
    FSUBRP                              ; 004ef820
    ADD EAX,dword ptr [0x01d1a0a4]      ; 004ef822 | DAT_01d1a0a4
    FLD float ptr [0x01d76cc8]          ; 004ef828 | DAT_01d76cc8
    FMUL float ptr [ESP + 0x4c]         ; 004ef82e
    MOV dword ptr [ESP + 0x18],EAX      ; 004ef832
    FLD1                                ; 004ef836
    FSUB float ptr [ESP + 0x18]         ; 004ef838
    FXCH                                ; 004ef83c
    FMULP ST2                           ; 004ef83e
    FMULP                               ; 004ef840
    FLD float ptr [EDX + 0x40]          ; 004ef842
    FMUL ST1                            ; 004ef845
    FLD float ptr [EDX + 0x44]          ; 004ef847
    FMUL ST2                            ; 004ef84a
    FLD float ptr [EDX + 0x48]          ; 004ef84c
    FMULP ST3                           ; 004ef84f
    FXCH                                ; 004ef851
    FADD float ptr [ESP + 0x2c]         ; 004ef853
    FXCH                                ; 004ef857
    FADD float ptr [ESP + 0x30]         ; 004ef859
    FXCH ST2                            ; 004ef85d
    FADD float ptr [ESP + 0x34]         ; 004ef85f
    FXCH                                ; 004ef863
    FSTP float ptr [ESP + 0x2c]         ; 004ef865
    FXCH                                ; 004ef869
    FSTP float ptr [ESP + 0x30]         ; 004ef86b
    FSTP float ptr [ESP + 0x34]         ; 004ef86f
    JMP 0x004ef5e3                      ; 004ef873
        ;   XREF to: 004ef5e3 (UNCONDITIONAL_JUMP)  ; LAB_004ef5e3
    MOV dword ptr [EDI + 0x8],0x3f800000 ; 004ef878
        ;   Label: LAB_004ef878
    JMP 0x004ef657                      ; 004ef87f
        ;   XREF to: 004ef657 (UNCONDITIONAL_JUMP)  ; LAB_004ef657

