; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0044a210(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004085c0
;   FUN_005c0357
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0044a210
        ;   Label: FUN_0044a210
    PUSH EDI                            ; 0044a211
    MOV EDX,dword ptr [ESP + 0xc]       ; 0044a212
    PUSH EDX                            ; 0044a216
    CALL FUN_004085c0                   ; 0044a217
        ;   XREF to: 004085c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004085c0()
    ADD ESP,0x4                         ; 0044a21c
    PUSH 0x5fe5b0                       ; 0044a21f
    PUSH 0x3e8                          ; 0044a224
    ADD EAX,0x208                       ; 0044a229
    PUSH EAX                            ; 0044a22e
    CALL FUN_005c0357                   ; 0044a22f
        ;   XREF to: 005c0357 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0357()
    LEA EDX,[EAX + 0xfffffdf8]          ; 0044a234
    MOV dword ptr [EDX + 0x154],0x5fe4b4 ; 0044a23a
    MOV ESI,0x5d73cb                    ; 0044a244
    MOV dword ptr [EDX + 0x158],0x40800000 ; 0044a249
    ADD ESP,0xc                         ; 0044a253
    MOV dword ptr [EDX + 0x15c],0x40800000 ; 0044a256
    LEA EDI,[EDX + 0x16c]               ; 0044a260
    MOV dword ptr [EDX + 0x160],0x3dcccccd ; 0044a266
    PUSH EDI                            ; 0044a270
    MOV AL,byte ptr [ESI]               ; 0044a271
        ;   Label: LAB_0044a271
    MOV byte ptr [EDI],AL               ; 0044a273
    CMP AL,0x0                          ; 0044a275
    JZ 0x0044a289                       ; 0044a277
        ;   XREF to: 0044a289 (CONDITIONAL_JUMP)  ; LAB_0044a289
    MOV AL,byte ptr [ESI + 0x1]         ; 0044a279
    ADD ESI,0x2                         ; 0044a27c
    MOV byte ptr [EDI + 0x1],AL         ; 0044a27f
    ADD EDI,0x2                         ; 0044a282
    CMP AL,0x0                          ; 0044a285
    JNZ 0x0044a271                      ; 0044a287
        ;   XREF to: 0044a271 (CONDITIONAL_JUMP)  ; LAB_0044a271
    POP EDI                             ; 0044a289
        ;   Label: LAB_0044a289
    MOV dword ptr [EDX + 0x168],0x0     ; 0044a28a
    MOV dword ptr [EDX + 0x164],0xd     ; 0044a294
    MOV dword ptr [EDX + 0x17c],0x8000  ; 0044a29e
    MOV dword ptr [EDX + 0x180],0x1     ; 0044a2a8
    MOV dword ptr [EDX + 0x18c],0x0     ; 0044a2b2
    MOV dword ptr [EDX + 0x188],0x0     ; 0044a2bc
    MOV ESI,0x5d73d6                    ; 0044a2c6
    MOV dword ptr [EDX + 0x184],0x0     ; 0044a2cb
    LEA EDI,[EDX + 0x194]               ; 0044a2d5
    MOV dword ptr [EDX + 0x190],0x0     ; 0044a2db
    PUSH EDI                            ; 0044a2e5
    MOV AL,byte ptr [ESI]               ; 0044a2e6
        ;   Label: LAB_0044a2e6
    MOV byte ptr [EDI],AL               ; 0044a2e8
    CMP AL,0x0                          ; 0044a2ea
    JZ 0x0044a2fe                       ; 0044a2ec
        ;   XREF to: 0044a2fe (CONDITIONAL_JUMP)  ; LAB_0044a2fe
    MOV AL,byte ptr [ESI + 0x1]         ; 0044a2ee
    ADD ESI,0x2                         ; 0044a2f1
    MOV byte ptr [EDI + 0x1],AL         ; 0044a2f4
    ADD EDI,0x2                         ; 0044a2f7
    CMP AL,0x0                          ; 0044a2fa
    JNZ 0x0044a2e6                      ; 0044a2fc
        ;   XREF to: 0044a2e6 (CONDITIONAL_JUMP)  ; LAB_0044a2e6
    POP EDI                             ; 0044a2fe
        ;   Label: LAB_0044a2fe
    MOV dword ptr [EDX + 0x65b14],0x3f800000 ; 0044a2ff
    MOV dword ptr [EDX + 0x65b18],0x3f733333 ; 0044a309
    MOV dword ptr [EDX + 0x65b1c],0x0   ; 0044a313
    MOV dword ptr [EDX + 0x65b20],0x3f000000 ; 0044a31d
    MOV dword ptr [EDX + 0x65b24],0x42000000 ; 0044a327
    MOV dword ptr [EDX + 0x65b2c],0x0   ; 0044a331
    MOV dword ptr [EDX + 0x65b30],0x0   ; 0044a33b
    MOV dword ptr [EDX + 0x1f8],0x1     ; 0044a345
    MOV dword ptr [EDX + 0x1fc],0x3f000000 ; 0044a34f
    MOV dword ptr [EDX + 0x200],0x1     ; 0044a359
    MOV EAX,EDX                         ; 0044a363
    MOV dword ptr [EDX + 0x65b34],0x0   ; 0044a365
    POP EDI                             ; 0044a36f
    POP ESI                             ; 0044a370
    RET                                 ; 0044a371

