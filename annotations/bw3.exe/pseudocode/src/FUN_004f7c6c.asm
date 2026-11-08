; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_004f7c6c(void)
;
;
; XREF[2]:
;   FUN_004f7c30 at 004f7c31
;   FUN_004f7d2f at 004f7d40
;
; Referenced Globals:
;   TerminatedCString s_GenuineIntel_nJ_00600680
;   undefined4 s_nJ_00600680+0xc
;   undefined4 DAT_00600690
;   undefined4 DAT_00600694
;   undefined1 DAT_00600698
;   undefined4 DAT_00600699
;   undefined4 DAT_0060069a
;   undefined4 DAT_0060069b
;   undefined1 DAT_0060069c
;   undefined4 DAT_0060069d
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004f7c6c
        ;   Label: FUN_004f7c6c
    PUSH EDI                            ; 004f7c6d
    PUSH EAX                            ; 004f7c6e
    PUSH EBX                            ; 004f7c6f
    PUSH ECX                            ; 004f7c70
    PUSH EDX                            ; 004f7c71
    PUSHFD                              ; 004f7c72
    POP EAX                             ; 004f7c73
    MOV ECX,EAX                         ; 004f7c74
    XOR EAX,0x40000                     ; 004f7c76
    PUSH EAX                            ; 004f7c7b
    POPFD                               ; 004f7c7c
    PUSHFD                              ; 004f7c7d
    POP EAX                             ; 004f7c7e
    XOR EAX,ECX                         ; 004f7c7f
    MOV byte ptr [0x00600698],0x3       ; 004f7c81 | DAT_00600698
    JZ 0x004f7d12                       ; 004f7c88
        ;   XREF to: 004f7d12 (CONDITIONAL_JUMP)  ; LAB_004f7d12
    PUSH ECX                            ; 004f7c8e
    POPFD                               ; 004f7c8f
    MOV byte ptr [0x00600698],0x4       ; 004f7c90 | DAT_00600698
    MOV EAX,ECX                         ; 004f7c97
    XOR EAX,0x200000                    ; 004f7c99
    PUSH EAX                            ; 004f7c9e
    POPFD                               ; 004f7c9f
    PUSHFD                              ; 004f7ca0
    POP EAX                             ; 004f7ca1
    XOR EAX,ECX                         ; 004f7ca2
    JZ 0x004f7d12                       ; 004f7ca4
        ;   XREF to: 004f7d12 (CONDITIONAL_JUMP)  ; LAB_004f7d12
    MOV byte ptr [0x0060069b],0x1       ; 004f7ca6 | DAT_0060069b
    XOR EAX,EAX                         ; 004f7cad
    CPUID                               ; 004f7caf
    MOV dword ptr [0x0060068c],EBX      ; 004f7cb1 | s_nJ_00600680+0xc
    MOV dword ptr [0x00600690],EDX      ; 004f7cb7 | DAT_00600690
    MOV dword ptr [0x00600694],ECX      ; 004f7cbd | DAT_00600694
    MOV ESI,0x60068c                    ; 004f7cc3 | s_nJ_00600680+0xc
    MOV EDI,0x600680                    ; 004f7cc8 | = "GenuineIntel\nnJ"
    MOV ECX,0x1                         ; 004f7ccd
    CMPSB.REPE ES:EDI,ESI               ; 004f7cd2 | = "GenuineIntel\nnJ" | s_nJ_00600680+0xc
    OR ECX,ECX                          ; 004f7cd4
    JNZ 0x004f7d12                      ; 004f7cd6
        ;   XREF to: 004f7d12 (CONDITIONAL_JUMP)  ; LAB_004f7d12
    MOV byte ptr [0x0060069c],0x1       ; 004f7cd8 | DAT_0060069c
    CMP EAX,0x1                         ; 004f7cdf
    JL 0x004f7d12                       ; 004f7ce2
        ;   XREF to: 004f7d12 (CONDITIONAL_JUMP)  ; LAB_004f7d12
    XOR EAX,EAX                         ; 004f7ce4
    INC EAX                             ; 004f7ce6
    CPUID                               ; 004f7ce7
    MOV [0x0060069a],AL                 ; 004f7ce9 | DAT_0060069a
    AND byte ptr [0x0060069a],0xf       ; 004f7cee | DAT_0060069a
    AND AL,0xf0                         ; 004f7cf5
    SHR AL,0x4                          ; 004f7cf7
    MOV [0x00600699],AL                 ; 004f7cfa | DAT_00600699
    AND EAX,0xf00                       ; 004f7cff
    SHR EAX,0x8                         ; 004f7d04
    MOV [0x00600698],AL                 ; 004f7d07 | DAT_00600698
    MOV dword ptr [0x0060069d],EDX      ; 004f7d0c | DAT_0060069d
    POP EDX                             ; 004f7d12
        ;   Label: LAB_004f7d12
    POP ECX                             ; 004f7d13
    POP EBX                             ; 004f7d14
    POP EAX                             ; 004f7d15
    POP EDI                             ; 004f7d16
    POP ESI                             ; 004f7d17
    RET                                 ; 004f7d18

