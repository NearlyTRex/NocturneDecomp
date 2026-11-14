; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_initJoystick_FUN_00581c80(void)
;
; Local Variables:
; undefined        Stack[-0x194]:1  local_194
; undefined1       Stack[-0x134]:1  local_134
; undefined4       Stack[-0x128]:4  local_128
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_004e44e0 at 004e45d6
;
; Referenced Globals:
;   void* PTR_joyGetDevCapsA_005b343c = 001b38ba
;   void* PTR_GetModuleHandleA_005b35c0 = 001b3f52
;   void* PTR_GetProcAddress_005b35c8 = 001b3f72
;   TerminatedCString s_winmm_dll_005d7eda
;   TerminatedCString s_joyGetPosEx_005d7ee4
;   undefined4 DAT_005fba30
;   undefined4 DAT_01c6e264
;   undefined4 DAT_01c6e274
;   undefined4 DAT_02d22c1c
;   undefined4 DAT_02d22c20
;
; Called Functions:
;   GetModuleHandleA
;   GetProcAddress
;   joyGetDevCapsA
;
; *****************************************************************************

section .text

    SUB ESP,0x194                       ; 00581c80
        ;   Label: wincore_winrun.cpp_initJoystick_FUN_00581c80
    PUSH 0x5d7eda                       ; 00581c86 | = "winmm.dll"
    CALL dword ptr CS:[0x5b35c0]        ; 00581c8b | PTR_GetModuleHandleA_005b35c0
    MOV [0x02d22c20],EAX                ; 00581c92 | DAT_02d22c20
    TEST EAX,EAX                        ; 00581c97
    JZ 0x00581cad                       ; 00581c99
        ;   XREF to: 00581cad (CONDITIONAL_JUMP)  ; LAB_00581cad
    PUSH 0x5d7ee4                       ; 00581c9b | = "joyGetPosEx"
    PUSH EAX                            ; 00581ca0
    CALL dword ptr CS:[0x5b35c8]        ; 00581ca1 | PTR_GetProcAddress_005b35c8
    MOV [0x02d22c1c],EAX                ; 00581ca8 | DAT_02d22c1c
    PUSH 0x194                          ; 00581cad
        ;   Label: LAB_00581cad
    LEA EAX,[ESP + 0x4]                 ; 00581cb2
    PUSH EAX                            ; 00581cb6
    PUSH 0x0                            ; 00581cb7
    CALL dword ptr CS:[0x5b343c]        ; 00581cb9 | PTR_joyGetDevCapsA_005b343c
    TEST EAX,EAX                        ; 00581cc0
    JNZ 0x00581cf1                      ; 00581cc2
        ;   XREF to: 00581cf1 (CONDITIONAL_JUMP)  ; LAB_00581cf1
    TEST byte ptr [ESP + 0x60],0x10     ; 00581cc4
    SETNZ AL                            ; 00581cc9
    AND EAX,0xff                        ; 00581ccc
    MOV [0x01c6e274],EAX                ; 00581cd1 | DAT_01c6e274
    MOV EAX,dword ptr [ESP + 0x6c]      ; 00581cd6
    MOV [0x005fba30],EAX                ; 00581cda | DAT_005fba30
    CMP EAX,0x8                         ; 00581cdf
    JG 0x00581cfd                       ; 00581ce2
        ;   XREF to: 00581cfd (CONDITIONAL_JUMP)  ; LAB_00581cfd
    ADD ESP,0x194                       ; 00581ce4
        ;   Label: LAB_00581ce4
    LEA EAX,[EAX]                       ; 00581cea
    PUSH EBX                            ; 00581cf1
        ;   Label: LAB_00581cf1
    XOR EBX,EBX                         ; 00581cf2
    MOV dword ptr [0x01c6e264],EBX      ; 00581cf4 | DAT_01c6e264
    POP EBX                             ; 00581cfa
    JMP 0x00581ce4                      ; 00581cfb
        ;   XREF to: 00581ce4 (UNCONDITIONAL_JUMP)  ; LAB_00581ce4
    MOV dword ptr [0x005fba30],0x8      ; 00581cfd | DAT_005fba30
        ;   Label: LAB_00581cfd
    ADD ESP,0x194                       ; 00581d07
    RET                                 ; 00581d0d

