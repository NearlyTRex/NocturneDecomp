; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bc18c(float10 *param_1,int param_2)
;
; Local Variables:
; undefined2       Stack[-0x20]:2  local_20
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_FUN_005bc220 at 005bc258
;
; Called Functions:
;   crt_unknown.c_FUN_005bc134
;   crt_unknown.c_FUN_005bc91e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bc18c
        ;   Label: crt_unknown.c_FUN_005bc18c
    MOV EBP,ESP                         ; 005bc18d
    PUSH EBX                            ; 005bc18f
    PUSH ESI                            ; 005bc190
    PUSH EDI                            ; 005bc191
    SUB ESP,0xc                         ; 005bc192
    MOV ESI,dword ptr [EBP + 0x8]       ; 005bc195
    MOV EBX,dword ptr [EBP + 0xc]       ; 005bc198
    TEST EBX,EBX                        ; 005bc19b
    JZ 0x005bc91e                       ; 005bc19d
        ;   XREF to: 005bc91e (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005bc1a3
    FSTCW word ptr [ESP]                ; 005bc1a5
    POP EAX                             ; 005bc1a9
    MOV EDI,EAX                         ; 005bc1aa
    OR AH,0x3                           ; 005bc1ac
    AND EAX,0xffff                      ; 005bc1af
    PUSH EAX                            ; 005bc1b4
    FLDCW word ptr [ESP]                ; 005bc1b5
    POP EAX                             ; 005bc1b8
    MOV EDX,0x3fff                      ; 005bc1b9
    XOR ECX,ECX                         ; 005bc1be
    MOV word ptr [EBP + -0x10],DX       ; 005bc1c0
    MOV EDX,0x80000000                  ; 005bc1c4
    MOV dword ptr [EBP + -0x18],ECX     ; 005bc1c9
    MOV dword ptr [EBP + -0x14],EDX     ; 005bc1cc
    TEST EBX,EBX                        ; 005bc1cf
    JGE 0x005bc1f5                      ; 005bc1d1
        ;   XREF to: 005bc1f5 (CONDITIONAL_JUMP)  ; LAB_005bc1f5
    MOV EAX,EBX                         ; 005bc1d3
    NEG EAX                             ; 005bc1d5
    PUSH EAX                            ; 005bc1d7
    LEA EAX,[EBP + -0x18]               ; 005bc1d8
    PUSH EAX                            ; 005bc1db
    MOV EBX,ESI                         ; 005bc1dc
    CALL crt_unknown.c_FUN_005bc134     ; 005bc1de
        ;   XREF to: 005bc134 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc134()
    ADD ESP,0x8                         ; 005bc1e3
    LEA EDX,[EBP + -0x18]               ; 005bc1e6
    MOV EAX,ESI                         ; 005bc1e9
    FLD extended double ptr [EAX]       ; 005bc1eb
    FLD extended double ptr [EDX]       ; 005bc1ed
    FDIVP                               ; 005bc1ef
    FSTP extended double ptr [EBX]      ; 005bc1f1
    JMP 0x005bc211                      ; 005bc1f3
        ;   XREF to: 005bc211 (UNCONDITIONAL_JUMP)  ; LAB_005bc211
    PUSH EBX                            ; 005bc1f5
        ;   Label: LAB_005bc1f5
    LEA EAX,[EBP + -0x18]               ; 005bc1f6
    PUSH EAX                            ; 005bc1f9
    CALL crt_unknown.c_FUN_005bc134     ; 005bc1fa
        ;   XREF to: 005bc134 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bc134()
    MOV EBX,ESI                         ; 005bc1ff
    ADD ESP,0x8                         ; 005bc201
    LEA EDX,[EBP + -0x18]               ; 005bc204
    MOV EAX,ESI                         ; 005bc207
    FLD extended double ptr [EAX]       ; 005bc209
    FLD extended double ptr [EDX]       ; 005bc20b
    FMULP                               ; 005bc20d
    FSTP extended double ptr [EBX]      ; 005bc20f
    XOR EAX,EAX                         ; 005bc211
        ;   Label: LAB_005bc211
    MOV AX,DI                           ; 005bc213
    PUSH EAX                            ; 005bc216
        ;   Label: LAB_005bc216
    FLDCW word ptr [ESP]                ; 005bc217
    POP EAX                             ; 005bc21a
    JMP 0x005bc91e                      ; 005bc21b
        ;   XREF to: 005bc91e (UNCONDITIONAL_CALL)

