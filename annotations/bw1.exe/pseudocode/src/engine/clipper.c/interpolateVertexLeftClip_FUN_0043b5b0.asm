; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClip_FUN_0043b5b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0 at 00407b66
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0 at 00407e66
;   engine_clipper.c_FUN_0043bb0e at 0043bbd7
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c7fc
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 at 00483f37
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b5b0
        ;   Label: engine_clipper.c_interpolateVertexLeftClip_FUN_0043b5b0
    PUSH ESI                            ; 0043b5b1
    PUSH EDI                            ; 0043b5b2
    PUSH EBP                            ; 0043b5b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043b5b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043b5b8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043b5bc
    MOV ECX,dword ptr [ESI]             ; 0043b5c0
    ADD ECX,dword ptr [ESI + 0x8]       ; 0043b5c2
    MOV EAX,dword ptr [EBP]             ; 0043b5c5
    MOV EBX,ECX                         ; 0043b5c8
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043b5ca
    SUB EBX,EAX                         ; 0043b5cd
    SUB EBX,EDX                         ; 0043b5cf
    MOV EDX,ECX                         ; 0043b5d1
    CMP EDX,EBX                         ; 0043b5d3
    JGE 0x0043b5e9                      ; 0043b5d5
        ;   XREF to: 0043b5e9 (CONDITIONAL_JUMP)  ; LAB_0043b5e9
    NEG EBX                             ; 0043b5d7
    CMP EDX,EBX                         ; 0043b5d9
    JLE 0x0043b5f0                      ; 0043b5db
        ;   XREF to: 0043b5f0 (CONDITIONAL_JUMP)  ; LAB_0043b5f0
    NEG EBX                             ; 0043b5dd
    XOR EAX,EAX                         ; 0043b5df
    SAR EDX,0x1                         ; 0043b5e1
    RCR EAX,0x1                         ; 0043b5e3
    IDIV EBX                            ; 0043b5e5
    JMP 0x0043b5f7                      ; 0043b5e7
        ;   XREF to: 0043b5f7 (UNCONDITIONAL_JUMP)  ; LAB_0043b5f7
    MOV EAX,0x7fffffff                  ; 0043b5e9
        ;   Label: LAB_0043b5e9
    JMP 0x0043b5f7                      ; 0043b5ee
        ;   XREF to: 0043b5f7 (UNCONDITIONAL_JUMP)  ; LAB_0043b5f7
    NEG EBX                             ; 0043b5f0
        ;   Label: LAB_0043b5f0
    MOV EAX,0x80000000                  ; 0043b5f2
    MOV ECX,EAX                         ; 0043b5f7
        ;   Label: LAB_0043b5f7
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043b5f9
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043b5fc
    MOV EDX,ECX                         ; 0043b5ff
    SUB EAX,EBX                         ; 0043b601
    IMUL EDX                            ; 0043b603
    ADD EAX,EAX                         ; 0043b605
    ADC EDX,EDX                         ; 0043b607
    MOV EAX,EDX                         ; 0043b609
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043b60b
    ADD EAX,EBX                         ; 0043b60e
    MOV dword ptr [EDI + 0x8],EAX       ; 0043b610
    MOV dword ptr [EDI],EAX             ; 0043b613
    NEG EAX                             ; 0043b615
    MOV dword ptr [EDI],EAX             ; 0043b617
    MOV EAX,dword ptr [EBP + 0x4]       ; 0043b619
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043b61c
    MOV EDX,ECX                         ; 0043b61f
    IMUL EDX                            ; 0043b621
    ADD EAX,EAX                         ; 0043b623
    ADC EDX,EDX                         ; 0043b625
    MOV EAX,EDX                         ; 0043b627
    MOV EBX,dword ptr [ESI + 0x4]       ; 0043b629
    ADD EAX,EBX                         ; 0043b62c
    MOV dword ptr [EDI + 0x4],EAX       ; 0043b62e
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043b631
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043b634
    MOV EDX,ECX                         ; 0043b637
    SUB EAX,EBX                         ; 0043b639
    IMUL EDX                            ; 0043b63b
    ADD EAX,EAX                         ; 0043b63d
    ADC EDX,EDX                         ; 0043b63f
    MOV EAX,EDX                         ; 0043b641
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043b643
    ADD EAX,EBX                         ; 0043b646
    MOV dword ptr [EDI + 0x20],EAX      ; 0043b648
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043b64b
    SUB EAX,dword ptr [ESI + 0x2c]      ; 0043b64e
    MOV EDX,ECX                         ; 0043b651
    IMUL EDX                            ; 0043b653
    ADD EAX,EAX                         ; 0043b655
    ADC EDX,EDX                         ; 0043b657
    MOV EAX,EDX                         ; 0043b659
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043b65b
    ADD EAX,EBX                         ; 0043b65e
    MOV dword ptr [EDI + 0x2c],EAX      ; 0043b660
    MOV EAX,dword ptr [EBP + 0x18]      ; 0043b663
    MOV EBX,dword ptr [ESI + 0x18]      ; 0043b666
    MOV EDX,ECX                         ; 0043b669
    SUB EAX,EBX                         ; 0043b66b
    IMUL EDX                            ; 0043b66d
    ADD EAX,EAX                         ; 0043b66f
    ADC EDX,EDX                         ; 0043b671
    MOV EAX,EDX                         ; 0043b673
    MOV EBX,dword ptr [ESI + 0x18]      ; 0043b675
    ADD EAX,EBX                         ; 0043b678
    MOV dword ptr [EDI + 0x18],EAX      ; 0043b67a
    MOV EBP,dword ptr [EBP + 0x1c]      ; 0043b67d
    SUB EBP,dword ptr [ESI + 0x1c]      ; 0043b680
    MOV EDX,ECX                         ; 0043b683
    MOV EAX,EBP                         ; 0043b685
    IMUL EDX                            ; 0043b687
    ADD EAX,EAX                         ; 0043b689
    ADC EDX,EDX                         ; 0043b68b
    MOV EAX,EDX                         ; 0043b68d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0043b68f
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043b692
    ADD EAX,ECX                         ; 0043b699
    MOV dword ptr [EDI + 0x1c],EAX      ; 0043b69b
    POP EBP                             ; 0043b69e
    POP EDI                             ; 0043b69f
    POP ESI                             ; 0043b6a0
    POP EBX                             ; 0043b6a1
    RET                                 ; 0043b6a2

