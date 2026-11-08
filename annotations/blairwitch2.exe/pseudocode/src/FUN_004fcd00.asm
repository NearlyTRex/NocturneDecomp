; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004fcd00(int param_1,undefined4 param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004fcda0 at 004fcdcd
;
; Referenced Globals:
;   undefined4 DAT_005de8eb
;   undefined4 DAT_005de8ee
;
; Called Functions:
;   FUN_004fc740
;   FUN_005b7790
;   FUN_005b8da0
;   FUN_005ba8cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fcd00
        ;   Label: FUN_004fcd00
    PUSH ESI                            ; 004fcd01
    PUSH EDI                            ; 004fcd02
    PUSH EBP                            ; 004fcd03
    SUB ESP,0x4                         ; 004fcd04
    MOV EBP,dword ptr [ESP + 0x20]      ; 004fcd07
    MOV EBX,dword ptr [ESP + 0x18]      ; 004fcd0b
    MOV EDI,EBP                         ; 004fcd0f
    MOV ESI,0xffffffff                  ; 004fcd11
    SUB ECX,ECX                         ; 004fcd16
    DEC ECX                             ; 004fcd18
    XOR EAX,EAX                         ; 004fcd19
    SCASB.REPNE ES:EDI                  ; 004fcd1b
    NOT ECX                             ; 004fcd1d
    DEC ECX                             ; 004fcd1f
    MOV EBX,dword ptr [EBX + 0x1114]    ; 004fcd20
    MOV EDI,ECX                         ; 004fcd26
    TEST EBX,EBX                        ; 004fcd28
    JZ 0x004fcd45                       ; 004fcd2a
        ;   XREF to: 004fcd45 (CONDITIONAL_JUMP)  ; LAB_004fcd45
    PUSH EDI                            ; 004fcd2c
        ;   Label: LAB_004fcd2c
    PUSH EBP                            ; 004fcd2d
    PUSH EBX                            ; 004fcd2e
    CALL FUN_005b8da0                   ; 004fcd2f
        ;   XREF to: 005b8da0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8da0()
    ADD ESP,0xc                         ; 004fcd34
    TEST EAX,EAX                        ; 004fcd37
    JZ 0x004fcd78                       ; 004fcd39
        ;   XREF to: 004fcd78 (CONDITIONAL_JUMP)  ; LAB_004fcd78
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fcd3b
        ;   Label: LAB_004fcd3b
    TEST EBX,EBX                        ; 004fcd41
    JNZ 0x004fcd2c                      ; 004fcd43
        ;   XREF to: 004fcd2c (CONDITIONAL_JUMP)  ; LAB_004fcd2c
    MOV EBX,dword ptr [ESP + 0x1c]      ; 004fcd45
        ;   Label: LAB_004fcd45
    MOV EDI,dword ptr [ESP + 0x18]      ; 004fcd49
    INC ESI                             ; 004fcd4d
        ;   Label: LAB_004fcd4d
    PUSH ESI                            ; 004fcd4e
    PUSH EBP                            ; 004fcd4f
    PUSH 0x5de8ee                       ; 004fcd50 | DAT_005de8ee
    MOV ECX,dword ptr [ESP + 0x28]      ; 004fcd55
    PUSH ECX                            ; 004fcd59
    CALL FUN_005b7790                   ; 004fcd5a
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0x10                        ; 004fcd5f
    PUSH EBX                            ; 004fcd62
    PUSH EDI                            ; 004fcd63
    CALL FUN_004fc740                   ; 004fcd64
        ;   XREF to: 004fc740 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc740()
    ADD ESP,0x8                         ; 004fcd69
    TEST EAX,EAX                        ; 004fcd6c
    JNZ 0x004fcd4d                      ; 004fcd6e
        ;   XREF to: 004fcd4d (CONDITIONAL_JUMP)  ; LAB_004fcd4d
    ADD ESP,0x4                         ; 004fcd70
    POP EBP                             ; 004fcd73
    POP EDI                             ; 004fcd74
    POP ESI                             ; 004fcd75
    POP EBX                             ; 004fcd76
    RET                                 ; 004fcd77
    MOV EAX,ESP                         ; 004fcd78
        ;   Label: LAB_004fcd78
    PUSH EAX                            ; 004fcd7a
    PUSH 0x5de8eb                       ; 004fcd7b | DAT_005de8eb
    LEA EAX,[EBX + EDI*0x1]             ; 004fcd80
    PUSH EAX                            ; 004fcd83
    CALL FUN_005ba8cc                   ; 004fcd84
        ;   XREF to: 005ba8cc (UNCONDITIONAL_CALL)  ; undefined FUN_005ba8cc()
    ADD ESP,0xc                         ; 004fcd89
    CMP EAX,0x1                         ; 004fcd8c
    JNZ 0x004fcd3b                      ; 004fcd8f
        ;   XREF to: 004fcd3b (CONDITIONAL_JUMP)  ; LAB_004fcd3b
    MOV EDX,dword ptr [ESP]             ; 004fcd91
    CMP ESI,EDX                         ; 004fcd94
    JGE 0x004fcd3b                      ; 004fcd96
        ;   XREF to: 004fcd3b (CONDITIONAL_JUMP)  ; LAB_004fcd3b
    MOV ESI,EDX                         ; 004fcd98
    JMP 0x004fcd3b                      ; 004fcd9a
        ;   XREF to: 004fcd3b (UNCONDITIONAL_JUMP)  ; LAB_004fcd3b

