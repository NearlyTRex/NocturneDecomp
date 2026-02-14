; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_004375c0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[3]:
;   engine_clipper.c_clipPolygonToViewFrustumAdvanced_FUN_00437ca0 at 0043832a
;   engine_clipper.c_clipPolygonToViewport_FUN_00438420 at 00438b22
;   engine_clipper.c_clipPolygonVerticalPlanes_FUN_00437ac0 at 00437b81
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004375c0
        ;   Label: engine_clipper.c_interpolateVertexTopClipAdvanced_FUN_004375c0
    PUSH ESI                            ; 004375c1
    PUSH EDI                            ; 004375c2
    PUSH EBP                            ; 004375c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004375c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004375c8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004375cc
    MOV EDX,dword ptr [ESI + 0x4]       ; 004375d0
    MOV ECX,dword ptr [ESI + 0x8]       ; 004375d3
    MOV EBX,dword ptr [EBP + 0x8]       ; 004375d6
    ADD EDX,ECX                         ; 004375d9
    MOV ECX,dword ptr [EBP + 0x4]       ; 004375db
    ADD ECX,EBX                         ; 004375de
    MOV EBX,EDX                         ; 004375e0
    SUB EBX,ECX                         ; 004375e2
    CMP EDX,EBX                         ; 004375e4
    JGE 0x004375fa                      ; 004375e6
        ;   XREF to: 004375fa (CONDITIONAL_JUMP)  ; LAB_004375fa
    NEG EBX                             ; 004375e8
    CMP EDX,EBX                         ; 004375ea
    JLE 0x00437601                      ; 004375ec
        ;   XREF to: 00437601 (CONDITIONAL_JUMP)  ; LAB_00437601
    NEG EBX                             ; 004375ee
    XOR EAX,EAX                         ; 004375f0
    SAR EDX,0x1                         ; 004375f2
    RCR EAX,0x1                         ; 004375f4
    IDIV EBX                            ; 004375f6
    JMP 0x00437608                      ; 004375f8
        ;   XREF to: 00437608 (UNCONDITIONAL_JUMP)  ; LAB_00437608
    MOV EAX,0x7fffffff                  ; 004375fa
        ;   Label: LAB_004375fa
    JMP 0x00437608                      ; 004375ff
        ;   XREF to: 00437608 (UNCONDITIONAL_JUMP)  ; LAB_00437608
    NEG EBX                             ; 00437601
        ;   Label: LAB_00437601
    MOV EAX,0x80000000                  ; 00437603
    MOV ECX,EAX                         ; 00437608
        ;   Label: LAB_00437608
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043760a
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043760d
    SUB EAX,EDX                         ; 00437610
    MOV EDX,ECX                         ; 00437612
    IMUL EDX                            ; 00437614
    ADD EAX,EAX                         ; 00437616
    ADC EDX,EDX                         ; 00437618
    MOV EAX,EDX                         ; 0043761a
    MOV EDX,dword ptr [ESI + 0x8]       ; 0043761c
    ADD EAX,EDX                         ; 0043761f
    MOV dword ptr [EDI + 0x8],EAX       ; 00437621
    MOV EBX,EAX                         ; 00437624
    MOV dword ptr [EDI + 0x4],EAX       ; 00437626
    NEG EBX                             ; 00437629
    MOV dword ptr [EDI + 0x4],EBX       ; 0043762b
    MOV EAX,dword ptr [EBP]             ; 0043762e
    SUB EAX,dword ptr [ESI]             ; 00437631
    MOV EDX,ECX                         ; 00437633
    IMUL EDX                            ; 00437635
    ADD EAX,EAX                         ; 00437637
    ADC EDX,EDX                         ; 00437639
    MOV EAX,EDX                         ; 0043763b
    MOV EDX,dword ptr [ESI]             ; 0043763d
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043763f
    ADD EAX,EDX                         ; 00437646
    MOV dword ptr [EDI],EAX             ; 00437648
    MOV EAX,dword ptr [EBP + 0x20]      ; 0043764a
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043764d
    MOV EDX,ECX                         ; 00437650
    SUB EAX,EBX                         ; 00437652
    IMUL EDX                            ; 00437654
    ADD EAX,EAX                         ; 00437656
    ADC EDX,EDX                         ; 00437658
    MOV EAX,EDX                         ; 0043765a
    MOV EDX,dword ptr [ESI + 0x20]      ; 0043765c
    ADD EAX,EDX                         ; 0043765f
    MOV dword ptr [EDI + 0x20],EAX      ; 00437661
    MOV EAX,dword ptr [EBP + 0x24]      ; 00437664
    SUB EAX,dword ptr [ESI + 0x24]      ; 00437667
    MOV EDX,ECX                         ; 0043766a
    IMUL EDX                            ; 0043766c
    ADD EAX,EAX                         ; 0043766e
    ADC EDX,EDX                         ; 00437670
    MOV EAX,EDX                         ; 00437672
    MOV EDX,dword ptr [ESI + 0x24]      ; 00437674
    ADD EAX,EDX                         ; 00437677
    MOV dword ptr [EDI + 0x24],EAX      ; 00437679
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043767c
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043767f
    MOV EDX,ECX                         ; 00437682
    SUB EAX,EBX                         ; 00437684
    IMUL EDX                            ; 00437686
    ADD EAX,EAX                         ; 00437688
    ADC EDX,EDX                         ; 0043768a
    MOV EAX,EDX                         ; 0043768c
    MOV EDX,dword ptr [ESI + 0x28]      ; 0043768e
    ADD EDX,EAX                         ; 00437691
    MOV dword ptr [EDI + 0x28],EDX      ; 00437693
    MOV EAX,dword ptr [EBP + 0x18]      ; 00437696
    SUB EAX,dword ptr [ESI + 0x18]      ; 00437699
    MOV EDX,ECX                         ; 0043769c
    IMUL EDX                            ; 0043769e
    ADD EAX,EAX                         ; 004376a0
    ADC EDX,EDX                         ; 004376a2
    MOV EAX,EDX                         ; 004376a4
    MOV EDX,dword ptr [ESI + 0x18]      ; 004376a6
    ADD EDX,EAX                         ; 004376a9
    MOV dword ptr [EDI + 0x18],EDX      ; 004376ab
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004376ae
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004376b1
    MOV EDX,ECX                         ; 004376b4
    SUB EAX,EBX                         ; 004376b6
    IMUL EDX                            ; 004376b8
    ADD EAX,EAX                         ; 004376ba
    ADC EDX,EDX                         ; 004376bc
    MOV EAX,EDX                         ; 004376be
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004376c0
    ADD EDX,EAX                         ; 004376c3
    MOV dword ptr [EDI + 0x1c],EDX      ; 004376c5
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004376c8
    MOV EBP,dword ptr [ESI + 0x2c]      ; 004376cb
    MOV EDX,ECX                         ; 004376ce
    SUB EAX,EBP                         ; 004376d0
    IMUL EDX                            ; 004376d2
    ADD EAX,EAX                         ; 004376d4
    ADC EDX,EDX                         ; 004376d6
    MOV EAX,EDX                         ; 004376d8
    MOV EDX,dword ptr [ESI + 0x2c]      ; 004376da
    ADD EDX,EAX                         ; 004376dd
    MOV dword ptr [EDI + 0x2c],EDX      ; 004376df
    POP EBP                             ; 004376e2
    POP EDI                             ; 004376e3
    POP ESI                             ; 004376e4
    POP EBX                             ; 004376e5
    RET                                 ; 004376e6

