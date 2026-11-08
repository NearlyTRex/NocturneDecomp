; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040c330(int param_1)
;
; Local Variables:
; undefined        Stack[-0x8]:1  local_8
;
; XREF[50]:
;   FUN_0040e1b0 at 0040e1b6
;   FUN_0040e860 at 0040e866
;   FUN_0040ecc0 at 0040ecc6
;   FUN_0040f4d0 at 0040f4d6
;   FUN_00410dc0 at 00410dc6
;   FUN_00411110 at 00411116
;   FUN_004148b0 at 004148b6
;   FUN_00415f50 at 00415f5c
;   FUN_0041c7f0 at 0041c800
;   FUN_00422c30 at 00422c3c
;   ... and 40 more
;
; Referenced Globals:
;   TerminatedCString s_location_005cadca
;   TerminatedCString s_orient_005cadd3
;   undefined4 DAT_005cadda
;   TerminatedCString s_wasCreated_005cadde
;   TerminatedCString s_createProb_005cade9
;   TerminatedCString s_createEvent_005cadf4
;   undefined4 DAT_00609588
;
; Called Functions:
;   FUN_0040b550
;   FUN_0040b5f0
;   FUN_0040b730
;   FUN_0040b8e0
;   FUN_0040b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c330
        ;   Label: FUN_0040c330
    SUB ESP,0x4                         ; 0040c331
    MOV EBX,dword ptr [ESP + 0xc]       ; 0040c334
    PUSH 0x5cadca                       ; 0040c338 | = "location"
    LEA EAX,[EBX + 0x20]                ; 0040c33d
    PUSH EAX                            ; 0040c340
    CALL FUN_0040b5f0                   ; 0040c341
        ;   XREF to: 0040b5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b5f0()
    ADD ESP,0x8                         ; 0040c346
    PUSH 0x5cadd3                       ; 0040c349 | = "orient"
    LEA EAX,[EBX + 0x30]                ; 0040c34e
    PUSH EAX                            ; 0040c351
    CALL FUN_0040b550                   ; 0040c352
        ;   XREF to: 0040b550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b550()
    MOV EDX,dword ptr [0x00609588]      ; 0040c357 | DAT_00609588
    ADD ESP,0x8                         ; 0040c35d
    CMP EDX,0x7                         ; 0040c360
    JL 0x0040c373                       ; 0040c363
        ;   XREF to: 0040c373 (CONDITIONAL_JUMP)  ; LAB_0040c373
    CMP dword ptr [0x00609588],0x6      ; 0040c365 | DAT_00609588
    JGE 0x0040c393                      ; 0040c36c
        ;   XREF to: 0040c393 (CONDITIONAL_JUMP)  ; LAB_0040c393
    ADD ESP,0x4                         ; 0040c36e
    POP EBX                             ; 0040c371
    RET                                 ; 0040c372
    PUSH 0x5cadda                       ; 0040c373 | DAT_005cadda
        ;   Label: LAB_0040c373
    LEA EAX,[ESP + 0x4]                 ; 0040c378
    PUSH EAX                            ; 0040c37c
    CALL FUN_0040b8e0                   ; 0040c37d
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040c382
    CMP dword ptr [0x00609588],0x6      ; 0040c385 | DAT_00609588
    JGE 0x0040c393                      ; 0040c38c
        ;   XREF to: 0040c393 (CONDITIONAL_JUMP)  ; LAB_0040c393
    ADD ESP,0x4                         ; 0040c38e
    POP EBX                             ; 0040c391
    RET                                 ; 0040c392
    PUSH 0x5cadde                       ; 0040c393 | = "wasCreated"
        ;   Label: LAB_0040c393
    LEA EAX,[EBX + 0x70]                ; 0040c398
    PUSH EAX                            ; 0040c39b
    CALL FUN_0040b960                   ; 0040c39c
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b960()
    ADD ESP,0x8                         ; 0040c3a1
    PUSH 0x5cade9                       ; 0040c3a4 | = "createProb"
    LEA EAX,[EBX + 0x74]                ; 0040c3a9
    PUSH EAX                            ; 0040c3ac
    CALL FUN_0040b8e0                   ; 0040c3ad
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b8e0()
    ADD ESP,0x8                         ; 0040c3b2
    PUSH 0x5cadf4                       ; 0040c3b5 | = "createEvent"
    ADD EBX,0x78                        ; 0040c3ba
    PUSH EBX                            ; 0040c3bd
    CALL FUN_0040b730                   ; 0040c3be
        ;   XREF to: 0040b730 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b730()
    ADD ESP,0x8                         ; 0040c3c3
    ADD ESP,0x4                         ; 0040c3c6
    POP EBX                             ; 0040c3c9
    RET                                 ; 0040c3ca

