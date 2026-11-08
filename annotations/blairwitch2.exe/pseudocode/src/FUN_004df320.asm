; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004df320(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_modelName_005dbbcd+1
;   TerminatedCString s_keyMask_005dbbd8
;   TerminatedCString s_descriptiveName_005dbbe0
;   undefined4 DAT_00617dbc
;
; Called Functions:
;   FUN_0040b850
;   FUN_0040b960
;   FUN_0040ba60
;   FUN_0040c330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004df320
        ;   Label: FUN_004df320
    SUB ESP,0x100                       ; 004df321
    MOV EBX,dword ptr [ESP + 0x108]     ; 004df327
    PUSH EBX                            ; 004df32e
    CALL FUN_0040c330                   ; 004df32f
        ;   XREF to: 0040c330 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c330()
    ADD ESP,0x4                         ; 004df334
    PUSH 0x5dbbce                       ; 004df337 | s_modelName_005dbbcd+1
    LEA EAX,[EBX + 0x2b4]               ; 004df33c
    PUSH EAX                            ; 004df342
    CALL FUN_0040ba60                   ; 004df343
        ;   XREF to: 0040ba60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ba60()
    ADD ESP,0x8                         ; 004df348
    PUSH 0x5dbbd8                       ; 004df34b | = "keyMask"
    LEA EAX,[EBX + 0x430]               ; 004df350
    PUSH EAX                            ; 004df356
    CALL FUN_0040b960                   ; 004df357
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    MOV EDX,dword ptr [0x00617dbc]      ; 004df35c | DAT_00617dbc
    ADD ESP,0x8                         ; 004df362
    CMP EDX,0x2                         ; 004df365
    JZ 0x004df372                       ; 004df368
        ;   XREF to: 004df372 (CONDITIONAL_JUMP)  ; LAB_004df372
    ADD ESP,0x100                       ; 004df36a
    POP EBX                             ; 004df370
    RET                                 ; 004df371
    PUSH 0x5dbbe0                       ; 004df372 | = "descriptiveName"
        ;   Label: LAB_004df372
    LEA EAX,[ESP + 0x4]                 ; 004df377
    PUSH EAX                            ; 004df37b
    CALL FUN_0040b850                   ; 004df37c
        ;   XREF to: 0040b850 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b850()
    ADD ESP,0x8                         ; 004df381
    ADD ESP,0x100                       ; 004df384
    POP EBX                             ; 004df38a
    RET                                 ; 004df38b

