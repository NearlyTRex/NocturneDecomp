; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
;
; Referenced Globals:
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481fa0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderNearPlaneTexturedPoly_FUN_00481fa0
    PUSH ESI                            ; 00481fa1
    PUSH EDI                            ; 00481fa2
    PUSH EBP                            ; 00481fa3
    SUB ESP,0x4                         ; 00481fa4
    MOV EBX,dword ptr [ESP + 0x18]      ; 00481fa7
    CMP dword ptr [EBX + 0xc],0x0       ; 00481fab
    JNZ 0x00482061                      ; 00481faf
        ;   XREF to: 00482061 (CONDITIONAL_JUMP)  ; LAB_00482061
    MOV ECX,0xffffffff                  ; 00481fb5
        ;   Label: LAB_00481fb5
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00481fba
    MOV dword ptr [ESP],ECX             ; 00481fbe
    MOV ESI,dword ptr [EAX + 0x4]       ; 00481fc1
    XOR ECX,ECX                         ; 00481fc4
    TEST ESI,ESI                        ; 00481fc6
    JLE 0x00482000                      ; 00481fc8
        ;   XREF to: 00482000 (CONDITIONAL_JUMP)  ; LAB_00482000
    XOR EDX,EDX                         ; 00481fca
    MOV ESI,dword ptr [EAX + 0x18]      ; 00481fcc
        ;   Label: LAB_00481fcc
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 00481fcf
    IMUL ESI,ESI,0x30                   ; 00481fd5
    MOV EDI,dword ptr [EBX]             ; 00481fd8
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 00481fda
    MOV EDI,dword ptr [ESP]             ; 00481fde
    ADD EDX,0x4                         ; 00481fe1
    AND EDI,ESI                         ; 00481fe4
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00481fe6
    ADD EAX,0xc                         ; 00481fea
    INC ECX                             ; 00481fed
    MOV EBP,dword ptr [ESI + 0x4]       ; 00481fee
    MOV dword ptr [ESP],EDI             ; 00481ff1
    CMP ECX,EBP                         ; 00481ff4
    JL 0x00481fcc                       ; 00481ff6
        ;   XREF to: 00481fcc (CONDITIONAL_JUMP)  ; LAB_00481fcc
    LEA EAX,[EAX]                       ; 00481ff8
    MOV EDX,EDX                         ; 00481ffe
    TEST byte ptr [ESP + 0x3],0x80      ; 00482000
        ;   Label: LAB_00482000
    JZ 0x0048200d                       ; 00482005
        ;   XREF to: 0048200d (CONDITIONAL_JUMP)  ; LAB_0048200d
    TEST byte ptr [ESP],0x1f            ; 00482007
    JNZ 0x00482059                      ; 0048200b
        ;   XREF to: 00482059 (CONDITIONAL_JUMP)  ; LAB_00482059
    CMP dword ptr [EBX + 0x4],0x0       ; 0048200d
        ;   Label: LAB_0048200d
    JZ 0x0048207a                       ; 00482011
        ;   XREF to: 0048207a (CONDITIONAL_JUMP)  ; LAB_0048207a
    LEA EAX,[EAX]                       ; 00482013
    LEA EDX,[EDX]                       ; 00482019
    NOP                                 ; 0048201f
    CMP dword ptr [EBX + 0x4],0x0       ; 00482020
        ;   Label: LAB_00482020
    JZ 0x004820c1                       ; 00482024
        ;   XREF to: 004820c1 (CONDITIONAL_JUMP)  ; LAB_004820c1
    XOR EDI,EDI                         ; 0048202a
    MOV ESI,0x486e26                    ; 0048202c
    MOV dword ptr [0x01c51d14],EDI      ; 00482031 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00482037 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ESI      ; 0048203d | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482043
        ;   Label: LAB_00482043
    PUSH 0x1bc1240                      ; 00482047
    MOV EDX,dword ptr [EAX + 0x4]       ; 0048204c
    PUSH EDX                            ; 0048204f
    PUSH EBX                            ; 00482050
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482051
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482056
    ADD ESP,0x4                         ; 00482059
        ;   Label: LAB_00482059
    POP EBP                             ; 0048205c
    POP EDI                             ; 0048205d
    POP ESI                             ; 0048205e
    POP EBX                             ; 0048205f
    RET                                 ; 00482060
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482061
        ;   Label: LAB_00482061
    ADD EAX,0x8                         ; 00482065
    PUSH EAX                            ; 00482068
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482069
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 0048206e
    TEST EAX,EAX                        ; 00482071
    JZ 0x00482059                       ; 00482073
        ;   XREF to: 00482059 (CONDITIONAL_JUMP)  ; LAB_00482059
    JMP 0x00481fb5                      ; 00482075
        ;   XREF to: 00481fb5 (UNCONDITIONAL_JUMP)  ; LAB_00481fb5
    MOV EDX,dword ptr [EBX + 0x20]      ; 0048207a
        ;   Label: LAB_0048207a
    TEST EDX,EDX                        ; 0048207d
    JNZ 0x00482020                      ; 0048207f
        ;   XREF to: 00482020 (CONDITIONAL_JUMP)  ; LAB_00482020
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482081
    MOV ESI,dword ptr [EAX + 0x4]       ; 00482085
    XOR ECX,ECX                         ; 00482088
    TEST ESI,ESI                        ; 0048208a
    JLE 0x00482020                      ; 0048208c
        ;   XREF to: 00482020 (CONDITIONAL_JUMP)  ; LAB_00482020
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 0048208e
        ;   Label: LAB_0048208e
    IMUL ESI,ESI,0x30                   ; 00482094
    MOV EDI,dword ptr [EBX]             ; 00482097
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00482099
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0048209c
    MOV EDI,dword ptr [EBX]             ; 004820a0
    ADD EDI,ESI                         ; 004820a2
    MOV ESI,dword ptr [EAX + 0x20]      ; 004820a4
    MOV dword ptr [EDI + 0x1c],ESI      ; 004820a7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004820aa
    ADD EAX,0xc                         ; 004820ae
    INC ECX                             ; 004820b1
    MOV EDI,dword ptr [ESI + 0x4]       ; 004820b2
    ADD EDX,0x4                         ; 004820b5
    CMP ECX,EDI                         ; 004820b8
    JL 0x0048208e                       ; 004820ba
        ;   XREF to: 0048208e (CONDITIONAL_JUMP)  ; LAB_0048208e
    JMP 0x00482020                      ; 004820bc
        ;   XREF to: 00482020 (UNCONDITIONAL_JUMP)  ; LAB_00482020
    MOV EDX,0xc1                        ; 004820c1
        ;   Label: LAB_004820c1
    MOV ECX,0x3                         ; 004820c6
    MOV EAX,0x4875b0                    ; 004820cb
    MOV dword ptr [0x01c51d14],EDX      ; 004820d0 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 004820d6 | DAT_01c51d18
    MOV [0x01c4f02c],EAX                ; 004820dc | DAT_01c4f02c
    JMP 0x00482043                      ; 004820e1
        ;   XREF to: 00482043 (UNCONDITIONAL_JUMP)  ; LAB_00482043

