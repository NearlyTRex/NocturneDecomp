; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_initJoystick_FUN_0058ffd0(void)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
;
; XREF[1]:
;   core_main.c_FUN_004e46c0 at 004e47b6
;
; Referenced Globals:
;   void* PTR_joyGetDevCapsA_005c8430 = 001c88a2
;   void* PTR_GetModuleHandleA_005c85b0 = 001c8f24
;   void* PTR_GetProcAddress_005c85b8 = 001c8f44
;   TerminatedCString s_winmm_dll_005eeadd
;   TerminatedCString s_joyGetPosEx_005eeae7
;   undefined4 DAT_006141d0
;   undefined4 DAT_01c38b04
;   undefined4 DAT_01c38b14
;   undefined4 DAT_026656bc
;   undefined4 DAT_026656c0
;
; Called Functions:
;   GetModuleHandleA
;   GetProcAddress
;   joyGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 0058ffd0
        ;   Label: wincore_winrun.cpp_initJoystick_FUN_0058ffd0
    PUSH 0x5eeadd                       ; 0058ffd6 | = "winmm.dll"
    CALL dword ptr CS:[0x5c85b0]        ; 0058ffdb | PTR_GetModuleHandleA_005c85b0
    MOV [0x026656c0],EAX                ; 0058ffe2 | DAT_026656c0
    TEST EAX,EAX                        ; 0058ffe7
    JZ 0x0058fffd                       ; 0058ffe9
        ;   XREF to: 0058fffd (CONDITIONAL_JUMP)  ; LAB_0058fffd
    PUSH 0x5eeae7                       ; 0058ffeb | = "joyGetPosEx"
    PUSH EAX                            ; 0058fff0
    CALL dword ptr CS:[0x5c85b8]        ; 0058fff1 | PTR_GetProcAddress_005c85b8
    MOV [0x026656bc],EAX                ; 0058fff8 | DAT_026656bc
    PUSH 0x194                          ; 0058fffd
        ;   Label: LAB_0058fffd
    LEA EAX,[ESP + 0x4]                 ; 00590002
    PUSH EAX                            ; 00590006
    PUSH 0x0                            ; 00590007
    CALL dword ptr CS:[0x5c8430]        ; 00590009 | PTR_joyGetDevCapsA_005c8430
    TEST EAX,EAX                        ; 00590010
    JNZ 0x00590041                      ; 00590012
        ;   XREF to: 00590041 (CONDITIONAL_JUMP)  ; LAB_00590041
    TEST byte ptr [ESP + 0x60],0x10     ; 00590014
    SETNZ AL                            ; 00590019
    AND EAX,0xff                        ; 0059001c
    MOV [0x01c38b14],EAX                ; 00590021 | DAT_01c38b14
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00590026
    MOV [0x006141d0],EAX                ; 0059002a | DAT_006141d0
    CMP EAX,0x8                         ; 0059002f
    JG 0x0059004d                       ; 00590032
        ;   XREF to: 0059004d (CONDITIONAL_JUMP)  ; LAB_0059004d
    ADD ESP,0x194                       ; 00590034
        ;   Label: LAB_00590034
    LEA EAX,[EAX]                       ; 0059003a
    PUSH EBX                            ; 00590041
        ;   Label: LAB_00590041
    XOR EBX,EBX                         ; 00590042
    MOV dword ptr [0x01c38b04],EBX      ; 00590044 | DAT_01c38b04
    POP EBX                             ; 0059004a
    JMP 0x00590034                      ; 0059004b
        ;   XREF to: 00590034 (UNCONDITIONAL_JUMP)  ; LAB_00590034
    MOV dword ptr [0x006141d0],0x8      ; 0059004d | DAT_006141d0
        ;   Label: LAB_0059004d
    ADD ESP,0x194                       ; 00590057
    RET                                 ; 0059005d

