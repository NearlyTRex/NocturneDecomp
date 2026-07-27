; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexRightClipAdvanced_FUN_004338d0(int *param_1,int *param_2,int *param_3)
;
;
; XREF[5]:
;   engine_clipper.c_FUN_00433e1d at 00433e70
;   engine_clipper.c_FUN_00433e8d at 00433ec3
;   engine_clipper.c_FUN_0043474d at 004347ac
;   engine_clipper.c_FUN_004347cc at 00434802
;   engine_clipper.c_clipPolygonToViewport_FUN_004349a0 at 00434f4e
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004338d0
        ;   Label: engine_clipper.c_interpolateVertexRightClipAdvanced_FUN_004338d0
    PUSH ESI                            ; 004338d1
    PUSH EDI                            ; 004338d2
    PUSH EBP                            ; 004338d3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004338d4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004338d8
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004338dc
    MOV ECX,dword ptr [ESI]             ; 004338e0
    ADD ECX,dword ptr [ESI + 0x8]       ; 004338e2
    MOV EAX,dword ptr [EBP]             ; 004338e5
    MOV EBX,ECX                         ; 004338e8
    MOV EDX,dword ptr [EBP + 0x8]       ; 004338ea
    SUB EBX,EAX                         ; 004338ed
    SUB EBX,EDX                         ; 004338ef
    MOV EDX,ECX                         ; 004338f1
    CMP EDX,EBX                         ; 004338f3
    JGE 0x00433909                      ; 004338f5
        ;   XREF to: 00433909 (CONDITIONAL_JUMP)  ; LAB_00433909
    NEG EBX                             ; 004338f7
    CMP EDX,EBX                         ; 004338f9
    JLE 0x00433910                      ; 004338fb
        ;   XREF to: 00433910 (CONDITIONAL_JUMP)  ; LAB_00433910
    NEG EBX                             ; 004338fd
    XOR EAX,EAX                         ; 004338ff
    SAR EDX,0x1                         ; 00433901
    RCR EAX,0x1                         ; 00433903
    IDIV EBX                            ; 00433905
    JMP 0x00433917                      ; 00433907
        ;   XREF to: 00433917 (UNCONDITIONAL_JUMP)  ; LAB_00433917
    MOV EAX,0x7fffffff                  ; 00433909
        ;   Label: LAB_00433909
    JMP 0x00433917                      ; 0043390e
        ;   XREF to: 00433917 (UNCONDITIONAL_JUMP)  ; LAB_00433917
    NEG EBX                             ; 00433910
        ;   Label: LAB_00433910
    MOV EAX,0x80000000                  ; 00433912
    MOV ECX,EAX                         ; 00433917
        ;   Label: LAB_00433917
    MOV EBX,dword ptr [ESI + 0x8]       ; 00433919
    MOV EAX,dword ptr [EBP + 0x8]       ; 0043391c
    MOV EDX,ECX                         ; 0043391f
    SUB EAX,EBX                         ; 00433921
    IMUL EDX                            ; 00433923
    ADD EAX,EAX                         ; 00433925
    ADC EDX,EDX                         ; 00433927
    MOV EAX,EDX                         ; 00433929
    MOV EBX,dword ptr [ESI + 0x8]       ; 0043392b
    ADD EAX,EBX                         ; 0043392e
    MOV dword ptr [EDI + 0x8],EAX       ; 00433930
    MOV dword ptr [EDI],EAX             ; 00433933
    NEG EAX                             ; 00433935
    MOV dword ptr [EDI],EAX             ; 00433937
    MOV EAX,dword ptr [EBP + 0x4]       ; 00433939
    SUB EAX,dword ptr [ESI + 0x4]       ; 0043393c
    MOV EDX,ECX                         ; 0043393f
    IMUL EDX                            ; 00433941
    ADD EAX,EAX                         ; 00433943
    ADC EDX,EDX                         ; 00433945
    MOV EAX,EDX                         ; 00433947
    MOV EBX,dword ptr [ESI + 0x4]       ; 00433949
    MOV dword ptr [EDI + 0x10],0xffffffff ; 0043394c
    ADD EAX,EBX                         ; 00433953
    MOV dword ptr [EDI + 0x4],EAX       ; 00433955
    MOV EAX,dword ptr [EBP + 0x20]      ; 00433958
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043395b
    MOV EDX,ECX                         ; 0043395e
    SUB EAX,EBX                         ; 00433960
    IMUL EDX                            ; 00433962
    ADD EAX,EAX                         ; 00433964
    ADC EDX,EDX                         ; 00433966
    MOV EAX,EDX                         ; 00433968
    MOV EBX,dword ptr [ESI + 0x20]      ; 0043396a
    ADD EAX,EBX                         ; 0043396d
    MOV dword ptr [EDI + 0x20],EAX      ; 0043396f
    MOV EAX,dword ptr [EBP + 0x24]      ; 00433972
    SUB EAX,dword ptr [ESI + 0x24]      ; 00433975
    MOV EDX,ECX                         ; 00433978
    IMUL EDX                            ; 0043397a
    ADD EAX,EAX                         ; 0043397c
    ADC EDX,EDX                         ; 0043397e
    MOV EAX,EDX                         ; 00433980
    MOV EBX,dword ptr [ESI + 0x24]      ; 00433982
    ADD EAX,EBX                         ; 00433985
    MOV dword ptr [EDI + 0x24],EAX      ; 00433987
    MOV EAX,dword ptr [EBP + 0x28]      ; 0043398a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043398d
    MOV EDX,ECX                         ; 00433990
    SUB EAX,EBX                         ; 00433992
    IMUL EDX                            ; 00433994
    ADD EAX,EAX                         ; 00433996
    ADC EDX,EDX                         ; 00433998
    MOV EAX,EDX                         ; 0043399a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043399c
    ADD EAX,EBX                         ; 0043399f
    MOV dword ptr [EDI + 0x28],EAX      ; 004339a1
    MOV EAX,dword ptr [EBP + 0x18]      ; 004339a4
    SUB EAX,dword ptr [ESI + 0x18]      ; 004339a7
    MOV EDX,ECX                         ; 004339aa
    IMUL EDX                            ; 004339ac
    ADD EAX,EAX                         ; 004339ae
    ADC EDX,EDX                         ; 004339b0
    MOV EAX,EDX                         ; 004339b2
    MOV EBX,dword ptr [ESI + 0x18]      ; 004339b4
    ADD EBX,EAX                         ; 004339b7
    MOV dword ptr [EDI + 0x18],EBX      ; 004339b9
    MOV EAX,dword ptr [EBP + 0x1c]      ; 004339bc
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004339bf
    MOV EDX,ECX                         ; 004339c2
    SUB EAX,EBX                         ; 004339c4
    IMUL EDX                            ; 004339c6
    ADD EAX,EAX                         ; 004339c8
    ADC EDX,EDX                         ; 004339ca
    MOV EAX,EDX                         ; 004339cc
    MOV EBX,dword ptr [ESI + 0x1c]      ; 004339ce
    ADD EBX,EAX                         ; 004339d1
    MOV dword ptr [EDI + 0x1c],EBX      ; 004339d3
    MOV EAX,dword ptr [EBP + 0x2c]      ; 004339d6
    MOV EBP,dword ptr [ESI + 0x2c]      ; 004339d9
    MOV EDX,ECX                         ; 004339dc
    SUB EAX,EBP                         ; 004339de
    IMUL EDX                            ; 004339e0
    ADD EAX,EAX                         ; 004339e2
    ADC EDX,EDX                         ; 004339e4
    MOV EAX,EDX                         ; 004339e6
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004339e8
    ADD ECX,EAX                         ; 004339eb
    MOV dword ptr [EDI + 0x2c],ECX      ; 004339ed
    POP EBP                             ; 004339f0
    POP EDI                             ; 004339f1
    POP ESI                             ; 004339f2
    POP EBX                             ; 004339f3
    RET                                 ; 004339f4

