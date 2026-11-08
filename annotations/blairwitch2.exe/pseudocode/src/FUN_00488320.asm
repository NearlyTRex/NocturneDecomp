; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_00488320(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x50]:1  local_50
;
; XREF[2]:
;   FUN_00488450 at 0048865c
;   FUN_004fef30 at 004fef6d
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_00408d70
;   FUN_00408de0
;   FUN_0041bb80
;   FUN_00535ec0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00488320
        ;   Label: FUN_00488320
    PUSH EBP                            ; 00488321
    SUB ESP,0xa8                        ; 00488322
    MOV EBP,dword ptr [ESP + 0xb4]      ; 00488328
    MOV EBX,dword ptr [ESP + 0xb8]      ; 0048832f
    TEST EBX,EBX                        ; 00488336
    JNZ 0x00488345                      ; 00488338
        ;   XREF to: 00488345 (CONDITIONAL_JUMP)  ; LAB_00488345
    XOR EAX,EAX                         ; 0048833a
    ADD ESP,0xa8                        ; 0048833c
    POP EBP                             ; 00488342
    POP EBX                             ; 00488343
    RET                                 ; 00488344
    PUSH EDI                            ; 00488345
        ;   Label: LAB_00488345
    PUSH ESI                            ; 00488346
    PUSH EBP                            ; 00488347
    MOV EAX,dword ptr [EBP + 0x2b0]     ; 00488348
    LEA ESI,[ESP + 0x6c]                ; 0048834e
    LEA EDI,[ESP + 0x48]                ; 00488352
    CALL dword ptr [EAX + 0x14c]        ; 00488356
    ADD ESP,0x4                         ; 0048835c
    LEA EAX,[ESP + 0x44]                ; 0048835f
    LEA ESI,[ESP + 0x68]                ; 00488363
    PUSH EAX                            ; 00488367
    MOVSD ES:EDI,ESI                    ; 00488368
    MOVSD ES:EDI,ESI                    ; 00488369
    MOVSD ES:EDI,ESI                    ; 0048836a
    PUSH EBP                            ; 0048836b
    LEA ESI,[ESP + 0x40]                ; 0048836c
    LEA EDI,[ESP + 0x94]                ; 00488370
    CALL FUN_00408d70                   ; 00488377
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    LEA ESI,[ESP + 0x40]                ; 0048837c
    ADD ESP,0x8                         ; 00488380
    MOVSD ES:EDI,ESI                    ; 00488383
    MOVSD ES:EDI,ESI                    ; 00488384
    MOVSD ES:EDI,ESI                    ; 00488385
    PUSH EBX                            ; 00488386
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00488387
    LEA ESI,[ESP + 0x24]                ; 0048838d
    LEA EDI,[ESP + 0xc]                 ; 00488391
    CALL dword ptr [EAX + 0x24]         ; 00488395
    MOV ECX,0x6                         ; 00488398
    ADD ESP,0x4                         ; 0048839d
    LEA EAX,[ESP + 0x8c]                ; 004883a0
    LEA ESI,[ESP + 0x20]                ; 004883a7
    PUSH EAX                            ; 004883ab
    MOVSD.REP ES:EDI,ESI                ; 004883ac
    PUSH EBX                            ; 004883ae
    LEA ESI,[ESP + 0x88]                ; 004883af
    LEA EDI,[ESP + 0x58]                ; 004883b6
    CALL FUN_00408de0                   ; 004883ba
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408de0()
    ADD ESP,0x8                         ; 004883bf
    LEA EAX,[ESP + 0x50]                ; 004883c2
    LEA ESI,[ESP + 0x80]                ; 004883c6
    PUSH EAX                            ; 004883cd
    LEA EAX,[ESP + 0xc]                 ; 004883ce
    MOVSD ES:EDI,ESI                    ; 004883d2
    MOVSD ES:EDI,ESI                    ; 004883d3
    MOVSD ES:EDI,ESI                    ; 004883d4
    PUSH EAX                            ; 004883d5
    LEA ESI,[ESP + 0xac]                ; 004883d6
    LEA EDI,[ESP + 0x7c]                ; 004883dd
    CALL FUN_0041bb80                   ; 004883e1
        ;   XREF to: 0041bb80 (UNCONDITIONAL_CALL)  ; undefined FUN_0041bb80()
    ADD ESP,0x8                         ; 004883e6
    LEA EAX,[ESP + 0x74]                ; 004883e9
    LEA ESI,[ESP + 0xa4]                ; 004883ed
    PUSH EAX                            ; 004883f4
    MOVSD ES:EDI,ESI                    ; 004883f5
    MOVSD ES:EDI,ESI                    ; 004883f6
    MOVSD ES:EDI,ESI                    ; 004883f7
    PUSH EBX                            ; 004883f8
    LEA ESI,[ESP + 0xa0]                ; 004883f9
    CALL FUN_00408d70                   ; 00488400
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00488405
    LEA EAX,[ESP + 0x5c]                ; 00488408
    PUSH EAX                            ; 0048840c
    LEA EAX,[ESP + 0x90]                ; 0048840d
    LEA EDI,[ESP + 0x60]                ; 00488414
    PUSH EAX                            ; 00488418
    MOV EDX,dword ptr [0x0061b5a8]      ; 00488419 | DAT_0061b5a8
    LEA ESI,[ESP + 0xa0]                ; 0048841f
    PUSH EDX                            ; 00488426 | DAT_01e661b8
    MOVSD ES:EDI,ESI                    ; 00488427
    MOVSD ES:EDI,ESI                    ; 00488428
    MOVSD ES:EDI,ESI                    ; 00488429
    CALL FUN_00535ec0                   ; 0048842a
        ;   XREF to: 00535ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00535ec0()
    ADD ESP,0xc                         ; 0048842f
    TEST EAX,EAX                        ; 00488432
    SETZ AL                             ; 00488434
    AND EAX,0xff                        ; 00488437
    POP ESI                             ; 0048843c
    POP EDI                             ; 0048843d
    ADD ESP,0xa8                        ; 0048843e
    POP EBP                             ; 00488444
    POP EBX                             ; 00488445
    RET                                 ; 00488446

