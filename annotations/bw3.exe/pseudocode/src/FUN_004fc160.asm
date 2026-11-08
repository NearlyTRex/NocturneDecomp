; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fc160(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[9]:
;   FUN_0040fb40 at 0040fc9d
;   FUN_00431470 at 004314cd
;   FUN_004d2af0 at 004d2bc6
;   FUN_004d2c20 at 004d2c95
;   FUN_00509120 at 005092a8
;   FUN_00599540 at 0059968b
;   FUN_0059a2b0 at 0059a413
;   FUN_0059ae00 at 0059af63
;   FUN_005a0be0 at 005a0ea7
;
; Called Functions:
;   FUN_004fba50
;   FUN_004fc0d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc160
        ;   Label: FUN_004fc160
    PUSH ESI                            ; 004fc161
    PUSH 0x1                            ; 004fc162
    MOV EDX,dword ptr [ESP + 0x14]      ; 004fc164
    MOV EAX,dword ptr [ESP + 0x10]      ; 004fc168
    PUSH EDX                            ; 004fc16c
    MOV ECX,dword ptr [EAX]             ; 004fc16d
    PUSH ECX                            ; 004fc16f
    CALL FUN_004fba50                   ; 004fc170
        ;   XREF to: 004fba50 (UNCONDITIONAL_CALL)  ; undefined FUN_004fba50()
    ADD ESP,0xc                         ; 004fc175
    MOV EBX,dword ptr [ESP + 0x14]      ; 004fc178
    PUSH EBX                            ; 004fc17c
    PUSH EAX                            ; 004fc17d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fc17e
    PUSH ESI                            ; 004fc182
    CALL FUN_004fc0d0                   ; 004fc183
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 004fc188
    POP ESI                             ; 004fc18b
    POP EBX                             ; 004fc18c
    RET                                 ; 004fc18d

