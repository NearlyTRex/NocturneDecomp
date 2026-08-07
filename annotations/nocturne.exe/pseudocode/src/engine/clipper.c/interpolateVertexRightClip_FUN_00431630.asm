; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClip_FUN_00431630(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[6]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290 at 00409306
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590 at 00409606
;   engine_clipper.c_FUN_00432210 at 0043288c
;   engine_clipper.c_clipAndRasterize_FUN_00432cd0 at 00433379
;   engine_clipper.c_clipPolygonRightPlane_FUN_00431b90 at 00431c57
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 at 00461167
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431630
        ;   Label: engine_clipper.c_interpolateVertexRightClip_FUN_00431630
    PUSH ESI                            ; 00431631
    PUSH EDI                            ; 00431632
    PUSH EBP                            ; 00431633
    MOV ESI,dword ptr [ESP + 0x14]      ; 00431634
    MOV EBP,dword ptr [ESP + 0x18]      ; 00431638
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0043163c
    MOV ECX,dword ptr [ESI]             ; 00431640
    ADD ECX,dword ptr [ESI + 0x8]       ; 00431642
    MOV EAX,dword ptr [EBP]             ; 00431645
    MOV EBX,ECX                         ; 00431648
    MOV EDX,dword ptr [EBP + 0x8]       ; 0043164a
    SUB EBX,EAX                         ; 0043164d
    SUB EBX,EDX                         ; 0043164f
    MOV EDX,ECX                         ; 00431651
    CMP EDX,EBX                         ; 00431653
    JGE 0x00431669                      ; 00431655
        ;   XREF to: 00431669 (CONDITIONAL_JUMP)  ; LAB_00431669
    NEG EBX                             ; 00431657
    CMP EDX,EBX                         ; 00431659
    JLE 0x00431670                      ; 0043165b
        ;   XREF to: 00431670 (CONDITIONAL_JUMP)  ; LAB_00431670
    NEG EBX                             ; 0043165d
    XOR EAX,EAX                         ; 0043165f
    SAR EDX,0x1                         ; 00431661
    RCR EAX,0x1                         ; 00431663
    IDIV EBX                            ; 00431665
    JMP 0x00431677                      ; 00431667
        ;   XREF to: 00431677 (UNCONDITIONAL_JUMP)  ; LAB_00431677
    MOV EAX,0x7fffffff                  ; 00431669
        ;   Label: LAB_00431669
    JMP 0x00431677                      ; 0043166e
        ;   XREF to: 00431677 (UNCONDITIONAL_JUMP)  ; LAB_00431677
    NEG EBX                             ; 00431670
        ;   Label: LAB_00431670
    MOV EAX,0x80000000                  ; 00431672
    MOV ECX,EAX                         ; 00431677
        ;   Label: LAB_00431677
    MOV EBX,dword ptr [ESI + 0x8]       ; 00431679
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043167c
    MOV EDX,ECX                         ; 0043167f
    SUB EAX,EBX                         ; 00431681
    IMUL EDX                            ; 00431683
    ADD EAX,EAX                         ; 00431685
    ADC EDX,EDX                         ; 00431687
    MOV EAX,EDX                         ; 00431689
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043168b
    ADD EAX,EBX                         ; 0043168e
    MOV dword ptr [EDI + 0x8],EAX       ; 00431690
    MOV dword ptr [EDI],EAX             ; 00431693
    NEG EAX                             ; 00431695
    MOV dword ptr [EDI],EAX             ; 00431697
    MOV EAX,dword ptr [EBP + 0x4]       ; 00431699
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043169c
    MOV EDX,ECX                         ; 0043169f
    IMUL EDX                            ; 004316a1
    ADD EAX,EAX                         ; 004316a3
    ADC EDX,EDX                         ; 004316a5
    MOV EAX,EDX                         ; 004316a7
    MOV EBX,dword ptr [ESI + 0x4]       ; 004316a9
    ADD EAX,EBX                         ; 004316ac
    MOV dword ptr [EDI + 0x4],EAX       ; 004316ae
    MOV EAX,dword ptr [EBP + 0x20]      ; 004316b1
    MOV EBX,dword ptr [ESI + 0x20]      ; 004316b4
    MOV EDX,ECX                         ; 004316b7
    SUB EAX,EBX                         ; 004316b9
    IMUL EDX                            ; 004316bb
    ADD EAX,EAX                         ; 004316bd
    ADC EDX,EDX                         ; 004316bf
    MOV EAX,EDX                         ; 004316c1
    MOV EBX,dword ptr [ESI + 0x20]      ; 004316c3
    ADD EAX,EBX                         ; 004316c6
    MOV dword ptr [EDI + 0x20],EAX      ; 004316c8
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004316cb
    SUB EAX,dword ptr [ESI + 0x2c]      ; 004316ce
    MOV EDX,ECX                         ; 004316d1
    IMUL EDX                            ; 004316d3
    ADD EAX,EAX                         ; 004316d5
    ADC EDX,EDX                         ; 004316d7
    MOV EAX,EDX                         ; 004316d9
    MOV EBX,dword ptr [ESI + 0x2c]      ; 004316db
    ADD EAX,EBX                         ; 004316de
    MOV dword ptr [EDI + 0x2c],EAX      ; 004316e0
    MOV EAX,dword ptr [EBP + 0x18]      ; 004316e3
    MOV EBX,dword ptr [ESI + 0x18]      ; 004316e6
    MOV EDX,ECX                         ; 004316e9
    SUB EAX,EBX                         ; 004316eb
    IMUL EDX                            ; 004316ed
    ADD EAX,EAX                         ; 004316ef
    ADC EDX,EDX                         ; 004316f1
    MOV EAX,EDX                         ; 004316f3
    MOV EBX,dword ptr [ESI + 0x18]      ; 004316f5
    ADD EAX,EBX                         ; 004316f8
    MOV dword ptr [EDI + 0x18],EAX      ; 004316fa
    MOV EBP,dword ptr [EBP + 0x1c]      ; 004316fd
    SUB EBP,dword ptr [ESI + 0x1c]      ; 00431700
    MOV EDX,ECX                         ; 00431703
    MOV EAX,EBP                         ; 00431705
    IMUL EDX                            ; 00431707
    ADD EAX,EAX                         ; 00431709
    ADC EDX,EDX                         ; 0043170b
    MOV EAX,EDX                         ; 0043170d
    MOV ECX,dword ptr [ESI + 0x1c]      ; 0043170f
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00431712
    ADD EAX,ECX                         ; 00431719
    MOV dword ptr [EDI + 0x1c],EAX      ; 0043171b
    POP EBP                             ; 0043171e
    POP EDI                             ; 0043171f
    POP ESI                             ; 00431720
    POP EBX                             ; 00431721
    RET                                 ; 00431722

