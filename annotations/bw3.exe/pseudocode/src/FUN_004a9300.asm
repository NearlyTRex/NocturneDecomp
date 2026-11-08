; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a9300(int param_1)
;
;
; XREF[4]:
;   FUN_004a8f30 at 004a906a
;   FUN_004a9150 at 004a91a3
;   FUN_004a9270 at 004a92ef
;   FUN_004a9330 at 004a93bf
;
; Called Functions:
;   FUN_004a91b0
;   FUN_004a9830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9300
        ;   Label: FUN_004a9300
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9301
    PUSH EBX                            ; 004a9305
    CALL FUN_004a91b0                   ; 004a9306
        ;   XREF to: 004a91b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a91b0()
    ADD ESP,0x4                         ; 004a930b
    MOV EAX,dword ptr [EBX + 0x1c]      ; 004a930e
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a9311
    MOV dword ptr [EBX + 0x14],EAX      ; 004a9314
    INC EDX                             ; 004a9317
    MOV EAX,dword ptr [EBX + 0x20]      ; 004a9318
    MOV dword ptr [EBX + 0x10],EDX      ; 004a931b
    PUSH EBX                            ; 004a931e
    MOV dword ptr [EBX + 0x18],EAX      ; 004a931f
    CALL FUN_004a9830                   ; 004a9322
        ;   XREF to: 004a9830 (UNCONDITIONAL_CALL)  ; undefined FUN_004a9830()
    ADD ESP,0x4                         ; 004a9327
    POP EBX                             ; 004a932a
    RET                                 ; 004a932b

