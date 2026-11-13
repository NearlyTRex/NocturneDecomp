; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_fire.cpp_CLaserBeam_render_FUN_004b01a0 at 004b1080
;   core_manpuz.cpp_CMansionPuzzleCircle_renderGem_FUN_00505060 at 0050544b
;   core_path.cpp_CPathMap_renderPathMap_FUN_00534ca0 at 0053506c
;   core_path.cpp_renderGridQuad_FUN_00534a70 at 00534c86
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
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

    PUSH EBX                            ; 00482f00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00482f00
    PUSH ESI                            ; 00482f01
    PUSH EDI                            ; 00482f02
    PUSH EBP                            ; 00482f03
    SUB ESP,0x4                         ; 00482f04
    MOV EBX,dword ptr [ESP + 0x18]      ; 00482f07
    CMP dword ptr [EBX + 0xc],0x0       ; 00482f0b
    JNZ 0x00482fae                      ; 00482f0f
        ;   XREF to: 00482fae (CONDITIONAL_JUMP)  ; LAB_00482fae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482f15
        ;   Label: LAB_00482f15
    MOV ECX,0xffffffff                  ; 00482f19
    XOR EDX,EDX                         ; 00482f1e
    MOV ESI,dword ptr [EAX + 0x4]       ; 00482f20
    MOV dword ptr [ESP],ECX             ; 00482f23
    TEST ESI,ESI                        ; 00482f26
    JLE 0x00482f60                      ; 00482f28
        ;   XREF to: 00482f60 (CONDITIONAL_JUMP)  ; LAB_00482f60
    XOR ECX,ECX                         ; 00482f2a
    MOV ESI,dword ptr [EAX + 0x18]      ; 00482f2c
        ;   Label: LAB_00482f2c
    MOV dword ptr [ECX + 0x1bc1240],ESI ; 00482f2f | DAT_01bc1240 | DAT_01bc1244
    IMUL ESI,ESI,0x30                   ; 00482f35
    MOV EDI,dword ptr [EBX]             ; 00482f38
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 00482f3a
    MOV EDI,dword ptr [ESP]             ; 00482f3e
    ADD ECX,0x4                         ; 00482f41
    AND EDI,ESI                         ; 00482f44
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00482f46
    ADD EAX,0xc                         ; 00482f4a
    INC EDX                             ; 00482f4d
    MOV EBP,dword ptr [ESI + 0x4]       ; 00482f4e
    MOV dword ptr [ESP],EDI             ; 00482f51
    CMP EDX,EBP                         ; 00482f54
    JL 0x00482f2c                       ; 00482f56
        ;   XREF to: 00482f2c (CONDITIONAL_JUMP)  ; LAB_00482f2c
    LEA EAX,[EAX]                       ; 00482f58
    MOV EDX,EDX                         ; 00482f5e
    TEST byte ptr [ESP + 0x3],0x80      ; 00482f60
        ;   Label: LAB_00482f60
    JZ 0x00482f6d                       ; 00482f65
        ;   XREF to: 00482f6d (CONDITIONAL_JUMP)  ; LAB_00482f6d
    TEST byte ptr [ESP],0x1f            ; 00482f67
    JNZ 0x00482fa6                      ; 00482f6b
        ;   XREF to: 00482fa6 (CONDITIONAL_JUMP)  ; LAB_00482fa6
    CMP dword ptr [EBX + 0x4],0x0       ; 00482f6d
        ;   Label: LAB_00482f6d
    JZ 0x00482fc7                       ; 00482f71
        ;   XREF to: 00482fc7 (CONDITIONAL_JUMP)  ; LAB_00482fc7
    XOR ESI,ESI                         ; 00482f73
    MOV ECX,0x486e26                    ; 00482f75
    MOV dword ptr [0x01c51d14],ESI      ; 00482f7a | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ESI      ; 00482f80 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ECX      ; 00482f86 | DAT_01c4f02c
    LEA EAX,[EAX]                       ; 00482f8c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482f90
        ;   Label: LAB_00482f90
    PUSH 0x1bc1240                      ; 00482f94 | DAT_01bc1240
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482f99
    PUSH EDX                            ; 00482f9c
    PUSH EBX                            ; 00482f9d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482f9e
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482fa3
    ADD ESP,0x4                         ; 00482fa6
        ;   Label: LAB_00482fa6
    POP EBP                             ; 00482fa9
    POP EDI                             ; 00482faa
    POP ESI                             ; 00482fab
    POP EBX                             ; 00482fac
    RET                                 ; 00482fad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482fae
        ;   Label: LAB_00482fae
    ADD EAX,0x8                         ; 00482fb2
    PUSH EAX                            ; 00482fb5
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00482fb6
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403920(SClipPlane * plane)
    ADD ESP,0x4                         ; 00482fbb
    TEST EAX,EAX                        ; 00482fbe
    JZ 0x00482fa6                       ; 00482fc0
        ;   XREF to: 00482fa6 (CONDITIONAL_JUMP)  ; LAB_00482fa6
    JMP 0x00482f15                      ; 00482fc2
        ;   XREF to: 00482f15 (UNCONDITIONAL_JUMP)  ; LAB_00482f15
    CMP dword ptr [0x0061b4a0],0x20     ; 00482fc7 | DAT_0061b4a0
        ;   Label: LAB_00482fc7
    JNZ 0x00483039                      ; 00482fce
        ;   XREF to: 00483039 (CONDITIONAL_JUMP)  ; LAB_00483039
    MOV dword ptr [0x01c4f02c],0x57de01 ; 00482fd0 | DAT_01c4f02c
    MOV EBP,0x6                         ; 00482fda
        ;   Label: LAB_00482fda
    MOV EDI,0x367                       ; 00482fdf
    MOV EAX,dword ptr [EBX + 0x20]      ; 00482fe4
    MOV dword ptr [0x01c51d18],EBP      ; 00482fe7 | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDI      ; 00482fed | DAT_01c51d14
    TEST EAX,EAX                        ; 00482ff3
    JNZ 0x00482f90                      ; 00482ff5
        ;   XREF to: 00482f90 (CONDITIONAL_JUMP)  ; LAB_00482f90
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00482ff7
    MOV EDX,dword ptr [EAX + 0x4]       ; 00482ffb
    XOR ECX,ECX                         ; 00482ffe
    TEST EDX,EDX                        ; 00483000
    JLE 0x00482f90                      ; 00483002
        ;   XREF to: 00482f90 (CONDITIONAL_JUMP)  ; LAB_00482f90
    XOR EDX,EDX                         ; 00483004
    MOV ESI,dword ptr [EDX + 0x1bc1240] ; 00483006 | DAT_01bc1240 | DAT_01bc1244
        ;   Label: LAB_00483006
    IMUL ESI,ESI,0x30                   ; 0048300c
    MOV EDI,dword ptr [EBX]             ; 0048300f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 00483011
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 00483014
    MOV EDI,dword ptr [EBX]             ; 00483018
    ADD EDI,ESI                         ; 0048301a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0048301c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0048301f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00483022
    ADD EAX,0xc                         ; 00483026
    INC ECX                             ; 00483029
    MOV EBP,dword ptr [ESI + 0x4]       ; 0048302a
    ADD EDX,0x4                         ; 0048302d
    CMP ECX,EBP                         ; 00483030
    JL 0x00483006                       ; 00483032
        ;   XREF to: 00483006 (CONDITIONAL_JUMP)  ; LAB_00483006
    JMP 0x00482f90                      ; 00483034
        ;   XREF to: 00482f90 (UNCONDITIONAL_JUMP)  ; LAB_00482f90
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00483039 | DAT_01c4f02c
        ;   Label: LAB_00483039
    JMP 0x00482fda                      ; 00483043
        ;   XREF to: 00482fda (UNCONDITIONAL_JUMP)  ; LAB_00482fda

