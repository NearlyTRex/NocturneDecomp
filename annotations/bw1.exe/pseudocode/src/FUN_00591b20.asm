; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00591b20(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00585b00 at 0058687a
;
; Referenced Globals:
;   undefined4 DAT_00606084
;   undefined4 DAT_01c3db94
;
; Called Functions:
;   FUN_0040c600
;   FUN_004926b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00591b20
        ;   Label: FUN_00591b20
    PUSH ESI                            ; 00591b21
    PUSH EDI                            ; 00591b22
    MOV EBX,dword ptr [ESP + 0x10]      ; 00591b23
    MOV EDX,dword ptr [EBX + 0x20004]   ; 00591b27
    TEST EDX,EDX                        ; 00591b2d
    JNZ 0x00591b35                      ; 00591b2f
        ;   XREF to: 00591b35 (CONDITIONAL_JUMP)  ; LAB_00591b35
    POP EDI                             ; 00591b31
        ;   Label: LAB_00591b31
    POP ESI                             ; 00591b32
    POP EBX                             ; 00591b33
    RET                                 ; 00591b34
    PUSH dword ptr [ESP + 0x14]         ; 00591b35
        ;   Label: LAB_00591b35
    MOV ESI,dword ptr [EDX + 0x154]     ; 00591b39
    PUSH EDX                            ; 00591b3f
    CALL dword ptr [ESI + 0xc]          ; 00591b40
    ADD ESP,0x8                         ; 00591b43
    MOV ECX,dword ptr [0x01c3db94]      ; 00591b46 | DAT_01c3db94
    PUSH ECX                            ; 00591b4c
    MOV ESI,dword ptr [EBX + 0x20004]   ; 00591b4d
    PUSH ESI                            ; 00591b53
    CALL FUN_0040c600                   ; 00591b54
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV ESI,EAX                         ; 00591b59
    ADD ESP,0x8                         ; 00591b5b
    TEST EAX,EAX                        ; 00591b5e
    JZ 0x00591b31                       ; 00591b60
        ;   XREF to: 00591b31 (CONDITIONAL_JUMP)  ; LAB_00591b31
    PUSH EAX                            ; 00591b62
    CALL FUN_004926b0                   ; 00591b63
        ;   XREF to: 004926b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004926b0()
    ADD ESP,0x4                         ; 00591b68
    TEST EAX,EAX                        ; 00591b6b
    JZ 0x00591b31                       ; 00591b6d
        ;   XREF to: 00591b31 (CONDITIONAL_JUMP)  ; LAB_00591b31
    LEA EAX,[ESI + 0x57c]               ; 00591b6f
    MOV dword ptr [EAX + 0x8],0x0       ; 00591b75
    PUSH ESI                            ; 00591b7c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00591b7d
    MOV dword ptr [EAX + 0x4],EDX       ; 00591b80
    MOV EDX,dword ptr [EAX + 0x4]       ; 00591b83
    MOV dword ptr [EAX],EDX             ; 00591b86
    MOV EAX,dword ptr [ESI + 0x154]     ; 00591b88
    CALL dword ptr [EAX + 0xe4]         ; 00591b8e
    MOV dword ptr [EBX + 0x20004],0x0   ; 00591b94
    MOV dword ptr [EBX + 0x2c98],0x0    ; 00591b9e
    FLD float ptr [0x00606084]          ; 00591ba8 | DAT_00606084
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00591bae
    ADD ESP,0x4                         ; 00591bb8
    MOV EDI,dword ptr [EBX + 0x1ff5c]   ; 00591bbb
    FSTP float ptr [EBX + 0x1ffbc]      ; 00591bc1
    CMP EDI,0x3                         ; 00591bc7
    JNZ 0x00591b31                      ; 00591bca
        ;   XREF to: 00591b31 (CONDITIONAL_JUMP)  ; LAB_00591b31
    MOV dword ptr [EBX + 0x1ff5c],0x0   ; 00591bd0
    POP EDI                             ; 00591bda
    POP ESI                             ; 00591bdb
    POP EBX                             ; 00591bdc
    RET                                 ; 00591bdd

