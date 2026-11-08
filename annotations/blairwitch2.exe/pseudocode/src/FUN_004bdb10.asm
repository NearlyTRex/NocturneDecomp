; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bdb10(int param_1)
;
; Local Variables:
; undefined1       Stack[-0x210]:1  local_210
; undefined1       Stack[-0x20f]:1  local_20f
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[2]:
;   FUN_004b6170 at 004b6790
;   FUN_004b82e0 at 004b8551
;
; Referenced Globals:
;   undefined4 DAT_005d892b
;   undefined4 DAT_005d892f
;   TerminatedCString s_noc_005d8934
;   undefined4 DAT_005d893a
;   TerminatedCString s_Select_file_to_load_005d893f
;   undefined4 DAT_006138e0
;   undefined4 DAT_01cb7b50
;   undefined4 DAT_01cb7b51
;   undefined4 DAT_01cb7b52
;   undefined4 DAT_01cb7b53
;
; Called Functions:
;   FUN_0047c970
;   FUN_0050fe80
;   FUN_005b8130
;   FUN_005b9e58
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bdb10
        ;   Label: FUN_004bdb10
    PUSH ESI                            ; 004bdb11
    PUSH EDI                            ; 004bdb12
    SUB ESP,0x204                       ; 004bdb13
    MOV EBX,dword ptr [ESP + 0x214]     ; 004bdb19
    LEA EAX,[ESP + 0x104]               ; 004bdb20
    PUSH EAX                            ; 004bdb27
    PUSH 0x0                            ; 004bdb28
    PUSH 0x0                            ; 004bdb2a
    PUSH 0x0                            ; 004bdb2c
    MOV dword ptr [EBX + 0x9e8],0x0     ; 004bdb2e
    PUSH 0x1cb7b50                      ; 004bdb38 | DAT_01cb7b50
    MOV byte ptr [EBX + 0x9ec],0x0      ; 004bdb3d
    CALL FUN_005b9e58                   ; 004bdb44
        ;   XREF to: 005b9e58 (UNCONDITIONAL_CALL)  ; undefined FUN_005b9e58()
    ADD ESP,0x14                        ; 004bdb49
    PUSH 0x5d892b                       ; 004bdb4c | DAT_005d892b
    LEA EAX,[ESP + 0x108]               ; 004bdb51
    PUSH EAX                            ; 004bdb58
    CALL FUN_005b8130                   ; 004bdb59
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004bdb5e
    TEST EAX,EAX                        ; 004bdb61
    JZ 0x004bdb7e                       ; 004bdb63
        ;   XREF to: 004bdb7e (CONDITIONAL_JUMP)  ; LAB_004bdb7e
    PUSH 0x5d892f                       ; 004bdb65 | DAT_005d892f
    LEA EAX,[ESP + 0x108]               ; 004bdb6a
    PUSH EAX                            ; 004bdb71
    CALL FUN_005b8130                   ; 004bdb72
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8130()
    ADD ESP,0x8                         ; 004bdb77
    TEST EAX,EAX                        ; 004bdb7a
    JNZ 0x004bdbdb                      ; 004bdb7c
        ;   XREF to: 004bdbdb (CONDITIONAL_JUMP)  ; LAB_004bdbdb
    MOV ESI,0x1cb7b50                   ; 004bdb7e
        ;   Label: LAB_004bdb7e
    MOV EDI,ESP                         ; 004bdb83
    PUSH EDI                            ; 004bdb85
    MOV AL,byte ptr [ESI]               ; 004bdb86 | DAT_01cb7b50 | DAT_01cb7b52
        ;   Label: LAB_004bdb86
    MOV byte ptr [EDI],AL               ; 004bdb88
    CMP AL,0x0                          ; 004bdb8a
    JZ 0x004bdb9e                       ; 004bdb8c
        ;   XREF to: 004bdb9e (CONDITIONAL_JUMP)  ; LAB_004bdb9e
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdb8e | DAT_01cb7b51 | DAT_01cb7b53
    ADD ESI,0x2                         ; 004bdb91
    MOV byte ptr [EDI + 0x1],AL         ; 004bdb94
    ADD EDI,0x2                         ; 004bdb97
    CMP AL,0x0                          ; 004bdb9a
    JNZ 0x004bdb86                      ; 004bdb9c
        ;   XREF to: 004bdb86 (CONDITIONAL_JUMP)  ; LAB_004bdb86
    POP EDI                             ; 004bdb9e
        ;   Label: LAB_004bdb9e
    PUSH 0x1                            ; 004bdb9f
        ;   Label: LAB_004bdb9f
    LEA EAX,[ESP + 0x4]                 ; 004bdba1
    PUSH EAX                            ; 004bdba5
    PUSH 0x5d8934                       ; 004bdba6 | = "*.noc"
    PUSH 0x5d893a                       ; 004bdbab | DAT_005d893a
    PUSH 0x5d893f                       ; 004bdbb0 | = "Select file to load"
    CALL FUN_0050fe80                   ; 004bdbb5
        ;   XREF to: 0050fe80 (UNCONDITIONAL_CALL)  ; undefined FUN_0050fe80()
    ADD ESP,0x4                         ; 004bdbba
    PUSH EAX                            ; 004bdbbd
    MOV EDX,dword ptr [0x006138e0]      ; 004bdbbe | DAT_006138e0
    PUSH EDX                            ; 004bdbc4
    CALL FUN_0047c970                   ; 004bdbc5
        ;   XREF to: 0047c970 (UNCONDITIONAL_CALL)  ; undefined FUN_0047c970()
    ADD ESP,0x18                        ; 004bdbca
    TEST EAX,EAX                        ; 004bdbcd
    JNZ 0x004bdbe2                      ; 004bdbcf
        ;   XREF to: 004bdbe2 (CONDITIONAL_JUMP)  ; LAB_004bdbe2
    ADD ESP,0x204                       ; 004bdbd1
    POP EDI                             ; 004bdbd7
    POP ESI                             ; 004bdbd8
    POP EBX                             ; 004bdbd9
    RET                                 ; 004bdbda
    XOR AH,AH                           ; 004bdbdb
        ;   Label: LAB_004bdbdb
    MOV byte ptr [ESP],AH               ; 004bdbdd
    JMP 0x004bdb9f                      ; 004bdbe0
        ;   XREF to: 004bdb9f (UNCONDITIONAL_JUMP)  ; LAB_004bdb9f
    MOV ESI,ESP                         ; 004bdbe2
        ;   Label: LAB_004bdbe2
    LEA EDI,[EBX + 0x9ec]               ; 004bdbe4
    MOV dword ptr [EBX + 0x9e8],0x1     ; 004bdbea
    PUSH EDI                            ; 004bdbf4
    MOV AL,byte ptr [ESI]               ; 004bdbf5
        ;   Label: LAB_004bdbf5
    MOV byte ptr [EDI],AL               ; 004bdbf7
    CMP AL,0x0                          ; 004bdbf9
    JZ 0x004bdc0d                       ; 004bdbfb
        ;   XREF to: 004bdc0d (CONDITIONAL_JUMP)  ; LAB_004bdc0d
    MOV AL,byte ptr [ESI + 0x1]         ; 004bdbfd
    ADD ESI,0x2                         ; 004bdc00
    MOV byte ptr [EDI + 0x1],AL         ; 004bdc03
    ADD EDI,0x2                         ; 004bdc06
    CMP AL,0x0                          ; 004bdc09
    JNZ 0x004bdbf5                      ; 004bdc0b
        ;   XREF to: 004bdbf5 (CONDITIONAL_JUMP)  ; LAB_004bdbf5
    POP EDI                             ; 004bdc0d
        ;   Label: LAB_004bdc0d
    ADD ESP,0x204                       ; 004bdc0e
    POP EDI                             ; 004bdc14
    POP ESI                             ; 004bdc15
    POP EBX                             ; 004bdc16
    RET                                 ; 004bdc17

