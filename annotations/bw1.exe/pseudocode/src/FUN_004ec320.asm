; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ec320(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00544460 at 00549747
;
; Called Functions:
;   FUN_005bfb70
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec320
        ;   Label: FUN_004ec320
    PUSH 0x30                           ; 004ec324
    PUSH 0x0                            ; 004ec326
    ADD EAX,0xc1d8                      ; 004ec328
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ec32d
    PUSH EAX                            ; 004ec331
    MOV dword ptr [EAX + 0x13dd0],EDX   ; 004ec332
    CALL FUN_005bfb70                   ; 004ec338
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; undefined FUN_005bfb70()
    ADD ESP,0xc                         ; 004ec33d
    RET                                 ; 004ec340

