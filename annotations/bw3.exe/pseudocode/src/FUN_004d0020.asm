; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0020(int *param_1,uint param_2,uint param_3)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004d0110 at 004d04d8
;
; Referenced Globals:
;   undefined4 DAT_0060b014
;   undefined4 DAT_0060b01c
;   undefined4 DAT_0060b034
;   undefined4 DAT_0060b038
;   undefined4 DAT_0060b03c
;   undefined4 DAT_0060b040
;
; Called Functions:
;   FUN_004d0000
;   FUN_0056356c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d0020
        ;   Label: FUN_004d0020
    PUSH ESI                            ; 004d0021
    PUSH EDI                            ; 004d0022
    PUSH EBP                            ; 004d0023
    SUB ESP,0xc                         ; 004d0024
    MOV ESI,dword ptr [ESP + 0x20]      ; 004d0027
    MOV EBP,dword ptr [ESP + 0x24]      ; 004d002b
    MOV EBX,dword ptr [ESP + 0x28]      ; 004d002f
    MOV EDX,EBP                         ; 004d0033
    MOV ECX,dword ptr [ESI + 0x2c]      ; 004d0035
    MOV EDI,dword ptr [ESI + 0x10]      ; 004d0038
    SUB EDX,ECX                         ; 004d003b
    ADD EDX,EDI                         ; 004d003d
    MOV EAX,dword ptr [ESI + 0x30]      ; 004d003f
    PUSH EDX                            ; 004d0042
    MOV EDX,EBX                         ; 004d0043
    MOV ECX,dword ptr [ESI + 0x14]      ; 004d0045
    SUB EDX,EAX                         ; 004d0048
    ADD EDX,ECX                         ; 004d004a
    PUSH EDX                            ; 004d004c
    PUSH ESI                            ; 004d004d
    CALL FUN_004d0000                   ; 004d004e
        ;   XREF to: 004d0000 (UNCONDITIONAL_CALL)  ; undefined FUN_004d0000()
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004d0053
    IMUL EDX,EBP                        ; 004d0056
    ADD ESP,0xc                         ; 004d0059
    SHL EDX,0x8                         ; 004d005c
    MOV dword ptr [ESP],EDX             ; 004d005f
    MOV EDX,dword ptr [ESI + 0x1c]      ; 004d0062
    IMUL EDX,EBX                        ; 004d0065
    SHL EDX,0x8                         ; 004d0068
    MOV dword ptr [ESP + 0x8],EDX       ; 004d006b
    MOV EDX,dword ptr [ESI + 0xc]       ; 004d006f
    MOV ECX,dword ptr [ESI]             ; 004d0072
    AND EBX,EDX                         ; 004d0074
    IMUL EBX,ECX                        ; 004d0076
    LEA EDI,[EAX*0x4 + 0x0]             ; 004d0079
    SUB EDI,EAX                         ; 004d0080
    AND EBP,dword ptr [ESI + 0x8]       ; 004d0082
    LEA EDX,[EBX + EBP*0x1]             ; 004d0085
    MOV EBX,dword ptr [ESI + 0x24]      ; 004d0088
    MOVSX EDX,word ptr [EBX + EDX*0x4]  ; 004d008b
    MOV EBX,dword ptr [ESI + 0x20]      ; 004d008f
    IMUL EBX,EDX                        ; 004d0092
    MOV EDX,ESP                         ; 004d0095
    SHL EDI,0x4                         ; 004d0097
    PUSH EDX                            ; 004d009a
    ADD EDI,0x60b014                    ; 004d009b | DAT_0060b014
    PUSH EDI                            ; 004d00a1
    MOV dword ptr [ESP + 0xc],EBX       ; 004d00a2
    CALL FUN_0056356c                   ; 004d00a6
        ;   XREF to: 0056356c (UNCONDITIONAL_CALL)  ; undefined FUN_0056356c()
    MOV dword ptr [EDI + 0x20],0x3fff   ; 004d00ab | DAT_0060b034
    MOV dword ptr [EDI + 0x24],0x3fff   ; 004d00b2 | DAT_0060b038
    ADD ESP,0x8                         ; 004d00b9
    MOV EBX,dword ptr [EDI + 0x8]       ; 004d00bc | DAT_0060b01c
    MOV dword ptr [EDI + 0x28],0x3fff   ; 004d00bf | DAT_0060b03c
    TEST EBX,EBX                        ; 004d00c6
    JL 0x004d00f2                       ; 004d00c8
        ;   XREF to: 004d00f2 (CONDITIONAL_JUMP)  ; LAB_004d00f2
    MOV EBP,dword ptr [ESI + 0x1c]      ; 004d00ca
    MOV EBX,dword ptr [ESI + 0x10]      ; 004d00cd
    IMUL EBX,EBP                        ; 004d00d0
    MOV EDX,dword ptr [EDI + 0x8]       ; 004d00d3 | DAT_0060b01c
    SHL EDX,0x8                         ; 004d00d6
    MOV EAX,EDX                         ; 004d00d9
    SAR EDX,0x1f                        ; 004d00db
    IDIV EBX                            ; 004d00de
    MOV dword ptr [EDI + 0x2c],EAX      ; 004d00e0 | DAT_0060b040
    CMP EAX,0xffff                      ; 004d00e3
    JG 0x004d00fb                       ; 004d00e8
        ;   XREF to: 004d00fb (CONDITIONAL_JUMP)  ; LAB_004d00fb
    ADD ESP,0xc                         ; 004d00ea
        ;   Label: LAB_004d00ea
    POP EBP                             ; 004d00ed
    POP EDI                             ; 004d00ee
    POP ESI                             ; 004d00ef
    POP EBX                             ; 004d00f0
    RET                                 ; 004d00f1
    MOV dword ptr [EDI + 0x2c],0x0      ; 004d00f2 | DAT_0060b040
        ;   Label: LAB_004d00f2
    JMP 0x004d00ea                      ; 004d00f9
        ;   XREF to: 004d00ea (UNCONDITIONAL_JUMP)  ; LAB_004d00ea
    MOV dword ptr [EDI + 0x2c],0xffff   ; 004d00fb | DAT_0060b040
        ;   Label: LAB_004d00fb
    ADD ESP,0xc                         ; 004d0102
    POP EBP                             ; 004d0105
    POP EDI                             ; 004d0106
    POP ESI                             ; 004d0107
    POP EBX                             ; 004d0108
    RET                                 ; 004d0109

