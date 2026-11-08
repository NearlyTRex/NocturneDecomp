; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00431270(void)
;
;
; Referenced Globals:
;   undefined4 DAT_007bee30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431270
        ;   Label: FUN_00431270
    PUSH ESI                            ; 00431271
    PUSH EDI                            ; 00431272
    PUSH EBP                            ; 00431273
    MOV ESI,dword ptr [0x007bee30]      ; 00431274 | DAT_007bee30
    XOR ECX,ECX                         ; 0043127a
    TEST ESI,ESI                        ; 0043127c
    JLE 0x0043129d                      ; 0043127e
        ;   XREF to: 0043129d (CONDITIONAL_JUMP)  ; LAB_0043129d
    MOV EAX,0x7bee34                    ; 00431280
    MOV EDX,dword ptr [EAX + 0x8]       ; 00431285
        ;   Label: LAB_00431285
    TEST EDX,EDX                        ; 00431288
    JZ 0x004312a8                       ; 0043128a
        ;   XREF to: 004312a8 (CONDITIONAL_JUMP)  ; LAB_004312a8
    MOV EBX,dword ptr [EAX + 0x8]       ; 0043128c
    CMP EBX,dword ptr [EAX]             ; 0043128f
    JGE 0x004312b6                      ; 00431291
        ;   XREF to: 004312b6 (CONDITIONAL_JUMP)  ; LAB_004312b6
    MOV dword ptr [EAX],EBX             ; 00431293
    INC ECX                             ; 00431295
        ;   Label: LAB_00431295
    ADD EAX,0x30                        ; 00431296
    CMP ECX,ESI                         ; 00431299
    JL 0x00431285                       ; 0043129b
        ;   XREF to: 00431285 (CONDITIONAL_JUMP)  ; LAB_00431285
    MOV dword ptr [0x007bee30],ESI      ; 0043129d | DAT_007bee30
        ;   Label: LAB_0043129d
    POP EBP                             ; 004312a3
    POP EDI                             ; 004312a4
    POP ESI                             ; 004312a5
    POP EBX                             ; 004312a6
    RET                                 ; 004312a7
    MOV dword ptr [EAX + 0x8],0x1       ; 004312a8
        ;   Label: LAB_004312a8
    MOV dword ptr [EAX],EDX             ; 004312af
    MOV dword ptr [EAX + 0x4],EDX       ; 004312b1
    JMP 0x00431295                      ; 004312b4
        ;   XREF to: 00431295 (UNCONDITIONAL_JUMP)  ; LAB_00431295
    MOV EDX,EBX                         ; 004312b6
        ;   Label: LAB_004312b6
    MOV EDI,dword ptr [EAX]             ; 004312b8
    NEG EDX                             ; 004312ba
    CMP EDX,EDI                         ; 004312bc
    JLE 0x004312c4                      ; 004312be
        ;   XREF to: 004312c4 (CONDITIONAL_JUMP)  ; LAB_004312c4
    MOV dword ptr [EAX],EDX             ; 004312c0
    JMP 0x00431295                      ; 004312c2
        ;   XREF to: 00431295 (UNCONDITIONAL_JUMP)  ; LAB_00431295
    MOV EBP,dword ptr [EAX + 0x8]       ; 004312c4
        ;   Label: LAB_004312c4
    MOV EBX,dword ptr [EAX + 0x4]       ; 004312c7
    CMP EBX,EBP                         ; 004312ca
    JLE 0x004312d3                      ; 004312cc
        ;   XREF to: 004312d3 (CONDITIONAL_JUMP)  ; LAB_004312d3
    MOV dword ptr [EAX + 0x4],EBP       ; 004312ce
    JMP 0x00431295                      ; 004312d1
        ;   XREF to: 00431295 (UNCONDITIONAL_JUMP)  ; LAB_00431295
    CMP EDX,EBX                         ; 004312d3
        ;   Label: LAB_004312d3
    JLE 0x00431295                      ; 004312d5
        ;   XREF to: 00431295 (CONDITIONAL_JUMP)  ; LAB_00431295
    MOV dword ptr [EAX + 0x4],EDX       ; 004312d7
    JMP 0x00431295                      ; 004312da
        ;   XREF to: 00431295 (UNCONDITIONAL_JUMP)  ; LAB_00431295

