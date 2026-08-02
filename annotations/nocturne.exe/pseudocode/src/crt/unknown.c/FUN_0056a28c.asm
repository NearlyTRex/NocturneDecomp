; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056a28c(float10 *param_1,int param_2)
;
; Local Variables:
; undefined2       Stack[-0x20]:2  local_20
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_FUN_0056a320 at 0056a358
;
; Called Functions:
;   crt_unknown.c_FUN_0056a234
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0056a28c
        ;   Label: crt_unknown.c_FUN_0056a28c
    MOV EBP,ESP                         ; 0056a28d
    PUSH EBX                            ; 0056a28f
    PUSH ESI                            ; 0056a290
    PUSH EDI                            ; 0056a291
    SUB ESP,0xc                         ; 0056a292
    MOV ESI,dword ptr [EBP + 0x8]       ; 0056a295
    MOV EBX,dword ptr [EBP + 0xc]       ; 0056a298
    TEST EBX,EBX                        ; 0056a29b
    JZ 0x0056aa1e                       ; 0056a29d
        ;   XREF to: 0056aa1e (CONDITIONAL_JUMP)  ; LAB_0056aa1e
    PUSH 0x0                            ; 0056a2a3
    FSTCW word ptr [ESP]                ; 0056a2a5
    POP EAX                             ; 0056a2a9
    MOV EDI,EAX                         ; 0056a2aa
    OR AH,0x3                           ; 0056a2ac
    AND EAX,0xffff                      ; 0056a2af
    PUSH EAX                            ; 0056a2b4
    FLDCW word ptr [ESP]                ; 0056a2b5
    POP EAX                             ; 0056a2b8
    MOV EDX,0x3fff                      ; 0056a2b9
    XOR ECX,ECX                         ; 0056a2be
    MOV word ptr [EBP + -0x10],DX       ; 0056a2c0
    MOV EDX,0x80000000                  ; 0056a2c4
    MOV dword ptr [EBP + -0x18],ECX     ; 0056a2c9
    MOV dword ptr [EBP + -0x14],EDX     ; 0056a2cc
    TEST EBX,EBX                        ; 0056a2cf
    JGE 0x0056a2f5                      ; 0056a2d1
        ;   XREF to: 0056a2f5 (CONDITIONAL_JUMP)  ; LAB_0056a2f5
    MOV EAX,EBX                         ; 0056a2d3
    NEG EAX                             ; 0056a2d5
    PUSH EAX                            ; 0056a2d7
    LEA EAX,[EBP + -0x18]               ; 0056a2d8
    PUSH EAX                            ; 0056a2db
    MOV EBX,ESI                         ; 0056a2dc
    CALL crt_unknown.c_FUN_0056a234     ; 0056a2de
        ;   XREF to: 0056a234 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a234()
    ADD ESP,0x8                         ; 0056a2e3
    LEA EDX,[EBP + -0x18]               ; 0056a2e6
    MOV EAX,ESI                         ; 0056a2e9
    FLD extended double ptr [EAX]       ; 0056a2eb
    FLD extended double ptr [EDX]       ; 0056a2ed
    FDIVP                               ; 0056a2ef
    FSTP extended double ptr [EBX]      ; 0056a2f1
    JMP 0x0056a311                      ; 0056a2f3
        ;   XREF to: 0056a311 (UNCONDITIONAL_JUMP)  ; LAB_0056a311
    PUSH EBX                            ; 0056a2f5
        ;   Label: LAB_0056a2f5
    LEA EAX,[EBP + -0x18]               ; 0056a2f6
    PUSH EAX                            ; 0056a2f9
    CALL crt_unknown.c_FUN_0056a234     ; 0056a2fa
        ;   XREF to: 0056a234 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_0056a234()
    MOV EBX,ESI                         ; 0056a2ff
    ADD ESP,0x8                         ; 0056a301
    LEA EDX,[EBP + -0x18]               ; 0056a304
    MOV EAX,ESI                         ; 0056a307
    FLD extended double ptr [EAX]       ; 0056a309
    FLD extended double ptr [EDX]       ; 0056a30b
    FMULP                               ; 0056a30d
    FSTP extended double ptr [EBX]      ; 0056a30f
    XOR EAX,EAX                         ; 0056a311
        ;   Label: LAB_0056a311
    MOV AX,DI                           ; 0056a313
    PUSH EAX                            ; 0056a316
        ;   Label: LAB_0056a316
    FLDCW word ptr [ESP]                ; 0056a317
    POP EAX                             ; 0056a31a
    JMP 0x0056aa1e                      ; 0056a31b
        ;   XREF to: 0056aa1e (UNCONDITIONAL_JUMP)  ; LAB_0056aa1e

