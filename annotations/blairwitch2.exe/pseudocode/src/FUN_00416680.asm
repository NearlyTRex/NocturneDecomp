; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00416680(int param_1,int param_2)
;
;
; Called Functions:
;   FUN_004178c0
;   FUN_005b4610
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00416680
        ;   Label: FUN_00416680
    SUB ESP,0xc                         ; 00416681
    MOV EBX,dword ptr [ESP + 0x14]      ; 00416684
    PUSH EBX                            ; 00416688
    MOV dword ptr [EBX + 0x133c],0x0    ; 00416689
    CALL FUN_004178c0                   ; 00416693
        ;   XREF to: 004178c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004178c0()
    ADD ESP,0x4                         ; 00416698
    MOV EDX,dword ptr [ESP + 0x18]      ; 0041669b
    TEST EDX,EDX                        ; 0041669f
    JNZ 0x004166b2                      ; 004166a1
        ;   XREF to: 004166b2 (CONDITIONAL_JUMP)  ; LAB_004166b2
    MOV dword ptr [EBX + 0x10d0],0x41200000 ; 004166a3
    ADD ESP,0xc                         ; 004166ad
    POP EBX                             ; 004166b0
    RET                                 ; 004166b1
    PUSH EDI                            ; 004166b2
        ;   Label: LAB_004166b2
    LEA EAX,[ESP + 0x4]                 ; 004166b3
    PUSH EAX                            ; 004166b7
    MOV EDI,0x4116cbe4                  ; 004166b8
    XOR ECX,ECX                         ; 004166bd
    PUSH EDX                            ; 004166bf
    LEA EAX,[EBX + 0x10e0]              ; 004166c0
    MOV dword ptr [ESP + 0x14],ECX      ; 004166c6
    PUSH EAX                            ; 004166ca
    MOV dword ptr [ESP + 0x14],ECX      ; 004166cb
    MOV dword ptr [ESP + 0x10],EDI      ; 004166cf
    CALL FUN_005b4610                   ; 004166d3
        ;   XREF to: 005b4610 (UNCONDITIONAL_CALL)  ; undefined FUN_005b4610()
    ADD ESP,0xc                         ; 004166d8
    POP EDI                             ; 004166db
    MOV dword ptr [EBX + 0x10d0],0x41200000 ; 004166dc
    ADD ESP,0xc                         ; 004166e6
    POP EBX                             ; 004166e9
    RET                                 ; 004166ea

