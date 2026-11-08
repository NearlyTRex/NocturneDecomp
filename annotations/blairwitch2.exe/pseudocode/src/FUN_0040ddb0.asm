; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040ddb0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040e670 at 0040e6c7
;   FUN_004b90d0 at 004b9d9f
;
; Referenced Globals:
;   TerminatedCString s_bullets6_1_kfm_005cb0c4
;   undefined1 DAT_005cb0d3
;   undefined1 DAT_005cb0d4
;   undefined1 DAT_005cb0d5
;   undefined1 DAT_005cb0d6
;   undefined4 DAT_005f22f4
;
; Called Functions:
;   FUN_00408790
;   FUN_0044fc80
;   FUN_0044fd70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040ddb0
        ;   Label: FUN_0040ddb0
    PUSH ESI                            ; 0040ddb1
    PUSH EDI                            ; 0040ddb2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040ddb3
    PUSH EBX                            ; 0040ddb7
    CALL FUN_00408790                   ; 0040ddb8
        ;   XREF to: 00408790 (UNCONDITIONAL_CALL)  ; undefined FUN_00408790()
    ADD ESP,0x4                         ; 0040ddbd
    ADD EAX,0x2b4                       ; 0040ddc0
    PUSH EAX                            ; 0040ddc5
    CALL FUN_0044fc80                   ; 0040ddc6
        ;   XREF to: 0044fc80 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fc80()
    ADD ESP,0x4                         ; 0040ddcb
    LEA EBX,[EAX + 0xfffffd4c]          ; 0040ddce
    PUSH 0x5cb0c4                       ; 0040ddd4 | = "bullets6_1.kfm"
    LEA EAX,[EBX + 0x2b4]               ; 0040ddd9
    PUSH EAX                            ; 0040dddf
    MOV dword ptr [EBX + 0x2b0],0x5f22f4 ; 0040dde0 | DAT_005f22f4
    CALL FUN_0044fd70                   ; 0040ddea
        ;   XREF to: 0044fd70 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd70()
    ADD ESP,0x8                         ; 0040ddef
    MOV ESI,0x5cb0d3                    ; 0040ddf2 | DAT_005cb0d3
    LEA EDI,[EBX + 0x430]               ; 0040ddf7
    PUSH EDI                            ; 0040ddfd
    MOV AL,byte ptr [ESI]               ; 0040ddfe | DAT_005cb0d3 | DAT_005cb0d5
        ;   Label: LAB_0040ddfe
    MOV byte ptr [EDI],AL               ; 0040de00
    CMP AL,0x0                          ; 0040de02
    JZ 0x0040de16                       ; 0040de04
        ;   XREF to: 0040de16 (CONDITIONAL_JUMP)  ; LAB_0040de16
    MOV AL,byte ptr [ESI + 0x1]         ; 0040de06 | DAT_005cb0d4 | DAT_005cb0d6
    ADD ESI,0x2                         ; 0040de09
    MOV byte ptr [EDI + 0x1],AL         ; 0040de0c
    ADD EDI,0x2                         ; 0040de0f
    CMP AL,0x0                          ; 0040de12
    JNZ 0x0040ddfe                      ; 0040de14
        ;   XREF to: 0040ddfe (CONDITIONAL_JUMP)  ; LAB_0040ddfe
    POP EDI                             ; 0040de16
        ;   Label: LAB_0040de16
    MOV dword ptr [EBX + 0x470],0x1     ; 0040de17
    MOV dword ptr [EBX + 0x474],0x0     ; 0040de21
    MOV dword ptr [EBX + 0x478],0x3e800000 ; 0040de2b
    MOV EAX,EBX                         ; 0040de35
    MOV dword ptr [EBX + 0xfc],0x0      ; 0040de37
    POP EDI                             ; 0040de41
    POP ESI                             ; 0040de42
    POP EBX                             ; 0040de43
    RET                                 ; 0040de44

