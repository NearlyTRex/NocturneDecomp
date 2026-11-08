; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056a220(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)
;
;
; XREF[1]:
;   FUN_00569fb0 at 0056a022
;
; Called Functions:
;   FUN_00525240
;   FUN_005635a0
;   FUN_00569f30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a220
        ;   Label: FUN_0056a220
    PUSH ESI                            ; 0056a221
    PUSH EDI                            ; 0056a222
    PUSH EBP                            ; 0056a223
    MOV EBP,ESP                         ; 0056a224
    SUB ESP,0x74                        ; 0056a226
    AND ESP,0xfffffff8                  ; 0056a229
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056a22c
    PUSH EDX                            ; 0056a22f
    CALL FUN_00569f30                   ; 0056a230
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f30()
    ADD ESP,0x4                         ; 0056a235
    MOV ESI,EAX                         ; 0056a238
    MOV dword ptr [ESP + 0x68],EAX      ; 0056a23a
    MOV EAX,ESP                         ; 0056a23e
    PUSH EAX                            ; 0056a240
    LEA EAX,[ESP + 0x64]                ; 0056a241
    PUSH EAX                            ; 0056a245
    LEA EAX,[ESP + 0x64]                ; 0056a246
    PUSH EAX                            ; 0056a24a
    MOV ECX,dword ptr [EBP + 0x18]      ; 0056a24b
    PUSH dword ptr [EBP + 0x1c]         ; 0056a24e
    PUSH ECX                            ; 0056a251
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056a252
    PUSH EBX                            ; 0056a255
    CALL FUN_00525240                   ; 0056a256
        ;   XREF to: 00525240 (UNCONDITIONAL_CALL)  ; undefined FUN_00525240()
    ADD ESP,0x18                        ; 0056a25b
    MOV EDI,dword ptr [ESI + 0x1de78]   ; 0056a25e
    XOR EBX,EBX                         ; 0056a264
    TEST EDI,EDI                        ; 0056a266
    JLE 0x0056a2e0                      ; 0056a268
        ;   XREF to: 0056a2e0 (CONDITIONAL_JUMP)  ; LAB_0056a2e0
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056a26a
    MOV dword ptr [ESP + 0x70],EAX      ; 0056a26d
    MOV dword ptr [ESP + 0x6c],EAX      ; 0056a271
    MOV EAX,dword ptr [ESP + 0x60]      ; 0056a275
        ;   Label: LAB_0056a275
    PUSH dword ptr [ESP]                ; 0056a279
    PUSH EAX                            ; 0056a27c
    MOV EDX,dword ptr [ESP + 0x64]      ; 0056a27d
    PUSH EDX                            ; 0056a281
    PUSH EBX                            ; 0056a282
    MOV ECX,dword ptr [ESP + 0x78]      ; 0056a283
    PUSH ECX                            ; 0056a287
    LEA ESI,[ESP + 0x18]                ; 0056a288
    CALL FUN_005635a0                   ; 0056a28c
        ;   XREF to: 005635a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005635a0()
    ADD ESP,0x14                        ; 0056a291
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0056a294
    LEA ESI,[ESP + 0x4]                 ; 0056a298
    LEA EDI,[EDI + 0xc]                 ; 0056a29c
    INC EBX                             ; 0056a29f
    MOVSD ES:EDI,ESI                    ; 0056a2a0
    MOVSD ES:EDI,ESI                    ; 0056a2a1
    MOVSD ES:EDI,ESI                    ; 0056a2a2
    MOVSD ES:EDI,ESI                    ; 0056a2a3
    MOV EAX,dword ptr [ESP + 0x70]      ; 0056a2a4
    MOV EDI,dword ptr [ESP + 0x6c]      ; 0056a2a8
    LEA ESI,[EAX + 0x4]                 ; 0056a2ac
    MOV dword ptr [EAX + 0x64c],0x3f800000 ; 0056a2af
    MOV EAX,dword ptr [ESP + 0x68]      ; 0056a2b9
    MOV dword ptr [ESP + 0x70],ESI      ; 0056a2bd
    ADD EDI,0x10                        ; 0056a2c1
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0056a2c4
    MOV dword ptr [ESP + 0x6c],EDI      ; 0056a2ca
    CMP EBX,EDX                         ; 0056a2ce
    JL 0x0056a275                       ; 0056a2d0
        ;   XREF to: 0056a275 (CONDITIONAL_JUMP)  ; LAB_0056a275
    LEA EAX,[EAX]                       ; 0056a2d2
    LEA EDX,[EDX]                       ; 0056a2d8
    MOV EAX,EAX                         ; 0056a2de
    MOV EBX,dword ptr [ESP + 0x60]      ; 0056a2e0
        ;   Label: LAB_0056a2e0
    LEA EAX,[EBX*0x4 + 0x0]             ; 0056a2e4
    SUB EAX,EBX                         ; 0056a2eb
    MOV EBX,dword ptr [ESP + 0x68]      ; 0056a2ed
    MOV EBX,dword ptr [EBX + 0x1ec94]   ; 0056a2f1
    FLD float ptr [EBX + EAX*0x4]       ; 0056a2f7
    FMUL float ptr [ESP]                ; 0056a2fa
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0056a2fd
    FMUL float ptr [ESP]                ; 0056a301
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0056a304
    FMUL float ptr [ESP]                ; 0056a308
    LEA EDI,[ESP + 0x2c]                ; 0056a30b
    LEA ESI,[ESP + 0x14]                ; 0056a30f
    FXCH ST2                            ; 0056a313
    FSTP float ptr [ESP + 0x14]         ; 0056a315
    FSTP float ptr [ESP + 0x18]         ; 0056a319
    FSTP float ptr [ESP + 0x1c]         ; 0056a31d
    MOVSD ES:EDI,ESI                    ; 0056a321
    MOVSD ES:EDI,ESI                    ; 0056a322
    MOVSD ES:EDI,ESI                    ; 0056a323
    FLD float ptr [ESP]                 ; 0056a324
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0056a327
    FLD1                                ; 0056a32b
    LEA EAX,[ESI*0x4 + 0x0]             ; 0056a32d
    FSUBRP                              ; 0056a334
    SUB EAX,ESI                         ; 0056a336
    FSTP float ptr [ESP + 0x64]         ; 0056a338
    FLD float ptr [EBX + EAX*0x4]       ; 0056a33c
    FMUL float ptr [ESP + 0x64]         ; 0056a33f
    FLD float ptr [EBX + EAX*0x4 + 0x4] ; 0056a343
    FMUL float ptr [ESP + 0x64]         ; 0056a347
    FLD float ptr [EBX + EAX*0x4 + 0x8] ; 0056a34b
    FMUL float ptr [ESP + 0x64]         ; 0056a34f
    MOV ECX,dword ptr [EBP + 0x20]      ; 0056a353
    LEA EDI,[ESP + 0x44]                ; 0056a356
    LEA ESI,[ESP + 0x50]                ; 0056a35a
    FXCH ST2                            ; 0056a35e
    FSTP float ptr [ESP + 0x50]         ; 0056a360
    FSTP float ptr [ESP + 0x54]         ; 0056a364
    FSTP float ptr [ESP + 0x58]         ; 0056a368
    MOVSD ES:EDI,ESI                    ; 0056a36c
    MOVSD ES:EDI,ESI                    ; 0056a36d
    MOVSD ES:EDI,ESI                    ; 0056a36e
    LEA EAX,[ESP + 0x20]                ; 0056a36f
    FLD float ptr [ESP + 0x44]          ; 0056a373
    FLD float ptr [ESP + 0x48]          ; 0056a377
    FLD float ptr [ESP + 0x4c]          ; 0056a37b
    LEA EDI,[ESP + 0x20]                ; 0056a37f
    LEA ESI,[ESP + 0x38]                ; 0056a383
    FXCH ST2                            ; 0056a387
    FADD float ptr [ESP + 0x2c]         ; 0056a389
    FXCH                                ; 0056a38d
    FADD float ptr [ESP + 0x30]         ; 0056a38f
    FXCH ST2                            ; 0056a393
    FADD float ptr [ESP + 0x34]         ; 0056a395
    FXCH                                ; 0056a399
    FSTP float ptr [ESP + 0x38]         ; 0056a39b
    FXCH                                ; 0056a39f
    FSTP float ptr [ESP + 0x3c]         ; 0056a3a1
    FSTP float ptr [ESP + 0x40]         ; 0056a3a5
    MOVSD ES:EDI,ESI                    ; 0056a3a9
    MOVSD ES:EDI,ESI                    ; 0056a3aa
    MOVSD ES:EDI,ESI                    ; 0056a3ab
    CMP EAX,ECX                         ; 0056a3ac
    JNZ 0x0056a3eb                      ; 0056a3ae
        ;   XREF to: 0056a3eb (CONDITIONAL_JUMP)  ; LAB_0056a3eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a3b0
        ;   Label: LAB_0056a3b0
    FLD float ptr [EAX + 0x508]         ; 0056a3b3
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056a3b9
    FMUL float ptr [EAX]                ; 0056a3bc
    FSTP float ptr [EAX]                ; 0056a3be
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a3c0
    FLD float ptr [EAX + 0x50c]         ; 0056a3c3
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056a3c9
    FMUL float ptr [EAX + 0x4]          ; 0056a3cc
    FSTP float ptr [EAX + 0x4]          ; 0056a3cf
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a3d2
    FLD float ptr [EAX + 0x510]         ; 0056a3d5
    MOV EAX,dword ptr [EBP + 0x20]      ; 0056a3db
    FMUL float ptr [EAX + 0x8]          ; 0056a3de
    FSTP float ptr [EAX + 0x8]          ; 0056a3e1
    MOV ESP,EBP                         ; 0056a3e4
    POP EBP                             ; 0056a3e6
    POP EDI                             ; 0056a3e7
    POP ESI                             ; 0056a3e8
    POP EBX                             ; 0056a3e9
    RET                                 ; 0056a3ea
    MOV EAX,dword ptr [ESP + 0x20]      ; 0056a3eb
        ;   Label: LAB_0056a3eb
    MOV dword ptr [ECX],EAX             ; 0056a3ef
    MOV EAX,dword ptr [ESP + 0x24]      ; 0056a3f1
    MOV dword ptr [ECX + 0x4],EAX       ; 0056a3f5
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056a3f8
    MOV dword ptr [ECX + 0x8],EAX       ; 0056a3fc
    JMP 0x0056a3b0                      ; 0056a3ff
        ;   XREF to: 0056a3b0 (UNCONDITIONAL_JUMP)  ; LAB_0056a3b0

