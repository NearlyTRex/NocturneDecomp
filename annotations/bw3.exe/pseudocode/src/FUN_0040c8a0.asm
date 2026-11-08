; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c8a0(void)
;
;
; XREF[1]:
;   FUN_004f5cc0 at 004f5e30
;
; Referenced Globals:
;   undefined4 DAT_007df9c4
;   undefined4 DAT_007df9c8
;   undefined4 DAT_007df9cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c8a0
        ;   Label: FUN_0040c8a0
    MOV EBX,dword ptr [0x007df9c4]      ; 0040c8a1 | DAT_007df9c4
    XOR EDX,EDX                         ; 0040c8a7
    TEST EBX,EBX                        ; 0040c8a9
    JLE 0x0040c8d0                      ; 0040c8ab
        ;   XREF to: 0040c8d0 (CONDITIONAL_JUMP)  ; LAB_0040c8d0
    XOR EAX,EAX                         ; 0040c8ad
    MOV ECX,dword ptr [EAX + 0x7df9c8]  ; 0040c8af | DAT_007df9c8 | DAT_007df9cc
        ;   Label: LAB_0040c8af
    MOV ECX,dword ptr [ECX + 0x30]      ; 0040c8b5
    ADD EAX,0x4                         ; 0040c8b8
    INC EDX                             ; 0040c8bb
    MOV dword ptr [ECX],0x1             ; 0040c8bc
    CMP EDX,EBX                         ; 0040c8c2
    JL 0x0040c8af                       ; 0040c8c4
        ;   XREF to: 0040c8af (CONDITIONAL_JUMP)  ; LAB_0040c8af
    LEA EAX,[EAX]                       ; 0040c8c6
    LEA EDX,[EDX]                       ; 0040c8cc
    MOV dword ptr [0x007df9c4],EBX      ; 0040c8d0 | DAT_007df9c4
        ;   Label: LAB_0040c8d0
    POP EBX                             ; 0040c8d6
    RET                                 ; 0040c8d7

