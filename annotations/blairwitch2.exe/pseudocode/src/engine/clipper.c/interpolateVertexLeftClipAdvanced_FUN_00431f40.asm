; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_interpolateVertexLeftClipAdvanced_FUN_00431f40(SRenderVertex *v1,SRenderVertex *v2,SRenderVertex *output)
;
; Parameters:
; SRenderVertex *  Stack[0x4]:4   v1
; SRenderVertex *  Stack[0x8]:4   v2
; SRenderVertex *  Stack[0xc]:4   output
;
; XREF[2]:
;   engine_clipper.c_clipPolygonLeftPlaneGlobal_FUN_00432420 at 004324e0
;   engine_clipper.c_clipPolygonToViewport_FUN_00433000 at 004335ae
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431f40
        ;   Label: engine_clipper.c_interpolateVertexLeftClipAdvanced_FUN_00431f40
    PUSH ESI                            ; 00431f41
    PUSH EDI                            ; 00431f42
    PUSH EBP                            ; 00431f43
    MOV ESI,dword ptr [ESP + 0x14]      ; 00431f44
    MOV EBP,dword ptr [ESP + 0x18]      ; 00431f48
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00431f4c
    MOV ECX,dword ptr [ESI]             ; 00431f50
    ADD ECX,dword ptr [ESI + 0x8]       ; 00431f52
    MOV EAX,dword ptr [EBP]             ; 00431f55
    MOV EBX,ECX                         ; 00431f58
    MOV EDX,dword ptr [EBP + 0x8]       ; 00431f5a
    SUB EBX,EAX                         ; 00431f5d
    SUB EBX,EDX                         ; 00431f5f
    MOV EDX,ECX                         ; 00431f61
    CMP EDX,EBX                         ; 00431f63
    JGE 0x00431f79                      ; 00431f65
        ;   XREF to: 00431f79 (CONDITIONAL_JUMP)  ; LAB_00431f79
    NEG EBX                             ; 00431f67
    CMP EDX,EBX                         ; 00431f69
    JLE 0x00431f80                      ; 00431f6b
        ;   XREF to: 00431f80 (CONDITIONAL_JUMP)  ; LAB_00431f80
    NEG EBX                             ; 00431f6d
    XOR EAX,EAX                         ; 00431f6f
    SAR EDX,0x1                         ; 00431f71
    RCR EAX,0x1                         ; 00431f73
    IDIV EBX                            ; 00431f75
    JMP 0x00431f87                      ; 00431f77
        ;   XREF to: 00431f87 (UNCONDITIONAL_JUMP)  ; LAB_00431f87
    MOV EAX,0x7fffffff                  ; 00431f79
        ;   Label: LAB_00431f79
    JMP 0x00431f87                      ; 00431f7e
        ;   XREF to: 00431f87 (UNCONDITIONAL_JUMP)  ; LAB_00431f87
    NEG EBX                             ; 00431f80
        ;   Label: LAB_00431f80
    MOV EAX,0x80000000                  ; 00431f82
    MOV ECX,EAX                         ; 00431f87
        ;   Label: LAB_00431f87
    MOV EBX,dword ptr [ESI + 0x8]       ; 00431f89
    MOV EAX,dword ptr [EBP + 0x8]       ; 00431f8c
    MOV EDX,ECX                         ; 00431f8f
    SUB EAX,EBX                         ; 00431f91
    IMUL EDX                            ; 00431f93
    ADD EAX,EAX                         ; 00431f95
    ADC EDX,EDX                         ; 00431f97
    MOV EAX,EDX                         ; 00431f99
    MOV EBX,dword ptr [ESI + 0x8]       ; 00431f9b
    ADD EAX,EBX                         ; 00431f9e
    MOV dword ptr [EDI + 0x8],EAX       ; 00431fa0
    MOV dword ptr [EDI],EAX             ; 00431fa3
    NEG EAX                             ; 00431fa5
    MOV dword ptr [EDI],EAX             ; 00431fa7
    MOV EAX,dword ptr [EBP + 0x4]       ; 00431fa9
    SUB EAX,dword ptr [ESI + 0x4]       ; 00431fac
    MOV EDX,ECX                         ; 00431faf
    IMUL EDX                            ; 00431fb1
    ADD EAX,EAX                         ; 00431fb3
    ADC EDX,EDX                         ; 00431fb5
    MOV EAX,EDX                         ; 00431fb7
    MOV EBX,dword ptr [ESI + 0x4]       ; 00431fb9
    MOV dword ptr [EDI + 0x10],0xffffffff ; 00431fbc
    ADD EAX,EBX                         ; 00431fc3
    MOV dword ptr [EDI + 0x4],EAX       ; 00431fc5
    MOV EAX,dword ptr [EBP + 0x20]      ; 00431fc8
    MOV EBX,dword ptr [ESI + 0x20]      ; 00431fcb
    MOV EDX,ECX                         ; 00431fce
    SUB EAX,EBX                         ; 00431fd0
    IMUL EDX                            ; 00431fd2
    ADD EAX,EAX                         ; 00431fd4
    ADC EDX,EDX                         ; 00431fd6
    MOV EAX,EDX                         ; 00431fd8
    MOV EBX,dword ptr [ESI + 0x20]      ; 00431fda
    ADD EAX,EBX                         ; 00431fdd
    MOV dword ptr [EDI + 0x20],EAX      ; 00431fdf
    MOV EAX,dword ptr [EBP + 0x24]      ; 00431fe2
    SUB EAX,dword ptr [ESI + 0x24]      ; 00431fe5
    MOV EDX,ECX                         ; 00431fe8
    IMUL EDX                            ; 00431fea
    ADD EAX,EAX                         ; 00431fec
    ADC EDX,EDX                         ; 00431fee
    MOV EAX,EDX                         ; 00431ff0
    MOV EBX,dword ptr [ESI + 0x24]      ; 00431ff2
    ADD EAX,EBX                         ; 00431ff5
    MOV dword ptr [EDI + 0x24],EAX      ; 00431ff7
    MOV EAX,dword ptr [EBP + 0x28]      ; 00431ffa
    MOV EBX,dword ptr [ESI + 0x28]      ; 00431ffd
    MOV EDX,ECX                         ; 00432000
    SUB EAX,EBX                         ; 00432002
    IMUL EDX                            ; 00432004
    ADD EAX,EAX                         ; 00432006
    ADC EDX,EDX                         ; 00432008
    MOV EAX,EDX                         ; 0043200a
    MOV EBX,dword ptr [ESI + 0x28]      ; 0043200c
    ADD EAX,EBX                         ; 0043200f
    MOV dword ptr [EDI + 0x28],EAX      ; 00432011
    MOV EAX,dword ptr [EBP + 0x18]      ; 00432014
    SUB EAX,dword ptr [ESI + 0x18]      ; 00432017
    MOV EDX,ECX                         ; 0043201a
    IMUL EDX                            ; 0043201c
    ADD EAX,EAX                         ; 0043201e
    ADC EDX,EDX                         ; 00432020
    MOV EAX,EDX                         ; 00432022
    MOV EBX,dword ptr [ESI + 0x18]      ; 00432024
    ADD EBX,EAX                         ; 00432027
    MOV dword ptr [EDI + 0x18],EBX      ; 00432029
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0043202c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043202f
    MOV EDX,ECX                         ; 00432032
    SUB EAX,EBX                         ; 00432034
    IMUL EDX                            ; 00432036
    ADD EAX,EAX                         ; 00432038
    ADC EDX,EDX                         ; 0043203a
    MOV EAX,EDX                         ; 0043203c
    MOV EBX,dword ptr [ESI + 0x1c]      ; 0043203e
    ADD EBX,EAX                         ; 00432041
    MOV dword ptr [EDI + 0x1c],EBX      ; 00432043
    MOV EAX,dword ptr [EBP + 0x2c]      ; 00432046
    MOV EBP,dword ptr [ESI + 0x2c]      ; 00432049
    MOV EDX,ECX                         ; 0043204c
    SUB EAX,EBP                         ; 0043204e
    IMUL EDX                            ; 00432050
    ADD EAX,EAX                         ; 00432052
    ADC EDX,EDX                         ; 00432054
    MOV EAX,EDX                         ; 00432056
    MOV ECX,dword ptr [ESI + 0x2c]      ; 00432058
    ADD ECX,EAX                         ; 0043205b
    MOV dword ptr [EDI + 0x2c],ECX      ; 0043205d
    POP EBP                             ; 00432060
    POP EDI                             ; 00432061
    POP ESI                             ; 00432062
    POP EBX                             ; 00432063
    RET                                 ; 00432064

