; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058ed10(int param_1,int param_2)
;
;
; XREF[5]:
;   FUN_00484900 at 004849a7
;   FUN_004b80a0 at 004b810b
;   FUN_004b8250 at 004b82ca
;   FUN_004eb7c0 at 004eb84a
;   FUN_004ebf10 at 004ec9d9
;
; Referenced Globals:
;   void* PTR_SetCursorPos_005c84e8 = 001c8bb2
;   undefined4 DAT_01c2a37c
;   undefined4 DAT_01c2a380
;
; Called Functions:
;   SetCursorPos
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 0058ed10
        ;   Label: FUN_0058ed10
    PUSH EDX                            ; 0058ed14
    MOV ECX,dword ptr [ESP + 0x8]       ; 0058ed15
    PUSH ECX                            ; 0058ed19
    CALL dword ptr CS:[0x5c84e8]        ; 0058ed1a | PTR_SetCursorPos_005c84e8
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058ed21
    MOV [0x01c2a37c],EAX                ; 0058ed25 | DAT_01c2a37c
    MOV EAX,dword ptr [ESP + 0x8]       ; 0058ed2a
    MOV [0x01c2a380],EAX                ; 0058ed2e | DAT_01c2a380
    RET                                 ; 0058ed33

