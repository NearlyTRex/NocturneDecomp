; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_normalizeClippedVertices_FUN_0043c0d0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007c7554
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043c0d0
        ;   Label: engine_clipper.c_normalizeClippedVertices_FUN_0043c0d0
    PUSH ESI                            ; 0043c0d1
    PUSH EDI                            ; 0043c0d2
    PUSH EBP                            ; 0043c0d3
    MOV ESI,dword ptr [0x007c7554]      ; 0043c0d4 | DAT_007c7554
    XOR ECX,ECX                         ; 0043c0da
    TEST ESI,ESI                        ; 0043c0dc
    JLE 0x0043c0fd                      ; 0043c0de
        ;   XREF to: 0043c0fd (CONDITIONAL_JUMP)  ; LAB_0043c0fd
    MOV EAX,0x7c7558                    ; 0043c0e0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043c0e5
        ;   Label: LAB_0043c0e5
    TEST EDX,EDX                        ; 0043c0e8
    JZ 0x0043c108                       ; 0043c0ea
        ;   XREF to: 0043c108 (CONDITIONAL_JUMP)  ; LAB_0043c108
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043c0ec
    CMP EBX,dword ptr [EAX]             ; 0043c0ef
    JGE 0x0043c116                      ; 0043c0f1
        ;   XREF to: 0043c116 (CONDITIONAL_JUMP)  ; LAB_0043c116
    MOV dword ptr [EAX],EBX             ; 0043c0f3
    INC ECX                             ; 0043c0f5
        ;   Label: LAB_0043c0f5
    ADD EAX,0x30                        ; 0043c0f6
    CMP ECX,ESI                         ; 0043c0f9
    JL 0x0043c0e5                       ; 0043c0fb
        ;   XREF to: 0043c0e5 (CONDITIONAL_JUMP)  ; LAB_0043c0e5
    MOV dword ptr [0x007c7554],ESI      ; 0043c0fd | DAT_007c7554
        ;   Label: LAB_0043c0fd
    POP EBP                             ; 0043c103
    POP EDI                             ; 0043c104
    POP ESI                             ; 0043c105
    POP EBX                             ; 0043c106
    RET                                 ; 0043c107
    MOV dword ptr [EAX + 0x8],0x1       ; 0043c108
        ;   Label: LAB_0043c108
    MOV dword ptr [EAX],EDX             ; 0043c10f
    MOV dword ptr [EAX + 0x4],EDX       ; 0043c111
    JMP 0x0043c0f5                      ; 0043c114
        ;   XREF to: 0043c0f5 (UNCONDITIONAL_JUMP)  ; LAB_0043c0f5
    MOV EDX,EBX                         ; 0043c116
        ;   Label: LAB_0043c116
    MOV EDI,dword ptr [EAX]             ; 0043c118
    NEG EDX                             ; 0043c11a
    CMP EDX,EDI                         ; 0043c11c
    JLE 0x0043c124                      ; 0043c11e
        ;   XREF to: 0043c124 (CONDITIONAL_JUMP)  ; LAB_0043c124
    MOV dword ptr [EAX],EDX             ; 0043c120
    JMP 0x0043c0f5                      ; 0043c122
        ;   XREF to: 0043c0f5 (UNCONDITIONAL_JUMP)  ; LAB_0043c0f5
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043c124
        ;   Label: LAB_0043c124
    MOV EBX,dword ptr [EAX + 0x4]       ; 0043c127
    CMP EBX,EBP                         ; 0043c12a
    JLE 0x0043c133                      ; 0043c12c
        ;   XREF to: 0043c133 (CONDITIONAL_JUMP)  ; LAB_0043c133
    MOV dword ptr [EAX + 0x4],EBP       ; 0043c12e
    JMP 0x0043c0f5                      ; 0043c131
        ;   XREF to: 0043c0f5 (UNCONDITIONAL_JUMP)  ; LAB_0043c0f5
    CMP EDX,EBX                         ; 0043c133
        ;   Label: LAB_0043c133
    JLE 0x0043c0f5                      ; 0043c135
        ;   XREF to: 0043c0f5 (CONDITIONAL_JUMP)  ; LAB_0043c0f5
    MOV dword ptr [EAX + 0x4],EDX       ; 0043c137
    JMP 0x0043c0f5                      ; 0043c13a
        ;   XREF to: 0043c0f5 (UNCONDITIONAL_JUMP)  ; LAB_0043c0f5

