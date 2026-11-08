; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00578d60(undefined1 *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; XREF[3]:
;   FUN_00578c40 at 00578c5d
;   FUN_00578cf0 at 00578d42
;   FUN_00579550 at 005796d2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00578d60
        ;   Label: FUN_00578d60
    PUSH ESI                            ; 00578d61
    MOV EAX,dword ptr [ESP + 0xc]       ; 00578d62
    MOV EBX,dword ptr [ESP + 0x14]      ; 00578d66
    MOV ECX,dword ptr [ESP + 0x18]      ; 00578d6a
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00578d6e
    MOV ESI,dword ptr [ESP + 0x10]      ; 00578d72
    TEST ESI,ESI                        ; 00578d76
    JL 0x00578da6                       ; 00578d78
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    CMP ESI,0xff                        ; 00578d7a
    JG 0x00578da6                       ; 00578d80
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    TEST EBX,EBX                        ; 00578d82
    JL 0x00578da6                       ; 00578d84
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    CMP EBX,0xff                        ; 00578d86
    JG 0x00578da6                       ; 00578d8c
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    TEST ECX,ECX                        ; 00578d8e
    JL 0x00578da6                       ; 00578d90
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    CMP ECX,0xff                        ; 00578d92
    JG 0x00578da6                       ; 00578d98
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    TEST EDX,EDX                        ; 00578d9a
    JL 0x00578da6                       ; 00578d9c
        ;   XREF to: 00578da6 (CONDITIONAL_JUMP)  ; LAB_00578da6
    CMP EDX,0xff                        ; 00578d9e
    JLE 0x00578dab                      ; 00578da4
        ;   XREF to: 00578dab (CONDITIONAL_JUMP)  ; LAB_00578dab
    XOR EAX,EAX                         ; 00578da6
        ;   Label: LAB_00578da6
    POP ESI                             ; 00578da8
    POP EBX                             ; 00578da9
    RET                                 ; 00578daa
    MOV byte ptr [EAX + 0x1],BL         ; 00578dab
        ;   Label: LAB_00578dab
    MOV DH,byte ptr [ESP + 0x10]        ; 00578dae
    MOV byte ptr [EAX + 0x2],CL         ; 00578db2
    MOV byte ptr [EAX + 0x3],DL         ; 00578db5
    MOV byte ptr [EAX],DH               ; 00578db8
    MOV EAX,0x1                         ; 00578dba
    POP ESI                             ; 00578dbf
    POP EBX                             ; 00578dc0
    RET                                 ; 00578dc1

