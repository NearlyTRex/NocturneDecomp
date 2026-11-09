; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_0043b7b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[5]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0 at 00407bcc
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0 at 00407ecc
;   engine_clipper.c_FUN_0043bd8e at 0043be59
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c95a
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 at 00483f9b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b7b0
        ;   Label: engine_clipper.c_interpolateVertexBottomClip_FUN_0043b7b0
    PUSH ESI                            ; 0043b7b1
    PUSH EDI                            ; 0043b7b2
    PUSH EBP                            ; 0043b7b3
    MOV ESI,dword ptr [ESP + 0x14]      ; 0043b7b4
    MOV EBP,dword ptr [ESP + 0x18]      ; 0043b7b8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043b7bc
    MOV EDX,dword ptr [ESI + 0x4]       ; 0043b7c0
    MOV ECX,dword ptr [ESI + 0x8]       ; 0043b7c3
    MOV EBX,dword ptr [EBP + 0x8]       ; 0043b7c6
    ADD EDX,ECX                         ; 0043b7c9
    MOV ECX,dword ptr [EBP + 0x4]       ; 0043b7cb
    ADD ECX,EBX                         ; 0043b7ce
    MOV EBX,EDX                         ; 0043b7d0
    SUB EBX,ECX                         ; 0043b7d2
    CMP EDX,EBX                         ; 0043b7d4
    JGE 0x0043b7ea                      ; 0043b7d6
        ;   XREF to: 0043b7ea (CONDITIONAL_JUMP)  ; LAB_0043b7ea
    NEG EBX                             ; 0043b7d8
    CMP EDX,EBX                         ; 0043b7da
    JLE 0x0043b7f1                      ; 0043b7dc
        ;   XREF to: 0043b7f1 (CONDITIONAL_JUMP)  ; LAB_0043b7f1
    NEG EBX                             ; 0043b7de
    XOR EAX,EAX                         ; 0043b7e0
    SAR EDX,0x1                         ; 0043b7e2
    RCR EAX,0x1                         ; 0043b7e4
    IDIV EBX                            ; 0043b7e6
    JMP 0x0043b7f8                      ; 0043b7e8
        ;   XREF to: 0043b7f8 (UNCONDITIONAL_JUMP)  ; LAB_0043b7f8
    MOV EAX,0x7fffffff                  ; 0043b7ea
        ;   Label: LAB_0043b7ea
    JMP 0x0043b7f8                      ; 0043b7ef
        ;   XREF to: 0043b7f8 (UNCONDITIONAL_JUMP)  ; LAB_0043b7f8
    NEG EBX                             ; 0043b7f1
        ;   Label: LAB_0043b7f1
    MOV EAX,0x80000000                  ; 0043b7f3
    MOV ECX,EAX                         ; 0043b7f8
        ;   Label: LAB_0043b7f8
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043b7fa
    MOV EAX,dword ptr [ESI + 0x8]       ; 0043b7fd
    SUB EDX,EAX                         ; 0043b800
    MOV EAX,EDX                         ; 0043b802
    MOV EDX,ECX                         ; 0043b804
    IMUL EDX                            ; 0043b806
    ADD EAX,EAX                         ; 0043b808
    ADC EDX,EDX                         ; 0043b80a
    MOV EAX,EDX                         ; 0043b80c
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043b80e
    ADD EAX,EDX                         ; 0043b811
    MOV dword ptr [EDI + 0x8],EAX       ; 0043b813
    MOV EDX,EAX                         ; 0043b816
    MOV dword ptr [EDI + 0x4],EAX       ; 0043b818
    NEG EDX                             ; 0043b81b
    MOV dword ptr [EDI + 0x4],EDX       ; 0043b81d
    MOV EAX,dword ptr [EBP]             ; 0043b820
    MOV EBX,dword ptr [ESI]             ; 0043b823
    MOV EDX,ECX                         ; 0043b825
    SUB EAX,EBX                         ; 0043b827
    IMUL EDX                            ; 0043b829
    ADD EAX,EAX                         ; 0043b82b
    ADC EDX,EDX                         ; 0043b82d
    MOV EAX,EDX                         ; 0043b82f
    MOV EDX,dword ptr [ESI]             ; 0043b831
    ADD EAX,EDX                         ; 0043b833
    MOV dword ptr [EDI],EAX             ; 0043b835
    MOV EDX,dword ptr [EBP + 0x20]      ; 0043b837
    MOV EAX,dword ptr [ESI + 0x20]      ; 0043b83a
    SUB EDX,EAX                         ; 0043b83d
    MOV EAX,EDX                         ; 0043b83f
    MOV EDX,ECX                         ; 0043b841
    IMUL EDX                            ; 0043b843
    ADD EAX,EAX                         ; 0043b845
    ADC EDX,EDX                         ; 0043b847
    MOV EAX,EDX                         ; 0043b849
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043b84b
    ADD EAX,EDX                         ; 0043b84e
    MOV dword ptr [EDI + 0x20],EAX      ; 0043b850
    MOV EAX,dword ptr [EBP + 0x2c]      ; 0043b853
    MOV EBX,dword ptr [ESI + 0x2c]      ; 0043b856
    MOV EDX,ECX                         ; 0043b859
    SUB EAX,EBX                         ; 0043b85b
    IMUL EDX                            ; 0043b85d
    ADD EAX,EAX                         ; 0043b85f
    ADC EDX,EDX                         ; 0043b861
    MOV EAX,EDX                         ; 0043b863
    MOV EDX,dword ptr [ESI + 0x2c]      ; 0043b865
    ADD EAX,EDX                         ; 0043b868
    MOV dword ptr [EDI + 0x2c],EAX      ; 0043b86a
    MOV EDX,dword ptr [EBP + 0x18]      ; 0043b86d
    MOV EAX,dword ptr [ESI + 0x18]      ; 0043b870
    SUB EDX,EAX                         ; 0043b873
    MOV EAX,EDX                         ; 0043b875
    MOV EDX,ECX                         ; 0043b877
    IMUL EDX                            ; 0043b879
    ADD EAX,EAX                         ; 0043b87b
    ADC EDX,EDX                         ; 0043b87d
    MOV EAX,EDX                         ; 0043b87f
    MOV EDX,dword ptr [ESI + 0x18]      ; 0043b881
    ADD EAX,EDX                         ; 0043b884
    MOV dword ptr [EDI + 0x18],EAX      ; 0043b886
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043b889
    SUB EAX,dword ptr [ESI + 0x1c]      ; 0043b88c
    MOV EDX,ECX                         ; 0043b88f
    IMUL EDX                            ; 0043b891
    ADD EAX,EAX                         ; 0043b893
    ADC EDX,EDX                         ; 0043b895
    MOV EAX,EDX                         ; 0043b897
    MOV EDX,dword ptr [ESI + 0x1c]      ; 0043b899
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043b89c
    ADD EAX,EDX                         ; 0043b8a3
    MOV dword ptr [EDI + 0x1c],EAX      ; 0043b8a5
    POP EBP                             ; 0043b8a8
    POP EDI                             ; 0043b8a9
    POP ESI                             ; 0043b8aa
    POP EBX                             ; 0043b8ab
    RET                                 ; 0043b8ac

