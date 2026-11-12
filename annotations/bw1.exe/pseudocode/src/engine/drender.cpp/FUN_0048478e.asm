; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_0048478e(int *param_1,ushort *param_2,int param_3,int param_4,uint param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_00713a7c
;   undefined4 DAT_007c7554
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d15
;   undefined4 DAT_01c51d18
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_dpart.cpp_FUN_0047ab00
;   core_main.c_FUN_005030e0
;   core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0
;   core_zombie.cpp_FUN_005bf120
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_clipper.c_clipPolygonToViewport_FUN_0043de60
;   engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 0048478e
        ;   Label: engine_drender.cpp_FUN_0048478e
    PUSH EBX                            ; 00484790
    PUSH ESI                            ; 00484791
    PUSH EDI                            ; 00484792
    PUSH EBP                            ; 00484793
    SUB ESP,0x58                        ; 00484794
    MOV EBX,dword ptr [ESP + 0x70]      ; 00484797
    MOV ESI,dword ptr [ESP + 0x74]      ; 0048479b
    MOV EBP,dword ptr [ESP + 0x78]      ; 0048479f
    MOV EDI,dword ptr [ESP + 0x7c]      ; 004847a3
    CMP EDI,-0x1                        ; 004847a7
    JNZ 0x004847b1                      ; 004847aa
        ;   XREF to: 004847b1 (CONDITIONAL_JUMP)  ; LAB_004847b1
    MOV EDI,0x2cd                       ; 004847ac
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004847b1
        ;   Label: LAB_004847b1
    CMP dword ptr [EAX + 0x1c],0x0      ; 004847b5
    JZ 0x004847dd                       ; 004847b9
        ;   XREF to: 004847dd (CONDITIONAL_JUMP)  ; LAB_004847dd
    MOV ECX,0x5db4ae                    ; 004847bb
    MOV EAX,0xa6a                       ; 004847c0
    PUSH 0x5db4c4                       ; 004847c5
    MOV dword ptr [0x01d1d400],ECX      ; 004847ca | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004847d0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004847d5
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004847da
    MOV EAX,dword ptr [ESP + 0x6c]      ; 004847dd
        ;   Label: LAB_004847dd
    CMP dword ptr [EAX + 0x4],0x0       ; 004847e1
    JZ 0x004848cb                       ; 004847e5
        ;   XREF to: 004848cb (CONDITIONAL_JUMP)  ; LAB_004848cb
    XOR EDX,EDX                         ; 004847eb
    MOV EAX,0x486e26                    ; 004847ed
    MOV dword ptr [0x01c51d14],EDX      ; 004847f2 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDX      ; 004847f8 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 004847fe | DAT_01c4f02c
    TEST ESI,ESI                        ; 00484803
    JLE 0x0048487f                      ; 00484805
        ;   XREF to: 0048487f (CONDITIONAL_JUMP)  ; LAB_0048487f
    LEA EAX,[EBP + EBP*0x1]             ; 0048480b
    MOV dword ptr [ESP + 0x50],EAX      ; 0048480f
    CMP dword ptr [0x00713a7c],0x0      ; 00484813 | DAT_00713a7c
        ;   Label: LAB_00484813
    JNZ 0x00484887                      ; 0048481a
        ;   XREF to: 00484887 (CONDITIONAL_JUMP)  ; LAB_00484887
    XOR EDX,EDX                         ; 00484820
        ;   Label: LAB_00484820
    TEST EBP,EBP                        ; 00484822
    JLE 0x00484845                      ; 00484824
        ;   XREF to: 00484845 (CONDITIONAL_JUMP)  ; LAB_00484845
    MOV EAX,EBX                         ; 00484826
    XOR ECX,ECX                         ; 00484828
    CMP word ptr [EAX],-0x1             ; 0048482a
        ;   Label: LAB_0048482a
    JZ 0x00484845                       ; 0048482e
        ;   XREF to: 00484845 (CONDITIONAL_JUMP)  ; LAB_00484845
    ADD EAX,0x2                         ; 00484830
    XOR EDI,EDI                         ; 00484833
    ADD ECX,0x4                         ; 00484835
    MOV DI,word ptr [EAX + -0x2]        ; 00484838
    INC EDX                             ; 0048483c
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 0048483d
    CMP EDX,EBP                         ; 00484841
    JL 0x0048482a                       ; 00484843
        ;   XREF to: 0048482a (CONDITIONAL_JUMP)  ; LAB_0048482a
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00484845
        ;   Label: LAB_00484845
    CMP dword ptr [EAX + 0x10],0x0      ; 00484849
    JZ 0x004848be                       ; 0048484d
        ;   XREF to: 004848be (CONDITIONAL_JUMP)  ; LAB_004848be
    MOV EAX,ESP                         ; 0048484f
    PUSH EAX                            ; 00484851
    PUSH EDX                            ; 00484852
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 ; 00484853
        ;   XREF to: 005b9fc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count, int * vertex_indices)
    MOV EDI,dword ptr [0x007c7554]      ; 00484858 | DAT_007c7554
    ADD ESP,0x8                         ; 0048485e
    CMP EDI,0x2                         ; 00484861
    JLE 0x00484874                      ; 00484864
        ;   XREF to: 00484874 (CONDITIONAL_JUMP)  ; LAB_00484874
    PUSH EDI                            ; 00484866
    PUSH 0x7c7558                       ; 00484867
    CALL core_zombie.cpp_FUN_005bf120   ; 0048486c
        ;   XREF to: 005bf120 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bf120(SRenderVertex * vertex_buffer, int vertex_count)
    ADD ESP,0x8                         ; 00484871
        ;   Label: LAB_00484871
    MOV EDX,dword ptr [ESP + 0x50]      ; 00484874
        ;   Label: LAB_00484874
    DEC ESI                             ; 00484878
    ADD EBX,EDX                         ; 00484879
    TEST ESI,ESI                        ; 0048487b
        ;   Label: LAB_0048487b
    JG 0x00484813                       ; 0048487d
        ;   XREF to: 00484813 (CONDITIONAL_JUMP)  ; LAB_00484813
    ADD ESP,0x58                        ; 0048487f
        ;   Label: LAB_0048487f
    POP EBP                             ; 00484882
    POP EDI                             ; 00484883
    POP ESI                             ; 00484884
    POP EBX                             ; 00484885
    RET                                 ; 00484886
    XOR EDX,EDX                         ; 00484887
        ;   Label: LAB_00484887
    MOV DX,word ptr [EBX + 0x2]         ; 00484889
    IMUL EDX,EDX,0x30                   ; 0048488d
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00484890
    MOV EAX,dword ptr [EAX]             ; 00484894
    ADD EDX,EAX                         ; 00484896
    PUSH EDX                            ; 00484898
    PUSH EDX                            ; 00484899
    XOR EDX,EDX                         ; 0048489a
    MOV DX,word ptr [EBX]               ; 0048489c
    IMUL EDX,EDX,0x30                   ; 0048489f
    ADD EAX,EDX                         ; 004848a2
    PUSH EAX                            ; 004848a4
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 004848a5
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 004848aa
    TEST EAX,EAX                        ; 004848ad
    JNZ 0x00484820                      ; 004848af
        ;   XREF to: 00484820 (CONDITIONAL_JUMP)  ; LAB_00484820
    MOV EAX,dword ptr [ESP + 0x50]      ; 004848b5
    DEC ESI                             ; 004848b9
    ADD EBX,EAX                         ; 004848ba
    JMP 0x0048487b                      ; 004848bc
        ;   XREF to: 0048487b (UNCONDITIONAL_JUMP)  ; LAB_0048487b
    PUSH EDX                            ; 004848be
        ;   Label: LAB_004848be
    LEA EAX,[ESP + 0x4]                 ; 004848bf
    PUSH EAX                            ; 004848c3
    CALL core_dpart.cpp_FUN_0047ab00    ; 004848c4
        ;   XREF to: 0047ab00 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_FUN_0047ab00(CVector3i * vertex_indices, int vertex_count)
    JMP 0x00484871                      ; 004848c9
        ;   XREF to: 00484871 (UNCONDITIONAL_JUMP)  ; LAB_00484871
    CMP EDI,0xc0                        ; 004848cb
        ;   Label: LAB_004848cb
    JNZ 0x00484969                      ; 004848d1
        ;   XREF to: 00484969 (CONDITIONAL_JUMP)  ; LAB_00484969
    MOV dword ptr [0x01c4f02c],0x486de0 ; 004848d7 | DAT_01c4f02c
    MOV dword ptr [0x01c51d14],EDI      ; 004848e1 | DAT_01c51d14
        ;   Label: LAB_004848e1
    MOV dword ptr [0x01c51d18],0x6      ; 004848e7 | DAT_01c51d18
    TEST ESI,ESI                        ; 004848f1
    JLE 0x0048487f                      ; 004848f3
        ;   XREF to: 0048487f (CONDITIONAL_JUMP)  ; LAB_0048487f
    LEA EAX,[EBP + EBP*0x1]             ; 004848f5
    MOV dword ptr [ESP + 0x54],EAX      ; 004848f9
    CMP dword ptr [0x00713a7c],0x0      ; 004848fd | DAT_00713a7c
        ;   Label: LAB_004848fd
    JNZ 0x00484990                      ; 00484904
        ;   XREF to: 00484990 (CONDITIONAL_JUMP)  ; LAB_00484990
    XOR EDX,EDX                         ; 0048490a
        ;   Label: LAB_0048490a
    TEST EBP,EBP                        ; 0048490c
    JLE 0x0048492f                      ; 0048490e
        ;   XREF to: 0048492f (CONDITIONAL_JUMP)  ; LAB_0048492f
    MOV EAX,EBX                         ; 00484910
    XOR ECX,ECX                         ; 00484912
    CMP word ptr [EAX],-0x1             ; 00484914
        ;   Label: LAB_00484914
    JZ 0x0048492f                       ; 00484918
        ;   XREF to: 0048492f (CONDITIONAL_JUMP)  ; LAB_0048492f
    ADD EAX,0x2                         ; 0048491a
    XOR EDI,EDI                         ; 0048491d
    ADD ECX,0x4                         ; 0048491f
    MOV DI,word ptr [EAX + -0x2]        ; 00484922
    INC EDX                             ; 00484926
    MOV dword ptr [ESP + ECX*0x1 + -0x4],EDI ; 00484927
    CMP EDX,EBP                         ; 0048492b
    JL 0x00484914                       ; 0048492d
        ;   XREF to: 00484914 (CONDITIONAL_JUMP)  ; LAB_00484914
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0048492f
        ;   Label: LAB_0048492f
    CMP dword ptr [EAX + 0x10],0x0      ; 00484933
    JZ 0x004849e3                       ; 00484937
        ;   XREF to: 004849e3 (CONDITIONAL_JUMP)  ; LAB_004849e3
    TEST byte ptr [0x01c51d15],0x2      ; 0048493d | DAT_01c51d15
    JZ 0x004849d5                       ; 00484944
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    MOV EAX,ESP                         ; 0048494a
        ;   Label: LAB_0048494a
    PUSH EAX                            ; 0048494c
    PUSH EDX                            ; 0048494d
    CALL engine_clipper.c_clipPolygonToViewport_FUN_0043de60 ; 0048494e
        ;   XREF to: 0043de60 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipPolygonToViewport_FUN_0043de60(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00484953
        ;   Label: LAB_00484953
    MOV ECX,dword ptr [ESP + 0x54]      ; 00484956
        ;   Label: LAB_00484956
    DEC ESI                             ; 0048495a
    ADD EBX,ECX                         ; 0048495b
    TEST ESI,ESI                        ; 0048495d
    JG 0x004848fd                       ; 0048495f
        ;   XREF to: 004848fd (CONDITIONAL_JUMP)  ; LAB_004848fd
    ADD ESP,0x58                        ; 00484961
    POP EBP                             ; 00484964
    POP EDI                             ; 00484965
    POP ESI                             ; 00484966
    POP EBX                             ; 00484967
    RET                                 ; 00484968
    CMP dword ptr [0x0061b4a0],0x20     ; 00484969 | DAT_0061b4a0
        ;   Label: LAB_00484969
    JNZ 0x00484981                      ; 00484970
        ;   XREF to: 00484981 (CONDITIONAL_JUMP)  ; LAB_00484981
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00484972 | DAT_01c4f02c
    JMP 0x004848e1                      ; 0048497c
        ;   XREF to: 004848e1 (UNCONDITIONAL_JUMP)  ; LAB_004848e1
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00484981 | DAT_01c4f02c
        ;   Label: LAB_00484981
    JMP 0x004848e1                      ; 0048498b
        ;   XREF to: 004848e1 (UNCONDITIONAL_JUMP)  ; LAB_004848e1
    XOR EAX,EAX                         ; 00484990
        ;   Label: LAB_00484990
    MOV AX,word ptr [EBX + 0x2]         ; 00484992
    IMUL EDX,EAX,0x30                   ; 00484996
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00484999
    MOV EAX,dword ptr [EAX]             ; 0048499d
    ADD EDX,EAX                         ; 0048499f
    PUSH EDX                            ; 004849a1
    PUSH EDX                            ; 004849a2
    XOR EDX,EDX                         ; 004849a3
    MOV DX,word ptr [EBX]               ; 004849a5
    IMUL EDX,EDX,0x30                   ; 004849a8
    ADD EAX,EDX                         ; 004849ab
    PUSH EAX                            ; 004849ad
    CALL engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60 ; 004849ae
        ;   XREF to: 0053dd60 (UNCONDITIONAL_CALL)  ; undefined engine_prim.c_calculateTriangleWindingOrder_FUN_0053dd60()
    ADD ESP,0xc                         ; 004849b3
    TEST EAX,EAX                        ; 004849b6
    JNZ 0x0048490a                      ; 004849b8
        ;   XREF to: 0048490a (CONDITIONAL_JUMP)  ; LAB_0048490a
    MOV EAX,dword ptr [ESP + 0x54]      ; 004849be
    DEC ESI                             ; 004849c2
    ADD EBX,EAX                         ; 004849c3
    TEST ESI,ESI                        ; 004849c5
    JG 0x004848fd                       ; 004849c7
        ;   XREF to: 004848fd (CONDITIONAL_JUMP)  ; LAB_004848fd
    ADD ESP,0x58                        ; 004849cd
    POP EBP                             ; 004849d0
    POP EDI                             ; 004849d1
    POP ESI                             ; 004849d2
    POP EBX                             ; 004849d3
    RET                                 ; 004849d4
    MOV EAX,ESP                         ; 004849d5
        ;   Label: LAB_004849d5
    PUSH EAX                            ; 004849d7
    PUSH EDX                            ; 004849d8
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 004849d9
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    JMP 0x00484953                      ; 004849de
        ;   XREF to: 00484953 (UNCONDITIONAL_JUMP)  ; LAB_00484953
    CMP dword ptr [EAX + 0x4],0x0       ; 004849e3
        ;   Label: LAB_004849e3
    JZ 0x004849f2                       ; 004849e7
        ;   XREF to: 004849f2 (CONDITIONAL_JUMP)  ; LAB_004849f2
    TEST byte ptr [0x01c51d14],0x1      ; 004849e9 | DAT_01c51d14
    JZ 0x00484a09                       ; 004849f0
        ;   XREF to: 00484a09 (CONDITIONAL_JUMP)  ; LAB_00484a09
    TEST byte ptr [0x01c51d14],0x5      ; 004849f2 | DAT_01c51d14
        ;   Label: LAB_004849f2
    JZ 0x00484a09                       ; 004849f9
        ;   XREF to: 00484a09 (CONDITIONAL_JUMP)  ; LAB_00484a09
    TEST byte ptr [0x01c51d15],0x2      ; 004849fb | DAT_01c51d15
    JZ 0x004849d5                       ; 00484a02
        ;   XREF to: 004849d5 (CONDITIONAL_JUMP)  ; LAB_004849d5
    JMP 0x0048494a                      ; 00484a04
        ;   XREF to: 0048494a (UNCONDITIONAL_JUMP)  ; LAB_0048494a
    MOV EAX,ESP                         ; 00484a09
        ;   Label: LAB_00484a09
    PUSH EAX                            ; 00484a0b
    PUSH EDX                            ; 00484a0c
    CALL core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 ; 00484a0d
        ;   XREF to: 005b9fc0 (UNCONDITIONAL_CALL)  ; void core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0(int vertex_count, int * vertex_indices)
    MOV EAX,[0x007c7554]                ; 00484a12 | DAT_007c7554
    ADD ESP,0x8                         ; 00484a17
    CMP EAX,0x2                         ; 00484a1a
    JLE 0x00484956                      ; 00484a1d
        ;   XREF to: 00484956 (CONDITIONAL_JUMP)  ; LAB_00484956
    PUSH EAX                            ; 00484a23
    PUSH 0x7c7558                       ; 00484a24
    CALL core_zombie.cpp_FUN_005bf120   ; 00484a29
        ;   XREF to: 005bf120 (UNCONDITIONAL_CALL)  ; void core_zombie.cpp_FUN_005bf120(SRenderVertex * vertex_buffer, int vertex_count)
    JMP 0x00484953                      ; 00484a2e
        ;   XREF to: 00484953 (UNCONDITIONAL_JUMP)  ; LAB_00484953

