; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint FUN_1000e2d0(char *param_1,char *param_2,int param_3)
;
;
; XREF[1]:
;   FUN_1000ac10 at 1000ad05
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 1000e2d0
        ;   Label: FUN_1000e2d0
    MOV EBP,ESP                         ; 1000e2d1
    PUSH EDI                            ; 1000e2d3
    PUSH ESI                            ; 1000e2d4
    PUSH EBX                            ; 1000e2d5
    MOV ECX,dword ptr [EBP + 0x10]      ; 1000e2d6
    JECXZ 0x1000e301                    ; 1000e2d9
        ;   XREF to: 1000e301 (CONDITIONAL_JUMP)  ; LAB_1000e301
    MOV EBX,ECX                         ; 1000e2db
    MOV EDI,dword ptr [EBP + 0x8]       ; 1000e2dd
    MOV ESI,EDI                         ; 1000e2e0
    XOR EAX,EAX                         ; 1000e2e2
    SCASB.REPNE ES:EDI                  ; 1000e2e4
    NEG ECX                             ; 1000e2e6
    ADD ECX,EBX                         ; 1000e2e8
    MOV EDI,ESI                         ; 1000e2ea
    MOV ESI,dword ptr [EBP + 0xc]       ; 1000e2ec
    CMPSB.REPE ES:EDI,ESI               ; 1000e2ef
    MOV AL,byte ptr [ESI + -0x1]        ; 1000e2f1
    XOR ECX,ECX                         ; 1000e2f4
    CMP AL,byte ptr [EDI + -0x1]        ; 1000e2f6
    JA 0x1000e2ff                       ; 1000e2f9
        ;   XREF to: 1000e2ff (CONDITIONAL_JUMP)  ; LAB_1000e2ff
    JZ 0x1000e301                       ; 1000e2fb
        ;   XREF to: 1000e301 (CONDITIONAL_JUMP)  ; LAB_1000e301
    DEC ECX                             ; 1000e2fd
    DEC ECX                             ; 1000e2fe
    NOT ECX                             ; 1000e2ff
        ;   Label: LAB_1000e2ff
    MOV EAX,ECX                         ; 1000e301
        ;   Label: LAB_1000e301
    POP EBX                             ; 1000e303
    POP ESI                             ; 1000e304
    POP EDI                             ; 1000e305
    LEAVE                               ; 1000e306
    RET                                 ; 1000e307

