; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_3d_c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_0060b02c
;   undefined4 DAT_0060b030
;   undefined4 DAT_007303dc
;   undefined4 DAT_007303f0
;   undefined4 DAT_007303f4
;   undefined4 DAT_00730418
;   undefined4 DAT_0073041c
;   undefined4 DAT_01c6b5c0
;   undefined4 DAT_01c6b5c4
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_calculatePolygonLighting_FUN_004039d0
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_3d.c_lookupLitColor_FUN_00403990
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_light.cpp_calculateLighting_FUN_004e0e00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004046e0
        ;   Label: engine_3d.c_renderPolygonAdaptivePlaneMaskedUVOp34_FUN_004046e0
    PUSH EBP                            ; 004046e1
    MOV EBP,dword ptr [ESP + 0xc]       ; 004046e2
    LEA ESI,[EBP + 0x18]                ; 004046e6
    LEA EAX,[EBP + 0x8]                 ; 004046e9
    PUSH EAX                            ; 004046ec
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 004046ed
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 004046f2
    TEST EAX,EAX                        ; 004046f5
    JZ 0x004048bf                       ; 004046f7
        ;   XREF to: 004048bf (CONDITIONAL_JUMP)  ; LAB_004048bf
    PUSH EDI                            ; 004046fd
    PUSH EBX                            ; 004046fe
    CMP dword ptr [0x007303f4],0x0      ; 004046ff | DAT_007303f4
    JZ 0x004047a5                       ; 00404706
        ;   XREF to: 004047a5 (CONDITIONAL_JUMP)  ; LAB_004047a5
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040470c | DAT_01c6e2a0
    JNZ 0x00404784                      ; 00404713
        ;   XREF to: 00404784 (CONDITIONAL_JUMP)  ; LAB_00404784
    CMP dword ptr [0x005fba20],0x20     ; 00404715 | DAT_005fba20
    JNZ 0x00404778                      ; 0040471c
        ;   XREF to: 00404778 (CONDITIONAL_JUMP)  ; LAB_00404778
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 0040471e | DAT_01c6b5cc
    XOR EBX,EBX                         ; 00404728
        ;   Label: LAB_00404728
    MOV dword ptr [0x01c6e2b8],EBX      ; 0040472a | DAT_01c6e2b8
    MOV dword ptr [0x01c6e2b4],EBX      ; 00404730 | DAT_01c6e2b4
    MOV EAX,ESI                         ; 00404736
        ;   Label: LAB_00404736
    XOR EDX,EDX                         ; 00404738
    XOR ECX,ECX                         ; 0040473a
    XOR EBX,EBX                         ; 0040473c
    MOV ESI,dword ptr [EBP + 0x4]       ; 0040473e
        ;   Label: LAB_0040473e
    LEA ESI,[ESI + ESI*0x2]             ; 00404741
    CMP EDX,ESI                         ; 00404744
    JGE 0x004048af                      ; 00404746
        ;   XREF to: 004048af (CONDITIONAL_JUMP)  ; LAB_004048af
    MOV ESI,dword ptr [EAX]             ; 0040474c
    MOV dword ptr [ECX + 0x730418],ESI  ; 0040474e | DAT_00730418 | DAT_0073041c
    IMUL EDI,ESI,0x30                   ; 00404754
    MOV ESI,dword ptr [EAX + 0x4]       ; 00404757
    MOV dword ptr [EDI + 0x60b02c],ESI  ; 0040475a | DAT_0060b02c
    IMUL EDI,dword ptr [EAX],0x30       ; 00404760
    ADD EAX,0xc                         ; 00404763
    ADD ECX,0x4                         ; 00404766
    INC EBX                             ; 00404769
    MOV ESI,dword ptr [EAX + -0x4]      ; 0040476a
    ADD EDX,0x3                         ; 0040476d
    MOV dword ptr [EDI + 0x60b030],ESI  ; 00404770 | DAT_0060b030
    JMP 0x0040473e                      ; 00404776
        ;   XREF to: 0040473e (UNCONDITIONAL_JUMP)  ; LAB_0040473e
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404778 | DAT_01c6b5cc
        ;   Label: LAB_00404778
    JMP 0x00404728                      ; 00404782
        ;   XREF to: 00404728 (UNCONDITIONAL_JUMP)  ; LAB_00404728
    CMP dword ptr [0x005fba20],0x20     ; 00404784 | DAT_005fba20
        ;   Label: LAB_00404784
    JNZ 0x00404799                      ; 0040478b
        ;   XREF to: 00404799 (CONDITIONAL_JUMP)  ; LAB_00404799
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 0040478d | DAT_01c6b5cc
    JMP 0x00404728                      ; 00404797
        ;   XREF to: 00404728 (UNCONDITIONAL_JUMP)  ; LAB_00404728
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404799 | DAT_01c6b5cc
        ;   Label: LAB_00404799
    JMP 0x00404728                      ; 004047a3
        ;   XREF to: 00404728 (UNCONDITIONAL_JUMP)  ; LAB_00404728
    CMP dword ptr [0x007303f0],0x0      ; 004047a5 | DAT_007303f0
        ;   Label: LAB_004047a5
    JNZ 0x0040481e                      ; 004047ac
        ;   XREF to: 0040481e (CONDITIONAL_JUMP)  ; LAB_0040481e
    CMP dword ptr [0x01c6e2a0],0x0      ; 004047b2 | DAT_01c6e2a0
    JNZ 0x004047fd                      ; 004047b9
        ;   XREF to: 004047fd (CONDITIONAL_JUMP)  ; LAB_004047fd
    CMP dword ptr [0x005fba20],0x20     ; 004047bb | DAT_005fba20
    JNZ 0x004047f1                      ; 004047c2
        ;   XREF to: 004047f1 (CONDITIONAL_JUMP)  ; LAB_004047f1
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 004047c4 | DAT_01c6b5cc
    MOV EDI,0xd1                        ; 004047ce
        ;   Label: LAB_004047ce
    MOV EAX,0x3                         ; 004047d3
    PUSH EBP                            ; 004047d8
    MOV dword ptr [0x01c6e2b4],EDI      ; 004047d9 | DAT_01c6e2b4
    MOV [0x01c6e2b8],EAX                ; 004047df | DAT_01c6e2b8
    CALL engine_3d.c_calculatePolygonLighting_FUN_004039d0 ; 004047e4
        ;   XREF to: 004039d0 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_calculatePolygonLighting_FUN_004039d0()
    ADD ESP,0x4                         ; 004047e9
    JMP 0x00404736                      ; 004047ec
        ;   XREF to: 00404736 (UNCONDITIONAL_JUMP)  ; LAB_00404736
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004047f1 | DAT_01c6b5cc
        ;   Label: LAB_004047f1
    JMP 0x004047ce                      ; 004047fb
        ;   XREF to: 004047ce (UNCONDITIONAL_JUMP)  ; LAB_004047ce
    CMP dword ptr [0x005fba20],0x20     ; 004047fd | DAT_005fba20
        ;   Label: LAB_004047fd
    JNZ 0x00404812                      ; 00404804
        ;   XREF to: 00404812 (CONDITIONAL_JUMP)  ; LAB_00404812
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404806 | DAT_01c6b5cc
    JMP 0x004047ce                      ; 00404810
        ;   XREF to: 004047ce (UNCONDITIONAL_JUMP)  ; LAB_004047ce
    MOV dword ptr [0x01c6b5cc],0x561713 ; 00404812 | DAT_01c6b5cc
        ;   Label: LAB_00404812
    JMP 0x004047ce                      ; 0040481c
        ;   XREF to: 004047ce (UNCONDITIONAL_JUMP)  ; LAB_004047ce
    CMP dword ptr [0x01c6e2a0],0x0      ; 0040481e | DAT_01c6e2a0
        ;   Label: LAB_0040481e
    JNZ 0x0040488e                      ; 00404825
        ;   XREF to: 0040488e (CONDITIONAL_JUMP)  ; LAB_0040488e
    CMP dword ptr [0x005fba20],0x20     ; 00404827 | DAT_005fba20
    JNZ 0x00404882                      ; 0040482e
        ;   XREF to: 00404882 (CONDITIONAL_JUMP)  ; LAB_00404882
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00404830 | DAT_01c6b5cc
    MOV ECX,dword ptr [EBP + 0x10]      ; 0040483a
        ;   Label: LAB_0040483a
    PUSH ECX                            ; 0040483d
    MOV EBX,dword ptr [EBP + 0xc]       ; 0040483e
    MOV EAX,0xd0                        ; 00404841
    PUSH EBX                            ; 00404846
    MOV EDI,dword ptr [EBP + 0x8]       ; 00404847
    MOV EDX,0x1                         ; 0040484a
    PUSH EDI                            ; 0040484f
    MOV [0x01c6e2b4],EAX                ; 00404850 | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],EDX      ; 00404855 | DAT_01c6e2b8
    CALL engine_light.cpp_calculateLighting_FUN_004e0e00 ; 0040485b
        ;   XREF to: 004e0e00 (UNCONDITIONAL_CALL)  ; int engine_light.cpp_calculateLighting_FUN_004e0e00(int normal_x, int normal_y, int normal_z)
    ADD ESP,0xc                         ; 00404860
    MOV EAX,[0x01c6b5c4]                ; 00404863 | DAT_01c6b5c4
    PUSH EAX                            ; 00404868
    MOV EDX,dword ptr [0x007303dc]      ; 00404869 | DAT_007303dc
    PUSH EDX                            ; 0040486f
    CALL engine_3d.c_lookupLitColor_FUN_00403990 ; 00404870
        ;   XREF to: 00403990 (UNCONDITIONAL_CALL)  ; uint engine_3d.c_lookupLitColor_FUN_00403990(int color_value, int lighting_value)
    ADD ESP,0x8                         ; 00404875
    MOV [0x01c6b5c0],EAX                ; 00404878 | DAT_01c6b5c0
    JMP 0x00404736                      ; 0040487d
        ;   XREF to: 00404736 (UNCONDITIONAL_JUMP)  ; LAB_00404736
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 00404882 | DAT_01c6b5cc
        ;   Label: LAB_00404882
    JMP 0x0040483a                      ; 0040488c
        ;   XREF to: 0040483a (UNCONDITIONAL_JUMP)  ; LAB_0040483a
    CMP dword ptr [0x005fba20],0x20     ; 0040488e | DAT_005fba20
        ;   Label: LAB_0040488e
    JNZ 0x004048a3                      ; 00404895
        ;   XREF to: 004048a3 (CONDITIONAL_JUMP)  ; LAB_004048a3
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 00404897 | DAT_01c6b5cc
    JMP 0x0040483a                      ; 004048a1
        ;   XREF to: 0040483a (UNCONDITIONAL_JUMP)  ; LAB_0040483a
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004048a3 | DAT_01c6b5cc
        ;   Label: LAB_004048a3
    JMP 0x0040483a                      ; 004048ad
        ;   XREF to: 0040483a (UNCONDITIONAL_JUMP)  ; LAB_0040483a
    PUSH 0x730418                       ; 004048af | DAT_00730418
        ;   Label: LAB_004048af
    PUSH EBX                            ; 004048b4
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 004048b5
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 004048ba
    POP EBX                             ; 004048bd
    POP EDI                             ; 004048be
    MOV EDX,dword ptr [EBP + 0x4]       ; 004048bf
        ;   Label: LAB_004048bf
    LEA EAX,[EDX*0x4 + 0x0]             ; 004048c2
    SUB EAX,EDX                         ; 004048c9
    LEA EDX,[EAX*0x4 + 0x0]             ; 004048cb
    LEA EAX,[EBP + 0x18]                ; 004048d2
    ADD EAX,EDX                         ; 004048d5
    POP EBP                             ; 004048d7
    POP ESI                             ; 004048d8
    RET                                 ; 004048d9

