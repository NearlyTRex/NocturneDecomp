; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0ab0(void)
;
; Local Variables:
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   engine_mini3d.cpp_FUN_004f1020 at 004f10c6
;   engine_mini3d.cpp_FUN_004f1190 at 004f1207
;   engine_mini3d.cpp_FUN_004f2a10 at 004f2ae9
;
; Referenced Globals:
;   void* PTR_caseD_1_004f0a9c = 004f0b5b
;   void* PTR_caseD_3_004f0aa4 = 004f0b39
;   undefined4 DAT_01d76f70
;   undefined4 DAT_01d76f74
;   undefined4 DAT_01d77f7c
;   undefined4 DAT_01d77f80
;   undefined4 DAT_01d77f84
;   undefined4 DAT_01d77fc0
;   undefined4 DAT_01d77fc4
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f06a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0ab0
        ;   Label: engine_mini3d.cpp_FUN_004f0ab0
    PUSH ESI                            ; 004f0ab1
    PUSH EDI                            ; 004f0ab2
    PUSH EBP                            ; 004f0ab3
    SUB ESP,0x8                         ; 004f0ab4
    MOV EBX,dword ptr [0x01d76f74]      ; 004f0ab7 | DAT_01d76f74
    XOR EDX,EDX                         ; 004f0abd
    MOV ECX,dword ptr [0x01d76f70]      ; 004f0abf | DAT_01d76f70
    MOV dword ptr [ESP],EDX             ; 004f0ac5
    TEST ECX,ECX                        ; 004f0ac8
    JLE 0x004f0b4d                      ; 004f0aca
        ;   XREF to: 004f0b4d (CONDITIONAL_JUMP)  ; LAB_004f0b4d
    MOV EBP,0x1d77f7c                   ; 004f0ad0
    MOV ECX,dword ptr [ESP]             ; 004f0ad5
        ;   Label: LAB_004f0ad5
    MOV EAX,[0x01d76f70]                ; 004f0ad8 | DAT_01d76f70
    INC ECX                             ; 004f0add
    CMP ECX,EAX                         ; 004f0ade
    JNZ 0x004f0ae4                      ; 004f0ae0
        ;   XREF to: 004f0ae4 (CONDITIONAL_JUMP)  ; LAB_004f0ae4
    XOR ECX,EAX                         ; 004f0ae2
    MOV ESI,0x1d77f7c                   ; 004f0ae4
        ;   Label: LAB_004f0ae4
    SHL ECX,0x6                         ; 004f0ae9
    FLD float ptr [EBP + 0x4]           ; 004f0aec | DAT_01d77f80 | DAT_01d77fc0
    ADD ESI,ECX                         ; 004f0aef
    MOV EDX,EBP                         ; 004f0af1
    MOV dword ptr [ESP + 0x4],ESI       ; 004f0af3
    XOR ECX,ECX                         ; 004f0af7
    FCOMP float ptr [EBP + 0x8]         ; 004f0af9 | DAT_01d77f84 | DAT_01d77fc4
    FNSTSW AX                           ; 004f0afc
    SAHF                                ; 004f0afe
    JC 0x004f0b06                       ; 004f0aff
        ;   XREF to: 004f0b06 (CONDITIONAL_JUMP)  ; LAB_004f0b06
    MOV ECX,0x1                         ; 004f0b01
    MOV ESI,dword ptr [ESP + 0x4]       ; 004f0b06
        ;   Label: LAB_004f0b06
    FLD float ptr [ESI + 0x4]           ; 004f0b0a | DAT_01d77f80
    FCOMP float ptr [ESI + 0x8]         ; 004f0b0d | DAT_01d77f84
    FNSTSW AX                           ; 004f0b10
    SAHF                                ; 004f0b12
    JC 0x004f0b18                       ; 004f0b13
        ;   XREF to: 004f0b18 (CONDITIONAL_JUMP)  ; LAB_004f0b18
    OR CL,0x2                           ; 004f0b15
    CMP ECX,0x3                         ; 004f0b18
        ;   Label: LAB_004f0b18
    JA 0x004f0b39                       ; 004f0b1b
        ;   XREF to: 004f0b39 (CONDITIONAL_JUMP)  ; caseD_3
    JMP dword ptr [ECX*0x4 + 0x4f0a98]  ; 004f0b1d | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV ESI,EBX                         ; 004f0b24
        ;   Label: caseD_0
    SHL ESI,0x6                         ; 004f0b26
    MOV ECX,0x10                        ; 004f0b29
    LEA EDI,[ESI + 0x1d7877c]           ; 004f0b2e
    MOV ESI,EDX                         ; 004f0b34
    INC EBX                             ; 004f0b36
    MOVSD.REP ES:EDI,ESI                ; 004f0b37 | DAT_01d77f7c | DAT_01d77f80
    MOV ESI,dword ptr [ESP]             ; 004f0b39
        ;   Label: caseD_3
    MOV EDI,dword ptr [0x01d76f70]      ; 004f0b3c | DAT_01d76f70
    INC ESI                             ; 004f0b42
    ADD EBP,0x40                        ; 004f0b43
    MOV dword ptr [ESP],ESI             ; 004f0b46
    CMP ESI,EDI                         ; 004f0b49
    JL 0x004f0ad5                       ; 004f0b4b
        ;   XREF to: 004f0ad5 (CONDITIONAL_JUMP)  ; LAB_004f0ad5
    MOV dword ptr [0x01d76f74],EBX      ; 004f0b4d | DAT_01d76f74
        ;   Label: LAB_004f0b4d
    ADD ESP,0x8                         ; 004f0b53
    POP EBP                             ; 004f0b56
    POP EDI                             ; 004f0b57
    POP ESI                             ; 004f0b58
    POP EBX                             ; 004f0b59
    RET                                 ; 004f0b5a
    MOV ECX,EBX                         ; 004f0b5b
        ;   Label: caseD_1
    SHL ECX,0x6                         ; 004f0b5d
    ADD ECX,0x1d7877c                   ; 004f0b60
    PUSH ECX                            ; 004f0b66
    PUSH EDX                            ; 004f0b67 | DAT_01d77f7c
    MOV ESI,dword ptr [ESP + 0xc]       ; 004f0b68
    PUSH ESI                            ; 004f0b6c
    MOV dword ptr [0x01d76f74],EBX      ; 004f0b6d | DAT_01d76f74
    CALL engine_mini3d.cpp_FUN_004f06a0 ; 004f0b73
        ;   XREF to: 004f06a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f06a0()
    MOV EBX,dword ptr [0x01d76f74]      ; 004f0b78 | DAT_01d76f74
    ADD ESP,0xc                         ; 004f0b7e
    INC EBX                             ; 004f0b81
    JMP 0x004f0b39                      ; 004f0b82
        ;   XREF to: 004f0b39 (UNCONDITIONAL_JUMP)  ; caseD_3
    MOV ESI,EBX                         ; 004f0b84
        ;   Label: caseD_2
    SHL ESI,0x6                         ; 004f0b86
    MOV ECX,0x10                        ; 004f0b89
    LEA EDI,[ESI + 0x1d7877c]           ; 004f0b8e
    MOV ESI,EDX                         ; 004f0b94
    INC EBX                             ; 004f0b96
    MOVSD.REP ES:EDI,ESI                ; 004f0b97 | DAT_01d77f7c | DAT_01d77f80
    MOV ECX,EBX                         ; 004f0b99
    SHL ECX,0x6                         ; 004f0b9b
    ADD ECX,0x1d7877c                   ; 004f0b9e
    PUSH ECX                            ; 004f0ba4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f0ba5
    PUSH ECX                            ; 004f0ba9
    PUSH EDX                            ; 004f0baa | DAT_01d77f7c
    MOV dword ptr [0x01d76f74],EBX      ; 004f0bab | DAT_01d76f74
    CALL engine_mini3d.cpp_FUN_004f06a0 ; 004f0bb1
        ;   XREF to: 004f06a0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f06a0()
    MOV EBX,dword ptr [0x01d76f74]      ; 004f0bb6 | DAT_01d76f74
    ADD ESP,0xc                         ; 004f0bbc
    INC EBX                             ; 004f0bbf
    JMP 0x004f0b39                      ; 004f0bc0
        ;   XREF to: 004f0b39 (UNCONDITIONAL_JUMP)  ; caseD_3

