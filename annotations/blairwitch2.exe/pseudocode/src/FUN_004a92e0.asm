; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a92e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)
;
;
; Called Functions:
;   FUN_004a9330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a92e0
        ;   Label: FUN_004a92e0
    PUSH ESI                            ; 004a92e1
    PUSH EDI                            ; 004a92e2
    PUSH EBP                            ; 004a92e3
    SUB ESP,0x4                         ; 004a92e4
    LEA EAX,[ESP + 0x30]                ; 004a92e7
    MOV dword ptr [ESP],EAX             ; 004a92eb
    MOV EAX,ESP                         ; 004a92ee
    PUSH EAX                            ; 004a92f0
    MOV EDX,dword ptr [ESP + 0x30]      ; 004a92f1
    PUSH EDX                            ; 004a92f5
    MOV ECX,dword ptr [ESP + 0x30]      ; 004a92f6
    PUSH ECX                            ; 004a92fa
    MOV EBX,dword ptr [ESP + 0x30]      ; 004a92fb
    PUSH EBX                            ; 004a92ff
    MOV ESI,dword ptr [ESP + 0x30]      ; 004a9300
    PUSH ESI                            ; 004a9304
    MOV EDI,dword ptr [ESP + 0x30]      ; 004a9305
    PUSH EDI                            ; 004a9309
    MOV EBP,dword ptr [ESP + 0x30]      ; 004a930a
    PUSH EBP                            ; 004a930e
    CALL FUN_004a9330                   ; 004a930f
        ;   XREF to: 004a9330 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9330()
    ADD ESP,0x1c                        ; 004a9314
    XOR EDX,EDX                         ; 004a9317
    MOV dword ptr [ESP],EDX             ; 004a9319
    ADD ESP,0x4                         ; 004a931c
    POP EBP                             ; 004a931f
    POP EDI                             ; 004a9320
    POP ESI                             ; 004a9321
    POP EBX                             ; 004a9322
    RET                                 ; 004a9323

