; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b72c0(undefined4 *param_1,undefined4 *param_2,float param_3)
;
; Local Variables:
; undefined        Stack[-0xd0]:1  local_d0
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xa4]:4  local_a4
; undefined        Stack[-0xa0]:1  local_a0
; undefined        Stack[-0x70]:1  local_70
; undefined        Stack[-0x60]:1  local_60
; undefined        Stack[-0x50]:1  local_50
; undefined        Stack[-0x40]:1  local_40
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x20]:1  local_20
;
; XREF[6]:
;   FUN_004328f0 at 00432b8e
;   FUN_0046f740 at 0046fa08
;   FUN_0058afe0 at 0058b2b5
;   FUN_00595d40 at 00595d84
;   FUN_00595f10 at 00595f62
;   FUN_00599a10 at 00599a54
;
; Called Functions:
;   FUN_005b7410
;   FUN_005b75a0
;   FUN_005b7940
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b72c0
        ;   Label: FUN_005b72c0
    PUSH EDI                            ; 005b72c1
    PUSH EBP                            ; 005b72c2
    SUB ESP,0xc4                        ; 005b72c3
    MOV EBP,dword ptr [ESP + 0xd8]      ; 005b72c9
    MOV EBX,ESI                         ; 005b72d0
    FLDZ                                ; 005b72d2
    FCOMP float ptr [ESP + 0xdc]        ; 005b72d4
    FNSTSW AX                           ; 005b72db
    SAHF                                ; 005b72dd
    JNC 0x005b7313                      ; 005b72de
        ;   XREF to: 005b7313 (CONDITIONAL_JUMP)  ; LAB_005b7313
    CMP dword ptr [ESP + 0xdc],0x3f800000 ; 005b72e0
    JL 0x005b7325                       ; 005b72eb
        ;   XREF to: 005b7325 (CONDITIONAL_JUMP)  ; LAB_005b7325
    MOV ECX,0xc                         ; 005b72ed
    LEA EDI,[ESP + 0x30]                ; 005b72f2
    MOV ESI,EBP                         ; 005b72f6
    MOVSD.REP ES:EDI,ESI                ; 005b72f8
        ;   Label: LAB_005b72f8
    MOV ECX,0xc                         ; 005b72fa
    LEA ESI,[ESP + 0x30]                ; 005b72ff
    MOV EDI,EBX                         ; 005b7303
    MOVSD.REP ES:EDI,ESI                ; 005b7305
    MOV EAX,EBX                         ; 005b7307
    ADD ESP,0xc4                        ; 005b7309
    POP EBP                             ; 005b730f
    POP EDI                             ; 005b7310
    POP EBX                             ; 005b7311
    RET                                 ; 005b7312
    MOV ECX,0xc                         ; 005b7313
        ;   Label: LAB_005b7313
    LEA EDI,[ESP + 0x30]                ; 005b7318
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005b731c
    JMP 0x005b72f8                      ; 005b7323
        ;   XREF to: 005b72f8 (UNCONDITIONAL_JUMP)  ; LAB_005b72f8
    MOV ECX,dword ptr [ESP + 0xd4]      ; 005b7325
        ;   Label: LAB_005b7325
    PUSH ECX                            ; 005b732c
    LEA ESI,[ESP + 0x94]                ; 005b732d
    LEA EDI,[ESP + 0x74]                ; 005b7334
    CALL FUN_005b75a0                   ; 005b7338
        ;   XREF to: 005b75a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b75a0()
    LEA ESI,[ESP + 0x94]                ; 005b733d
    ADD ESP,0x4                         ; 005b7344
    MOVSD ES:EDI,ESI                    ; 005b7347
    MOVSD ES:EDI,ESI                    ; 005b7348
    MOVSD ES:EDI,ESI                    ; 005b7349
    MOVSD ES:EDI,ESI                    ; 005b734a
    PUSH EBP                            ; 005b734b
    LEA ESI,[ESP + 0xb4]                ; 005b734c
    LEA EDI,[ESP + 0x84]                ; 005b7353
    CALL FUN_005b75a0                   ; 005b735a
        ;   XREF to: 005b75a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b75a0()
    LEA ESI,[ESP + 0xb4]                ; 005b735f
    ADD ESP,0x4                         ; 005b7366
    MOVSD ES:EDI,ESI                    ; 005b7369
    MOVSD ES:EDI,ESI                    ; 005b736a
    MOVSD ES:EDI,ESI                    ; 005b736b
    MOVSD ES:EDI,ESI                    ; 005b736c
    LEA ESI,[ESP + 0x80]                ; 005b736d
    PUSH dword ptr [ESP + 0xdc]         ; 005b7374
    PUSH ESI                            ; 005b737b
    LEA ESI,[ESP + 0x78]                ; 005b737c
    PUSH ESI                            ; 005b7380
    LEA ESI,[ESP + 0xac]                ; 005b7381
    LEA EDI,[ESP + 0x6c]                ; 005b7388
    CALL FUN_005b7940                   ; 005b738c
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    LEA ESI,[ESP + 0xac]                ; 005b7391
    ADD ESP,0xc                         ; 005b7398
    MOVSD ES:EDI,ESI                    ; 005b739b
    MOVSD ES:EDI,ESI                    ; 005b739c
    MOVSD ES:EDI,ESI                    ; 005b739d
    MOVSD ES:EDI,ESI                    ; 005b739e
    LEA ESI,[ESP + 0x60]                ; 005b739f
    PUSH ESI                            ; 005b73a3
    LEA ESI,[ESP + 0x4]                 ; 005b73a4
    PUSH ESI                            ; 005b73a8
    CALL FUN_005b7410                   ; 005b73a9
        ;   XREF to: 005b7410 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7410()
    ADD ESP,0x8                         ; 005b73ae
    FLD1                                ; 005b73b1
    MOV ESI,dword ptr [ESP + 0xd4]      ; 005b73b3
    FSUB float ptr [ESP + 0xdc]         ; 005b73ba
    FLD float ptr [ESI + 0xc]           ; 005b73c1
    FMUL ST1                            ; 005b73c4
    FLD float ptr [EBP + 0xc]           ; 005b73c6
    FMUL float ptr [ESP + 0xdc]         ; 005b73c9
    FADDP                               ; 005b73d0
    FSTP float ptr [ESP + 0xc]          ; 005b73d2
    FLD float ptr [ESI + 0x1c]          ; 005b73d6
    FMUL ST1                            ; 005b73d9
    FLD float ptr [EBP + 0x1c]          ; 005b73db
    FMUL float ptr [ESP + 0xdc]         ; 005b73de
    FADDP                               ; 005b73e5
    FSTP float ptr [ESP + 0x1c]         ; 005b73e7
    FMUL float ptr [ESI + 0x2c]         ; 005b73eb
    FLD float ptr [EBP + 0x2c]          ; 005b73ee
    FMUL float ptr [ESP + 0xdc]         ; 005b73f1
    LEA EDI,[ESP + 0x30]                ; 005b73f8
    MOV ECX,0xc                         ; 005b73fc
    FADDP                               ; 005b7401
    MOV ESI,ESP                         ; 005b7403
    FSTP float ptr [ESP + 0x2c]         ; 005b7405
    JMP 0x005b72f8                      ; 005b7409
        ;   XREF to: 005b72f8 (UNCONDITIONAL_JUMP)  ; LAB_005b72f8

