; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0240(int param_1)
;
;
; XREF[1]:
;   FUN_004e0030 at 004e0035
;
; Called Functions:
;   FUN_00408ae0
;   FUN_005916b0
;   FUN_00591c10
;   FUN_00591de0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0240
        ;   Label: FUN_004e0240
    SUB ESP,0xf0                        ; 004e0241
    MOV EBX,dword ptr [ESP + 0xf8]      ; 004e0247
    CMP dword ptr [EBX + 0x43c],0x0     ; 004e024e
    JNZ 0x004e025f                      ; 004e0255
        ;   XREF to: 004e025f (CONDITIONAL_JUMP)  ; LAB_004e025f
    ADD ESP,0xf0                        ; 004e0257
    POP EBX                             ; 004e025d
    RET                                 ; 004e025e
    PUSH EDI                            ; 004e025f
        ;   Label: LAB_004e025f
    PUSH ESI                            ; 004e0260
    LEA EAX,[EBX + 0x44c]               ; 004e0261
    PUSH EAX                            ; 004e0267
    LEA EAX,[EBX + 0x440]               ; 004e0268
    PUSH EAX                            ; 004e026e
    LEA EAX,[ESP + 0x40]                ; 004e026f
    PUSH EAX                            ; 004e0273
    CALL FUN_00591c10                   ; 004e0274
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    MOV EAX,dword ptr [EBX + 0x43c]     ; 004e0279
    ADD ESP,0xc                         ; 004e027f
    LEA EDX,[EAX + 0x30]                ; 004e0282
    PUSH EDX                            ; 004e0285
    ADD EAX,0x20                        ; 004e0286
    PUSH EAX                            ; 004e0289
    LEA EAX,[ESP + 0x70]                ; 004e028a
    PUSH EAX                            ; 004e028e
    CALL FUN_00591c10                   ; 004e028f
        ;   XREF to: 00591c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00591c10()
    ADD ESP,0xc                         ; 004e0294
    LEA EAX,[ESP + 0x68]                ; 004e0297
    PUSH EAX                            ; 004e029b
    LEA EAX,[ESP + 0x3c]                ; 004e029c
    PUSH EAX                            ; 004e02a0
    LEA ESI,[ESP + 0xa0]                ; 004e02a1
    LEA EDI,[ESP + 0x10]                ; 004e02a8
    CALL FUN_005916b0                   ; 004e02ac
        ;   XREF to: 005916b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005916b0()
    MOV ECX,0xc                         ; 004e02b1
    LEA ESI,[ESP + 0xa0]                ; 004e02b6
    ADD ESP,0x8                         ; 004e02bd
    MOVSD.REP ES:EDI,ESI                ; 004e02c0
    MOV EAX,dword ptr [ESP + 0x14]      ; 004e02c2
    MOV dword ptr [ESP + 0xec],EAX      ; 004e02c6
    MOV EAX,dword ptr [ESP + 0x24]      ; 004e02cd
    LEA EDI,[ESP + 0xc8]                ; 004e02d1
    MOV dword ptr [ESP + 0xf0],EAX      ; 004e02d8
    MOV EAX,dword ptr [ESP + 0x34]      ; 004e02df
    LEA ESI,[ESP + 0xec]                ; 004e02e3
    MOV dword ptr [ESP + 0xf4],EAX      ; 004e02ea
    MOVSD ES:EDI,ESI                    ; 004e02f1
    MOVSD ES:EDI,ESI                    ; 004e02f2
    MOVSD ES:EDI,ESI                    ; 004e02f3
    LEA EDX,[EBX + 0x20]                ; 004e02f4
    MOV EAX,dword ptr [ESP + 0xc8]      ; 004e02f7
    MOV dword ptr [EDX],EAX             ; 004e02fe
    MOV EAX,dword ptr [ESP + 0xcc]      ; 004e0300
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0307
    MOV EAX,dword ptr [ESP + 0xd0]      ; 004e030a
    MOV dword ptr [EDX + 0x8],EAX       ; 004e0311
    LEA EAX,[ESP + 0x8]                 ; 004e0314
    PUSH EAX                            ; 004e0318
    LEA ESI,[ESP + 0xe4]                ; 004e0319
    LEA EDI,[ESP + 0xd8]                ; 004e0320
    CALL FUN_00591de0                   ; 004e0327
        ;   XREF to: 00591de0 (UNCONDITIONAL_CALL)  ; undefined FUN_00591de0()
    LEA ESI,[ESP + 0xe4]                ; 004e032c
    LEA EAX,[ESP + 0xd8]                ; 004e0333
    ADD ESP,0x4                         ; 004e033a
    LEA EDX,[EBX + 0x30]                ; 004e033d
    MOVSD ES:EDI,ESI                    ; 004e0340
    MOVSD ES:EDI,ESI                    ; 004e0341
    MOVSD ES:EDI,ESI                    ; 004e0342
    CMP EDX,EAX                         ; 004e0343
    JZ 0x004e0364                       ; 004e0345
        ;   XREF to: 004e0364 (CONDITIONAL_JUMP)  ; LAB_004e0364
    MOV EAX,dword ptr [ESP + 0xd4]      ; 004e0347
    MOV dword ptr [EDX],EAX             ; 004e034e
    MOV EAX,dword ptr [ESP + 0xd8]      ; 004e0350
    MOV dword ptr [EDX + 0x4],EAX       ; 004e0357
    MOV EAX,dword ptr [ESP + 0xdc]      ; 004e035a
    MOV dword ptr [EDX + 0x8],EAX       ; 004e0361
    PUSH EBX                            ; 004e0364
        ;   Label: LAB_004e0364
    CALL FUN_00408ae0                   ; 004e0365
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ae0()
    ADD ESP,0x4                         ; 004e036a
    POP ESI                             ; 004e036d
    POP EDI                             ; 004e036e
    ADD ESP,0xf0                        ; 004e036f
    POP EBX                             ; 004e0375
    RET                                 ; 004e0376

