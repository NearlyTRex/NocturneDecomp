; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_005b96f0(SRenderVertex *vertex_a,SRenderVertex *vertex_b,SRenderVertex *vertex_out)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   vertex_a
; SRenderVertex *  Stack[0x8]:4   vertex_b
; SRenderVertex *  Stack[0xc]:4   vertex_out
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_005b9fc0 at 005ba4f5
;
; Referenced Globals:
;   undefined4 DAT_01c51d14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b96f0
        ;   Label: core_xform.cpp_clipInterpolateLeftPlane_FUN_005b96f0
    PUSH ESI                            ; 005b96f1
    PUSH EDI                            ; 005b96f2
    PUSH EBP                            ; 005b96f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005b96f4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005b96f8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 005b96fc
    MOV EDX,dword ptr [ESI]             ; 005b9700
    ADD EDX,dword ptr [ESI + 0x8]       ; 005b9702
    MOV EAX,dword ptr [EBP]             ; 005b9705
    MOV EBX,EDX                         ; 005b9708
    MOV ECX,dword ptr [EBP + 0x8]       ; 005b970a
    SUB EBX,EAX                         ; 005b970d
    SUB EBX,ECX                         ; 005b970f
    CMP EDX,EBX                         ; 005b9711
    JGE 0x005b9727                      ; 005b9713
        ;   XREF to: 005b9727 (CONDITIONAL_JUMP)  ; LAB_005b9727
    NEG EBX                             ; 005b9715
    CMP EDX,EBX                         ; 005b9717
    JLE 0x005b972e                      ; 005b9719
        ;   XREF to: 005b972e (CONDITIONAL_JUMP)  ; LAB_005b972e
    NEG EBX                             ; 005b971b
    XOR EAX,EAX                         ; 005b971d
    SAR EDX,0x1                         ; 005b971f
    RCR EAX,0x1                         ; 005b9721
    IDIV EBX                            ; 005b9723
    JMP 0x005b9735                      ; 005b9725
        ;   XREF to: 005b9735 (UNCONDITIONAL_JUMP)  ; LAB_005b9735
    MOV EAX,0x7fffffff                  ; 005b9727
        ;   Label: LAB_005b9727
    JMP 0x005b9735                      ; 005b972c
        ;   XREF to: 005b9735 (UNCONDITIONAL_JUMP)  ; LAB_005b9735
    NEG EBX                             ; 005b972e
        ;   Label: LAB_005b972e
    MOV EAX,0x80000000                  ; 005b9730
    MOV ECX,EAX                         ; 005b9735
        ;   Label: LAB_005b9735
    MOV EBX,dword ptr [ESI + 0x8]       ; 005b9737
    MOV EAX,dword ptr [EBP + 0x8]       ; 005b973a
    MOV EDX,ECX                         ; 005b973d
    SUB EAX,EBX                         ; 005b973f
    IMUL EDX                            ; 005b9741
    ADD EAX,EAX                         ; 005b9743
    ADC EDX,EDX                         ; 005b9745
    MOV EAX,EDX                         ; 005b9747
    MOV EDX,dword ptr [ESI + 0x8]       ; 005b9749
    ADD EAX,EDX                         ; 005b974c
    MOV dword ptr [EDI + 0x8],EAX       ; 005b974e
    MOV dword ptr [EDI],EAX             ; 005b9751
    NEG EAX                             ; 005b9753
    MOV dword ptr [EDI],EAX             ; 005b9755
    MOV EAX,dword ptr [EBP + 0x4]       ; 005b9757
    SUB EAX,dword ptr [ESI + 0x4]       ; 005b975a
    MOV EDX,ECX                         ; 005b975d
    IMUL EDX                            ; 005b975f
    ADD EAX,EAX                         ; 005b9761
    ADC EDX,EDX                         ; 005b9763
    MOV EAX,EDX                         ; 005b9765
    MOV EDX,dword ptr [ESI + 0x4]       ; 005b9767
    ADD EAX,EDX                         ; 005b976a
    MOV dword ptr [EDI + 0x4],EAX       ; 005b976c
    MOV AH,byte ptr [0x01c51d14]        ; 005b976f | DAT_01c51d14
    MOV dword ptr [EDI + 0x10],0xffffffff ; 005b9775
    TEST AH,0x4                         ; 005b977c
    JNZ 0x005b9786                      ; 005b977f
        ;   XREF to: 005b9786 (CONDITIONAL_JUMP)  ; LAB_005b9786
    POP EBP                             ; 005b9781
    POP EDI                             ; 005b9782
    POP ESI                             ; 005b9783
    POP EBX                             ; 005b9784
    RET                                 ; 005b9785
    MOV EAX,dword ptr [EBP + 0x20]      ; 005b9786
        ;   Label: LAB_005b9786
    MOV EBX,dword ptr [ESI + 0x20]      ; 005b9789
    MOV EDX,ECX                         ; 005b978c
    SUB EAX,EBX                         ; 005b978e
    IMUL EDX                            ; 005b9790
    ADD EAX,EAX                         ; 005b9792
    ADC EDX,EDX                         ; 005b9794
    MOV EAX,EDX                         ; 005b9796
    MOV EDX,dword ptr [ESI + 0x20]      ; 005b9798
    ADD EAX,EDX                         ; 005b979b
    MOV dword ptr [EDI + 0x20],EAX      ; 005b979d
    POP EBP                             ; 005b97a0
    POP EDI                             ; 005b97a1
    POP ESI                             ; 005b97a2
    POP EBX                             ; 005b97a3
    RET                                 ; 005b97a4

