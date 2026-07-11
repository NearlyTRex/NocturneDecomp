; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00401ed0(byte *param_1)
;
;
; XREF[3]:
;   FUN_00402b60 at 00402b6b
;   FUN_00402c20 at 00402c2b
;   FUN_00402cf0 at 00402d06
;
; Referenced Globals:
;   undefined4 DAT_005a4b80
;
; *****************************************************************************

section .text

    MOV EAX,ESI                         ; 0040151f
        ;   Label: LAB_0040151f
    POP EBP                             ; 00401521
    POP EDI                             ; 00401522
    POP ESI                             ; 00401523
    POP EBX                             ; 00401524
    RET                                 ; 00401525
    PUSH EBX                            ; 00401ed0
        ;   Label: FUN_00401ed0
    PUSH ESI                            ; 00401ed1
    PUSH EDI                            ; 00401ed2
    PUSH EBP                            ; 00401ed3
    MOV EBP,dword ptr [ESP + 0x14]      ; 00401ed4
    MOV EDX,EBP                         ; 00401ed8
    XOR EBX,EBX                         ; 00401eda
    XOR ESI,ESI                         ; 00401edc
    MOV EDI,EBP                         ; 00401ede
        ;   Label: LAB_00401ede
    SUB ECX,ECX                         ; 00401ee0
    DEC ECX                             ; 00401ee2
    XOR EAX,EAX                         ; 00401ee3
    SCASB.REPNE ES:EDI                  ; 00401ee5
    NOT ECX                             ; 00401ee7
    DEC ECX                             ; 00401ee9
    CMP EBX,ECX                         ; 00401eea
    JNC 0x0040151f                      ; 00401eec
        ;   XREF to: 0040151f (CONDITIONAL_JUMP)  ; LAB_0040151f
    XOR EAX,EAX                         ; 00401ef2
    MOV AL,byte ptr [EDX]               ; 00401ef4
    CMP EAX,0x20                        ; 00401ef6
    JGE 0x00401eff                      ; 00401ef9
        ;   XREF to: 00401eff (CONDITIONAL_JUMP)  ; LAB_00401eff
    INC EBX                             ; 00401efb
        ;   Label: LAB_00401efb
    INC EDX                             ; 00401efc
    JMP 0x00401ede                      ; 00401efd
        ;   XREF to: 00401ede (UNCONDITIONAL_JUMP)  ; LAB_00401ede
    CMP EAX,0x100                       ; 00401eff
        ;   Label: LAB_00401eff
    JGE 0x00401efb                      ; 00401f04
        ;   XREF to: 00401efb (CONDITIONAL_JUMP)  ; LAB_00401efb
    SUB EAX,0x20                        ; 00401f06
    IMUL EAX,EAX,0x91                   ; 00401f09
    MOV AL,byte ptr [EAX + 0x5a4b80]    ; 00401f0f | DAT_005a4b80
    AND EAX,0xff                        ; 00401f15
    INC EAX                             ; 00401f1a
    ADD ESI,EAX                         ; 00401f1b
    INC EBX                             ; 00401f1d
    INC EDX                             ; 00401f1e
    JMP 0x00401ede                      ; 00401f1f
        ;   XREF to: 00401ede (UNCONDITIONAL_JUMP)  ; LAB_00401ede

