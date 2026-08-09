; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_initJoystick_FUN_00559e20(void)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004c85f0 at 004c874f
;
; Referenced Globals:
;   void* PTR_joyGetDevCapsA_005753d4 = 001757e2
;   void* PTR_GetModuleHandleA_0057552c = 00175dbc
;   void* PTR_GetProcAddress_00575534 = 00175ddc
;   TerminatedCString s_winmm_dll_00598168
;   TerminatedCString s_joyGetPosEx_00598172
;   int INT_005b7634 = 0x4
;   undefined4 DAT_01c0390c
;   undefined4 DAT_01c0391c
;   undefined4 DAT_02de3114
;   undefined4 DAT_02de3118
;
; Called Functions:
;   GetModuleHandleA
;   GetProcAddress
;   joyGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 00559e20
        ;   Label: wincore_winrun.cpp_initJoystick_FUN_00559e20
    PUSH 0x598168                       ; 00559e26 | = "winmm.dll"
    CALL dword ptr CS:[0x57552c]        ; 00559e2b | PTR_GetModuleHandleA_0057552c
    MOV [0x02de3118],EAX                ; 00559e32 | DAT_02de3118
    TEST EAX,EAX                        ; 00559e37
    JZ 0x00559e4d                       ; 00559e39
        ;   XREF to: 00559e4d (CONDITIONAL_JUMP)  ; LAB_00559e4d
    PUSH 0x598172                       ; 00559e3b | = "joyGetPosEx"
    PUSH EAX                            ; 00559e40
    CALL dword ptr CS:[0x575534]        ; 00559e41 | PTR_GetProcAddress_00575534
    MOV [0x02de3114],EAX                ; 00559e48 | DAT_02de3114
    PUSH 0x194                          ; 00559e4d
        ;   Label: LAB_00559e4d
    LEA EAX,[ESP + 0x4]                 ; 00559e52
    PUSH EAX                            ; 00559e56
    PUSH 0x0                            ; 00559e57
    CALL dword ptr CS:[0x5753d4]        ; 00559e59 | PTR_joyGetDevCapsA_005753d4
    TEST EAX,EAX                        ; 00559e60
    JNZ 0x00559e91                      ; 00559e62
        ;   XREF to: 00559e91 (CONDITIONAL_JUMP)  ; LAB_00559e91
    TEST byte ptr [ESP + 0x60],0x10     ; 00559e64
    SETNZ AL                            ; 00559e69
    AND EAX,0xff                        ; 00559e6c
    MOV [0x01c0391c],EAX                ; 00559e71 | DAT_01c0391c
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00559e76
    MOV [0x005b7634],EAX                ; 00559e7a | INT_005b7634
    CMP EAX,0x8                         ; 00559e7f
    JG 0x00559e9d                       ; 00559e82
        ;   XREF to: 00559e9d (CONDITIONAL_JUMP)  ; LAB_00559e9d
    ADD ESP,0x194                       ; 00559e84
        ;   Label: LAB_00559e84
    LEA EAX,[EAX]                       ; 00559e8a
    PUSH EBX                            ; 00559e91
        ;   Label: LAB_00559e91
    XOR EBX,EBX                         ; 00559e92
    MOV dword ptr [0x01c0390c],EBX      ; 00559e94 | DAT_01c0390c
    POP EBX                             ; 00559e9a
    JMP 0x00559e84                      ; 00559e9b
        ;   XREF to: 00559e84 (UNCONDITIONAL_JUMP)  ; LAB_00559e84
    MOV dword ptr [0x005b7634],0x8      ; 00559e9d | INT_005b7634
        ;   Label: LAB_00559e9d
    ADD ESP,0x194                       ; 00559ea7
    RET                                 ; 00559ead

