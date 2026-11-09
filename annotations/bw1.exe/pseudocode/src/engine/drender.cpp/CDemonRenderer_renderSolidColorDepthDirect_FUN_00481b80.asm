; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; XREF[4]:
;   core_mirror.cpp_CMirror_renderMirroredPrimitive_FUN_00519c20 at 00519c9c
;   core_mirror.cpp_FUN_00519ba0 at 00519bc9
;   core_set.cpp_CDemonSet_renderPrimitiveList_FUN_00555360 at 005553c6
;   core_setdir.cpp_FUN_00559f80 at 0055b013
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

    PUSH EBX                            ; 00481b80
        ;   Label: engine_drender.cpp_CDemonRenderer_renderSolidColorDepthDirect_FUN_00481b80
    PUSH ESI                            ; 00481b81
    PUSH EBP                            ; 00481b82
    MOV EBX,dword ptr [ESP + 0x10]      ; 00481b83
    MOV ESI,dword ptr [ESP + 0x14]      ; 00481b87
    CMP dword ptr [EBX + 0xc],0x0       ; 00481b8b
    JNZ 0x00481bc5                      ; 00481b8f
        ;   XREF to: 00481bc5 (CONDITIONAL_JUMP)  ; LAB_00481bc5
    CMP dword ptr [EBX + 0x4],0x0       ; 00481b91
        ;   Label: LAB_00481b91
    JZ 0x00481bd7                       ; 00481b95
        ;   XREF to: 00481bd7 (CONDITIONAL_JUMP)  ; LAB_00481bd7
    XOR ECX,ECX                         ; 00481b97
    MOV EDX,0x486e26                    ; 00481b99
    MOV dword ptr [0x01c51d14],ECX      ; 00481b9e | DAT_01c51d14
    MOV dword ptr [0x01c51d18],ECX      ; 00481ba4 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDX      ; 00481baa | DAT_01c4f02c
    LEA EAX,[ESI + 0x18]                ; 00481bb0
        ;   Label: LAB_00481bb0
    PUSH EAX                            ; 00481bb3
    MOV EBP,dword ptr [ESI + 0x4]       ; 00481bb4
    PUSH EBP                            ; 00481bb7
    PUSH EBX                            ; 00481bb8
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00481bb9
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00481bbe
    POP EBP                             ; 00481bc1
        ;   Label: LAB_00481bc1
    POP ESI                             ; 00481bc2
    POP EBX                             ; 00481bc3
    RET                                 ; 00481bc4
    LEA EAX,[ESI + 0x8]                 ; 00481bc5
        ;   Label: LAB_00481bc5
    PUSH EAX                            ; 00481bc8
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 00481bc9
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 00481bce
    TEST EAX,EAX                        ; 00481bd1
    JZ 0x00481bc1                       ; 00481bd3
        ;   XREF to: 00481bc1 (CONDITIONAL_JUMP)  ; LAB_00481bc1
    JMP 0x00481b91                      ; 00481bd5
        ;   XREF to: 00481b91 (UNCONDITIONAL_JUMP)  ; LAB_00481b91
    PUSH EDI                            ; 00481bd7
        ;   Label: LAB_00481bd7
    MOV EBP,0xc0                        ; 00481bd8
    MOV EAX,0x6                         ; 00481bdd
    MOV EDI,0x487148                    ; 00481be2
    MOV dword ptr [0x01c51d14],EBP      ; 00481be7 | DAT_01c51d14
    MOV [0x01c51d18],EAX                ; 00481bed | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],EDI      ; 00481bf2 | DAT_01c4f02c
    POP EDI                             ; 00481bf8
    JMP 0x00481bb0                      ; 00481bf9
        ;   XREF to: 00481bb0 (UNCONDITIONAL_JUMP)  ; LAB_00481bb0

