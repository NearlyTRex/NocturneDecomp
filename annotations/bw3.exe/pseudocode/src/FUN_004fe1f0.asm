; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fe1f0(undefined4 param_1,int param_2,int param_3,int param_4)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_00502d60 at 00502e56
;
; Called Functions:
;   FUN_004fd5e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fe1f0
        ;   Label: FUN_004fe1f0
    PUSH ESI                            ; 004fe1f1
    PUSH EDI                            ; 004fe1f2
    PUSH EBP                            ; 004fe1f3
    SUB ESP,0x10                        ; 004fe1f4
    MOV EAX,dword ptr [ESP + 0x30]      ; 004fe1f7
    MOV EBP,dword ptr [EAX + 0x10]      ; 004fe1fb
    MOV EAX,dword ptr [EAX + 0x14]      ; 004fe1fe
    MOV dword ptr [ESP],EAX             ; 004fe201
    TEST EAX,EAX                        ; 004fe204
    JLE 0x004fe25f                      ; 004fe206
        ;   XREF to: 004fe25f (CONDITIONAL_JUMP)  ; LAB_004fe25f
    SHL EAX,0x2                         ; 004fe208
    XOR EDI,EDI                         ; 004fe20b
    MOV dword ptr [ESP + 0x4],EAX       ; 004fe20d
    MOV dword ptr [ESP + 0xc],EDI       ; 004fe211
    XOR EDI,EDI                         ; 004fe215
        ;   Label: LAB_004fe215
    TEST EBP,EBP                        ; 004fe217
    JLE 0x004fe24c                      ; 004fe219
        ;   XREF to: 004fe24c (CONDITIONAL_JUMP)  ; LAB_004fe24c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004fe21b
    MOV EDX,dword ptr [ESP + 0x2c]      ; 004fe21f
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fe223
    MOV EAX,dword ptr [ESP + 0x28]      ; 004fe227
    ADD ESI,EDX                         ; 004fe22b
    ADD EBX,EAX                         ; 004fe22d
    MOV EAX,dword ptr [ESI]             ; 004fe22f
        ;   Label: LAB_004fe22f
    TEST EAX,EAX                        ; 004fe231
    JNZ 0x004fe2bd                      ; 004fe233
        ;   XREF to: 004fe2bd (CONDITIONAL_JUMP)  ; LAB_004fe2bd
    MOV dword ptr [EBX],EAX             ; 004fe239
        ;   Label: LAB_004fe239
    ADD EBX,0x180                       ; 004fe23b
    INC EDI                             ; 004fe241
    ADD ESI,0x80                        ; 004fe242
    CMP EDI,EBP                         ; 004fe248
    JL 0x004fe22f                       ; 004fe24a
        ;   XREF to: 004fe22f (CONDITIONAL_JUMP)  ; LAB_004fe22f
    MOV ECX,dword ptr [ESP + 0xc]       ; 004fe24c
        ;   Label: LAB_004fe24c
    ADD ECX,0x4                         ; 004fe250
    MOV EBX,dword ptr [ESP + 0x4]       ; 004fe253
    MOV dword ptr [ESP + 0xc],ECX       ; 004fe257
    CMP ECX,EBX                         ; 004fe25b
    JL 0x004fe215                       ; 004fe25d
        ;   XREF to: 004fe215 (CONDITIONAL_JUMP)  ; LAB_004fe215
    MOV ESI,dword ptr [ESP]             ; 004fe25f
        ;   Label: LAB_004fe25f
    CMP ESI,0x20                        ; 004fe262
    JGE 0x004fe2b5                      ; 004fe265
        ;   XREF to: 004fe2b5 (CONDITIONAL_JUMP)  ; LAB_004fe2b5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 004fe267
    LEA EDI,[ESI*0x4 + 0x0]             ; 004fe26b
    ADD EAX,EDI                         ; 004fe272
    MOV dword ptr [ESP + 0x8],EAX       ; 004fe274
    MOV EAX,dword ptr [ESP + 0x8]       ; 004fe278
        ;   Label: LAB_004fe278
    MOV EAX,dword ptr [EAX]             ; 004fe27c
    TEST EAX,EAX                        ; 004fe27e
    JNZ 0x004fe2d1                      ; 004fe280
        ;   XREF to: 004fe2d1 (CONDITIONAL_JUMP)  ; LAB_004fe2d1
    XOR EBX,EBX                         ; 004fe282
        ;   Label: LAB_004fe282
    TEST EBP,EBP                        ; 004fe284
    JLE 0x004fe29f                      ; 004fe286
        ;   XREF to: 004fe29f (CONDITIONAL_JUMP)  ; LAB_004fe29f
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fe288
    ADD ESI,EDI                         ; 004fe28c
    ADD ESI,0x180                       ; 004fe28e
        ;   Label: LAB_004fe28e
    INC EBX                             ; 004fe294
    MOV dword ptr [ESI + 0xfffffe80],EAX ; 004fe295
    CMP EBX,EBP                         ; 004fe29b
    JL 0x004fe28e                       ; 004fe29d
        ;   XREF to: 004fe28e (CONDITIONAL_JUMP)  ; LAB_004fe28e
    MOV EBX,dword ptr [ESP + 0x8]       ; 004fe29f
        ;   Label: LAB_004fe29f
    ADD EBX,0x4                         ; 004fe2a3
    ADD EDI,0x4                         ; 004fe2a6
    MOV dword ptr [ESP + 0x8],EBX       ; 004fe2a9
    CMP EDI,0x80                        ; 004fe2ad
    JL 0x004fe278                       ; 004fe2b3
        ;   XREF to: 004fe278 (CONDITIONAL_JUMP)  ; LAB_004fe278
    ADD ESP,0x10                        ; 004fe2b5
        ;   Label: LAB_004fe2b5
    POP EBP                             ; 004fe2b8
    POP EDI                             ; 004fe2b9
    POP ESI                             ; 004fe2ba
    POP EBX                             ; 004fe2bb
    RET                                 ; 004fe2bc
    INC EAX                             ; 004fe2bd
        ;   Label: LAB_004fe2bd
    PUSH EAX                            ; 004fe2be
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fe2bf
    PUSH ECX                            ; 004fe2c3
    CALL FUN_004fd5e0                   ; 004fe2c4
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fe2c9
    JMP 0x004fe239                      ; 004fe2cc
        ;   XREF to: 004fe239 (UNCONDITIONAL_JUMP)  ; LAB_004fe239
    INC EAX                             ; 004fe2d1
        ;   Label: LAB_004fe2d1
    PUSH EAX                            ; 004fe2d2
    MOV ESI,dword ptr [ESP + 0x28]      ; 004fe2d3
    PUSH ESI                            ; 004fe2d7
    CALL FUN_004fd5e0                   ; 004fe2d8
        ;   XREF to: 004fd5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fd5e0()
    ADD ESP,0x8                         ; 004fe2dd
    JMP 0x004fe282                      ; 004fe2e0
        ;   XREF to: 004fe282 (UNCONDITIONAL_JUMP)  ; LAB_004fe282

