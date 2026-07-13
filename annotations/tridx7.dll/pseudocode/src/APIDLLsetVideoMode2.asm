; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void APIDLLsetVideoMode2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4 )
;
;
; Referenced Globals:
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_1001417c
;
; Called Functions:
;   APIDLLsetVideoMode
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10002bb0
        ;   Label: APIDLLsetVideoMode2
    MOV ECX,dword ptr [ESP + 0x8]       ; 10002bb4
    MOV EDX,dword ptr [ESP + 0xc]       ; 10002bb8
    MOV [0x10014174],EAX                ; 10002bbc | DAT_10014174
    MOV EAX,dword ptr [ESP + 0x10]      ; 10002bc1
    MOV dword ptr [0x10014178],ECX      ; 10002bc5 | DAT_10014178
    PUSH EAX                            ; 10002bcb
    MOV dword ptr [0x1001417c],EDX      ; 10002bcc | DAT_1001417c
    CALL APIDLLsetVideoMode             ; 10002bd2
        ;   XREF to: 10002500 (UNCONDITIONAL_CALL)  ; undefined APIDLLsetVideoMode() | Ordinal_31
    ADD ESP,0x4                         ; 10002bd7
    RET                                 ; 10002bda

