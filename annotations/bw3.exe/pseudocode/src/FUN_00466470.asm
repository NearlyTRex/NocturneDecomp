; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00466470(int param_1)
;
;
; XREF[1]:
;   FUN_00466790 at 00466791
;
; Called Functions:
;   FUN_004dece0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00466470
        ;   Label: FUN_00466470
    PUSH EDI                            ; 00466471
    PUSH EBP                            ; 00466472
    SUB ESP,0x3c                        ; 00466473
    MOV ESI,dword ptr [ESP + 0x4c]      ; 00466476
    MOV EDX,dword ptr [ESI + 0x24]      ; 0046647a
    XOR EDI,EDI                         ; 0046647d
    TEST EDX,EDX                        ; 0046647f
    JLE 0x00466532                      ; 00466481
        ;   XREF to: 00466532 (CONDITIONAL_JUMP)  ; LAB_00466532
    PUSH EBX                            ; 00466487
    XOR EBX,EBX                         ; 00466488
    MOV dword ptr [ESP + 0x8],0x3       ; 0046648a
        ;   Label: LAB_0046648a
    MOV EAX,dword ptr [ESI + 0x34]      ; 00466492
    MOV EAX,dword ptr [EBX + EAX*0x1]   ; 00466495
    MOV dword ptr [ESP + 0xc],EAX       ; 00466498
    MOV EAX,dword ptr [ESI + 0x34]      ; 0046649c
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x4] ; 0046649f
    MOV dword ptr [ESP + 0x10],EAX      ; 004664a3
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664a7
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8] ; 004664aa
    MOV dword ptr [ESP + 0x14],EAX      ; 004664ae
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664b2
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0xc] ; 004664b5
    MOV dword ptr [ESP + 0x18],EAX      ; 004664b9
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664bd
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x10] ; 004664c0
    MOV dword ptr [ESP + 0x1c],EAX      ; 004664c4
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664c8
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x14] ; 004664cb
    MOV dword ptr [ESP + 0x28],EAX      ; 004664cf
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664d3
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x18] ; 004664d6
    MOV dword ptr [ESP + 0x34],EAX      ; 004664da
    LEA EAX,[ESP + 0x4]                 ; 004664de
    PUSH EAX                            ; 004664e2
    MOV EBP,dword ptr [ESI + 0x2c]      ; 004664e3
    PUSH EBP                            ; 004664e6
    CALL FUN_004dece0                   ; 004664e7
        ;   XREF to: 004dece0 (UNCONDITIONAL_CALL)  ; undefined FUN_004dece0()
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664ec
    ADD ESP,0x8                         ; 004664ef
    LEA EDX,[EAX + EBX*0x1]             ; 004664f2
    MOV EAX,dword ptr [ESP + 0xc]       ; 004664f5
    MOV dword ptr [EDX],EAX             ; 004664f9
    MOV EAX,dword ptr [ESI + 0x34]      ; 004664fb
    LEA EDX,[EAX + EBX*0x1]             ; 004664fe
    MOV EAX,dword ptr [ESP + 0x10]      ; 00466501
    MOV dword ptr [EDX + 0x4],EAX       ; 00466505
    MOV EAX,dword ptr [ESI + 0x34]      ; 00466508
    LEA EDX,[EAX + EBX*0x1]             ; 0046650b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0046650e
    MOV dword ptr [EDX + 0x8],EAX       ; 00466512
    MOV EAX,dword ptr [ESI + 0x34]      ; 00466515
    LEA EDX,[EAX + EBX*0x1]             ; 00466518
    MOV EAX,dword ptr [ESP + 0x18]      ; 0046651b
    MOV dword ptr [EDX + 0xc],EAX       ; 0046651f
    INC EDI                             ; 00466522
    MOV EAX,dword ptr [ESI + 0x24]      ; 00466523
    ADD EBX,0x20                        ; 00466526
    CMP EDI,EAX                         ; 00466529
    JL 0x0046648a                       ; 0046652b
        ;   XREF to: 0046648a (CONDITIONAL_JUMP)  ; LAB_0046648a
    POP EBX                             ; 00466531
    ADD ESP,0x3c                        ; 00466532
        ;   Label: LAB_00466532
    POP EBP                             ; 00466535
    POP EDI                             ; 00466536
    POP ESI                             ; 00466537
    RET                                 ; 00466538

