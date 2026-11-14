; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_drender_cpp_FUN_004826a0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01bc1240
;   undefined4 DAT_01bc1244
;   undefined4 DAT_01bc1248
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00481aa0
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 004826a0
        ;   Label: engine_drender.cpp_FUN_004826a0
    MOV AX,word ptr [EBP]               ; 004826a2
    MOV [0x01bc1240],EAX                ; 004826a6 | DAT_01bc1240
    XOR EAX,EAX                         ; 004826ab
    MOV AX,word ptr [EBP + 0x2]         ; 004826ad
    MOV [0x01bc1244],EAX                ; 004826b1 | DAT_01bc1244
    XOR EAX,EAX                         ; 004826b6
    MOV AX,word ptr [EBP + 0x4]         ; 004826b8
    MOV ESI,dword ptr [ECX + 0x4]       ; 004826bc
    MOV [0x01bc1248],EAX                ; 004826bf | DAT_01bc1248
    TEST ESI,ESI                        ; 004826c4
    JNZ 0x0048274b                      ; 004826c6
        ;   XREF to: 0048274b (CONDITIONAL_JUMP)  ; LAB_0048274b
    CMP dword ptr [0x0061b4a0],0x20     ; 004826cc | DAT_0061b4a0
    JNZ 0x00482766                      ; 004826d3
        ;   XREF to: 00482766 (CONDITIONAL_JUMP)  ; LAB_00482766
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004826d9 | DAT_01c4f02c
    MOV EBX,0x6                         ; 004826e3
        ;   Label: LAB_004826e3
    MOV EDX,0x2cd                       ; 004826e8
    MOV dword ptr [0x01c51d18],EBX      ; 004826ed | DAT_01c51d18
    MOV dword ptr [0x01c51d14],EDX      ; 004826f3 | DAT_01c51d14
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
    XOR EDI,EDI                         ; 0048274b
        ;   Label: LAB_0048274b
    MOV ESI,0x486e26                    ; 0048274d
    MOV dword ptr [0x01c51d14],EDI      ; 00482752 | DAT_01c51d14
    MOV dword ptr [0x01c51d18],EDI      ; 00482758 | DAT_01c51d18
    MOV dword ptr [0x01c4f02c],ESI      ; 0048275e | DAT_01c4f02c
    JMP 0x004826f9                      ; 00482764
        ;   XREF to: 004826f9 (UNCONDITIONAL_JUMP)  ; LAB_004826f9
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 00482766 | DAT_01c4f02c
        ;   Label: LAB_00482766
    JMP 0x004826e3                      ; 00482770
        ;   XREF to: 004826e3 (UNCONDITIONAL_JUMP)  ; LAB_004826e3

