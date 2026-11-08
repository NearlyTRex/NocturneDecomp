; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004aa7b0(undefined4 *param_1)
;
;
; Called Functions:
;   FUN_004aa490
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004aa7b0
        ;   Label: FUN_004aa7b0
    MOV EAX,dword ptr [ESP + 0x8]       ; 004aa7b1
    MOV EDX,dword ptr [EAX + 0x4]       ; 004aa7b5
    PUSH EDX                            ; 004aa7b8
    MOV ECX,dword ptr [EAX]             ; 004aa7b9
    PUSH ECX                            ; 004aa7bb
    MOV EBX,dword ptr [EAX + 0x18]      ; 004aa7bc
    PUSH EBX                            ; 004aa7bf
    CALL FUN_004aa490                   ; 004aa7c0
        ;   XREF to: 004aa490 (UNCONDITIONAL_CALL)  ; undefined FUN_004aa490()
    ADD ESP,0xc                         ; 004aa7c5
    POP EBX                             ; 004aa7c8
    RET                                 ; 004aa7c9

