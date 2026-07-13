; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 APIDLLselectTexture(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_10014138
;   undefined4 DAT_10138fb0
;   undefined4 DAT_1020de38
;   undefined4 DAT_1024061c
;
; Called Functions:
;   FUN_10001470
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10003e90
        ;   Label: APIDLLselectTexture
    MOV ECX,dword ptr [ESP + 0x10]      ; 10003e94
    MOV EDX,dword ptr [ESP + 0x14]      ; 10003e98
    MOV [0x1020de38],EAX                ; 10003e9c | DAT_1020de38
    MOV EAX,dword ptr [ESP + 0x4]       ; 10003ea1
    MOV dword ptr [0x10138fb0],ECX      ; 10003ea5 | DAT_10138fb0
    PUSH EAX                            ; 10003eab
    MOV dword ptr [0x1024061c],EDX      ; 10003eac | DAT_1024061c
    CALL FUN_10001470                   ; 10003eb2
        ;   XREF to: 10001470 (UNCONDITIONAL_CALL)  ; undefined FUN_10001470()
    ADD ESP,0x4                         ; 10003eb7
    MOV [0x10014138],EAX                ; 10003eba | DAT_10014138
    MOV EAX,0x1                         ; 10003ebf
    RET                                 ; 10003ec4

