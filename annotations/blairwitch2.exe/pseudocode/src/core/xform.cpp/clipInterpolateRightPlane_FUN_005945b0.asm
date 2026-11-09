; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateRightPlane_FUN_005945b0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_00594f40 at 005953db
;
; Referenced Globals:
;   undefined4 DAT_01c38b54
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005945b0
        ;   Label: core_xform.cpp_clipInterpolateRightPlane_FUN_005945b0
    PUSH ESI                            ; 005945b1
    PUSH EDI                            ; 005945b2
    PUSH EBP                            ; 005945b3
    MOV ECX,dword ptr [ESP + 0x14]      ; 005945b4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005945b8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005945bc
    MOV EBX,dword ptr [EDI]             ; 005945c0
    MOV EDX,dword ptr [ECX + 0x8]       ; 005945c2
    MOV EAX,dword ptr [ECX]             ; 005945c5
    MOV EBP,dword ptr [EDI + 0x8]       ; 005945c7
    ADD EBX,EDX                         ; 005945ca
    ADD EAX,EBP                         ; 005945cc
    SUB EBX,EAX                         ; 005945ce
    MOV EAX,EDX                         ; 005945d0
    MOV EDX,dword ptr [ECX]             ; 005945d2
    SUB EAX,EDX                         ; 005945d4
    MOV EDX,EAX                         ; 005945d6
    CMP EDX,EBX                         ; 005945d8
    JGE 0x005945ee                      ; 005945da
        ;   XREF to: 005945ee (CONDITIONAL_JUMP)  ; LAB_005945ee
    NEG EBX                             ; 005945dc
    CMP EDX,EBX                         ; 005945de
    JLE 0x005945f5                      ; 005945e0
        ;   XREF to: 005945f5 (CONDITIONAL_JUMP)  ; LAB_005945f5
    NEG EBX                             ; 005945e2
    XOR EAX,EAX                         ; 005945e4
    SAR EDX,0x1                         ; 005945e6
    RCR EAX,0x1                         ; 005945e8
    IDIV EBX                            ; 005945ea
    JMP 0x005945fc                      ; 005945ec
        ;   XREF to: 005945fc (UNCONDITIONAL_JUMP)  ; LAB_005945fc
    MOV EAX,0x7fffffff                  ; 005945ee
        ;   Label: LAB_005945ee
    JMP 0x005945fc                      ; 005945f3
        ;   XREF to: 005945fc (UNCONDITIONAL_JUMP)  ; LAB_005945fc
    NEG EBX                             ; 005945f5
        ;   Label: LAB_005945f5
    MOV EAX,0x80000000                  ; 005945f7
    MOV EBX,EAX                         ; 005945fc
        ;   Label: LAB_005945fc
    MOV EBP,dword ptr [ECX + 0x8]       ; 005945fe
    MOV EAX,dword ptr [EDI + 0x8]       ; 00594601
    MOV EDX,EBX                         ; 00594604
    SUB EAX,EBP                         ; 00594606
    IMUL EDX                            ; 00594608
    ADD EAX,EAX                         ; 0059460a
    ADC EDX,EDX                         ; 0059460c
    MOV EAX,EDX                         ; 0059460e
    MOV EDX,dword ptr [ECX + 0x8]       ; 00594610
    ADD EAX,EDX                         ; 00594613
    MOV dword ptr [ESI + 0x8],EAX       ; 00594615
    MOV dword ptr [ESI],EAX             ; 00594618
    MOV EAX,dword ptr [EDI + 0x4]       ; 0059461a
    SUB EAX,dword ptr [ECX + 0x4]       ; 0059461d
    MOV EDX,EBX                         ; 00594620
    IMUL EDX                            ; 00594622
    ADD EAX,EAX                         ; 00594624
    ADC EDX,EDX                         ; 00594626
    MOV EAX,EDX                         ; 00594628
    MOV EDX,dword ptr [ECX + 0x4]       ; 0059462a
    ADD EAX,EDX                         ; 0059462d
    MOV dword ptr [ESI + 0x4],EAX       ; 0059462f
    MOV AH,byte ptr [0x01c38b54]        ; 00594632 | DAT_01c38b54
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00594638
    TEST AH,0x4                         ; 0059463f
    JNZ 0x00594649                      ; 00594642
        ;   XREF to: 00594649 (CONDITIONAL_JUMP)  ; LAB_00594649
    POP EBP                             ; 00594644
    POP EDI                             ; 00594645
    POP ESI                             ; 00594646
    POP EBX                             ; 00594647
    RET                                 ; 00594648
    MOV EAX,dword ptr [EDI + 0x20]      ; 00594649
        ;   Label: LAB_00594649
    MOV EDI,dword ptr [ECX + 0x20]      ; 0059464c
    MOV EDX,EBX                         ; 0059464f
    SUB EAX,EDI                         ; 00594651
    IMUL EDX                            ; 00594653
    ADD EAX,EAX                         ; 00594655
    ADC EDX,EDX                         ; 00594657
    MOV EAX,EDX                         ; 00594659
    MOV EDX,dword ptr [ECX + 0x20]      ; 0059465b
    ADD EAX,EDX                         ; 0059465e
    MOV dword ptr [ESI + 0x20],EAX      ; 00594660
    POP EBP                             ; 00594663
    POP EDI                             ; 00594664
    POP ESI                             ; 00594665
    POP EBX                             ; 00594666
    RET                                 ; 00594667

