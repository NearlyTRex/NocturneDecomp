; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c5bc0(byte *param_1,byte *param_2)
;
;
; XREF[2]:
;   FUN_005c46f0 at 005c46ff
;   FUN_005c5c00 at 005c5c4a
;
; Referenced Globals:
;   undefined4 DAT_026807f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5bc0
        ;   Label: FUN_005c5bc0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c5bc1
    MOV EAX,dword ptr [ESP + 0xc]       ; 005c5bc5
    CMP dword ptr [0x026807f0],0x0      ; 005c5bc9 | DAT_026807f0
    JZ 0x005c5bf3                       ; 005c5bd0
        ;   XREF to: 005c5bf3 (CONDITIONAL_JUMP)  ; LAB_005c5bf3
    XOR EDX,EDX                         ; 005c5bd2
    MOV DL,byte ptr [EAX]               ; 005c5bd4
    MOV DL,byte ptr [EDX + 0x2680801]   ; 005c5bd6
    AND DL,0x1                          ; 005c5bdc
    AND EDX,0xff                        ; 005c5bdf
    JZ 0x005c5bf3                       ; 005c5be5
        ;   XREF to: 005c5bf3 (CONDITIONAL_JUMP)  ; LAB_005c5bf3
    MOV DL,byte ptr [EAX]               ; 005c5be7
    MOV byte ptr [EBX],DL               ; 005c5be9
    MOV AL,byte ptr [EAX + 0x1]         ; 005c5beb
    MOV byte ptr [EBX + 0x1],AL         ; 005c5bee
    POP EBX                             ; 005c5bf1
    RET                                 ; 005c5bf2
    MOV AL,byte ptr [EAX]               ; 005c5bf3
        ;   Label: LAB_005c5bf3
    MOV byte ptr [EBX],AL               ; 005c5bf5
    POP EBX                             ; 005c5bf7
    RET                                 ; 005c5bf8

