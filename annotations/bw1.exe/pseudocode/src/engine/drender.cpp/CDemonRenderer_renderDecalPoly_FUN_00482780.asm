; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDecalPoly_FUN_00482780(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_water.cpp_FUN_005a9f10 at 005aa538
;
; Referenced Globals:
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
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

    PUSH EBX                            ; 00482780
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDecalPoly_FUN_00482780
    PUSH EBP                            ; 00482781
    SUB ESP,0x4                         ; 00482782
    MOV EBX,dword ptr [ESP + 0x10]      ; 00482785
    CMP dword ptr [EBX + 0xc],0x0       ; 00482789
    JNZ 0x00482811                      ; 0048278d
        ;   XREF to: 00482811 (CONDITIONAL_JUMP)  ; LAB_00482811
    PUSH EDI                            ; 00482793
        ;   Label: LAB_00482793
    PUSH ESI                            ; 00482794
    MOV ECX,dword ptr [EBX + 0x4]       ; 00482795
    TEST ECX,ECX                        ; 00482798
    JZ 0x0048282a                       ; 0048279a
        ;   XREF to: 0048282a (CONDITIONAL_JUMP)  ; LAB_0048282a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004827a0
    MOV EDI,dword ptr [EDX + 0x4]       ; 004827a4
    XOR EAX,EAX                         ; 004827a7
    TEST EDI,EDI                        ; 004827a9
    JLE 0x004827d0                      ; 004827ab
        ;   XREF to: 004827d0 (CONDITIONAL_JUMP)  ; LAB_004827d0
    MOV ECX,dword ptr [ESP + 0x1c]      ; 004827ad
    XOR EDX,EDX                         ; 004827b1
    MOV ESI,dword ptr [ECX + 0x18]      ; 004827b3
        ;   Label: LAB_004827b3
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 004827b6 | DAT_01bc1240 | DAT_01bc1244
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004827bc
    ADD EDX,0x4                         ; 004827c0
    INC EAX                             ; 004827c3
    MOV EBP,dword ptr [ESI + 0x4]       ; 004827c4
    ADD ECX,0xc                         ; 004827c7
    CMP EAX,EBP                         ; 004827ca
    JL 0x004827b3                       ; 004827cc
        ;   XREF to: 004827b3 (CONDITIONAL_JUMP)  ; LAB_004827b3
    MOV EAX,EAX                         ; 004827ce
    CMP dword ptr [EBX + 0x4],0x0       ; 004827d0
        ;   Label: LAB_004827d0
    JZ 0x00482883                       ; 004827d4
        ;   XREF to: 00482883 (CONDITIONAL_JUMP)  ; LAB_00482883
    XOR EBP,EBP                         ; 004827da
    MOV EDI,0x486e26                    ; 004827dc
    MOV dword ptr [0x01c51d14],EBP      ; 004827e1 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EBP      ; 004827e7 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDI      ; 004827ed | DAT_01c4f02c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004827f3
        ;   Label: LAB_004827f3
    PUSH 0x1bc1240                      ; 004827f7 | DAT_01bc1240
    MOV EDX,dword ptr [EAX + 0x4]       ; 004827fc
    PUSH EDX                            ; 004827ff
    PUSH EBX                            ; 00482800
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482801
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482806
    POP ESI                             ; 00482809
    POP EDI                             ; 0048280a
    ADD ESP,0x4                         ; 0048280b
        ;   Label: LAB_0048280b
    POP EBP                             ; 0048280e
    POP EBX                             ; 0048280f
    RET                                 ; 00482810
    MOV EAX,dword ptr [ESP + 0x14]      ; 00482811
        ;   Label: LAB_00482811
    ADD EAX,0x8                         ; 00482815
    PUSH EAX                            ; 00482818
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482819
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0048281e
    TEST EAX,EAX                        ; 00482821
    JZ 0x0048280b                       ; 00482823
        ;   XREF to: 0048280b (CONDITIONAL_JUMP)  ; LAB_0048280b
    JMP 0x00482793                      ; 00482825
        ;   XREF to: 00482793 (UNCONDITIONAL_JUMP)  ; LAB_00482793
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048282a
        ;   Label: LAB_0048282a
    CMP dword ptr [EAX + 0x4],0x0       ; 0048282e
    JLE 0x004827d0                      ; 00482832
        ;   XREF to: 004827d0 (CONDITIONAL_JUMP)  ; LAB_004827d0
    XOR EDX,EDX                         ; 00482834
    MOV EDI,dword ptr [EBX + 0x20]      ; 00482836
        ;   Label: LAB_00482836
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482839
    TEST EDI,EDI                        ; 0048283c
    JZ 0x0048285e                       ; 0048283e
        ;   XREF to: 0048285e (CONDITIONAL_JUMP)  ; LAB_0048285e
    MOV dword ptr [EDX + 0x1bc1240],ESI ; 00482840 | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_00482840
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482846
    ADD EAX,0xc                         ; 0048284a
    INC ECX                             ; 0048284d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048284e
    ADD EDX,0x4                         ; 00482851
    CMP ECX,EBP                         ; 00482854
    JGE 0x004827d0                      ; 00482856
        ;   XREF to: 004827d0 (CONDITIONAL_JUMP)  ; LAB_004827d0
    JMP 0x00482836                      ; 0048285c
        ;   XREF to: 00482836 (UNCONDITIONAL_JUMP)  ; LAB_00482836
    IMUL EDI,ESI,0x30                   ; 0048285e
        ;   Label: LAB_0048285e
    MOV dword ptr [ESP + 0x8],EDI       ; 00482861
    MOV EBP,dword ptr [ESP + 0x8]       ; 00482865
    MOV EDI,dword ptr [EBX]             ; 00482869
    ADD EBP,EDI                         ; 0048286b
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0048286d
    MOV dword ptr [EBP + 0x18],EDI      ; 00482870
    MOV EDI,dword ptr [ESP + 0x8]       ; 00482873
    MOV EBP,dword ptr [EBX]             ; 00482877
    ADD EBP,EDI                         ; 00482879
    MOV EDI,dword ptr [EAX + 0x20]      ; 0048287b
    MOV dword ptr [EBP + 0x1c],EDI      ; 0048287e
    JMP 0x00482840                      ; 00482881
        ;   XREF to: 00482840 (UNCONDITIONAL_JUMP)  ; LAB_00482840
    MOV ECX,0x41                        ; 00482883
        ;   Label: LAB_00482883
    MOV ESI,0x6                         ; 00482888
    MOV EDX,0x487d8d                    ; 0048288d
    MOV dword ptr [0x01c51d14],ECX      ; 00482892 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ESI      ; 00482898 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 0048289e | DAT_01c4f02c
    JMP 0x004827f3                      ; 004828a4
        ;   XREF to: 004827f3 (UNCONDITIONAL_JUMP)  ; LAB_004827f3

