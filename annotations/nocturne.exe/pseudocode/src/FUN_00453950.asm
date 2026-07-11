; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00453950(int param_1)
;
;
; XREF[2]:
;   FUN_00435240 at 00435319
;   FUN_004543b0 at 00454443
;
; Referenced Globals:
;   undefined4 DAT_005ae704
;   undefined4 DAT_01b4d738
;
; Called Functions:
;   FUN_00461eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00453950
        ;   Label: FUN_00453950
    PUSH EDI                            ; 00453951
    PUSH EBP                            ; 00453952
    MOV EDI,dword ptr [ESP + 0x10]      ; 00453953
    MOV EDX,dword ptr [EDI + 0x120]     ; 00453957
    XOR EBX,EBX                         ; 0045395d
    TEST EDX,EDX                        ; 0045395f
    JLE 0x00453989                      ; 00453961
        ;   XREF to: 00453989 (CONDITIONAL_JUMP)  ; LAB_00453989
    PUSH ESI                            ; 00453963
    LEA ESI,[EDI + 0x124]               ; 00453964
    PUSH ESI                            ; 0045396a
        ;   Label: LAB_0045396a
    MOV ECX,dword ptr [0x005ae704]      ; 0045396b | DAT_005ae704
    PUSH ECX                            ; 00453971 | DAT_01b4d738
    INC EBX                             ; 00453972
    CALL FUN_00461eb0                   ; 00453973
        ;   XREF to: 00461eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00461eb0()
    ADD ESI,0x48                        ; 00453978
    MOV EBP,dword ptr [EDI + 0x120]     ; 0045397b
    ADD ESP,0x8                         ; 00453981
    CMP EBX,EBP                         ; 00453984
    JL 0x0045396a                       ; 00453986
        ;   XREF to: 0045396a (CONDITIONAL_JUMP)  ; LAB_0045396a
    POP ESI                             ; 00453988
    POP EBP                             ; 00453989
        ;   Label: LAB_00453989
    POP EDI                             ; 0045398a
    POP EBX                             ; 0045398b
    RET                                 ; 0045398c

