; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00486360(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_shell_kfm_005d2b6e
;   TerminatedCString s_sh_cock_wav_005d2b78
;   undefined4 DAT_00614d30
;
; Called Functions:
;   FUN_00408cf0
;   FUN_0040cf60
;   FUN_00449280
;   FUN_00449530
;   FUN_0044fba0
;   FUN_0049e970
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486360
        ;   Label: FUN_00486360
    PUSH ESI                            ; 00486361
    PUSH EDI                            ; 00486362
    PUSH EBP                            ; 00486363
    SUB ESP,0x74                        ; 00486364
    MOV EBX,dword ptr [ESP + 0x88]      ; 00486367
    PUSH 0x3ec90fdb                     ; 0048636e
    MOV EDX,0x40a00000                  ; 00486373
    MOV ECX,0x40c00000                  ; 00486378
    MOV ESI,0xc0c00000                  ; 0048637d
    PUSH 0xbec90fdb                     ; 00486382
    MOV dword ptr [ESP + 0x3c],EDX      ; 00486387
    MOV dword ptr [ESP + 0x40],ECX      ; 0048638b
    MOV dword ptr [ESP + 0x44],ESI      ; 0048638f
    CALL FUN_0040cf60                   ; 00486393
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x78],EAX      ; 00486398
    FLD float ptr [ESP + 0x78]          ; 0048639c
    ADD ESP,0x8                         ; 004863a0
    PUSH 0x3ec90fdb                     ; 004863a3
    PUSH 0xbec90fdb                     ; 004863a8
    FSTP float ptr [ESP + 0x48]         ; 004863ad
    CALL FUN_0040cf60                   ; 004863b1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [ESP + 0x78],EAX      ; 004863b6
    FLD float ptr [ESP + 0x78]          ; 004863ba
    ADD ESP,0x8                         ; 004863be
    LEA EAX,[ESP + 0x40]                ; 004863c1
    PUSH EAX                            ; 004863c5
    LEA EAX,[ESP + 0x4]                 ; 004863c6
    XOR EDI,EDI                         ; 004863ca
    PUSH EAX                            ; 004863cc
    FSTP float ptr [ESP + 0x4c]         ; 004863cd
    MOV dword ptr [ESP + 0x50],EDI      ; 004863d1
    CALL FUN_00449280                   ; 004863d5
        ;   XREF to: 00449280 (UNCONDITIONAL_CALL)  ; undefined FUN_00449280()
    ADD ESP,0x8                         ; 004863da
    LEA EAX,[ESP + 0x34]                ; 004863dd
    PUSH EAX                            ; 004863e1
    LEA EAX,[ESP + 0x4]                 ; 004863e2
    PUSH EAX                            ; 004863e6
    LEA ESI,[ESP + 0x30]                ; 004863e7
    LEA EDI,[ESP + 0x6c]                ; 004863eb
    CALL FUN_00449530                   ; 004863ef
        ;   XREF to: 00449530 (UNCONDITIONAL_CALL)  ; undefined FUN_00449530()
    ADD ESP,0x8                         ; 004863f4
    LEA EAX,[ESP + 0x64]                ; 004863f7
    LEA ESI,[ESP + 0x28]                ; 004863fb
    PUSH EAX                            ; 004863ff
    MOVSD ES:EDI,ESI                    ; 00486400
    MOVSD ES:EDI,ESI                    ; 00486401
    MOVSD ES:EDI,ESI                    ; 00486402
    PUSH EBX                            ; 00486403
    LEA ESI,[ESP + 0x54]                ; 00486404
    LEA EDI,[ESP + 0x60]                ; 00486408
    CALL FUN_00408cf0                   ; 0048640c
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    LEA ESI,[ESP + 0x54]                ; 00486411
    ADD ESP,0x8                         ; 00486415
    MOVSD ES:EDI,ESI                    ; 00486418
    MOVSD ES:EDI,ESI                    ; 00486419
    MOVSD ES:EDI,ESI                    ; 0048641a
    LEA EAX,[ESP + 0x58]                ; 0048641b
    LEA ESI,[ESP + 0x34]                ; 0048641f
    CMP ESI,EAX                         ; 00486423
    JZ 0x0048643f                       ; 00486425
        ;   XREF to: 0048643f (CONDITIONAL_JUMP)  ; LAB_0048643f
    MOV EAX,dword ptr [ESP + 0x58]      ; 00486427
    MOV dword ptr [ESP + 0x34],EAX      ; 0048642b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0048642f
    MOV dword ptr [ESP + 0x38],EAX      ; 00486433
    MOV EAX,dword ptr [ESP + 0x60]      ; 00486437
    MOV dword ptr [ESP + 0x3c],EAX      ; 0048643b
    PUSH 0x5d2b6e                       ; 0048643f | = "shell.kfm"
        ;   Label: LAB_0048643f
    CALL FUN_0044fba0                   ; 00486444
        ;   XREF to: 0044fba0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fba0()
    ADD ESP,0x4                         ; 00486449
    PUSH EAX                            ; 0048644c
    LEA EAX,[ESP + 0x38]                ; 0048644d
    PUSH EAX                            ; 00486451
    LEA EAX,[EBX + 0x30]                ; 00486452
    PUSH EAX                            ; 00486455
    LEA EAX,[EBX + 0x20]                ; 00486456
    PUSH EAX                            ; 00486459
    MOV EBP,dword ptr [0x00614d30]      ; 0048645a | DAT_00614d30
    PUSH EBP                            ; 00486460
    CALL FUN_0049e970                   ; 00486461
        ;   XREF to: 0049e970 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e970()
    ADD ESP,0x14                        ; 00486466
    PUSH 0x5d2b78                       ; 00486469 | = "sh-cock.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0048646e
    PUSH EBX                            ; 00486474
    CALL dword ptr [EAX + 0x34]         ; 00486475
    ADD ESP,0x8                         ; 00486478
    ADD ESP,0x74                        ; 0048647b
    POP EBP                             ; 0048647e
    POP EDI                             ; 0048647f
    POP ESI                             ; 00486480
    POP EBX                             ; 00486481
    RET                                 ; 00486482

