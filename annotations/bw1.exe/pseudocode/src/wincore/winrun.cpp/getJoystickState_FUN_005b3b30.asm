; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getJoystickState_FUN_005b3b30(void)
;
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   core_game.cpp_CGame_resetKeyState_FUN_004d0960 at 004d097e
;
; Referenced Globals:
;   void* PTR_joyGetPos_005d0440 = 001d08cc
;   undefined4 DAT_01c51cb0
;   undefined4 DAT_01c51cb4
;   undefined4 DAT_01c51cb8
;   undefined4 DAT_01c51cbc
;   undefined4 DAT_01c51cc0
;   undefined4 DAT_01c51cc4
;   undefined4 DAT_01c51cc8
;   undefined4 DAT_01c51ccc
;   undefined4 DAT_01c51cd4
;   undefined4 DAT_01c51cd8
;   undefined4 DAT_02c9cf0c
;
; Called Functions:
;   joyGetPos
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b3b30
        ;   Label: wincore_winrun.cpp_getJoystickState_FUN_005b3b30
    PUSH ESI                            ; 005b3b31
    PUSH EDI                            ; 005b3b32
    SUB ESP,0x44                        ; 005b3b33
    CMP dword ptr [0x01c51cc4],0x0      ; 005b3b36 | DAT_01c51cc4
    JZ 0x005b3bf0                       ; 005b3b3d
        ;   XREF to: 005b3bf0 (CONDITIONAL_JUMP)  ; LAB_005b3bf0
    MOV ECX,dword ptr [0x02c9cf0c]      ; 005b3b43 | DAT_02c9cf0c
    TEST ECX,ECX                        ; 005b3b49
    JZ 0x005b3c4e                       ; 005b3b4b
        ;   XREF to: 005b3c4e (CONDITIONAL_JUMP)  ; LAB_005b3c4e
    MOV ESI,0x83                        ; 005b3b51
    MOV EBX,0x34                        ; 005b3b56
    MOV EDI,dword ptr [0x01c51cd4]      ; 005b3b5b | DAT_01c51cd4
    MOV dword ptr [ESP + 0x4],ESI       ; 005b3b61
    MOV dword ptr [ESP],EBX             ; 005b3b65
    TEST EDI,EDI                        ; 005b3b68
    JNZ 0x005b3bf7                      ; 005b3b6a
        ;   XREF to: 005b3bf7 (CONDITIONAL_JUMP)  ; LAB_005b3bf7
    CMP dword ptr [0x01c51ccc],0x0      ; 005b3b70 | DAT_01c51ccc
        ;   Label: LAB_005b3b70
    JZ 0x005b3b7e                       ; 005b3b77
        ;   XREF to: 005b3b7e (CONDITIONAL_JUMP)  ; LAB_005b3b7e
    OR byte ptr [ESP + 0x4],0x4         ; 005b3b79
    CMP dword ptr [0x01c51cc8],0x0      ; 005b3b7e | DAT_01c51cc8
        ;   Label: LAB_005b3b7e
    JZ 0x005b3b8c                       ; 005b3b85
        ;   XREF to: 005b3b8c (CONDITIONAL_JUMP)  ; LAB_005b3b8c
    OR byte ptr [ESP + 0x4],0x8         ; 005b3b87
    MOV EAX,ESP                         ; 005b3b8c
        ;   Label: LAB_005b3b8c
    PUSH EAX                            ; 005b3b8e
    PUSH 0x0                            ; 005b3b8f
    CALL dword ptr [0x02c9cf0c]         ; 005b3b91 | DAT_02c9cf0c
    MOV EAX,dword ptr [ESP + 0x20]      ; 005b3b97
    MOV [0x01c51cc0],EAX                ; 005b3b9b | DAT_01c51cc0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b3ba0
    MOV [0x01c51cb0],EAX                ; 005b3ba4 | DAT_01c51cb0
    MOV EAX,dword ptr [ESP + 0xc]       ; 005b3ba9
    MOV [0x01c51cb4],EAX                ; 005b3bad | DAT_01c51cb4
    MOV EAX,dword ptr [ESP + 0x14]      ; 005b3bb2
    MOV [0x01c51cb8],EAX                ; 005b3bb6 | DAT_01c51cb8
    MOV EAX,dword ptr [ESP + 0x10]      ; 005b3bbb
    MOV ECX,dword ptr [0x01c51cd4]      ; 005b3bbf | DAT_01c51cd4
    MOV [0x01c51cbc],EAX                ; 005b3bc5 | DAT_01c51cbc
    TEST ECX,ECX                        ; 005b3bca
    JZ 0x005b3bf0                       ; 005b3bcc
        ;   XREF to: 005b3bf0 (CONDITIONAL_JUMP)  ; LAB_005b3bf0
    MOV EBX,dword ptr [ESP + 0x28]      ; 005b3bce
    CMP EBX,0x4650                      ; 005b3bd2
    JNC 0x005b3c32                      ; 005b3bd8
        ;   XREF to: 005b3c32 (CONDITIONAL_JUMP)  ; LAB_005b3c32
    TEST EBX,EBX                        ; 005b3bda
    JBE 0x005b3c04                      ; 005b3bdc
        ;   XREF to: 005b3c04 (CONDITIONAL_JUMP)  ; LAB_005b3c04
    CMP EBX,0x2328                      ; 005b3bde
    JNZ 0x005b3c28                      ; 005b3be4
        ;   XREF to: 005b3c28 (CONDITIONAL_JUMP)  ; LAB_005b3c28
    MOV dword ptr [0x01c51cd8],0x4      ; 005b3be6 | DAT_01c51cd8
    ADD ESP,0x44                        ; 005b3bf0
        ;   Label: LAB_005b3bf0
    POP EDI                             ; 005b3bf3
    POP ESI                             ; 005b3bf4
    POP EBX                             ; 005b3bf5
    RET                                 ; 005b3bf6
    MOV dword ptr [ESP + 0x4],0xc3      ; 005b3bf7
        ;   Label: LAB_005b3bf7
    JMP 0x005b3b70                      ; 005b3bff
        ;   XREF to: 005b3b70 (UNCONDITIONAL_JUMP)  ; LAB_005b3b70
    MOV dword ptr [0x01c51cd8],0x1      ; 005b3c04 | DAT_01c51cd8
        ;   Label: LAB_005b3c04
    JMP 0x005b3bf0                      ; 005b3c0e
        ;   XREF to: 005b3bf0 (UNCONDITIONAL_JUMP)  ; LAB_005b3bf0
    MOV dword ptr [0x01c51cd8],0x2      ; 005b3c10 | DAT_01c51cd8
        ;   Label: LAB_005b3c10
    JMP 0x005b3bf0                      ; 005b3c1a
        ;   XREF to: 005b3bf0 (UNCONDITIONAL_JUMP)  ; LAB_005b3bf0
    MOV dword ptr [0x01c51cd8],0x3      ; 005b3c1c | DAT_01c51cd8
        ;   Label: LAB_005b3c1c
    JMP 0x005b3bf0                      ; 005b3c26
        ;   XREF to: 005b3bf0 (UNCONDITIONAL_JUMP)  ; LAB_005b3bf0
    XOR EDX,EDX                         ; 005b3c28
        ;   Label: LAB_005b3c28
    MOV dword ptr [0x01c51cd8],EDX      ; 005b3c2a | DAT_01c51cd8
    JMP 0x005b3bf0                      ; 005b3c30
        ;   XREF to: 005b3bf0 (UNCONDITIONAL_JUMP)  ; LAB_005b3bf0
    JBE 0x005b3c10                      ; 005b3c32
        ;   XREF to: 005b3c10 (CONDITIONAL_JUMP)  ; LAB_005b3c10
        ;   Label: LAB_005b3c32
    CMP EBX,0x6978                      ; 005b3c34
    JC 0x005b3c28                       ; 005b3c3a
        ;   XREF to: 005b3c28 (CONDITIONAL_JUMP)  ; LAB_005b3c28
    JBE 0x005b3c1c                      ; 005b3c3c
        ;   XREF to: 005b3c1c (CONDITIONAL_JUMP)  ; LAB_005b3c1c
    CMP EBX,0xffff                      ; 005b3c3e
    XOR EDX,EDX                         ; 005b3c44
    MOV dword ptr [0x01c51cd8],EDX      ; 005b3c46 | DAT_01c51cd8
    JMP 0x005b3bf0                      ; 005b3c4c
        ;   XREF to: 005b3bf0 (UNCONDITIONAL_JUMP)  ; LAB_005b3bf0
    LEA EAX,[ESP + 0x34]                ; 005b3c4e
        ;   Label: LAB_005b3c4e
    PUSH EAX                            ; 005b3c52
    PUSH ECX                            ; 005b3c53
    CALL dword ptr CS:[0x5d0440]        ; 005b3c54 | PTR_joyGetPos_005d0440
    MOV EAX,dword ptr [ESP + 0x40]      ; 005b3c5b
    MOV [0x01c51cc0],EAX                ; 005b3c5f | DAT_01c51cc0
    MOV EAX,dword ptr [ESP + 0x34]      ; 005b3c64
    MOV [0x01c51cb0],EAX                ; 005b3c68 | DAT_01c51cb0
    MOV EAX,dword ptr [ESP + 0x38]      ; 005b3c6d
    MOV [0x01c51cb4],EAX                ; 005b3c71 | DAT_01c51cb4
    MOV EAX,dword ptr [ESP + 0x3c]      ; 005b3c76
    MOV [0x01c51cbc],EAX                ; 005b3c7a | DAT_01c51cbc
    ADD ESP,0x44                        ; 005b3c7f
    POP EDI                             ; 005b3c82
    POP ESI                             ; 005b3c83
    POP EBX                             ; 005b3c84
    RET                                 ; 005b3c85

