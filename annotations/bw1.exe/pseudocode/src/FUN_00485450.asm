; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00485450(int param_1)
;
;
; Called Functions:
;   FUN_0040cc00
;   FUN_004688e0
;   FUN_00468950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00485450
        ;   Label: FUN_00485450
    SUB ESP,0x4                         ; 00485451
    MOV EBX,dword ptr [ESP + 0xc]       ; 00485454
    LEA EAX,[EBX + 0x158]               ; 00485458
    PUSH EAX                            ; 0048545e
    CALL FUN_004688e0                   ; 0048545f
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    LEA EAX,[EBX + 0x20]                ; 00485464
    LEA EDX,[EBX + 0x2f8]               ; 00485467
    MOV dword ptr [EBX + 0x2ec],0x0     ; 0048546d
    ADD ESP,0x4                         ; 00485477
    MOV ECX,dword ptr [EDX]             ; 0048547a
    MOV dword ptr [EAX],ECX             ; 0048547c
    MOV ECX,dword ptr [EDX + 0x4]       ; 0048547e
    MOV dword ptr [EAX + 0x4],ECX       ; 00485481
    MOV ECX,dword ptr [EDX + 0x8]       ; 00485484
    MOV dword ptr [EAX + 0x8],ECX       ; 00485487
    PUSH dword ptr [EBX + 0x2e4]        ; 0048548a
    PUSH dword ptr [EBX + 0x2e0]        ; 00485490
    CALL FUN_0040cc00                   ; 00485496
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x8],EAX       ; 0048549b
    FLD float ptr [ESP + 0x8]           ; 0048549f
    ADD ESP,0x8                         ; 004854a3
    PUSH 0x5db582                       ; 004854a6
    PUSH 0x1beee04                      ; 004854ab
    FSTP float ptr [EBX + 0x2dc]        ; 004854b0
    CALL FUN_00468950                   ; 004854b6
        ;   XREF to: 00468950 (UNCONDITIONAL_CALL)  ; undefined FUN_00468950()
    ADD ESP,0x8                         ; 004854bb
    PUSH 0x1beee04                      ; 004854be
    CALL FUN_004688e0                   ; 004854c3
        ;   XREF to: 004688e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688e0()
    ADD ESP,0x4                         ; 004854c8
    MOV dword ptr [EBX + 0x338],0x0     ; 004854cb
    ADD ESP,0x4                         ; 004854d5
    POP EBX                             ; 004854d8
    RET                                 ; 004854d9

