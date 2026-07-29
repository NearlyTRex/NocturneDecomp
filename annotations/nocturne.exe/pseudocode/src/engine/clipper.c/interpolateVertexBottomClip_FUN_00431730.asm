; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexBottomClip_FUN_00431730(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[6]:
;   engine_3d.c_clipAndDrawLine2D_FUN_00409290 at 00409337
;   engine_3d.c_clipAndDrawLine3D_FUN_00409590 at 00409637
;   engine_clipper.c_FUN_00432210 at 0043293b
;   engine_clipper.c_FUN_00432cd0 at 00433428
;   engine_clipper.c_clipPolygonBottomPlane_FUN_00431cd0 at 00431d93
;   engine_drender.cpp_CDemonRenderer_clipAndDrawLine3D_FUN_004610a0 at 00461197
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431730
        ;   Label: engine_clipper.c_interpolateVertexBottomClip_FUN_00431730
    PUSH ESI                            ; 00431731
    PUSH EDI                            ; 00431732
    PUSH EBP                            ; 00431733
    MOV ECX,dword ptr [ESP + 0x14]      ; 00431734
    MOV EDI,dword ptr [ESP + 0x18]      ; 00431738
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043173c
    MOV EBX,dword ptr [EDI + 0x4]       ; 00431740
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431743
    MOV EAX,dword ptr [ECX + 0x4]       ; 00431746
    MOV EBP,dword ptr [EDI + 0x8]       ; 00431749
    ADD EBX,EDX                         ; 0043174c
    ADD EAX,EBP                         ; 0043174e
    SUB EBX,EAX                         ; 00431750
    MOV EAX,EDX                         ; 00431752
    MOV EDX,dword ptr [ECX + 0x4]       ; 00431754
    SUB EAX,EDX                         ; 00431757
    MOV EDX,EAX                         ; 00431759
    CMP EDX,EBX                         ; 0043175b
    JGE 0x00431771                      ; 0043175d
        ;   XREF to: 00431771 (CONDITIONAL_JUMP)  ; LAB_00431771
    NEG EBX                             ; 0043175f
    CMP EDX,EBX                         ; 00431761
    JLE 0x00431778                      ; 00431763
        ;   XREF to: 00431778 (CONDITIONAL_JUMP)  ; LAB_00431778
    NEG EBX                             ; 00431765
    XOR EAX,EAX                         ; 00431767
    SAR EDX,0x1                         ; 00431769
    RCR EAX,0x1                         ; 0043176b
    IDIV EBX                            ; 0043176d
    JMP 0x0043177f                      ; 0043176f
        ;   XREF to: 0043177f (UNCONDITIONAL_JUMP)  ; LAB_0043177f
    MOV EAX,0x7fffffff                  ; 00431771
        ;   Label: LAB_00431771
    JMP 0x0043177f                      ; 00431776
        ;   XREF to: 0043177f (UNCONDITIONAL_JUMP)  ; LAB_0043177f
    NEG EBX                             ; 00431778
        ;   Label: LAB_00431778
    MOV EAX,0x80000000                  ; 0043177a
    MOV EBX,EAX                         ; 0043177f
        ;   Label: LAB_0043177f
    MOV EBP,dword ptr [ECX + 0x8]       ; 00431781
    MOV EAX,dword ptr [EDI + 0x8]       ; 00431784
    MOV EDX,EBX                         ; 00431787
    SUB EAX,EBP                         ; 00431789
    IMUL EDX                            ; 0043178b
    ADD EAX,EAX                         ; 0043178d
    ADC EDX,EDX                         ; 0043178f
    MOV EAX,EDX                         ; 00431791
    MOV EDX,dword ptr [ECX + 0x8]       ; 00431793
    ADD EAX,EDX                         ; 00431796
    MOV dword ptr [ESI + 0x8],EAX       ; 00431798
    MOV dword ptr [ESI + 0x4],EAX       ; 0043179b
    MOV EAX,dword ptr [EDI]             ; 0043179e
    SUB EAX,dword ptr [ECX]             ; 004317a0
    MOV EDX,EBX                         ; 004317a2
    IMUL EDX                            ; 004317a4
    ADD EAX,EAX                         ; 004317a6
    ADC EDX,EDX                         ; 004317a8
    MOV EAX,EDX                         ; 004317aa
    MOV EDX,dword ptr [ECX]             ; 004317ac
    ADD EAX,EDX                         ; 004317ae
    MOV dword ptr [ESI],EAX             ; 004317b0
    MOV EAX,dword ptr [EDI + 0x20]      ; 004317b2
    MOV EBP,dword ptr [ECX + 0x20]      ; 004317b5
    MOV EDX,EBX                         ; 004317b8
    SUB EAX,EBP                         ; 004317ba
    IMUL EDX                            ; 004317bc
    ADD EAX,EAX                         ; 004317be
    ADC EDX,EDX                         ; 004317c0
    MOV EAX,EDX                         ; 004317c2
    MOV EDX,dword ptr [ECX + 0x20]      ; 004317c4
    ADD EAX,EDX                         ; 004317c7
    MOV dword ptr [ESI + 0x20],EAX      ; 004317c9
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004317cc
    SUB EAX,dword ptr [ECX + 0x2c]      ; 004317cf
    MOV EDX,EBX                         ; 004317d2
    IMUL EDX                            ; 004317d4
    ADD EAX,EAX                         ; 004317d6
    ADC EDX,EDX                         ; 004317d8
    MOV EAX,EDX                         ; 004317da
    MOV EDX,dword ptr [ECX + 0x2c]      ; 004317dc
    ADD EAX,EDX                         ; 004317df
    MOV dword ptr [ESI + 0x2c],EAX      ; 004317e1
    MOV EAX,dword ptr [EDI + 0x18]      ; 004317e4
    MOV EBP,dword ptr [ECX + 0x18]      ; 004317e7
    MOV EDX,EBX                         ; 004317ea
    SUB EAX,EBP                         ; 004317ec
    IMUL EDX                            ; 004317ee
    ADD EAX,EAX                         ; 004317f0
    ADC EDX,EDX                         ; 004317f2
    MOV EAX,EDX                         ; 004317f4
    MOV EDX,dword ptr [ECX + 0x18]      ; 004317f6
    ADD EAX,EDX                         ; 004317f9
    MOV dword ptr [ESI + 0x18],EAX      ; 004317fb
    MOV EAX,dword ptr [EDI + 0x1c]      ; 004317fe
    SUB EAX,dword ptr [ECX + 0x1c]      ; 00431801
    MOV EDX,EBX                         ; 00431804
    IMUL EDX                            ; 00431806
    ADD EAX,EAX                         ; 00431808
    ADC EDX,EDX                         ; 0043180a
    MOV EAX,EDX                         ; 0043180c
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043180e
    MOV dword ptr [ESI + 0x10],0xffffffff ; 00431811
    ADD EDX,EAX                         ; 00431818
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043181a
    POP EBP                             ; 0043181d
    POP EDI                             ; 0043181e
    POP ESI                             ; 0043181f
    POP EBX                             ; 00431820
    RET                                 ; 00431821

