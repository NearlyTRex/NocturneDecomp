; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0055d6dd(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061c7a4
;   undefined4 DAT_0061c7a8
;   undefined4 DAT_0061c7ac
;   undefined4 DAT_0061c7b0
;   undefined4 DAT_01c35e6c
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 0055d6dd
        ;   Label: FUN_0055d6dd
    MOV EBP,ESP                         ; 0055d6de
    PUSH ESI                            ; 0055d6e0
    PUSH EDI                            ; 0055d6e1
    MOV [0x0061c7a4],EAX                ; 0055d6e2 | DAT_0061c7a4
    MOV dword ptr [0x0061c7a8],EBX      ; 0055d6e7 | DAT_0061c7a8
    MOV dword ptr [0x0061c7ac],ECX      ; 0055d6ed | DAT_0061c7ac
    MOV dword ptr [0x0061c7b0],EDX      ; 0055d6f3 | DAT_0061c7b0
    MOV EBX,dword ptr [EBP + 0x8]       ; 0055d6f9
    MOV ESI,dword ptr [EBP + 0xc]       ; 0055d6fc
    MOV EDI,dword ptr [EBP + 0x10]      ; 0055d6ff
    CALL dword ptr [0x01c35e6c]         ; 0055d702 | DAT_01c35e6c
    MOV EAX,[0x0061c7a4]                ; 0055d708 | DAT_0061c7a4
    MOV EBX,dword ptr [0x0061c7a8]      ; 0055d70d | DAT_0061c7a8
    MOV ECX,dword ptr [0x0061c7ac]      ; 0055d713 | DAT_0061c7ac
    MOV EDX,dword ptr [0x0061c7b0]      ; 0055d719 | DAT_0061c7b0
    POP EDI                             ; 0055d71f
    POP ESI                             ; 0055d720
    LEAVE                               ; 0055d721
    RET                                 ; 0055d722

