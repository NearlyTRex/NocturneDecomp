; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c9bd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)
;
;
; XREF[1]:
;   FUN_004c9cc0 at 004c9cdd
;
; Referenced Globals:
;   TerminatedCString s_core_gore_cpp_005d954a
;   TerminatedCString s_Can_t_create_flies_005d955b
;   undefined4 DAT_005d9572
;   undefined4 DAT_00618170
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   undefined4 DAT_01d182f0
;
; Called Functions:
;   FUN_004a6a90
;   FUN_004e4500
;   FUN_004fc200
;   FUN_004fcda0
;   FUN_005b8be2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9bd0
        ;   Label: FUN_004c9bd0
    PUSH ESI                            ; 004c9bd1
    PUSH EDI                            ; 004c9bd2
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c9bd3
    MOV ESI,dword ptr [ESP + 0x20]      ; 004c9bd7
    PUSH 0x2b7c                         ; 004c9bdb
    CALL FUN_005b8be2                   ; 004c9be0
        ;   XREF to: 005b8be2 (UNCONDITIONAL_CALL)  ; undefined FUN_005b8be2()
    ADD ESP,0x4                         ; 004c9be5
    TEST EAX,EAX                        ; 004c9be8
    JNZ 0x004c9cab                      ; 004c9bea
        ;   XREF to: 004c9cab (CONDITIONAL_JUMP)  ; LAB_004c9cab
    MOV EBX,EAX                         ; 004c9bf0
        ;   Label: LAB_004c9bf0
    TEST EAX,EAX                        ; 004c9bf2
    JNZ 0x004c9c19                      ; 004c9bf4
        ;   XREF to: 004c9c19 (CONDITIONAL_JUMP)  ; LAB_004c9c19
    MOV EDX,0x5d954a                    ; 004c9bf6 | = "..\\core\\gore.cpp"
    MOV ECX,0x681                       ; 004c9bfb
    PUSH 0x5d955b                       ; 004c9c00 | = "Can't create flies!"
    MOV dword ptr [0x01d046a0],EDX      ; 004c9c05 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 004c9c0b | DAT_01d046a4
    CALL FUN_004e4500                   ; 004c9c11
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004c9c16
    FLD float ptr [ESP + 0x1c]          ; 004c9c19
        ;   Label: LAB_004c9c19
    FDIVR double ptr [0x005d9572]       ; 004c9c1d | DAT_005d9572
    LEA EAX,[EBX + 0x20]                ; 004c9c23
    MOV EDX,dword ptr [EDI]             ; 004c9c26
    MOV dword ptr [EAX],EDX             ; 004c9c28
    MOV EDX,dword ptr [EDI + 0x4]       ; 004c9c2a
    MOV dword ptr [EAX + 0x4],EDX       ; 004c9c2d
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c9c30
    MOV dword ptr [EAX + 0x8],EDX       ; 004c9c33
    MOV EAX,[0x00618170]                ; 004c9c36 | DAT_00618170
    MOV EAX,dword ptr [EAX]             ; 004c9c3b | DAT_01d182f0
    MOV dword ptr [EBX + 0x2c0],0x0     ; 004c9c3d
    MOV dword ptr [EBX + 0x2c],EAX      ; 004c9c47
    MOV EAX,dword ptr [ESP + 0x18]      ; 004c9c4a
    MOV dword ptr [EBX + 0x2b68],EAX    ; 004c9c4e
    FSTP float ptr [EBX + 0x2b70]       ; 004c9c54
    TEST ESI,ESI                        ; 004c9c5a
    JZ 0x004c9c78                       ; 004c9c5c
        ;   XREF to: 004c9c78 (CONDITIONAL_JUMP)  ; LAB_004c9c78
    LEA EAX,[EBX + 0x2b4]               ; 004c9c5e
    CMP EAX,ESI                         ; 004c9c64
    JZ 0x004c9c78                       ; 004c9c66
        ;   XREF to: 004c9c78 (CONDITIONAL_JUMP)  ; LAB_004c9c78
    MOV EDX,dword ptr [ESI]             ; 004c9c68
    MOV dword ptr [EAX],EDX             ; 004c9c6a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004c9c6c
    MOV dword ptr [EAX + 0x4],EDX       ; 004c9c6f
    MOV EDX,dword ptr [ESI + 0x8]       ; 004c9c72
    MOV dword ptr [EAX + 0x8],EDX       ; 004c9c75
    PUSH EBX                            ; 004c9c78
        ;   Label: LAB_004c9c78
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004c9c79
    CALL dword ptr [EAX + 0x8]          ; 004c9c7f
    ADD ESP,0x4                         ; 004c9c82
    PUSH EBX                            ; 004c9c85
    MOV ESI,dword ptr [0x00618170]      ; 004c9c86 | DAT_00618170
    PUSH ESI                            ; 004c9c8c | DAT_01d182f0
    CALL FUN_004fcda0                   ; 004c9c8d
        ;   XREF to: 004fcda0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fcda0()
    ADD ESP,0x8                         ; 004c9c92
    PUSH EBX                            ; 004c9c95
    MOV EDI,dword ptr [0x00618170]      ; 004c9c96 | DAT_00618170
    PUSH EDI                            ; 004c9c9c | DAT_01d182f0
    CALL FUN_004fc200                   ; 004c9c9d
        ;   XREF to: 004fc200 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc200()
    ADD ESP,0x8                         ; 004c9ca2
    MOV EAX,EBX                         ; 004c9ca5
    POP EDI                             ; 004c9ca7
    POP ESI                             ; 004c9ca8
    POP EBX                             ; 004c9ca9
    RET                                 ; 004c9caa
    PUSH EAX                            ; 004c9cab
        ;   Label: LAB_004c9cab
    CALL FUN_004a6a90                   ; 004c9cac
        ;   XREF to: 004a6a90 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6a90()
    ADD ESP,0x4                         ; 004c9cb1
    JMP 0x004c9bf0                      ; 004c9cb4
        ;   XREF to: 004c9bf0 (UNCONDITIONAL_JUMP)  ; LAB_004c9bf0

