; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00568528(int param_1)
;
;
; XREF[3]:
;   FUN_00567a5c at 00567b6b
;   FUN_00567d88 at 00567df5
;   FUN_0056808c at 00568126
;
; Called Functions:
;   FUN_00567540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568528
        ;   Label: FUN_00568528
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568529
    MOV EAX,dword ptr [EBX + 0xc]       ; 0056852d
    LEA EDX,[EAX + -0x1]                ; 00568530
    MOV dword ptr [EBX + 0xc],EDX       ; 00568533
    TEST EAX,EAX                        ; 00568536
    JZ 0x0056854b                       ; 00568538
        ;   XREF to: 0056854b (CONDITIONAL_JUMP)  ; LAB_0056854b
    PUSH EBX                            ; 0056853a
    CALL FUN_00567540                   ; 0056853b
        ;   XREF to: 00567540 (UNCONDITIONAL_CALL)  ; undefined FUN_00567540()
    MOV DL,byte ptr [EBX + 0x10]        ; 00568540
    ADD ESP,0x4                         ; 00568543
    TEST DL,0x2                         ; 00568546
    JZ 0x00568550                       ; 00568549
        ;   XREF to: 00568550 (CONDITIONAL_JUMP)  ; LAB_00568550
    MOV EAX,0xffffffff                  ; 0056854b
        ;   Label: LAB_0056854b
    POP EBX                             ; 00568550
        ;   Label: LAB_00568550
    RET                                 ; 00568551

