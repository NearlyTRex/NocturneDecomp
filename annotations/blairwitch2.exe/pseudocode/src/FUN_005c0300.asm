; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c0300(uint param_1)
;
;
; XREF[2]:
;   FUN_005c036c at 005c0374
;   FUN_005c6210 at 005c638c
;
; Referenced Globals:
;   undefined4 DAT_0061f469
;   undefined4 DAT_0061f47c
;
; Called Functions:
;   FUN_005be180
;   FUN_005be1b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c0300
        ;   Label: FUN_005c0300
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c0301
    PUSH EBX                            ; 005c0305
    CALL FUN_005be1b8                   ; 005c0306
        ;   XREF to: 005be1b8 (UNCONDITIONAL_CALL)  ; undefined FUN_005be1b8()
    ADD ESP,0x4                         ; 005c030b
    CMP EBX,0x7b                        ; 005c030e
    JNZ 0x005c0317                      ; 005c0311
        ;   XREF to: 005c0317 (CONDITIONAL_JUMP)  ; LAB_005c0317
    PUSH 0x1                            ; 005c0313
    JMP 0x005c035d                      ; 005c0315
        ;   XREF to: 005c035d (UNCONDITIONAL_JUMP)  ; LAB_005c035d
    CMP EBX,0xce                        ; 005c0317
        ;   Label: LAB_005c0317
    JNZ 0x005c0330                      ; 005c031d
        ;   XREF to: 005c0330 (CONDITIONAL_JUMP)  ; LAB_005c0330
    PUSH 0x9                            ; 005c031f
    CALL FUN_005be180                   ; 005c0321
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005c0326
    MOV EAX,0xffffffff                  ; 005c0329
    POP EBX                             ; 005c032e
    RET                                 ; 005c032f
    CMP EBX,0xb7                        ; 005c0330
        ;   Label: LAB_005c0330
    JNZ 0x005c0349                      ; 005c0336
        ;   XREF to: 005c0349 (CONDITIONAL_JUMP)  ; LAB_005c0349
    PUSH 0x7                            ; 005c0338
    CALL FUN_005be180                   ; 005c033a
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
    ADD ESP,0x4                         ; 005c033f
    MOV EAX,0xffffffff                  ; 005c0342
    POP EBX                             ; 005c0347
    RET                                 ; 005c0348
    CMP EBX,0x13                        ; 005c0349
        ;   Label: LAB_005c0349
    JBE 0x005c0353                      ; 005c034c
        ;   XREF to: 005c0353 (CONDITIONAL_JUMP)  ; LAB_005c0353
    MOV EBX,0x13                        ; 005c034e
    MOV EBX,dword ptr [EBX + 0x61f469]  ; 005c0353 | DAT_0061f47c | DAT_0061f469
        ;   Label: LAB_005c0353
    SAR EBX,0x18                        ; 005c0359
    PUSH EBX                            ; 005c035c
    CALL FUN_005be180                   ; 005c035d
        ;   XREF to: 005be180 (UNCONDITIONAL_CALL)  ; undefined FUN_005be180()
        ;   Label: LAB_005c035d
    ADD ESP,0x4                         ; 005c0362
    MOV EAX,0xffffffff                  ; 005c0365
    POP EBX                             ; 005c036a
    RET                                 ; 005c036b

