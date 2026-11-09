; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_drender_cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0046a6f0(CDemonRenderer *this_ptr,SMRGLHeaderPrimitive *prim)
;
; Parameters:
; CDemonRenderer * Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
;
; Referenced Globals:
;   undefined4 DAT_006141c0
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

    PUSH EBX                            ; 0046a6f0
        ;   Label: engine_drender.cpp_CDemonRenderer_renderDestReadBlendDirect_FUN_0046a6f0
    PUSH ESI                            ; 0046a6f1
    PUSH EDI                            ; 0046a6f2
    PUSH EBP                            ; 0046a6f3
    MOV EBP,dword ptr [ESP + 0x14]      ; 0046a6f4
    MOV ESI,dword ptr [ESP + 0x18]      ; 0046a6f8
    CMP dword ptr [EBP + 0xc],0x0       ; 0046a6fc
    JNZ 0x0046a776                      ; 0046a700
        ;   XREF to: 0046a776 (CONDITIONAL_JUMP)  ; LAB_0046a776
    MOV ECX,0xffffffff                  ; 0046a706
        ;   Label: LAB_0046a706
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a70b
    XOR EDX,EDX                         ; 0046a70e
    TEST EBX,EBX                        ; 0046a710
    JLE 0x0046a730                      ; 0046a712
        ;   XREF to: 0046a730 (CONDITIONAL_JUMP)  ; LAB_0046a730
    MOV EAX,ESI                         ; 0046a714
    MOV EDI,dword ptr [EBP]             ; 0046a716
    MOV EBX,dword ptr [EAX + 0x18]      ; 0046a719
        ;   Label: LAB_0046a719
    IMUL EBX,EBX,0x30                   ; 0046a71c
    INC EDX                             ; 0046a71f
    AND ECX,dword ptr [EDI + EBX*0x1 + 0x10] ; 0046a720
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a724
    ADD EAX,0x4                         ; 0046a727
    CMP EDX,EBX                         ; 0046a72a
    JL 0x0046a719                       ; 0046a72c
        ;   XREF to: 0046a719 (CONDITIONAL_JUMP)  ; LAB_0046a719
    MOV EAX,EAX                         ; 0046a72e
    TEST ECX,0x80000000                 ; 0046a730
        ;   Label: LAB_0046a730
    JZ 0x0046a73d                       ; 0046a736
        ;   XREF to: 0046a73d (CONDITIONAL_JUMP)  ; LAB_0046a73d
    TEST CL,0x1f                        ; 0046a738
    JNZ 0x0046a771                      ; 0046a73b
        ;   XREF to: 0046a771 (CONDITIONAL_JUMP)  ; LAB_0046a771
    CMP dword ptr [EBP + 0x4],0x0       ; 0046a73d
        ;   Label: LAB_0046a73d
    JZ 0x0046a78b                       ; 0046a741
        ;   XREF to: 0046a78b (CONDITIONAL_JUMP)  ; LAB_0046a78b
    MOV EDX,0x1                         ; 0046a743
    MOV EAX,0x46e9e7                    ; 0046a748
    XOR ECX,ECX                         ; 0046a74d
    MOV dword ptr [0x01c38b54],EDX      ; 0046a74f | DAT_01c38b54
    MOV dword ptr [0x01c38b58],ECX      ; 0046a755 | DAT_01c38b58
    MOV [0x01c35e6c],EAX                ; 0046a75b | DAT_01c35e6c
    LEA EAX,[ESI + 0x18]                ; 0046a760
        ;   Label: LAB_0046a760
    PUSH EAX                            ; 0046a763
    MOV EBX,dword ptr [ESI + 0x4]       ; 0046a764
    PUSH EBX                            ; 0046a767
    PUSH EBP                            ; 0046a768
    CALL engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590 ; 0046a769
        ;   XREF to: 00469590 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_clipAndFillPoly_FUN_00469590(CDemonRenderer * this_ptr, int vertex_count, int * vertex_indices)
    ADD ESP,0xc                         ; 0046a76e
    POP EBP                             ; 0046a771
        ;   Label: LAB_0046a771
    POP EDI                             ; 0046a772
    POP ESI                             ; 0046a773
    POP EBX                             ; 0046a774
    RET                                 ; 0046a775
    LEA EAX,[ESI + 0x8]                 ; 0046a776
        ;   Label: LAB_0046a776
    PUSH EAX                            ; 0046a779
    CALL engine_3d.c_isVisiblePlane_FUN_00403970 ; 0046a77a
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined engine_3d.c_isVisiblePlane_FUN_00403970()
    ADD ESP,0x4                         ; 0046a77f
    TEST EAX,EAX                        ; 0046a782
    JZ 0x0046a771                       ; 0046a784
        ;   XREF to: 0046a771 (CONDITIONAL_JUMP)  ; LAB_0046a771
    JMP 0x0046a706                      ; 0046a786
        ;   XREF to: 0046a706 (UNCONDITIONAL_JUMP)  ; LAB_0046a706
    CMP dword ptr [0x006141c0],0x20     ; 0046a78b | DAT_006141c0
        ;   Label: LAB_0046a78b
    JNZ 0x0046a7b6                      ; 0046a792
        ;   XREF to: 0046a7b6 (CONDITIONAL_JUMP)  ; LAB_0046a7b6
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0046a794 | DAT_01c35e6c
    MOV EDI,0x6                         ; 0046a79e
        ;   Label: LAB_0046a79e
    MOV EBX,0x2e7                       ; 0046a7a3
    MOV dword ptr [0x01c38b58],EDI      ; 0046a7a8 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EBX      ; 0046a7ae | DAT_01c38b54
    JMP 0x0046a760                      ; 0046a7b4
        ;   XREF to: 0046a760 (UNCONDITIONAL_JUMP)  ; LAB_0046a760
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 0046a7b6 | DAT_01c35e6c
        ;   Label: LAB_0046a7b6
    JMP 0x0046a79e                      ; 0046a7c0
        ;   XREF to: 0046a79e (UNCONDITIONAL_JUMP)  ; LAB_0046a79e

