; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_getJoystickState_FUN_00559eb0(void)
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
;   core_game.cpp_CGame_resetKeyState_FUN_0049e8b0 at 0049e8ce
;
; Referenced Globals:
;   void* PTR_joyGetPos_005753d8 = 001757f4
;   undefined4 DAT_01c038f8
;   undefined4 DAT_01c038fc
;   undefined4 DAT_01c03900
;   undefined4 DAT_01c03904
;   undefined4 DAT_01c03908
;   undefined4 DAT_01c0390c
;   undefined4 DAT_01c03910
;   undefined4 DAT_01c03914
;   undefined4 DAT_01c0391c
;   undefined4 DAT_01c03920
;   undefined4 DAT_02de3114
;
; Called Functions:
;   joyGetPos
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00559eb0
        ;   Label: wincore_winrun.cpp_getJoystickState_FUN_00559eb0
    PUSH ESI                            ; 00559eb1
    PUSH EDI                            ; 00559eb2
    SUB ESP,0x44                        ; 00559eb3
    CMP dword ptr [0x01c0390c],0x0      ; 00559eb6 | DAT_01c0390c
    JZ 0x00559f70                       ; 00559ebd
        ;   XREF to: 00559f70 (CONDITIONAL_JUMP)  ; LAB_00559f70
    MOV ECX,dword ptr [0x02de3114]      ; 00559ec3 | DAT_02de3114
    TEST ECX,ECX                        ; 00559ec9
    JZ 0x00559fce                       ; 00559ecb
        ;   XREF to: 00559fce (CONDITIONAL_JUMP)  ; LAB_00559fce
    MOV ESI,0x83                        ; 00559ed1
    MOV EBX,0x34                        ; 00559ed6
    MOV EDI,dword ptr [0x01c0391c]      ; 00559edb | DAT_01c0391c
    MOV dword ptr [ESP + 0x4],ESI       ; 00559ee1
    MOV dword ptr [ESP],EBX             ; 00559ee5
    TEST EDI,EDI                        ; 00559ee8
    JNZ 0x00559f77                      ; 00559eea
        ;   XREF to: 00559f77 (CONDITIONAL_JUMP)  ; LAB_00559f77
    CMP dword ptr [0x01c03914],0x0      ; 00559ef0 | DAT_01c03914
        ;   Label: LAB_00559ef0
    JZ 0x00559efe                       ; 00559ef7
        ;   XREF to: 00559efe (CONDITIONAL_JUMP)  ; LAB_00559efe
    OR byte ptr [ESP + 0x4],0x4         ; 00559ef9
    CMP dword ptr [0x01c03910],0x0      ; 00559efe | DAT_01c03910
        ;   Label: LAB_00559efe
    JZ 0x00559f0c                       ; 00559f05
        ;   XREF to: 00559f0c (CONDITIONAL_JUMP)  ; LAB_00559f0c
    OR byte ptr [ESP + 0x4],0x8         ; 00559f07
    MOV EAX,ESP                         ; 00559f0c
        ;   Label: LAB_00559f0c
    PUSH EAX                            ; 00559f0e
    PUSH 0x0                            ; 00559f0f
    CALL dword ptr [0x02de3114]         ; 00559f11 | DAT_02de3114
    MOV EAX,dword ptr [ESP + 0x20]      ; 00559f17
    MOV [0x01c03908],EAX                ; 00559f1b | DAT_01c03908
    MOV EAX,dword ptr [ESP + 0x8]       ; 00559f20
    MOV [0x01c038f8],EAX                ; 00559f24 | DAT_01c038f8
    MOV EAX,dword ptr [ESP + 0xc]       ; 00559f29
    MOV [0x01c038fc],EAX                ; 00559f2d | DAT_01c038fc
    MOV EAX,dword ptr [ESP + 0x14]      ; 00559f32
    MOV [0x01c03900],EAX                ; 00559f36 | DAT_01c03900
    MOV EAX,dword ptr [ESP + 0x10]      ; 00559f3b
    MOV ECX,dword ptr [0x01c0391c]      ; 00559f3f | DAT_01c0391c
    MOV [0x01c03904],EAX                ; 00559f45 | DAT_01c03904
    TEST ECX,ECX                        ; 00559f4a
    JZ 0x00559f70                       ; 00559f4c
        ;   XREF to: 00559f70 (CONDITIONAL_JUMP)  ; LAB_00559f70
    MOV EBX,dword ptr [ESP + 0x28]      ; 00559f4e
    CMP EBX,0x4650                      ; 00559f52
    JNC 0x00559fb2                      ; 00559f58
        ;   XREF to: 00559fb2 (CONDITIONAL_JUMP)  ; LAB_00559fb2
    TEST EBX,EBX                        ; 00559f5a
    JBE 0x00559f84                      ; 00559f5c
        ;   XREF to: 00559f84 (CONDITIONAL_JUMP)  ; LAB_00559f84
    CMP EBX,0x2328                      ; 00559f5e
    JNZ 0x00559fa8                      ; 00559f64
        ;   XREF to: 00559fa8 (CONDITIONAL_JUMP)  ; LAB_00559fa8
    MOV dword ptr [0x01c03920],0x4      ; 00559f66 | DAT_01c03920
    ADD ESP,0x44                        ; 00559f70
        ;   Label: LAB_00559f70
    POP EDI                             ; 00559f73
    POP ESI                             ; 00559f74
    POP EBX                             ; 00559f75
    RET                                 ; 00559f76
    MOV dword ptr [ESP + 0x4],0xc3      ; 00559f77
        ;   Label: LAB_00559f77
    JMP 0x00559ef0                      ; 00559f7f
        ;   XREF to: 00559ef0 (UNCONDITIONAL_JUMP)  ; LAB_00559ef0
    MOV dword ptr [0x01c03920],0x1      ; 00559f84 | DAT_01c03920
        ;   Label: LAB_00559f84
    JMP 0x00559f70                      ; 00559f8e
        ;   XREF to: 00559f70 (UNCONDITIONAL_JUMP)  ; LAB_00559f70
    MOV dword ptr [0x01c03920],0x2      ; 00559f90 | DAT_01c03920
        ;   Label: LAB_00559f90
    JMP 0x00559f70                      ; 00559f9a
        ;   XREF to: 00559f70 (UNCONDITIONAL_JUMP)  ; LAB_00559f70
    MOV dword ptr [0x01c03920],0x3      ; 00559f9c | DAT_01c03920
        ;   Label: LAB_00559f9c
    JMP 0x00559f70                      ; 00559fa6
        ;   XREF to: 00559f70 (UNCONDITIONAL_JUMP)  ; LAB_00559f70
    XOR EDX,EDX                         ; 00559fa8
        ;   Label: LAB_00559fa8
    MOV dword ptr [0x01c03920],EDX      ; 00559faa | DAT_01c03920
    JMP 0x00559f70                      ; 00559fb0
        ;   XREF to: 00559f70 (UNCONDITIONAL_JUMP)  ; LAB_00559f70
    JBE 0x00559f90                      ; 00559fb2
        ;   XREF to: 00559f90 (CONDITIONAL_JUMP)  ; LAB_00559f90
        ;   Label: LAB_00559fb2
    CMP EBX,0x6978                      ; 00559fb4
    JC 0x00559fa8                       ; 00559fba
        ;   XREF to: 00559fa8 (CONDITIONAL_JUMP)  ; LAB_00559fa8
    JBE 0x00559f9c                      ; 00559fbc
        ;   XREF to: 00559f9c (CONDITIONAL_JUMP)  ; LAB_00559f9c
    CMP EBX,0xffff                      ; 00559fbe
    XOR EDX,EDX                         ; 00559fc4
    MOV dword ptr [0x01c03920],EDX      ; 00559fc6 | DAT_01c03920
    JMP 0x00559f70                      ; 00559fcc
        ;   XREF to: 00559f70 (UNCONDITIONAL_JUMP)  ; LAB_00559f70
    LEA EAX,[ESP + 0x34]                ; 00559fce
        ;   Label: LAB_00559fce
    PUSH EAX                            ; 00559fd2
    PUSH ECX                            ; 00559fd3
    CALL dword ptr CS:[0x5753d8]        ; 00559fd4 | PTR_joyGetPos_005753d8
    MOV EAX,dword ptr [ESP + 0x40]      ; 00559fdb
    MOV [0x01c03908],EAX                ; 00559fdf | DAT_01c03908
    MOV EAX,dword ptr [ESP + 0x34]      ; 00559fe4
    MOV [0x01c038f8],EAX                ; 00559fe8 | DAT_01c038f8
    MOV EAX,dword ptr [ESP + 0x38]      ; 00559fed
    MOV [0x01c038fc],EAX                ; 00559ff1 | DAT_01c038fc
    MOV EAX,dword ptr [ESP + 0x3c]      ; 00559ff6
    MOV [0x01c03904],EAX                ; 00559ffa | DAT_01c03904
    ADD ESP,0x44                        ; 00559fff
    POP EDI                             ; 0055a002
    POP ESI                             ; 0055a003
    POP EBX                             ; 0055a004
    RET                                 ; 0055a005

