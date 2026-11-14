; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_004a1040(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_stopGrabbing_s_005dcbab
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0078a123
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_charactr.cpp_FUN_0042d750
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1040
        ;   Label: core_enemy.cpp_CEnemy_releaseVictim_FUN_004a1040
    PUSH ESI                            ; 004a1041
    SUB ESP,0xc                         ; 004a1042
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a1045
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004a1049
    TEST EDX,EDX                        ; 004a104f
    JNZ 0x004a1059                      ; 004a1051
        ;   XREF to: 004a1059 (CONDITIONAL_JUMP)  ; LAB_004a1059
    ADD ESP,0xc                         ; 004a1053
        ;   Label: LAB_004a1053
    POP ESI                             ; 004a1056
    POP EBX                             ; 004a1057
    RET                                 ; 004a1058
    PUSH EDX                            ; 004a1059
        ;   Label: LAB_004a1059
    PUSH 0x5dcbab                       ; 004a105a | = "CEnemy::stopGrabbing %s\n"
    MOV ESI,dword ptr [0x00611100]      ; 004a105f | g_CConsolePtr
    PUSH ESI                            ; 004a1065 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004a1066
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004a106b
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004a106e
    PUSH EAX                            ; 004a1074
    MOV EDX,dword ptr [EAX + 0x154]     ; 004a1075
    CALL dword ptr [EDX + 0xf4]         ; 004a107b
    ADD ESP,0x4                         ; 004a1081
    CMP EAX,EBX                         ; 004a1084
    JNZ 0x004a1053                      ; 004a1086
        ;   XREF to: 004a1053 (CONDITIONAL_JUMP)  ; LAB_004a1053
    PUSH EDI                            ; 004a1088
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004a1089
    PUSH EAX                            ; 004a108f
    MOV EDX,dword ptr [EAX + 0x154]     ; 004a1090
    CALL dword ptr [EDX + 0xf0]         ; 004a1096
    MOV EDI,dword ptr [EBX + 0x68]      ; 004a109c
    ADD ESP,0x4                         ; 004a109f
    CMP EDI,0x78a123                    ; 004a10a2 | DAT_0078a123
    JNZ 0x004a10da                      ; 004a10a8
        ;   XREF to: 004a10da (CONDITIONAL_JUMP)  ; LAB_004a10da
    LEA EAX,[EBX + 0x158]               ; 004a10aa
    CMP dword ptr [EAX + 0x23a0],0x0    ; 004a10b0
    JZ 0x004a10da                       ; 004a10b7
        ;   XREF to: 004a10da (CONDITIONAL_JUMP)  ; LAB_004a10da
    XOR EAX,EAX                         ; 004a10b9
    MOV dword ptr [ESP + 0x4],EAX       ; 004a10bb
    MOV dword ptr [ESP + 0x8],EAX       ; 004a10bf
    LEA EAX,[ESP + 0x4]                 ; 004a10c3
    PUSH EAX                            ; 004a10c7
    MOV ECX,0xba83126f                  ; 004a10c8
    PUSH EBX                            ; 004a10cd
    MOV dword ptr [ESP + 0x14],ECX      ; 004a10ce
    CALL core_charactr.cpp_FUN_0042d750 ; 004a10d2
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004a10d7
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 004a10da
        ;   Label: LAB_004a10da
    POP EDI                             ; 004a10e4
    ADD ESP,0xc                         ; 004a10e5
    POP ESI                             ; 004a10e8
    POP EBX                             ; 004a10e9
    RET                                 ; 004a10ea

