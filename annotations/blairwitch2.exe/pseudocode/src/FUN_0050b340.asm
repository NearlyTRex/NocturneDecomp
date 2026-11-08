; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050b340(int param_1)
;
;
; XREF[1]:
;   FUN_004e46c0 at 004e4d76
;
; Referenced Globals:
;   TerminatedCString s_netlog_txt_005e0414
;   TerminatedCString s_USERNAME_005e041f
;   TerminatedCString s_COMPUTERNAME_005e0428
;   TerminatedCString s_MyComputer_005e0435
;   undefined4 s_yComputer_005e0435+1
;   undefined4 s_Computer_005e0435+2
;   undefined4 s_omputer_005e0435+3
;   undefined4 DAT_01d34e34
;   undefined4 DAT_01d34e38
;   undefined4 DAT_01d34e4c
;   undefined4 DAT_01d51050
;
; Called Functions:
;   FUN_0050b8d0
;   FUN_00579500
;   FUN_0058e9e0
;   FUN_005ba1e0
;   FUN_005bac90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0050b340
        ;   Label: FUN_0050b340
    PUSH EDI                            ; 0050b341
    PUSH 0x5e0414                       ; 0050b342 | = "netlog.txt"
    CALL FUN_005ba1e0                   ; 0050b347
        ;   XREF to: 005ba1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba1e0()
    MOV EDX,0x1                         ; 0050b34c
    ADD ESP,0x4                         ; 0050b351
    MOV dword ptr [0x01d34e38],EDX      ; 0050b354 | DAT_01d34e38
    CALL FUN_0058e9e0                   ; 0050b35a
        ;   XREF to: 0058e9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0058e9e0()
    MOV EDX,EAX                         ; 0050b35f
    MOV ESI,0x12                        ; 0050b361
    SAR EDX,0x1f                        ; 0050b366
    IDIV ESI                            ; 0050b369
    MOV [0x01d34e34],EAX                ; 0050b36b | DAT_01d34e34
    CALL FUN_00579500                   ; 0050b370
        ;   XREF to: 00579500 (UNCONDITIONAL_CALL)  ; undefined FUN_00579500()
    PUSH 0x5e041f                       ; 0050b375 | = "USERNAME"
    CALL FUN_005bac90                   ; 0050b37a
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; undefined FUN_005bac90()
    ADD ESP,0x4                         ; 0050b37f
    MOV ESI,EAX                         ; 0050b382
    TEST EAX,EAX                        ; 0050b384
    JZ 0x0050b3d1                       ; 0050b386
        ;   XREF to: 0050b3d1 (CONDITIONAL_JUMP)  ; LAB_0050b3d1
    TEST ESI,ESI                        ; 0050b388
        ;   Label: LAB_0050b388
    JNZ 0x0050b391                      ; 0050b38a
        ;   XREF to: 0050b391 (CONDITIONAL_JUMP)  ; LAB_0050b391
    MOV ESI,0x5e0435                    ; 0050b38c | = "MyComputer"
    MOV EDI,dword ptr [ESP + 0xc]       ; 0050b391
        ;   Label: LAB_0050b391
    ADD EDI,0x8                         ; 0050b395
    XOR ECX,ECX                         ; 0050b398
    PUSH EDI                            ; 0050b39a
    MOV AL,byte ptr [ESI]               ; 0050b39b | = "MyComputer" | s_Computer_005e0435+2
        ;   Label: LAB_0050b39b
    MOV byte ptr [EDI],AL               ; 0050b39d
    CMP AL,0x0                          ; 0050b39f
    JZ 0x0050b3b3                       ; 0050b3a1
        ;   XREF to: 0050b3b3 (CONDITIONAL_JUMP)  ; LAB_0050b3b3
    MOV AL,byte ptr [ESI + 0x1]         ; 0050b3a3 | s_yComputer_005e0435+1 | s_omputer_005e0435+3
    ADD ESI,0x2                         ; 0050b3a6
    MOV byte ptr [EDI + 0x1],AL         ; 0050b3a9
    ADD EDI,0x2                         ; 0050b3ac
    CMP AL,0x0                          ; 0050b3af
    JNZ 0x0050b39b                      ; 0050b3b1
        ;   XREF to: 0050b39b (CONDITIONAL_JUMP)  ; LAB_0050b39b
    POP EDI                             ; 0050b3b3
        ;   Label: LAB_0050b3b3
    PUSH ECX                            ; 0050b3b4
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050b3b5
    PUSH ESI                            ; 0050b3b9
    MOV dword ptr [0x01d34e4c],ECX      ; 0050b3ba | DAT_01d34e4c
    MOV dword ptr [0x01d51050],ECX      ; 0050b3c0 | DAT_01d51050
    CALL FUN_0050b8d0                   ; 0050b3c6
        ;   XREF to: 0050b8d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050b8d0()
    ADD ESP,0x8                         ; 0050b3cb
    POP EDI                             ; 0050b3ce
    POP ESI                             ; 0050b3cf
    RET                                 ; 0050b3d0
    PUSH 0x5e0428                       ; 0050b3d1 | = "COMPUTERNAME"
        ;   Label: LAB_0050b3d1
    CALL FUN_005bac90                   ; 0050b3d6
        ;   XREF to: 005bac90 (UNCONDITIONAL_CALL)  ; undefined FUN_005bac90()
    ADD ESP,0x4                         ; 0050b3db
    MOV ESI,EAX                         ; 0050b3de
    JMP 0x0050b388                      ; 0050b3e0
        ;   XREF to: 0050b388 (UNCONDITIONAL_JUMP)  ; LAB_0050b388

