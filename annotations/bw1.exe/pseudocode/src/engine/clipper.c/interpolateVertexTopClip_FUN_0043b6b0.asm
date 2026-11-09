; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexTopClip_FUN_0043b6b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[4]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00407af0 at 00407b97
;   engine_3d.c_clipAndDrawLine3D_FUN_00407df0 at 00407e97
;   engine_clipper.c_clipPolygonToViewFrustum_FUN_0043c190 at 0043c8ab
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_00483e70 at 00483f67
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b6b0
        ;   Label: engine_clipper.c_interpolateVertexTopClip_FUN_0043b6b0
    PUSH ESI                            ; 0043b6b1
    PUSH EDI                            ; 0043b6b2
    PUSH EBP                            ; 0043b6b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043b6b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043b6b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043b6bc
    MOV EBX,dword ptr [EDI + 0x4]       ; 0043b6c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043b6c3
    MOV EAX,dword ptr [ECX + 0x4]       ; 0043b6c6
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043b6c9
    ADD EBX,EDX                         ; 0043b6cc
    ADD EAX,EBP                         ; 0043b6ce
    SUB EBX,EAX                         ; 0043b6d0
    MOV EAX,EDX                         ; 0043b6d2
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043b6d4
    SUB EAX,EDX                         ; 0043b6d7
    MOV EDX,EAX                         ; 0043b6d9
    CMP EDX,EBX                         ; 0043b6db
    JGE 0x0043b6f1                      ; 0043b6dd
        ;   XREF to: 0043b6f1 (CONDITIONAL_JUMP)  ; LAB_0043b6f1
    NEG EBX                             ; 0043b6df
    CMP EDX,EBX                         ; 0043b6e1
    JLE 0x0043b6f8                      ; 0043b6e3
        ;   XREF to: 0043b6f8 (CONDITIONAL_JUMP)  ; LAB_0043b6f8
    NEG EBX                             ; 0043b6e5
    XOR EAX,EAX                         ; 0043b6e7
    SAR EDX,0x1                         ; 0043b6e9
    RCR EAX,0x1                         ; 0043b6eb
    IDIV EBX                            ; 0043b6ed
    JMP 0x0043b6ff                      ; 0043b6ef
        ;   XREF to: 0043b6ff (UNCONDITIONAL_JUMP)  ; LAB_0043b6ff
    MOV EAX,0x7fffffff                  ; 0043b6f1
        ;   Label: LAB_0043b6f1
    JMP 0x0043b6ff                      ; 0043b6f6
        ;   XREF to: 0043b6ff (UNCONDITIONAL_JUMP)  ; LAB_0043b6ff
    NEG EBX                             ; 0043b6f8
        ;   Label: LAB_0043b6f8
    MOV EAX,0x80000000                  ; 0043b6fa
    MOV EBX,EAX                         ; 0043b6ff
        ;   Label: LAB_0043b6ff
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043b701
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043b704
    MOV EDX,EBX                         ; 0043b707
    SUB EAX,EBP                         ; 0043b709
    IMUL EDX                            ; 0043b70b
    ADD EAX,EAX                         ; 0043b70d
    ADC EDX,EDX                         ; 0043b70f
    MOV EAX,EDX                         ; 0043b711
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043b713
    ADD EAX,EDX                         ; 0043b716
    MOV dword ptr [ESI + 0x8],EAX       ; 0043b718
    MOV dword ptr [ESI + 0x4],EAX       ; 0043b71b
    MOV EAX,dword ptr [EDI]             ; 0043b71e
    SUB EAX,dword ptr [ECX]             ; 0043b720
    MOV EDX,EBX                         ; 0043b722
    IMUL EDX                            ; 0043b724
    ADD EAX,EAX                         ; 0043b726
    ADC EDX,EDX                         ; 0043b728
    MOV EAX,EDX                         ; 0043b72a
    MOV EDX,dword ptr [ECX]             ; 0043b72c
    ADD EAX,EDX                         ; 0043b72e
    MOV dword ptr [ESI],EAX             ; 0043b730
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043b732
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043b735
    MOV EDX,EBX                         ; 0043b738
    SUB EAX,EBP                         ; 0043b73a
    IMUL EDX                            ; 0043b73c
    ADD EAX,EAX                         ; 0043b73e
    ADC EDX,EDX                         ; 0043b740
    MOV EAX,EDX                         ; 0043b742
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043b744
    ADD EAX,EDX                         ; 0043b747
    MOV dword ptr [ESI + 0x20],EAX      ; 0043b749
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043b74c
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043b74f
    MOV EDX,EBX                         ; 0043b752
    IMUL EDX                            ; 0043b754
    ADD EAX,EAX                         ; 0043b756
    ADC EDX,EDX                         ; 0043b758
    MOV EAX,EDX                         ; 0043b75a
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043b75c
    ADD EAX,EDX                         ; 0043b75f
    MOV dword ptr [ESI + 0x2c],EAX      ; 0043b761
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043b764
    MOV EBP,dword ptr [ECX + 0x18]      ; 0043b767
    MOV EDX,EBX                         ; 0043b76a
    SUB EAX,EBP                         ; 0043b76c
    IMUL EDX                            ; 0043b76e
    ADD EAX,EAX                         ; 0043b770
    ADC EDX,EDX                         ; 0043b772
    MOV EAX,EDX                         ; 0043b774
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043b776
    ADD EAX,EDX                         ; 0043b779
    MOV dword ptr [ESI + 0x18],EAX      ; 0043b77b
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043b77e
    SUB EAX,dword ptr [ECX + 0x1c]      ; 0043b781
    MOV EDX,EBX                         ; 0043b784
    IMUL EDX                            ; 0043b786
    ADD EAX,EAX                         ; 0043b788
    ADC EDX,EDX                         ; 0043b78a
    MOV EAX,EDX                         ; 0043b78c
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043b78e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043b791
    ADD EDX,EAX                         ; 0043b798
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043b79a
    POP EBP                             ; 0043b79d
    POP EDI                             ; 0043b79e
    POP ESI                             ; 0043b79f
    POP EBX                             ; 0043b7a0
    RET                                 ; 0043b7a1

