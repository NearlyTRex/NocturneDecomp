; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00567530(int param_1,float param_2)
;
; Local Variables:
; undefined8       Stack[-0x48]:8  local_48
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00563060 at 00563934
;
; Referenced Globals:
;   undefined4 DAT_005eb86d
;   undefined4 DAT_005eb875
;   undefined4 DAT_005eb87d
;   undefined4 DAT_005eb885
;   undefined4 DAT_005eb88d
;   undefined4 DAT_0264be80
;   undefined4 DAT_0264be84
;
; Called Functions:
;   FUN_005038a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00567530
        ;   Label: FUN_00567530
    PUSH ESI                            ; 00567531
    PUSH EDI                            ; 00567532
    PUSH EBP                            ; 00567533
    MOV EBP,ESP                         ; 00567534
    SUB ESP,0x34                        ; 00567536
    AND ESP,0xfffffff8                  ; 00567539
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056753c
    LEA EAX,[EBX + 0x256e4]             ; 0056753f
    MOV dword ptr [EAX + 0x8],0x0       ; 00567545
    PUSH 0x0                            ; 0056754c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0056754e
    MOV dword ptr [EAX + 0x4],EDX       ; 00567551
    MOV EDX,dword ptr [EAX + 0x4]       ; 00567554
    MOV dword ptr [EAX],EDX             ; 00567557
    LEA EAX,[EBX + 0x2b4]               ; 00567559
    PUSH EAX                            ; 0056755f
    CALL FUN_005038a0                   ; 00567560
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005038a0()
    MOV dword ptr [ESP + 0x38],EAX      ; 00567565
    FLD float ptr [ESP + 0x38]          ; 00567569
    ADD ESP,0x8                         ; 0056756d
    FLDZ                                ; 00567570
    FXCH                                ; 00567572
    FSTP double ptr [ESP + 0x8]         ; 00567574
    FCOMP double ptr [ESP + 0x8]        ; 00567578
    FNSTSW AX                           ; 0056757c
    SAHF                                ; 0056757e
    JNC 0x005676d8                      ; 0056757f
        ;   XREF to: 005676d8 (CONDITIONAL_JUMP)  ; LAB_005676d8
    FLD float ptr [EBX + 0x256c0]       ; 00567585
    FLD1                                ; 0056758b
    FCOMPP                              ; 0056758d
    FNSTSW AX                           ; 0056758f
    SAHF                                ; 00567591
    JBE 0x005676d8                      ; 00567592
        ;   XREF to: 005676d8 (CONDITIONAL_JUMP)  ; LAB_005676d8
    FLD1                                ; 00567598
    FCOMP double ptr [ESP + 0x8]        ; 0056759a
    FNSTSW AX                           ; 0056759e
    SAHF                                ; 005675a0
    JA 0x00567711                       ; 005675a1
        ;   XREF to: 00567711 (CONDITIONAL_JUMP)  ; LAB_00567711
    MOV EAX,[0x0264be80]                ; 005675a7 | DAT_0264be80
        ;   Label: LAB_005675a7
    MOV EDX,dword ptr [EBX + 0x256f0]   ; 005675ac
    MOV dword ptr [EBX + 0x256f0],EAX   ; 005675b2
    FLDZ                                ; 005675b8
    FCOMP float ptr [EBX + 0x256bc]     ; 005675ba
    FNSTSW AX                           ; 005675c0
    SAHF                                ; 005675c2
    JBE 0x005675d0                      ; 005675c3
        ;   XREF to: 005675d0 (CONDITIONAL_JUMP)  ; LAB_005675d0
    MOV EAX,[0x0264be84]                ; 005675c5 | DAT_0264be84
    MOV dword ptr [EBX + 0x256f0],EAX   ; 005675ca
    MOV ECX,0x3fcccccd                  ; 005675d0
        ;   Label: LAB_005675d0
    FLD float ptr [EBX + 0x256c0]       ; 005675d5
    MOV dword ptr [ESP + 0x18],ECX      ; 005675db
    FCOMP double ptr [0x005eb875]       ; 005675df | DAT_005eb875
    FNSTSW AX                           ; 005675e5
    SAHF                                ; 005675e7
    JBE 0x00567779                      ; 005675e8
        ;   XREF to: 00567779 (CONDITIONAL_JUMP)  ; LAB_00567779
    FLD float ptr [EBX + 0x256c8]       ; 005675ee
    FADD float ptr [EBP + 0x18]         ; 005675f4
    FSTP float ptr [EBX + 0x256c8]      ; 005675f7
    FLD float ptr [EBX + 0x256c4]       ; 005675fd
        ;   Label: LAB_005675fd
    FLDZ                                ; 00567603
    FCOMPP                              ; 00567605
    FNSTSW AX                           ; 00567607
    SAHF                                ; 00567609
    JC 0x00567635                       ; 0056760a
        ;   XREF to: 00567635 (CONDITIONAL_JUMP)  ; LAB_00567635
    FLD float ptr [EBX + 0x256c0]       ; 0056760c
    FCOMP double ptr [0x005eb87d]       ; 00567612 | DAT_005eb87d
    FNSTSW AX                           ; 00567618
    SAHF                                ; 0056761a
    JC 0x00567788                       ; 0056761b
        ;   XREF to: 00567788 (CONDITIONAL_JUMP)  ; LAB_00567788
    FLD float ptr [EBX + 0x256c0]       ; 00567621
        ;   Label: LAB_00567621
    FLD1                                ; 00567627
    FSUBRP                              ; 00567629
    FMUL float ptr [ESP + 0x18]         ; 0056762b
    FSTP float ptr [EBX + 0x256c4]      ; 0056762f
    FLD float ptr [EBX + 0x256c4]       ; 00567635
        ;   Label: LAB_00567635
    FLDZ                                ; 0056763b
    FCOMPP                              ; 0056763d
    FNSTSW AX                           ; 0056763f
    SAHF                                ; 00567641
    JNC 0x005677d3                      ; 00567642
        ;   XREF to: 005677d3 (CONDITIONAL_JUMP)  ; LAB_005677d3
    MOV EAX,dword ptr [EBX + 0x256c4]   ; 00567648
    MOV dword ptr [ESP + 0x28],EAX      ; 0056764e
    FLD float ptr [ESP + 0x28]          ; 00567652
    FSUB float ptr [EBP + 0x18]         ; 00567656
    FST float ptr [EBX + 0x256c4]       ; 00567659
    FLDZ                                ; 0056765f
    FCOMPP                              ; 00567661
    FNSTSW AX                           ; 00567663
    SAHF                                ; 00567665
    JC 0x005677a0                       ; 00567666
        ;   XREF to: 005677a0 (CONDITIONAL_JUMP)  ; LAB_005677a0
    FLD float ptr [EBX + 0x256c0]       ; 0056766c
    FLD1                                ; 00567672
    FSUBRP                              ; 00567674
    MOV dword ptr [EBX + 0x256c4],0x0   ; 00567676
    FSTP float ptr [ESP + 0x2c]         ; 00567680
        ;   Label: LAB_00567680
    MOV EAX,dword ptr [EBX + 0x256c0]   ; 00567684
    MOV dword ptr [ESP + 0x14],EAX      ; 0056768a
    FLD float ptr [ESP + 0x14]          ; 0056768e
    FADD float ptr [ESP + 0x2c]         ; 00567692
    FST float ptr [EBX + 0x256c0]       ; 00567696
    FLD1                                ; 0056769c
    FCOMPP                              ; 0056769e
    FNSTSW AX                           ; 005676a0
    SAHF                                ; 005676a2
    JA 0x005677ac                       ; 005676a3
        ;   XREF to: 005677ac (CONDITIONAL_JUMP)  ; LAB_005677ac
    MOV dword ptr [EBX + 0x256bc],0x0   ; 005676a9
    MOV dword ptr [EBX + 0x256c4],0x0   ; 005676b3
    MOV dword ptr [EBX + 0x256c8],0x0   ; 005676bd
    MOV dword ptr [EBX + 0x256c0],0x3f800000 ; 005676c7
    MOV ESP,EBP                         ; 005676d1
        ;   Label: LAB_005676d1
    POP EBP                             ; 005676d3
    POP EDI                             ; 005676d4
    POP ESI                             ; 005676d5
    POP EBX                             ; 005676d6
    RET                                 ; 005676d7
    MOV dword ptr [EBX + 0x256bc],0x0   ; 005676d8
        ;   Label: LAB_005676d8
    MOV dword ptr [EBX + 0x256f0],0xffffffff ; 005676e2
    MOV dword ptr [EBX + 0x256c4],0x0   ; 005676ec
    MOV dword ptr [EBX + 0x256c8],0x0   ; 005676f6
    MOV dword ptr [EBX + 0x256c0],0x0   ; 00567700
    MOV ESP,EBP                         ; 0056770a
    POP EBP                             ; 0056770c
    POP EDI                             ; 0056770d
    POP ESI                             ; 0056770e
    POP EBX                             ; 0056770f
    RET                                 ; 00567710
    FLD float ptr [EBX + 0x256bc]       ; 00567711
        ;   Label: LAB_00567711
    FST double ptr [ESP]                ; 00567717
    FABS                                ; 0056771a
    FLD1                                ; 0056771c
    FSUB double ptr [ESP + 0x8]         ; 0056771e
    FMUL float ptr [EBP + 0x18]         ; 00567722
    FMUL double ptr [0x005eb86d]        ; 00567725 | DAT_005eb86d
    FST float ptr [ESP + 0x10]          ; 0056772b
    FCOMPP                              ; 0056772f
    FNSTSW AX                           ; 00567731
    SAHF                                ; 00567733
    JBE 0x00567745                      ; 00567734
        ;   XREF to: 00567745 (CONDITIONAL_JUMP)  ; LAB_00567745
    MOV dword ptr [EBX + 0x256bc],0x0   ; 00567736
    JMP 0x005675a7                      ; 00567740
        ;   XREF to: 005675a7 (UNCONDITIONAL_JUMP)  ; LAB_005675a7
    FLDZ                                ; 00567745
        ;   Label: LAB_00567745
    FCOMP double ptr [ESP]              ; 00567747
    FNSTSW AX                           ; 0056774a
    SAHF                                ; 0056774c
    JBE 0x00567764                      ; 0056774d
        ;   XREF to: 00567764 (CONDITIONAL_JUMP)  ; LAB_00567764
    FLD float ptr [EBX + 0x256bc]       ; 0056774f
    FADD float ptr [ESP + 0x10]         ; 00567755
    FSTP float ptr [EBX + 0x256bc]      ; 00567759
    JMP 0x005675a7                      ; 0056775f
        ;   XREF to: 005675a7 (UNCONDITIONAL_JUMP)  ; LAB_005675a7
    FLD float ptr [EBX + 0x256bc]       ; 00567764
        ;   Label: LAB_00567764
    FSUB float ptr [ESP + 0x10]         ; 0056776a
    FSTP float ptr [EBX + 0x256bc]      ; 0056776e
    JMP 0x005675a7                      ; 00567774
        ;   XREF to: 005675a7 (UNCONDITIONAL_JUMP)  ; LAB_005675a7
    MOV dword ptr [EBX + 0x256c8],0x0   ; 00567779
        ;   Label: LAB_00567779
    JMP 0x005675fd                      ; 00567783
        ;   XREF to: 005675fd (UNCONDITIONAL_JUMP)  ; LAB_005675fd
    FLD float ptr [EBX + 0x256c8]       ; 00567788
        ;   Label: LAB_00567788
    FLD1                                ; 0056778e
    FCOMPP                              ; 00567790
    FNSTSW AX                           ; 00567792
    SAHF                                ; 00567794
    JC 0x00567621                       ; 00567795
        ;   XREF to: 00567621 (CONDITIONAL_JUMP)  ; LAB_00567621
    JMP 0x00567635                      ; 0056779b
        ;   XREF to: 00567635 (UNCONDITIONAL_JUMP)  ; LAB_00567635
    FLD float ptr [EBP + 0x18]          ; 005677a0
        ;   Label: LAB_005677a0
    FDIV float ptr [ESP + 0x28]         ; 005677a3
    JMP 0x00567680                      ; 005677a7
        ;   XREF to: 00567680 (UNCONDITIONAL_JUMP)  ; LAB_00567680
    FLD float ptr [EBX + 0x256bc]       ; 005677ac
        ;   Label: LAB_005677ac
    FMUL float ptr [ESP + 0x2c]         ; 005677b2
    FLD float ptr [ESP + 0x14]          ; 005677b6
    FLD1                                ; 005677ba
    FSUBRP                              ; 005677bc
    FDIVP                               ; 005677be
    FSUBR float ptr [EBX + 0x256bc]     ; 005677c0
    FSTP float ptr [EBX + 0x256bc]      ; 005677c6
    MOV ESP,EBP                         ; 005677cc
    POP EBP                             ; 005677ce
    POP EDI                             ; 005677cf
    POP ESI                             ; 005677d0
    POP EBX                             ; 005677d1
    RET                                 ; 005677d2
    FLD float ptr [EBX + 0x256bc]       ; 005677d3
        ;   Label: LAB_005677d3
    FMUL float ptr [0x005eb885]         ; 005677d9 | DAT_005eb885
    FABS                                ; 005677df
    MOV ESI,dword ptr [EBX + 0x256f0]   ; 005677e1
    FSTP float ptr [ESP + 0x1c]         ; 005677e7
    CMP EDX,ESI                         ; 005677eb
    JZ 0x005677f5                       ; 005677ed
        ;   XREF to: 005677f5 (CONDITIONAL_JUMP)  ; LAB_005677f5
    XOR EDI,EDI                         ; 005677ef
    MOV dword ptr [ESP + 0x1c],EDI      ; 005677f1
    FLD float ptr [ESP + 0x1c]          ; 005677f5
        ;   Label: LAB_005677f5
    FLD1                                ; 005677f9
    FCOMPP                              ; 005677fb
    FNSTSW AX                           ; 005677fd
    SAHF                                ; 005677ff
    JNC 0x0056780a                      ; 00567800
        ;   XREF to: 0056780a (CONDITIONAL_JUMP)  ; LAB_0056780a
    MOV dword ptr [ESP + 0x1c],0x3f800000 ; 00567802
    FLD float ptr [ESP + 0x1c]          ; 0056780a
        ;   Label: LAB_0056780a
    FSUB float ptr [EBX + 0x256c0]      ; 0056780e
    FADD float ptr [EBX + 0x256c0]      ; 00567814
    FST float ptr [EBX + 0x256c0]       ; 0056781a
    FCOMP double ptr [0x005eb88d]       ; 00567820 | DAT_005eb88d
    FNSTSW AX                           ; 00567826
    SAHF                                ; 00567828
    JBE 0x005676d1                      ; 00567829
        ;   XREF to: 005676d1 (CONDITIONAL_JUMP)  ; LAB_005676d1
    MOV dword ptr [EBX + 0x256f0],EDX   ; 0056782f
    MOV ESP,EBP                         ; 00567835
    POP EBP                             ; 00567837
    POP EDI                             ; 00567838
    POP ESI                             ; 00567839
    POP EBX                             ; 0056783a
    RET                                 ; 0056783b

