; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b370(int *param_1)
;
;
; XREF[2]:
;   FUN_004e4e20 at 004e4e98
;   FUN_0051b0b0 at 0051b0c7
;
; Called Functions:
;   FUN_00519ec0
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b370
        ;   Label: FUN_0051b370
    PUSH ESI                            ; 0051b371
    PUSH EDI                            ; 0051b372
    MOV EDI,dword ptr [ESP + 0x10]      ; 0051b373
    MOV EDX,dword ptr [EDI]             ; 0051b377
    XOR ESI,ESI                         ; 0051b379
    TEST EDX,EDX                        ; 0051b37b
    JLE 0x0051b399                      ; 0051b37d
        ;   XREF to: 0051b399 (CONDITIONAL_JUMP)  ; LAB_0051b399
    MOV EBX,EDI                         ; 0051b37f
    MOV EAX,dword ptr [EBX + 0x4]       ; 0051b381
        ;   Label: LAB_0051b381
    TEST EAX,EAX                        ; 0051b384
    JNZ 0x0051b3a3                      ; 0051b386
        ;   XREF to: 0051b3a3 (CONDITIONAL_JUMP)  ; LAB_0051b3a3
    MOV dword ptr [EBX + 0x4],0x0       ; 0051b388
        ;   Label: LAB_0051b388
    INC ESI                             ; 0051b38f
    MOV ECX,dword ptr [EDI]             ; 0051b390
    ADD EBX,0x4                         ; 0051b392
    CMP ESI,ECX                         ; 0051b395
    JL 0x0051b381                       ; 0051b397
        ;   XREF to: 0051b381 (CONDITIONAL_JUMP)  ; LAB_0051b381
    MOV dword ptr [EDI],0x0             ; 0051b399
        ;   Label: LAB_0051b399
    POP EDI                             ; 0051b39f
    POP ESI                             ; 0051b3a0
    POP EBX                             ; 0051b3a1
    RET                                 ; 0051b3a2
    PUSH 0x0                            ; 0051b3a3
        ;   Label: LAB_0051b3a3
    PUSH EAX                            ; 0051b3a5
    CALL FUN_00519ec0                   ; 0051b3a6
        ;   XREF to: 00519ec0 (UNCONDITIONAL_CALL)  ; undefined FUN_00519ec0()
    ADD ESP,0x8                         ; 0051b3ab
    PUSH EAX                            ; 0051b3ae
    CALL FUN_005b7fdc                   ; 0051b3af
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0051b3b4
    JMP 0x0051b388                      ; 0051b3b7
        ;   XREF to: 0051b388 (UNCONDITIONAL_JUMP)  ; LAB_0051b388

