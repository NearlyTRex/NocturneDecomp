; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046ff25(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580 at 0046b5b1
;
; Referenced Globals:
;   undefined4 DAT_005f2b00
;   undefined4 DAT_01bdd810
;   undefined4 DAT_01bdd814
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c6b5d0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ff25
        ;   Label: core_dstrendr.cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046ff25
    PUSH EDI                            ; 0046ff26
    TEST EBX,0x1                        ; 0046ff27
    JZ 0x0046ff32                       ; 0046ff2d
        ;   XREF to: 0046ff32 (CONDITIONAL_JUMP)  ; LAB_0046ff32
    POP EDI                             ; 0046ff2f
    POP ESI                             ; 0046ff30
    RET                                 ; 0046ff31
    PUSH EBP                            ; 0046ff32
        ;   Label: LAB_0046ff32
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046ff33
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046ff36
    CMP EAX,ECX                         ; 0046ff39
    JBE 0x0046ff40                      ; 0046ff3b
        ;   XREF to: 0046ff40 (CONDITIONAL_JUMP)  ; LAB_0046ff40
    XCHG EAX,ECX                        ; 0046ff3d
    XCHG EDI,ESI                        ; 0046ff3e
    SHR EAX,0x10                        ; 0046ff40
        ;   Label: LAB_0046ff40
    SHR ECX,0x10                        ; 0046ff43
    MOV EBP,dword ptr [EBX*0x4 + 0x1c5faec] ; 0046ff46 | DAT_01c5faec
    SUB ECX,EAX                         ; 0046ff4d
    JLE 0x0046ff80                      ; 0046ff4f
        ;   XREF to: 0046ff80 (CONDITIONAL_JUMP)  ; LAB_0046ff80
    SHL EAX,0x1                         ; 0046ff51
    ADD EBP,EAX                         ; 0046ff53
    INC ECX                             ; 0046ff55
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ff56
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046ff59
    IMUL dword ptr [ECX*0x4 + 0x1c6b5d0] ; 0046ff5c | DAT_01c6b5d0
    MOV EBX,EBP                         ; 0046ff63
    DEC ECX                             ; 0046ff65
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046ff66
    MOV EAX,ESI                         ; 0046ff69
        ;   Label: LAB_0046ff69
    SHR EAX,0x8                         ; 0046ff6b
    MOVZX EDI,word ptr [EBX]            ; 0046ff6e
    CMP EAX,EDI                         ; 0046ff71
    JC 0x0046ff84                       ; 0046ff73
        ;   XREF to: 0046ff84 (CONDITIONAL_JUMP)  ; LAB_0046ff84
    LEA ESI,[ESI + EDX*0x2]             ; 0046ff75
        ;   Label: LAB_0046ff75
    ADD EBX,0x4                         ; 0046ff78
    SUB ECX,0x2                         ; 0046ff7b
    JG 0x0046ff69                       ; 0046ff7e
        ;   XREF to: 0046ff69 (CONDITIONAL_JUMP)  ; LAB_0046ff69
    POP EBP                             ; 0046ff80
        ;   Label: LAB_0046ff80
    POP EDI                             ; 0046ff81
    POP ESI                             ; 0046ff82
    RET                                 ; 0046ff83
    MOV EAX,[0x01bdd810]                ; 0046ff84 | DAT_01bdd810
        ;   Label: LAB_0046ff84
    INC EAX                             ; 0046ff89
    MOV [0x01bdd810],EAX                ; 0046ff8a | DAT_01bdd810
    CMP EAX,dword ptr [0x005f2b00]      ; 0046ff8f | DAT_005f2b00
    JC 0x0046ff75                       ; 0046ff95
        ;   XREF to: 0046ff75 (CONDITIONAL_JUMP)  ; LAB_0046ff75
    MOV dword ptr [0x01bdd814],0x1      ; 0046ff97 | DAT_01bdd814
    POP EBP                             ; 0046ffa1
    POP EDI                             ; 0046ffa2
    POP ESI                             ; 0046ffa3
    RET                                 ; 0046ffa4

