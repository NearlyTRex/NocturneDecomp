; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float FUN_00434590(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[18]:
;   FUN_0046ea80 at 0046ef54
;   FUN_0046f740 at 0046f9d6
;   FUN_004712b0 at 004712e8
;   FUN_00471af0 at 00471cf4
;   FUN_00474400 at 00474807
;   FUN_00475650 at 00475838
;   FUN_00475920 at 00475a19
;   FUN_00541bc0 at 00541c1d
;   FUN_0058a360 at 0058a7bd
;   FUN_0058afe0 at 0058b283
;   ... and 8 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00434590
        ;   Label: FUN_00434590
    PUSH ESI                            ; 00434591
    PUSH EBP                            ; 00434592
    MOV EBP,ESP                         ; 00434593
    SUB ESP,0xc                         ; 00434595
    AND ESP,0xfffffff8                  ; 00434598
    MOV EDX,dword ptr [EBP + 0x10]      ; 0043459b
    MOV EAX,dword ptr [EDX + 0x2c98]    ; 0043459e
    XOR ECX,ECX                         ; 004345a4
    SHL EAX,0x3                         ; 004345a6
    MOV dword ptr [ESP],ECX             ; 004345a9
    MOV ECX,EAX                         ; 004345ac
    SHL EAX,0x3                         ; 004345ae
    SUB EAX,ECX                         ; 004345b1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004345b3
    CMP EBX,dword ptr [EDX + EAX*0x1 + 0x27cc] ; 004345b6
    JZ 0x004345e4                       ; 004345bd
        ;   XREF to: 004345e4 (CONDITIONAL_JUMP)  ; LAB_004345e4
    MOV EAX,dword ptr [EDX + 0x2c98]    ; 004345bf
        ;   Label: LAB_004345bf
    SHL EAX,0x3                         ; 004345c5
    MOV ECX,EAX                         ; 004345c8
    SHL EAX,0x3                         ; 004345ca
    SUB EAX,ECX                         ; 004345cd
    MOV ESI,dword ptr [EBP + 0x14]      ; 004345cf
    CMP ESI,dword ptr [EDX + EAX*0x1 + 0x27c8] ; 004345d2
    JZ 0x004345ef                       ; 004345d9
        ;   XREF to: 004345ef (CONDITIONAL_JUMP)  ; LAB_004345ef
    MOV EAX,dword ptr [ESP]             ; 004345db
    MOV ESP,EBP                         ; 004345de
    POP EBP                             ; 004345e0
    POP ESI                             ; 004345e1
    POP EBX                             ; 004345e2
    RET                                 ; 004345e3
    MOV EAX,dword ptr [EDX + 0x2c9c]    ; 004345e4
        ;   Label: LAB_004345e4
    MOV dword ptr [ESP],EAX             ; 004345ea
    JMP 0x004345bf                      ; 004345ed
        ;   XREF to: 004345bf (UNCONDITIONAL_JUMP)  ; LAB_004345bf
    FLD float ptr [EDX + 0x2c9c]        ; 004345ef
        ;   Label: LAB_004345ef
    FLD1                                ; 004345f5
    FSUBRP                              ; 004345f7
    FADD float ptr [ESP]                ; 004345f9
    FSTP float ptr [ESP]                ; 004345fc
    MOV EAX,dword ptr [ESP]             ; 004345ff
    MOV ESP,EBP                         ; 00434602
    POP EBP                             ; 00434604
    POP ESI                             ; 00434605
    POP EBX                             ; 00434606
    RET                                 ; 00434607

