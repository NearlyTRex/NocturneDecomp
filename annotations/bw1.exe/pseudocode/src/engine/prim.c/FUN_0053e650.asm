; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_FUN_0053e650(int *vertex_indices,int vertex_count)
;
; Parameters:
; int *            Stack[0x4]:4   vertex_indices
; int              Stack[0x8]:4   vertex_count
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0 at 0043cc1f
;
; Referenced Globals:
;   undefined4 DAT_00622a84
;   undefined4 DAT_00629014
;   undefined4 DAT_0062901c
;   undefined4 DAT_00629020
;   undefined4 DAT_00629024
;   undefined4 DAT_00629028
;   undefined4 DAT_0062902c
;   undefined4 DAT_00629030
;   undefined4 DAT_00629034
;   undefined4 DAT_00629040
;   undefined4 DAT_00713a74
;   undefined4 DAT_00713a7c
;   undefined4 DAT_01c50948
;   undefined4 DAT_01c51d10
;   undefined4 DAT_01c51d14
;   ... and 6 more
;
; Called Functions:
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;   engine_prim.c_FUN_0053db80
;   engine_special.cpp_drawPolygon2_FUN_00582370
;   engine_special.cpp_FUN_00580127
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053e650
        ;   Label: engine_prim.c_FUN_0053e650
    PUSH ESI                            ; 0053e651
    PUSH EDI                            ; 0053e652
    PUSH EBP                            ; 0053e653
    SUB ESP,0x54                        ; 0053e654
    CMP dword ptr [0x00713a7c],0x0      ; 0053e657 | DAT_00713a7c
    JZ 0x0053e6bd                       ; 0053e65e
        ;   XREF to: 0053e6bd (CONDITIONAL_JUMP)  ; LAB_0053e6bd
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0053e660
    CMP ECX,0x3                         ; 0053e664
    JLE 0x0053e73c                      ; 0053e667
        ;   XREF to: 0053e73c (CONDITIONAL_JUMP)  ; LAB_0053e73c
    MOV EBX,dword ptr [ESP + 0x68]      ; 0053e66d
    LEA EBP,[ECX + -0x2]                ; 0053e671
    XOR ESI,ESI                         ; 0053e674
    XOR EDI,EDI                         ; 0053e676
    TEST EBP,EBP                        ; 0053e678
    JLE 0x0053e6b5                      ; 0053e67a
        ;   XREF to: 0053e6b5 (CONDITIONAL_JUMP)  ; LAB_0053e6b5
    IMUL EAX,dword ptr [EBX + 0x8],0x30 ; 0053e67c
        ;   Label: LAB_0053e67c
    ADD EAX,0x629014                    ; 0053e680 | DAT_00629014
    MOV ECX,dword ptr [EBX + 0x4]       ; 0053e685
    PUSH EAX                            ; 0053e688
    IMUL EAX,ECX,0x30                   ; 0053e689
    ADD EAX,0x629014                    ; 0053e68c | DAT_00629014
    MOV EDX,dword ptr [EBX]             ; 0053e691
    PUSH EAX                            ; 0053e693
    IMUL EAX,EDX,0x30                   ; 0053e694
    ADD EAX,0x629014                    ; 0053e697 | DAT_00629014
    PUSH EAX                            ; 0053e69c
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053e69d
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053e6a2
    TEST EAX,EAX                        ; 0053e6a5
    JZ 0x0053e736                       ; 0053e6a7
        ;   XREF to: 0053e736 (CONDITIONAL_JUMP)  ; LAB_0053e736
    INC ESI                             ; 0053e6ad
        ;   Label: LAB_0053e6ad
    ADD EBX,0x4                         ; 0053e6ae
    CMP ESI,EBP                         ; 0053e6b1
    JL 0x0053e67c                       ; 0053e6b3
        ;   XREF to: 0053e67c (CONDITIONAL_JUMP)  ; LAB_0053e67c
    CMP EDI,EBP                         ; 0053e6b5
        ;   Label: LAB_0053e6b5
    JZ 0x0053e72e                       ; 0053e6b7
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
    CMP dword ptr [0x01c50948],0x0      ; 0053e6bd | DAT_01c50948
        ;   Label: LAB_0053e6bd
    JZ 0x0053e79e                       ; 0053e6c4
        ;   XREF to: 0053e79e (CONDITIONAL_JUMP)  ; LAB_0053e79e
    CMP dword ptr [0x00713a74],0x0      ; 0053e6ca | DAT_00713a74
    JNZ 0x0053e79e                      ; 0053e6d1
        ;   XREF to: 0053e79e (CONDITIONAL_JUMP)  ; LAB_0053e79e
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053e6d7
    XOR EAX,EAX                         ; 0053e6db
    TEST EBX,EBX                        ; 0053e6dd
    JLE 0x0053e700                      ; 0053e6df
        ;   XREF to: 0053e700 (CONDITIONAL_JUMP)  ; LAB_0053e700
    MOV ECX,dword ptr [ESP + 0x68]      ; 0053e6e1
    MOV ESI,dword ptr [ESP + 0x6c]      ; 0053e6e5
    IMUL EDX,dword ptr [ECX],0x30       ; 0053e6e9
        ;   Label: LAB_0053e6e9
    INC EAX                             ; 0053e6ec
    ADD EDX,0x629014                    ; 0053e6ed | DAT_00629014
    ADD ECX,0x4                         ; 0053e6f3
    MOV dword ptr [ESP + EAX*0x4 + -0x4],EDX ; 0053e6f6
    CMP EAX,ESI                         ; 0053e6fa
    JL 0x0053e6e9                       ; 0053e6fc
        ;   XREF to: 0053e6e9 (CONDITIONAL_JUMP)  ; LAB_0053e6e9
    MOV EAX,EAX                         ; 0053e6fe
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0053e700
        ;   Label: LAB_0053e700
    MOV EDI,dword ptr [0x01e7dac8]      ; 0053e704 | DAT_01e7dac8
    MOV EBP,dword ptr [0x01c51d14]      ; 0053e70a | DAT_01c51d14
    SUB EAX,0x2                         ; 0053e710
    PUSH EBP                            ; 0053e713
    ADD EDI,EAX                         ; 0053e714
    MOV EAX,dword ptr [ESP + 0x70]      ; 0053e716
    PUSH EAX                            ; 0053e71a
    LEA EAX,[ESP + 0x8]                 ; 0053e71b
    PUSH EAX                            ; 0053e71f
    MOV dword ptr [0x01e7dac8],EDI      ; 0053e720 | DAT_01e7dac8
    CALL engine_special.cpp_drawPolygon2_FUN_00582370 ; 0053e726
        ;   XREF to: 00582370 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_drawPolygon2_FUN_00582370()
    ADD ESP,0xc                         ; 0053e72b
    ADD ESP,0x54                        ; 0053e72e
        ;   Label: LAB_0053e72e
    POP EBP                             ; 0053e731
    POP EDI                             ; 0053e732
    POP ESI                             ; 0053e733
    POP EBX                             ; 0053e734
    RET                                 ; 0053e735
    INC EDI                             ; 0053e736
        ;   Label: LAB_0053e736
    JMP 0x0053e6ad                      ; 0053e737
        ;   XREF to: 0053e6ad (UNCONDITIONAL_JUMP)  ; LAB_0053e6ad
    MOV EDX,dword ptr [ESP + 0x68]      ; 0053e73c
        ;   Label: LAB_0053e73c
    MOV EDX,dword ptr [EDX + 0x8]       ; 0053e740
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e743
    SUB EAX,EDX                         ; 0053e74a
    SHL EAX,0x4                         ; 0053e74c
    MOV EDX,dword ptr [ESP + 0x68]      ; 0053e74f
    ADD EAX,0x629014                    ; 0053e753 | DAT_00629014
    MOV EDX,dword ptr [EDX + 0x4]       ; 0053e758
    PUSH EAX                            ; 0053e75b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e75c
    SUB EAX,EDX                         ; 0053e763
    SHL EAX,0x4                         ; 0053e765
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0053e768
    ADD EAX,0x629014                    ; 0053e76c | DAT_00629014
    MOV EDX,dword ptr [EDX]             ; 0053e771
    PUSH EAX                            ; 0053e773
    LEA EAX,[EDX*0x4 + 0x0]             ; 0053e774
    SUB EAX,EDX                         ; 0053e77b
    SHL EAX,0x4                         ; 0053e77d
    ADD EAX,0x629014                    ; 0053e780 | DAT_00629014
    PUSH EAX                            ; 0053e785
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 0053e786
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 0053e78b
    TEST EAX,EAX                        ; 0053e78e
    JNZ 0x0053e6bd                      ; 0053e790
        ;   XREF to: 0053e6bd (CONDITIONAL_JUMP)  ; LAB_0053e6bd
    ADD ESP,0x54                        ; 0053e796
    POP EBP                             ; 0053e799
    POP EDI                             ; 0053e79a
    POP ESI                             ; 0053e79b
    POP EBX                             ; 0053e79c
    RET                                 ; 0053e79d
    MOV ESI,0x4b0                       ; 0053e79e
        ;   Label: LAB_0053e79e
    MOV ECX,dword ptr [ESP + 0x6c]      ; 0053e7a3
    XOR EDI,EDI                         ; 0053e7a7
    MOV EDX,dword ptr [0x01e7dac8]      ; 0053e7a9 | DAT_01e7dac8
    MOV dword ptr [0x01e7dac0],EDI      ; 0053e7af | DAT_01e7dac0
    MOV dword ptr [0x01e7d5b8],EDI      ; 0053e7b5 | DAT_01e7d5b8
    MOV dword ptr [ESP + 0x48],EDI      ; 0053e7bb
    INC EDX                             ; 0053e7bf
    MOV dword ptr [0x01e7dabc],ESI      ; 0053e7c0 | DAT_01e7dabc
    MOV dword ptr [0x01e7dac8],EDX      ; 0053e7c6 | DAT_01e7dac8
    TEST ECX,ECX                        ; 0053e7cc
    JLE 0x0053e839                      ; 0053e7ce
        ;   XREF to: 0053e839 (CONDITIONAL_JUMP)  ; LAB_0053e839
    MOV EAX,dword ptr [ESP + 0x68]      ; 0053e7d0
    MOV dword ptr [ESP + 0x44],EAX      ; 0053e7d4
    MOV EAX,dword ptr [ESP + 0x48]      ; 0053e7d8
        ;   Label: LAB_0053e7d8
    MOV EBX,dword ptr [ESP + 0x6c]      ; 0053e7dc
    INC EAX                             ; 0053e7e0
    CMP EAX,EBX                         ; 0053e7e1
    JL 0x0053e7e7                       ; 0053e7e3
        ;   XREF to: 0053e7e7 (CONDITIONAL_JUMP)  ; LAB_0053e7e7
    XOR EAX,EAX                         ; 0053e7e5
    MOV EDX,dword ptr [ESP + 0x44]      ; 0053e7e7
        ;   Label: LAB_0053e7e7
    IMUL EBP,dword ptr [EDX],0x30       ; 0053e7eb
    MOV ESI,dword ptr [ESP + 0x68]      ; 0053e7ee
    SHL EAX,0x2                         ; 0053e7f2
    ADD EAX,ESI                         ; 0053e7f5
    IMUL EAX,dword ptr [EAX],0x30       ; 0053e7f7
    ADD EBP,0x629014                    ; 0053e7fa | DAT_00629014
    ADD EAX,0x629014                    ; 0053e800 | DAT_00629014
    MOV EBX,EBP                         ; 0053e805
    MOV ECX,dword ptr [EBP + 0x14]      ; 0053e807 | DAT_00629028
    MOV ESI,dword ptr [EAX + 0x14]      ; 0053e80a | DAT_00629028
    SAR ECX,0x10                        ; 0053e80d
    SAR ESI,0x10                        ; 0053e810
    MOV EDI,EAX                         ; 0053e813
    CMP ECX,ESI                         ; 0053e815
    JNZ 0x0053e968                      ; 0053e817
        ;   XREF to: 0053e968 (CONDITIONAL_JUMP)  ; LAB_0053e968
    MOV ESI,dword ptr [ESP + 0x44]      ; 0053e81d
        ;   Label: LAB_0053e81d
    MOV EDI,dword ptr [ESP + 0x48]      ; 0053e821
    MOV EBP,dword ptr [ESP + 0x6c]      ; 0053e825
    ADD ESI,0x4                         ; 0053e829
    INC EDI                             ; 0053e82c
    MOV dword ptr [ESP + 0x44],ESI      ; 0053e82d
    MOV dword ptr [ESP + 0x48],EDI      ; 0053e831
    CMP EDI,EBP                         ; 0053e835
    JL 0x0053e7d8                       ; 0053e837
        ;   XREF to: 0053e7d8 (CONDITIONAL_JUMP)  ; LAB_0053e7d8
    PUSH 0x0                            ; 0053e839
        ;   Label: LAB_0053e839
    MOV EAX,[0x01e7dabc]                ; 0053e83b | DAT_01e7dabc
    PUSH EAX                            ; 0053e840
    CALL engine_prim.c_FUN_0053db80     ; 0053e841
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e846
    MOV EBP,EAX                         ; 0053e849
    TEST EAX,EAX                        ; 0053e84b
    JZ 0x0053e72e                       ; 0053e84d
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
    PUSH EAX                            ; 0053e853
    MOV EDX,dword ptr [0x01e7dabc]      ; 0053e854 | DAT_01e7dabc
    PUSH EDX                            ; 0053e85a
    CALL engine_prim.c_FUN_0053db80     ; 0053e85b
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e860
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e863
    TEST EAX,EAX                        ; 0053e867
    JZ 0x0053e72e                       ; 0053e869
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
    MOV EAX,[0x01e7dabc]                ; 0053e86f | DAT_01e7dabc
    MOV ECX,dword ptr [0x00622a84]      ; 0053e874 | DAT_00622a84
    MOV dword ptr [ESP + 0x4c],EAX      ; 0053e87a
    CMP EAX,ECX                         ; 0053e87e
    JGE 0x0053e72e                      ; 0053e880
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
        ;   Label: LAB_0053e880
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053e886
    CMP EAX,dword ptr [EBP + 0x4]       ; 0053e88a
    JGE 0x0053eb4f                      ; 0053e88d
        ;   XREF to: 0053eb4f (CONDITIONAL_JUMP)  ; LAB_0053eb4f
    MOV EDX,dword ptr [ESP + 0x50]      ; 0053e893
        ;   Label: LAB_0053e893
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0053e897
    CMP EAX,dword ptr [EDX + 0x4]       ; 0053e89b
    JL 0x0053e8bc                       ; 0053e89e
        ;   XREF to: 0053e8bc (CONDITIONAL_JUMP)  ; LAB_0053e8bc
    PUSH EBP                            ; 0053e8a0
    PUSH EAX                            ; 0053e8a1
    MOV dword ptr [EDX],0xffffffff      ; 0053e8a2
    CALL engine_prim.c_FUN_0053db80     ; 0053e8a8
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053e8ad
    MOV dword ptr [ESP + 0x50],EAX      ; 0053e8b0
    TEST EAX,EAX                        ; 0053e8b4
    JZ 0x0053e72e                       ; 0053e8b6
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
    MOV EDI,dword ptr [ESP + 0x50]      ; 0053e8bc
        ;   Label: LAB_0053e8bc
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0053e8c0
    MOV ESI,EBP                         ; 0053e8c4
    CALL engine_special.cpp_FUN_00580127 ; 0053e8c6
        ;   XREF to: 00580127 (UNCONDITIONAL_CALL)  ; undefined engine_special.cpp_FUN_00580127()
    MOV EAX,dword ptr [EBP + 0xc]       ; 0053e8cb
    ADD dword ptr [EBP + 0x8],EAX       ; 0053e8ce
    MOV EBX,dword ptr [EBP + 0x18]      ; 0053e8d1
    MOV ESI,dword ptr [EBP + 0x20]      ; 0053e8d4
    MOV EDI,dword ptr [EBP + 0x10]      ; 0053e8d7
    MOV EDX,dword ptr [EBP + 0x28]      ; 0053e8da
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0053e8dd
    MOV ECX,dword ptr [EBP + 0x30]      ; 0053e8e0
    ADD EBX,EAX                         ; 0053e8e3
    MOV EAX,dword ptr [EBP + 0x24]      ; 0053e8e5
    MOV dword ptr [EBP + 0x18],EBX      ; 0053e8e8
    ADD ESI,EAX                         ; 0053e8eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0053e8ed
    MOV dword ptr [EBP + 0x20],ESI      ; 0053e8f0
    ADD EDI,EAX                         ; 0053e8f3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0053e8f5
    MOV dword ptr [EBP + 0x10],EDI      ; 0053e8f8
    ADD EDX,EAX                         ; 0053e8fb
    MOV EAX,dword ptr [EBP + 0x34]      ; 0053e8fd
    MOV dword ptr [EBP + 0x28],EDX      ; 0053e900
    ADD ECX,EAX                         ; 0053e903
    MOV EAX,dword ptr [ESP + 0x50]      ; 0053e905
    MOV dword ptr [EBP + 0x30],ECX      ; 0053e909
    MOV EDX,dword ptr [ESP + 0x50]      ; 0053e90c
    MOV EAX,dword ptr [EAX + 0xc]       ; 0053e910
    MOV EBX,dword ptr [EDX + 0x8]       ; 0053e913
    MOV ESI,dword ptr [EDX + 0x18]      ; 0053e916
    ADD EBX,EAX                         ; 0053e919
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0053e91b
    MOV dword ptr [EDX + 0x8],EBX       ; 0053e91e
    ADD ESI,EAX                         ; 0053e921
    MOV dword ptr [EDX + 0x18],ESI      ; 0053e923
    MOV EDI,dword ptr [EDX + 0x20]      ; 0053e926
    MOV ECX,dword ptr [EDX + 0x10]      ; 0053e929
    MOV EBX,dword ptr [EDX + 0x28]      ; 0053e92c
    MOV EAX,dword ptr [EDX + 0x24]      ; 0053e92f
    MOV ESI,dword ptr [EDX + 0x30]      ; 0053e932
    ADD EDI,EAX                         ; 0053e935
    MOV EAX,dword ptr [EDX + 0x14]      ; 0053e937
    MOV dword ptr [EDX + 0x20],EDI      ; 0053e93a
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0053e93d
    ADD ECX,EAX                         ; 0053e941
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0053e943
    MOV dword ptr [EDX + 0x10],ECX      ; 0053e946
    ADD EBX,EAX                         ; 0053e949
    MOV EAX,dword ptr [EDX + 0x34]      ; 0053e94b
    MOV dword ptr [EDX + 0x28],EBX      ; 0053e94e
    ADD ESI,EAX                         ; 0053e951
    INC EDI                             ; 0053e953
    MOV dword ptr [EDX + 0x30],ESI      ; 0053e954
    MOV EDX,dword ptr [0x00622a84]      ; 0053e957 | DAT_00622a84
    MOV dword ptr [ESP + 0x4c],EDI      ; 0053e95d
    CMP EDI,EDX                         ; 0053e961
    JMP 0x0053e880                      ; 0053e963
        ;   XREF to: 0053e880 (UNCONDITIONAL_JUMP)  ; LAB_0053e880
    MOV EDX,dword ptr [EBP + 0x14]      ; 0053e968 | DAT_00629028
        ;   Label: LAB_0053e968
    CMP EDX,dword ptr [EAX + 0x14]      ; 0053e96b | DAT_00629028
    JLE 0x0053e97a                      ; 0053e96e
        ;   XREF to: 0053e97a (CONDITIONAL_JUMP)  ; LAB_0053e97a
    MOV EBX,EAX                         ; 0053e970
    MOV EDI,EBP                         ; 0053e972
    MOV EAX,ECX                         ; 0053e974
    MOV ECX,ESI                         ; 0053e976
    MOV ESI,EAX                         ; 0053e978
    IMUL EBP,dword ptr [0x01e7d5b8],0x50 ; 0053e97a | DAT_01e7d5b8
        ;   Label: LAB_0053e97a
    ADD EBP,0x1e7d5bc                   ; 0053e981
    MOV dword ptr [EBP],ECX             ; 0053e987 | DAT_01e7d5bc
    MOV EDX,dword ptr [0x01e7dabc]      ; 0053e98a | DAT_01e7dabc
    MOV dword ptr [EBP + 0x4],ESI       ; 0053e990
    CMP ECX,EDX                         ; 0053e993
    JGE 0x0053e99d                      ; 0053e995
        ;   XREF to: 0053e99d (CONDITIONAL_JUMP)  ; LAB_0053e99d
    MOV dword ptr [0x01e7dabc],ECX      ; 0053e997 | DAT_01e7dabc
    CMP ESI,dword ptr [0x01e7dac0]      ; 0053e99d | DAT_01e7dac0
        ;   Label: LAB_0053e99d
    JLE 0x0053e9ab                      ; 0053e9a3
        ;   XREF to: 0053e9ab (CONDITIONAL_JUMP)  ; LAB_0053e9ab
    MOV dword ptr [0x01e7dac0],ESI      ; 0053e9a5 | DAT_01e7dac0
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053e9ab | DAT_00629028
        ;   Label: LAB_0053e9ab
    MOV ECX,dword ptr [EDI + 0x14]      ; 0053e9ae | DAT_00629028
    SUB ECX,ESI                         ; 0053e9b1
    CMP ECX,0x10000                     ; 0053e9b3
    JNC 0x0053eb03                      ; 0053e9b9
        ;   XREF to: 0053eb03 (CONDITIONAL_JUMP)  ; LAB_0053eb03
    XOR ECX,ECX                         ; 0053e9bf
    MOV EAX,dword ptr [EDI + 0x10]      ; 0053e9c1 | DAT_00629024
        ;   Label: LAB_0053e9c1
    MOV EDX,dword ptr [EBX + 0x10]      ; 0053e9c4 | DAT_00629024
    MOV ESI,dword ptr [EBX + 0x14]      ; 0053e9c7 | DAT_00629028
    SUB EAX,EDX                         ; 0053e9ca
    AND ESI,0xffff                      ; 0053e9cc
    MOV EDX,EAX                         ; 0053e9d2
    MOV EAX,ECX                         ; 0053e9d4
    XOR SI,0xffff                       ; 0053e9d6
    IMUL EDX                            ; 0053e9da
    SHRD EAX,EDX,0x10                   ; 0053e9dc
    MOV EDX,EAX                         ; 0053e9e0
    MOV dword ptr [EBP + 0xc],EAX       ; 0053e9e2
    MOV EAX,ESI                         ; 0053e9e5
    IMUL EDX                            ; 0053e9e7
    SHRD EAX,EDX,0x10                   ; 0053e9e9
    MOV dword ptr [ESP + 0x40],EAX      ; 0053e9ed
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053e9f1
    MOV EAX,dword ptr [EBX + 0x10]      ; 0053e9f5 | DAT_00629024
    ADD EAX,EDX                         ; 0053e9f8
    MOV dword ptr [EBP + 0x8],EAX       ; 0053e9fa
    MOV EAX,dword ptr [EDI + 0x18]      ; 0053e9fd | DAT_0062902c
    MOV EDX,dword ptr [EBX + 0x18]      ; 0053ea00 | DAT_0062902c
    SUB EAX,EDX                         ; 0053ea03
    MOV EDX,EAX                         ; 0053ea05
    MOV EAX,ECX                         ; 0053ea07
    IMUL EDX                            ; 0053ea09
    SHRD EAX,EDX,0x10                   ; 0053ea0b
    MOV EDX,EAX                         ; 0053ea0f
    MOV dword ptr [EBP + 0x1c],EAX      ; 0053ea11
    MOV EAX,ESI                         ; 0053ea14
    IMUL EDX                            ; 0053ea16
    SHRD EAX,EDX,0x10                   ; 0053ea18
    MOV dword ptr [ESP + 0x40],EAX      ; 0053ea1c
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053ea20
    MOV EAX,dword ptr [EBX + 0x18]      ; 0053ea24 | DAT_0062902c
    ADD EAX,EDX                         ; 0053ea27
    MOV dword ptr [EBP + 0x18],EAX      ; 0053ea29
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0053ea2c | DAT_00629030
    MOV EDX,dword ptr [EBX + 0x1c]      ; 0053ea2f | DAT_00629030
    SUB EAX,EDX                         ; 0053ea32
    MOV EDX,EAX                         ; 0053ea34
    MOV EAX,ECX                         ; 0053ea36
    IMUL EDX                            ; 0053ea38
    SHRD EAX,EDX,0x10                   ; 0053ea3a
    MOV EDX,EAX                         ; 0053ea3e
    MOV dword ptr [EBP + 0x24],EAX      ; 0053ea40
    MOV EAX,ESI                         ; 0053ea43
    IMUL EDX                            ; 0053ea45
    SHRD EAX,EDX,0x10                   ; 0053ea47
    MOV dword ptr [ESP + 0x40],EAX      ; 0053ea4b
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053ea4f
    MOV EAX,dword ptr [EBX + 0x1c]      ; 0053ea53 | DAT_00629030
    ADD EAX,EDX                         ; 0053ea56
    MOV dword ptr [EBP + 0x20],EAX      ; 0053ea58
    MOV EAX,dword ptr [EDI + 0x20]      ; 0053ea5b | DAT_00629034
    MOV EDX,dword ptr [EBX + 0x20]      ; 0053ea5e | DAT_00629034
    SUB EAX,EDX                         ; 0053ea61
    MOV EDX,EAX                         ; 0053ea63
    MOV EAX,ECX                         ; 0053ea65
    IMUL EDX                            ; 0053ea67
    SHRD EAX,EDX,0x10                   ; 0053ea69
    MOV EDX,EAX                         ; 0053ea6d
    MOV dword ptr [EBP + 0x14],EAX      ; 0053ea6f
    MOV EAX,ESI                         ; 0053ea72
    IMUL EDX                            ; 0053ea74
    SHRD EAX,EDX,0x10                   ; 0053ea76
    MOV dword ptr [ESP + 0x40],EAX      ; 0053ea7a
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053ea7e
    MOV EAX,dword ptr [EBX + 0x20]      ; 0053ea82 | DAT_00629034
    ADD EAX,EDX                         ; 0053ea85
    MOV dword ptr [EBP + 0x10],EAX      ; 0053ea87
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0053ea8a | DAT_00629040
    MOV EDX,dword ptr [EBX + 0x2c]      ; 0053ea8d | DAT_00629040
    SUB EAX,EDX                         ; 0053ea90
    MOV EDX,EAX                         ; 0053ea92
    MOV EAX,ECX                         ; 0053ea94
    IMUL EDX                            ; 0053ea96
    SHRD EAX,EDX,0x10                   ; 0053ea98
    MOV EDX,EAX                         ; 0053ea9c
    MOV dword ptr [EBP + 0x34],EAX      ; 0053ea9e
    MOV EAX,ESI                         ; 0053eaa1
    IMUL EDX                            ; 0053eaa3
    SHRD EAX,EDX,0x10                   ; 0053eaa5
    MOV dword ptr [ESP + 0x40],EAX      ; 0053eaa9
    MOV EDX,dword ptr [ESP + 0x40]      ; 0053eaad
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0053eab1 | DAT_00629040
    ADD EAX,EDX                         ; 0053eab4
    MOV dword ptr [EBP + 0x30],EAX      ; 0053eab6
    CMP dword ptr [0x01c51d18],0x1      ; 0053eab9 | DAT_01c51d18
    JNZ 0x0053eb1b                      ; 0053eac0
        ;   XREF to: 0053eb1b (CONDITIONAL_JUMP)  ; LAB_0053eb1b
    CMP dword ptr [0x01c51d10],0x0      ; 0053eac2 | DAT_01c51d10
    JZ 0x0053eb13                       ; 0053eac9
        ;   XREF to: 0053eb13 (CONDITIONAL_JUMP)  ; LAB_0053eb13
    MOV EAX,0x7fffffff                  ; 0053eacb
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053ead0 | DAT_0062901c
    MOV EBX,EAX                         ; 0053ead3
    SUB EBX,EDX                         ; 0053ead5
    MOV EDX,EAX                         ; 0053ead7
    SUB EDX,dword ptr [EDI + 0x8]       ; 0053ead9 | DAT_0062901c
    MOV EAX,ECX                         ; 0053eadc
        ;   Label: LAB_0053eadc
    SUB EDX,EBX                         ; 0053eade
    IMUL EDX                            ; 0053eae0
    SHRD EAX,EDX,0x10                   ; 0053eae2
    MOV EDX,EAX                         ; 0053eae6
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053eae8
    MOV EAX,ESI                         ; 0053eaeb
    IMUL EDX                            ; 0053eaed
    SHRD EAX,EDX,0x10                   ; 0053eaef
    ADD EBX,EAX                         ; 0053eaf3
    MOV dword ptr [EBP + 0x28],EBX      ; 0053eaf5
    INC dword ptr [0x01e7d5b8]          ; 0053eaf8 | DAT_01e7d5b8
    JMP 0x0053e81d                      ; 0053eafe
        ;   XREF to: 0053e81d (UNCONDITIONAL_JUMP)  ; LAB_0053e81d
    MOV EAX,0xffffffff                  ; 0053eb03
        ;   Label: LAB_0053eb03
    XOR EDX,EDX                         ; 0053eb08
    DIV ECX                             ; 0053eb0a
    MOV ECX,EAX                         ; 0053eb0c
    JMP 0x0053e9c1                      ; 0053eb0e
        ;   XREF to: 0053e9c1 (UNCONDITIONAL_JUMP)  ; LAB_0053e9c1
    MOV EDX,dword ptr [EDI + 0xc]       ; 0053eb13 | DAT_00629020
        ;   Label: LAB_0053eb13
    MOV EBX,dword ptr [EBX + 0xc]       ; 0053eb16 | DAT_00629020
    JMP 0x0053eadc                      ; 0053eb19
        ;   XREF to: 0053eadc (UNCONDITIONAL_JUMP)  ; LAB_0053eadc
    MOV EAX,dword ptr [EDI + 0x8]       ; 0053eb1b | DAT_0062901c
        ;   Label: LAB_0053eb1b
    MOV EDX,dword ptr [EBX + 0x8]       ; 0053eb1e | DAT_0062901c
    SUB EAX,EDX                         ; 0053eb21
    MOV EDX,EAX                         ; 0053eb23
    MOV EAX,ECX                         ; 0053eb25
    IMUL EDX                            ; 0053eb27
    SHRD EAX,EDX,0x10                   ; 0053eb29
    MOV EDX,EAX                         ; 0053eb2d
    MOV dword ptr [EBP + 0x2c],EAX      ; 0053eb2f
    MOV EAX,ESI                         ; 0053eb32
    IMUL EDX                            ; 0053eb34
    SHRD EAX,EDX,0x10                   ; 0053eb36
    MOV EDX,EAX                         ; 0053eb3a
    MOV EAX,dword ptr [EBX + 0x8]       ; 0053eb3c | DAT_0062901c
    ADD EAX,EDX                         ; 0053eb3f
    MOV dword ptr [EBP + 0x28],EAX      ; 0053eb41
    INC dword ptr [0x01e7d5b8]          ; 0053eb44 | DAT_01e7d5b8
    JMP 0x0053e81d                      ; 0053eb4a
        ;   XREF to: 0053e81d (UNCONDITIONAL_JUMP)  ; LAB_0053e81d
    MOV EBX,dword ptr [ESP + 0x50]      ; 0053eb4f
        ;   Label: LAB_0053eb4f
    PUSH EBX                            ; 0053eb53
    PUSH EAX                            ; 0053eb54
    MOV dword ptr [EBP],0xffffffff      ; 0053eb55
    CALL engine_prim.c_FUN_0053db80     ; 0053eb5c
        ;   XREF to: 0053db80 (UNCONDITIONAL_CALL)  ; SSoftwareEdge * engine_prim.c_FUN_0053db80(int y_value, SSoftwareEdge * edge_ptr)
    ADD ESP,0x8                         ; 0053eb61
    MOV EBP,EAX                         ; 0053eb64
    TEST EAX,EAX                        ; 0053eb66
    JZ 0x0053e72e                       ; 0053eb68
        ;   XREF to: 0053e72e (CONDITIONAL_JUMP)  ; LAB_0053e72e
    JMP 0x0053e893                      ; 0053eb6e
        ;   XREF to: 0053e893 (UNCONDITIONAL_JUMP)  ; LAB_0053e893

