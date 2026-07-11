; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004b0430(void)
;
;
; XREF[1]:
;   FUN_004b0480 at 004b048f
;
; Referenced Globals:
;   undefined4 DAT_01c9e034
;   undefined4 DAT_01c9e038
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [0x01c9e034]      ; 004b0430 | DAT_01c9e034
        ;   Label: FUN_004b0430
    LEA EAX,[ECX*0x4 + 0x0]             ; 004b0436
    ADD EAX,ECX                         ; 004b043d
    SHL EAX,0x3                         ; 004b043f
    INC ECX                             ; 004b0442
    ADD EAX,0x1c9e03c                   ; 004b0443
    CMP ECX,0x20                        ; 004b0448
    JL 0x004b044f                       ; 004b044b
        ;   XREF to: 004b044f (CONDITIONAL_JUMP)  ; LAB_004b044f
    XOR ECX,ECX                         ; 004b044d
    MOV EDX,dword ptr [0x01c9e038]      ; 004b044f | DAT_01c9e038
        ;   Label: LAB_004b044f
    CMP EDX,0x20                        ; 004b0455
    JL 0x004b0461                       ; 004b0458
        ;   XREF to: 004b0461 (CONDITIONAL_JUMP)  ; LAB_004b0461
    MOV dword ptr [0x01c9e034],ECX      ; 004b045a | DAT_01c9e034
    RET                                 ; 004b0460
    PUSH EBX                            ; 004b0461
        ;   Label: LAB_004b0461
    LEA EBX,[EDX + 0x1]                 ; 004b0462
    MOV dword ptr [0x01c9e038],EBX      ; 004b0465 | DAT_01c9e038
    POP EBX                             ; 004b046b
    MOV dword ptr [0x01c9e034],ECX      ; 004b046c | DAT_01c9e034
    RET                                 ; 004b0472

