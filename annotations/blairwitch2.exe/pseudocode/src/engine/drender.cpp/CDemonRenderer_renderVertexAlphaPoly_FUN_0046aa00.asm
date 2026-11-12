; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00(CDemonRenderer *this_ptr,SMRGLPrimitivePoly *poly)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLPrimitivePoly * Stack[0x8]:4   poly
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_fire.cpp_CLaserBeam_render_FUN_00497800 at 004986e0
;   core_manpuz.cpp_FUN_004e63c0 at 004e67ab
;   core_path.cpp_CPathMap_renderPathMap_FUN_00513950 at 00513d1c
;   core_path.cpp_renderGridQuad_FUN_00513720 at 00513936
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c84
;   undefined4 DAT_01ba5c88
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403970
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046aa00
        ;   Label: engine_drender.cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0046aa00
    PUSH ESI                            ; 0046aa01
    PUSH EDI                            ; 0046aa02
    PUSH EBP                            ; 0046aa03
    SUB ESP,0x4                         ; 0046aa04
    MOV EBX,dword ptr [ESP + 0x18]      ; 0046aa07
    CMP dword ptr [EBX + 0xc],0x0       ; 0046aa0b
    JNZ 0x0046aaae                      ; 0046aa0f
        ;   XREF to: 0046aaae (CONDITIONAL_JUMP)  ; LAB_0046aaae
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aa15
        ;   Label: LAB_0046aa15
    MOV ECX,0xffffffff                  ; 0046aa19
    XOR EDX,EDX                         ; 0046aa1e
    MOV ESI,dword ptr [EAX + 0x4]       ; 0046aa20
    MOV dword ptr [ESP],ECX             ; 0046aa23
    TEST ESI,ESI                        ; 0046aa26
    JLE 0x0046aa60                      ; 0046aa28
        ;   XREF to: 0046aa60 (CONDITIONAL_JUMP)  ; LAB_0046aa60
    XOR ECX,ECX                         ; 0046aa2a
    MOV ESI,dword ptr [EAX + 0x18]      ; 0046aa2c
        ;   Label: LAB_0046aa2c
    MOV dword ptr [ECX + 0x1ba5c84],ESI ; 0046aa2f | DAT_01ba5c84 | DAT_01ba5c88
    IMUL ESI,ESI,0x30                   ; 0046aa35
    MOV EDI,dword ptr [EBX]             ; 0046aa38
    MOV ESI,dword ptr [EDI + ESI*0x1 + 0x10] ; 0046aa3a
    MOV EDI,dword ptr [ESP]             ; 0046aa3e
    ADD ECX,0x4                         ; 0046aa41
    AND EDI,ESI                         ; 0046aa44
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046aa46
    ADD EAX,0xc                         ; 0046aa4a
    INC EDX                             ; 0046aa4d
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046aa4e
    MOV dword ptr [ESP],EDI             ; 0046aa51
    CMP EDX,EBP                         ; 0046aa54
    JL 0x0046aa2c                       ; 0046aa56
        ;   XREF to: 0046aa2c (CONDITIONAL_JUMP)  ; LAB_0046aa2c
    LEA EAX,[EAX]                       ; 0046aa58
    MOV EDX,EDX                         ; 0046aa5e
    TEST byte ptr [ESP + 0x3],0x80      ; 0046aa60
        ;   Label: LAB_0046aa60
    JZ 0x0046aa6d                       ; 0046aa65
        ;   XREF to: 0046aa6d (CONDITIONAL_JUMP)  ; LAB_0046aa6d
    TEST byte ptr [ESP],0x1f            ; 0046aa67
    JNZ 0x0046aaa6                      ; 0046aa6b
        ;   XREF to: 0046aaa6 (CONDITIONAL_JUMP)  ; LAB_0046aaa6
    CMP dword ptr [EBX + 0x4],0x0       ; 0046aa6d
        ;   Label: LAB_0046aa6d
    JZ 0x0046aac7                       ; 0046aa71
        ;   XREF to: 0046aac7 (CONDITIONAL_JUMP)  ; LAB_0046aac7
    XOR ESI,ESI                         ; 0046aa73
    MOV ECX,0x46e936                    ; 0046aa75
    MOV dword ptr [0x01c38b54],ESI      ; 0046aa7a | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ESI      ; 0046aa80 | DAT_01c38b58
    MOV dword ptr [0x01c35e6c],ECX      ; 0046aa86 | DAT_01c35e6c
    LEA EAX,[EAX]                       ; 0046aa8c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aa90
        ;   Label: LAB_0046aa90
    PUSH 0x1ba5c84                      ; 0046aa94 | DAT_01ba5c84
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046aa99
    PUSH EDX                            ; 0046aa9c
    PUSH EBX                            ; 0046aa9d
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046aa9e
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046aaa3
    ADD ESP,0x4                         ; 0046aaa6
        ;   Label: LAB_0046aaa6
    POP EBP                             ; 0046aaa9
    POP EDI                             ; 0046aaaa
    POP ESI                             ; 0046aaab
    POP EBX                             ; 0046aaac
    RET                                 ; 0046aaad
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aaae
        ;   Label: LAB_0046aaae
    ADD EAX,0x8                         ; 0046aab2
    PUSH EAX                            ; 0046aab5
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046aab6
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; int engine_3d.c_isVisiblePlane_FUN_00403970(SClipPlane * plane)
    ADD ESP,0x4                         ; 0046aabb
    TEST EAX,EAX                        ; 0046aabe
    JZ 0x0046aaa6                       ; 0046aac0
        ;   XREF to: 0046aaa6 (CONDITIONAL_JUMP)  ; LAB_0046aaa6
    JMP 0x0046aa15                      ; 0046aac2
        ;   XREF to: 0046aa15 (UNCONDITIONAL_JUMP)  ; LAB_0046aa15
    CMP dword ptr [0x006141c0],0x20     ; 0046aac7 | DAT_006141c0
        ;   Label: LAB_0046aac7
    JNZ 0x0046ab39                      ; 0046aace
        ;   XREF to: 0046ab39 (CONDITIONAL_JUMP)  ; LAB_0046ab39
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046aad0 | DAT_01c35e6c
    MOV EBP,0x6                         ; 0046aada
        ;   Label: LAB_0046aada
    MOV EDI,0x367                       ; 0046aadf
    MOV EAX,dword ptr [EBX + 0x20]      ; 0046aae4
    MOV dword ptr [0x01c38b58],EBP      ; 0046aae7 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDI      ; 0046aaed | DAT_01c38b54
    TEST EAX,EAX                        ; 0046aaf3
    JNZ 0x0046aa90                      ; 0046aaf5
        ;   XREF to: 0046aa90 (CONDITIONAL_JUMP)  ; LAB_0046aa90
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0046aaf7
    MOV EDX,dword ptr [EAX + 0x4]       ; 0046aafb
    XOR ECX,ECX                         ; 0046aafe
    TEST EDX,EDX                        ; 0046ab00
    JLE 0x0046aa90                      ; 0046ab02
        ;   XREF to: 0046aa90 (CONDITIONAL_JUMP)  ; LAB_0046aa90
    XOR EDX,EDX                         ; 0046ab04
    MOV ESI,dword ptr [EDX + 0x1ba5c84] ; 0046ab06 | DAT_01ba5c84 | DAT_01ba5c88
        ;   Label: LAB_0046ab06
    IMUL ESI,ESI,0x30                   ; 0046ab0c
    MOV EDI,dword ptr [EBX]             ; 0046ab0f
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0046ab11
    MOV dword ptr [EDI + ESI*0x1 + 0x18],EBP ; 0046ab14
    MOV EDI,dword ptr [EBX]             ; 0046ab18
    ADD EDI,ESI                         ; 0046ab1a
    MOV ESI,dword ptr [EAX + 0x20]      ; 0046ab1c
    MOV dword ptr [EDI + 0x1c],ESI      ; 0046ab1f
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0046ab22
    ADD EAX,0xc                         ; 0046ab26
    INC ECX                             ; 0046ab29
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046ab2a
    ADD EDX,0x4                         ; 0046ab2d
    CMP ECX,EBP                         ; 0046ab30
    JL 0x0046ab06                       ; 0046ab32
        ;   XREF to: 0046ab06 (CONDITIONAL_JUMP)  ; LAB_0046ab06
    JMP 0x0046aa90                      ; 0046ab34
        ;   XREF to: 0046aa90 (UNCONDITIONAL_JUMP)  ; LAB_0046aa90
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046ab39 | DAT_01c35e6c
        ;   Label: LAB_0046ab39
    JMP 0x0046aada                      ; 0046ab43
        ;   XREF to: 0046aada (UNCONDITIONAL_JUMP)  ; LAB_0046aada

