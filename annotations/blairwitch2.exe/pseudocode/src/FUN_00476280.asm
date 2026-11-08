; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00476280(void)
;
;
; XREF[1]:
;   FUN_00475000 at 00475932
;
; Referenced Globals:
;   undefined4 DAT_0060b27c
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01bd3c5c
;   undefined4 DAT_01be74e4
;
; Called Functions:
;   FUN_004468c0
;   FUN_0046b2b0
;   FUN_0046b7f0
;   FUN_0055fed0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00476280
        ;   Label: FUN_00476280
    PUSH EBP                            ; 00476281
    PUSH 0xff                           ; 00476282
    PUSH 0xff                           ; 00476287
    PUSH 0xff                           ; 0047628c
    MOV EDX,dword ptr [0x0060b27c]      ; 00476291 | DAT_0060b27c
    PUSH EDX                            ; 00476297 | DAT_01ba5c50
    XOR ESI,ESI                         ; 00476298
    CALL FUN_0046b7f0                   ; 0047629a
        ;   XREF to: 0046b7f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b7f0()
    MOV ECX,dword ptr [0x01bd3c5c]      ; 0047629f | DAT_01bd3c5c
    ADD ESP,0x10                        ; 004762a5
    TEST ECX,ECX                        ; 004762a8
    JLE 0x004762ee                      ; 004762aa
        ;   XREF to: 004762ee (CONDITIONAL_JUMP)  ; LAB_004762ee
    PUSH EDI                            ; 004762ac
    PUSH EBX                            ; 004762ad
    MOV EBX,0x1be74e4                   ; 004762ae
    XOR EDI,EDI                         ; 004762b3
    PUSH EBX                            ; 004762b5 | DAT_01be74e4
        ;   Label: LAB_004762b5
    MOV EBP,dword ptr [0x0060b27c]      ; 004762b6 | DAT_0060b27c
    PUSH EBP                            ; 004762bc | DAT_01ba5c50
    CALL FUN_0046b2b0                   ; 004762bd
        ;   XREF to: 0046b2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b2b0()
    ADD ESP,0x8                         ; 004762c2
    PUSH 0x0                            ; 004762c5
    MOV EAX,dword ptr [EDI + 0x1bd3c64] ; 004762c7
    PUSH EAX                            ; 004762cd
    CALL FUN_004468c0                   ; 004762ce
        ;   XREF to: 004468c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004468c0()
    ADD ESP,0x8                         ; 004762d3
    ADD EDI,0x4                         ; 004762d6
    INC ESI                             ; 004762d9
    CALL FUN_0055fed0                   ; 004762da
        ;   XREF to: 0055fed0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055fed0()
    MOV EDX,dword ptr [0x01bd3c5c]      ; 004762df | DAT_01bd3c5c
    ADD EBX,0xc                         ; 004762e5
    CMP ESI,EDX                         ; 004762e8
    JL 0x004762b5                       ; 004762ea
        ;   XREF to: 004762b5 (CONDITIONAL_JUMP)  ; LAB_004762b5
    POP EBX                             ; 004762ec
    POP EDI                             ; 004762ed
    POP EBP                             ; 004762ee
        ;   Label: LAB_004762ee
    POP ESI                             ; 004762ef
    RET                                 ; 004762f0

