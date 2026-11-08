; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9cc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[9]:
;   FUN_00409db0 at 00409dda
;   FUN_004364a0 at 00436586
;   FUN_0045b190 at 0045b36d
;   FUN_004b1bf0 at 004b1d2e
;   FUN_004cd880 at 004cd980
;   FUN_004d6370 at 004d64b6
;   FUN_0051fb40 at 0051fc26
;   FUN_0056d060 at 0056d23d
;   FUN_00571870 at 0057198f
;
; Called Functions:
;   FUN_004c9bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9cc0
        ;   Label: FUN_004c9cc0
    PUSH ESI                            ; 004c9cc1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004c9cc2
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004c9cc6
    PUSH EDX                            ; 004c9cca
    MOV ECX,dword ptr [ESP + 0x18]      ; 004c9ccb
    PUSH dword ptr [ESP + 0x1c]         ; 004c9ccf
    PUSH ECX                            ; 004c9cd3
    LEA EAX,[EBX + 0x20]                ; 004c9cd4
    PUSH EAX                            ; 004c9cd7
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004c9cd8
    PUSH ESI                            ; 004c9cdc
    CALL FUN_004c9bd0                   ; 004c9cdd
        ;   XREF to: 004c9bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9bd0()
    MOV EDX,dword ptr [EBX + 0x2c]      ; 004c9ce2
    MOV dword ptr [EAX + 0x2c],EDX      ; 004c9ce5
    ADD ESP,0x14                        ; 004c9ce8
    MOV dword ptr [EAX + 0x2b64],EBX    ; 004c9ceb
    POP ESI                             ; 004c9cf1
    POP EBX                             ; 004c9cf2
    RET                                 ; 004c9cf3

