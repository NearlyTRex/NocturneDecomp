; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c1188(byte *param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_005c11b8 at 005c125e
;   FUN_005c12d4 at 005c1305
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c1188
        ;   Label: FUN_005c1188
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c1189
    MOV BL,byte ptr [EAX]               ; 005c118d
    XOR EDX,EDX                         ; 005c118f
    CMP BL,0x30                         ; 005c1191
    JC 0x005c11af                       ; 005c1194
        ;   XREF to: 005c11af (CONDITIONAL_JUMP)  ; LAB_005c11af
    CMP byte ptr [EAX],0x39             ; 005c1196
        ;   Label: LAB_005c1196
    JA 0x005c11af                       ; 005c1199
        ;   XREF to: 005c11af (CONDITIONAL_JUMP)  ; LAB_005c11af
    IMUL EDX,EDX,0xa                    ; 005c119b
    XOR EBX,EBX                         ; 005c119e
    MOV BL,byte ptr [EAX]               ; 005c11a0
    INC EAX                             ; 005c11a2
    ADD EDX,EBX                         ; 005c11a3
    MOV BH,byte ptr [EAX]               ; 005c11a5
    SUB EDX,0x30                        ; 005c11a7
    CMP BH,0x30                         ; 005c11aa
    JNC 0x005c1196                      ; 005c11ad
        ;   XREF to: 005c1196 (CONDITIONAL_JUMP)  ; LAB_005c1196
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c11af
        ;   Label: LAB_005c11af
    MOV dword ptr [EBX],EDX             ; 005c11b3
    POP EBX                             ; 005c11b5
    RET                                 ; 005c11b6

