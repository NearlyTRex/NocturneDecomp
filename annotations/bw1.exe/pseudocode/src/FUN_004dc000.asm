; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc000(int param_1)
;
;
; XREF[1]:
;   FUN_0051b610 at 0051b6a2
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01cd0c24
;   undefined4 DAT_01cd0c64
;   undefined4 DAT_01cd0c94
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_00555830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc000
        ;   Label: FUN_004dc000
    PUSH ESI                            ; 004dc001
    MOV EAX,dword ptr [ESP + 0xc]       ; 004dc002
    MOV ECX,dword ptr [EAX + 0x240]     ; 004dc006
    PUSH ECX                            ; 004dc00c
    MOV EBX,dword ptr [0x00622c18]      ; 004dc00d | DAT_00622c18
    MOV EDX,0x1                         ; 004dc013
    PUSH EBX                            ; 004dc018 | DAT_01e82168
    XOR ESI,ESI                         ; 004dc019
    MOV dword ptr [0x01cd0c94],EDX      ; 004dc01b | DAT_01cd0c94
    CALL FUN_00555830                   ; 004dc021
        ;   XREF to: 00555830 (UNCONDITIONAL_CALL)  ; undefined FUN_00555830()
    ADD ESP,0x8                         ; 004dc026
    MOV dword ptr [0x01cd0c24],ESI      ; 004dc029 | DAT_01cd0c24
    MOV dword ptr [0x01cd0c64],ESI      ; 004dc02f | DAT_01cd0c64
    POP ESI                             ; 004dc035
    POP EBX                             ; 004dc036
    RET                                 ; 004dc037

