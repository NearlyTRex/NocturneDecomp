; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawLineAA_FUN_00439640(int x0,int y0,int x1,int y1,int color)
;
; Parameters:
; int              Stack[0x4]:4   x0
; int              Stack[0x8]:4   y0
; int              Stack[0xc]:4   x1
; int              Stack[0x10]:4   y1
; int              Stack[0x14]:4   color
;
; XREF[1]:
;   cockpit_drawsurf.cpp_CDrawSurface_drawAntiAliasedLine_FUN_0047f7a0 at 0047f824
;
; Referenced Globals:
;   undefined4 DAT_00610d40
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;
; Called Functions:
;   cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0
;   cockpit_ckptutil.c_putPixel_FUN_00439f70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439640
        ;   Label: cockpit_ckptutil.c_drawLineAA_FUN_00439640
    PUSH ESI                            ; 00439641
    PUSH EDI                            ; 00439642
    PUSH EBP                            ; 00439643
    MOV EBP,ESP                         ; 00439644
    SUB ESP,0x30                        ; 00439646
    AND ESP,0xfffffff8                  ; 00439649
    MOV ESI,dword ptr [EBP + 0x14]      ; 0043964c
    MOV EBX,dword ptr [EBP + 0x18]      ; 0043964f
    MOV EDX,0x3b800000                  ; 00439652
    MOV ECX,dword ptr [EBP + 0x20]      ; 00439657
    MOV dword ptr [ESP],EDX             ; 0043965a
    CMP EBX,ECX                         ; 0043965d
    JG 0x00439707                       ; 0043965f
        ;   XREF to: 00439707 (CONDITIONAL_JUMP)  ; LAB_00439707
    CMP dword ptr [0x00610d40],0x0      ; 00439665 | DAT_00610d40
        ;   Label: LAB_00439665
    JNZ 0x004396ba                      ; 0043966c
        ;   XREF to: 004396ba (CONDITIONAL_JUMP)  ; LAB_004396ba
    CMP ESI,dword ptr [0x01c4f008]      ; 0043966e | DAT_01c4f008
    JGE 0x00439685                      ; 00439674
        ;   XREF to: 00439685 (CONDITIONAL_JUMP)  ; LAB_00439685
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00439676
    CMP EAX,dword ptr [0x01c4f008]      ; 00439679 | DAT_01c4f008
    JL 0x00439700                       ; 0043967f
        ;   XREF to: 00439700 (CONDITIONAL_JUMP)  ; LAB_00439700
    MOV ECX,dword ptr [0x01c4f010]      ; 00439685 | DAT_01c4f010
        ;   Label: LAB_00439685
    CMP ESI,ECX                         ; 0043968b
    JLE 0x00439698                      ; 0043968d
        ;   XREF to: 00439698 (CONDITIONAL_JUMP)  ; LAB_00439698
    CMP ECX,dword ptr [EBP + 0x1c]      ; 0043968f
    JL 0x00439700                       ; 00439692
        ;   XREF to: 00439700 (CONDITIONAL_JUMP)  ; LAB_00439700
    CMP EBX,dword ptr [0x01c4f00c]      ; 00439698 | DAT_01c4f00c
        ;   Label: LAB_00439698
    JGE 0x004396ab                      ; 0043969e
        ;   XREF to: 004396ab (CONDITIONAL_JUMP)  ; LAB_004396ab
    MOV EAX,dword ptr [EBP + 0x20]      ; 004396a0
    CMP EAX,dword ptr [0x01c4f00c]      ; 004396a3 | DAT_01c4f00c
    JL 0x00439700                       ; 004396a9
        ;   XREF to: 00439700 (CONDITIONAL_JUMP)  ; LAB_00439700
    MOV ECX,dword ptr [0x01c4f014]      ; 004396ab | DAT_01c4f014
        ;   Label: LAB_004396ab
    CMP EBX,ECX                         ; 004396b1
    JLE 0x004396ba                      ; 004396b3
        ;   XREF to: 004396ba (CONDITIONAL_JUMP)  ; LAB_004396ba
    CMP ECX,dword ptr [EBP + 0x20]      ; 004396b5
    JL 0x00439700                       ; 004396b8
        ;   XREF to: 00439700 (CONDITIONAL_JUMP)  ; LAB_00439700
    MOV EAX,dword ptr [EBP + 0x24]      ; 004396ba
        ;   Label: LAB_004396ba
    PUSH EAX                            ; 004396bd
    PUSH EBX                            ; 004396be
    PUSH ESI                            ; 004396bf
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 004396c0
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 004396c5
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004396c8
    SUB EAX,ESI                         ; 004396cb
    MOV dword ptr [ESP + 0x28],EAX      ; 004396cd
    TEST EAX,EAX                        ; 004396d1
    JL 0x0043971b                       ; 004396d3
        ;   XREF to: 0043971b (CONDITIONAL_JUMP)  ; LAB_0043971b
    MOV dword ptr [ESP + 0x24],0x1      ; 004396d5
    MOV EAX,dword ptr [EBP + 0x20]      ; 004396dd
        ;   Label: LAB_004396dd
    SUB EAX,EBX                         ; 004396e0
    MOV dword ptr [ESP + 0x2c],EAX      ; 004396e2
    JNZ 0x00439744                      ; 004396e6
        ;   XREF to: 00439744 (CONDITIONAL_JUMP)  ; LAB_00439744
    MOV EDI,0xffffffff                  ; 004396e8
    MOV ECX,dword ptr [ESP + 0x28]      ; 004396ed
        ;   Label: LAB_004396ed
    ADD ECX,EDI                         ; 004396f1
    MOV dword ptr [ESP + 0x28],ECX      ; 004396f3
    CMP EDI,ECX                         ; 004396f7
    JNZ 0x0043972e                      ; 004396f9
        ;   XREF to: 0043972e (CONDITIONAL_JUMP)  ; LAB_0043972e
    LEA EAX,[EAX]                       ; 004396fb
    MOV ECX,ECX                         ; 004396fe
    MOV ESP,EBP                         ; 00439700
        ;   Label: LAB_00439700
    POP EBP                             ; 00439702
    POP EDI                             ; 00439703
    POP ESI                             ; 00439704
    POP EBX                             ; 00439705
    RET                                 ; 00439706
    MOV EAX,EBX                         ; 00439707
        ;   Label: LAB_00439707
    MOV EBX,ECX                         ; 00439709
    MOV dword ptr [EBP + 0x20],EAX      ; 0043970b
    MOV EAX,ESI                         ; 0043970e
    MOV ESI,dword ptr [EBP + 0x1c]      ; 00439710
    MOV dword ptr [EBP + 0x1c],EAX      ; 00439713
    JMP 0x00439665                      ; 00439716
        ;   XREF to: 00439665 (UNCONDITIONAL_JUMP)  ; LAB_00439665
    MOV EDI,EAX                         ; 0043971b
        ;   Label: LAB_0043971b
    MOV ECX,0xffffffff                  ; 0043971d
    NEG EDI                             ; 00439722
    MOV dword ptr [ESP + 0x24],ECX      ; 00439724
    MOV dword ptr [ESP + 0x28],EDI      ; 00439728
    JMP 0x004396dd                      ; 0043972c
        ;   XREF to: 004396dd (UNCONDITIONAL_JUMP)  ; LAB_004396dd
    MOV ECX,dword ptr [EBP + 0x24]      ; 0043972e
        ;   Label: LAB_0043972e
    PUSH ECX                            ; 00439731
    MOV EDX,dword ptr [ESP + 0x28]      ; 00439732
    PUSH EBX                            ; 00439736
    ADD ESI,EDX                         ; 00439737
    PUSH ESI                            ; 00439739
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 0043973a
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 0043973f
    JMP 0x004396ed                      ; 00439742
        ;   XREF to: 004396ed (UNCONDITIONAL_JUMP)  ; LAB_004396ed
    MOV ECX,dword ptr [ESP + 0x28]      ; 00439744
        ;   Label: LAB_00439744
    TEST ECX,ECX                        ; 00439748
    JNZ 0x0043976d                      ; 0043974a
        ;   XREF to: 0043976d (CONDITIONAL_JUMP)  ; LAB_0043976d
    MOV EDI,dword ptr [EBP + 0x24]      ; 0043974c
    PUSH EDI                            ; 0043974f
        ;   Label: LAB_0043974f
    INC EBX                             ; 00439750
    PUSH EBX                            ; 00439751
    PUSH ESI                            ; 00439752
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 00439753
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 00439758
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043975b
    DEC EAX                             ; 0043975f
    MOV dword ptr [ESP + 0x2c],EAX      ; 00439760
    JNZ 0x0043974f                      ; 00439764
        ;   XREF to: 0043974f (CONDITIONAL_JUMP)  ; LAB_0043974f
    MOV ESP,EBP                         ; 00439766
    POP EBP                             ; 00439768
    POP EDI                             ; 00439769
    POP ESI                             ; 0043976a
    POP EBX                             ; 0043976b
    RET                                 ; 0043976c
    CMP ECX,EAX                         ; 0043976d
        ;   Label: LAB_0043976d
    JNZ 0x00439798                      ; 0043976f
        ;   XREF to: 00439798 (CONDITIONAL_JUMP)  ; LAB_00439798
    MOV EDI,dword ptr [ESP + 0x24]      ; 00439771
    MOV EAX,dword ptr [EBP + 0x24]      ; 00439775
        ;   Label: LAB_00439775
    PUSH EAX                            ; 00439778
    INC EBX                             ; 00439779
    PUSH EBX                            ; 0043977a
    ADD ESI,EDI                         ; 0043977b
    PUSH ESI                            ; 0043977d
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 0043977e
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 00439783
    MOV EDX,dword ptr [ESP + 0x2c]      ; 00439786
    DEC EDX                             ; 0043978a
    MOV dword ptr [ESP + 0x2c],EDX      ; 0043978b
    JNZ 0x00439775                      ; 0043978f
        ;   XREF to: 00439775 (CONDITIONAL_JUMP)  ; LAB_00439775
    MOV ESP,EBP                         ; 00439791
    POP EBP                             ; 00439793
    POP EDI                             ; 00439794
    POP ESI                             ; 00439795
    POP EBX                             ; 00439796
    RET                                 ; 00439797
    XOR EDI,EDI                         ; 00439798
        ;   Label: LAB_00439798
    CMP ECX,EAX                         ; 0043979a
    JLE 0x00439839                      ; 0043979c
        ;   XREF to: 00439839 (CONDITIONAL_JUMP)  ; LAB_00439839
    SHL EAX,0x10                        ; 004397a2
    XOR EDX,EDX                         ; 004397a5
    DIV ECX                             ; 004397a7
    MOV dword ptr [ESP + 0x20],EAX      ; 004397a9
    MOV ECX,dword ptr [ESP + 0x28]      ; 004397ad
        ;   Label: LAB_004397ad
    DEC ECX                             ; 004397b1
    MOV dword ptr [ESP + 0x28],ECX      ; 004397b2
    JZ 0x004398d7                       ; 004397b6
        ;   XREF to: 004398d7 (CONDITIONAL_JUMP)  ; LAB_004398d7
    MOV EDX,dword ptr [ESP + 0x20]      ; 004397bc
    MOV EAX,EDI                         ; 004397c0
    ADD EDI,EDX                         ; 004397c2
    AND EDI,0xffff                      ; 004397c4
    CMP EDI,EAX                         ; 004397ca
    JBE 0x00439836                      ; 004397cc
        ;   XREF to: 00439836 (CONDITIONAL_JUMP)  ; LAB_00439836
    MOV EAX,EDI                         ; 004397ce
        ;   Label: LAB_004397ce
    XOR EDX,EDX                         ; 004397d0
    SHR EAX,0x8                         ; 004397d2
    MOV dword ptr [ESP + 0x8],EDX       ; 004397d5
    MOV dword ptr [ESP + 0x4],EAX       ; 004397d9
    FILD qword ptr [ESP + 0x4]          ; 004397dd
    FLD1                                ; 004397e1
    FADDP                               ; 004397e3
    FLD float ptr [ESP]                 ; 004397e5
    FMUL ST1                            ; 004397e8
    MOV ECX,dword ptr [ESP + 0x24]      ; 004397ea
    XOR AL,0xff                         ; 004397ee
    MOV dword ptr [ESP + 0x8],EDX       ; 004397f0
    MOV dword ptr [ESP + 0x4],EAX       ; 004397f4
    MOV EAX,dword ptr [EBP + 0x24]      ; 004397f8
    ADD ESI,ECX                         ; 004397fb
    PUSH EAX                            ; 004397fd
    FXCH                                ; 004397fe
    FSTP float ptr [ESP + 0x10]         ; 00439800
    PUSH dword ptr [ESP + 0x10]         ; 00439804
    FILD qword ptr [ESP + 0xc]          ; 00439808
    PUSH EBX                            ; 0043980c
    FMULP                               ; 0043980d
    PUSH ESI                            ; 0043980f
    FSTP float ptr [ESP + 0x20]         ; 00439810
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 ; 00439814
        ;   XREF to: 00439ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0()
    ADD ESP,0x10                        ; 00439819
    MOV EDX,dword ptr [EBP + 0x24]      ; 0043981c
    PUSH EDX                            ; 0043981f
    LEA EAX,[EBX + 0x1]                 ; 00439820
    PUSH dword ptr [ESP + 0x14]         ; 00439823
    PUSH EAX                            ; 00439827
    PUSH ESI                            ; 00439828
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 ; 00439829
        ;   XREF to: 00439ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0()
    ADD ESP,0x10                        ; 0043982e
    JMP 0x004397ad                      ; 00439831
        ;   XREF to: 004397ad (UNCONDITIONAL_JUMP)  ; LAB_004397ad
    INC EBX                             ; 00439836
        ;   Label: LAB_00439836
    JMP 0x004397ce                      ; 00439837
        ;   XREF to: 004397ce (UNCONDITIONAL_JUMP)  ; LAB_004397ce
    MOV EAX,ECX                         ; 00439839
        ;   Label: LAB_00439839
    XOR EDX,EDX                         ; 0043983b
    MOV ECX,dword ptr [ESP + 0x2c]      ; 0043983d
    SHL EAX,0x10                        ; 00439841
    DIV ECX                             ; 00439844
    MOV dword ptr [ESP + 0x1c],EAX      ; 00439846
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0043984a
        ;   Label: LAB_0043984a
    DEC EAX                             ; 0043984e
    MOV dword ptr [ESP + 0x2c],EAX      ; 0043984f
    JZ 0x004398d7                       ; 00439853
        ;   XREF to: 004398d7 (CONDITIONAL_JUMP)  ; LAB_004398d7
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00439859
    MOV EAX,EDI                         ; 0043985d
    ADD EDI,ECX                         ; 0043985f
    AND EDI,0xffff                      ; 00439861
    CMP EDI,EAX                         ; 00439867
    JBE 0x004398d1                      ; 00439869
        ;   XREF to: 004398d1 (CONDITIONAL_JUMP)  ; LAB_004398d1
    MOV EAX,EDI                         ; 0043986b
        ;   Label: LAB_0043986b
    XOR EDX,EDX                         ; 0043986d
    SHR EAX,0x8                         ; 0043986f
    MOV dword ptr [ESP + 0x8],EDX       ; 00439872
    MOV dword ptr [ESP + 0x4],EAX       ; 00439876
    FILD qword ptr [ESP + 0x4]          ; 0043987a
    FLD1                                ; 0043987e
    FADDP                               ; 00439880
    FLD float ptr [ESP]                 ; 00439882
    FMUL ST1                            ; 00439885
    XOR AL,0xff                         ; 00439887
    INC EBX                             ; 00439889
    MOV dword ptr [ESP + 0x4],EAX       ; 0043988a
    MOV EAX,dword ptr [EBP + 0x24]      ; 0043988e
    MOV dword ptr [ESP + 0x8],EDX       ; 00439891
    PUSH EAX                            ; 00439895
    FXCH                                ; 00439896
    FSTP float ptr [ESP + 0x18]         ; 00439898
    PUSH dword ptr [ESP + 0x18]         ; 0043989c
    FILD qword ptr [ESP + 0xc]          ; 004398a0
    PUSH EBX                            ; 004398a4
    FMULP                               ; 004398a5
    PUSH ESI                            ; 004398a7
    FSTP float ptr [ESP + 0x28]         ; 004398a8
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 ; 004398ac
        ;   XREF to: 00439ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0()
    ADD ESP,0x10                        ; 004398b1
    MOV EDX,dword ptr [EBP + 0x24]      ; 004398b4
    PUSH EDX                            ; 004398b7
    PUSH dword ptr [ESP + 0x1c]         ; 004398b8
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004398bc
    PUSH EBX                            ; 004398c0
    ADD EAX,ESI                         ; 004398c1
    PUSH EAX                            ; 004398c3
    CALL cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0 ; 004398c4
        ;   XREF to: 00439ca0 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_blendPixelWithSourcePalette_FUN_00439ca0()
    ADD ESP,0x10                        ; 004398c9
    JMP 0x0043984a                      ; 004398cc
        ;   XREF to: 0043984a (UNCONDITIONAL_JUMP)  ; LAB_0043984a
    ADD ESI,dword ptr [ESP + 0x24]      ; 004398d1
        ;   Label: LAB_004398d1
    JMP 0x0043986b                      ; 004398d5
        ;   XREF to: 0043986b (UNCONDITIONAL_JUMP)  ; LAB_0043986b
    MOV ECX,dword ptr [EBP + 0x24]      ; 004398d7
        ;   Label: LAB_004398d7
    PUSH ECX                            ; 004398da
    MOV EBX,dword ptr [EBP + 0x20]      ; 004398db
    PUSH EBX                            ; 004398de
    MOV ESI,dword ptr [EBP + 0x1c]      ; 004398df
    PUSH ESI                            ; 004398e2
    CALL cockpit_ckptutil.c_putPixel_FUN_00439f70 ; 004398e3
        ;   XREF to: 00439f70 (UNCONDITIONAL_CALL)  ; void cockpit_ckptutil.c_putPixel_FUN_00439f70(int x, int y, int color)
    ADD ESP,0xc                         ; 004398e8
    MOV ESP,EBP                         ; 004398eb
    POP EBP                             ; 004398ed
    POP EDI                             ; 004398ee
    POP ESI                             ; 004398ef
    POP EBX                             ; 004398f0
    RET                                 ; 004398f1

