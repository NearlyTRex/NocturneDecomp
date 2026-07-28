; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_004337a0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[4]:
;   engine_clipper.c_FUN_00433cd7 at 00433d26
;   engine_clipper.c_FUN_00433d43 at 00433d79
;   engine_clipper.c_FUN_0043474d at 0043472d
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 00434ecf
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004337a0
        ;   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_004337a0
    PUSH ESI                            ; 004337a1
    PUSH EDI                            ; 004337a2
    PUSH EBP                            ; 004337a3
    MOV ECX,dword ptr [ESP + 0x14]      ; 004337a4
    MOV EDI,dword ptr [ESP + 0x18]      ; 004337a8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004337ac
    MOV EAX,dword ptr [EDI]             ; 004337b0
    MOV EDX,dword ptr [ECX + 0x8]       ; 004337b2
    MOV EBX,dword ptr [ECX]             ; 004337b5
    MOV EBP,dword ptr [EDI + 0x8]       ; 004337b7
    ADD EAX,EDX                         ; 004337ba
    ADD EBX,EBP                         ; 004337bc
    SUB EAX,EBX                         ; 004337be
    MOV EBX,EDX                         ; 004337c0
    MOV EDX,dword ptr [ECX]             ; 004337c2
    SUB EBX,EDX                         ; 004337c4
    MOV EDX,EBX                         ; 004337c6
    MOV EBX,EAX                         ; 004337c8
    CMP EDX,EBX                         ; 004337ca
    JGE 0x004337e0                      ; 004337cc
        ;   XREF to: 004337e0 (CONDITIONAL_JUMP)  ; LAB_004337e0
    NEG EBX                             ; 004337ce
    CMP EDX,EBX                         ; 004337d0
    JLE 0x004337e7                      ; 004337d2
        ;   XREF to: 004337e7 (CONDITIONAL_JUMP)  ; LAB_004337e7
    NEG EBX                             ; 004337d4
    XOR EAX,EAX                         ; 004337d6
    SAR EDX,0x1                         ; 004337d8
    RCR EAX,0x1                         ; 004337da
    IDIV EBX                            ; 004337dc
    JMP 0x004337ee                      ; 004337de
        ;   XREF to: 004337ee (UNCONDITIONAL_JUMP)  ; LAB_004337ee
    MOV EAX,0x7fffffff                  ; 004337e0
        ;   Label: LAB_004337e0
    JMP 0x004337ee                      ; 004337e5
        ;   XREF to: 004337ee (UNCONDITIONAL_JUMP)  ; LAB_004337ee
    NEG EBX                             ; 004337e7
        ;   Label: LAB_004337e7
    MOV EAX,0x80000000                  ; 004337e9
    MOV EBX,EAX                         ; 004337ee
        ;   Label: LAB_004337ee
    MOV EBP,dword ptr [ECX + 0x8]       ; 004337f0
    MOV EAX,dword ptr [EDI + 0x8]       ; 004337f3
    MOV EDX,EBX                         ; 004337f6
    SUB EAX,EBP                         ; 004337f8
    IMUL EDX                            ; 004337fa
    ADD EAX,EAX                         ; 004337fc
    ADC EDX,EDX                         ; 004337fe
    MOV EAX,EDX                         ; 00433800
    MOV EDX,dword ptr [ECX + 0x8]       ; 00433802
    ADD EAX,EDX                         ; 00433805
    MOV dword ptr [ESI + 0x8],EAX       ; 00433807
    MOV dword ptr [ESI],EAX             ; 0043380a
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043380c
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043380f
    MOV EDX,EBX                         ; 00433812
    IMUL EDX                            ; 00433814
    ADD EAX,EAX                         ; 00433816
    ADC EDX,EDX                         ; 00433818
    MOV EAX,EDX                         ; 0043381a
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043381c
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043381f
    ADD EAX,EDX                         ; 00433826
    MOV dword ptr [ESI + 0x4],EAX       ; 00433828
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043382b
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043382e
    MOV EDX,EBX                         ; 00433831
    SUB EAX,EBP                         ; 00433833
    IMUL EDX                            ; 00433835
    ADD EAX,EAX                         ; 00433837
    ADC EDX,EDX                         ; 00433839
    MOV EAX,EDX                         ; 0043383b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043383d
    ADD EAX,EDX                         ; 00433840
    MOV dword ptr [ESI + 0x20],EAX      ; 00433842
    MOV EAX,dword ptr [EDI + 0x24]      ; 00433845
    SUB EAX,dword ptr [ECX + 0x24]      ; 00433848
    MOV EDX,EBX                         ; 0043384b
    IMUL EDX                            ; 0043384d
    ADD EAX,EAX                         ; 0043384f
    ADC EDX,EDX                         ; 00433851
    MOV EAX,EDX                         ; 00433853
    MOV EDX,dword ptr [ECX + 0x24]      ; 00433855
    ADD EDX,EAX                         ; 00433858
    MOV dword ptr [ESI + 0x24],EDX      ; 0043385a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043385d
    MOV EBP,dword ptr [ECX + 0x28]      ; 00433860
    MOV EDX,EBX                         ; 00433863
    SUB EAX,EBP                         ; 00433865
    IMUL EDX                            ; 00433867
    ADD EAX,EAX                         ; 00433869
    ADC EDX,EDX                         ; 0043386b
    MOV EAX,EDX                         ; 0043386d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043386f
    ADD EDX,EAX                         ; 00433872
    MOV dword ptr [ESI + 0x28],EDX      ; 00433874
    MOV EAX,dword ptr [EDI + 0x18]      ; 00433877
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043387a
    MOV EDX,EBX                         ; 0043387d
    IMUL EDX                            ; 0043387f
    ADD EAX,EAX                         ; 00433881
    ADC EDX,EDX                         ; 00433883
    MOV EAX,EDX                         ; 00433885
    MOV EDX,dword ptr [ECX + 0x18]      ; 00433887
    ADD EDX,EAX                         ; 0043388a
    MOV dword ptr [ESI + 0x18],EDX      ; 0043388c
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043388f
    MOV EBP,dword ptr [ECX + 0x1c]      ; 00433892
    MOV EDX,EBX                         ; 00433895
    SUB EAX,EBP                         ; 00433897
    IMUL EDX                            ; 00433899
    ADD EAX,EAX                         ; 0043389b
    ADC EDX,EDX                         ; 0043389d
    MOV EAX,EDX                         ; 0043389f
    MOV EDX,dword ptr [ECX + 0x1c]      ; 004338a1
    ADD EDX,EAX                         ; 004338a4
    MOV dword ptr [ESI + 0x1c],EDX      ; 004338a6
    MOV EAX,dword ptr [EDI + 0x2c]      ; 004338a9
    SUB EAX,dword ptr [ECX + 0x2c]      ; 004338ac
    MOV EDX,EBX                         ; 004338af
    IMUL EDX                            ; 004338b1
    ADD EAX,EAX                         ; 004338b3
    ADC EDX,EDX                         ; 004338b5
    MOV EAX,EDX                         ; 004338b7
    MOV EDX,dword ptr [ECX + 0x2c]      ; 004338b9
    ADD EDX,EAX                         ; 004338bc
    MOV dword ptr [ESI + 0x2c],EDX      ; 004338be
    POP EBP                             ; 004338c1
    POP EDI                             ; 004338c2
    POP ESI                             ; 004338c3
    POP EBX                             ; 004338c4
    RET                                 ; 004338c5

