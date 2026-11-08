; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055adc0(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_00522080 at 005221ba
;   FUN_00522350 at 00527180
;
; Referenced Globals:
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_0264baa8
;   undefined4 DAT_0264baa9
;   undefined4 DAT_0264baaa
;   undefined4 DAT_0264baab
;   undefined4 DAT_0264bad0
;   undefined4 DAT_0264bad4
;
; Called Functions:
;   FUN_0055ae30
;   FUN_0055af80
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0055adc0
        ;   Label: FUN_0055adc0
    PUSH EDI                            ; 0055adc1
    MOV EDX,dword ptr [0x0264bad0]      ; 0055adc2 | DAT_0264bad0
    PUSH EDX                            ; 0055adc8
    MOV ECX,dword ptr [ESP + 0x10]      ; 0055adc9
    PUSH ECX                            ; 0055adcd
    CALL FUN_0055af80                   ; 0055adce
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055af80()
    ADD ESP,0x8                         ; 0055add3
    MOV EDI,0x264baa8                   ; 0055add6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0055addb
    PUSH EDI                            ; 0055addf
    MOV AL,byte ptr [ESI]               ; 0055ade0
        ;   Label: LAB_0055ade0
    MOV byte ptr [EDI],AL               ; 0055ade2 | DAT_0264baa8 | DAT_0264baaa
    CMP AL,0x0                          ; 0055ade4
    JZ 0x0055adf8                       ; 0055ade6
        ;   XREF to: 0055adf8 (CONDITIONAL_JUMP)  ; LAB_0055adf8
    MOV AL,byte ptr [ESI + 0x1]         ; 0055ade8
    ADD ESI,0x2                         ; 0055adeb
    MOV byte ptr [EDI + 0x1],AL         ; 0055adee | DAT_0264baa9 | DAT_0264baab
    ADD EDI,0x2                         ; 0055adf1
    CMP AL,0x0                          ; 0055adf4
    JNZ 0x0055ade0                      ; 0055adf6
        ;   XREF to: 0055ade0 (CONDITIONAL_JUMP)  ; LAB_0055ade0
    POP EDI                             ; 0055adf8
        ;   Label: LAB_0055adf8
    CMP dword ptr [0x0264bad4],0x0      ; 0055adf9 | DAT_0264bad4
    JNZ 0x0055ae05                      ; 0055ae00
        ;   XREF to: 0055ae05 (CONDITIONAL_JUMP)  ; LAB_0055ae05
    POP EDI                             ; 0055ae02
    POP ESI                             ; 0055ae03
    RET                                 ; 0055ae04
    PUSH EDI                            ; 0055ae05 | DAT_0264baa8
        ;   Label: LAB_0055ae05
    MOV ESI,dword ptr [0x0061b5a8]      ; 0055ae06 | DAT_0061b5a8
    PUSH ESI                            ; 0055ae0c
    MOV EDI,dword ptr [ESP + 0x14]      ; 0055ae0d
    PUSH EDI                            ; 0055ae11
    CALL FUN_0055ae30                   ; 0055ae12
        ;   XREF to: 0055ae30 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae30()
    ADD ESP,0xc                         ; 0055ae17
    MOV [0x0264bad0],EAX                ; 0055ae1a | DAT_0264bad0
    POP EDI                             ; 0055ae1f
    POP ESI                             ; 0055ae20
    RET                                 ; 0055ae21

