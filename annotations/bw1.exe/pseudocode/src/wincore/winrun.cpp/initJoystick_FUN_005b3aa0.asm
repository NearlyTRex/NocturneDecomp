; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_initJoystick_FUN_005b3aa0(void)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
;
; XREF[1]:
;   core_main.c_FUN_005032a0 at 00503396
;
; Referenced Globals:
;   void* PTR_joyGetDevCapsA_005d043c = 001d08ba
;   void* PTR_GetModuleHandleA_005d05c0 = 001d0f4c
;   void* PTR_GetProcAddress_005d05c8 = 001d0f6c
;   TerminatedCString s_winmm_dll_005f9eaf
;   TerminatedCString s_joyGetPosEx_005f9eb9
;   undefined4 DAT_0061b4b0
;   undefined4 DAT_01c51cc4
;   undefined4 DAT_01c51cd4
;   undefined4 DAT_02c9cf0c
;   undefined4 DAT_02c9cf10
;
; Called Functions:
;   GetModuleHandleA
;   GetProcAddress
;   joyGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 005b3aa0
        ;   Label: wincore_winrun.cpp_initJoystick_FUN_005b3aa0
    PUSH 0x5f9eaf                       ; 005b3aa6 | = "winmm.dll"
    CALL dword ptr CS:[0x5d05c0]        ; 005b3aab | PTR_GetModuleHandleA_005d05c0
    MOV [0x02c9cf10],EAX                ; 005b3ab2 | DAT_02c9cf10
    TEST EAX,EAX                        ; 005b3ab7
    JZ 0x005b3acd                       ; 005b3ab9
        ;   XREF to: 005b3acd (CONDITIONAL_JUMP)  ; LAB_005b3acd
    PUSH 0x5f9eb9                       ; 005b3abb | = "joyGetPosEx"
    PUSH EAX                            ; 005b3ac0
    CALL dword ptr CS:[0x5d05c8]        ; 005b3ac1 | PTR_GetProcAddress_005d05c8
    MOV [0x02c9cf0c],EAX                ; 005b3ac8 | DAT_02c9cf0c
    PUSH 0x194                          ; 005b3acd
        ;   Label: LAB_005b3acd
    LEA EAX,[ESP + 0x4]                 ; 005b3ad2
    PUSH EAX                            ; 005b3ad6
    PUSH 0x0                            ; 005b3ad7
    CALL dword ptr CS:[0x5d043c]        ; 005b3ad9 | PTR_joyGetDevCapsA_005d043c
    TEST EAX,EAX                        ; 005b3ae0
    JNZ 0x005b3b11                      ; 005b3ae2
        ;   XREF to: 005b3b11 (CONDITIONAL_JUMP)  ; LAB_005b3b11
    TEST byte ptr [ESP + 0x60],0x10     ; 005b3ae4
    SETNZ AL                            ; 005b3ae9
    AND EAX,0xff                        ; 005b3aec
    MOV [0x01c51cd4],EAX                ; 005b3af1 | DAT_01c51cd4
    MOV EAX,dword ptr [ESP + 0x6c]      ; 005b3af6
    MOV [0x0061b4b0],EAX                ; 005b3afa | DAT_0061b4b0
    CMP EAX,0x8                         ; 005b3aff
    JG 0x005b3b1d                       ; 005b3b02
        ;   XREF to: 005b3b1d (CONDITIONAL_JUMP)  ; LAB_005b3b1d
    ADD ESP,0x194                       ; 005b3b04
        ;   Label: LAB_005b3b04
    LEA EAX,[EAX]                       ; 005b3b0a
    PUSH EBX                            ; 005b3b11
        ;   Label: LAB_005b3b11
    XOR EBX,EBX                         ; 005b3b12
    MOV dword ptr [0x01c51cc4],EBX      ; 005b3b14 | DAT_01c51cc4
    POP EBX                             ; 005b3b1a
    JMP 0x005b3b04                      ; 005b3b1b
        ;   XREF to: 005b3b04 (UNCONDITIONAL_JUMP)  ; LAB_005b3b04
    MOV dword ptr [0x0061b4b0],0x8      ; 005b3b1d | DAT_0061b4b0
        ;   Label: LAB_005b3b1d
    ADD ESP,0x194                       ; 005b3b27
    RET                                 ; 005b3b2d

