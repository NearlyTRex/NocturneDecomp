; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b6350(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005b6f80 at 005b6fab
;
; Called Functions:
;   FUN_005471f0
;   FUN_00547810
;   FUN_005b6200
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b6350
        ;   Label: FUN_005b6350
    PUSH ESI                            ; 005b6351
    PUSH EDI                            ; 005b6352
    PUSH EBP                            ; 005b6353
    MOV EBX,dword ptr [ESP + 0x18]      ; 005b6354
    PUSH 0x0                            ; 005b6358
    PUSH EBX                            ; 005b635a
    CALL FUN_005471f0                   ; 005b635b
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005471f0()
    ADD ESP,0x8                         ; 005b6360
    PUSH EBX                            ; 005b6363
    CALL FUN_00547810                   ; 005b6364
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; undefined FUN_00547810()
    MOV EDX,EAX                         ; 005b6369
    MOV EAX,dword ptr [EBX + 0x2230]    ; 005b636b
    SHL EAX,0x2                         ; 005b6371
    ADD EAX,EDX                         ; 005b6374
    ADD ESP,0x4                         ; 005b6376
    MOV ECX,dword ptr [EAX + 0x90]      ; 005b6379
    PUSH ECX                            ; 005b637f
    ADD EDX,0xc0                        ; 005b6380
    PUSH EDX                            ; 005b6386
    MOV ESI,dword ptr [EAX + 0x7c]      ; 005b6387
    PUSH ESI                            ; 005b638a
    MOV EDI,dword ptr [EAX + 0x54]      ; 005b638b
    PUSH EDI                            ; 005b638e
    MOV EBP,dword ptr [EBX + 0x2234]    ; 005b638f
    PUSH EBP                            ; 005b6395
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005b6396
    PUSH EDX                            ; 005b6399
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005b639a
    PUSH ECX                            ; 005b639e
    CALL FUN_005b6200                   ; 005b639f
        ;   XREF to: 005b6200 (UNCONDITIONAL_CALL)  ; undefined FUN_005b6200()
    ADD ESP,0x1c                        ; 005b63a4
    POP EBP                             ; 005b63a7
    POP EDI                             ; 005b63a8
    POP ESI                             ; 005b63a9
    POP EBX                             ; 005b63aa
    RET                                 ; 005b63ab

