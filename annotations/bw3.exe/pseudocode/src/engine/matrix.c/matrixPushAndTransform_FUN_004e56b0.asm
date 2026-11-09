; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_matrixPushAndTransform_FUN_004e56b0(int rot_x,int rot_y,int rot_z,int translate_x,int translate_y,int translate_z)
;
; Parameters:
; int              Stack[0x4]:4   rot_x
; int              Stack[0x8]:4   rot_y
; int              Stack[0xc]:4   rot_z
; int              Stack[0x10]:4   translate_x
; int              Stack[0x14]:4   translate_y
; int              Stack[0x18]:4   translate_z
; Local Variables:
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
;
; XREF[3]:
;   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0046cee0 at 0046cefd
;   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30 at 0046cf9e
;   shape_edittool.cpp_FUN_0048114e at 004811ca
;
; Referenced Globals:
;   TerminatedCString s_engine_matrix_c_005c6eda
;   TerminatedCString s_Matrix_unbalance_005c6eed
;   undefined4 DAT_01c6e2cc
;   undefined4 DAT_01c6e2d0
;   undefined4 DAT_01c6e2d4
;   undefined4 DAT_01c6e2f0
;   undefined4 DAT_01c6e2f4
;   undefined4 DAT_01c6e2f8
;   undefined4 DAT_01c6e2fc
;   undefined4 DAT_01c6e300
;   undefined4 DAT_01c6e304
;   undefined4 DAT_01c6e308
;   undefined4 DAT_01c6e30c
;   undefined4 DAT_01c6e310
;   undefined4 DAT_01c6e314
;   ... and 8 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_matrix.c_FUN_004e4d90
;   engine_matrix.c_FUN_004e4dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e56b0
        ;   Label: engine_matrix.c_matrixPushAndTransform_FUN_004e56b0
    PUSH ESI                            ; 004e56b1
    PUSH EDI                            ; 004e56b2
    PUSH EBP                            ; 004e56b3
    SUB ESP,0x30                        ; 004e56b4
    MOV EDI,dword ptr [ESP + 0x44]      ; 004e56b7
    MOV EBX,dword ptr [ESP + 0x48]      ; 004e56bb
    MOV ESI,dword ptr [ESP + 0x4c]      ; 004e56bf
    MOV EAX,[0x01d726a0]                ; 004e56c3 | DAT_01d726a0
    MOV EDX,dword ptr [0x01c6e2cc]      ; 004e56c8 | DAT_01c6e2cc
    MOV dword ptr [EAX*0x4 + 0x1d7280c],EDX ; 004e56ce
    MOV EDX,dword ptr [0x01c6e2d0]      ; 004e56d5 | DAT_01c6e2d0
    MOV dword ptr [EAX*0x4 + 0x1d72834],EDX ; 004e56db
    MOV EDX,dword ptr [0x01c6e2d4]      ; 004e56e2 | DAT_01c6e2d4
    MOV dword ptr [EAX*0x4 + 0x1d7285c],EDX ; 004e56e8
    MOV EDX,dword ptr [0x01c6e2f0]      ; 004e56ef | DAT_01c6e2f0
    MOV dword ptr [EAX*0x4 + 0x1d72884],EDX ; 004e56f5
    MOV EDX,dword ptr [0x01c6e2f4]      ; 004e56fc | DAT_01c6e2f4
    MOV dword ptr [EAX*0x4 + 0x1d728ac],EDX ; 004e5702
    MOV EDX,dword ptr [0x01c6e2f8]      ; 004e5709 | DAT_01c6e2f8
    MOV dword ptr [EAX*0x4 + 0x1d728d4],EDX ; 004e570f
    MOV EDX,dword ptr [0x01c6e2fc]      ; 004e5716 | DAT_01c6e2fc
    MOV dword ptr [EAX*0x4 + 0x1d726a4],EDX ; 004e571c
    MOV EDX,dword ptr [0x01c6e300]      ; 004e5723 | DAT_01c6e300
    MOV dword ptr [EAX*0x4 + 0x1d726cc],EDX ; 004e5729
    MOV EDX,dword ptr [0x01c6e304]      ; 004e5730 | DAT_01c6e304
    MOV dword ptr [EAX*0x4 + 0x1d726f4],EDX ; 004e5736
    MOV EDX,dword ptr [0x01c6e308]      ; 004e573d | DAT_01c6e308
    MOV dword ptr [EAX*0x4 + 0x1d7271c],EDX ; 004e5743
    MOV EDX,dword ptr [0x01c6e30c]      ; 004e574a | DAT_01c6e30c
    MOV dword ptr [EAX*0x4 + 0x1d72744],EDX ; 004e5750
    MOV EDX,dword ptr [0x01c6e310]      ; 004e5757 | DAT_01c6e310
    MOV dword ptr [EAX*0x4 + 0x1d7276c],EDX ; 004e575d
    MOV EDX,dword ptr [0x01c6e314]      ; 004e5764 | DAT_01c6e314
    MOV dword ptr [EAX*0x4 + 0x1d72794],EDX ; 004e576a
    MOV EDX,dword ptr [0x01c6e318]      ; 004e5771 | DAT_01c6e318
    MOV dword ptr [EAX*0x4 + 0x1d727bc],EDX ; 004e5777
    MOV EDX,dword ptr [0x01c6e31c]      ; 004e577e | DAT_01c6e31c
    MOV dword ptr [EAX*0x4 + 0x1d727e4],EDX ; 004e5784
    MOV EDX,dword ptr [ESP + 0x50]      ; 004e578b
    MOV EAX,[0x01c6e2cc]                ; 004e578f | DAT_01c6e2cc
    SUB EAX,EDX                         ; 004e5794
    MOV ECX,dword ptr [ESP + 0x54]      ; 004e5796
    MOV dword ptr [ESP + 0x8],EAX       ; 004e579a
    MOV EAX,[0x01c6e2d0]                ; 004e579e | DAT_01c6e2d0
    SUB EAX,ECX                         ; 004e57a3
    MOV EBP,dword ptr [ESP + 0x58]      ; 004e57a5
    MOV dword ptr [ESP + 0x4],EAX       ; 004e57a9
    MOV EAX,[0x01c6e2d4]                ; 004e57ad | DAT_01c6e2d4
    SUB EAX,EBP                         ; 004e57b2
    MOV dword ptr [0x01d72694],EBX      ; 004e57b4 | DAT_01d72694
    MOV dword ptr [ESP + 0x10],EAX      ; 004e57ba
    MOV EAX,EDI                         ; 004e57be
    MOV dword ptr [0x01d72698],ESI      ; 004e57c0 | DAT_01d72698
    OR EAX,EBX                          ; 004e57c6
    MOV dword ptr [0x01d72690],EDI      ; 004e57c8 | DAT_01d72690
    OR EAX,ESI                          ; 004e57ce
    JNZ 0x004e580b                      ; 004e57d0
        ;   XREF to: 004e580b (CONDITIONAL_JUMP)  ; LAB_004e580b
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e57d2
    MOV [0x01c6e2cc],EAX                ; 004e57d6 | DAT_01c6e2cc
    MOV EAX,dword ptr [ESP + 0x4]       ; 004e57db
    MOV [0x01c6e2d0],EAX                ; 004e57df | DAT_01c6e2d0
    MOV EAX,dword ptr [ESP + 0x10]      ; 004e57e4
    MOV [0x01c6e2d4],EAX                ; 004e57e8 | DAT_01c6e2d4
    MOV EDX,dword ptr [0x01d726a0]      ; 004e57ed | DAT_01d726a0
        ;   Label: LAB_004e57ed
    INC EDX                             ; 004e57f3
    MOV dword ptr [0x01d726a0],EDX      ; 004e57f4 | DAT_01d726a0
    CMP EDX,0x9                         ; 004e57fa
    JG 0x004e5dc5                       ; 004e57fd
        ;   XREF to: 004e5dc5 (CONDITIONAL_JUMP)  ; LAB_004e5dc5
    ADD ESP,0x30                        ; 004e5803
    POP EBP                             ; 004e5806
    POP EDI                             ; 004e5807
    POP ESI                             ; 004e5808
    POP EBX                             ; 004e5809
    RET                                 ; 004e580a
    PUSH EDI                            ; 004e580b
        ;   Label: LAB_004e580b
    CALL engine_matrix.c_FUN_004e4d90   ; 004e580c
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    MOV dword ptr [ESP + 0x20],EAX      ; 004e5811
    ADD ESP,0x4                         ; 004e5815
    PUSH EDI                            ; 004e5818
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e5819
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    MOV dword ptr [ESP + 0x10],EAX      ; 004e581e
    ADD ESP,0x4                         ; 004e5822
    PUSH EBX                            ; 004e5825
    CALL engine_matrix.c_FUN_004e4d90   ; 004e5826
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    ADD ESP,0x4                         ; 004e582b
    PUSH EBX                            ; 004e582e
    MOV EBP,EAX                         ; 004e582f
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e5831
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    ADD ESP,0x4                         ; 004e5836
    PUSH ESI                            ; 004e5839
    MOV EBX,EAX                         ; 004e583a
    CALL engine_matrix.c_FUN_004e4d90   ; 004e583c
        ;   XREF to: 004e4d90 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4d90()
    MOV dword ptr [ESP + 0x28],EAX      ; 004e5841
    ADD ESP,0x4                         ; 004e5845
    PUSH ESI                            ; 004e5848
    CALL engine_matrix.c_FUN_004e4dd0   ; 004e5849
        ;   XREF to: 004e4dd0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_004e4dd0()
    MOV dword ptr [ESP + 0x2c],EAX      ; 004e584e
    ADD ESP,0x4                         ; 004e5852
    MOV EAX,EBX                         ; 004e5855
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e5857
    IMUL EDX                            ; 004e585b
    SHRD EAX,EDX,0x10                   ; 004e585d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e5861
    MOV ECX,EAX                         ; 004e5865
    MOV EAX,EBP                         ; 004e5867
    IMUL EDX                            ; 004e5869
    SHRD EAX,EDX,0x10                   ; 004e586b
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e586f
    IMUL EDX                            ; 004e5873
    SHRD EAX,EDX,0x10                   ; 004e5875
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e5879
    ADD ECX,EAX                         ; 004e587d
    NEG EDX                             ; 004e587f
    MOV EAX,EBP                         ; 004e5881
    MOV dword ptr [ESP + 0x18],ECX      ; 004e5883
    IMUL EDX                            ; 004e5887
    SHRD EAX,EDX,0x10                   ; 004e5889
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e588d
    MOV ECX,EAX                         ; 004e5891
    MOV EAX,EBX                         ; 004e5893
    IMUL EDX                            ; 004e5895
    SHRD EAX,EDX,0x10                   ; 004e5897
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e589b
    IMUL EDX                            ; 004e589f
    SHRD EAX,EDX,0x10                   ; 004e58a1
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e58a5
    ADD ECX,EAX                         ; 004e58a9
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e58ab
    MOV dword ptr [ESP + 0x20],ECX      ; 004e58af
    IMUL EDX                            ; 004e58b3
    SHRD EAX,EDX,0x10                   ; 004e58b5
    MOV ECX,EAX                         ; 004e58b9
    MOV EDX,EBP                         ; 004e58bb
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e58bd
    IMUL EDX                            ; 004e58c1
    SHRD EAX,EDX,0x10                   ; 004e58c3
    MOV ESI,EAX                         ; 004e58c7
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e58c9
    MOV EDX,EBX                         ; 004e58cd
    IMUL EDX                            ; 004e58cf
    SHRD EAX,EDX,0x10                   ; 004e58d1
    MOV EDI,EAX                         ; 004e58d5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004e58d7
    MOV EDX,dword ptr [ESP + 0x24]      ; 004e58db
    MOV dword ptr [ESP + 0x14],EAX      ; 004e58df
    NEG EAX                             ; 004e58e3
    NEG EDX                             ; 004e58e5
    MOV dword ptr [ESP + 0x14],EAX      ; 004e58e7
    MOV EAX,EBX                         ; 004e58eb
    IMUL EDX                            ; 004e58ed
    SHRD EAX,EDX,0x10                   ; 004e58ef
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e58f3
    MOV dword ptr [ESP],EAX             ; 004e58f7
    MOV EAX,EBP                         ; 004e58fa
    IMUL EDX                            ; 004e58fc
    SHRD EAX,EDX,0x10                   ; 004e58fe
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e5902
    IMUL EDX                            ; 004e5906
    SHRD EAX,EDX,0x10                   ; 004e5908
    MOV EDX,dword ptr [ESP]             ; 004e590c
    ADD EDX,EAX                         ; 004e590f
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e5911
    MOV dword ptr [ESP + 0x2c],EDX      ; 004e5915
    MOV EDX,EBP                         ; 004e5919
    IMUL EDX                            ; 004e591b
    SHRD EAX,EDX,0x10                   ; 004e591d
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004e5921
    MOV EBP,EAX                         ; 004e5925
    MOV EAX,EBX                         ; 004e5927
    IMUL EDX                            ; 004e5929
    SHRD EAX,EDX,0x10                   ; 004e592b
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e592f
    IMUL EDX                            ; 004e5933
    SHRD EAX,EDX,0x10                   ; 004e5935
    MOV EDX,dword ptr [ESP + 0x28]      ; 004e5939
    ADD EBP,EAX                         ; 004e593d
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e593f
    IMUL EDX                            ; 004e5943
    SHRD EAX,EDX,0x10                   ; 004e5945
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e5949
    MOV EBX,EAX                         ; 004e594d
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e594f
    IMUL EDX                            ; 004e5953
    SHRD EAX,EDX,0x10                   ; 004e5955
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5959
    MOV dword ptr [ESP],EAX             ; 004e595d
    MOV EAX,ESI                         ; 004e5960
    IMUL EDX                            ; 004e5962
    SHRD EAX,EDX,0x10                   ; 004e5964
    MOV EDX,dword ptr [ESP]             ; 004e5968
    ADD EDX,EAX                         ; 004e596b
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e596d
    MOV dword ptr [ESP],EDX             ; 004e5971
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e5974
    IMUL EDX                            ; 004e5978
    SHRD EAX,EDX,0x10                   ; 004e597a
    MOV EDX,dword ptr [ESP]             ; 004e597e
    ADD EDX,EAX                         ; 004e5981
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e5983
    MOV dword ptr [0x01c6e2cc],EDX      ; 004e5987 | DAT_01c6e2cc
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e598d
    IMUL EDX                            ; 004e5991
    SHRD EAX,EDX,0x10                   ; 004e5993
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e5997
    MOV dword ptr [ESP],EAX             ; 004e599b
    MOV EAX,EDI                         ; 004e599e
    IMUL EDX                            ; 004e59a0
    SHRD EAX,EDX,0x10                   ; 004e59a2
    MOV EDX,dword ptr [ESP]             ; 004e59a6
    ADD EDX,EAX                         ; 004e59a9
    MOV dword ptr [ESP],EDX             ; 004e59ab
    MOV EAX,EBP                         ; 004e59ae
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e59b0
    IMUL EDX                            ; 004e59b4
    SHRD EAX,EDX,0x10                   ; 004e59b6
    MOV EDX,dword ptr [ESP]             ; 004e59ba
    ADD EDX,EAX                         ; 004e59bd
    MOV dword ptr [0x01c6e2d0],EDX      ; 004e59bf | DAT_01c6e2d0
    MOV EDX,dword ptr [ESP + 0x8]       ; 004e59c5
    MOV EAX,ECX                         ; 004e59c9
    IMUL EDX                            ; 004e59cb
    SHRD EAX,EDX,0x10                   ; 004e59cd
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e59d1
    MOV dword ptr [ESP],EAX             ; 004e59d5
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e59d8
    IMUL EDX                            ; 004e59dc
    SHRD EAX,EDX,0x10                   ; 004e59de
    MOV EDX,dword ptr [ESP]             ; 004e59e2
    ADD EDX,EAX                         ; 004e59e5
    MOV dword ptr [ESP],EDX             ; 004e59e7
    MOV EAX,EBX                         ; 004e59ea
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e59ec
    IMUL EDX                            ; 004e59f0
    SHRD EAX,EDX,0x10                   ; 004e59f2
    MOV EDX,dword ptr [ESP]             ; 004e59f6
    ADD EDX,EAX                         ; 004e59f9
    MOV dword ptr [0x01c6e2d4],EDX      ; 004e59fb | DAT_01c6e2d4
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a01 | DAT_01d726a0
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e5a07
    MOV EDX,dword ptr [EDX*0x4 + 0x1d72884] ; 004e5a0b
    IMUL EDX                            ; 004e5a12
    SHRD EAX,EDX,0x10                   ; 004e5a14
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a18 | DAT_01d726a0
    MOV dword ptr [ESP],EAX             ; 004e5a1e
    MOV EAX,ESI                         ; 004e5a21
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728ac] ; 004e5a23
    IMUL EDX                            ; 004e5a2a
    SHRD EAX,EDX,0x10                   ; 004e5a2c
    MOV EDX,dword ptr [ESP]             ; 004e5a30
    ADD EDX,EAX                         ; 004e5a33
    MOV dword ptr [ESP],EDX             ; 004e5a35
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a38 | DAT_01d726a0
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004e5a3e
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728d4] ; 004e5a42
    IMUL EDX                            ; 004e5a49
    SHRD EAX,EDX,0x10                   ; 004e5a4b
    MOV EDX,dword ptr [ESP]             ; 004e5a4f
    ADD EDX,EAX                         ; 004e5a52
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e5a54 | DAT_01c6e2f0
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a5a | DAT_01d726a0
    MOV EAX,dword ptr [ESP + 0x20]      ; 004e5a60
    MOV EDX,dword ptr [EDX*0x4 + 0x1d72884] ; 004e5a64
    IMUL EDX                            ; 004e5a6b
    SHRD EAX,EDX,0x10                   ; 004e5a6d
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a71 | DAT_01d726a0
    MOV dword ptr [ESP],EAX             ; 004e5a77
    MOV EAX,EDI                         ; 004e5a7a
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728ac] ; 004e5a7c
    IMUL EDX                            ; 004e5a83
    SHRD EAX,EDX,0x10                   ; 004e5a85
    MOV EDX,dword ptr [ESP]             ; 004e5a89
    ADD EDX,EAX                         ; 004e5a8c
    MOV dword ptr [ESP],EDX             ; 004e5a8e
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5a91 | DAT_01d726a0
    MOV EAX,EBP                         ; 004e5a97
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728d4] ; 004e5a99
    IMUL EDX                            ; 004e5aa0
    SHRD EAX,EDX,0x10                   ; 004e5aa2
    MOV EDX,dword ptr [ESP]             ; 004e5aa6
    ADD EDX,EAX                         ; 004e5aa9
    MOV dword ptr [0x01c6e2f4],EDX      ; 004e5aab | DAT_01c6e2f4
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5ab1 | DAT_01d726a0
    MOV EAX,ECX                         ; 004e5ab7
    MOV EDX,dword ptr [EDX*0x4 + 0x1d72884] ; 004e5ab9
    IMUL EDX                            ; 004e5ac0
    SHRD EAX,EDX,0x10                   ; 004e5ac2
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5ac6 | DAT_01d726a0
    MOV dword ptr [ESP],EAX             ; 004e5acc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e5acf
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728ac] ; 004e5ad3
    IMUL EDX                            ; 004e5ada
    SHRD EAX,EDX,0x10                   ; 004e5adc
    MOV EDX,dword ptr [ESP]             ; 004e5ae0
    ADD EDX,EAX                         ; 004e5ae3
    MOV dword ptr [ESP],EDX             ; 004e5ae5
    MOV EDX,dword ptr [0x01d726a0]      ; 004e5ae8 | DAT_01d726a0
    MOV EAX,EBX                         ; 004e5aee
    MOV EDX,dword ptr [EDX*0x4 + 0x1d728d4] ; 004e5af0
    IMUL EDX                            ; 004e5af7
    SHRD EAX,EDX,0x10                   ; 004e5af9
    MOV EDX,dword ptr [ESP]             ; 004e5afd
    ADD EDX,EAX                         ; 004e5b00
    MOV dword ptr [0x01c6e2f8],EDX      ; 004e5b02 | DAT_01c6e2f8
    MOV EAX,[0x01d726a0]                ; 004e5b08 | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e5b0d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726a4] ; 004e5b11
    IMUL EDX                            ; 004e5b18
    SHRD EAX,EDX,0x10                   ; 004e5b1a
    MOV dword ptr [ESP],EAX             ; 004e5b1e
    MOV EAX,[0x01d726a0]                ; 004e5b21 | DAT_01d726a0
    MOV EDX,ESI                         ; 004e5b26
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7271c] ; 004e5b28
    IMUL EDX                            ; 004e5b2f
    SHRD EAX,EDX,0x10                   ; 004e5b31
    MOV EDX,dword ptr [ESP]             ; 004e5b35
    ADD EDX,EAX                         ; 004e5b38
    MOV EAX,[0x01d726a0]                ; 004e5b3a | DAT_01d726a0
    MOV dword ptr [ESP],EDX             ; 004e5b3f
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e5b42
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72794] ; 004e5b46
    IMUL EDX                            ; 004e5b4d
    SHRD EAX,EDX,0x10                   ; 004e5b4f
    MOV EDX,dword ptr [ESP]             ; 004e5b53
    ADD EDX,EAX                         ; 004e5b56
    MOV EAX,[0x01d726a0]                ; 004e5b58 | DAT_01d726a0
    MOV dword ptr [0x01c6e2fc],EDX      ; 004e5b5d | DAT_01c6e2fc
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e5b63
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726cc] ; 004e5b67
    IMUL EDX                            ; 004e5b6e
    SHRD EAX,EDX,0x10                   ; 004e5b70
    MOV dword ptr [ESP],EAX             ; 004e5b74
    MOV EAX,[0x01d726a0]                ; 004e5b77 | DAT_01d726a0
    MOV EDX,ESI                         ; 004e5b7c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72744] ; 004e5b7e
    IMUL EDX                            ; 004e5b85
    SHRD EAX,EDX,0x10                   ; 004e5b87
    MOV EDX,dword ptr [ESP]             ; 004e5b8b
    ADD EDX,EAX                         ; 004e5b8e
    MOV EAX,[0x01d726a0]                ; 004e5b90 | DAT_01d726a0
    MOV dword ptr [ESP],EDX             ; 004e5b95
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e5b98
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727bc] ; 004e5b9c
    IMUL EDX                            ; 004e5ba3
    SHRD EAX,EDX,0x10                   ; 004e5ba5
    MOV EDX,dword ptr [ESP]             ; 004e5ba9
    ADD EDX,EAX                         ; 004e5bac
    MOV EAX,[0x01d726a0]                ; 004e5bae | DAT_01d726a0
    MOV dword ptr [0x01c6e300],EDX      ; 004e5bb3 | DAT_01c6e300
    MOV EDX,dword ptr [ESP + 0x18]      ; 004e5bb9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726f4] ; 004e5bbd
    IMUL EDX                            ; 004e5bc4
    SHRD EAX,EDX,0x10                   ; 004e5bc6
    MOV dword ptr [ESP],EAX             ; 004e5bca
    MOV EAX,[0x01d726a0]                ; 004e5bcd | DAT_01d726a0
    MOV EDX,ESI                         ; 004e5bd2
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7276c] ; 004e5bd4
    MOV ESI,dword ptr [ESP]             ; 004e5bdb
    IMUL EDX                            ; 004e5bde
    SHRD EAX,EDX,0x10                   ; 004e5be0
    ADD ESI,EAX                         ; 004e5be4
    MOV EAX,[0x01d726a0]                ; 004e5be6 | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004e5beb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727e4] ; 004e5bef
    IMUL EDX                            ; 004e5bf6
    SHRD EAX,EDX,0x10                   ; 004e5bf8
    ADD ESI,EAX                         ; 004e5bfc
    MOV EAX,[0x01d726a0]                ; 004e5bfe | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e5c03
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726a4] ; 004e5c07
    MOV dword ptr [0x01c6e304],ESI      ; 004e5c0e | DAT_01c6e304
    IMUL EDX                            ; 004e5c14
    SHRD EAX,EDX,0x10                   ; 004e5c16
    MOV ESI,EAX                         ; 004e5c1a
    MOV EAX,[0x01d726a0]                ; 004e5c1c | DAT_01d726a0
    MOV EDX,EDI                         ; 004e5c21
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7271c] ; 004e5c23
    IMUL EDX                            ; 004e5c2a
    SHRD EAX,EDX,0x10                   ; 004e5c2c
    ADD ESI,EAX                         ; 004e5c30
    MOV EAX,[0x01d726a0]                ; 004e5c32 | DAT_01d726a0
    MOV EDX,EBP                         ; 004e5c37
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72794] ; 004e5c39
    IMUL EDX                            ; 004e5c40
    SHRD EAX,EDX,0x10                   ; 004e5c42
    ADD ESI,EAX                         ; 004e5c46
    MOV dword ptr [0x01c6e308],ESI      ; 004e5c48 | DAT_01c6e308
    MOV EAX,[0x01d726a0]                ; 004e5c4e | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e5c53
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726cc] ; 004e5c57
    IMUL EDX                            ; 004e5c5e
    SHRD EAX,EDX,0x10                   ; 004e5c60
    MOV ESI,EAX                         ; 004e5c64
    MOV EAX,[0x01d726a0]                ; 004e5c66 | DAT_01d726a0
    MOV EDX,EDI                         ; 004e5c6b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72744] ; 004e5c6d
    IMUL EDX                            ; 004e5c74
    SHRD EAX,EDX,0x10                   ; 004e5c76
    ADD ESI,EAX                         ; 004e5c7a
    MOV EAX,[0x01d726a0]                ; 004e5c7c | DAT_01d726a0
    MOV EDX,EBP                         ; 004e5c81
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727bc] ; 004e5c83
    IMUL EDX                            ; 004e5c8a
    SHRD EAX,EDX,0x10                   ; 004e5c8c
    ADD ESI,EAX                         ; 004e5c90
    MOV EAX,[0x01d726a0]                ; 004e5c92 | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x20]      ; 004e5c97
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726f4] ; 004e5c9b
    MOV dword ptr [0x01c6e30c],ESI      ; 004e5ca2 | DAT_01c6e30c
    IMUL EDX                            ; 004e5ca8
    SHRD EAX,EDX,0x10                   ; 004e5caa
    MOV ESI,EAX                         ; 004e5cae
    MOV EAX,[0x01d726a0]                ; 004e5cb0 | DAT_01d726a0
    MOV EDX,EDI                         ; 004e5cb5
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7276c] ; 004e5cb7
    IMUL EDX                            ; 004e5cbe
    SHRD EAX,EDX,0x10                   ; 004e5cc0
    ADD ESI,EAX                         ; 004e5cc4
    MOV EAX,[0x01d726a0]                ; 004e5cc6 | DAT_01d726a0
    MOV EDX,EBP                         ; 004e5ccb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727e4] ; 004e5ccd
    IMUL EDX                            ; 004e5cd4
    SHRD EAX,EDX,0x10                   ; 004e5cd6
    ADD ESI,EAX                         ; 004e5cda
    MOV EAX,[0x01d726a0]                ; 004e5cdc | DAT_01d726a0
    MOV EDX,ECX                         ; 004e5ce1
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726a4] ; 004e5ce3
    MOV dword ptr [0x01c6e310],ESI      ; 004e5cea | DAT_01c6e310
    IMUL EDX                            ; 004e5cf0
    SHRD EAX,EDX,0x10                   ; 004e5cf2
    MOV ESI,EAX                         ; 004e5cf6
    MOV EAX,[0x01d726a0]                ; 004e5cf8 | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e5cfd
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7271c] ; 004e5d01
    IMUL EDX                            ; 004e5d08
    SHRD EAX,EDX,0x10                   ; 004e5d0a
    ADD ESI,EAX                         ; 004e5d0e
    MOV EAX,[0x01d726a0]                ; 004e5d10 | DAT_01d726a0
    MOV EDX,EBX                         ; 004e5d15
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72794] ; 004e5d17
    IMUL EDX                            ; 004e5d1e
    SHRD EAX,EDX,0x10                   ; 004e5d20
    ADD ESI,EAX                         ; 004e5d24
    MOV EAX,[0x01d726a0]                ; 004e5d26 | DAT_01d726a0
    MOV EDX,ECX                         ; 004e5d2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726cc] ; 004e5d2d
    MOV dword ptr [0x01c6e314],ESI      ; 004e5d34 | DAT_01c6e314
    IMUL EDX                            ; 004e5d3a
    SHRD EAX,EDX,0x10                   ; 004e5d3c
    MOV ESI,EAX                         ; 004e5d40
    MOV EAX,[0x01d726a0]                ; 004e5d42 | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e5d47
    MOV EAX,dword ptr [EAX*0x4 + 0x1d72744] ; 004e5d4b
    IMUL EDX                            ; 004e5d52
    SHRD EAX,EDX,0x10                   ; 004e5d54
    ADD ESI,EAX                         ; 004e5d58
    MOV EAX,[0x01d726a0]                ; 004e5d5a | DAT_01d726a0
    MOV EDX,EBX                         ; 004e5d5f
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727bc] ; 004e5d61
    IMUL EDX                            ; 004e5d68
    SHRD EAX,EDX,0x10                   ; 004e5d6a
    ADD ESI,EAX                         ; 004e5d6e
    MOV dword ptr [0x01c6e318],ESI      ; 004e5d70 | DAT_01c6e318
    MOV EAX,[0x01d726a0]                ; 004e5d76 | DAT_01d726a0
    MOV EDX,ECX                         ; 004e5d7b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d726f4] ; 004e5d7d
    IMUL EDX                            ; 004e5d84
    SHRD EAX,EDX,0x10                   ; 004e5d86
    MOV ECX,EAX                         ; 004e5d8a
    MOV EAX,[0x01d726a0]                ; 004e5d8c | DAT_01d726a0
    MOV EDX,dword ptr [ESP + 0x14]      ; 004e5d91
    MOV EAX,dword ptr [EAX*0x4 + 0x1d7276c] ; 004e5d95
    IMUL EDX                            ; 004e5d9c
    SHRD EAX,EDX,0x10                   ; 004e5d9e
    ADD ECX,EAX                         ; 004e5da2
    MOV EAX,[0x01d726a0]                ; 004e5da4 | DAT_01d726a0
    MOV EDX,EBX                         ; 004e5da9
    MOV EAX,dword ptr [EAX*0x4 + 0x1d727e4] ; 004e5dab
    IMUL EDX                            ; 004e5db2
    SHRD EAX,EDX,0x10                   ; 004e5db4
    ADD ECX,EAX                         ; 004e5db8
    MOV dword ptr [0x01c6e31c],ECX      ; 004e5dba | DAT_01c6e31c
    JMP 0x004e57ed                      ; 004e5dc0
        ;   XREF to: 004e57ed (UNCONDITIONAL_JUMP)  ; LAB_004e57ed
    MOV EBX,0x5c6eda                    ; 004e5dc5 | = "..\\engine\\matrix.c"
        ;   Label: LAB_004e5dc5
    MOV ESI,0x31f                       ; 004e5dca
    PUSH 0x5c6eed                       ; 004e5dcf | = "Matrix unbalance"
    MOV dword ptr [0x01d71de0],EBX      ; 004e5dd4 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004e5dda | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004e5de0
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004e5de5
    ADD ESP,0x30                        ; 004e5de8
    POP EBP                             ; 004e5deb
    POP EDI                             ; 004e5dec
    POP ESI                             ; 004e5ded
    POP EBX                             ; 004e5dee
    RET                                 ; 004e5def

