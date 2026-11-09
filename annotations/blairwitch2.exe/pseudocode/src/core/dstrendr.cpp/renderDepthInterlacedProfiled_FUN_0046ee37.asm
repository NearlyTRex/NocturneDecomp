; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderDepthInterlacedProfiled_FUN_0046ee37(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 at 00469a66
;
; Referenced Globals:
;   undefined4 DAT_0060b284
;   undefined4 DAT_01ba5c7c
;   undefined4 DAT_01ba5c80
;   undefined4 DAT_01c2b64c
;   undefined4 DAT_01c35e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046ee37
        ;   Label: core_dstrendr.cpp_renderDepthInterlacedProfiled_FUN_0046ee37
    PUSH EDI                            ; 0046ee38
    TEST EBX,0x1                        ; 0046ee39
    JZ 0x0046ee44                       ; 0046ee3f
        ;   XREF to: 0046ee44 (CONDITIONAL_JUMP)  ; LAB_0046ee44
    POP EDI                             ; 0046ee41
    POP ESI                             ; 0046ee42
    RET                                 ; 0046ee43
    PUSH EBP                            ; 0046ee44
        ;   Label: LAB_0046ee44
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046ee45
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046ee48
    CMP EAX,ECX                         ; 0046ee4b
    JBE 0x0046ee52                      ; 0046ee4d
        ;   XREF to: 0046ee52 (CONDITIONAL_JUMP)  ; LAB_0046ee52
    XCHG EAX,ECX                        ; 0046ee4f
    XCHG EDI,ESI                        ; 0046ee50
    SHR EAX,0x10                        ; 0046ee52
        ;   Label: LAB_0046ee52
    SHR ECX,0x10                        ; 0046ee55
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2b64c] ; 0046ee58 | DAT_01c2b64c
    SUB ECX,EAX                         ; 0046ee5f
    JLE 0x0046ee90                      ; 0046ee61
        ;   XREF to: 0046ee90 (CONDITIONAL_JUMP)  ; LAB_0046ee90
    SHL EAX,0x2                         ; 0046ee63
    ADD EBP,EAX                         ; 0046ee66
    INC ECX                             ; 0046ee68
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046ee69
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046ee6c
    IMUL dword ptr [ECX*0x4 + 0x1c35e70] ; 0046ee6f | DAT_01c35e70
    MOV EBX,EBP                         ; 0046ee76
    DEC ECX                             ; 0046ee78
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046ee79
    MOV EAX,ESI                         ; 0046ee7c
        ;   Label: LAB_0046ee7c
    SHR EAX,0x8                         ; 0046ee7e
    CMP EAX,dword ptr [EBX]             ; 0046ee81
    JGE 0x0046ee94                      ; 0046ee83
        ;   XREF to: 0046ee94 (CONDITIONAL_JUMP)  ; LAB_0046ee94
    LEA ESI,[ESI + EDX*0x2]             ; 0046ee85
        ;   Label: LAB_0046ee85
    ADD EBX,0x8                         ; 0046ee88
    SUB ECX,0x2                         ; 0046ee8b
    JG 0x0046ee7c                       ; 0046ee8e
        ;   XREF to: 0046ee7c (CONDITIONAL_JUMP)  ; LAB_0046ee7c
    POP EBP                             ; 0046ee90
        ;   Label: LAB_0046ee90
    POP EDI                             ; 0046ee91
    POP ESI                             ; 0046ee92
    RET                                 ; 0046ee93
    MOV EAX,[0x01ba5c7c]                ; 0046ee94 | DAT_01ba5c7c
        ;   Label: LAB_0046ee94
    INC EAX                             ; 0046ee99
    MOV [0x01ba5c7c],EAX                ; 0046ee9a | DAT_01ba5c7c
    CMP EAX,dword ptr [0x0060b284]      ; 0046ee9f | DAT_0060b284
    JC 0x0046ee85                       ; 0046eea5
        ;   XREF to: 0046ee85 (CONDITIONAL_JUMP)  ; LAB_0046ee85
    MOV dword ptr [0x01ba5c80],0x1      ; 0046eea7 | DAT_01ba5c80
    POP EBP                             ; 0046eeb1
    POP EDI                             ; 0046eeb2
    POP ESI                             ; 0046eeb3
    RET                                 ; 0046eeb4

