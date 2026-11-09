; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_xform_cpp_clipInterpolateBottomPlane_FUN_00587580(int *param_1,int *param_2,int *param_3)
;
;
; XREF[1]:
;   core_xform.cpp_transformAndClipGeometry_FUN_00587cd0 at 00588339
;
; Referenced Globals:
;   undefined4 DAT_01c6e2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00587580
        ;   Label: core_xform.cpp_clipInterpolateBottomPlane_FUN_00587580
    PUSH ESI                            ; 00587581
    PUSH EDI                            ; 00587582
    PUSH EBP                            ; 00587583
    MOV ESI,dword ptr [ESP + 0x14]      ; 00587584
    MOV EBP,dword ptr [ESP + 0x18]      ; 00587588
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0058758c
    MOV EDX,dword ptr [ESI + 0x4]       ; 00587590
    MOV ECX,dword ptr [ESI + 0x8]       ; 00587593
    MOV EAX,dword ptr [EBP + 0x4]       ; 00587596
    MOV EBX,dword ptr [EBP + 0x8]       ; 00587599
    ADD EDX,ECX                         ; 0058759c
    ADD EAX,EBX                         ; 0058759e
    MOV EBX,EDX                         ; 005875a0
    SUB EBX,EAX                         ; 005875a2
    CMP EDX,EBX                         ; 005875a4
    JGE 0x005875ba                      ; 005875a6
        ;   XREF to: 005875ba (CONDITIONAL_JUMP)  ; LAB_005875ba
    NEG EBX                             ; 005875a8
    CMP EDX,EBX                         ; 005875aa
    JLE 0x005875c1                      ; 005875ac
        ;   XREF to: 005875c1 (CONDITIONAL_JUMP)  ; LAB_005875c1
    NEG EBX                             ; 005875ae
    XOR EAX,EAX                         ; 005875b0
    SAR EDX,0x1                         ; 005875b2
    RCR EAX,0x1                         ; 005875b4
    IDIV EBX                            ; 005875b6
    JMP 0x005875c8                      ; 005875b8
        ;   XREF to: 005875c8 (UNCONDITIONAL_JUMP)  ; LAB_005875c8
    MOV EAX,0x7fffffff                  ; 005875ba
        ;   Label: LAB_005875ba
    JMP 0x005875c8                      ; 005875bf
        ;   XREF to: 005875c8 (UNCONDITIONAL_JUMP)  ; LAB_005875c8
    NEG EBX                             ; 005875c1
        ;   Label: LAB_005875c1
    MOV EAX,0x80000000                  ; 005875c3
    MOV ECX,EAX                         ; 005875c8
        ;   Label: LAB_005875c8
    MOV EDX,dword ptr [ESI + 0x8]       ; 005875ca
    MOV EAX,dword ptr [EBP + 0x8]       ; 005875cd
    SUB EAX,EDX                         ; 005875d0
    MOV EDX,ECX                         ; 005875d2
    IMUL EDX                            ; 005875d4
    ADD EAX,EAX                         ; 005875d6
    ADC EDX,EDX                         ; 005875d8
    MOV EAX,EDX                         ; 005875da
    MOV EDX,dword ptr [ESI + 0x8]       ; 005875dc
    ADD EAX,EDX                         ; 005875df
    MOV dword ptr [EDI + 0x8],EAX       ; 005875e1
    MOV EBX,EAX                         ; 005875e4
    MOV dword ptr [EDI + 0x4],EAX       ; 005875e6
    NEG EBX                             ; 005875e9
    MOV dword ptr [EDI + 0x4],EBX       ; 005875eb
    MOV EAX,dword ptr [EBP]             ; 005875ee
    SUB EAX,dword ptr [ESI]             ; 005875f1
    MOV EDX,ECX                         ; 005875f3
    IMUL EDX                            ; 005875f5
    ADD EAX,EAX                         ; 005875f7
    ADC EDX,EDX                         ; 005875f9
    MOV EAX,EDX                         ; 005875fb
    MOV EDX,dword ptr [ESI]             ; 005875fd
    ADD EAX,EDX                         ; 005875ff
    MOV dword ptr [EDI],EAX             ; 00587601
    MOV AH,byte ptr [0x01c6e2b4]        ; 00587603 | DAT_01c6e2b4
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00587609
    TEST AH,0x4                         ; 00587610
    JNZ 0x0058761a                      ; 00587613
        ;   XREF to: 0058761a (CONDITIONAL_JUMP)  ; LAB_0058761a
    POP EBP                             ; 00587615
    POP EDI                             ; 00587616
    POP ESI                             ; 00587617
    POP EBX                             ; 00587618
    RET                                 ; 00587619
    MOV EAX,dword ptr [EBP + 0x20]      ; 0058761a
        ;   Label: LAB_0058761a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0058761d
    MOV EDX,ECX                         ; 00587620
    SUB EAX,EBX                         ; 00587622
    IMUL EDX                            ; 00587624
    ADD EAX,EAX                         ; 00587626
    ADC EDX,EDX                         ; 00587628
    MOV EAX,EDX                         ; 0058762a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0058762c
    ADD EAX,EDX                         ; 0058762f
    MOV dword ptr [EDI + 0x20],EAX      ; 00587631
    POP EBP                             ; 00587634
    POP EDI                             ; 00587635
    POP ESI                             ; 00587636
    POP EBX                             ; 00587637
    RET                                 ; 00587638

