; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_inv_cpp_FUN_004f655e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005e5fc0
;   undefined4 DAT_00612560
;   undefined4 DAT_0061b49c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d06ab4
;   undefined4 CAlphaBitmap_01d1ba98.width
;   undefined4 CAlphaBitmap_01d1ba98.height
;
; Called Functions:
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
;   core_dirmat.cpp_FUN_0045f690
;   core_inv.cpp_FUN_004f63c0
;   engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0
;   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00
;   engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210
;   engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70
;   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0
;   engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80
;   engine_matrix.c_invertTransformMatrix_FUN_005073d0
;   engine_special.cpp_FUN_00580173
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 004f655e
        ;   Label: core_inv.cpp_FUN_004f655e
    PUSH EBX                            ; 004f6560
    PUSH ESI                            ; 004f6561
    PUSH EDI                            ; 004f6562
    PUSH EBP                            ; 004f6563
    SUB ESP,0x174                       ; 004f6564
    MOV ESI,dword ptr [0x0061b49c]      ; 004f656a | DAT_0061b49c
    SUB ESI,0x2                         ; 004f6570
    MOV EDX,dword ptr [0x01d1baa8]      ; 004f6573 | CAlphaBitmap_01d1ba98.height
    MOV EBX,ESI                         ; 004f6579
    PUSH 0xffff                         ; 004f657b
    SUB EBX,EDX                         ; 004f6580
    PUSH EBX                            ; 004f6582
    PUSH 0x2                            ; 004f6583
    MOV EDI,dword ptr [0x01d1baa4]      ; 004f6585 | CAlphaBitmap_01d1ba98.width
    PUSH 0x1d1ba98                      ; 004f658b
    ADD EDI,0x2                         ; 004f6590
    CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0 ; 004f6593
        ;   XREF to: 0040d4b0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_display_FUN_0040d4b0(CAlphaBitmap * this_ptr, int x, int y, int alpha)
    ADD ESP,0x10                        ; 004f6598
    LEA EAX,[EDI + -0x2]                ; 004f659b
    MOV dword ptr [ESP + 0x170],EAX     ; 004f659e
    ADD EDI,0x2                         ; 004f65a5
    FLD double ptr [0x005e5fc0]         ; 004f65a8 | DAT_005e5fc0
    FILD dword ptr [ESP + 0x170]        ; 004f65ae
    FMUL ST1                            ; 004f65b5
    MOV dword ptr [ESP + 0x170],EDI     ; 004f65b7
    MOV EAX,ESI                         ; 004f65be
    FILD dword ptr [ESP + 0x170]        ; 004f65c0
    SUB EAX,EBX                         ; 004f65c7
    FMUL ST2                            ; 004f65c9
    MOV dword ptr [ESP + 0x170],EAX     ; 004f65cb
    ADD EBX,ESI                         ; 004f65d2
    FILD dword ptr [ESP + 0x170]        ; 004f65d4
    MOV dword ptr [ESP + 0x170],EBX     ; 004f65db
    FMUL ST3                            ; 004f65e2
    FILD dword ptr [ESP + 0x170]        ; 004f65e4
    FMULP ST4                           ; 004f65eb
    XOR ECX,ECX                         ; 004f65ed
    MOV EBP,dword ptr [0x01c50948]      ; 004f65ef | DAT_01c50948
    MOV dword ptr [0x01c50948],ECX      ; 004f65f5 | DAT_01c50948
    MOV dword ptr [ESP + 0x154],ECX     ; 004f65fb
    MOV dword ptr [ESP + 0x158],ECX     ; 004f6602
    LEA EDI,[ESP + 0x88]                ; 004f6609
    MOV EAX,[0x01d06ab4]                ; 004f6610 | DAT_01d06ab4
    FXCH ST2                            ; 004f6615
    FSTP float ptr [ESP + 0x160]        ; 004f6617
    MOV EBX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004f661e
    FSTP float ptr [ESP + 0x168]        ; 004f6625
    MOV EAX,[0x00622c18]                ; 004f662c | g_CDemonSetPtr
    FLD float ptr [EBX + 0x34]          ; 004f6631
    FSUB float ptr [EAX + 0x15acbc]     ; 004f6634
    LEA ESI,[ESP + 0x154]               ; 004f663a
    FSTP float ptr [ESP + 0x170]        ; 004f6641
    MOV EAX,dword ptr [ESP + 0x170]     ; 004f6648
    FSTP float ptr [ESP + 0x164]        ; 004f664f
    MOV dword ptr [ESP + 0x15c],EAX     ; 004f6656
    LEA EAX,[ESP + 0x88]                ; 004f665d
    LEA EBX,[ESP + 0xa0]                ; 004f6664
    PUSH EAX                            ; 004f666b
    LEA EAX,[ESP + 0x4c]                ; 004f666c
    FSTP float ptr [ESP + 0x170]        ; 004f6670
    PUSH EAX                            ; 004f6677
    MOVSD ES:EDI,ESI                    ; 004f6678
    MOVSD ES:EDI,ESI                    ; 004f6679
    MOVSD ES:EDI,ESI                    ; 004f667a
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0 ; 004f667b
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 004f6680
    LEA ESI,[ESP + 0xe8]                ; 004f6683
    XOR EDI,EDI                         ; 004f668a
    CALL engine_matrix.c_invertTransformMatrix_FUN_005073d0 ; 004f668c
        ;   XREF to: 005073d0 (UNCONDITIONAL_CALL)  ; void engine_matrix.c_invertTransformMatrix_FUN_005073d0()
    FLD float ptr [ESP + 0x164]         ; 004f6691
    FCHS                                ; 004f6698
    FSTP float ptr [ESP + 0x170]        ; 004f669a
    MOV EAX,dword ptr [ESP + 0x170]     ; 004f66a1
    FLD float ptr [ESP + 0x160]         ; 004f66a8
    MOV dword ptr [ESP + 0xd4],EAX      ; 004f66af
    LEA EAX,[ESP + 0xd0]                ; 004f66b6
    FCHS                                ; 004f66bd
    PUSH EAX                            ; 004f66bf
    LEA EAX,[ESP + 0x4c]                ; 004f66c0
    MOV dword ptr [ESP + 0xdc],EDI      ; 004f66c4
    PUSH EAX                            ; 004f66cb
    FSTP float ptr [ESP + 0xd8]         ; 004f66cc
    LEA EDI,[ESP + 0x120]               ; 004f66d3
    CALL core_dirmat.cpp_FUN_0045f690   ; 004f66da
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xf0]                ; 004f66df
    ADD ESP,0x8                         ; 004f66e6
    LEA EAX,[ESP + 0x118]               ; 004f66e9
    MOVSD ES:EDI,ESI                    ; 004f66f0
    MOVSD ES:EDI,ESI                    ; 004f66f1
    MOVSD ES:EDI,ESI                    ; 004f66f2
    CMP EBX,EAX                         ; 004f66f3
    JZ 0x004f6721                       ; 004f66f5
        ;   XREF to: 004f6721 (CONDITIONAL_JUMP)  ; LAB_004f6721
    MOV EAX,dword ptr [ESP + 0x118]     ; 004f66f7
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f66fe
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004f6705
    MOV dword ptr [ESP + 0xa4],EAX      ; 004f670c
    MOV EAX,dword ptr [ESP + 0x120]     ; 004f6713
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f671a
    FLD float ptr [ESP + 0x16c]         ; 004f6721
        ;   Label: LAB_004f6721
    LEA ESI,[ESP + 0xf4]                ; 004f6728
    FADD float ptr [ESP + 0xa4]         ; 004f672f
    SUB ESP,0x4                         ; 004f6736
    FLD float ptr [ESP + 0x16c]         ; 004f6739
    FXCH                                ; 004f6740
    FSTP float ptr [ESP]                ; 004f6742
    FADD float ptr [ESP + 0xa4]         ; 004f6745
    SUB ESP,0x4                         ; 004f674c
    LEA EDI,[ESP + 0xcc]                ; 004f674f
    FSTP float ptr [ESP]                ; 004f6756
    CALL core_inv.cpp_FUN_004f63c0      ; 004f6759
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0xfc]                ; 004f675e
    LEA EAX,[ESP + 0xcc]                ; 004f6765
    ADD ESP,0x8                         ; 004f676c
    MOV EBX,dword ptr [0x00612560]      ; 004f676f | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004f6775
    MOVSD ES:EDI,ESI                    ; 004f6776
    MOVSD ES:EDI,ESI                    ; 004f6777
    PUSH EAX                            ; 004f6778
    MOV EAX,dword ptr [EBX]             ; 004f6779
    PUSH EAX                            ; 004f677b
    CALL engine_special.cpp_FUN_00580173 ; 004f677c
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f6781
    FLD float ptr [ESP + 0x164]         ; 004f6784
    MOV EAX,dword ptr [ESP + 0x160]     ; 004f678b
    FCHS                                ; 004f6792
    FSTP float ptr [ESP + 0x170]        ; 004f6794
    MOV dword ptr [ESP + 0x13c],EAX     ; 004f679b
    MOV EAX,dword ptr [ESP + 0x170]     ; 004f67a2
    MOV dword ptr [ESP + 0x140],EAX     ; 004f67a9
    XOR EAX,EAX                         ; 004f67b0
    MOV dword ptr [ESP + 0x144],EAX     ; 004f67b2
    LEA EAX,[ESP + 0x13c]               ; 004f67b9
    PUSH EAX                            ; 004f67c0
    LEA EAX,[ESP + 0x4c]                ; 004f67c1
    LEA ESI,[ESP + 0x110]               ; 004f67c5
    PUSH EAX                            ; 004f67cc
    LEA EDI,[ESP + 0x78]                ; 004f67cd
    LEA EBX,[ESP + 0xa8]                ; 004f67d1
    CALL core_dirmat.cpp_FUN_0045f690   ; 004f67d8
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x114]               ; 004f67dd
    ADD ESP,0x8                         ; 004f67e4
    LEA EAX,[ESP + 0x70]                ; 004f67e7
    MOVSD ES:EDI,ESI                    ; 004f67eb
    MOVSD ES:EDI,ESI                    ; 004f67ec
    MOVSD ES:EDI,ESI                    ; 004f67ed
    CMP EBX,EAX                         ; 004f67ee
    JZ 0x004f6813                       ; 004f67f0
        ;   XREF to: 004f6813 (CONDITIONAL_JUMP)  ; LAB_004f6813
    MOV EAX,dword ptr [ESP + 0x70]      ; 004f67f2
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f67f6
    MOV EAX,dword ptr [ESP + 0x74]      ; 004f67fd
    MOV dword ptr [ESP + 0xa4],EAX      ; 004f6801
    MOV EAX,dword ptr [ESP + 0x78]      ; 004f6808
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f680c
    FLD float ptr [ESP + 0x16c]         ; 004f6813
        ;   Label: LAB_004f6813
    LEA ESI,[ESP + 0x148]               ; 004f681a
    FADD float ptr [ESP + 0xa4]         ; 004f6821
    SUB ESP,0x4                         ; 004f6828
    FLD float ptr [ESP + 0x16c]         ; 004f682b
    FXCH                                ; 004f6832
    FSTP float ptr [ESP]                ; 004f6834
    FADD float ptr [ESP + 0xa4]         ; 004f6837
    SUB ESP,0x4                         ; 004f683e
    LEA EDI,[ESP + 0xcc]                ; 004f6841
    FSTP float ptr [ESP]                ; 004f6848
    CALL core_inv.cpp_FUN_004f63c0      ; 004f684b
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x150]               ; 004f6850
    LEA EAX,[ESP + 0xcc]                ; 004f6857
    ADD ESP,0x8                         ; 004f685e
    MOV EBX,dword ptr [0x00612560]      ; 004f6861 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004f6867
    MOVSD ES:EDI,ESI                    ; 004f6868
    MOVSD ES:EDI,ESI                    ; 004f6869
    PUSH EAX                            ; 004f686a
    MOV EAX,dword ptr [EBX]             ; 004f686b
    ADD EAX,0x30                        ; 004f686d
    PUSH EAX                            ; 004f6870
    CALL engine_special.cpp_FUN_00580173 ; 004f6871
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    ADD ESP,0x8                         ; 004f6876
    MOV EAX,dword ptr [ESP + 0x160]     ; 004f6879
    MOV dword ptr [ESP + 0x130],EAX     ; 004f6880
    MOV EAX,dword ptr [ESP + 0x164]     ; 004f6887
    LEA ESI,[ESP + 0x7c]                ; 004f688e
    MOV dword ptr [ESP + 0x134],EAX     ; 004f6892
    LEA EAX,[ESP + 0x130]               ; 004f6899
    LEA EDI,[ESP + 0x124]               ; 004f68a0
    PUSH EAX                            ; 004f68a7
    LEA EAX,[ESP + 0x4c]                ; 004f68a8
    XOR EDX,EDX                         ; 004f68ac
    PUSH EAX                            ; 004f68ae
    LEA EBX,[ESP + 0xa8]                ; 004f68af
    MOV dword ptr [ESP + 0x140],EDX     ; 004f68b6
    CALL core_dirmat.cpp_FUN_0045f690   ; 004f68bd
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0x84]                ; 004f68c2
    ADD ESP,0x8                         ; 004f68c9
    LEA EAX,[ESP + 0x124]               ; 004f68cc
    MOVSD ES:EDI,ESI                    ; 004f68d3
    MOVSD ES:EDI,ESI                    ; 004f68d4
    MOVSD ES:EDI,ESI                    ; 004f68d5
    CMP EBX,EAX                         ; 004f68d6
    JZ 0x004f6904                       ; 004f68d8
        ;   XREF to: 004f6904 (CONDITIONAL_JUMP)  ; LAB_004f6904
    MOV EAX,dword ptr [ESP + 0x124]     ; 004f68da
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f68e1
    MOV EAX,dword ptr [ESP + 0x128]     ; 004f68e8
    MOV dword ptr [ESP + 0xa4],EAX      ; 004f68ef
    MOV EAX,dword ptr [ESP + 0x12c]     ; 004f68f6
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f68fd
    FLD float ptr [ESP + 0x16c]         ; 004f6904
        ;   Label: LAB_004f6904
    LEA ESI,[ESP + 0x94]                ; 004f690b
    FADD float ptr [ESP + 0xa4]         ; 004f6912
    SUB ESP,0x4                         ; 004f6919
    FLD float ptr [ESP + 0x16c]         ; 004f691c
    FXCH                                ; 004f6923
    FSTP float ptr [ESP]                ; 004f6925
    FADD float ptr [ESP + 0xa4]         ; 004f6928
    SUB ESP,0x4                         ; 004f692f
    LEA EDI,[ESP + 0xcc]                ; 004f6932
    FSTP float ptr [ESP]                ; 004f6939
    CALL core_inv.cpp_FUN_004f63c0      ; 004f693c
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0x9c]                ; 004f6941
    LEA EAX,[ESP + 0xcc]                ; 004f6948
    ADD ESP,0x8                         ; 004f694f
    MOV EBX,dword ptr [0x00612560]      ; 004f6952 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004f6958
    MOVSD ES:EDI,ESI                    ; 004f6959
    MOVSD ES:EDI,ESI                    ; 004f695a
    PUSH EAX                            ; 004f695b
    MOV EAX,dword ptr [EBX]             ; 004f695c
    ADD EAX,0x60                        ; 004f695e
    PUSH EAX                            ; 004f6961
    LEA ESI,[ESP + 0xc0]                ; 004f6962
    LEA EDI,[ESP + 0xb4]                ; 004f6969
    CALL engine_special.cpp_FUN_00580173 ; 004f6970
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    LEA EBX,[ESP + 0xb4]                ; 004f6975
    ADD ESP,0x8                         ; 004f697c
    XOR ECX,ECX                         ; 004f697f
    MOV EAX,dword ptr [ESP + 0x164]     ; 004f6981
    FLD float ptr [ESP + 0x160]         ; 004f6988
    MOV dword ptr [ESP + 0x104],EAX     ; 004f698f
    LEA EAX,[ESP + 0x100]               ; 004f6996
    FCHS                                ; 004f699d
    PUSH EAX                            ; 004f699f
    LEA EAX,[ESP + 0x4c]                ; 004f69a0
    MOV dword ptr [ESP + 0x10c],ECX     ; 004f69a4
    PUSH EAX                            ; 004f69ab
    FSTP float ptr [ESP + 0x108]        ; 004f69ac
    CALL core_dirmat.cpp_FUN_0045f690   ; 004f69b3
        ;   XREF to: 0045f690 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045f690()
    LEA ESI,[ESP + 0xc0]                ; 004f69b8
    ADD ESP,0x8                         ; 004f69bf
    LEA EAX,[ESP + 0xa0]                ; 004f69c2
    MOVSD ES:EDI,ESI                    ; 004f69c9
    MOVSD ES:EDI,ESI                    ; 004f69ca
    MOVSD ES:EDI,ESI                    ; 004f69cb
    CMP EAX,EBX                         ; 004f69cc
    JZ 0x004f69fa                       ; 004f69ce
        ;   XREF to: 004f69fa (CONDITIONAL_JUMP)  ; LAB_004f69fa
    MOV EAX,dword ptr [ESP + 0xac]      ; 004f69d0
    MOV dword ptr [ESP + 0xa0],EAX      ; 004f69d7
    MOV EAX,dword ptr [ESP + 0xb0]      ; 004f69de
    MOV dword ptr [ESP + 0xa4],EAX      ; 004f69e5
    MOV EAX,dword ptr [ESP + 0xb4]      ; 004f69ec
    MOV dword ptr [ESP + 0xa8],EAX      ; 004f69f3
    FLD float ptr [ESP + 0x16c]         ; 004f69fa
        ;   Label: LAB_004f69fa
    LEA ESI,[ESP + 0xdc]                ; 004f6a01
    FADD float ptr [ESP + 0xa4]         ; 004f6a08
    SUB ESP,0x4                         ; 004f6a0f
    FLD float ptr [ESP + 0x16c]         ; 004f6a12
    FXCH                                ; 004f6a19
    FSTP float ptr [ESP]                ; 004f6a1b
    FADD float ptr [ESP + 0xa4]         ; 004f6a1e
    SUB ESP,0x4                         ; 004f6a25
    LEA EDI,[ESP + 0xcc]                ; 004f6a28
    FSTP float ptr [ESP]                ; 004f6a2f
    CALL core_inv.cpp_FUN_004f63c0      ; 004f6a32
        ;   XREF to: 004f63c0 (UNCONDITIONAL_CALL)  ; undefined core_inv.cpp_FUN_004f63c0()
    LEA ESI,[ESP + 0xe4]                ; 004f6a37
    ADD ESP,0x8                         ; 004f6a3e
    MOV EAX,[0x00612560]                ; 004f6a41 | DAT_00612560
    MOVSD ES:EDI,ESI                    ; 004f6a46
    MOVSD ES:EDI,ESI                    ; 004f6a47
    MOVSD ES:EDI,ESI                    ; 004f6a48
    LEA EBX,[ESP + 0xc4]                ; 004f6a49
    MOV EAX,dword ptr [EAX]             ; 004f6a50
    PUSH EBX                            ; 004f6a52
    ADD EAX,0x90                        ; 004f6a53
    PUSH EAX                            ; 004f6a58
    XOR ESI,ESI                         ; 004f6a59
    CALL engine_special.cpp_FUN_00580173 ; 004f6a5b
        ;   XREF to: 00580173 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_FUN_00580173(SProjectedVertex * output, CVector3i * input)
    MOV EBX,0x4                         ; 004f6a60
    MOV EDX,0x1                         ; 004f6a65
    ADD ESP,0x8                         ; 004f6a6a
    MOV ECX,0x1000000                   ; 004f6a6d
    MOV dword ptr [ESP + 0x4],EBX       ; 004f6a72
    MOV dword ptr [ESP + 0x18],ESI      ; 004f6a76
    MOV dword ptr [ESP + 0x1c],ESI      ; 004f6a7a
    MOV dword ptr [ESP + 0x20],ESI      ; 004f6a7e
    MOV dword ptr [ESP + 0x24],EDX      ; 004f6a82
    MOV dword ptr [ESP + 0x28],ECX      ; 004f6a86
    MOV dword ptr [ESP + 0x2c],ESI      ; 004f6a8a
    MOV EDI,ECX                         ; 004f6a8e
    MOV dword ptr [ESP + 0x34],ECX      ; 004f6a90
    MOV dword ptr [ESP + 0x38],ECX      ; 004f6a94
    MOV ESI,0x2                         ; 004f6a98
    MOV EDX,0x3                         ; 004f6a9d
    XOR ECX,ECX                         ; 004f6aa2
    MOV dword ptr [ESP + 0x30],ESI      ; 004f6aa4
    PUSH ECX                            ; 004f6aa8
    MOV ESI,dword ptr [0x00612560]      ; 004f6aa9 | DAT_00612560
    MOV dword ptr [ESP + 0x48],EDI      ; 004f6aaf
    PUSH ESI                            ; 004f6ab3
    MOV dword ptr [ESP + 0x44],EDX      ; 004f6ab4
    MOV dword ptr [ESP + 0x48],ECX      ; 004f6ab8
    CALL engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80 ; 004f6abc
        ;   XREF to: 00483d80 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setRenderingState_FUN_00483d80(CDemonRenderer * this_ptr, int state_flag)
    ADD ESP,0x8                         ; 004f6ac1
    PUSH 0x0                            ; 004f6ac4
    MOV EDI,dword ptr [0x00612560]      ; 004f6ac6 | DAT_00612560
    PUSH EDI                            ; 004f6acc
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 004f6acd
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004f6ad2
    PUSH 0xffff                         ; 004f6ad5
    MOV EAX,[0x00612560]                ; 004f6ada | DAT_00612560
    PUSH EAX                            ; 004f6adf
    CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0 ; 004f6ae0
        ;   XREF to: 00483de0 (UNCONDITIONAL_CALL)  ; int engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_00483de0(CDemonRenderer * this_ptr, int render_alpha)
    ADD ESP,0x8                         ; 004f6ae5
    PUSH 0x1d1baac                      ; 004f6ae8
    MOV EDX,dword ptr [0x00612560]      ; 004f6aed | DAT_00612560
    PUSH EDX                            ; 004f6af3
    CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00 ; 004f6af4
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_captureTexture_FUN_00484f00(CDemonRenderer * this_ptr, SMRGLTextureBasic * texture)
    ADD ESP,0x8                         ; 004f6af9
    PUSH 0x23                           ; 004f6afc
    LEA EAX,[ESP + 0x4]                 ; 004f6afe
    PUSH EAX                            ; 004f6b02
    MOV ECX,dword ptr [0x00612560]      ; 004f6b03 | DAT_00612560
    PUSH ECX                            ; 004f6b09
    CALL engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210 ; 004f6b0a
        ;   XREF to: 00482210 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_renderTexturedPoly_FUN_00482210(CDemonRenderer * this_ptr, SMRGLPrimitivePoly * poly, int render_flags)
    ADD ESP,0xc                         ; 004f6b0f
    PUSH 0x1                            ; 004f6b12
    MOV EBX,dword ptr [0x00612560]      ; 004f6b14 | DAT_00612560
    PUSH EBX                            ; 004f6b1a
    CALL engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70 ; 004f6b1b
        ;   XREF to: 00483d70 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00483d70(CDemonRenderer * this_ptr, int enabled)
    ADD ESP,0x8                         ; 004f6b20
    MOV dword ptr [0x01c50948],EBP      ; 004f6b23 | DAT_01c50948
    ADD ESP,0x174                       ; 004f6b29
    POP EBP                             ; 004f6b2f
    POP EDI                             ; 004f6b30
    POP ESI                             ; 004f6b31
    POP EBX                             ; 004f6b32
    LEA EAX,[EAX]                       ; 004f6b33
    LEA EDX,[EDX]                       ; 004f6b39
    NOP                                 ; 004f6b3f
    RET                                 ; 004f6b40

