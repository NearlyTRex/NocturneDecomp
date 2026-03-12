; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh *this_ptr,int edge_idx,int vertex_idx)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   edge_idx
; int              Stack[0xc]:4   vertex_idx
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; float            Stack[-0x30]:4  local_30
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x28]:4  local_28
; float            Stack[-0x24]:4  local_24
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_meshlod.cpp_CLodMesh_computeEdgeCollapseCost_FUN_00518910 at 0051897a
;
; Referenced Globals:
;   double DOUBLE_006379e5 = 0.900000000000000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00519480
        ;   Label: shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
    PUSH ESI                            ; 00519481
    PUSH EDI                            ; 00519482
    PUSH EBP                            ; 00519483
    MOV EBP,ESP                         ; 00519484
    SUB ESP,0x28                        ; 00519486
    AND ESP,0xfffffff8                  ; 00519489
    MOV EDI,dword ptr [EBP + 0x14]      ; 0051948c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0051948f
    SHL EAX,0x4                         ; 00519492
    MOV EDX,EAX                         ; 00519495
    SHL EAX,0x4                         ; 00519497
    MOV EBX,dword ptr [EBP + 0x1c]      ; 0051949a
    SUB EAX,EDX                         ; 0051949d
    IMUL EDX,EBX,0x4c4                  ; 0051949f
    MOV ECX,dword ptr [EDI + 0x48]      ; 005194a5
    ADD ECX,EAX                         ; 005194a8
    MOV EAX,dword ptr [EDI + 0x4]       ; 005194aa
    LEA EBX,[EAX + EDX*0x1]             ; 005194ad
    MOV dword ptr [ESP + 0x24],EBX      ; 005194b0
    MOV EBX,dword ptr [ECX]             ; 005194b4
    MOV ESI,dword ptr [ECX + 0x4]       ; 005194b6
    IMUL ECX,EBX,0x4c4                  ; 005194b9
    IMUL EDX,ESI,0x4c4                  ; 005194bf
    FLD float ptr [ECX + EAX*0x1]       ; 005194c5
    FSUB float ptr [EDX + EAX*0x1]      ; 005194c8
    FSTP float ptr [ESP + 0x14]         ; 005194cb
    FLD float ptr [ECX + EAX*0x1 + 0x4] ; 005194cf
    FSUB float ptr [EDX + EAX*0x1 + 0x4] ; 005194d3
    FST float ptr [ESP + 0x18]          ; 005194d7
    FMUL float ptr [ESP + 0x18]         ; 005194db
    FLD float ptr [ESP + 0x14]          ; 005194df
    FMUL ST0                            ; 005194e3
    FLD float ptr [ECX + EAX*0x1 + 0x8] ; 005194e5
    FSUB float ptr [EDX + EAX*0x1 + 0x8] ; 005194e9
    FXCH                                ; 005194ed
    FADDP ST2,ST0                       ; 005194ef
    FST float ptr [ESP + 0x1c]          ; 005194f1
    FMUL float ptr [ESP + 0x1c]         ; 005194f5
    FADDP                               ; 005194f9
    FSQRT                               ; 005194fb
    FST float ptr [ESP + 0x4]           ; 005194fd
    FLDZ                                ; 00519501
    FCOMPP                              ; 00519503
    FNSTSW AX                           ; 00519505
    SAHF                                ; 00519507
    JC 0x00519552                       ; 00519508
        ;   XREF to: 00519552 (CONDITIONAL_JUMP)  ; LAB_00519552
    XOR ESI,ESI                         ; 0051950a
    MOV dword ptr [ESP + 0x18],ESI      ; 0051950c
    MOV dword ptr [ESP + 0x14],ESI      ; 00519510
    MOV dword ptr [ESP + 0x1c],ESI      ; 00519514
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519518
        ;   Label: LAB_00519518
    MOV ECX,dword ptr [EAX + 0x3f8]     ; 0051951c
    XOR EBX,EBX                         ; 00519522
    TEST ECX,ECX                        ; 00519524
    JLE 0x00519549                      ; 00519526
        ;   XREF to: 00519549 (CONDITIONAL_JUMP)  ; LAB_00519549
    MOV ECX,EAX                         ; 00519528
    MOV EDX,dword ptr [EBP + 0x18]      ; 0051952a
        ;   Label: LAB_0051952a
    MOV EAX,dword ptr [ECX + 0x3fc]     ; 0051952d
    CMP EAX,EDX                         ; 00519533
    JNZ 0x0051957e                      ; 00519535
        ;   XREF to: 0051957e (CONDITIONAL_JUMP)  ; LAB_0051957e
    MOV EAX,dword ptr [ESP + 0x24]      ; 00519537
        ;   Label: LAB_00519537
    INC EBX                             ; 0051953b
    MOV ESI,dword ptr [EAX + 0x3f8]     ; 0051953c
    ADD ECX,0x4                         ; 00519542
    CMP EBX,ESI                         ; 00519545
    JL 0x0051952a                       ; 00519547
        ;   XREF to: 0051952a (CONDITIONAL_JUMP)  ; LAB_0051952a
    XOR EAX,EAX                         ; 00519549
        ;   Label: LAB_00519549
    MOV ESP,EBP                         ; 0051954b
    POP EBP                             ; 0051954d
    POP EDI                             ; 0051954e
    POP ESI                             ; 0051954f
    POP EBX                             ; 00519550
    RET                                 ; 00519551
    FLD1                                ; 00519552
        ;   Label: LAB_00519552
    FLD float ptr [ESP + 0x14]          ; 00519554
    FXCH                                ; 00519558
    FDIV float ptr [ESP + 0x4]          ; 0051955a
    FXCH                                ; 0051955e
    FMUL ST1                            ; 00519560
    FLD float ptr [ESP + 0x18]          ; 00519562
    FMUL ST2                            ; 00519566
    FLD float ptr [ESP + 0x1c]          ; 00519568
    FMULP ST3                           ; 0051956c
    FXCH                                ; 0051956e
    FSTP float ptr [ESP + 0x14]         ; 00519570
    FSTP float ptr [ESP + 0x18]         ; 00519574
    FSTP float ptr [ESP + 0x1c]         ; 00519578
    JMP 0x00519518                      ; 0051957c
        ;   XREF to: 00519518 (UNCONDITIONAL_JUMP)  ; LAB_00519518
    IMUL EAX,EAX,0xf0                   ; 0051957e
        ;   Label: LAB_0051957e
    MOV EDX,dword ptr [EDI + 0x48]      ; 00519584
    ADD EAX,EDX                         ; 00519587
    MOV ESI,dword ptr [EAX + 0x18]      ; 00519589
    CMP ESI,0x1                         ; 0051958c
    JG 0x00519653                       ; 0051958f
        ;   XREF to: 00519653 (CONDITIONAL_JUMP)  ; LAB_00519653
    MOV EDX,dword ptr [EAX + 0x1c]      ; 00519595
    CMP EDX,0x1                         ; 00519598
    JG 0x00519653                       ; 0051959b
        ;   XREF to: 00519653 (CONDITIONAL_JUMP)  ; LAB_00519653
    TEST ESI,ESI                        ; 005195a1
    JZ 0x0051965f                       ; 005195a3
        ;   XREF to: 0051965f (CONDITIONAL_JUMP)  ; LAB_0051965f
    IMUL EDX,dword ptr [EAX + 0x4],0x4c4 ; 005195a9
        ;   Label: LAB_005195a9
    IMUL EAX,dword ptr [EAX],0x4c4      ; 005195b0
    MOV ESI,dword ptr [EDI + 0x4]       ; 005195b6
    FLD float ptr [ESI + EAX*0x1]       ; 005195b9
    FSUB float ptr [EDX + ESI*0x1]      ; 005195bc
    FSTP float ptr [ESP + 0x8]          ; 005195bf
    FLD float ptr [ESI + EAX*0x1 + 0x4] ; 005195c3
    FSUB float ptr [EDX + ESI*0x1 + 0x4] ; 005195c7
    FST float ptr [ESP + 0xc]           ; 005195cb
    FMUL float ptr [ESP + 0xc]          ; 005195cf
    FLD float ptr [ESP + 0x8]           ; 005195d3
    FMUL ST0                            ; 005195d7
    FLD float ptr [ESI + EAX*0x1 + 0x8] ; 005195d9
    FSUB float ptr [EDX + ESI*0x1 + 0x8] ; 005195dd
    FXCH                                ; 005195e1
    FADDP ST2,ST0                       ; 005195e3
    FST float ptr [ESP + 0x10]          ; 005195e5
    FMUL float ptr [ESP + 0x10]         ; 005195e9
    FADDP                               ; 005195ed
    FSQRT                               ; 005195ef
    FST float ptr [ESP]                 ; 005195f1
    FLDZ                                ; 005195f4
    FCOMPP                              ; 005195f6
    FNSTSW AX                           ; 005195f8
    SAHF                                ; 005195fa
    JNC 0x0051966c                      ; 005195fb
        ;   XREF to: 0051966c (CONDITIONAL_JUMP)  ; LAB_0051966c
    FLD1                                ; 005195fd
    FLD float ptr [ESP + 0x8]           ; 005195ff
    FXCH                                ; 00519603
    FDIV float ptr [ESP]                ; 00519605
    FXCH                                ; 00519608
    FMUL ST1                            ; 0051960a
    FLD float ptr [ESP + 0xc]           ; 0051960c
    FMUL ST2                            ; 00519610
    FLD float ptr [ESP + 0x10]          ; 00519612
    FMULP ST3                           ; 00519616
    FXCH                                ; 00519618
    FSTP float ptr [ESP + 0x8]          ; 0051961a
    FSTP float ptr [ESP + 0xc]          ; 0051961e
    FSTP float ptr [ESP + 0x10]         ; 00519622
    FLD float ptr [ESP + 0x18]          ; 00519626
        ;   Label: LAB_00519626
    FMUL float ptr [ESP + 0xc]          ; 0051962a
    FLD float ptr [ESP + 0x14]          ; 0051962e
    FMUL float ptr [ESP + 0x8]          ; 00519632
    FADDP                               ; 00519636
    FLD float ptr [ESP + 0x1c]          ; 00519638
    FMUL float ptr [ESP + 0x10]         ; 0051963c
    FADDP                               ; 00519640
    FABS                                ; 00519642
    FCOMP double ptr [0x006379e5]       ; 00519644 | DOUBLE_006379e5
    FNSTSW AX                           ; 0051964a
    SAHF                                ; 0051964c
    JNC 0x00519537                      ; 0051964d
        ;   XREF to: 00519537 (CONDITIONAL_JUMP)  ; LAB_00519537
    MOV EAX,0x1                         ; 00519653
        ;   Label: LAB_00519653
    MOV ESP,EBP                         ; 00519658
    POP EBP                             ; 0051965a
    POP EDI                             ; 0051965b
    POP ESI                             ; 0051965c
    POP EBX                             ; 0051965d
    RET                                 ; 0051965e
    TEST EDX,EDX                        ; 0051965f
        ;   Label: LAB_0051965f
    JNZ 0x005195a9                      ; 00519661
        ;   XREF to: 005195a9 (CONDITIONAL_JUMP)  ; LAB_005195a9
    JMP 0x00519537                      ; 00519667
        ;   XREF to: 00519537 (UNCONDITIONAL_JUMP)  ; LAB_00519537
    XOR EAX,EAX                         ; 0051966c
        ;   Label: LAB_0051966c
    MOV dword ptr [ESP + 0xc],EAX       ; 0051966e
    MOV dword ptr [ESP + 0x8],EAX       ; 00519672
    MOV dword ptr [ESP + 0x10],EAX      ; 00519676
    JMP 0x00519626                      ; 0051967a
        ;   XREF to: 00519626 (UNCONDITIONAL_JUMP)  ; LAB_00519626

