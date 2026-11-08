; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c445c(float10 *param_1,int param_2)
;
; Local Variables:
; undefined2       Stack[-0x20]:2  local_20
; undefined1[10]   Stack[-0x1c]:10  local_1c
;
; XREF[1]:
;   FUN_005c44f0 at 005c4528
;
; Called Functions:
;   FUN_005c4404
;   FUN_005c4bee
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c445c
        ;   Label: FUN_005c445c
    MOV EBP,ESP                         ; 005c445d
    PUSH EBX                            ; 005c445f
    PUSH ESI                            ; 005c4460
    PUSH EDI                            ; 005c4461
    SUB ESP,0xc                         ; 005c4462
    MOV ESI,dword ptr [EBP + 0x8]       ; 005c4465
    MOV EBX,dword ptr [EBP + 0xc]       ; 005c4468
    TEST EBX,EBX                        ; 005c446b
    JZ 0x005c4bee                       ; 005c446d
        ;   XREF to: 005c4bee (CONDITIONAL_JUMP)
    PUSH 0x0                            ; 005c4473
    FSTCW word ptr [ESP]                ; 005c4475
    POP EAX                             ; 005c4479
    MOV EDI,EAX                         ; 005c447a
    OR AH,0x3                           ; 005c447c
    AND EAX,0xffff                      ; 005c447f
    PUSH EAX                            ; 005c4484
    FLDCW word ptr [ESP]                ; 005c4485
    POP EAX                             ; 005c4488
    MOV EDX,0x3fff                      ; 005c4489
    XOR ECX,ECX                         ; 005c448e
    MOV word ptr [EBP + -0x10],DX       ; 005c4490
    MOV EDX,0x80000000                  ; 005c4494
    MOV dword ptr [EBP + -0x18],ECX     ; 005c4499
    MOV dword ptr [EBP + -0x14],EDX     ; 005c449c
    TEST EBX,EBX                        ; 005c449f
    JGE 0x005c44c5                      ; 005c44a1
        ;   XREF to: 005c44c5 (CONDITIONAL_JUMP)  ; LAB_005c44c5
    MOV EAX,EBX                         ; 005c44a3
    NEG EAX                             ; 005c44a5
    PUSH EAX                            ; 005c44a7
    LEA EAX,[EBP + -0x18]               ; 005c44a8
    PUSH EAX                            ; 005c44ab
    MOV EBX,ESI                         ; 005c44ac
    CALL FUN_005c4404                   ; 005c44ae
        ;   XREF to: 005c4404 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4404()
    ADD ESP,0x8                         ; 005c44b3
    LEA EDX,[EBP + -0x18]               ; 005c44b6
    MOV EAX,ESI                         ; 005c44b9
    FLD extended double ptr [EAX]       ; 005c44bb
    FLD extended double ptr [EDX]       ; 005c44bd
    FDIVP                               ; 005c44bf
    FSTP extended double ptr [EBX]      ; 005c44c1
    JMP 0x005c44e1                      ; 005c44c3
        ;   XREF to: 005c44e1 (UNCONDITIONAL_JUMP)  ; LAB_005c44e1
    PUSH EBX                            ; 005c44c5
        ;   Label: LAB_005c44c5
    LEA EAX,[EBP + -0x18]               ; 005c44c6
    PUSH EAX                            ; 005c44c9
    CALL FUN_005c4404                   ; 005c44ca
        ;   XREF to: 005c4404 (UNCONDITIONAL_CALL)  ; undefined FUN_005c4404()
    MOV EBX,ESI                         ; 005c44cf
    ADD ESP,0x8                         ; 005c44d1
    LEA EDX,[EBP + -0x18]               ; 005c44d4
    MOV EAX,ESI                         ; 005c44d7
    FLD extended double ptr [EAX]       ; 005c44d9
    FLD extended double ptr [EDX]       ; 005c44db
    FMULP                               ; 005c44dd
    FSTP extended double ptr [EBX]      ; 005c44df
    XOR EAX,EAX                         ; 005c44e1
        ;   Label: LAB_005c44e1
    MOV AX,DI                           ; 005c44e3
    PUSH EAX                            ; 005c44e6
        ;   Label: LAB_005c44e6
    FLDCW word ptr [ESP]                ; 005c44e7
    POP EAX                             ; 005c44ea
    JMP 0x005c4bee                      ; 005c44eb
        ;   XREF to: 005c4bee (UNCONDITIONAL_CALL)

