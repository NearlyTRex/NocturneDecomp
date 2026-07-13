; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cc1b0(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004cc2e0 at 004cc305
;
; Called Functions:
;   FUN_0043b800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cc1b0
        ;   Label: FUN_004cc1b0
    PUSH ESI                            ; 004cc1b1
    PUSH EDI                            ; 004cc1b2
    SUB ESP,0x20                        ; 004cc1b3
    MOV EBX,dword ptr [ESP + 0x30]      ; 004cc1b6
    MOV dword ptr [EBX + 0x180],0x461c3f9a ; 004cc1ba
    MOV dword ptr [EBX + 0x184],0x461c3f9a ; 004cc1c4
    MOV dword ptr [EBX + 0x188],0xc61c3f9a ; 004cc1ce
    MOV dword ptr [EBX + 0x18c],0xc61c3f9a ; 004cc1d8
    MOV dword ptr [EBX + 0x190],0xc61c3f9a ; 004cc1e2
    LEA EDI,[EBX + 0x19c]               ; 004cc1ec
    MOV dword ptr [EBX + 0x17c],0x461c3f9a ; 004cc1f2
    XOR ESI,ESI                         ; 004cc1fc
    MOV EAX,dword ptr [EDI]             ; 004cc1fe
    CMP ESI,EAX                         ; 004cc200
    JL 0x004cc20b                       ; 004cc202
        ;   XREF to: 004cc20b (CONDITIONAL_JUMP)  ; LAB_004cc20b
    ADD ESP,0x20                        ; 004cc204
    POP EDI                             ; 004cc207
    POP ESI                             ; 004cc208
    POP EBX                             ; 004cc209
    RET                                 ; 004cc20a
    MOV EAX,ESP                         ; 004cc20b
        ;   Label: LAB_004cc20b
    MOV dword ptr [ESP + 0x1c],ESI      ; 004cc20d
    PUSH EAX                            ; 004cc211
    LEA EAX,[ESP + 0x10]                ; 004cc212
    FILD dword ptr [ESP + 0x20]         ; 004cc216
    PUSH EAX                            ; 004cc21a
    FSTP float ptr [ESP + 0x20]         ; 004cc21b
    PUSH dword ptr [ESP + 0x20]         ; 004cc21f
    PUSH EDI                            ; 004cc223
    CALL FUN_0043b800                   ; 004cc224
        ;   XREF to: 0043b800 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b800()
    ADD ESP,0x10                        ; 004cc229
    FLD float ptr [ESP + 0xc]           ; 004cc22c
    FCOMP float ptr [EBX + 0x17c]       ; 004cc230
    FNSTSW AX                           ; 004cc236
    SAHF                                ; 004cc238
    JNC 0x004cc245                      ; 004cc239
        ;   XREF to: 004cc245 (CONDITIONAL_JUMP)  ; LAB_004cc245
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc23b
    MOV dword ptr [EBX + 0x17c],EAX     ; 004cc23f
    FLD float ptr [ESP + 0xc]           ; 004cc245
        ;   Label: LAB_004cc245
    FCOMP float ptr [EBX + 0x188]       ; 004cc249
    FNSTSW AX                           ; 004cc24f
    SAHF                                ; 004cc251
    JBE 0x004cc25e                      ; 004cc252
        ;   XREF to: 004cc25e (CONDITIONAL_JUMP)  ; LAB_004cc25e
    MOV EAX,dword ptr [ESP + 0xc]       ; 004cc254
    MOV dword ptr [EBX + 0x188],EAX     ; 004cc258
    FLD float ptr [ESP + 0x10]          ; 004cc25e
        ;   Label: LAB_004cc25e
    FCOMP float ptr [EBX + 0x180]       ; 004cc262
    FNSTSW AX                           ; 004cc268
    SAHF                                ; 004cc26a
    JNC 0x004cc277                      ; 004cc26b
        ;   XREF to: 004cc277 (CONDITIONAL_JUMP)  ; LAB_004cc277
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cc26d
    MOV dword ptr [EBX + 0x180],EAX     ; 004cc271
    FLD float ptr [ESP + 0x10]          ; 004cc277
        ;   Label: LAB_004cc277
    FCOMP float ptr [EBX + 0x18c]       ; 004cc27b
    FNSTSW AX                           ; 004cc281
    SAHF                                ; 004cc283
    JBE 0x004cc290                      ; 004cc284
        ;   XREF to: 004cc290 (CONDITIONAL_JUMP)  ; LAB_004cc290
    MOV EAX,dword ptr [ESP + 0x10]      ; 004cc286
    MOV dword ptr [EBX + 0x18c],EAX     ; 004cc28a
    FLD float ptr [ESP + 0x14]          ; 004cc290
        ;   Label: LAB_004cc290
    FCOMP float ptr [EBX + 0x184]       ; 004cc294
    FNSTSW AX                           ; 004cc29a
    SAHF                                ; 004cc29c
    JNC 0x004cc2a9                      ; 004cc29d
        ;   XREF to: 004cc2a9 (CONDITIONAL_JUMP)  ; LAB_004cc2a9
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cc29f
    MOV dword ptr [EBX + 0x184],EAX     ; 004cc2a3
    FLD float ptr [ESP + 0x14]          ; 004cc2a9
        ;   Label: LAB_004cc2a9
    FCOMP float ptr [EBX + 0x190]       ; 004cc2ad
    FNSTSW AX                           ; 004cc2b3
    SAHF                                ; 004cc2b5
    JBE 0x004cc2c2                      ; 004cc2b6
        ;   XREF to: 004cc2c2 (CONDITIONAL_JUMP)  ; LAB_004cc2c2
    MOV EAX,dword ptr [ESP + 0x14]      ; 004cc2b8
    MOV dword ptr [EBX + 0x190],EAX     ; 004cc2bc
    INC ESI                             ; 004cc2c2
        ;   Label: LAB_004cc2c2
    MOV EAX,dword ptr [EDI]             ; 004cc2c3
    CMP ESI,EAX                         ; 004cc2c5
    JL 0x004cc20b                       ; 004cc2c7
        ;   XREF to: 004cc20b (CONDITIONAL_JUMP)  ; LAB_004cc20b
    ADD ESP,0x20                        ; 004cc2cd
    POP EDI                             ; 004cc2d0
    POP ESI                             ; 004cc2d1
    POP EBX                             ; 004cc2d2
    RET                                 ; 004cc2d3

