; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_enemy_cpp_CEnemy_releaseVictim_FUN_004889d0(CEnemy *this_ptr)
;
; Parameters:
; CEnemy *         Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_CEnemy_stopGrabbing_s_005d2e12
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_0078a123
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_charactr.cpp_FUN_00423a60
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004889d0
        ;   Label: core_enemy.cpp_CEnemy_releaseVictim_FUN_004889d0
    PUSH ESI                            ; 004889d1
    SUB ESP,0xc                         ; 004889d2
    MOV EBX,dword ptr [ESP + 0x18]      ; 004889d5
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004889d9
    TEST EDX,EDX                        ; 004889df
    JNZ 0x004889e9                      ; 004889e1
        ;   XREF to: 004889e9 (CONDITIONAL_JUMP)  ; LAB_004889e9
    ADD ESP,0xc                         ; 004889e3
        ;   Label: LAB_004889e3
    POP ESI                             ; 004889e6
    POP EBX                             ; 004889e7
    RET                                 ; 004889e8
    PUSH EDX                            ; 004889e9
        ;   Label: LAB_004889e9
    PUSH 0x5d2e12                       ; 004889ea | = "CEnemy::stopGrabbing %s\n"
    MOV ESI,dword ptr [0x00609ed0]      ; 004889ef | g_CConsolePtr
    PUSH ESI                            ; 004889f5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004889f6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004889fb
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004889fe
    PUSH EAX                            ; 00488a04
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00488a05
    CALL dword ptr [EDX + 0xfc]         ; 00488a0b
    ADD ESP,0x4                         ; 00488a11
    CMP EAX,EBX                         ; 00488a14
    JNZ 0x004889e3                      ; 00488a16
        ;   XREF to: 004889e3 (CONDITIONAL_JUMP)  ; LAB_004889e3
    PUSH EDI                            ; 00488a18
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00488a19
    PUSH EAX                            ; 00488a1f
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00488a20
    CALL dword ptr [EDX + 0xf8]         ; 00488a26
    MOV EDI,dword ptr [EBX + 0x68]      ; 00488a2c
    ADD ESP,0x4                         ; 00488a2f
    CMP EDI,0x78a123                    ; 00488a32 | DAT_0078a123
    JNZ 0x00488a6a                      ; 00488a38
        ;   XREF to: 00488a6a (CONDITIONAL_JUMP)  ; LAB_00488a6a
    LEA EAX,[EBX + 0x2b4]               ; 00488a3a
    CMP dword ptr [EAX + 0x22b0],0x0    ; 00488a40
    JZ 0x00488a6a                       ; 00488a47
        ;   XREF to: 00488a6a (CONDITIONAL_JUMP)  ; LAB_00488a6a
    XOR EAX,EAX                         ; 00488a49
    MOV dword ptr [ESP + 0x4],EAX       ; 00488a4b
    MOV dword ptr [ESP + 0x8],EAX       ; 00488a4f
    LEA EAX,[ESP + 0x4]                 ; 00488a53
    PUSH EAX                            ; 00488a57
    MOV ECX,0xba83126f                  ; 00488a58
    PUSH EBX                            ; 00488a5d
    MOV dword ptr [ESP + 0x14],ECX      ; 00488a5e
    CALL core_charactr.cpp_FUN_00423a60 ; 00488a62
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00488a67
    MOV dword ptr [EBX + 0x10a78],0x0   ; 00488a6a
        ;   Label: LAB_00488a6a
    POP EDI                             ; 00488a74
    ADD ESP,0xc                         ; 00488a75
    POP ESI                             ; 00488a78
    POP EBX                             ; 00488a79
    RET                                 ; 00488a7a

