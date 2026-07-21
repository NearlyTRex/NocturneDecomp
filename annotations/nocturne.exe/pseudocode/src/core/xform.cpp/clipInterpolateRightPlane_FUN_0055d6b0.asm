; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_0055d6b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_0055e040 at 0055e4db
;
; Referenced Globals:
;   undefined4 DAT_01c039a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055d6b0
        ;   Label: core_xform.cpp_clipInterpolateRightPlane_FUN_0055d6b0
    PUSH ESI                            ; 0055d6b1
    PUSH EDI                            ; 0055d6b2
    PUSH EBP                            ; 0055d6b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0055d6b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0055d6b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0055d6bc
    MOV EBX,dword ptr [EDI]             ; 0055d6c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055d6c2
    MOV EAX,dword ptr [ECX]             ; 0055d6c5
    MOV EBP,dword ptr [EDI + 0x8]       ; 0055d6c7
    ADD EBX,EDX                         ; 0055d6ca
    ADD EAX,EBP                         ; 0055d6cc
    SUB EBX,EAX                         ; 0055d6ce
    MOV EAX,EDX                         ; 0055d6d0
    MOV EDX,dword ptr [ECX]             ; 0055d6d2
    SUB EAX,EDX                         ; 0055d6d4
    MOV EDX,EAX                         ; 0055d6d6
    CMP EDX,EBX                         ; 0055d6d8
    JGE 0x0055d6ee                      ; 0055d6da
        ;   XREF to: 0055d6ee (CONDITIONAL_JUMP)  ; LAB_0055d6ee
    NEG EBX                             ; 0055d6dc
    CMP EDX,EBX                         ; 0055d6de
    JLE 0x0055d6f5                      ; 0055d6e0
        ;   XREF to: 0055d6f5 (CONDITIONAL_JUMP)  ; LAB_0055d6f5
    NEG EBX                             ; 0055d6e2
    XOR EAX,EAX                         ; 0055d6e4
    SAR EDX,0x1                         ; 0055d6e6
    RCR EAX,0x1                         ; 0055d6e8
    IDIV EBX                            ; 0055d6ea
    JMP 0x0055d6fc                      ; 0055d6ec
        ;   XREF to: 0055d6fc (UNCONDITIONAL_JUMP)  ; LAB_0055d6fc
    MOV EAX,0x7fffffff                  ; 0055d6ee
        ;   Label: LAB_0055d6ee
    JMP 0x0055d6fc                      ; 0055d6f3
        ;   XREF to: 0055d6fc (UNCONDITIONAL_JUMP)  ; LAB_0055d6fc
    NEG EBX                             ; 0055d6f5
        ;   Label: LAB_0055d6f5
    MOV EAX,0x80000000                  ; 0055d6f7
    MOV EBX,EAX                         ; 0055d6fc
        ;   Label: LAB_0055d6fc
    MOV EBP,dword ptr [ECX + 0x8]       ; 0055d6fe
    MOV EAX,dword ptr [EDI + 0x8]       ; 0055d701
    MOV EDX,EBX                         ; 0055d704
    SUB EAX,EBP                         ; 0055d706
    IMUL EDX                            ; 0055d708
    ADD EAX,EAX                         ; 0055d70a
    ADC EDX,EDX                         ; 0055d70c
    MOV EAX,EDX                         ; 0055d70e
    MOV EDX,dword ptr [ECX + 0x8]       ; 0055d710
    ADD EAX,EDX                         ; 0055d713
    MOV dword ptr [ESI + 0x8],EAX       ; 0055d715
    MOV dword ptr [ESI],EAX             ; 0055d718
    MOV EAX,dword ptr [EDI + 0x4]       ; 0055d71a
    SUB EAX,dword ptr [ECX + 0x4]       ; 0055d71d
    MOV EDX,EBX                         ; 0055d720
    IMUL EDX                            ; 0055d722
    ADD EAX,EAX                         ; 0055d724
    ADC EDX,EDX                         ; 0055d726
    MOV EAX,EDX                         ; 0055d728
    MOV EDX,dword ptr [ECX + 0x4]       ; 0055d72a
    ADD EAX,EDX                         ; 0055d72d
    MOV dword ptr [ESI + 0x4],EAX       ; 0055d72f
    MOV AH,byte ptr [0x01c039a0]        ; 0055d732 | DAT_01c039a0
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0055d738
    TEST AH,0x4                         ; 0055d73f
    JNZ 0x0055d749                      ; 0055d742
        ;   XREF to: 0055d749 (CONDITIONAL_JUMP)  ; LAB_0055d749
    POP EBP                             ; 0055d744
    POP EDI                             ; 0055d745
    POP ESI                             ; 0055d746
    POP EBX                             ; 0055d747
    RET                                 ; 0055d748
    MOV EAX,dword ptr [EDI + 0x20]      ; 0055d749
        ;   Label: LAB_0055d749
    MOV EDI,dword ptr [ECX + 0x20]      ; 0055d74c
    MOV EDX,EBX                         ; 0055d74f
    SUB EAX,EDI                         ; 0055d751
    IMUL EDX                            ; 0055d753
    ADD EAX,EAX                         ; 0055d755
    ADC EDX,EDX                         ; 0055d757
    MOV EAX,EDX                         ; 0055d759
    MOV EDX,dword ptr [ECX + 0x20]      ; 0055d75b
    ADD EAX,EDX                         ; 0055d75e
    MOV dword ptr [ESI + 0x20],EAX      ; 0055d760
    POP EBP                             ; 0055d763
    POP EDI                             ; 0055d764
    POP ESI                             ; 0055d765
    POP EBX                             ; 0055d766
    RET                                 ; 0055d767

