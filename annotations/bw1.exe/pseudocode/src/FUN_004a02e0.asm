; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a02e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x58]:1  local_58
; undefined        Stack[-0x40]:1  local_40
;
; XREF[1]:
;   FUN_0049f310 at 0049f92a
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a02e0
        ;   Label: FUN_004a02e0
    PUSH EDI                            ; 004a02e1
    PUSH EBP                            ; 004a02e2
    SUB ESP,0x4c                        ; 004a02e3
    MOV EBP,dword ptr [ESP + 0x5c]      ; 004a02e6
    MOV EBX,ESI                         ; 004a02ea
    PUSH EBP                            ; 004a02ec
    MOV EAX,dword ptr [EBP + 0x154]     ; 004a02ed
    LEA ESI,[ESP + 0x1c]                ; 004a02f3
    LEA EDI,[ESP + 0x4]                 ; 004a02f7
    CALL dword ptr [EAX + 0x1c]         ; 004a02fb
    MOV ECX,0x6                         ; 004a02fe
    LEA ESI,[ESP + 0x1c]                ; 004a0303
    ADD ESP,0x4                         ; 004a0307
    MOVSD.REP ES:EDI,ESI                ; 004a030a
    PUSH dword ptr [ESP + 0xc]          ; 004a030c
    PUSH dword ptr [ESP + 0x4]          ; 004a0310
    CALL FUN_0040cc00                   ; 004a0314
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x50],EAX      ; 004a0319
    FLD float ptr [ESP + 0x50]          ; 004a031d
    ADD ESP,0x8                         ; 004a0321
    PUSH dword ptr [ESP + 0x10]         ; 004a0324
    PUSH dword ptr [ESP + 0x8]          ; 004a0328
    FSTP float ptr [ESP + 0x38]         ; 004a032c
    CALL FUN_0040cc00                   ; 004a0330
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x50],EAX      ; 004a0335
    FLD float ptr [ESP + 0x50]          ; 004a0339
    ADD ESP,0x8                         ; 004a033d
    PUSH dword ptr [ESP + 0x14]         ; 004a0340
    PUSH dword ptr [ESP + 0xc]          ; 004a0344
    FSTP float ptr [ESP + 0x3c]         ; 004a0348
    CALL FUN_0040cc00                   ; 004a034c
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [ESP + 0x50],EAX      ; 004a0351
    FLD float ptr [ESP + 0x50]          ; 004a0355
    ADD ESP,0x8                         ; 004a0359
    LEA ESI,[ESP + 0x30]                ; 004a035c
    PUSH ESI                            ; 004a0360
    MOV EDI,EBX                         ; 004a0361
    LEA ESI,[ESP + 0x40]                ; 004a0363
    PUSH EBP                            ; 004a0367
    FSTP float ptr [ESP + 0x40]         ; 004a0368
    CALL FUN_00408b40                   ; 004a036c
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0x44]                ; 004a0371
    ADD ESP,0x8                         ; 004a0375
    MOVSD ES:EDI,ESI                    ; 004a0378
    MOVSD ES:EDI,ESI                    ; 004a0379
    MOVSD ES:EDI,ESI                    ; 004a037a
    MOV EAX,EBX                         ; 004a037b
    ADD ESP,0x4c                        ; 004a037d
    POP EBP                             ; 004a0380
    POP EDI                             ; 004a0381
    POP EBX                             ; 004a0382
    RET                                 ; 004a0383

