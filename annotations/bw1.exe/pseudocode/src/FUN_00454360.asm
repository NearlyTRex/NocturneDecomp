; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00454360(int param_1,int *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005d7a07
;   undefined4 DAT_005fe604
;
; Called Functions:
;   FUN_0044c840
;   FUN_005c03a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00454360
        ;   Label: FUN_00454360
    PUSH ESI                            ; 00454361
    PUSH EBP                            ; 00454362
    MOV EBP,ESP                         ; 00454363
    SUB ESP,0x1c                        ; 00454365
    AND ESP,0xfffffff8                  ; 00454368
    MOV EDX,dword ptr [EBP + 0x10]      ; 0045436b
    MOV ECX,dword ptr [EBP + 0x14]      ; 0045436e
    MOV EAX,dword ptr [ECX]             ; 00454371
    MOV EBX,dword ptr [EDX + 0x16c]     ; 00454373
    SUB EAX,EBX                         ; 00454379
    MOV dword ptr [ESP],EAX             ; 0045437b
    MOV EAX,dword ptr [ECX + 0x4]       ; 0045437e
    MOV ESI,dword ptr [EDX + 0x170]     ; 00454381
    SUB EAX,ESI                         ; 00454387
    MOV dword ptr [ESP + 0x4],EAX       ; 00454389
    MOV EAX,dword ptr [ECX + 0x8]       ; 0045438d
    SUB EAX,dword ptr [EDX + 0x174]     ; 00454390
    LEA EBX,[ESP + 0xc]                 ; 00454396
    MOV dword ptr [ESP + 0x8],EAX       ; 0045439a
    MOV EAX,ESP                         ; 0045439e
    FILD dword ptr [EAX]                ; 004543a0
    FMUL float ptr [0x005fe604]         ; 004543a2 | DAT_005fe604
    FSTP float ptr [EBX]                ; 004543a8
    FILD dword ptr [EAX + 0x4]          ; 004543aa
    FMUL float ptr [0x005fe604]         ; 004543ad | DAT_005fe604
    FSTP float ptr [EBX + 0x4]          ; 004543b3
    FILD dword ptr [EAX + 0x8]          ; 004543b6
    FMUL float ptr [0x005fe604]         ; 004543b9 | DAT_005fe604
    FSTP float ptr [EBX + 0x8]          ; 004543bf
    FLD float ptr [ESP + 0x10]          ; 004543c2
    FMUL ST0                            ; 004543c6
    FLD float ptr [ESP + 0xc]           ; 004543c8
    FMUL ST0                            ; 004543cc
    FADDP                               ; 004543ce
    FLD float ptr [ESP + 0x14]          ; 004543d0
    FMUL ST0                            ; 004543d4
    FADDP                               ; 004543d6
    FSQRT                               ; 004543d8
    FMUL double ptr [0x005d7a07]        ; 004543da | DAT_005d7a07
    CALL FUN_005c03a0                   ; 004543e0
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c03a0()
    FISTP dword ptr [ESP + 0x18]        ; 004543e5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004543e9
    PUSH EAX                            ; 004543ed
    PUSH ECX                            ; 004543ee
    ADD EDX,0x16c                       ; 004543ef
    PUSH EDX                            ; 004543f5
    PUSH 0x1480e2c                      ; 004543f6
    CALL FUN_0044c840                   ; 004543fb
        ;   XREF to: 0044c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0044c840()
    MOV EDX,EAX                         ; 00454400
    SHL EAX,0x4                         ; 00454402
    ADD EAX,EDX                         ; 00454405
    MOV EDX,EAX                         ; 00454407
    SHL EAX,0x4                         ; 00454409
    SUB EAX,EDX                         ; 0045440c
    SHR EAX,0xe                         ; 0045440e
    ADD ESP,0x10                        ; 00454411
    CMP EAX,0xff                        ; 00454414
    JBE 0x00454426                      ; 00454419
        ;   XREF to: 00454426 (CONDITIONAL_JUMP)  ; LAB_00454426
    MOV EAX,0xffff                      ; 0045441b
    MOV ESP,EBP                         ; 00454420
    POP EBP                             ; 00454422
    POP ESI                             ; 00454423
    POP EBX                             ; 00454424
    RET                                 ; 00454425
    SHL EAX,0x8                         ; 00454426
        ;   Label: LAB_00454426
    MOV ESP,EBP                         ; 00454429
    POP EBP                             ; 0045442b
    POP ESI                             ; 0045442c
    POP EBX                             ; 0045442d
    RET                                 ; 0045442e

