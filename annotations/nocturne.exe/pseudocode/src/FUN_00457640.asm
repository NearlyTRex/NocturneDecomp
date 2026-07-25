; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00457640(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_006b0278
;   undefined4 DAT_01b4cd30
;   undefined4 DAT_01b4cd34
;   undefined4 DAT_01b4d1b4
;   undefined4 DAT_01b4d1b8
;   undefined4 DAT_01c039a1
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457640
        ;   Label: FUN_00457640
    PUSH ESI                            ; 00457641
    PUSH EDI                            ; 00457642
    PUSH EBP                            ; 00457643
    SUB ESP,0x4                         ; 00457644
    MOV ESI,dword ptr [ESP + 0x18]      ; 00457647
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0045764b
    MOV EBX,dword ptr [EBP + 0x14]      ; 0045764f
    MOV EDI,dword ptr [ESI + 0x14]      ; 00457652
    SAR EBX,0x10                        ; 00457655
    SAR EDI,0x10                        ; 00457658
    CMP EDI,EBX                         ; 0045765b
    JZ 0x0045784f                       ; 0045765d
        ;   XREF to: 0045784f (CONDITIONAL_JUMP)  ; LAB_0045784f
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457663
    CMP EDX,dword ptr [ESI + 0x14]      ; 00457666
    JGE 0x00457677                      ; 00457669
        ;   XREF to: 00457677 (CONDITIONAL_JUMP)  ; LAB_00457677
    MOV EAX,ESI                         ; 0045766b
    MOV ESI,EBP                         ; 0045766d
    MOV EBP,EAX                         ; 0045766f
    MOV EAX,EDI                         ; 00457671
    MOV EDI,EBX                         ; 00457673
    MOV EBX,EAX                         ; 00457675
    MOV EAX,[0x01b4cd30]                ; 00457677 | DAT_01b4cd30
        ;   Label: LAB_00457677
    LEA ECX,[EAX*0x8 + 0x0]             ; 0045767c
    ADD ECX,EAX                         ; 00457683
    SHL ECX,0x3                         ; 00457685
    ADD ECX,0x1b4cd34                   ; 00457688
    MOV dword ptr [ECX],EDI             ; 0045768e | DAT_01b4cd34
    MOV EAX,[0x01b4d1b4]                ; 00457690 | DAT_01b4d1b4
    MOV dword ptr [ECX + 0x4],EBX       ; 00457695
    CMP EDI,EAX                         ; 00457698
    JGE 0x004576a2                      ; 0045769a
        ;   XREF to: 004576a2 (CONDITIONAL_JUMP)  ; LAB_004576a2
    MOV dword ptr [0x01b4d1b4],EDI      ; 0045769c | DAT_01b4d1b4
    CMP EBX,dword ptr [0x01b4d1b8]      ; 004576a2 | DAT_01b4d1b8
        ;   Label: LAB_004576a2
    JLE 0x004576b0                      ; 004576a8
        ;   XREF to: 004576b0 (CONDITIONAL_JUMP)  ; LAB_004576b0
    MOV dword ptr [0x01b4d1b8],EBX      ; 004576aa | DAT_01b4d1b8
    MOV EDI,dword ptr [ESI + 0x14]      ; 004576b0
        ;   Label: LAB_004576b0
    MOV EBX,dword ptr [EBP + 0x14]      ; 004576b3
    SUB EBX,EDI                         ; 004576b6
    CMP EBX,0x10000                     ; 004576b8
    JNC 0x00457857                      ; 004576be
        ;   XREF to: 00457857 (CONDITIONAL_JUMP)  ; LAB_00457857
    XOR EBX,EBX                         ; 004576c4
    MOV EAX,dword ptr [EBP + 0x10]      ; 004576c6
        ;   Label: LAB_004576c6
    MOV EDX,dword ptr [ESI + 0x10]      ; 004576c9
    MOV EDI,dword ptr [ESI + 0x14]      ; 004576cc
    SUB EAX,EDX                         ; 004576cf
    AND EDI,0xffff                      ; 004576d1
    MOV EDX,EAX                         ; 004576d7
    MOV EAX,EBX                         ; 004576d9
    XOR DI,0xffff                       ; 004576db
    IMUL EDX                            ; 004576df
    SHRD EAX,EDX,0x10                   ; 004576e1
    MOV EDX,EAX                         ; 004576e5
    MOV dword ptr [ECX + 0xc],EAX       ; 004576e7
    MOV EAX,EDI                         ; 004576ea
    IMUL EDX                            ; 004576ec
    SHRD EAX,EDX,0x10                   ; 004576ee
    MOV dword ptr [ESP],EAX             ; 004576f2
    MOV EDX,dword ptr [ESP]             ; 004576f5
    MOV EAX,dword ptr [ESI + 0x10]      ; 004576f8
    ADD EAX,EDX                         ; 004576fb
    MOV dword ptr [ECX + 0x8],EAX       ; 004576fd
    MOV EAX,dword ptr [EBP + 0x18]      ; 00457700
    MOV EDX,dword ptr [ESI + 0x18]      ; 00457703
    SUB EAX,EDX                         ; 00457706
    MOV EDX,EAX                         ; 00457708
    MOV EAX,EBX                         ; 0045770a
    IMUL EDX                            ; 0045770c
    SHRD EAX,EDX,0x10                   ; 0045770e
    MOV EDX,EAX                         ; 00457712
    MOV dword ptr [ECX + 0x1c],EAX      ; 00457714
    MOV EAX,EDI                         ; 00457717
    IMUL EDX                            ; 00457719
    SHRD EAX,EDX,0x10                   ; 0045771b
    MOV dword ptr [ESP],EAX             ; 0045771f
    MOV EDX,dword ptr [ESP]             ; 00457722
    MOV EAX,dword ptr [ESI + 0x18]      ; 00457725
    ADD EAX,EDX                         ; 00457728
    MOV dword ptr [ECX + 0x18],EAX      ; 0045772a
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045772d
    MOV EDX,dword ptr [ESI + 0x1c]      ; 00457730
    SUB EAX,EDX                         ; 00457733
    MOV EDX,EAX                         ; 00457735
    MOV EAX,EBX                         ; 00457737
    IMUL EDX                            ; 00457739
    SHRD EAX,EDX,0x10                   ; 0045773b
    MOV EDX,EAX                         ; 0045773f
    MOV dword ptr [ECX + 0x24],EAX      ; 00457741
    MOV EAX,EDI                         ; 00457744
    IMUL EDX                            ; 00457746
    SHRD EAX,EDX,0x10                   ; 00457748
    MOV dword ptr [ESP],EAX             ; 0045774c
    MOV EDX,dword ptr [ESP]             ; 0045774f
    MOV EAX,dword ptr [ESI + 0x1c]      ; 00457752
    ADD EAX,EDX                         ; 00457755
    MOV dword ptr [ECX + 0x20],EAX      ; 00457757
    MOV EAX,dword ptr [EBP + 0x20]      ; 0045775a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0045775d
    SUB EAX,EDX                         ; 00457760
    MOV EDX,EAX                         ; 00457762
    MOV EAX,EBX                         ; 00457764
    IMUL EDX                            ; 00457766
    SHRD EAX,EDX,0x10                   ; 00457768
    MOV EDX,EAX                         ; 0045776c
    MOV dword ptr [ECX + 0x14],EAX      ; 0045776e
    MOV EAX,EDI                         ; 00457771
    IMUL EDX                            ; 00457773
    SHRD EAX,EDX,0x10                   ; 00457775
    MOV dword ptr [ESP],EAX             ; 00457779
    MOV EDX,dword ptr [ESP]             ; 0045777c
    MOV EAX,dword ptr [ESI + 0x20]      ; 0045777f
    ADD EAX,EDX                         ; 00457782
    MOV dword ptr [ECX + 0x10],EAX      ; 00457784
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00457787
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0045778a
    SUB EAX,EDX                         ; 0045778d
    MOV EDX,EAX                         ; 0045778f
    MOV EAX,EBX                         ; 00457791
    IMUL EDX                            ; 00457793
    SHRD EAX,EDX,0x10                   ; 00457795
    MOV EDX,EAX                         ; 00457799
    MOV dword ptr [ECX + 0x34],EAX      ; 0045779b
    MOV EAX,EDI                         ; 0045779e
    IMUL EDX                            ; 004577a0
    SHRD EAX,EDX,0x10                   ; 004577a2
    MOV dword ptr [ESP],EAX             ; 004577a6
    MOV EDX,dword ptr [ESP]             ; 004577a9
    MOV EAX,dword ptr [ESI + 0x2c]      ; 004577ac
    ADD EAX,EDX                         ; 004577af
    MOV dword ptr [ECX + 0x30],EAX      ; 004577b1
    CMP dword ptr [0x006b0278],0x0      ; 004577b4 | DAT_006b0278
    JZ 0x00457867                       ; 004577bb
        ;   XREF to: 00457867 (CONDITIONAL_JUMP)  ; LAB_00457867
    MOV EAX,dword ptr [EBP + 0x8]       ; 004577c1
    MOV EDX,dword ptr [ESI + 0x8]       ; 004577c4
    SUB EAX,EDX                         ; 004577c7
    MOV EDX,EAX                         ; 004577c9
    MOV EAX,EBX                         ; 004577cb
    IMUL EDX                            ; 004577cd
    SHRD EAX,EDX,0x10                   ; 004577cf
    MOV EDX,EAX                         ; 004577d3
    MOV dword ptr [ECX + 0x2c],EAX      ; 004577d5
    MOV EAX,EDI                         ; 004577d8
    IMUL EDX                            ; 004577da
    SHRD EAX,EDX,0x10                   ; 004577dc
    MOV dword ptr [ESP],EAX             ; 004577e0
    MOV EDX,dword ptr [ESP]             ; 004577e3
    MOV EAX,dword ptr [ESI + 0x8]       ; 004577e6
    ADD EAX,EDX                         ; 004577e9
        ;   Label: LAB_004577e9
    MOV dword ptr [ECX + 0x28],EAX      ; 004577eb
    TEST byte ptr [0x01c039a1],0x2      ; 004577ee | DAT_01c039a1
    JZ 0x00457849                       ; 004577f5
        ;   XREF to: 00457849 (CONDITIONAL_JUMP)  ; LAB_00457849
    MOV EAX,dword ptr [EBP + 0x24]      ; 004577f7
    MOV EDX,dword ptr [ESI + 0x24]      ; 004577fa
    SUB EAX,EDX                         ; 004577fd
    MOV EDX,EAX                         ; 004577ff
    MOV EAX,EBX                         ; 00457801
    IMUL EDX                            ; 00457803
    SHRD EAX,EDX,0x10                   ; 00457805
    MOV EDX,EAX                         ; 00457809
    MOV dword ptr [ECX + 0x3c],EAX      ; 0045780b
    MOV EAX,EDI                         ; 0045780e
    IMUL EDX                            ; 00457810
    SHRD EAX,EDX,0x10                   ; 00457812
    MOV dword ptr [ESP],EAX             ; 00457816
    MOV EDX,dword ptr [ESP]             ; 00457819
    MOV EAX,dword ptr [ESI + 0x24]      ; 0045781c
    ADD EAX,EDX                         ; 0045781f
    MOV dword ptr [ECX + 0x38],EAX      ; 00457821
    MOV EDX,dword ptr [EBP + 0x28]      ; 00457824
    MOV EBP,dword ptr [ESI + 0x28]      ; 00457827
    MOV EAX,EBX                         ; 0045782a
    SUB EDX,EBP                         ; 0045782c
    IMUL EDX                            ; 0045782e
    SHRD EAX,EDX,0x10                   ; 00457830
    MOV EDX,EAX                         ; 00457834
    MOV dword ptr [ECX + 0x44],EAX      ; 00457836
    MOV EAX,EDI                         ; 00457839
    IMUL EDX                            ; 0045783b
    SHRD EAX,EDX,0x10                   ; 0045783d
    MOV EBX,dword ptr [ESI + 0x28]      ; 00457841
    ADD EBX,EAX                         ; 00457844
    MOV dword ptr [ECX + 0x40],EBX      ; 00457846
    INC dword ptr [0x01b4cd30]          ; 00457849 | DAT_01b4cd30
        ;   Label: LAB_00457849
    ADD ESP,0x4                         ; 0045784f
        ;   Label: LAB_0045784f
    POP EBP                             ; 00457852
    POP EDI                             ; 00457853
    POP ESI                             ; 00457854
    POP EBX                             ; 00457855
    RET                                 ; 00457856
    MOV EAX,0xffffffff                  ; 00457857
        ;   Label: LAB_00457857
    XOR EDX,EDX                         ; 0045785c
    DIV EBX                             ; 0045785e
    MOV EBX,EAX                         ; 00457860
    JMP 0x004576c6                      ; 00457862
        ;   XREF to: 004576c6 (UNCONDITIONAL_JUMP)  ; LAB_004576c6
    MOV EAX,dword ptr [EBP + 0xc]       ; 00457867
        ;   Label: LAB_00457867
    MOV EDX,dword ptr [ESI + 0xc]       ; 0045786a
    SUB EAX,EDX                         ; 0045786d
    MOV EDX,EAX                         ; 0045786f
    MOV EAX,EBX                         ; 00457871
    IMUL EDX                            ; 00457873
    SHRD EAX,EDX,0x10                   ; 00457875
    MOV EDX,EAX                         ; 00457879
    MOV dword ptr [ECX + 0x2c],EAX      ; 0045787b
    MOV EAX,EDI                         ; 0045787e
    IMUL EDX                            ; 00457880
    SHRD EAX,EDX,0x10                   ; 00457882
    MOV dword ptr [ESP],EAX             ; 00457886
    MOV EDX,dword ptr [ESP]             ; 00457889
    MOV EAX,dword ptr [ESI + 0xc]       ; 0045788c
    JMP 0x004577e9                      ; 0045788f
        ;   XREF to: 004577e9 (UNCONDITIONAL_JUMP)  ; LAB_004577e9

