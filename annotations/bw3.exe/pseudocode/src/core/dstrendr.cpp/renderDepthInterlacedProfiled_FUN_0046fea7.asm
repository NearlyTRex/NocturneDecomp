; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046fea7(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 at 0046b646
;
; Referenced Globals:
;   undefined4 DAT_005f2b00
;   undefined4 DAT_01bdd810
;   undefined4 DAT_01bdd814
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046fea7
        ;   Label: core_dstrendr.cpp_renderDepthInterlacedProfiled_FUN_0046fea7
    PUSH EDI                            ; 0046fea8
    TEST EBX,0x1                        ; 0046fea9
    JZ 0x0046feb4                       ; 0046feaf
        ;   XREF to: 0046feb4 (CONDITIONAL_JUMP)  ; LAB_0046feb4
    POP EDI                             ; 0046feb1
    POP ESI                             ; 0046feb2
    RET                                 ; 0046feb3
    PUSH EBP                            ; 0046feb4
        ;   Label: LAB_0046feb4
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046feb5
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046feb8
    CMP EAX,ECX                         ; 0046febb
    JBE 0x0046fec2                      ; 0046febd
        ;   XREF to: 0046fec2 (CONDITIONAL_JUMP)  ; LAB_0046fec2
    XCHG EAX,ECX                        ; 0046febf
    XCHG EDI,ESI                        ; 0046fec0
    SHR EAX,0x10                        ; 0046fec2
        ;   Label: LAB_0046fec2
    SHR ECX,0x10                        ; 0046fec5
    MOV EBP,dword ptr [EBX*0x4 + 0x1c60dac] ; 0046fec8 | DAT_01c60dac
    SUB ECX,EAX                         ; 0046fecf
    JLE 0x0046ff00                      ; 0046fed1
        ;   XREF to: 0046ff00 (CONDITIONAL_JUMP)  ; LAB_0046ff00
    SHL EAX,0x2                         ; 0046fed3
    ADD EBP,EAX                         ; 0046fed6
    INC ECX                             ; 0046fed8
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046fed9
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046fedc
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d0] ; 0046fedf | DAT_01c6b5d0
    MOV EBX,EBP                         ; 0046fee6
    DEC ECX                             ; 0046fee8
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046fee9
    MOV EAX,ESI                         ; 0046feec
        ;   Label: LAB_0046feec
    SHR EAX,0x8                         ; 0046feee
    CMP EAX,dword ptr [EBX]             ; 0046fef1
    JGE 0x0046ff04                      ; 0046fef3
        ;   XREF to: 0046ff04 (CONDITIONAL_JUMP)  ; LAB_0046ff04
    LEA ESI,[ESI + EDX*0x2]             ; 0046fef5
        ;   Label: LAB_0046fef5
    ADD EBX,0x8                         ; 0046fef8
    SUB ECX,0x2                         ; 0046fefb
    JG 0x0046feec                       ; 0046fefe
        ;   XREF to: 0046feec (CONDITIONAL_JUMP)  ; LAB_0046feec
    POP EBP                             ; 0046ff00
        ;   Label: LAB_0046ff00
    POP EDI                             ; 0046ff01
    POP ESI                             ; 0046ff02
    RET                                 ; 0046ff03
    MOV EAX,[0x01bdd810]                ; 0046ff04 | DAT_01bdd810
        ;   Label: LAB_0046ff04
    INC EAX                             ; 0046ff09
    MOV [0x01bdd810],EAX                ; 0046ff0a | DAT_01bdd810
    CMP EAX,dword ptr [0x005f2b00]      ; 0046ff0f | DAT_005f2b00
    JC 0x0046fef5                       ; 0046ff15
        ;   XREF to: 0046fef5 (CONDITIONAL_JUMP)  ; LAB_0046fef5
    MOV dword ptr [0x01bdd814],0x1      ; 0046ff17 | DAT_01bdd814
    POP EBP                             ; 0046ff21
    POP EDI                             ; 0046ff22
    POP ESI                             ; 0046ff23
    RET                                 ; 0046ff24

