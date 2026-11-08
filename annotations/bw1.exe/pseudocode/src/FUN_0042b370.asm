; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042b370(int param_1)
;
;
; XREF[1]:
;   FUN_0042b850 at 0042b8f5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042b370
        ;   Label: FUN_0042b370
    MOV EBX,dword ptr [ESP + 0x8]       ; 0042b371
    PUSH 0x0                            ; 0042b375
    PUSH 0x0                            ; 0042b377
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b379
    PUSH EBX                            ; 0042b37f
    MOV dword ptr [EBX + 0xc278],0x0    ; 0042b380
    CALL dword ptr [EAX + 0x128]        ; 0042b38a
    ADD ESP,0xc                         ; 0042b390
    PUSH 0x0                            ; 0042b393
    PUSH 0x1                            ; 0042b395
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042b397
    PUSH EBX                            ; 0042b39d
    CALL dword ptr [EAX + 0x128]        ; 0042b39e
    ADD ESP,0xc                         ; 0042b3a4
    POP EBX                             ; 0042b3a7
    RET                                 ; 0042b3a8

