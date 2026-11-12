; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0(CDemonRenderer *this_ptr,int param_2)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   engine_3d.c_isVisiblePlane_FUN_00403920
;   engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046b7d0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderPerspectiveTextured_FUN_0046b7d0
    PUSH ESI                            ; 0046b7d1
    PUSH EBP                            ; 0046b7d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0046b7d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0046b7d7
    CMP dword ptr [EBX + 0xc],0x0       ; 0046b7db
    JNZ 0x0046b815                      ; 0046b7df
        ;   XREF to: 0046b815 (CONDITIONAL_JUMP)  ; LAB_0046b815
    CMP dword ptr [EBX + 0x4],0x0       ; 0046b7e1
        ;   Label: LAB_0046b7e1
    JZ 0x0046b827                       ; 0046b7e5
        ;   XREF to: 0046b827 (CONDITIONAL_JUMP)  ; LAB_0046b827
    XOR ECX,ECX                         ; 0046b7e7
    MOV EDX,0x46f9a6                    ; 0046b7e9
    MOV dword ptr [0x01c6e2b4],ECX      ; 0046b7ee | DAT_01c6e2b4
    MOV dword ptr [0x01c6e2b8],ECX      ; 0046b7f4 | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDX      ; 0046b7fa | DAT_01c6b5cc
    LEA EAX,[ESI + 0x18]                ; 0046b800
        ;   Label: LAB_0046b800
    PUSH EAX                            ; 0046b803
    MOV EBP,dword ptr [ESI + 0x4]       ; 0046b804
    PUSH EBP                            ; 0046b807
    PUSH EBX                            ; 0046b808
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160 ; 0046b809
        ;   XREF to: 0046b160 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_0046b160(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046b80e
    POP EBP                             ; 0046b811
        ;   Label: LAB_0046b811
    POP ESI                             ; 0046b812
    POP EBX                             ; 0046b813
    RET                                 ; 0046b814
    LEA EAX,[ESI + 0x8]                 ; 0046b815
        ;   Label: LAB_0046b815
    PUSH EAX                            ; 0046b818
    CALL engine_3d.c_isVisiblePlane_FUN_00403920 ; 0046b819
        ;   XREF to: 00403920 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403920()
    ADD ESP,0x4                         ; 0046b81e
    TEST EAX,EAX                        ; 0046b821
    JZ 0x0046b811                       ; 0046b823
        ;   XREF to: 0046b811 (CONDITIONAL_JUMP)  ; LAB_0046b811
    JMP 0x0046b7e1                      ; 0046b825
        ;   XREF to: 0046b7e1 (UNCONDITIONAL_JUMP)  ; LAB_0046b7e1
    PUSH EDI                            ; 0046b827
        ;   Label: LAB_0046b827
    MOV EBP,0x1                         ; 0046b828
    MOV EAX,0x6                         ; 0046b82d
    MOV EDI,0x473359                    ; 0046b832
    MOV dword ptr [0x01c6e2b4],EBP      ; 0046b837 | DAT_01c6e2b4
    MOV [0x01c6e2b8],EAX                ; 0046b83d | DAT_01c6e2b8
    MOV dword ptr [0x01c6b5cc],EDI      ; 0046b842 | DAT_01c6b5cc
    POP EDI                             ; 0046b848
    JMP 0x0046b800                      ; 0046b849
        ;   XREF to: 0046b800 (UNCONDITIONAL_JUMP)  ; LAB_0046b800

