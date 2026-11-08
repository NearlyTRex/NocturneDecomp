; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00546ed0(int param_1,undefined4 *param_2)
;
;
; Called Functions:
;   FUN_0054dcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546ed0
        ;   Label: FUN_00546ed0
    PUSH ESI                            ; 00546ed1
    PUSH EDI                            ; 00546ed2
    SUB ESP,0x18                        ; 00546ed3
    MOV EAX,dword ptr [ESP + 0x28]      ; 00546ed6
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00546eda
    MOV EDX,dword ptr [EAX + 0xd054]    ; 00546ede
    PUSH EDX                            ; 00546ee4
    ADD EAX,0x158                       ; 00546ee5
    PUSH EAX                            ; 00546eea
    LEA ESI,[ESP + 0x8]                 ; 00546eeb
    LEA EDI,[ESP + 0x14]                ; 00546eef
    CALL FUN_0054dcc0                   ; 00546ef3
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dcc0()
    LEA ESI,[ESP + 0x8]                 ; 00546ef8
    ADD ESP,0x8                         ; 00546efc
    LEA EAX,[ESP + 0xc]                 ; 00546eff
    MOVSD ES:EDI,ESI                    ; 00546f03
    MOVSD ES:EDI,ESI                    ; 00546f04
    MOVSD ES:EDI,ESI                    ; 00546f05
    CMP EBX,EAX                         ; 00546f06
    JNZ 0x00546f16                      ; 00546f08
        ;   XREF to: 00546f16 (CONDITIONAL_JUMP)  ; LAB_00546f16
    MOV EAX,0x1                         ; 00546f0a
    ADD ESP,0x18                        ; 00546f0f
    POP EDI                             ; 00546f12
    POP ESI                             ; 00546f13
    POP EBX                             ; 00546f14
    RET                                 ; 00546f15
    MOV EAX,dword ptr [ESP + 0xc]       ; 00546f16
        ;   Label: LAB_00546f16
    MOV dword ptr [EBX],EAX             ; 00546f1a
    MOV EAX,dword ptr [ESP + 0x10]      ; 00546f1c
    MOV dword ptr [EBX + 0x4],EAX       ; 00546f20
    MOV EAX,dword ptr [ESP + 0x14]      ; 00546f23
    MOV dword ptr [EBX + 0x8],EAX       ; 00546f27
    MOV EAX,0x1                         ; 00546f2a
    ADD ESP,0x18                        ; 00546f2f
    POP EDI                             ; 00546f32
    POP ESI                             ; 00546f33
    POP EBX                             ; 00546f34
    RET                                 ; 00546f35

