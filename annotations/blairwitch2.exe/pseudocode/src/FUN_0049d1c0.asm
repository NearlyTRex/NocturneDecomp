; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d1c0(void)
;
;
; XREF[1]:
;   FUN_004bb050 at 004bb067
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_006150f4
;   undefined4 DAT_0061510c
;   undefined4 DAT_00615124
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_0046ca00
;   FUN_00494130
;   FUN_00495900
;   FUN_00496610
;   FUN_00496c40
;   FUN_00498c90
;   FUN_004995e0
;   FUN_0049a150
;   FUN_0049aab0
;   FUN_0059d5f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049d1c0
        ;   Label: FUN_0049d1c0
    PUSH 0x6150f4                       ; 0049d1c1 | DAT_006150f4
    MOV EDX,dword ptr [0x0060b280]      ; 0049d1c6 | DAT_0060b280
    PUSH EDX                            ; 0049d1cc | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0049d1cd
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0049d1d2
    PUSH 0x61510c                       ; 0049d1d5 | DAT_0061510c
    MOV ECX,dword ptr [0x0060b280]      ; 0049d1da | DAT_0060b280
    PUSH ECX                            ; 0049d1e0 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0049d1e1
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0049d1e6
    PUSH 0x615124                       ; 0049d1e9 | DAT_00615124
    MOV EBX,dword ptr [0x0060b280]      ; 0049d1ee | DAT_0060b280
    PUSH EBX                            ; 0049d1f4 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0049d1f5
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD ESP,0x8                         ; 0049d1fa
    CALL FUN_00494130                   ; 0049d1fd
        ;   XREF to: 00494130 (UNCONDITIONAL_CALL)  ; undefined FUN_00494130()
    CALL FUN_00495900                   ; 0049d202
        ;   XREF to: 00495900 (UNCONDITIONAL_CALL)  ; undefined FUN_00495900()
    CALL FUN_00496610                   ; 0049d207
        ;   XREF to: 00496610 (UNCONDITIONAL_CALL)  ; undefined FUN_00496610()
    CALL FUN_004995e0                   ; 0049d20c
        ;   XREF to: 004995e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004995e0()
    CALL FUN_0049a150                   ; 0049d211
        ;   XREF to: 0049a150 (UNCONDITIONAL_CALL)  ; undefined FUN_0049a150()
    CALL FUN_00496c40                   ; 0049d216
        ;   XREF to: 00496c40 (UNCONDITIONAL_CALL)  ; undefined FUN_00496c40()
    CALL FUN_0049aab0                   ; 0049d21b
        ;   XREF to: 0049aab0 (UNCONDITIONAL_CALL)  ; undefined FUN_0049aab0()
    CALL FUN_00498c90                   ; 0049d220
        ;   XREF to: 00498c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00498c90()
    CALL FUN_0059d5f0                   ; 0049d225
        ;   XREF to: 0059d5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d5f0()
    POP EBX                             ; 0049d22a
    RET                                 ; 0049d22b

