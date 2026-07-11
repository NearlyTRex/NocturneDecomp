; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004ae070(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_004b00f0 at 004b0133
;
; Called Functions:
;   FUN_0040de00
;   FUN_004ef040
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ae070
        ;   Label: FUN_004ae070
    MOV EBX,dword ptr [ESP + 0x8]       ; 004ae071
    PUSH 0xf                            ; 004ae075
    MOV EAX,dword ptr [ESP + 0x18]      ; 004ae077
    PUSH 0x0                            ; 004ae07b
    MOV dword ptr [EBX + 0x38],EAX      ; 004ae07d
    CALL FUN_0040de00                   ; 004ae080
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    ADD ESP,0x8                         ; 004ae085
    MOV EDX,dword ptr [ESP + 0x10]      ; 004ae088
    PUSH EDX                            ; 004ae08c
    MOV ECX,dword ptr [ESP + 0x10]      ; 004ae08d
    PUSH ECX                            ; 004ae091
    PUSH EBX                            ; 004ae092
    MOV dword ptr [EBX + 0x3c],EAX      ; 004ae093
    CALL FUN_004ef040                   ; 004ae096
        ;   XREF to: 004ef040 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef040()
    ADD ESP,0xc                         ; 004ae09b
    POP EBX                             ; 004ae09e
    RET                                 ; 004ae09f

