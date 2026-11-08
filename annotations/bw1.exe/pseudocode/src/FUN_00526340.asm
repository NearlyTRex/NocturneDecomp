; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00526340(undefined4 param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_0052af80 at 0052b06a
;   FUN_0052b450 at 0052c024
;
; Called Functions:
;   FUN_00525be0
;   FUN_00525cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00526340
        ;   Label: FUN_00526340
    PUSH ESI                            ; 00526341
    MOV ESI,dword ptr [ESP + 0xc]       ; 00526342
    MOV EBX,dword ptr [ESP + 0x10]      ; 00526346
    PUSH ESI                            ; 0052634a
    MOV EBX,dword ptr [EBX]             ; 0052634b
    CALL FUN_00525be0                   ; 0052634d
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 00526352
    PUSH 0x2                            ; 00526355
    PUSH ESI                            ; 00526357
    MOV dword ptr [EBX],EAX             ; 00526358
    CALL FUN_00525cd0                   ; 0052635a
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    MOV EDX,0x4                         ; 0052635f
    ADD ESP,0x8                         ; 00526364
    SUB EDX,EAX                         ; 00526367
    PUSH ESI                            ; 00526369
    MOV dword ptr [EBX + 0x4],EDX       ; 0052636a
    CALL FUN_00525be0                   ; 0052636d
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 00526372
    TEST EAX,EAX                        ; 00526375
    SETZ AL                             ; 00526377
    PUSH 0x4                            ; 0052637a
    AND EAX,0xff                        ; 0052637c
    PUSH ESI                            ; 00526381
    MOV dword ptr [EBX + 0x8],EAX       ; 00526382
    CALL FUN_00525cd0                   ; 00526385
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 0052638a
    PUSH 0x2                            ; 0052638d
    PUSH ESI                            ; 0052638f
    MOV dword ptr [EBX + 0xc],EAX       ; 00526390
    CALL FUN_00525cd0                   ; 00526393
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 00526398
    PUSH ESI                            ; 0052639b
    MOV dword ptr [EBX + 0x10],EAX      ; 0052639c
    CALL FUN_00525be0                   ; 0052639f
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 005263a4
    PUSH ESI                            ; 005263a7
    MOV dword ptr [EBX + 0x14],EAX      ; 005263a8
    CALL FUN_00525be0                   ; 005263ab
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 005263b0
    PUSH 0x2                            ; 005263b3
    PUSH ESI                            ; 005263b5
    MOV dword ptr [EBX + 0x18],EAX      ; 005263b6
    CALL FUN_00525cd0                   ; 005263b9
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005263be
    PUSH 0x2                            ; 005263c1
    PUSH ESI                            ; 005263c3
    MOV dword ptr [EBX + 0x1c],EAX      ; 005263c4
    CALL FUN_00525cd0                   ; 005263c7
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005263cc
    PUSH ESI                            ; 005263cf
    MOV dword ptr [EBX + 0x20],EAX      ; 005263d0
    CALL FUN_00525be0                   ; 005263d3
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 005263d8
    PUSH ESI                            ; 005263db
    MOV dword ptr [EBX + 0x24],EAX      ; 005263dc
    CALL FUN_00525be0                   ; 005263df
        ;   XREF to: 00525be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525be0()
    ADD ESP,0x4                         ; 005263e4
    PUSH 0x2                            ; 005263e7
    PUSH ESI                            ; 005263e9
    MOV dword ptr [EBX + 0x28],EAX      ; 005263ea
    CALL FUN_00525cd0                   ; 005263ed
        ;   XREF to: 00525cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00525cd0()
    ADD ESP,0x8                         ; 005263f2
    MOV dword ptr [EBX + 0x2c],EAX      ; 005263f5
    POP ESI                             ; 005263f8
    POP EBX                             ; 005263f9
    RET                                 ; 005263fa

