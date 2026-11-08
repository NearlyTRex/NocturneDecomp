; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468950(int param_1,char *param_2)
;
;
; XREF[71]:
;   FUN_0040b770 at 0040b7a1
;   FUN_0040dbc0 at 0040dbfa
;   FUN_0040ddd0 at 0040de44
;   FUN_0040e0b0 at 0040e0ea
;   FUN_0040e5d0 at 0040e60f
;   FUN_0040eeb0 at 0040eee8
;   FUN_0040f210 at 0040f2da
;   FUN_00410b50 at 00410bed
;   FUN_00414410 at 00414448
;   FUN_004149f0 at 00414a57
;   ... and 61 more
;
; Called Functions:
;   FUN_00468880
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00468950
        ;   Label: FUN_00468950
    PUSH EDI                            ; 00468951
    MOV EDX,dword ptr [ESP + 0xc]       ; 00468952
    MOV ESI,dword ptr [ESP + 0x10]      ; 00468956
    LEA EDI,[EDX + 0x78]                ; 0046895a
    PUSH EDI                            ; 0046895d
    MOV AL,byte ptr [ESI]               ; 0046895e
        ;   Label: LAB_0046895e
    MOV byte ptr [EDI],AL               ; 00468960
    CMP AL,0x0                          ; 00468962
    JZ 0x00468976                       ; 00468964
        ;   XREF to: 00468976 (CONDITIONAL_JUMP)  ; LAB_00468976
    MOV AL,byte ptr [ESI + 0x1]         ; 00468966
    ADD ESI,0x2                         ; 00468969
    MOV byte ptr [EDI + 0x1],AL         ; 0046896c
    ADD EDI,0x2                         ; 0046896f
    CMP AL,0x0                          ; 00468972
    JNZ 0x0046895e                      ; 00468974
        ;   XREF to: 0046895e (CONDITIONAL_JUMP)  ; LAB_0046895e
    POP EDI                             ; 00468976
        ;   Label: LAB_00468976
    PUSH EDX                            ; 00468977
    MOV dword ptr [EDX + 0x178],0x0     ; 00468978
    CALL FUN_00468880                   ; 00468982
        ;   XREF to: 00468880 (UNCONDITIONAL_CALL)  ; undefined FUN_00468880()
    ADD ESP,0x4                         ; 00468987
    POP EDI                             ; 0046898a
    POP ESI                             ; 0046898b
    RET                                 ; 0046898c

