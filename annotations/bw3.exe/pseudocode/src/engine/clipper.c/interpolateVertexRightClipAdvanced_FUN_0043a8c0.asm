; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_0043a8c0(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[2]:
;   engine_clipper.c_FUN_0043ad8e at 0043ae46
;   engine_clipper.c_clipPolygonToViewport_FUN_0043bac0 at 0043bfef
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043a8c0
        ;   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_0043a8c0
    PUSH ESI                            ; 0043a8c1
    PUSH EDI                            ; 0043a8c2
    PUSH EBP                            ; 0043a8c3
    MOV ECX,dword ptr [ESP + 0x14]      ; 0043a8c4
    MOV EDI,dword ptr [ESP + 0x18]      ; 0043a8c8
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0043a8cc
    MOV EAX,dword ptr [EDI]             ; 0043a8d0
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043a8d2
    MOV EBX,dword ptr [ECX]             ; 0043a8d5
    MOV EBP,dword ptr [EDI + 0x8]       ; 0043a8d7
    ADD EAX,EDX                         ; 0043a8da
    ADD EBX,EBP                         ; 0043a8dc
    SUB EAX,EBX                         ; 0043a8de
    MOV EBX,EDX                         ; 0043a8e0
    MOV EDX,dword ptr [ECX]             ; 0043a8e2
    SUB EBX,EDX                         ; 0043a8e4
    MOV EDX,EBX                         ; 0043a8e6
    MOV EBX,EAX                         ; 0043a8e8
    CMP EDX,EBX                         ; 0043a8ea
    JGE 0x0043a900                      ; 0043a8ec
        ;   XREF to: 0043a900 (CONDITIONAL_JUMP)  ; LAB_0043a900
    NEG EBX                             ; 0043a8ee
    CMP EDX,EBX                         ; 0043a8f0
    JLE 0x0043a907                      ; 0043a8f2
        ;   XREF to: 0043a907 (CONDITIONAL_JUMP)  ; LAB_0043a907
    NEG EBX                             ; 0043a8f4
    XOR EAX,EAX                         ; 0043a8f6
    SAR EDX,0x1                         ; 0043a8f8
    RCR EAX,0x1                         ; 0043a8fa
    IDIV EBX                            ; 0043a8fc
    JMP 0x0043a90e                      ; 0043a8fe
        ;   XREF to: 0043a90e (UNCONDITIONAL_JUMP)  ; LAB_0043a90e
    MOV EAX,0x7fffffff                  ; 0043a900
        ;   Label: LAB_0043a900
    JMP 0x0043a90e                      ; 0043a905
        ;   XREF to: 0043a90e (UNCONDITIONAL_JUMP)  ; LAB_0043a90e
    NEG EBX                             ; 0043a907
        ;   Label: LAB_0043a907
    MOV EAX,0x80000000                  ; 0043a909
    MOV EBX,EAX                         ; 0043a90e
        ;   Label: LAB_0043a90e
    MOV EBP,dword ptr [ECX + 0x8]       ; 0043a910
    MOV EAX,dword ptr [EDI + 0x8]       ; 0043a913
    MOV EDX,EBX                         ; 0043a916
    SUB EAX,EBP                         ; 0043a918
    IMUL EDX                            ; 0043a91a
    ADD EAX,EAX                         ; 0043a91c
    ADC EDX,EDX                         ; 0043a91e
    MOV EAX,EDX                         ; 0043a920
    MOV EDX,dword ptr [ECX + 0x8]       ; 0043a922
    ADD EAX,EDX                         ; 0043a925
    MOV dword ptr [ESI + 0x8],EAX       ; 0043a927
    MOV dword ptr [ESI],EAX             ; 0043a92a
    MOV EAX,dword ptr [EDI + 0x4]       ; 0043a92c
    SUB EAX,dword ptr [ECX + 0x4]       ; 0043a92f
    MOV EDX,EBX                         ; 0043a932
    IMUL EDX                            ; 0043a934
    ADD EAX,EAX                         ; 0043a936
    ADC EDX,EDX                         ; 0043a938
    MOV EAX,EDX                         ; 0043a93a
    MOV EDX,dword ptr [ECX + 0x4]       ; 0043a93c
    MOV dword ptr [ESI + 0x10],0xffffffff ; 0043a93f
    ADD EAX,EDX                         ; 0043a946
    MOV dword ptr [ESI + 0x4],EAX       ; 0043a948
    MOV EAX,dword ptr [EDI + 0x20]      ; 0043a94b
    MOV EBP,dword ptr [ECX + 0x20]      ; 0043a94e
    MOV EDX,EBX                         ; 0043a951
    SUB EAX,EBP                         ; 0043a953
    IMUL EDX                            ; 0043a955
    ADD EAX,EAX                         ; 0043a957
    ADC EDX,EDX                         ; 0043a959
    MOV EAX,EDX                         ; 0043a95b
    MOV EDX,dword ptr [ECX + 0x20]      ; 0043a95d
    ADD EAX,EDX                         ; 0043a960
    MOV dword ptr [ESI + 0x20],EAX      ; 0043a962
    MOV EAX,dword ptr [EDI + 0x24]      ; 0043a965
    SUB EAX,dword ptr [ECX + 0x24]      ; 0043a968
    MOV EDX,EBX                         ; 0043a96b
    IMUL EDX                            ; 0043a96d
    ADD EAX,EAX                         ; 0043a96f
    ADC EDX,EDX                         ; 0043a971
    MOV EAX,EDX                         ; 0043a973
    MOV EDX,dword ptr [ECX + 0x24]      ; 0043a975
    ADD EDX,EAX                         ; 0043a978
    MOV dword ptr [ESI + 0x24],EDX      ; 0043a97a
    MOV EAX,dword ptr [EDI + 0x28]      ; 0043a97d
    MOV EBP,dword ptr [ECX + 0x28]      ; 0043a980
    MOV EDX,EBX                         ; 0043a983
    SUB EAX,EBP                         ; 0043a985
    IMUL EDX                            ; 0043a987
    ADD EAX,EAX                         ; 0043a989
    ADC EDX,EDX                         ; 0043a98b
    MOV EAX,EDX                         ; 0043a98d
    MOV EDX,dword ptr [ECX + 0x28]      ; 0043a98f
    ADD EDX,EAX                         ; 0043a992
    MOV dword ptr [ESI + 0x28],EDX      ; 0043a994
    MOV EAX,dword ptr [EDI + 0x18]      ; 0043a997
    SUB EAX,dword ptr [ECX + 0x18]      ; 0043a99a
    MOV EDX,EBX                         ; 0043a99d
    IMUL EDX                            ; 0043a99f
    ADD EAX,EAX                         ; 0043a9a1
    ADC EDX,EDX                         ; 0043a9a3
    MOV EAX,EDX                         ; 0043a9a5
    MOV EDX,dword ptr [ECX + 0x18]      ; 0043a9a7
    ADD EDX,EAX                         ; 0043a9aa
    MOV dword ptr [ESI + 0x18],EDX      ; 0043a9ac
    MOV EAX,dword ptr [EDI + 0x1c]      ; 0043a9af
    MOV EBP,dword ptr [ECX + 0x1c]      ; 0043a9b2
    MOV EDX,EBX                         ; 0043a9b5
    SUB EAX,EBP                         ; 0043a9b7
    IMUL EDX                            ; 0043a9b9
    ADD EAX,EAX                         ; 0043a9bb
    ADC EDX,EDX                         ; 0043a9bd
    MOV EAX,EDX                         ; 0043a9bf
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0043a9c1
    ADD EDX,EAX                         ; 0043a9c4
    MOV dword ptr [ESI + 0x1c],EDX      ; 0043a9c6
    MOV EAX,dword ptr [EDI + 0x2c]      ; 0043a9c9
    SUB EAX,dword ptr [ECX + 0x2c]      ; 0043a9cc
    MOV EDX,EBX                         ; 0043a9cf
    IMUL EDX                            ; 0043a9d1
    ADD EAX,EAX                         ; 0043a9d3
    ADC EDX,EDX                         ; 0043a9d5
    MOV EAX,EDX                         ; 0043a9d7
    MOV EDX,dword ptr [ECX + 0x2c]      ; 0043a9d9
    ADD EDX,EAX                         ; 0043a9dc
    MOV dword ptr [ESI + 0x2c],EDX      ; 0043a9de
    POP EBP                             ; 0043a9e1
    POP EDI                             ; 0043a9e2
    POP ESI                             ; 0043a9e3
    POP EBX                             ; 0043a9e4
    RET                                 ; 0043a9e5

