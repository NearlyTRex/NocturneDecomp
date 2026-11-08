; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051f1d0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01d33c00
;   undefined4 DAT_01d33c24
;   undefined4 DAT_01d33c2c
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f1d0
        ;   Label: FUN_0051f1d0
    PUSH ESI                            ; 0051f1d1
    PUSH EDI                            ; 0051f1d2
    PUSH EBP                            ; 0051f1d3
    SUB ESP,0x48                        ; 0051f1d4
    MOV EBP,dword ptr [ESP + 0x5c]      ; 0051f1d7
    MOV EDX,dword ptr [0x01d33c00]      ; 0051f1db | DAT_01d33c00
    PUSH EDX                            ; 0051f1e1
    LEA EAX,[EBP + 0x158]               ; 0051f1e2
    MOV EBX,0x1                         ; 0051f1e8
    PUSH EAX                            ; 0051f1ed
    LEA ESI,[ESP + 0x2c]                ; 0051f1ee
    LEA EDI,[ESP + 0x14]                ; 0051f1f2
    CALL FUN_00569130                   ; 0051f1f6
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x2c]                ; 0051f1fb
    ADD ESP,0x8                         ; 0051f1ff
    LEA EAX,[ESP + 0xc]                 ; 0051f202
    MOV ECX,dword ptr [ESP + 0x60]      ; 0051f206
    MOVSD ES:EDI,ESI                    ; 0051f20a
    MOVSD ES:EDI,ESI                    ; 0051f20b
    MOVSD ES:EDI,ESI                    ; 0051f20c
    CMP EAX,ECX                         ; 0051f20d
    JNZ 0x0051f291                      ; 0051f20f
        ;   XREF to: 0051f291 (CONDITIONAL_JUMP)  ; LAB_0051f291
    MOV EAX,dword ptr [EBP + 0xc32c]    ; 0051f215
        ;   Label: LAB_0051f215
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0051f21b
    JZ 0x0051f277                       ; 0051f223
        ;   XREF to: 0051f277 (CONDITIONAL_JUMP)  ; LAB_0051f277
    MOV EDI,dword ptr [0x01d33c24]      ; 0051f225 | DAT_01d33c24
    PUSH EDI                            ; 0051f22b
    LEA EAX,[EBP + 0x158]               ; 0051f22c
    PUSH EAX                            ; 0051f232
    LEA ESI,[ESP + 0x8]                 ; 0051f233
    LEA EDI,[ESP + 0x44]                ; 0051f237
    CALL FUN_00569130                   ; 0051f23b
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051f240
    ADD ESP,0x8                         ; 0051f247
    SUB EAX,EBX                         ; 0051f24a
    MOV EDX,dword ptr [ESP + 0x60]      ; 0051f24c
    SHL EAX,0x2                         ; 0051f250
    MOV ESI,ESP                         ; 0051f253
    ADD EDX,EAX                         ; 0051f255
    LEA EAX,[ESP + 0x3c]                ; 0051f257
    MOVSD ES:EDI,ESI                    ; 0051f25b
    MOVSD ES:EDI,ESI                    ; 0051f25c
    MOVSD ES:EDI,ESI                    ; 0051f25d
    CMP EDX,EAX                         ; 0051f25e
    JZ 0x0051f276                       ; 0051f260
        ;   XREF to: 0051f276 (CONDITIONAL_JUMP)  ; LAB_0051f276
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0051f262
    MOV dword ptr [EDX],EAX             ; 0051f266
    MOV EAX,dword ptr [ESP + 0x40]      ; 0051f268
    MOV dword ptr [EDX + 0x4],EAX       ; 0051f26c
    MOV EAX,dword ptr [ESP + 0x44]      ; 0051f26f
    MOV dword ptr [EDX + 0x8],EAX       ; 0051f273
    INC EBX                             ; 0051f276
        ;   Label: LAB_0051f276
    MOV EAX,dword ptr [EBP + 0xc330]    ; 0051f277
        ;   Label: LAB_0051f277
    CMP dword ptr [EBP + EAX*0x4 + 0x2298],0x0 ; 0051f27d
    JNZ 0x0051f2aa                      ; 0051f285
        ;   XREF to: 0051f2aa (CONDITIONAL_JUMP)  ; LAB_0051f2aa
    MOV EAX,EBX                         ; 0051f287
    ADD ESP,0x48                        ; 0051f289
    POP EBP                             ; 0051f28c
    POP EDI                             ; 0051f28d
    POP ESI                             ; 0051f28e
    POP EBX                             ; 0051f28f
    RET                                 ; 0051f290
    MOV EAX,dword ptr [ESP + 0xc]       ; 0051f291
        ;   Label: LAB_0051f291
    MOV dword ptr [ECX],EAX             ; 0051f295
    MOV EAX,dword ptr [ESP + 0x10]      ; 0051f297
    MOV dword ptr [ECX + 0x4],EAX       ; 0051f29b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0051f29e
    MOV dword ptr [ECX + 0x8],EAX       ; 0051f2a2
    JMP 0x0051f215                      ; 0051f2a5
        ;   XREF to: 0051f215 (UNCONDITIONAL_JUMP)  ; LAB_0051f215
    MOV ECX,dword ptr [0x01d33c2c]      ; 0051f2aa | DAT_01d33c2c
        ;   Label: LAB_0051f2aa
    PUSH ECX                            ; 0051f2b0
    ADD EBP,0x158                       ; 0051f2b1
    PUSH EBP                            ; 0051f2b7
    LEA ESI,[ESP + 0x20]                ; 0051f2b8
    LEA EDI,[ESP + 0x38]                ; 0051f2bc
    CALL FUN_00569130                   ; 0051f2c0
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA EAX,[EBX*0x4 + 0x0]             ; 0051f2c5
    ADD ESP,0x8                         ; 0051f2cc
    SUB EAX,EBX                         ; 0051f2cf
    MOV EDX,dword ptr [ESP + 0x60]      ; 0051f2d1
    SHL EAX,0x2                         ; 0051f2d5
    LEA ESI,[ESP + 0x18]                ; 0051f2d8
    ADD EDX,EAX                         ; 0051f2dc
    LEA EAX,[ESP + 0x30]                ; 0051f2de
    MOVSD ES:EDI,ESI                    ; 0051f2e2
    MOVSD ES:EDI,ESI                    ; 0051f2e3
    MOVSD ES:EDI,ESI                    ; 0051f2e4
    CMP EDX,EAX                         ; 0051f2e5
    JZ 0x0051f2fd                       ; 0051f2e7
        ;   XREF to: 0051f2fd (CONDITIONAL_JUMP)  ; LAB_0051f2fd
    MOV EAX,dword ptr [ESP + 0x30]      ; 0051f2e9
    MOV dword ptr [EDX],EAX             ; 0051f2ed
    MOV EAX,dword ptr [ESP + 0x34]      ; 0051f2ef
    MOV dword ptr [EDX + 0x4],EAX       ; 0051f2f3
    MOV EAX,dword ptr [ESP + 0x38]      ; 0051f2f6
    MOV dword ptr [EDX + 0x8],EAX       ; 0051f2fa
    INC EBX                             ; 0051f2fd
        ;   Label: LAB_0051f2fd
    MOV EAX,EBX                         ; 0051f2fe
    ADD ESP,0x48                        ; 0051f300
    POP EBP                             ; 0051f303
    POP EDI                             ; 0051f304
    POP ESI                             ; 0051f305
    POP EBX                             ; 0051f306
    RET                                 ; 0051f307

