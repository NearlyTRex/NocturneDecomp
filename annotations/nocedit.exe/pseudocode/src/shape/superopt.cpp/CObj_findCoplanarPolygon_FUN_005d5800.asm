; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl shape_superopt_cpp_CObj_findCoplanarPolygon_FUN_005d5800(CObj *this_ptr,double coplanar_threshold,CPoly *search_polygon)
;
; Parameters:
; CObj *           Stack[0x4]:4   this_ptr
; double           Stack[0x8]:8   coplanar_threshold
; CPoly *          Stack[0x10]:4   search_polygon
; Local Variables:
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4[6]    Stack[-0x40]:24  local_40
; int              Stack[-0x28]:4  local_28
; CP3D *           Stack[-0x24]:4  local_24
; uint             Stack[-0x20]:4  local_20
; uint             Stack[-0x1c]:4  local_1c
; CPoly *          Stack[-0x18]:4  local_18
; CP3D *           Stack[-0x14]:4  local_14
;
; Called Functions:
;   shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005d5800
        ;   Label: shape_superopt.cpp_CObj_findCoplanarPolygon_FUN_005d5800
    PUSH ESI                            ; 005d5801
    PUSH EDI                            ; 005d5802
    PUSH EBP                            ; 005d5803
    MOV EBP,ESP                         ; 005d5804
    SUB ESP,0x50                        ; 005d5806
    AND ESP,0xfffffff8                  ; 005d5809
    MOV EDX,dword ptr [EBP + 0x20]      ; 005d580c
    TEST EDX,EDX                        ; 005d580f
    JNZ 0x005d5855                      ; 005d5811
        ;   XREF to: 005d5855 (CONDITIONAL_JUMP)  ; LAB_005d5855
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5813
    CMP dword ptr [EAX + 0x8],0x0       ; 005d5816
    JNZ 0x005d5825                      ; 005d581a
        ;   XREF to: 005d5825 (CONDITIONAL_JUMP)  ; LAB_005d5825
    XOR EAX,EAX                         ; 005d581c
    MOV ESP,EBP                         ; 005d581e
        ;   Label: LAB_005d581e
    POP EBP                             ; 005d5820
    POP EDI                             ; 005d5821
    POP ESI                             ; 005d5822
    POP EBX                             ; 005d5823
    RET                                 ; 005d5824
    PUSH 0x2000                         ; 005d5825
        ;   Label: LAB_005d5825
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d582a
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d582d
    PUSH EBX                            ; 005d5830
    CALL dword ptr [EAX + 0x84]         ; 005d5831
    ADD ESP,0x8                         ; 005d5837
    MOV ESI,dword ptr [EBX + 0xc]       ; 005d583a
    PUSH ESI                            ; 005d583d
    MOV EDI,dword ptr [EBP + 0x1c]      ; 005d583e
    PUSH EDI                            ; 005d5841
    MOV EDX,dword ptr [EBP + 0x18]      ; 005d5842
    PUSH EDX                            ; 005d5845
    MOV EAX,dword ptr [EBX + 0x18]      ; 005d5846
    PUSH EBX                            ; 005d5849
    CALL dword ptr [EAX + 0xd8]         ; 005d584a
    ADD ESP,0x10                        ; 005d5850
    JMP 0x005d581e                      ; 005d5853
        ;   XREF to: 005d581e (UNCONDITIONAL_JUMP)  ; LAB_005d581e
    MOV EAX,EDX                         ; 005d5855
        ;   Label: LAB_005d5855
    MOV DL,byte ptr [EDX + 0x61]        ; 005d5857
    OR DL,0x20                          ; 005d585a
    MOV byte ptr [EAX + 0x61],DL        ; 005d585d
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5860
    FLD1                                ; 005d5863
    MOV EAX,dword ptr [EAX + 0xc]       ; 005d5865
    XOR EBX,EBX                         ; 005d5868
    MOV dword ptr [ESP + 0x48],EAX      ; 005d586a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d586e
    FSUB double ptr [EBP + 0x18]        ; 005d5871
    MOV dword ptr [ESP + 0x40],EBX      ; 005d5874
    MOV ESI,dword ptr [EAX + 0x8]       ; 005d5878
    FSTP double ptr [ESP]               ; 005d587b
    TEST ESI,ESI                        ; 005d587e
    JBE 0x005d58f2                      ; 005d5880
        ;   XREF to: 005d58f2 (CONDITIONAL_JUMP)  ; LAB_005d58f2
    MOV EAX,dword ptr [EBP + 0x20]      ; 005d5882
    MOV ESI,dword ptr [ESP + 0x48]      ; 005d5885
    MOV EDI,dword ptr [ESP + 0x48]      ; 005d5889
    MOV EDX,dword ptr [EBP + 0x20]      ; 005d588d
    ADD EAX,0x40                        ; 005d5890
    ADD ESI,0x40                        ; 005d5893
    ADD EDI,0x4                         ; 005d5896
    ADD EDX,0x4                         ; 005d5899
    MOV dword ptr [ESP + 0x3c],EAX      ; 005d589c
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d58a0
        ;   Label: LAB_005d58a0
    TEST byte ptr [EAX + 0x61],0x20     ; 005d58a4
    JNZ 0x005d58ce                      ; 005d58a8
        ;   XREF to: 005d58ce (CONDITIONAL_JUMP)  ; LAB_005d58ce
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005d58aa
    FLD double ptr [ESI + 0x8]          ; 005d58ae
    FMUL double ptr [EAX + 0x8]         ; 005d58b1
    FLD double ptr [ESI]                ; 005d58b4
    FMUL double ptr [EAX]               ; 005d58b6
    FADDP                               ; 005d58b8
    FLD double ptr [ESI + 0x10]         ; 005d58ba
    FMUL double ptr [EAX + 0x10]        ; 005d58bd
    FADDP                               ; 005d58c0
    FCOMP double ptr [ESP]              ; 005d58c2
    FNSTSW AX                           ; 005d58c5
    SAHF                                ; 005d58c7
    JNC 0x005d5984                      ; 005d58c8
        ;   XREF to: 005d5984 (CONDITIONAL_JUMP)  ; LAB_005d5984
    MOV ECX,dword ptr [ESP + 0x48]      ; 005d58ce
        ;   Label: LAB_005d58ce
    MOV EAX,dword ptr [ESP + 0x40]      ; 005d58d2
    ADD ECX,0x68                        ; 005d58d6
    ADD ESI,0x68                        ; 005d58d9
    MOV dword ptr [ESP + 0x48],ECX      ; 005d58dc
    MOV ECX,dword ptr [EBP + 0x14]      ; 005d58e0
    ADD EDI,0x68                        ; 005d58e3
    INC EAX                             ; 005d58e6
    MOV EBX,dword ptr [ECX + 0x8]       ; 005d58e7
    MOV dword ptr [ESP + 0x40],EAX      ; 005d58ea
    CMP EAX,EBX                         ; 005d58ee
    JC 0x005d58a0                       ; 005d58f0
        ;   XREF to: 005d58a0 (CONDITIONAL_JUMP)  ; LAB_005d58a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d58f2
        ;   Label: LAB_005d58f2
    XOR ESI,ESI                         ; 005d58f5
    MOV EDI,dword ptr [EBP + 0x14]      ; 005d58f7
    MOV dword ptr [ESP + 0x44],ESI      ; 005d58fa
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d58fe
    MOV EDI,dword ptr [EDI + 0xc]       ; 005d5901
    TEST EDX,EDX                        ; 005d5904
    JBE 0x005d594e                      ; 005d5906
        ;   XREF to: 005d594e (CONDITIONAL_JUMP)  ; LAB_005d594e
    TEST byte ptr [EDI + 0x61],0x20     ; 005d5908
        ;   Label: LAB_005d5908
    JZ 0x005d5938                       ; 005d590c
        ;   XREF to: 005d5938 (CONDITIONAL_JUMP)  ; LAB_005d5938
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d590e
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d5911
    XOR ESI,ESI                         ; 005d5914
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d5916
    MOV EBX,dword ptr [EBX + 0xc]       ; 005d5919
    TEST EDX,EDX                        ; 005d591c
    JBE 0x005d5938                      ; 005d591e
        ;   XREF to: 005d5938 (CONDITIONAL_JUMP)  ; LAB_005d5938
    TEST byte ptr [EBX + 0x61],0x20     ; 005d5920
        ;   Label: LAB_005d5920
    JZ 0x005d5b57                       ; 005d5924
        ;   XREF to: 005d5b57 (CONDITIONAL_JUMP)  ; LAB_005d5b57
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d592a
        ;   Label: LAB_005d592a
    INC ESI                             ; 005d592d
    MOV EDX,dword ptr [EAX + 0x8]       ; 005d592e
    ADD EBX,0x68                        ; 005d5931
    CMP ESI,EDX                         ; 005d5934
    JC 0x005d5920                       ; 005d5936
        ;   XREF to: 005d5920 (CONDITIONAL_JUMP)  ; LAB_005d5920
    MOV ECX,dword ptr [ESP + 0x44]      ; 005d5938
        ;   Label: LAB_005d5938
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d593c
    ADD EDI,0x68                        ; 005d593f
    INC ECX                             ; 005d5942
    MOV EBX,dword ptr [EDX + 0x8]       ; 005d5943
    MOV dword ptr [ESP + 0x44],ECX      ; 005d5946
    CMP ECX,EBX                         ; 005d594a
    JC 0x005d5908                       ; 005d594c
        ;   XREF to: 005d5908 (CONDITIONAL_JUMP)  ; LAB_005d5908
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d594e
        ;   Label: LAB_005d594e
    MOV EBX,dword ptr [EBP + 0x14]      ; 005d5951
    XOR ESI,ESI                         ; 005d5954
    MOV EDI,dword ptr [EAX + 0x8]       ; 005d5956
    MOV EBX,dword ptr [EBX + 0xc]       ; 005d5959
    TEST EDI,EDI                        ; 005d595c
    JBE 0x005d5978                      ; 005d595e
        ;   XREF to: 005d5978 (CONDITIONAL_JUMP)  ; LAB_005d5978
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5960
    TEST byte ptr [EBX + 0x61],0x20     ; 005d5963
        ;   Label: LAB_005d5963
    JZ 0x005d5b8d                       ; 005d5967
        ;   XREF to: 005d5b8d (CONDITIONAL_JUMP)  ; LAB_005d5b8d
    INC ESI                             ; 005d596d
    MOV ECX,dword ptr [EAX + 0x8]       ; 005d596e
    ADD EBX,0x68                        ; 005d5971
    CMP ESI,ECX                         ; 005d5974
    JC 0x005d5963                       ; 005d5976
        ;   XREF to: 005d5963 (CONDITIONAL_JUMP)  ; LAB_005d5963
    MOV EAX,0x1                         ; 005d5978
        ;   Label: LAB_005d5978
    MOV ESP,EBP                         ; 005d597d
    POP EBP                             ; 005d597f
    POP EDI                             ; 005d5980
    POP ESI                             ; 005d5981
    POP EBX                             ; 005d5982
    RET                                 ; 005d5983
    MOV ECX,0xffffffff                  ; 005d5984
        ;   Label: LAB_005d5984
    MOV EBX,EDI                         ; 005d5989
    MOV dword ptr [ESP + 0x38],ECX      ; 005d598b
    MOV ECX,dword ptr [EDI]             ; 005d598f
    MOV EAX,EDX                         ; 005d5991
    CMP ECX,dword ptr [EDX + 0x4]       ; 005d5993
    JNZ 0x005d5a81                      ; 005d5996
        ;   XREF to: 005d5a81 (CONDITIONAL_JUMP)  ; LAB_005d5a81
    MOV ECX,dword ptr [EDI + 0x4]       ; 005d599c
    CMP ECX,dword ptr [EDX]             ; 005d599f
    JNZ 0x005d5a81                      ; 005d59a1
        ;   XREF to: 005d5a81 (CONDITIONAL_JUMP)  ; LAB_005d5a81
    MOV dword ptr [ESP + 0x38],0x2      ; 005d59a7
        ;   Label: LAB_005d59a7
    MOV EAX,dword ptr [ESP + 0x38]      ; 005d59af
        ;   Label: LAB_005d59af
    MOV EDX,dword ptr [ESP + 0x48]      ; 005d59b3
    SHL EAX,0x2                         ; 005d59b7
    ADD EAX,EDX                         ; 005d59ba
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d59bc
    SHL EAX,0x3                         ; 005d59bf
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d59c2
    MOV EDX,EAX                         ; 005d59c5
    SHL EAX,0x3                         ; 005d59c7
    MOV ESI,dword ptr [ESI + 0x4]       ; 005d59ca
    SUB EAX,EDX                         ; 005d59cd
    LEA EBX,[ESI + EAX*0x1]             ; 005d59cf
    MOV EAX,dword ptr [EBP + 0x20]      ; 005d59d2
    ADD EAX,0x40                        ; 005d59d5
    MOV dword ptr [ESP + 0x4c],EAX      ; 005d59d8
    PUSH EAX                            ; 005d59dc
    MOV EAX,dword ptr [EBP + 0x20]      ; 005d59dd
    MOV EAX,dword ptr [EAX + 0x4]       ; 005d59e0
    SHL EAX,0x3                         ; 005d59e3
    MOV EDX,EAX                         ; 005d59e6
    SHL EAX,0x3                         ; 005d59e8
    SUB EAX,EDX                         ; 005d59eb
    ADD ESI,EAX                         ; 005d59ed
    PUSH ESI                            ; 005d59ef
    PUSH EBX                            ; 005d59f0
    LEA ESI,[ESP + 0x2c]                ; 005d59f1
    LEA EDI,[ESP + 0x14]                ; 005d59f5
    CALL shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0 ; 005d59f9
        ;   XREF to: 005d63d0 (UNCONDITIONAL_CALL)  ; CVector3d * shape_superopt.cpp_projectPointOntoPlane_FUN_005d63d0(CVector3d * point, CVector3d * plane_point, CVector3d * plane_normal)
    MOV ECX,0x6                         ; 005d59fe
    LEA ESI,[ESP + 0x2c]                ; 005d5a03
    ADD ESP,0xc                         ; 005d5a07
    MOVSD.REP ES:EDI,ESI                ; 005d5a0a
    MOV EAX,dword ptr [ESP + 0x8]       ; 005d5a0c
    MOV dword ptr [EBX],EAX             ; 005d5a10
    MOV EAX,dword ptr [ESP + 0xc]       ; 005d5a12
    MOV dword ptr [EBX + 0x4],EAX       ; 005d5a16
    MOV EAX,dword ptr [ESP + 0x10]      ; 005d5a19
    MOV dword ptr [EBX + 0x8],EAX       ; 005d5a1d
    MOV EAX,dword ptr [ESP + 0x14]      ; 005d5a20
    MOV EDX,dword ptr [ESP + 0x4c]      ; 005d5a24
    MOV dword ptr [EBX + 0xc],EAX       ; 005d5a28
    MOV EAX,dword ptr [ESP + 0x18]      ; 005d5a2b
    MOV ESI,dword ptr [EBP + 0x1c]      ; 005d5a2f
    MOV dword ptr [EBX + 0x10],EAX      ; 005d5a32
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005d5a35
    MOV EDI,dword ptr [EBP + 0x18]      ; 005d5a39
    MOV dword ptr [EBX + 0x14],EAX      ; 005d5a3c
    MOV EAX,dword ptr [ESP + 0x48]      ; 005d5a3f
    FLD double ptr [EDX]                ; 005d5a43
    MOV EBX,dword ptr [ESP + 0x48]      ; 005d5a45
    FSTP double ptr [EAX + 0x40]        ; 005d5a49
    PUSH EBX                            ; 005d5a4c
    MOV ECX,dword ptr [EDX + 0x8]       ; 005d5a4d
    MOV dword ptr [EAX + 0x48],ECX      ; 005d5a50
    MOV ECX,dword ptr [EDX + 0xc]       ; 005d5a53
    MOV dword ptr [EAX + 0x4c],ECX      ; 005d5a56
    PUSH ESI                            ; 005d5a59
    MOV ECX,dword ptr [EDX + 0x10]      ; 005d5a5a
    MOV dword ptr [EAX + 0x50],ECX      ; 005d5a5d
    MOV ECX,dword ptr [EDX + 0x14]      ; 005d5a60
    MOV dword ptr [EAX + 0x54],ECX      ; 005d5a63
    PUSH EDI                            ; 005d5a66
    MOV EDX,dword ptr [EBP + 0x14]      ; 005d5a67
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5a6a
    PUSH EDX                            ; 005d5a6d
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d5a6e
    CALL dword ptr [EAX + 0xd8]         ; 005d5a71
    ADD ESP,0x10                        ; 005d5a77
    MOV ESP,EBP                         ; 005d5a7a
    POP EBP                             ; 005d5a7c
    POP EDI                             ; 005d5a7d
    POP ESI                             ; 005d5a7e
    POP EBX                             ; 005d5a7f
    RET                                 ; 005d5a80
    MOV ECX,dword ptr [EBX]             ; 005d5a81
        ;   Label: LAB_005d5a81
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5a83
    JNZ 0x005d5a94                      ; 005d5a86
        ;   XREF to: 005d5a94 (CONDITIONAL_JUMP)  ; LAB_005d5a94
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d5a88
    CMP ECX,dword ptr [EAX + 0x4]       ; 005d5a8b
    JZ 0x005d59a7                       ; 005d5a8e
        ;   XREF to: 005d59a7 (CONDITIONAL_JUMP)  ; LAB_005d59a7
    MOV ECX,dword ptr [EBX]             ; 005d5a94
        ;   Label: LAB_005d5a94
    CMP ECX,dword ptr [EAX]             ; 005d5a96
    JNZ 0x005d5aa6                      ; 005d5a98
        ;   XREF to: 005d5aa6 (CONDITIONAL_JUMP)  ; LAB_005d5aa6
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d5a9a
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5a9d
    JZ 0x005d59a7                       ; 005d5aa0
        ;   XREF to: 005d59a7 (CONDITIONAL_JUMP)  ; LAB_005d59a7
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d5aa6
        ;   Label: LAB_005d5aa6
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5aa9
    JNZ 0x005d5ac1                      ; 005d5aac
        ;   XREF to: 005d5ac1 (CONDITIONAL_JUMP)  ; LAB_005d5ac1
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5aae
    CMP ECX,dword ptr [EAX + 0x4]       ; 005d5ab1
    JNZ 0x005d5ac1                      ; 005d5ab4
        ;   XREF to: 005d5ac1 (CONDITIONAL_JUMP)  ; LAB_005d5ac1
    XOR EBX,EBX                         ; 005d5ab6
    MOV dword ptr [ESP + 0x38],EBX      ; 005d5ab8
    JMP 0x005d59af                      ; 005d5abc
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d5ac1
        ;   Label: LAB_005d5ac1
    CMP ECX,dword ptr [EAX]             ; 005d5ac4
    JNZ 0x005d5adb                      ; 005d5ac6
        ;   XREF to: 005d5adb (CONDITIONAL_JUMP)  ; LAB_005d5adb
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5ac8
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5acb
    JNZ 0x005d5adb                      ; 005d5ace
        ;   XREF to: 005d5adb (CONDITIONAL_JUMP)  ; LAB_005d5adb
    XOR ECX,ECX                         ; 005d5ad0
    MOV dword ptr [ESP + 0x38],ECX      ; 005d5ad2
    JMP 0x005d59af                      ; 005d5ad6
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    MOV ECX,dword ptr [EBX + 0x4]       ; 005d5adb
        ;   Label: LAB_005d5adb
    CMP ECX,dword ptr [EAX + 0x4]       ; 005d5ade
    JNZ 0x005d5af5                      ; 005d5ae1
        ;   XREF to: 005d5af5 (CONDITIONAL_JUMP)  ; LAB_005d5af5
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5ae3
    CMP ECX,dword ptr [EAX]             ; 005d5ae6
    JNZ 0x005d5af5                      ; 005d5ae8
        ;   XREF to: 005d5af5 (CONDITIONAL_JUMP)  ; LAB_005d5af5
    XOR EDX,EDX                         ; 005d5aea
    MOV dword ptr [ESP + 0x38],EDX      ; 005d5aec
    JMP 0x005d59af                      ; 005d5af0
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5af5
        ;   Label: LAB_005d5af5
    CMP ECX,dword ptr [EAX]             ; 005d5af8
    JNZ 0x005d5b10                      ; 005d5afa
        ;   XREF to: 005d5b10 (CONDITIONAL_JUMP)  ; LAB_005d5b10
    MOV ECX,dword ptr [EBX]             ; 005d5afc
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5afe
    JNZ 0x005d5b10                      ; 005d5b01
        ;   XREF to: 005d5b10 (CONDITIONAL_JUMP)  ; LAB_005d5b10
    MOV dword ptr [ESP + 0x38],0x1      ; 005d5b03
    JMP 0x005d59af                      ; 005d5b0b
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5b10
        ;   Label: LAB_005d5b10
    CMP ECX,dword ptr [EAX + 0x4]       ; 005d5b13
    JNZ 0x005d5b2b                      ; 005d5b16
        ;   XREF to: 005d5b2b (CONDITIONAL_JUMP)  ; LAB_005d5b2b
    MOV ECX,dword ptr [EBX]             ; 005d5b18
    CMP ECX,dword ptr [EAX]             ; 005d5b1a
    JNZ 0x005d5b2b                      ; 005d5b1c
        ;   XREF to: 005d5b2b (CONDITIONAL_JUMP)  ; LAB_005d5b2b
    MOV dword ptr [ESP + 0x38],0x1      ; 005d5b1e
    JMP 0x005d59af                      ; 005d5b26
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    MOV ECX,dword ptr [EBX + 0x8]       ; 005d5b2b
        ;   Label: LAB_005d5b2b
    CMP ECX,dword ptr [EAX + 0x8]       ; 005d5b2e
    JNZ 0x005d5b47                      ; 005d5b31
        ;   XREF to: 005d5b47 (CONDITIONAL_JUMP)  ; LAB_005d5b47
    MOV ECX,dword ptr [EAX + 0x4]       ; 005d5b33
    CMP ECX,dword ptr [EBX]             ; 005d5b36
    JNZ 0x005d5b47                      ; 005d5b38
        ;   XREF to: 005d5b47 (CONDITIONAL_JUMP)  ; LAB_005d5b47
    MOV dword ptr [ESP + 0x38],0x1      ; 005d5b3a
    JMP 0x005d59af                      ; 005d5b42
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    CMP dword ptr [ESP + 0x38],-0x1     ; 005d5b47
        ;   Label: LAB_005d5b47
    JZ 0x005d58ce                       ; 005d5b4c
        ;   XREF to: 005d58ce (CONDITIONAL_JUMP)  ; LAB_005d58ce
    JMP 0x005d59af                      ; 005d5b52
        ;   XREF to: 005d59af (UNCONDITIONAL_JUMP)  ; LAB_005d59af
    PUSH EBX                            ; 005d5b57
        ;   Label: LAB_005d5b57
    MOV EAX,dword ptr [EDI + 0x64]      ; 005d5b58
    PUSH EDI                            ; 005d5b5b
    CALL dword ptr [EAX + 0x70]         ; 005d5b5c
    ADD ESP,0x8                         ; 005d5b5f
    TEST EAX,EAX                        ; 005d5b62
    JZ 0x005d592a                       ; 005d5b64
        ;   XREF to: 005d592a (CONDITIONAL_JUMP)  ; LAB_005d592a
    PUSH EBX                            ; 005d5b6a
    MOV ECX,dword ptr [EBP + 0x1c]      ; 005d5b6b
    PUSH ECX                            ; 005d5b6e
    MOV EBX,dword ptr [EBP + 0x18]      ; 005d5b6f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5b72
    PUSH EBX                            ; 005d5b75
    MOV ESI,dword ptr [EBP + 0x14]      ; 005d5b76
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d5b79
    PUSH ESI                            ; 005d5b7c
    CALL dword ptr [EAX + 0xd8]         ; 005d5b7d
    ADD ESP,0x10                        ; 005d5b83
    MOV ESP,EBP                         ; 005d5b86
    POP EBP                             ; 005d5b88
    POP EDI                             ; 005d5b89
    POP ESI                             ; 005d5b8a
    POP EBX                             ; 005d5b8b
    RET                                 ; 005d5b8c
    PUSH EBX                            ; 005d5b8d
        ;   Label: LAB_005d5b8d
    MOV EBX,dword ptr [EBP + 0x1c]      ; 005d5b8e
    PUSH EBX                            ; 005d5b91
    MOV ESI,dword ptr [EBP + 0x18]      ; 005d5b92
    MOV EAX,dword ptr [EBP + 0x14]      ; 005d5b95
    PUSH ESI                            ; 005d5b98
    MOV EDI,dword ptr [EBP + 0x14]      ; 005d5b99
    MOV EAX,dword ptr [EAX + 0x18]      ; 005d5b9c
    PUSH EDI                            ; 005d5b9f
    CALL dword ptr [EAX + 0xd8]         ; 005d5ba0
    ADD ESP,0x10                        ; 005d5ba6
    MOV ESP,EBP                         ; 005d5ba9
    POP EBP                             ; 005d5bab
    POP EDI                             ; 005d5bac
    POP ESI                             ; 005d5bad
    POP EBX                             ; 005d5bae
    RET                                 ; 005d5baf

