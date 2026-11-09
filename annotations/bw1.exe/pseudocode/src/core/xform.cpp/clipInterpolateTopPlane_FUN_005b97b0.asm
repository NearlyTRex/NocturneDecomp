; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateTopPlane_FUN_005b97b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[2]:
;   core_xform.cpp_clipPolygonStage3_FUN_005b9c30 at 005b9d06
;   core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 at 005ba58f
;
; Referenced Globals:
;   undefined4 DAT_01c51d14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b97b0
        ;   Label: core_xform.cpp_clipInterpolateTopPlane_FUN_005b97b0
    PUSH ESI                            ; 005b97b1
    PUSH EDI                            ; 005b97b2
    PUSH EBP                            ; 005b97b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b97b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005b97b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005b97bc
    MOV EBX,dword ptr [EDI + 0x4]       ; 005b97c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 005b97c3
    MOV EAX,dword ptr [ECX + 0x4]       ; 005b97c6
    MOV EBP,dword ptr [EDI + 0x8]       ; 005b97c9
    ADD EBX,EDX                         ; 005b97cc
    ADD EAX,EBP                         ; 005b97ce
    SUB EBX,EAX                         ; 005b97d0
    MOV EAX,EDX                         ; 005b97d2
    MOV EDX,dword ptr [ECX + 0x4]       ; 005b97d4
    SUB EAX,EDX                         ; 005b97d7
    MOV EDX,EAX                         ; 005b97d9
    CMP EDX,EBX                         ; 005b97db
    JGE 0x005b97f1                      ; 005b97dd
        ;   XREF to: 005b97f1 (CONDITIONAL_JUMP)  ; LAB_005b97f1
    NEG EBX                             ; 005b97df
    CMP EDX,EBX                         ; 005b97e1
    JLE 0x005b97f8                      ; 005b97e3
        ;   XREF to: 005b97f8 (CONDITIONAL_JUMP)  ; LAB_005b97f8
    NEG EBX                             ; 005b97e5
    XOR EAX,EAX                         ; 005b97e7
    SAR EDX,0x1                         ; 005b97e9
    RCR EAX,0x1                         ; 005b97eb
    IDIV EBX                            ; 005b97ed
    JMP 0x005b97ff                      ; 005b97ef
        ;   XREF to: 005b97ff (UNCONDITIONAL_JUMP)  ; LAB_005b97ff
    MOV EAX,0x7fffffff                  ; 005b97f1
        ;   Label: LAB_005b97f1
    JMP 0x005b97ff                      ; 005b97f6
        ;   XREF to: 005b97ff (UNCONDITIONAL_JUMP)  ; LAB_005b97ff
    NEG EBX                             ; 005b97f8
        ;   Label: LAB_005b97f8
    MOV EAX,0x80000000                  ; 005b97fa
    MOV EBX,EAX                         ; 005b97ff
        ;   Label: LAB_005b97ff
    MOV EBP,dword ptr [ECX + 0x8]       ; 005b9801
    MOV EAX,dword ptr [EDI + 0x8]       ; 005b9804
    MOV EDX,EBX                         ; 005b9807
    SUB EAX,EBP                         ; 005b9809
    IMUL EDX                            ; 005b980b
    ADD EAX,EAX                         ; 005b980d
    ADC EDX,EDX                         ; 005b980f
    MOV EAX,EDX                         ; 005b9811
    MOV EDX,dword ptr [ECX + 0x8]       ; 005b9813
    ADD EAX,EDX                         ; 005b9816
    MOV dword ptr [ESI + 0x8],EAX       ; 005b9818
    MOV dword ptr [ESI + 0x4],EAX       ; 005b981b
    MOV EAX,dword ptr [EDI]             ; 005b981e
    SUB EAX,dword ptr [ECX]             ; 005b9820
    MOV EDX,EBX                         ; 005b9822
    IMUL EDX                            ; 005b9824
    ADD EAX,EAX                         ; 005b9826
    ADC EDX,EDX                         ; 005b9828
    MOV EAX,EDX                         ; 005b982a
    MOV EDX,dword ptr [ECX]             ; 005b982c
    ADD EAX,EDX                         ; 005b982e
    MOV dword ptr [ESI],EAX             ; 005b9830
    MOV AH,byte ptr [0x01c51d14]        ; 005b9832 | DAT_01c51d14
    MOV dword ptr [ESI + 0x10],0xffffffff ; 005b9838
    TEST AH,0x4                         ; 005b983f
    JNZ 0x005b9849                      ; 005b9842
        ;   XREF to: 005b9849 (CONDITIONAL_JUMP)  ; LAB_005b9849
    POP EBP                             ; 005b9844
    POP EDI                             ; 005b9845
    POP ESI                             ; 005b9846
    POP EBX                             ; 005b9847
    RET                                 ; 005b9848
    MOV EAX,dword ptr [EDI + 0x20]      ; 005b9849
        ;   Label: LAB_005b9849
    MOV EDI,dword ptr [ECX + 0x20]      ; 005b984c
    MOV EDX,EBX                         ; 005b984f
    SUB EAX,EDI                         ; 005b9851
    IMUL EDX                            ; 005b9853
    ADD EAX,EAX                         ; 005b9855
    ADC EDX,EDX                         ; 005b9857
    MOV EAX,EDX                         ; 005b9859
    MOV EDX,dword ptr [ECX + 0x20]      ; 005b985b
    ADD EAX,EDX                         ; 005b985e
    MOV dword ptr [ESI + 0x20],EAX      ; 005b9860
    POP EBP                             ; 005b9863
    POP EDI                             ; 005b9864
    POP ESI                             ; 005b9865
    POP EBX                             ; 005b9866
    RET                                 ; 005b9867

