; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_00482680(CDemonRenderer *this_ptr,SInputFace *face)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SInputFace *     Stack[0x8]:4   face
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;   int[16] g_INT_ARRAY_01bc1240
;   undefined4 g_INT_ARRAY_01bc1240[1]
;   undefined4 g_INT_ARRAY_01bc1240[2]
;   void* g_PTR_01c4f02c
;   _BIT_INTEGER32 g_BIT_INTEGER32_01c51d14
;   int g_INT_01c51d18
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00482680
        ;   Label: engine_drender.cpp_CDemonRenderer_renderAlphaBlendedFace_FUN_00482680
    PUSH ESI                            ; 00482681
    PUSH EDI                            ; 00482682
    PUSH EBP                            ; 00482683
    MOV ECX,dword ptr [ESP + 0x14]      ; 00482684
    MOV EBP,dword ptr [ESP + 0x18]      ; 00482688
    CMP dword ptr [ECX + 0x4],0x0       ; 0048268c
    JZ 0x0048270e                       ; 00482690
        ;   XREF to: 0048270e (CONDITIONAL_JUMP)  ; LAB_0048270e
    LEA EAX,[EAX]                       ; 00482692
    LEA EDX,[EDX]                       ; 00482698
    MOV EAX,EAX                         ; 0048269e
    XOR EAX,EAX                         ; 004826a0
        ;   Label: LAB_004826a0
    MOV AX,word ptr [EBP]               ; 004826a2
    MOV [0x01bc1240],EAX                ; 004826a6 | g_INT_ARRAY_01bc1240
    XOR EAX,EAX                         ; 004826ab
    MOV AX,word ptr [EBP + 0x2]         ; 004826ad
    MOV [0x01bc1244],EAX                ; 004826b1 | g_INT_ARRAY_01bc1240[1]
    XOR EAX,EAX                         ; 004826b6
    MOV AX,word ptr [EBP + 0x4]         ; 004826b8
    MOV ESI,dword ptr [ECX + 0x4]       ; 004826bc
    MOV [0x01bc1248],EAX                ; 004826bf | g_INT_ARRAY_01bc1240[2]
    TEST ESI,ESI                        ; 004826c4
    JNZ 0x0048274b                      ; 004826c6
        ;   XREF to: 0048274b (CONDITIONAL_JUMP)  ; LAB_0048274b
    CMP dword ptr [0x0061b4a0],0x20     ; 004826cc | g_INT_0061b4a0
    JNZ 0x00482766                      ; 004826d3
        ;   XREF to: 00482766 (CONDITIONAL_JUMP)  ; LAB_00482766
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004826d9 | g_PTR_01c4f02c
    MOV EBX,0x6                         ; 004826e3
        ;   Label: LAB_004826e3
    MOV EDX,0x2cd                       ; 004826e8
    MOV dword ptr [0x01c51d18],EBX      ; 004826ed | g_INT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 004826f3 | g_BIT_INTEGER32_01c51d14
    PUSH 0x1bc1240                      ; 004826f9
        ;   Label: LAB_004826f9
    PUSH 0x3                            ; 004826fe
    PUSH ECX                            ; 00482700
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0 ; 00482701
        ;   XREF to: 00481aa0 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 00482706
    POP EBP                             ; 00482709
    POP EDI                             ; 0048270a
    POP ESI                             ; 0048270b
    POP EBX                             ; 0048270c
    RET                                 ; 0048270d
    CMP dword ptr [ECX + 0x20],0x0      ; 0048270e
        ;   Label: LAB_0048270e
    JNZ 0x004826a0                      ; 00482712
        ;   XREF to: 004826a0 (CONDITIONAL_JUMP)  ; LAB_004826a0
    MOV EAX,EBP                         ; 00482714
    LEA EDI,[EBP + 0x6]                 ; 00482716
    XOR EDX,EDX                         ; 00482719
        ;   Label: LAB_00482719
    MOV DX,word ptr [EAX]               ; 0048271b
    IMUL EDX,EDX,0x30                   ; 0048271e
    XOR ESI,ESI                         ; 00482721
    MOV SI,word ptr [EAX + 0x6]         ; 00482723
    MOV EBX,dword ptr [ECX]             ; 00482727
    SHL ESI,0x8                         ; 00482729
    MOV dword ptr [EDX + EBX*0x1 + 0x18],ESI ; 0048272c
    XOR EBX,EBX                         ; 00482730
    MOV BX,word ptr [EAX + 0xc]         ; 00482732
    MOV ESI,dword ptr [ECX]             ; 00482736
    SHL EBX,0x8                         ; 00482738
    ADD EAX,0x2                         ; 0048273b
    MOV dword ptr [EDX + ESI*0x1 + 0x1c],EBX ; 0048273e
    CMP EAX,EDI                         ; 00482742
    JNZ 0x00482719                      ; 00482744
        ;   XREF to: 00482719 (CONDITIONAL_JUMP)  ; LAB_00482719
    JMP 0x004826a0                      ; 00482746
        ;   XREF to: 004826a0 (UNCONDITIONAL_JUMP)  ; LAB_004826a0
    XOR EDI,EDI                         ; 0048274b
        ;   Label: LAB_0048274b
    MOV ESI,0x486e26                    ; 0048274d
    MOV dword ptr [0x01c51d14],EDI      ; 00482752 | g_BIT_INTEGER32_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00482758 | g_INT_01c51d18
    MOV dword ptr [0x01c4f02c],ESI      ; 0048275e | g_PTR_01c4f02c
    JMP 0x004826f9                      ; 00482764
        ;   XREF to: 004826f9 (UNCONDITIONAL_JUMP)  ; LAB_004826f9
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482766 | g_PTR_01c4f02c
        ;   Label: LAB_00482766
    JMP 0x004826e3                      ; 00482770
        ;   XREF to: 004826e3 (UNCONDITIONAL_JUMP)  ; LAB_004826e3

