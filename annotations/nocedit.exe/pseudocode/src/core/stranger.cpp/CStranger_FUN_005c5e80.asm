; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_stranger.cpp_CStranger_FUN_005c5e80()
;
;
; XREF[1]:
;   core_stranger.cpp_CStranger_FUN_005c5b90 at 005c5bb4
;
; Referenced Globals:
;   undefined4 DAT_00663744
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c5e80
        ;   Label: core_stranger.cpp_CStranger_FUN_005c5e80
    PUSH ESI                            ; 005c5e81
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c5e82
    MOV EDX,dword ptr [EBX + 0x24f8]    ; 005c5e86
    XOR ESI,ESI                         ; 005c5e8c
    TEST EDX,EDX                        ; 005c5e8e
    JNZ 0x005c5ec3                      ; 005c5e90
        ;   XREF to: 005c5ec3 (CONDITIONAL_JUMP)  ; LAB_005c5ec3
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c5e92
        ;   Label: LAB_005c5e92
    TEST ECX,ECX                        ; 005c5e98
    JZ 0x005c5ed8                       ; 005c5e9a
        ;   XREF to: 005c5ed8 (CONDITIONAL_JUMP)  ; LAB_005c5ed8
    CMP dword ptr [ECX + 0x2e0],0x3     ; 005c5e9c
    JNZ 0x005c5ed8                      ; 005c5ea3
        ;   XREF to: 005c5ed8 (CONDITIONAL_JUMP)  ; LAB_005c5ed8
    FLD float ptr [0x00663744]          ; 005c5ea5 | DAT_00663744
        ;   Label: LAB_005c5ea5
    MOV dword ptr [EBX + 0x1fc38],0x3   ; 005c5eab
    MOV EAX,0x1                         ; 005c5eb5
    FSTP float ptr [EBX + 0x1fbe4]      ; 005c5eba
    POP ESI                             ; 005c5ec0
    POP EBX                             ; 005c5ec1
    RET                                 ; 005c5ec2
    MOV EAX,EDX                         ; 005c5ec3
        ;   Label: LAB_005c5ec3
    PUSH EAX                            ; 005c5ec5
    MOV EDX,dword ptr [EDX + 0x154]     ; 005c5ec6
    CALL dword ptr [EDX + 0x6c]         ; 005c5ecc
    ADD ESP,0x4                         ; 005c5ecf
    TEST AL,0x4                         ; 005c5ed2
    JZ 0x005c5e92                       ; 005c5ed4
        ;   XREF to: 005c5e92 (CONDITIONAL_JUMP)  ; LAB_005c5e92
    JMP 0x005c5ea5                      ; 005c5ed6
        ;   XREF to: 005c5ea5 (UNCONDITIONAL_JUMP)  ; LAB_005c5ea5
    TEST ESI,ESI                        ; 005c5ed8
        ;   Label: LAB_005c5ed8
    JNZ 0x005c5ea5                      ; 005c5eda
        ;   XREF to: 005c5ea5 (CONDITIONAL_JUMP)  ; LAB_005c5ea5
    XOR EAX,EAX                         ; 005c5edc
    POP ESI                             ; 005c5ede
    POP EBX                             ; 005c5edf
    RET                                 ; 005c5ee0

