; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00446810(int param_1)
;
; Local Variables:
; undefined        Stack[-0x274]:1  local_274
; undefined        Stack[-0x174]:1  local_174
; undefined        Stack[-0x130]:1  local_130
; undefined4       Stack[-0x114]:4  local_114
; undefined        Stack[-0xf8]:1  local_f8
; undefined        Stack[-0x94]:1  local_94
; undefined        Stack[-0x90]:1  local_90
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004421b0 at 00442402
;
; Referenced Globals:
;   undefined4 DAT_00444645
;   string s_%s.fog_0057b9fb
;   undefined4 DAT_0057ba02
;   string s_backdrop_0057ba05
;   string s_backdrop\\%s_0057ba0e
;   string s_..\\core\\dcamera.cpp_0057ba1a
;   string s_Can't_create_%s_0057ba2e
;   string s_..\\core\\dcamera.cpp_0057ba3e
;   string s_Error_compressing_%s_0057ba52
;   string s_..\\core\\dcamera.cpp_0057ba67
;   string s_Not_all_bytes_consumed_compressi_0057ba7b
;   string s_..\\core\\dcamera.cpp_0057baa1
;   string s_Error_writing_compressed_file_%s_0057bab5
;   undefined4 DAT_0057badb
;   undefined4 DAT_005a47a0
;   ... and 16 more
;
; Called Functions:
;   FUN_00438f30
;   FUN_004390b0
;   FUN_00439370
;   FUN_00439830
;   FUN_00439880
;   FUN_004399a0
;   FUN_0043fa20
;   FUN_0043fc80
;   FUN_0043fe60
;   FUN_00446ea0
;   FUN_00456a60
;   FUN_004c8440
;   FUN_00563380
;   FUN_00563a30
;   FUN_00563c90
;   ... and 3 more
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00446810
        ;   Label: FUN_00446810
    PUSH EDI                            ; 00446811
    PUSH EBP                            ; 00446812
    SUB ESP,0x268                       ; 00446813
    MOV EDX,0x1                         ; 00446819
    PUSH 0x140d784                      ; 0044681e
    MOV ESI,0x10                        ; 00446823
    XOR ECX,ECX                         ; 00446828
    MOV dword ptr [0x012b022c],EDX      ; 0044682a | DAT_012b022c
    MOV dword ptr [0x0140d778],ECX      ; 00446830 | DAT_0140d778
    MOV dword ptr [0x0140d77c],ECX      ; 00446836 | DAT_0140d77c
    CALL FUN_0043fa20                   ; 0044683c
        ;   XREF to: 0043fa20 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fa20()
    MOV EAX,[0x0140e790]                ; 00446841 | DAT_0140e790
    MOV EDI,dword ptr [0x0140e794]      ; 00446846 | DAT_0140e794
    MOV EBP,dword ptr [0x0140e798]      ; 0044684c | DAT_0140e798
    ADD ESP,0x4                         ; 00446852
    OR EAX,EDI                          ; 00446855
    MOV dword ptr [0x0140d780],ESI      ; 00446857 | DAT_0140d780
    OR EAX,EBP                          ; 0044685d
    JNZ 0x0044686b                      ; 0044685f
        ;   XREF to: 0044686b (CONDITIONAL_JUMP)  ; LAB_0044686b
    MOV dword ptr [0x0140d780],0x1      ; 00446861 | DAT_0140d780
    MOV EDX,dword ptr [ESP + 0x278]     ; 0044686b
        ;   Label: LAB_0044686b
    PUSH EDX                            ; 00446872
    PUSH 0x57b9fb                       ; 00446873 | = "%s.fog"
    LEA EAX,[ESP + 0x8]                 ; 00446878
    PUSH EAX                            ; 0044687c
    CALL FUN_00563c90                   ; 0044687d
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 00446882
    PUSH 0x57ba02                       ; 00446885 | DAT_0057ba02
    LEA EAX,[ESP + 0x4]                 ; 0044688a
    PUSH EAX                            ; 0044688e
    PUSH 0x57ba05                       ; 0044688f | = "backdrop"
    CALL FUN_00456a60                   ; 00446894
        ;   XREF to: 00456a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00456a60()
    ADD ESP,0xc                         ; 00446899
    TEST EAX,EAX                        ; 0044689c
    JNZ 0x00446ded                      ; 0044689e
        ;   XREF to: 00446ded (CONDITIONAL_JUMP)  ; LAB_00446ded
    MOV EAX,ESP                         ; 004468a4
    PUSH EAX                            ; 004468a6
    PUSH 0x57ba0e                       ; 004468a7 | = "backdrop\\%s"
    LEA EAX,[ESP + 0x184]               ; 004468ac
    PUSH EAX                            ; 004468b3
    CALL FUN_00563c90                   ; 004468b4
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00563c90()
    ADD ESP,0xc                         ; 004468b9
    MOV ECX,dword ptr [0x005a47a0]      ; 004468bc | DAT_005a47a0
    PUSH ECX                            ; 004468c2
    PUSH 0x110                          ; 004468c3
    LEA EAX,[ESP + 0x184]               ; 004468c8
    PUSH EAX                            ; 004468cf
    PUSH 0x0                            ; 004468d0
    LEA EAX,[ESP + 0x110]               ; 004468d2
    PUSH EAX                            ; 004468d9
    CALL FUN_0056511e                   ; 004468da
        ;   XREF to: 0056511e (UNCONDITIONAL_CALL)  ; undefined FUN_0056511e()
    ADD ESP,0x14                        ; 004468df
    CMP dword ptr [ESP + 0x160],0x0     ; 004468e2
    JZ 0x00446917                       ; 004468ea
        ;   XREF to: 00446917 (CONDITIONAL_JUMP)  ; LAB_00446917
    LEA EAX,[ESP + 0x17c]               ; 004468ec
    PUSH EAX                            ; 004468f3
    MOV ESI,0x57ba1a                    ; 004468f4 | = "..\\core\\dcamera.cpp"
    MOV EDI,0x12d0                      ; 004468f9
    PUSH 0x57ba2e                       ; 004468fe | = "Can't create %s"
    MOV dword ptr [0x01cc4800],ESI      ; 00446903 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00446909 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0044690f
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00446914
    PUSH 0x1000                         ; 00446917
        ;   Label: LAB_00446917
    PUSH 0x140d784                      ; 0044691c
    LEA EAX,[ESP + 0x14c]               ; 00446921
    PUSH EAX                            ; 00446928
    CALL FUN_00565a13                   ; 00446929
        ;   XREF to: 00565a13 (UNCONDITIONAL_CALL)  ; undefined FUN_00565a13()
    MOV EBP,dword ptr [0x0140e7a0]      ; 0044692e | DAT_0140e7a0
    ADD ESP,0xc                         ; 00446934
    TEST EBP,EBP                        ; 00446937
    JZ 0x00446e00                       ; 00446939
        ;   XREF to: 00446e00 (CONDITIONAL_JUMP)  ; LAB_00446e00
    PUSH EBX                            ; 0044693f
    MOV EAX,[0x005ad4b8]                ; 00446940 | DAT_005ad4b8
    PUSH 0x3                            ; 00446945
    MOV dword ptr [ESP + 0x22c],EAX     ; 00446947 | DAT_00444645
    LEA EAX,[ESP + 0x22c]               ; 0044694e
    PUSH EAX                            ; 00446955
    LEA EAX,[ESP + 0x150]               ; 00446956
    PUSH EAX                            ; 0044695d
    CALL FUN_00565a13                   ; 0044695e
        ;   XREF to: 00565a13 (UNCONDITIONAL_CALL)  ; undefined FUN_00565a13()
    ADD ESP,0xc                         ; 00446963
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446966
    FLD double ptr [0x0057badb]         ; 0044696d | DAT_0057badb
    FLD float ptr [EAX + 0x104]         ; 00446973
    FMUL ST1                            ; 00446979
    CALL FUN_00563a30                   ; 0044697b
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x21c]       ; 00446980
    FLD float ptr [EAX + 0x108]         ; 00446987
    FMUL ST1                            ; 0044698d
    PUSH 0x6                            ; 0044698f
    CALL FUN_00563a30                   ; 00446991
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    FISTP dword ptr [ESP + 0x224]       ; 00446996
    FMUL float ptr [EAX + 0x10c]        ; 0044699d
    PUSH 0x10000                        ; 004469a3
    LEA EAX,[ESP + 0x1ec]               ; 004469a8
    CALL FUN_00563a30                   ; 004469af
        ;   XREF to: 00563a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00563a30()
    PUSH EAX                            ; 004469b4
    FISTP dword ptr [ESP + 0x230]       ; 004469b5
    CALL FUN_00439830                   ; 004469bc
        ;   XREF to: 00439830 (UNCONDITIONAL_CALL)  ; undefined FUN_00439830()
    ADD ESP,0xc                         ; 004469c1
    LEA EAX,[ESP + 0x1e4]               ; 004469c4
    PUSH EAX                            ; 004469cb
    CALL FUN_00439880                   ; 004469cc
        ;   XREF to: 00439880 (UNCONDITIONAL_CALL)  ; undefined FUN_00439880()
    ADD ESP,0x4                         ; 004469d1
    XOR EAX,EAX                         ; 004469d4
    MOV EDX,dword ptr [0x0140d780]      ; 004469d6 | DAT_0140d780
    MOV dword ptr [ESP + 0x264],EAX     ; 004469dc
    TEST EDX,EDX                        ; 004469e3
    JLE 0x00446d94                      ; 004469e5
        ;   XREF to: 00446d94 (CONDITIONAL_JUMP)  ; LAB_00446d94
    MOV dword ptr [ESP + 0x234],EAX     ; 004469eb
    MOV dword ptr [ESP + 0x238],0xfffed400 ; 004469f2
    PUSH 0x0                            ; 004469fd
        ;   Label: LAB_004469fd
    MOV EDX,dword ptr [ESP + 0x268]     ; 004469ff
    PUSH EDX                            ; 00446a06
    PUSH 0x140d784                      ; 00446a07
    CALL FUN_0043fe60                   ; 00446a0c
        ;   XREF to: 0043fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fe60()
    ADD ESP,0xc                         ; 00446a11
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446a14
    MOV ECX,0x1                         ; 00446a1b
    MOV EBX,dword ptr [EAX + 0x154]     ; 00446a20
    MOV dword ptr [ESP + 0x250],ECX     ; 00446a26
    CMP EBX,ECX                         ; 00446a2d
    JLE 0x00446b4d                      ; 00446a2f
        ;   XREF to: 00446b4d (CONDITIONAL_JUMP)  ; LAB_00446b4d
    MOV EDX,0x140                       ; 00446a35
    MOV ECX,0xf00                       ; 00446a3a
    MOV EAX,0x500                       ; 00446a3f
    MOV dword ptr [ESP + 0x244],EDX     ; 00446a44
    MOV dword ptr [ESP + 0x23c],ECX     ; 00446a4b
    MOV dword ptr [ESP + 0x248],EAX     ; 00446a52
    MOV EDI,0x7f7378                    ; 00446a59
        ;   Label: LAB_00446a59
    MOV EBX,dword ptr [ESP + 0x23c]     ; 00446a5e
    MOV ESI,dword ptr [ESP + 0x244]     ; 00446a65
    MOV EBP,dword ptr [ESP + 0x248]     ; 00446a6c
    ADD EDI,EBX                         ; 00446a73
    MOV EBX,0x12ceb78                   ; 00446a75
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446a7a
    ADD EBX,ESI                         ; 00446a81
    MOV ESI,0xac2af8                    ; 00446a83
    MOV EDX,dword ptr [EAX + 0x150]     ; 00446a88
    ADD ESI,EBP                         ; 00446a8e
    MOV EBP,0x1                         ; 00446a90
    CMP EDX,EBP                         ; 00446a95
    JLE 0x00446aed                      ; 00446a97
        ;   XREF to: 00446aed (CONDITIONAL_JUMP)  ; LAB_00446aed
    MOV EAX,dword ptr [ESI]             ; 00446a99 | DAT_00ac2ff8 | DAT_00ac34f8 | DAT_00ac34fc
        ;   Label: LAB_00446a99
    CMP EAX,0x7fffffff                  ; 00446a9b
    JZ 0x00446e1b                       ; 00446aa0
        ;   XREF to: 00446e1b (CONDITIONAL_JUMP)  ; LAB_00446e1b
    PUSH EAX                            ; 00446aa6
    PUSH EDI                            ; 00446aa7
    LEA EAX,[ESP + 0x224]               ; 00446aa8
    PUSH EAX                            ; 00446aaf
    PUSH 0x140d784                      ; 00446ab0
    CALL FUN_0043fc80                   ; 00446ab5
        ;   XREF to: 0043fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0043fc80()
    IMUL EAX,EAX,0xff                   ; 00446aba
    SHR EAX,0xe                         ; 00446ac0
    ADD ESP,0x10                        ; 00446ac3
    CMP EAX,0xff                        ; 00446ac6
    JBE 0x00446ad2                      ; 00446acb
        ;   XREF to: 00446ad2 (CONDITIONAL_JUMP)  ; LAB_00446ad2
    MOV EAX,0xff                        ; 00446acd
    MOV byte ptr [EBX],AL               ; 00446ad2 | DAT_012cecb8
        ;   Label: LAB_00446ad2
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446ad4
        ;   Label: LAB_00446ad4
    ADD EDI,0xc                         ; 00446adb
    INC EBX                             ; 00446ade
    INC EBP                             ; 00446adf
    MOV ECX,dword ptr [EAX + 0x150]     ; 00446ae0
    ADD ESI,0x4                         ; 00446ae6
    CMP EBP,ECX                         ; 00446ae9
    JL 0x00446a99                       ; 00446aeb
        ;   XREF to: 00446a99 (CONDITIONAL_JUMP)  ; LAB_00446a99
    MOV ESI,dword ptr [ESP + 0x248]     ; 00446aed
        ;   Label: LAB_00446aed
    MOV EDI,dword ptr [ESP + 0x244]     ; 00446af4
    MOV EBP,dword ptr [ESP + 0x23c]     ; 00446afb
    MOV EAX,dword ptr [ESP + 0x250]     ; 00446b02
    MOV EDX,dword ptr [ESP + 0x27c]     ; 00446b09
    ADD ESI,0x500                       ; 00446b10
    ADD EDI,0x140                       ; 00446b16
    ADD EBP,0xf00                       ; 00446b1c
    INC EAX                             ; 00446b22
    MOV ECX,dword ptr [EDX + 0x154]     ; 00446b23
    MOV dword ptr [ESP + 0x248],ESI     ; 00446b29
    MOV dword ptr [ESP + 0x244],EDI     ; 00446b30
    MOV dword ptr [ESP + 0x23c],EBP     ; 00446b37
    MOV dword ptr [ESP + 0x250],EAX     ; 00446b3e
    CMP EAX,ECX                         ; 00446b45
    JL 0x00446a59                       ; 00446b47
        ;   XREF to: 00446a59 (CONDITIONAL_JUMP)  ; LAB_00446a59
    MOV EBX,dword ptr [ESP + 0x264]     ; 00446b4d
        ;   Label: LAB_00446b4d
    PUSH EBX                            ; 00446b54
    MOV ESI,dword ptr [ESP + 0x280]     ; 00446b55
    PUSH ESI                            ; 00446b5c
    XOR EDI,EDI                         ; 00446b5d
    CALL FUN_00446ea0                   ; 00446b5f
        ;   XREF to: 00446ea0 (UNCONDITIONAL_CALL)  ; undefined FUN_00446ea0()
    ADD ESP,0x8                         ; 00446b64
    MOV EBP,dword ptr [ESI + 0x154]     ; 00446b67
    MOV dword ptr [ESP + 0x24c],EDI     ; 00446b6d
    TEST EBP,EBP                        ; 00446b74
    JLE 0x00446cd4                      ; 00446b76
        ;   XREF to: 00446cd4 (CONDITIONAL_JUMP)  ; LAB_00446cd4
    MOV EAX,dword ptr [ESP + 0x238]     ; 00446b7c
    MOV dword ptr [ESP + 0x254],EDI     ; 00446b83
    MOV dword ptr [ESP + 0x25c],EAX     ; 00446b8a
    MOV dword ptr [ESP + 0x230],EAX     ; 00446b91
    MOV EAX,dword ptr [ESP + 0x234]     ; 00446b98
    XOR ECX,ECX                         ; 00446b9f
    MOV dword ptr [ESP + 0x258],EAX     ; 00446ba1
    MOV dword ptr [ESP + 0x240],EAX     ; 00446ba8
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446baf
        ;   Label: LAB_00446baf
    MOV EDX,ECX                         ; 00446bb6
    MOV ESI,dword ptr [EAX + 0x150]     ; 00446bb8
    MOV EBX,ECX                         ; 00446bbe
    CMP ECX,ESI                         ; 00446bc0
    JGE 0x00446c88                      ; 00446bc2
        ;   XREF to: 00446c88 (CONDITIONAL_JUMP)  ; LAB_00446c88
    MOV EAX,dword ptr [ESP + 0x254]     ; 00446bc8
    MOV EDI,dword ptr [ESP + 0x240]     ; 00446bcf
    MOV dword ptr [ESP + 0x268],EAX     ; 00446bd6
    MOV ESI,EAX                         ; 00446bdd
    MOV dword ptr [ESP + 0x260],EAX     ; 00446bdf
    MOV EAX,dword ptr [ESP + 0x258]     ; 00446be6
        ;   Label: LAB_00446be6
    ADD EAX,dword ptr [ESP + 0x268]     ; 00446bed
    MOV AL,byte ptr [EDX + EAX*0x1 + 0x12e1778] ; 00446bf4
    MOV EBP,dword ptr [ESP + 0x264]     ; 00446bfb
    AND EAX,0xff                        ; 00446c02
    CMP ECX,EBP                         ; 00446c07
    JGE 0x00446c23                      ; 00446c09
        ;   XREF to: 00446c23 (CONDITIONAL_JUMP)  ; LAB_00446c23
    MOV EBP,dword ptr [ESP + 0x25c]     ; 00446c0b
    ADD EBP,dword ptr [ESP + 0x268]     ; 00446c12
    MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x12e1778] ; 00446c19
    SUB EAX,EBP                         ; 00446c21
    SAR EAX,0x2                         ; 00446c23
        ;   Label: LAB_00446c23
    SUB EAX,EBX                         ; 00446c26
    CMP EAX,-0x20                       ; 00446c28
    JGE 0x00446e23                      ; 00446c2b
        ;   XREF to: 00446e23 (CONDITIONAL_JUMP)  ; LAB_00446e23
    MOV EAX,0xffffffe0                  ; 00446c31
    MOV byte ptr [ESI + 0x12ceb78],AL   ; 00446c36
        ;   Label: LAB_00446c36
    ADD EAX,EBX                         ; 00446c3c
    MOV EBP,dword ptr [ESP + 0x264]     ; 00446c3e
    LEA EBX,[EAX*0x4 + 0x0]             ; 00446c45
    CMP ECX,EBP                         ; 00446c4c
    JGE 0x00446c68                      ; 00446c4e
        ;   XREF to: 00446c68 (CONDITIONAL_JUMP)  ; LAB_00446c68
    MOV EBP,dword ptr [ESP + 0x230]     ; 00446c50
    ADD EBP,dword ptr [ESP + 0x260]     ; 00446c57
    MOVZX EBP,byte ptr [EDX + EBP*0x1 + 0x12e1778] ; 00446c5e
    ADD EBX,EBP                         ; 00446c66
    MOV byte ptr [EDI + 0x12e1778],BL   ; 00446c68
        ;   Label: LAB_00446c68
    MOV EBX,EAX                         ; 00446c6e
    MOV EAX,dword ptr [ESP + 0x27c]     ; 00446c70
    INC ESI                             ; 00446c77
    INC EDX                             ; 00446c78
    MOV EBP,dword ptr [EAX + 0x150]     ; 00446c79
    INC EDI                             ; 00446c7f
    CMP EDX,EBP                         ; 00446c80
    JL 0x00446be6                       ; 00446c82
        ;   XREF to: 00446be6 (CONDITIONAL_JUMP)  ; LAB_00446be6
    MOV EBX,dword ptr [ESP + 0x254]     ; 00446c88
        ;   Label: LAB_00446c88
    MOV ESI,dword ptr [ESP + 0x240]     ; 00446c8f
    MOV EDI,dword ptr [ESP + 0x24c]     ; 00446c96
    MOV EDX,dword ptr [ESP + 0x27c]     ; 00446c9d
    ADD EBX,0x140                       ; 00446ca4
    ADD ESI,0x140                       ; 00446caa
    INC EDI                             ; 00446cb0
    MOV EBP,dword ptr [EDX + 0x154]     ; 00446cb1
    MOV dword ptr [ESP + 0x254],EBX     ; 00446cb7
    MOV dword ptr [ESP + 0x240],ESI     ; 00446cbe
    MOV dword ptr [ESP + 0x24c],EDI     ; 00446cc5
    CMP EDI,EBP                         ; 00446ccc
    JL 0x00446baf                       ; 00446cce
        ;   XREF to: 00446baf (CONDITIONAL_JUMP)  ; LAB_00446baf
    MOV dword ptr [ESP + 0x22c],0x12c00 ; 00446cd4
        ;   Label: LAB_00446cd4
    LEA EAX,[ESP + 0x148]               ; 00446cdf
    PUSH EAX                            ; 00446ce6
    LEA EAX,[ESP + 0x230]               ; 00446ce7
    PUSH EAX                            ; 00446cee
    PUSH 0x12ceb78                      ; 00446cef
    LEA EAX,[ESP + 0x1f0]               ; 00446cf4
    PUSH EAX                            ; 00446cfb
    CALL FUN_004390b0                   ; 00446cfc
        ;   XREF to: 004390b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004390b0()
    ADD ESP,0x10                        ; 00446d01
    TEST EAX,EAX                        ; 00446d04
    JZ 0x00446e36                       ; 00446d06
        ;   XREF to: 00446e36 (CONDITIONAL_JUMP)  ; LAB_00446e36
    CMP dword ptr [ESP + 0x22c],0x0     ; 00446d0c
        ;   Label: LAB_00446d0c
    JZ 0x00446d41                       ; 00446d14
        ;   XREF to: 00446d41 (CONDITIONAL_JUMP)  ; LAB_00446d41
    LEA EAX,[ESP + 0x180]               ; 00446d16
    PUSH EAX                            ; 00446d1d
    MOV ESI,0x57ba67                    ; 00446d1e | = "..\\core\\dcamera.cpp"
    MOV EDI,0x133f                      ; 00446d23
    PUSH 0x57ba7b                       ; 00446d28 | = "Not all bytes consumed compressing %s"
    MOV dword ptr [0x01cc4800],ESI      ; 00446d2d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00446d33 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00446d39
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00446d3e
    CMP dword ptr [ESP + 0x164],0x0     ; 00446d41
        ;   Label: LAB_00446d41
    JNZ 0x00446e66                      ; 00446d49
        ;   XREF to: 00446e66 (CONDITIONAL_JUMP)  ; LAB_00446e66
    MOV ECX,dword ptr [ESP + 0x234]     ; 00446d4f
        ;   Label: LAB_00446d4f
    MOV EBX,dword ptr [ESP + 0x238]     ; 00446d56
    MOV ESI,dword ptr [ESP + 0x264]     ; 00446d5d
    MOV EDI,dword ptr [0x0140d780]      ; 00446d64 | DAT_0140d780
    ADD ECX,0x12c00                     ; 00446d6a
    ADD EBX,0x12c00                     ; 00446d70
    INC ESI                             ; 00446d76
    MOV dword ptr [ESP + 0x234],ECX     ; 00446d77
    MOV dword ptr [ESP + 0x238],EBX     ; 00446d7e
    MOV dword ptr [ESP + 0x264],ESI     ; 00446d85
    CMP ESI,EDI                         ; 00446d8c
    JL 0x004469fd                       ; 00446d8e
        ;   XREF to: 004469fd (CONDITIONAL_JUMP)  ; LAB_004469fd
    LEA EAX,[ESP + 0x148]               ; 00446d94
        ;   Label: LAB_00446d94
    PUSH EAX                            ; 00446d9b
    LEA EAX,[ESP + 0x1e8]               ; 00446d9c
    PUSH EAX                            ; 00446da3
    CALL FUN_004399a0                   ; 00446da4
        ;   XREF to: 004399a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004399a0()
    ADD ESP,0x8                         ; 00446da9
    PUSH 0x0                            ; 00446dac
    LEA EAX,[ESP + 0x1ec]               ; 00446dae
    PUSH EAX                            ; 00446db5
    CALL FUN_00439370                   ; 00446db6
        ;   XREF to: 00439370 (UNCONDITIONAL_CALL)  ; undefined FUN_00439370()
    ADD ESP,0x8                         ; 00446dbb
    PUSH 0x1                            ; 00446dbe
    LEA EAX,[ESP + 0x1e8]               ; 00446dc0
    PUSH EAX                            ; 00446dc7
    CALL FUN_00438f30                   ; 00446dc8
        ;   XREF to: 00438f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00438f30()
    ADD ESP,0x8                         ; 00446dcd
    PUSH 0x0                            ; 00446dd0
    LEA EAX,[ESP + 0x108]               ; 00446dd2
    PUSH EAX                            ; 00446dd9
    CALL FUN_005651ca                   ; 00446dda
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; undefined FUN_005651ca()
    ADD ESP,0x8                         ; 00446ddf
    POP EBX                             ; 00446de2
    ADD ESP,0x268                       ; 00446de3
    POP EBP                             ; 00446de9
    POP EDI                             ; 00446dea
    POP ESI                             ; 00446deb
    RET                                 ; 00446dec
    PUSH EAX                            ; 00446ded
        ;   Label: LAB_00446ded
    CALL FUN_00563380                   ; 00446dee
        ;   XREF to: 00563380 (UNCONDITIONAL_CALL)  ; undefined FUN_00563380()
    ADD ESP,0x4                         ; 00446df3
    ADD ESP,0x268                       ; 00446df6
    POP EBP                             ; 00446dfc
    POP EDI                             ; 00446dfd
    POP ESI                             ; 00446dfe
    RET                                 ; 00446dff
    PUSH EBP                            ; 00446e00
        ;   Label: LAB_00446e00
    LEA EAX,[ESP + 0x104]               ; 00446e01
    PUSH EAX                            ; 00446e08
    CALL FUN_005651ca                   ; 00446e09
        ;   XREF to: 005651ca (UNCONDITIONAL_CALL)  ; undefined FUN_005651ca()
    ADD ESP,0x8                         ; 00446e0e
    ADD ESP,0x268                       ; 00446e11
    POP EBP                             ; 00446e17
    POP EDI                             ; 00446e18
    POP ESI                             ; 00446e19
    RET                                 ; 00446e1a
    MOV byte ptr [EBX],0xff             ; 00446e1b | DAT_012cedf8
        ;   Label: LAB_00446e1b
    JMP 0x00446ad4                      ; 00446e1e
        ;   XREF to: 00446ad4 (UNCONDITIONAL_JUMP)  ; LAB_00446ad4
    CMP EAX,0x3f                        ; 00446e23
        ;   Label: LAB_00446e23
    JLE 0x00446c36                      ; 00446e26
        ;   XREF to: 00446c36 (CONDITIONAL_JUMP)  ; LAB_00446c36
    MOV EAX,0x3f                        ; 00446e2c
    JMP 0x00446c36                      ; 00446e31
        ;   XREF to: 00446c36 (UNCONDITIONAL_JUMP)  ; LAB_00446c36
    LEA EAX,[ESP + 0x180]               ; 00446e36
        ;   Label: LAB_00446e36
    PUSH EAX                            ; 00446e3d
    MOV EDX,0x57ba3e                    ; 00446e3e | = "..\\core\\dcamera.cpp"
    MOV ECX,0x133d                      ; 00446e43
    PUSH 0x57ba52                       ; 00446e48 | = "Error compressing %s"
    MOV dword ptr [0x01cc4800],EDX      ; 00446e4d | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00446e53 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00446e59
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00446e5e
    JMP 0x00446d0c                      ; 00446e61
        ;   XREF to: 00446d0c (UNCONDITIONAL_JUMP)  ; LAB_00446d0c
    MOV dword ptr [0x01cc4800],0x57baa1 ; 00446e66 | DAT_01cc4800 | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_00446e66
    LEA EAX,[ESP + 0x180]               ; 00446e70
    PUSH EAX                            ; 00446e77
    MOV EDX,0x1340                      ; 00446e78
    PUSH 0x57bab5                       ; 00446e7d | = "Error writing compressed file %s"
    MOV dword ptr [0x01cc4804],EDX      ; 00446e82 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00446e88
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 00446e8d
    JMP 0x00446d4f                      ; 00446e90
        ;   XREF to: 00446d4f (UNCONDITIONAL_JUMP)  ; LAB_00446d4f

