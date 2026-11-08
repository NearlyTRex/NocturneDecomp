; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00449350(int param_1,int *param_2)
;
;
; XREF[1]:
;   FUN_00449430 at 004496bd
;
; Referenced Globals:
;   undefined4 DAT_005fba18
;   undefined4 DAT_005fba1c
;   undefined4 DAT_01c60dac
;   undefined4 DAT_01c6cee8
;
; Called Functions:
;   FUN_00471271
;   FUN_00566370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449350
        ;   Label: FUN_00449350
    PUSH ESI                            ; 00449351
    PUSH EDI                            ; 00449352
    PUSH EBP                            ; 00449353
    MOV ESI,dword ptr [ESP + 0x18]      ; 00449354
    MOV EDX,dword ptr [ESP + 0x14]      ; 00449358
    MOV EAX,dword ptr [ESI + 0x4]       ; 0044935c
    CMP EAX,dword ptr [EDX + 0x11d4]    ; 0044935f
    JLE 0x00449400                      ; 00449365
        ;   XREF to: 00449400 (CONDITIONAL_JUMP)  ; LAB_00449400
    MOV EBX,dword ptr [EDX + 0x11d8]    ; 0044936b
    CMP EBX,dword ptr [ESI + 0xc]       ; 00449371
    JGE 0x00449400                      ; 00449374
        ;   XREF to: 00449400 (CONDITIONAL_JUMP)  ; LAB_00449400
    MOV EDI,dword ptr [EDX + 0x11dc]    ; 0044937a
    CMP EDI,dword ptr [ESI]             ; 00449380
    JLE 0x00449400                      ; 00449382
        ;   XREF to: 00449400 (CONDITIONAL_JUMP)  ; LAB_00449400
    MOV EBP,dword ptr [EDX + 0x11e0]    ; 00449388
    CMP EBP,dword ptr [ESI + 0x8]       ; 0044938e
    JLE 0x00449400                      ; 00449391
        ;   XREF to: 00449400 (CONDITIONAL_JUMP)  ; LAB_00449400
    CMP dword ptr [0x01c6cee8],0x0      ; 00449397 | DAT_01c6cee8
    JNZ 0x00449405                      ; 0044939e
        ;   XREF to: 00449405 (CONDITIONAL_JUMP)  ; LAB_00449405
    MOV EDX,dword ptr [ESI + 0xc]       ; 004493a0
    MOV EDI,dword ptr [ESI + 0x8]       ; 004493a3
    CMP EDI,EDX                         ; 004493a6
    JG 0x00449400                       ; 004493a8
        ;   XREF to: 00449400 (CONDITIONAL_JUMP)  ; LAB_00449400
    LEA EBP,[EDI*0x4 + 0x0]             ; 004493aa
    MOV ECX,dword ptr [ESI]             ; 004493b1
        ;   Label: LAB_004493b1
    MOV EAX,dword ptr [EBP + 0x1c60dac] ; 004493b3 | DAT_01c60dac
    SHL ECX,0x2                         ; 004493b9
    ADD ECX,EAX                         ; 004493bc
    MOV EAX,dword ptr [ESP + 0x14]      ; 004493be
    MOV EAX,dword ptr [EAX + 0x144]     ; 004493c2
    IMUL EAX,EDI                        ; 004493c8
    MOV EBX,dword ptr [ESI]             ; 004493cb
    MOV EDX,dword ptr [ESP + 0x14]      ; 004493cd
    ADD EAX,EBX                         ; 004493d1
    MOV EDX,dword ptr [EDX + 0x15c]     ; 004493d3
    SHL EAX,0x2                         ; 004493d9
    ADD EDX,EAX                         ; 004493dc
    MOV EAX,dword ptr [ESI + 0x4]       ; 004493de
    SUB EAX,EBX                         ; 004493e1
    SHL EAX,0x2                         ; 004493e3
    ADD EAX,0x4                         ; 004493e6
    PUSH EAX                            ; 004493e9
    PUSH EDX                            ; 004493ea
    PUSH ECX                            ; 004493eb
    ADD EBP,0x4                         ; 004493ec
    INC EDI                             ; 004493ef
    CALL FUN_00471271                   ; 004493f0
        ;   XREF to: 00471271 (UNCONDITIONAL_CALL)  ; undefined FUN_00471271()
    MOV EAX,dword ptr [ESI + 0xc]       ; 004493f5
    ADD ESP,0xc                         ; 004493f8
    CMP EDI,EAX                         ; 004493fb
    JLE 0x004493b1                      ; 004493fd
        ;   XREF to: 004493b1 (CONDITIONAL_JUMP)  ; LAB_004493b1
    NOP                                 ; 004493ff
    POP EBP                             ; 00449400
        ;   Label: LAB_00449400
    POP EDI                             ; 00449401
    POP ESI                             ; 00449402
    POP EBX                             ; 00449403
    RET                                 ; 00449404
    MOV EAX,[0x005fba1c]                ; 00449405 | DAT_005fba1c
        ;   Label: LAB_00449405
    DEC EAX                             ; 0044940a
    PUSH EAX                            ; 0044940b
    MOV EAX,[0x005fba18]                ; 0044940c | DAT_005fba18
    DEC EAX                             ; 00449411
    PUSH EAX                            ; 00449412
    PUSH 0x0                            ; 00449413
    PUSH 0x0                            ; 00449415
    PUSH 0x0                            ; 00449417
    CALL FUN_00566370                   ; 00449419
        ;   XREF to: 00566370 (UNCONDITIONAL_CALL)  ; undefined FUN_00566370()
    ADD ESP,0x14                        ; 0044941e
    POP EBP                             ; 00449421
    POP EDI                             ; 00449422
    POP ESI                             ; 00449423
    POP EBX                             ; 00449424
    RET                                 ; 00449425

