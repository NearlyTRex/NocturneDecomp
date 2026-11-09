; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005a72cc(float10 *param_1,int param_2)
;
; Local Variables:
; undefined2       Stack[-0x20]:2  local_20
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   crt_unknown.c_FUN_005a7360 at 005a7398
;
; Called Functions:
;   crt_unknown.c_FUN_005a7274
;   crt_unknown.c_FUN_005a7a5e
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005a72cc
        ;   Label: crt_unknown.c_FUN_005a72cc
    MOV EBP,ESP                         ; 005a72cd
    PUSH EBX                            ; 005a72cf
    PUSH ESI                            ; 005a72d0
    PUSH EDI                            ; 005a72d1
    SUB ESP,0xc                         ; 005a72d2
    MOV ESI,dword ptr [EBP + 0x8]       ; 005a72d5
    MOV EBX,dword ptr [EBP + 0xc]       ; 005a72d8
    TEST EBX,EBX                        ; 005a72db
    JZ 0x005a7a5e                       ; 005a72dd
        ;   XREF to: 005a7a5e (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005a72e3
    FSTCW word ptr [ESP]                ; 005a72e5
    POP EAX                             ; 005a72e9
    MOV EDI,EAX                         ; 005a72ea
    OR AH,0x3                           ; 005a72ec
    AND EAX,0xffff                      ; 005a72ef
    PUSH EAX                            ; 005a72f4
    FLDCW word ptr [ESP]                ; 005a72f5
    POP EAX                             ; 005a72f8
    MOV EDX,0x3fff                      ; 005a72f9
    XOR ECX,ECX                         ; 005a72fe
    MOV word ptr [EBP + -0x10],DX       ; 005a7300
    MOV EDX,0x80000000                  ; 005a7304
    MOV dword ptr [EBP + -0x18],ECX     ; 005a7309
    MOV dword ptr [EBP + -0x14],EDX     ; 005a730c
    TEST EBX,EBX                        ; 005a730f
    JGE 0x005a7335                      ; 005a7311
        ;   XREF to: 005a7335 (CONDITIONAL_JUMP)  ; LAB_005a7335
    MOV EAX,EBX                         ; 005a7313
    NEG EAX                             ; 005a7315
    PUSH EAX                            ; 005a7317
    LEA EAX,[EBP + -0x18]               ; 005a7318
    PUSH EAX                            ; 005a731b
    MOV EBX,ESI                         ; 005a731c
    CALL crt_unknown.c_FUN_005a7274     ; 005a731e
        ;   XREF to: 005a7274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7274()
    ADD ESP,0x8                         ; 005a7323
    LEA EDX,[EBP + -0x18]               ; 005a7326
    MOV EAX,ESI                         ; 005a7329
    FLD extended double ptr [EAX]       ; 005a732b
    FLD extended double ptr [EDX]       ; 005a732d
    FDIVP                               ; 005a732f
    FSTP extended double ptr [EBX]      ; 005a7331
    JMP 0x005a7351                      ; 005a7333
        ;   XREF to: 005a7351 (UNCONDITIONAL_JUMP)  ; LAB_005a7351
    PUSH EBX                            ; 005a7335
        ;   Label: LAB_005a7335
    LEA EAX,[EBP + -0x18]               ; 005a7336
    PUSH EAX                            ; 005a7339
    CALL crt_unknown.c_FUN_005a7274     ; 005a733a
        ;   XREF to: 005a7274 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a7274()
    MOV EBX,ESI                         ; 005a733f
    ADD ESP,0x8                         ; 005a7341
    LEA EDX,[EBP + -0x18]               ; 005a7344
    MOV EAX,ESI                         ; 005a7347
    FLD extended double ptr [EAX]       ; 005a7349
    FLD extended double ptr [EDX]       ; 005a734b
    FMULP                               ; 005a734d
    FSTP extended double ptr [EBX]      ; 005a734f
    XOR EAX,EAX                         ; 005a7351
        ;   Label: LAB_005a7351
    MOV AX,DI                           ; 005a7353
    PUSH EAX                            ; 005a7356
        ;   Label: LAB_005a7356
    FLDCW word ptr [ESP]                ; 005a7357
    POP EAX                             ; 005a735a
    JMP 0x005a7a5e                      ; 005a735b
        ;   XREF to: 005a7a5e (UNCONDITIONAL_CALL)

