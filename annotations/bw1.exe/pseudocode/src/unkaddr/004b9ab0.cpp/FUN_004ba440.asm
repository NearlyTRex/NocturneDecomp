; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004b9ab0_cpp_FUN_004ba440(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cc4470
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ba440
        ;   Label: unkaddr_004b9ab0.cpp_FUN_004ba440
    PUSH ESI                            ; 004ba441
    MOV ESI,dword ptr [0x01cc4470]      ; 004ba442 | DAT_01cc4470
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ba448
    XOR ECX,ECX                         ; 004ba44c
    TEST ESI,ESI                        ; 004ba44e
    JLE 0x004ba475                      ; 004ba450
        ;   XREF to: 004ba475 (CONDITIONAL_JUMP)  ; LAB_004ba475
    MOV EAX,0x1cc4474                   ; 004ba452
    MOV EDX,dword ptr [EAX + 0x140]     ; 004ba457
        ;   Label: LAB_004ba457
    CMP EBX,EDX                         ; 004ba45d
    JL 0x004ba46b                       ; 004ba45f
        ;   XREF to: 004ba46b (CONDITIONAL_JUMP)  ; LAB_004ba46b
    ADD EDX,dword ptr [EAX + 0x144]     ; 004ba461
    CMP EDX,EBX                         ; 004ba467
    JG 0x004ba483                       ; 004ba469
        ;   XREF to: 004ba483 (CONDITIONAL_JUMP)  ; LAB_004ba483
    INC ECX                             ; 004ba46b
        ;   Label: LAB_004ba46b
    ADD EAX,0x2e4                       ; 004ba46c
    CMP ECX,ESI                         ; 004ba471
    JL 0x004ba457                       ; 004ba473
        ;   XREF to: 004ba457 (CONDITIONAL_JUMP)  ; LAB_004ba457
    MOV EAX,0xffffffff                  ; 004ba475
        ;   Label: LAB_004ba475
    MOV dword ptr [0x01cc4470],ESI      ; 004ba47a | DAT_01cc4470
    POP ESI                             ; 004ba480
    POP EBX                             ; 004ba481
    RET                                 ; 004ba482
    MOV EAX,ECX                         ; 004ba483
        ;   Label: LAB_004ba483
    MOV dword ptr [0x01cc4470],ESI      ; 004ba485 | DAT_01cc4470
    POP ESI                             ; 004ba48b
    POP EBX                             ; 004ba48c
    RET                                 ; 004ba48d

