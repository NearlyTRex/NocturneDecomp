; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d3250(int param_1)
;
;
; XREF[3]:
;   FUN_004d4520 at 004d46d3
;   FUN_0051b550 at 0051c014
;   FUN_00525a20 at 00525c6b
;
; Called Functions:
;   FUN_00463d10
;   FUN_00465550
;   FUN_004de610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d3250
        ;   Label: FUN_004d3250
    PUSH ESI                            ; 004d3251
    PUSH EBP                            ; 004d3252
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d3253
    MOV EDX,dword ptr [EBX + 0x20b94]   ; 004d3257
    XOR ESI,ESI                         ; 004d325d
    TEST EDX,EDX                        ; 004d325f
    JNZ 0x004d3269                      ; 004d3261
        ;   XREF to: 004d3269 (CONDITIONAL_JUMP)  ; LAB_004d3269
    MOV EAX,ESI                         ; 004d3263
    POP EBP                             ; 004d3265
    POP ESI                             ; 004d3266
    POP EBX                             ; 004d3267
    RET                                 ; 004d3268
    PUSH 0x1                            ; 004d3269
        ;   Label: LAB_004d3269
    MOV ECX,dword ptr [EDX + 0x990]     ; 004d326b
    PUSH ECX                            ; 004d3271
    LEA EAX,[EBX + 0x206e8]             ; 004d3272
    PUSH EAX                            ; 004d3278
    CALL FUN_004de610                   ; 004d3279
        ;   XREF to: 004de610 (UNCONDITIONAL_CALL)  ; undefined FUN_004de610()
    ADD ESP,0xc                         ; 004d327e
    TEST EAX,EAX                        ; 004d3281
    JZ 0x004d32a9                       ; 004d3283
        ;   XREF to: 004d32a9 (CONDITIONAL_JUMP)  ; LAB_004d32a9
    MOV EBP,dword ptr [EBX + 0x20b94]   ; 004d3285
    PUSH EBP                            ; 004d328b
    MOV ESI,0x1                         ; 004d328c
    CALL FUN_00463d10                   ; 004d3291
        ;   XREF to: 00463d10 (UNCONDITIONAL_CALL)  ; undefined FUN_00463d10()
    ADD ESP,0x4                         ; 004d3296
    MOV dword ptr [EBX + 0x20b94],0x0   ; 004d3299
    MOV EAX,ESI                         ; 004d32a3
    POP EBP                             ; 004d32a5
    POP ESI                             ; 004d32a6
    POP EBX                             ; 004d32a7
    RET                                 ; 004d32a8
    PUSH EDI                            ; 004d32a9
        ;   Label: LAB_004d32a9
    MOV EDI,dword ptr [EBX + 0x20b94]   ; 004d32aa
    PUSH EDI                            ; 004d32b0
    CALL FUN_00465550                   ; 004d32b1
        ;   XREF to: 00465550 (UNCONDITIONAL_CALL)  ; undefined FUN_00465550()
    ADD ESP,0x4                         ; 004d32b6
    POP EDI                             ; 004d32b9
    MOV dword ptr [EBX + 0x20b94],0x0   ; 004d32ba
    MOV EAX,ESI                         ; 004d32c4
    POP EBP                             ; 004d32c6
    POP ESI                             ; 004d32c7
    POP EBX                             ; 004d32c8
    RET                                 ; 004d32c9

