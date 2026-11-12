; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_clipper_c_perspectiveDivideVertices_FUN_0043b280(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007e3e88
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b280
        ;   Label: engine_clipper.c_perspectiveDivideVertices_FUN_0043b280
    PUSH ESI                            ; 0043b281
    PUSH EDI                            ; 0043b282
    PUSH EBP                            ; 0043b283
    MOV ESI,dword ptr [0x007e3e88]      ; 0043b284 | DAT_007e3e88
    MOV EAX,0x7e3e8c                    ; 0043b28a
    XOR ECX,ECX                         ; 0043b28f
    TEST ESI,ESI                        ; 0043b291
    JLE 0x0043b2ad                      ; 0043b293
        ;   XREF to: 0043b2ad (CONDITIONAL_JUMP)  ; LAB_0043b2ad
    MOV EDX,dword ptr [EAX + 0x8]       ; 0043b295
        ;   Label: LAB_0043b295
    TEST EDX,EDX                        ; 0043b298
    JZ 0x0043b2b8                       ; 0043b29a
        ;   XREF to: 0043b2b8 (CONDITIONAL_JUMP)  ; LAB_0043b2b8
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043b29c
    CMP EBX,dword ptr [EAX]             ; 0043b29f
    JGE 0x0043b2c6                      ; 0043b2a1
        ;   XREF to: 0043b2c6 (CONDITIONAL_JUMP)  ; LAB_0043b2c6
    MOV dword ptr [EAX],EBX             ; 0043b2a3
    INC ECX                             ; 0043b2a5
        ;   Label: LAB_0043b2a5
    ADD EAX,0x30                        ; 0043b2a6
    CMP ECX,ESI                         ; 0043b2a9
    JL 0x0043b295                       ; 0043b2ab
        ;   XREF to: 0043b295 (CONDITIONAL_JUMP)  ; LAB_0043b295
    MOV dword ptr [0x007e3e88],ESI      ; 0043b2ad | DAT_007e3e88
        ;   Label: LAB_0043b2ad
    POP EBP                             ; 0043b2b3
    POP EDI                             ; 0043b2b4
    POP ESI                             ; 0043b2b5
    POP EBX                             ; 0043b2b6
    RET                                 ; 0043b2b7
    MOV dword ptr [EAX + 0x8],0x1       ; 0043b2b8
        ;   Label: LAB_0043b2b8
    MOV dword ptr [EAX],EDX             ; 0043b2bf
    MOV dword ptr [EAX + 0x4],EDX       ; 0043b2c1
    JMP 0x0043b2a5                      ; 0043b2c4
        ;   XREF to: 0043b2a5 (UNCONDITIONAL_JUMP)  ; LAB_0043b2a5
    MOV EDX,EBX                         ; 0043b2c6
        ;   Label: LAB_0043b2c6
    MOV EDI,dword ptr [EAX]             ; 0043b2c8
    NEG EDX                             ; 0043b2ca
    CMP EDX,EDI                         ; 0043b2cc
    JLE 0x0043b2d4                      ; 0043b2ce
        ;   XREF to: 0043b2d4 (CONDITIONAL_JUMP)  ; LAB_0043b2d4
    MOV dword ptr [EAX],EDX             ; 0043b2d0
    JMP 0x0043b2a5                      ; 0043b2d2
        ;   XREF to: 0043b2a5 (UNCONDITIONAL_JUMP)  ; LAB_0043b2a5
    MOV EBP,dword ptr [EAX + 0x8]       ; 0043b2d4
        ;   Label: LAB_0043b2d4
    MOV EBX,dword ptr [EAX + 0x4]       ; 0043b2d7
    CMP EBX,EBP                         ; 0043b2da
    JLE 0x0043b2e3                      ; 0043b2dc
        ;   XREF to: 0043b2e3 (CONDITIONAL_JUMP)  ; LAB_0043b2e3
    MOV dword ptr [EAX + 0x4],EBP       ; 0043b2de
    JMP 0x0043b2a5                      ; 0043b2e1
        ;   XREF to: 0043b2a5 (UNCONDITIONAL_JUMP)  ; LAB_0043b2a5
    CMP EDX,EBX                         ; 0043b2e3
        ;   Label: LAB_0043b2e3
    JLE 0x0043b2a5                      ; 0043b2e5
        ;   XREF to: 0043b2a5 (CONDITIONAL_JUMP)  ; LAB_0043b2a5
    MOV dword ptr [EAX + 0x4],EDX       ; 0043b2e7
    JMP 0x0043b2a5                      ; 0043b2ea
        ;   XREF to: 0043b2a5 (UNCONDITIONAL_JUMP)  ; LAB_0043b2a5

