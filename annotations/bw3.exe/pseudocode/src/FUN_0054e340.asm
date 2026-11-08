; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054e340(int param_1,float param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0042f310 at 0042f40b
;
; Called Functions:
;   FUN_005481d0
;   FUN_0054eac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e340
        ;   Label: FUN_0054e340
    PUSH ESI                            ; 0054e341
    PUSH EDI                            ; 0054e342
    PUSH EBP                            ; 0054e343
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054e344
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0054e348
    PUSH ESI                            ; 0054e34c
    CALL FUN_0054eac0                   ; 0054e34d
        ;   XREF to: 0054eac0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054eac0()
    XOR EBX,EBX                         ; 0054e352
    ADD ESP,0x4                         ; 0054e354
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0054e357
    MOV EDI,EAX                         ; 0054e35d
    TEST EDX,EDX                        ; 0054e35f
    JLE 0x0054e390                      ; 0054e361
        ;   XREF to: 0054e390 (CONDITIONAL_JUMP)  ; LAB_0054e390
    PUSH EBP                            ; 0054e363
        ;   Label: LAB_0054e363
    PUSH EBX                            ; 0054e364
    PUSH EDI                            ; 0054e365
    CALL FUN_005481d0                   ; 0054e366
        ;   XREF to: 005481d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005481d0()
    ADD ESP,0xc                         ; 0054e36b
    TEST EAX,EAX                        ; 0054e36e
    JL 0x0054e382                       ; 0054e370
        ;   XREF to: 0054e382 (CONDITIONAL_JUMP)  ; LAB_0054e382
    FLD float ptr [ESI + 0xcf0]         ; 0054e372
    FMUL float ptr [ESP + 0x18]         ; 0054e378
    FSTP float ptr [ESI + 0xcf0]        ; 0054e37c
    INC EBX                             ; 0054e382
        ;   Label: LAB_0054e382
    MOV ECX,dword ptr [EDI + 0x1de78]   ; 0054e383
    ADD ESI,0x4                         ; 0054e389
    CMP EBX,ECX                         ; 0054e38c
    JL 0x0054e363                       ; 0054e38e
        ;   XREF to: 0054e363 (CONDITIONAL_JUMP)  ; LAB_0054e363
    POP EBP                             ; 0054e390
        ;   Label: LAB_0054e390
    POP EDI                             ; 0054e391
    POP ESI                             ; 0054e392
    POP EBX                             ; 0054e393
    RET                                 ; 0054e394

