; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000fc10(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_1000e350 at 1000e54f
;
; Called Functions:
;   FUN_1000fc30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 1000fc10
        ;   Label: FUN_1000fc10
    PUSH 0x0                            ; 1000fc14
    MOV ECX,dword ptr [ESP + 0xc]       ; 1000fc16
    PUSH EAX                            ; 1000fc1a
    MOV EDX,dword ptr [ESP + 0xc]       ; 1000fc1b
    PUSH ECX                            ; 1000fc1f
    PUSH EDX                            ; 1000fc20
    CALL FUN_1000fc30                   ; 1000fc21
        ;   XREF to: 1000fc30 (UNCONDITIONAL_CALL)  ; undefined FUN_1000fc30()
    ADD ESP,0x10                        ; 1000fc26
    RET                                 ; 1000fc29

