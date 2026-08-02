; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0056e324(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_0056e7fc at 0056e836
;
; Referenced Globals:
;   undefined4 DAT_02de5c14
;   undefined4 DAT_02de5c18
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e324
        ;   Label: crt_unknown.c_FUN_0056e324
    PUSH ESI                            ; 0056e325
    PUSH EDI                            ; 0056e326
    PUSH EBP                            ; 0056e327
    MOV EDX,dword ptr [0x02de5c14]      ; 0056e328 | DAT_02de5c14
    XOR ESI,ESI                         ; 0056e32e
    TEST EDX,EDX                        ; 0056e330
    JLE 0x0056e365                      ; 0056e332
        ;   XREF to: 0056e365 (CONDITIONAL_JUMP)  ; LAB_0056e365
    XOR EBX,EBX                         ; 0056e334
    MOV EAX,[0x02de5c18]                ; 0056e336 | DAT_02de5c18
        ;   Label: LAB_0056e336
    MOV ECX,dword ptr [EBX + EAX*0x1]   ; 0056e33b
    PUSH ECX                            ; 0056e33e
    CALL dword ptr CS:[0x5754a4]        ; 0056e33f
    MOV EAX,[0x02de5c18]                ; 0056e346 | DAT_02de5c18
    MOV EDI,dword ptr [EBX + EAX*0x1]   ; 0056e34b
    PUSH EDI                            ; 0056e34e
    ADD EBX,0x4                         ; 0056e34f
    INC ESI                             ; 0056e352
    CALL crt_unknown.c_FUN_005638d0     ; 0056e353
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    MOV EBP,dword ptr [0x02de5c14]      ; 0056e358 | DAT_02de5c14
    ADD ESP,0x4                         ; 0056e35e
    CMP ESI,EBP                         ; 0056e361
    JL 0x0056e336                       ; 0056e363
        ;   XREF to: 0056e336 (CONDITIONAL_JUMP)  ; LAB_0056e336
    MOV EAX,[0x02de5c18]                ; 0056e365 | DAT_02de5c18
        ;   Label: LAB_0056e365
    TEST EAX,EAX                        ; 0056e36a
    JZ 0x0056e377                       ; 0056e36c
        ;   XREF to: 0056e377 (CONDITIONAL_JUMP)  ; LAB_0056e377
    PUSH EAX                            ; 0056e36e
    CALL crt_unknown.c_FUN_005638d0     ; 0056e36f
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 0056e374
    POP EBP                             ; 0056e377
        ;   Label: LAB_0056e377
    POP EDI                             ; 0056e378
    POP ESI                             ; 0056e379
    POP EBX                             ; 0056e37a
    RET                                 ; 0056e37b

