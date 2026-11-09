; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSpanBasedSprite_FUN_00437700(void *sprite_data,void *span_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; void *           Stack[0x8]:4   span_data
; int              Stack[0xc]:4   screen_x
; int              Stack[0x10]:4   screen_y
; int              Stack[0x14]:4   src_x
; int              Stack[0x18]:4   src_y
; int              Stack[0x1c]:4   width
; int              Stack[0x20]:4   height
;
; Referenced Globals:
;   undefined4 DAT_0061b498
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4354c
;   undefined4 DAT_01c43550
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_00437270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00437700
        ;   Label: cockpit_ckptutil.c_blitSpanBasedSprite_FUN_00437700
    PUSH ESI                            ; 00437701
    PUSH EDI                            ; 00437702
    PUSH EBP                            ; 00437703
    SUB ESP,0x34                        ; 00437704
    MOV EDI,dword ptr [ESP + 0x54]      ; 00437707
    MOV EDX,dword ptr [0x01c4354c]      ; 0043770b | DAT_01c4354c
    MOV EAX,[0x01c43550]                ; 00437711 | DAT_01c43550
    SUB EAX,EDX                         ; 00437716
    MOV dword ptr [ESP + 0x10],EAX      ; 00437718
    MOV EAX,[0x0061b498]                ; 0043771c | DAT_0061b498
    MOV EDX,EAX                         ; 00437721
    SAR EDX,0x1f                        ; 00437723
    SUB EAX,EDX                         ; 00437726
    SAR EAX,0x1                         ; 00437728
    MOV EBX,dword ptr [ESP + 0x58]      ; 0043772a
    ADD EBX,EAX                         ; 0043772e
    MOV ECX,dword ptr [ESP + 0x48]      ; 00437730
    LEA ESI,[EBX + 0x1]                 ; 00437734
    TEST ECX,ECX                        ; 00437737
    JNZ 0x00437743                      ; 00437739
        ;   XREF to: 00437743 (CONDITIONAL_JUMP)  ; LAB_00437743
    ADD ESP,0x34                        ; 0043773b
        ;   Label: LAB_0043773b
    POP EBP                             ; 0043773e
    POP EDI                             ; 0043773f
    POP ESI                             ; 00437740
    POP EBX                             ; 00437741
    RET                                 ; 00437742
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437743
        ;   Label: LAB_00437743
    IMUL EAX,EDI                        ; 00437747
    ADD EAX,dword ptr [ESP + 0x50]      ; 0043774a
    LEA EDX,[ECX + EAX*0x1]             ; 0043774e
    MOV EBP,EDI                         ; 00437751
    MOV dword ptr [ESP + 0x48],EDX      ; 00437753
    CALL cockpit_ckptutil.c_FUN_00437270 ; 00437757
        ;   XREF to: 00437270 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_00437270()
    SHL EBP,0x5                         ; 0043775c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043775f
    MOV dword ptr [ESP + 0x30],EAX      ; 00437763
    MOV EAX,EDX                         ; 00437767
    MOV ECX,dword ptr [ESP + 0x5c]      ; 00437769
    SHL EAX,0x5                         ; 0043776d
    ADD EBP,EDI                         ; 00437770
    ADD EAX,EDX                         ; 00437772
    SHL EBP,0x2                         ; 00437774
    SHL EAX,0x2                         ; 00437777
    ADD ECX,EDI                         ; 0043777a
    MOV dword ptr [ESP],EAX             ; 0043777c
    MOV EAX,[0x0061b4a0]                ; 0043777f | DAT_0061b4a0
    SHL ECX,0x2                         ; 00437784
    CMP EAX,0x8                         ; 00437787
    JNZ 0x0043784b                      ; 0043778a
        ;   XREF to: 0043784b (CONDITIONAL_JUMP)  ; LAB_0043784b
    MOV EDX,dword ptr [ESP + 0x50]      ; 00437790
    MOV EAX,dword ptr [ECX + 0x1c4354c] ; 00437794
    ADD EDX,EAX                         ; 0043779a
    MOV ECX,dword ptr [ESP + 0x64]      ; 0043779c
    MOV dword ptr [ESP + 0x28],EDX      ; 004377a0
    CMP EDI,ECX                         ; 004377a4
    JGE 0x0043773b                      ; 004377a6
        ;   XREF to: 0043773b (CONDITIONAL_JUMP)  ; LAB_0043773b
    MOV EAX,dword ptr [ESP]             ; 004377a8
    MOV dword ptr [ESP + 0x14],EBP      ; 004377ab
    MOV dword ptr [ESP + 0xc],EAX       ; 004377af
    MOV EAX,dword ptr [ESP + 0x14]      ; 004377b3
        ;   Label: LAB_004377b3
    XOR EBP,EBP                         ; 004377b7
    XOR EDI,EDI                         ; 004377b9
    MOV dword ptr [ESP + 0x20],EAX      ; 004377bb
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004377bf
        ;   Label: LAB_004377bf
    ADD EAX,dword ptr [ESP + 0x20]      ; 004377c3
    CMP EDI,dword ptr [EAX]             ; 004377c7
    JGE 0x004377e5                      ; 004377c9
        ;   XREF to: 004377e5 (CONDITIONAL_JUMP)  ; LAB_004377e5
    LEA EDX,[EAX + EBP*0x1]             ; 004377cb
    MOV EAX,dword ptr [EDX + 0x4]       ; 004377ce
    MOV EDX,dword ptr [EDX + 0x44]      ; 004377d1
    ADD EDX,EAX                         ; 004377d4
    DEC EDX                             ; 004377d6
    CMP EAX,EBX                         ; 004377d7
    JGE 0x00437821                      ; 004377d9
        ;   XREF to: 00437821 (CONDITIONAL_JUMP)  ; LAB_00437821
    CMP EDX,EBX                         ; 004377db
    JGE 0x0043781f                      ; 004377dd
        ;   XREF to: 0043781f (CONDITIONAL_JUMP)  ; LAB_0043781f
    INC EDI                             ; 004377df
        ;   Label: LAB_004377df
    ADD EBP,0x4                         ; 004377e0
    JMP 0x004377bf                      ; 004377e3
        ;   XREF to: 004377bf (UNCONDITIONAL_JUMP)  ; LAB_004377bf
    MOV EDI,dword ptr [ESP + 0x14]      ; 004377e5
        ;   Label: LAB_004377e5
    MOV EAX,dword ptr [ESP + 0x10]      ; 004377e9
    MOV EBP,dword ptr [ESP + 0x28]      ; 004377ed
    MOV EDX,dword ptr [ESP + 0x48]      ; 004377f1
    MOV ECX,dword ptr [ESP + 0xc]       ; 004377f5
    DEC EBX                             ; 004377f9
    INC ESI                             ; 004377fa
    ADD EDI,0x84                        ; 004377fb
    ADD EBP,EAX                         ; 00437801
    MOV EAX,dword ptr [ESP + 0x60]      ; 00437803
    MOV dword ptr [ESP + 0x14],EDI      ; 00437807
    ADD EDX,EAX                         ; 0043780b
    MOV dword ptr [ESP + 0x28],EBP      ; 0043780d
    MOV dword ptr [ESP + 0x48],EDX      ; 00437811
    CMP EDI,ECX                         ; 00437815
    JGE 0x0043773b                      ; 00437817
        ;   XREF to: 0043773b (CONDITIONAL_JUMP)  ; LAB_0043773b
    JMP 0x004377b3                      ; 0043781d
        ;   XREF to: 004377b3 (UNCONDITIONAL_JUMP)  ; LAB_004377b3
    MOV EAX,EBX                         ; 0043781f
        ;   Label: LAB_0043781f
    CMP EDX,ESI                         ; 00437821
        ;   Label: LAB_00437821
    JLE 0x0043782b                      ; 00437823
        ;   XREF to: 0043782b (CONDITIONAL_JUMP)  ; LAB_0043782b
    CMP EAX,ESI                         ; 00437825
    JG 0x004377df                       ; 00437827
        ;   XREF to: 004377df (CONDITIONAL_JUMP)  ; LAB_004377df
    MOV EDX,ESI                         ; 00437829
    SUB EDX,EAX                         ; 0043782b
        ;   Label: LAB_0043782b
    INC EDX                             ; 0043782d
    PUSH EDX                            ; 0043782e
    MOV EDX,dword ptr [ESP + 0x4c]      ; 0043782f
    ADD EDX,EAX                         ; 00437833
    PUSH EDX                            ; 00437835
    ADD EAX,dword ptr [ESP + 0x30]      ; 00437836
    PUSH EAX                            ; 0043783a
    CALL dword ptr [ESP + 0x3c]         ; 0043783b
    ADD ESP,0xc                         ; 0043783f
    INC EDI                             ; 00437842
    ADD EBP,0x4                         ; 00437843
    JMP 0x004377bf                      ; 00437846
        ;   XREF to: 004377bf (UNCONDITIONAL_JUMP)  ; LAB_004377bf
    MOV EAX,dword ptr [ESP + 0x50]      ; 0043784b
        ;   Label: LAB_0043784b
    MOV EDX,dword ptr [ECX + 0x1c4354c] ; 0043784f
    ADD EAX,EAX                         ; 00437855
    ADD EDX,EAX                         ; 00437857
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437859
    MOV dword ptr [ESP + 0x2c],EDX      ; 0043785d
    MOV EDX,EAX                         ; 00437861
    SAR EDX,0x1f                        ; 00437863
    SUB EAX,EDX                         ; 00437866
    SAR EAX,0x1                         ; 00437868
    MOV EDX,dword ptr [ESP + 0x64]      ; 0043786a
    MOV dword ptr [ESP + 0x10],EAX      ; 0043786e
    CMP EDI,EDX                         ; 00437872
    JGE 0x0043773b                      ; 00437874
        ;   XREF to: 0043773b (CONDITIONAL_JUMP)  ; LAB_0043773b
    MOV EAX,dword ptr [ESP + 0x58]      ; 0043787a
    ADD EAX,EAX                         ; 0043787e
    MOV dword ptr [ESP + 0x1c],EAX      ; 00437880
    MOV EAX,dword ptr [ESP + 0x10]      ; 00437884
    ADD EAX,EAX                         ; 00437888
    MOV dword ptr [ESP + 0x4],EAX       ; 0043788a
    MOV EAX,dword ptr [ESP]             ; 0043788e
    MOV dword ptr [ESP + 0x18],EBP      ; 00437891
    MOV dword ptr [ESP + 0x8],EAX       ; 00437895
    MOV EAX,dword ptr [ESP + 0x18]      ; 00437899
        ;   Label: LAB_00437899
    XOR EBP,EBP                         ; 0043789d
    XOR EDI,EDI                         ; 0043789f
    MOV dword ptr [ESP + 0x24],EAX      ; 004378a1
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004378a5
        ;   Label: LAB_004378a5
    ADD EAX,dword ptr [ESP + 0x24]      ; 004378a9
    CMP EDI,dword ptr [EAX]             ; 004378ad
    JGE 0x004378cb                      ; 004378af
        ;   XREF to: 004378cb (CONDITIONAL_JUMP)  ; LAB_004378cb
    LEA EDX,[EAX + EBP*0x1]             ; 004378b1
    MOV EAX,dword ptr [EDX + 0x4]       ; 004378b4
    MOV EDX,dword ptr [EDX + 0x44]      ; 004378b7
    ADD EDX,EAX                         ; 004378ba
    DEC EDX                             ; 004378bc
    CMP EAX,EBX                         ; 004378bd
    JGE 0x00437907                      ; 004378bf
        ;   XREF to: 00437907 (CONDITIONAL_JUMP)  ; LAB_00437907
    CMP EDX,EBX                         ; 004378c1
    JGE 0x00437905                      ; 004378c3
        ;   XREF to: 00437905 (CONDITIONAL_JUMP)  ; LAB_00437905
    INC EDI                             ; 004378c5
        ;   Label: LAB_004378c5
    ADD EBP,0x4                         ; 004378c6
    JMP 0x004378a5                      ; 004378c9
        ;   XREF to: 004378a5 (UNCONDITIONAL_JUMP)  ; LAB_004378a5
    MOV EDI,dword ptr [ESP + 0x18]      ; 004378cb
        ;   Label: LAB_004378cb
    MOV EAX,dword ptr [ESP + 0x4]       ; 004378cf
    MOV EBP,dword ptr [ESP + 0x2c]      ; 004378d3
    MOV EDX,dword ptr [ESP + 0x48]      ; 004378d7
    MOV ECX,dword ptr [ESP + 0x8]       ; 004378db
    DEC EBX                             ; 004378df
    INC ESI                             ; 004378e0
    ADD EDI,0x84                        ; 004378e1
    ADD EBP,EAX                         ; 004378e7
    MOV EAX,dword ptr [ESP + 0x60]      ; 004378e9
    MOV dword ptr [ESP + 0x18],EDI      ; 004378ed
    ADD EDX,EAX                         ; 004378f1
    MOV dword ptr [ESP + 0x2c],EBP      ; 004378f3
    MOV dword ptr [ESP + 0x48],EDX      ; 004378f7
    CMP EDI,ECX                         ; 004378fb
    JGE 0x0043773b                      ; 004378fd
        ;   XREF to: 0043773b (CONDITIONAL_JUMP)  ; LAB_0043773b
    JMP 0x00437899                      ; 00437903
        ;   XREF to: 00437899 (UNCONDITIONAL_JUMP)  ; LAB_00437899
    MOV EAX,EBX                         ; 00437905
        ;   Label: LAB_00437905
    CMP EDX,ESI                         ; 00437907
        ;   Label: LAB_00437907
    JLE 0x00437911                      ; 00437909
        ;   XREF to: 00437911 (CONDITIONAL_JUMP)  ; LAB_00437911
    CMP EAX,ESI                         ; 0043790b
    JG 0x004378c5                       ; 0043790d
        ;   XREF to: 004378c5 (CONDITIONAL_JUMP)  ; LAB_004378c5
    MOV EDX,ESI                         ; 0043790f
    SUB EDX,EAX                         ; 00437911
        ;   Label: LAB_00437911
    INC EDX                             ; 00437913
    PUSH EDX                            ; 00437914
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00437915
    ADD EDX,EAX                         ; 00437919
    PUSH EDX                            ; 0043791b
    ADD EAX,EAX                         ; 0043791c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0043791e
    MOV ECX,dword ptr [ESP + 0x24]      ; 00437922
    ADD EAX,EDX                         ; 00437926
    SUB EAX,ECX                         ; 00437928
    PUSH EAX                            ; 0043792a
    CALL dword ptr [ESP + 0x3c]         ; 0043792b
    ADD ESP,0xc                         ; 0043792f
    INC EDI                             ; 00437932
    ADD EBP,0x4                         ; 00437933
    JMP 0x004378a5                      ; 00437936
        ;   XREF to: 004378a5 (UNCONDITIONAL_JUMP)  ; LAB_004378a5

