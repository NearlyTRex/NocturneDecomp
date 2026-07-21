; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a0c0(void)
;
;
; XREF[1]:
;   crt_memory.c_memset_FUN_00563cc0 at 00563cd9
;
; Called Functions:
;   FUN_0056a0f7
;
; *****************************************************************************

section .text

    OR ECX,ECX                          ; 0056a0c0
        ;   Label: FUN_0056a0c0
    JZ 0x0056a0f0                       ; 0056a0c2
        ;   XREF to: 0056a0f0 (CONDITIONAL_JUMP)  ; LAB_0056a0f0
    CMP byte ptr [EAX],DL               ; 0056a0c4
    TEST AL,0x3                         ; 0056a0c6
        ;   Label: LAB_0056a0c6
    JZ 0x0056a0d3                       ; 0056a0c8
        ;   XREF to: 0056a0d3 (CONDITIONAL_JUMP)  ; LAB_0056a0d3
    MOV byte ptr [EAX],DL               ; 0056a0ca
    INC EAX                             ; 0056a0cc
    ROR EDX,0x8                         ; 0056a0cd
    DEC ECX                             ; 0056a0d0
    JNZ 0x0056a0c6                      ; 0056a0d1
        ;   XREF to: 0056a0c6 (CONDITIONAL_JUMP)  ; LAB_0056a0c6
    PUSH ECX                            ; 0056a0d3
        ;   Label: LAB_0056a0d3
    SHR ECX,0x2                         ; 0056a0d4
    CALL FUN_0056a0f7                   ; 0056a0d7
        ;   XREF to: 0056a0f7 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a0f7()
    POP ECX                             ; 0056a0dc
    AND ECX,0x3                         ; 0056a0dd
    JZ 0x0056a0f0                       ; 0056a0e0
        ;   XREF to: 0056a0f0 (CONDITIONAL_JUMP)  ; LAB_0056a0f0
    MOV byte ptr [EAX],DL               ; 0056a0e2
    DEC ECX                             ; 0056a0e4
    JZ 0x0056a0f0                       ; 0056a0e5
        ;   XREF to: 0056a0f0 (CONDITIONAL_JUMP)  ; LAB_0056a0f0
    MOV byte ptr [EAX + 0x1],DH         ; 0056a0e7
    DEC ECX                             ; 0056a0ea
    JZ 0x0056a0f0                       ; 0056a0eb
        ;   XREF to: 0056a0f0 (CONDITIONAL_JUMP)  ; LAB_0056a0f0
    MOV byte ptr [EAX + 0x2],DL         ; 0056a0ed
    RET                                 ; 0056a0f0
        ;   Label: LAB_0056a0f0

