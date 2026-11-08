; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 FUN_0040b050(int param_1)
;
;
; XREF[7]:
;   FUN_0040b0a0 at 0040b12e
;   FUN_0040bb60 at 0040bc03
;   FUN_0040bc50 at 0040bdd3
;   FUN_0040bee0 at 0040bf83
;   FUN_0040bfd0 at 0040c0e2
;   FUN_0040c170 at 0040c291
;   FUN_004dc2c0 at 004dc2e9
;
; Referenced Globals:
;   undefined4 DAT_0060958e
;   undefined1 DAT_0060958f
;   undefined1 DAT_00609590
;   undefined1 DAT_00609591
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0040b050
        ;   Label: FUN_0040b050
    MOV EDI,0x609590                    ; 0040b051 | DAT_00609590
    SUB ECX,ECX                         ; 0040b056
    DEC ECX                             ; 0040b058
    XOR EAX,EAX                         ; 0040b059
    SCASB.REPNE ES:EDI                  ; 0040b05b | DAT_00609590 | DAT_00609591
    NOT ECX                             ; 0040b05d
    DEC ECX                             ; 0040b05f
    MOV EAX,dword ptr [ESP + 0x8]       ; 0040b060
    ADD EAX,ECX                         ; 0040b064
    TEST EAX,EAX                        ; 0040b066
    JL 0x0040b092                       ; 0040b068
        ;   XREF to: 0040b092 (CONDITIONAL_JUMP)  ; LAB_0040b092
    XOR DL,DL                           ; 0040b06a
        ;   Label: LAB_0040b06a
    MOV byte ptr [EAX + 0x609590],DL    ; 0040b06c | DAT_00609590 | DAT_00609591
    TEST EAX,EAX                        ; 0040b072
    JLE 0x0040b090                      ; 0040b074
        ;   XREF to: 0040b090 (CONDITIONAL_JUMP)  ; LAB_0040b090
    MOV DH,0x9                          ; 0040b076
    DEC EAX                             ; 0040b078
        ;   Label: LAB_0040b078
    MOV byte ptr [EAX + 0x609590],DH    ; 0040b079 | DAT_0060958e | DAT_0060958f | DAT_00609590
    TEST EAX,EAX                        ; 0040b07f
    JG 0x0040b078                       ; 0040b081
        ;   XREF to: 0040b078 (CONDITIONAL_JUMP)  ; LAB_0040b078
    LEA EAX,[EAX]                       ; 0040b083
    LEA EDX,[EDX]                       ; 0040b089
    NOP                                 ; 0040b08f
    POP EDI                             ; 0040b090
        ;   Label: LAB_0040b090
    RET                                 ; 0040b091
    XOR EAX,EAX                         ; 0040b092
        ;   Label: LAB_0040b092
    JMP 0x0040b06a                      ; 0040b094
        ;   XREF to: 0040b06a (UNCONDITIONAL_JUMP)  ; LAB_0040b06a

