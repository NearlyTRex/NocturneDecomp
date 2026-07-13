; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100044b0(int param_1,float *param_2,uint param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[2]:
;   APIDLLdrawPolygon2 at 1000442f
;   FUN_10005010 at 1000506e
;
; Referenced Globals:
;   undefined4 DAT_100122b8
;   undefined4 DAT_100122c8
;   undefined4 DAT_100122d0
;   undefined4 DAT_100122d8
;   undefined4 DAT_100122e8
;   undefined4 DAT_10014164
;   undefined4 DAT_1001416c
;   undefined4 DAT_10014170
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_101398c8
;   undefined4 DAT_10215e40
;   undefined4 DAT_102268dc
;   undefined4 DAT_102268e4
;   undefined4 DAT_102268e8
;   ... and 5 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 100044b0
        ;   Label: FUN_100044b0
    SUB ESP,0x8                         ; 100044b4
    FILD dword ptr [ECX + 0x10]         ; 100044b7
    PUSH EBX                            ; 100044ba
    PUSH ESI                            ; 100044bb
    MOV ESI,dword ptr [ESP + 0x18]      ; 100044bc
    PUSH EDI                            ; 100044c0
    FMUL double ptr [0x100122c8]        ; 100044c1 | DAT_100122c8
    PUSH EBP                            ; 100044c7
    FSTP float ptr [ESI]                ; 100044c8
    FILD dword ptr [ECX + 0x14]         ; 100044ca
    FMUL double ptr [0x100122c8]        ; 100044cd | DAT_100122c8
    FSTP float ptr [ESI + 0x4]          ; 100044d3
    CMP dword ptr [0x101398c8],0x0      ; 100044d6 | DAT_101398c8
    JZ 0x10004501                       ; 100044dd
        ;   XREF to: 10004501 (CONDITIONAL_JUMP)  ; LAB_10004501
    FILD dword ptr [0x10014174]         ; 100044df | DAT_10014174
    FMUL float ptr [ESI]                ; 100044e5
    FMUL double ptr [0x100122d0]        ; 100044e7 | DAT_100122d0
    FSTP float ptr [ESI]                ; 100044ed
    FLD float ptr [ESI + 0x4]           ; 100044ef
    FIMUL dword ptr [0x10014178]        ; 100044f2 | DAT_10014178
    FMUL double ptr [0x100122d8]        ; 100044f8 | DAT_100122d8
    FSTP float ptr [ESI + 0x4]          ; 100044fe
    FILD dword ptr [ECX + 0x8]          ; 10004501
        ;   Label: LAB_10004501
    MOV EDI,0xff                        ; 10004504
    MOV EDX,dword ptr [ESP + 0x24]      ; 10004509
    TEST DL,0x8                         ; 1000450d
    FSTP float ptr [ESP + 0x14]         ; 10004510
    FILD dword ptr [ESP + 0x28]         ; 10004514
    FDIV float ptr [ESP + 0x14]         ; 10004518
    FSTP float ptr [ESI + 0xc]          ; 1000451c
    JZ 0x10004529                       ; 1000451f
        ;   XREF to: 10004529 (CONDITIONAL_JUMP)  ; LAB_10004529
    MOV EAX,dword ptr [ECX + 0x2c]      ; 10004521
    SAR EAX,0x8                         ; 10004524
    SUB EDI,EAX                         ; 10004527
    MOV EBP,EDX                         ; 10004529
        ;   Label: LAB_10004529
    AND EBP,0x4                         ; 1000452b
    JZ 0x1000457d                       ; 1000452e
        ;   XREF to: 1000457d (CONDITIONAL_JUMP)  ; LAB_1000457d
    TEST DH,0x2                         ; 10004530
    JZ 0x1000453e                       ; 10004533
        ;   XREF to: 1000453e (CONDITIONAL_JUMP)  ; LAB_1000453e
    XOR EAX,EAX                         ; 10004535
    MOV EBX,0xff                        ; 10004537
    JMP 0x10004588                      ; 1000453c
        ;   XREF to: 10004588 (UNCONDITIONAL_JUMP)  ; LAB_10004588
    MOV EBX,dword ptr [ECX + 0x20]      ; 1000453e
        ;   Label: LAB_1000453e
    XOR EAX,EAX                         ; 10004541
    SUB EBX,0x100                       ; 10004543
    MOV [0x10240610],EAX                ; 10004549 | DAT_10240610
    SAR EBX,0x4                         ; 1000454e
    CMP EBX,0xff                        ; 10004551
    JLE 0x10004588                      ; 10004557
        ;   XREF to: 10004588 (CONDITIONAL_JUMP)  ; LAB_10004588
    LEA EAX,[EBX + 0xffffff00]          ; 10004559
    MOV dword ptr [0x10236908],EBX      ; 1000455f | DAT_10236908
    MOV [0x10240610],EAX                ; 10004565 | DAT_10240610
    CMP EAX,0xff                        ; 1000456a
    JLE 0x10004576                      ; 1000456f
        ;   XREF to: 10004576 (CONDITIONAL_JUMP)  ; LAB_10004576
    MOV EAX,0xff                        ; 10004571
    MOV EBX,0xff                        ; 10004576
        ;   Label: LAB_10004576
    JMP 0x10004588                      ; 1000457b
        ;   XREF to: 10004588 (UNCONDITIONAL_JUMP)  ; LAB_10004588
    MOV EBX,dword ptr [0x10236908]      ; 1000457d | DAT_10236908
        ;   Label: LAB_1000457d
    MOV EAX,[0x10240610]                ; 10004583 | DAT_10240610
    MOV dword ptr [0x10236908],EBX      ; 10004588 | DAT_10236908
        ;   Label: LAB_10004588
    MOV [0x10240610],EAX                ; 1000458e | DAT_10240610
    TEST DL,0x1                         ; 10004593
    JZ 0x1000465f                       ; 10004596
        ;   XREF to: 1000465f (CONDITIONAL_JUMP)  ; LAB_1000465f
    SHL EDI,0x10                        ; 1000459c
    MOV EBP,EAX                         ; 1000459f
    SHL EBP,0x10                        ; 100045a1
    OR EDI,EAX                          ; 100045a4
    SHL EDI,0x8                         ; 100045a6
    OR EDI,EBP                          ; 100045a9
    OR EDI,EAX                          ; 100045ab
    TEST DH,0x1                         ; 100045ad
    MOV dword ptr [ESI + 0x14],EDI      ; 100045b0
    JZ 0x100045bd                       ; 100045b3
        ;   XREF to: 100045bd (CONDITIONAL_JUMP)  ; LAB_100045bd
    MOV EAX,dword ptr [ECX + 0x2c]      ; 100045b5
    SAR EAX,0x8                         ; 100045b8
    JMP 0x100045c4                      ; 100045bb
        ;   XREF to: 100045c4 (UNCONDITIONAL_JUMP)  ; LAB_100045c4
    MOV EAX,[0x102268e4]                ; 100045bd | DAT_102268e4
        ;   Label: LAB_100045bd
    MOV EAX,dword ptr [EAX]             ; 100045c2
    TEST DH,0x2                         ; 100045c4
        ;   Label: LAB_100045c4
    MOV dword ptr [0x10236908],EBX      ; 100045c7 | DAT_10236908
    JZ 0x100045f9                       ; 100045cd
        ;   XREF to: 100045f9 (CONDITIONAL_JUMP)  ; LAB_100045f9
    MOV EDX,dword ptr [ECX + 0x20]      ; 100045cf
    MOV EDI,dword ptr [ECX + 0x28]      ; 100045d2
    SAR EDI,0x8                         ; 100045d5
    AND EDX,0xffffff00                  ; 100045d8
    SHL EDX,0x8                         ; 100045de
    SHL EAX,0x18                        ; 100045e1
    OR EDX,dword ptr [ECX + 0x24]       ; 100045e4
    AND EDX,0xffffff00                  ; 100045e7
    OR EDX,EDI                          ; 100045ed
    OR EDX,EAX                          ; 100045ef
    MOV dword ptr [ESI + 0x10],EDX      ; 100045f1
    JMP 0x100046d4                      ; 100045f4
        ;   XREF to: 100046d4 (UNCONDITIONAL_JUMP)  ; LAB_100046d4
    CMP dword ptr [0x10014164],0x0      ; 100045f9 | DAT_10014164
        ;   Label: LAB_100045f9
    JZ 0x10004643                       ; 10004600
        ;   XREF to: 10004643 (CONDITIONAL_JUMP)  ; LAB_10004643
    MOV EDX,dword ptr [0x102268dc]      ; 10004602 | DAT_102268dc
    CMP dword ptr [EDX],0x1             ; 10004608
    JNZ 0x10004643                      ; 1000460b
        ;   XREF to: 10004643 (CONDITIONAL_JUMP)  ; LAB_10004643
    IMUL EAX,EBX                        ; 1000460d
    CDQ                                 ; 10004610
    AND EDX,0xff                        ; 10004611
    MOV dword ptr [0x10236908],EBX      ; 10004617 | DAT_10236908
    ADD EAX,EDX                         ; 1000461d
    SAR EAX,0x8                         ; 1000461f
    MOV EDX,EAX                         ; 10004622
    MOV EDI,EAX                         ; 10004624
    SHL EDI,0x10                        ; 10004626
    OR EDX,0xffff0000                   ; 10004629
    SHL EDX,0x8                         ; 1000462f
    MOV [0x10236908],EAX                ; 10004632 | DAT_10236908
    OR EDX,EDI                          ; 10004637
    OR EDX,EAX                          ; 10004639
    MOV dword ptr [ESI + 0x10],EDX      ; 1000463b
    JMP 0x100046d4                      ; 1000463e
        ;   XREF to: 100046d4 (UNCONDITIONAL_JUMP)  ; LAB_100046d4
    SHL EAX,0x10                        ; 10004643
        ;   Label: LAB_10004643
    MOV EDX,EBX                         ; 10004646
    SHL EDX,0x10                        ; 10004648
    OR EAX,EBX                          ; 1000464b
    SHL EAX,0x8                         ; 1000464d
    MOV dword ptr [0x10236908],EBX      ; 10004650 | DAT_10236908
    OR EAX,EDX                          ; 10004656
    OR EAX,EBX                          ; 10004658
    MOV dword ptr [ESI + 0x10],EAX      ; 1000465a
    JMP 0x100046d4                      ; 1000465d
        ;   XREF to: 100046d4 (UNCONDITIONAL_JUMP)  ; LAB_100046d4
    TEST DH,0x2                         ; 1000465f
        ;   Label: LAB_1000465f
    JZ 0x10004686                       ; 10004662
        ;   XREF to: 10004686 (CONDITIONAL_JUMP)  ; LAB_10004686
    MOV EAX,dword ptr [ECX + 0x20]      ; 10004664
    MOV EDX,dword ptr [ECX + 0x28]      ; 10004667
    SAR EDX,0x8                         ; 1000466a
    AND EAX,0xffffff00                  ; 1000466d
    SHL EAX,0x8                         ; 10004672
    OR EAX,dword ptr [ECX + 0x24]       ; 10004675
    AND EAX,0xffffff00                  ; 10004678
    OR EAX,EDX                          ; 1000467d
    OR EAX,0xff000000                   ; 1000467f
    JMP 0x100046cb                      ; 10004684
        ;   XREF to: 100046cb (UNCONDITIONAL_JUMP)  ; LAB_100046cb
    TEST EBP,EBP                        ; 10004686
        ;   Label: LAB_10004686
    JZ 0x10004697                       ; 10004688
        ;   XREF to: 10004697 (CONDITIONAL_JUMP)  ; LAB_10004697
    MOV EAX,dword ptr [ECX + 0x18]      ; 1000468a
    AND EAX,0xff0000                    ; 1000468d
    SHR EAX,0x10                        ; 10004692
    JMP 0x100046a3                      ; 10004695
        ;   XREF to: 100046a3 (UNCONDITIONAL_JUMP)  ; LAB_100046a3
    MOV EAX,[0x102268e8]                ; 10004697 | DAT_102268e8
        ;   Label: LAB_10004697
    MOV EAX,dword ptr [EAX]             ; 1000469c
    AND EAX,0xff                        ; 1000469e
    LEA EAX,[EAX + EAX*0x2]             ; 100046a3
        ;   Label: LAB_100046a3
    MOV EBX,dword ptr [0x10215e40]      ; 100046a6 | DAT_10215e40
    ADD EBX,EAX                         ; 100046ac
    XOR EDX,EDX                         ; 100046ae
    XOR EAX,EAX                         ; 100046b0
    MOV DL,byte ptr [EBX + 0x1]         ; 100046b2
    SHL EDX,0x8                         ; 100046b5
    MOV AL,byte ptr [EBX]               ; 100046b8
    OR EAX,0xffffff00                   ; 100046ba
    SHL EAX,0x10                        ; 100046bf
    OR EAX,EDX                          ; 100046c2
    XOR EDX,EDX                         ; 100046c4
    MOV DL,byte ptr [EBX + 0x2]         ; 100046c6
    OR EAX,EDX                          ; 100046c9
    SHL EDI,0x18                        ; 100046cb
        ;   Label: LAB_100046cb
    MOV dword ptr [ESI + 0x10],EAX      ; 100046ce
    MOV dword ptr [ESI + 0x14],EDI      ; 100046d1
    MOV EAX,[0x10226920]                ; 100046d4 | DAT_10226920
        ;   Label: LAB_100046d4
    CMP dword ptr [EAX],0x0             ; 100046d9
    JZ 0x1000473f                       ; 100046dc
        ;   XREF to: 1000473f (CONDITIONAL_JUMP)  ; LAB_1000473f
    CMP dword ptr [0x1001416c],0x0      ; 100046de | DAT_1001416c
    JZ 0x10004720                       ; 100046e5
        ;   XREF to: 10004720 (CONDITIONAL_JUMP)  ; LAB_10004720
    CMP dword ptr [0x10014170],0x10     ; 100046e7 | DAT_10014170
    JNZ 0x10004720                      ; 100046ee
        ;   XREF to: 10004720 (CONDITIONAL_JUMP)  ; LAB_10004720
    MOV EDX,dword ptr [ESP + 0x14]      ; 100046f0
    SAR EDX,0x1                         ; 100046f4
    ADD EDX,dword ptr [0x1024062c]      ; 100046f7 | DAT_1024062c
    MOV dword ptr [ESP + 0x10],EDX      ; 100046fd
    FLD float ptr [ESP + 0x10]          ; 10004701
    FMUL float ptr [0x10240614]         ; 10004705 | DAT_10240614
    FSTP float ptr [ESI + 0x8]          ; 1000470b
    CMP dword ptr [ESI + 0x8],0x3f800000 ; 1000470e
    JLE 0x10004780                      ; 10004715
        ;   XREF to: 10004780 (CONDITIONAL_JUMP)  ; LAB_10004780
    MOV dword ptr [ESI + 0x8],0x3f800000 ; 10004717
    JMP 0x10004780                      ; 1000471e
        ;   XREF to: 10004780 (UNCONDITIONAL_JUMP)  ; LAB_10004780
    FLD float ptr [ESP + 0x14]          ; 10004720
        ;   Label: LAB_10004720
    FMUL float ptr [0x10240614]         ; 10004724 | DAT_10240614
    FSTP float ptr [ESI + 0x8]          ; 1000472a
    CMP dword ptr [ESI + 0x8],0x3f800000 ; 1000472d
    JLE 0x10004780                      ; 10004734
        ;   XREF to: 10004780 (CONDITIONAL_JUMP)  ; LAB_10004780
    MOV dword ptr [ESI + 0x8],0x3f800000 ; 10004736
    JMP 0x10004780                      ; 1000473d
        ;   XREF to: 10004780 (UNCONDITIONAL_JUMP)  ; LAB_10004780
    FLD float ptr [ESP + 0x14]          ; 1000473f
        ;   Label: LAB_1000473f
    FMUL float ptr [0x10240614]         ; 10004743 | DAT_10240614
    FCOM double ptr [0x100122b8]        ; 10004749 | DAT_100122b8
    FSTP float ptr [ESP + 0x10]         ; 1000474f
    FNSTSW AX                           ; 10004753
    TEST AH,0x1                         ; 10004755
    JZ 0x10004762                       ; 10004758
        ;   XREF to: 10004762 (CONDITIONAL_JUMP)  ; LAB_10004762
    MOV dword ptr [ESP + 0x10],0x3f800000 ; 1000475a
    MOV EAX,0x43800000                  ; 10004762
        ;   Label: LAB_10004762
    CMP dword ptr [ESP + 0x10],EAX      ; 10004767
    JLE 0x10004771                      ; 1000476b
        ;   XREF to: 10004771 (CONDITIONAL_JUMP)  ; LAB_10004771
    MOV dword ptr [ESP + 0x10],EAX      ; 1000476d
    FLD1                                ; 10004771
        ;   Label: LAB_10004771
    FDIV float ptr [ESP + 0x10]         ; 10004773
    FSUBR double ptr [0x100122b8]       ; 10004777 | DAT_100122b8
    FSTP float ptr [ESI + 0x8]          ; 1000477d
    FILD dword ptr [ECX + 0x18]         ; 10004780
        ;   Label: LAB_10004780
    MOV ECX,dword ptr [ECX + 0x1c]      ; 10004783
    MOV dword ptr [ESP + 0x10],ECX      ; 10004786
    FMUL double ptr [0x100122e8]        ; 1000478a | DAT_100122e8
    FSTP float ptr [ESI + 0x18]         ; 10004790
    FILD dword ptr [ESP + 0x10]         ; 10004793
    POP EBP                             ; 10004797
    POP EDI                             ; 10004798
    FMUL double ptr [0x100122e8]        ; 10004799 | DAT_100122e8
    FSTP float ptr [ESI + 0x1c]         ; 1000479f
    POP ESI                             ; 100047a2
    POP EBX                             ; 100047a3
    ADD ESP,0x8                         ; 100047a4
    RET                                 ; 100047a7

