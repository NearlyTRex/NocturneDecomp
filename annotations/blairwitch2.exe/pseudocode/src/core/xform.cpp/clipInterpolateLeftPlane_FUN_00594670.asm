; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateLeftPlane_FUN_00594670(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40 at 00595475
;
; Referenced Globals:
;   undefined4 DAT_01c38b54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00594670
        ;   Label: core_xform.cpp_clipInterpolateLeftPlane_FUN_00594670
    PUSH ESI                            ; 00594671
    PUSH EDI                            ; 00594672
    PUSH EBP                            ; 00594673
    MOV ESI,dword ptr [ESP + 0x14]      ; 00594674
    MOV EBP,dword ptr [ESP + 0x18]      ; 00594678
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0059467c
    MOV EDX,dword ptr [ESI]             ; 00594680
    ADD EDX,dword ptr [ESI + 0x8]       ; 00594682
    MOV EAX,dword ptr [EBP]             ; 00594685
    MOV EBX,EDX                         ; 00594688
    MOV ECX,dword ptr [EBP + 0x8]       ; 0059468a
    SUB EBX,EAX                         ; 0059468d
    SUB EBX,ECX                         ; 0059468f
    CMP EDX,EBX                         ; 00594691
    JGE 0x005946a7                      ; 00594693
        ;   XREF to: 005946a7 (CONDITIONAL_JUMP)  ; LAB_005946a7
    NEG EBX                             ; 00594695
    CMP EDX,EBX                         ; 00594697
    JLE 0x005946ae                      ; 00594699
        ;   XREF to: 005946ae (CONDITIONAL_JUMP)  ; LAB_005946ae
    NEG EBX                             ; 0059469b
    XOR EAX,EAX                         ; 0059469d
    SAR EDX,0x1                         ; 0059469f
    RCR EAX,0x1                         ; 005946a1
    IDIV EBX                            ; 005946a3
    JMP 0x005946b5                      ; 005946a5
        ;   XREF to: 005946b5 (UNCONDITIONAL_JUMP)  ; LAB_005946b5
    MOV EAX,0x7fffffff                  ; 005946a7
        ;   Label: LAB_005946a7
    JMP 0x005946b5                      ; 005946ac
        ;   XREF to: 005946b5 (UNCONDITIONAL_JUMP)  ; LAB_005946b5
    NEG EBX                             ; 005946ae
        ;   Label: LAB_005946ae
    MOV EAX,0x80000000                  ; 005946b0
    MOV ECX,EAX                         ; 005946b5
        ;   Label: LAB_005946b5
    MOV EBX,dword ptr [ESI + 0x8]       ; 005946b7
    MOV EAX,dword ptr [EBP + 0x8]       ; 005946ba
    MOV EDX,ECX                         ; 005946bd
    SUB EAX,EBX                         ; 005946bf
    IMUL EDX                            ; 005946c1
    ADD EAX,EAX                         ; 005946c3
    ADC EDX,EDX                         ; 005946c5
    MOV EAX,EDX                         ; 005946c7
    MOV EDX,dword ptr [ESI + 0x8]       ; 005946c9
    ADD EAX,EDX                         ; 005946cc
    MOV dword ptr [EDI + 0x8],EAX       ; 005946ce
    MOV dword ptr [EDI],EAX             ; 005946d1
    NEG EAX                             ; 005946d3
    MOV dword ptr [EDI],EAX             ; 005946d5
    MOV EAX,dword ptr [EBP + 0x4]       ; 005946d7
    SUB EAX,dword ptr [ESI + 0x4]       ; 005946da
    MOV EDX,ECX                         ; 005946dd
    IMUL EDX                            ; 005946df
    ADD EAX,EAX                         ; 005946e1
    ADC EDX,EDX                         ; 005946e3
    MOV EAX,EDX                         ; 005946e5
    MOV EDX,dword ptr [ESI + 0x4]       ; 005946e7
    ADD EAX,EDX                         ; 005946ea
    MOV dword ptr [EDI + 0x4],EAX       ; 005946ec
    MOV AH,byte ptr [0x01c38b54]        ; 005946ef | DAT_01c38b54
    MOV dword ptr [EDI + 0x10],0xffffffff ; 005946f5
    TEST AH,0x4                         ; 005946fc
    JNZ 0x00594706                      ; 005946ff
        ;   XREF to: 00594706 (CONDITIONAL_JUMP)  ; LAB_00594706
    POP EBP                             ; 00594701
    POP EDI                             ; 00594702
    POP ESI                             ; 00594703
    POP EBX                             ; 00594704
    RET                                 ; 00594705
    MOV EAX,dword ptr [EBP + 0x20]      ; 00594706
        ;   Label: LAB_00594706
    MOV EBX,dword ptr [ESI + 0x20]      ; 00594709
    MOV EDX,ECX                         ; 0059470c
    SUB EAX,EBX                         ; 0059470e
    IMUL EDX                            ; 00594710
    ADD EAX,EAX                         ; 00594712
    ADC EDX,EDX                         ; 00594714
    MOV EAX,EDX                         ; 00594716
    MOV EDX,dword ptr [ESI + 0x20]      ; 00594718
    ADD EAX,EDX                         ; 0059471b
    MOV dword ptr [EDI + 0x20],EAX      ; 0059471d
    POP EBP                             ; 00594720
    POP EDI                             ; 00594721
    POP ESI                             ; 00594722
    POP EBX                             ; 00594723
    RET                                 ; 00594724

