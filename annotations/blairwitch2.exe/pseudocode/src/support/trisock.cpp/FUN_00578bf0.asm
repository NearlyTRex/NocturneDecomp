; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578bf0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_004bd3a0 at 004bd3e6
;
; Referenced Globals:
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;   FUN_00578cf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578bf0
        ;   Label: FUN_00578bf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00578bf1
    MOV EDX,dword ptr [ESP + 0xc]       ; 00578bf5
    PUSH EDX                            ; 00578bf9
    PUSH EBX                            ; 00578bfa
    CALL FUN_00578cf0                   ; 00578bfb
        ;   XREF to: 00578cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00578cf0()
    ADD ESP,0x8                         ; 00578c00
    TEST EAX,EAX                        ; 00578c03
    JZ 0x00578c0b                       ; 00578c05
        ;   XREF to: 00578c0b (CONDITIONAL_JUMP)  ; LAB_00578c0b
    MOV EAX,EBX                         ; 00578c07
    POP EBX                             ; 00578c09
    RET                                 ; 00578c0a
    PUSH EDI                            ; 00578c0b
        ;   Label: LAB_00578c0b
    PUSH ESI                            ; 00578c0c
    MOV EDI,dword ptr [ESP + 0x14]      ; 00578c0d
    PUSH EDI                            ; 00578c11
    MOV ECX,0x5ecf8a                    ; 00578c12
    MOV ESI,0x55                        ; 00578c17
    PUSH 0x5ecfa1                       ; 00578c1c
    MOV dword ptr [0x01d046a0],ECX      ; 00578c21 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ESI      ; 00578c27 | DAT_01d046a4
    CALL FUN_004e4500                   ; 00578c2d
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x8                         ; 00578c32
    POP ESI                             ; 00578c35
    POP EDI                             ; 00578c36
    MOV EAX,EBX                         ; 00578c37
    POP EBX                             ; 00578c39
    RET                                 ; 00578c3a

