; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dstrendr_cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046eeb5(void)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0 at 004699d1
;
; Referenced Globals:
;   undefined4 DAT_0060b284
;   undefined4 DAT_01ba5c7c
;   undefined4 DAT_01ba5c80
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c35e70
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0046eeb5
        ;   Label: core_dstrendr.cpp_renderScreenDepthTestInterlacedProfiled_FUN_0046eeb5
    PUSH EDI                            ; 0046eeb6
    TEST EBX,0x1                        ; 0046eeb7
    JZ 0x0046eec2                       ; 0046eebd
        ;   XREF to: 0046eec2 (CONDITIONAL_JUMP)  ; LAB_0046eec2
    POP EDI                             ; 0046eebf
    POP ESI                             ; 0046eec0
    RET                                 ; 0046eec1
    PUSH EBP                            ; 0046eec2
        ;   Label: LAB_0046eec2
    MOV EAX,dword ptr [ESI + 0x8]       ; 0046eec3
    MOV ECX,dword ptr [EDI + 0x8]       ; 0046eec6
    CMP EAX,ECX                         ; 0046eec9
    JBE 0x0046eed0                      ; 0046eecb
        ;   XREF to: 0046eed0 (CONDITIONAL_JUMP)  ; LAB_0046eed0
    XCHG EAX,ECX                        ; 0046eecd
    XCHG EDI,ESI                        ; 0046eece
    SHR EAX,0x10                        ; 0046eed0
        ;   Label: LAB_0046eed0
    SHR ECX,0x10                        ; 0046eed3
    MOV EBP,dword ptr [EBX*0x4 + 0x1c2a38c] ; 0046eed6 | DAT_01c2a38c
    SUB ECX,EAX                         ; 0046eedd
    JLE 0x0046ef10                      ; 0046eedf
        ;   XREF to: 0046ef10 (CONDITIONAL_JUMP)  ; LAB_0046ef10
    SHL EAX,0x1                         ; 0046eee1
    ADD EBP,EAX                         ; 0046eee3
    INC ECX                             ; 0046eee5
    MOV EAX,dword ptr [EDI + 0x28]      ; 0046eee6
    SUB EAX,dword ptr [ESI + 0x28]      ; 0046eee9
    IMUL dword ptr [ECX*0x4 + 0x1c35e70] ; 0046eeec | DAT_01c35e70
    MOV EBX,EBP                         ; 0046eef3
    DEC ECX                             ; 0046eef5
    MOV ESI,dword ptr [ESI + 0x28]      ; 0046eef6
    MOV EAX,ESI                         ; 0046eef9
        ;   Label: LAB_0046eef9
    SHR EAX,0x8                         ; 0046eefb
    MOVZX EDI,word ptr [EBX]            ; 0046eefe
    CMP EAX,EDI                         ; 0046ef01
    JC 0x0046ef14                       ; 0046ef03
        ;   XREF to: 0046ef14 (CONDITIONAL_JUMP)  ; LAB_0046ef14
    LEA ESI,[ESI + EDX*0x2]             ; 0046ef05
        ;   Label: LAB_0046ef05
    ADD EBX,0x4                         ; 0046ef08
    SUB ECX,0x2                         ; 0046ef0b
    JG 0x0046eef9                       ; 0046ef0e
        ;   XREF to: 0046eef9 (CONDITIONAL_JUMP)  ; LAB_0046eef9
    POP EBP                             ; 0046ef10
        ;   Label: LAB_0046ef10
    POP EDI                             ; 0046ef11
    POP ESI                             ; 0046ef12
    RET                                 ; 0046ef13
    MOV EAX,[0x01ba5c7c]                ; 0046ef14 | DAT_01ba5c7c
        ;   Label: LAB_0046ef14
    INC EAX                             ; 0046ef19
    MOV [0x01ba5c7c],EAX                ; 0046ef1a | DAT_01ba5c7c
    CMP EAX,dword ptr [0x0060b284]      ; 0046ef1f | DAT_0060b284
    JC 0x0046ef05                       ; 0046ef25
        ;   XREF to: 0046ef05 (CONDITIONAL_JUMP)  ; LAB_0046ef05
    MOV dword ptr [0x01ba5c80],0x1      ; 0046ef27 | DAT_01ba5c80
    POP EBP                             ; 0046ef31
    POP EDI                             ; 0046ef32
    POP ESI                             ; 0046ef33
    RET                                 ; 0046ef34

