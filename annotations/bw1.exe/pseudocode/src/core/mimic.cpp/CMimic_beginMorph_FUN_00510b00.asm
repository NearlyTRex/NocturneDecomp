; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(CMimic *this_ptr)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_mimic.cpp_CMimic_processAnimation_FUN_0050fba0 at 00510051
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_005e8a8c
;   TerminatedCString s_CMimic_beginMorph_can_t_005e8a9e
;   TerminatedCString s_s_morphing_into_type_s_005e8ae7
;   CConsole* g_CConsolePtr = 007db5f0
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   core_mimic.cpp_CMimic_processMorph_FUN_00510c20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   engine_console.cpp_CConsole_printf_FUN_00445430
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510b00
        ;   Label: core_mimic.cpp_CMimic_beginMorph_FUN_00510b00
    PUSH EDI                            ; 00510b01
    MOV EBX,dword ptr [ESP + 0xc]       ; 00510b02
    CMP dword ptr [EBX + 0x47ac0],0x0   ; 00510b06
    JZ 0x00510bea                       ; 00510b0d
        ;   XREF to: 00510bea (CONDITIONAL_JUMP)  ; LAB_00510bea
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 00510b13
        ;   Label: LAB_00510b13
    MOV EDX,dword ptr [EBX + 0x108]     ; 00510b19
    MOV dword ptr [EAX + 0x108],EDX     ; 00510b1f
    MOV EDX,dword ptr [EBX + 0x47ac0]   ; 00510b25
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00510b2b
    MOV dword ptr [EDX + 0x10c],EAX     ; 00510b31
    MOV EDX,dword ptr [EBX + 0x47ac0]   ; 00510b37
    MOV EAX,dword ptr [EBX + 0x110]     ; 00510b3d
    MOV dword ptr [EDX + 0x110],EAX     ; 00510b43
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 00510b49
    MOV dword ptr [EAX + 0xc258],0x1    ; 00510b4f
    LEA EAX,[EBX + 0x20]                ; 00510b59
    MOV EDX,dword ptr [EBX + 0x47ac0]   ; 00510b5c
    MOV ECX,dword ptr [EAX]             ; 00510b62
    MOV dword ptr [EDX + 0x20],ECX      ; 00510b64
    MOV ECX,dword ptr [EAX + 0x4]       ; 00510b67
    MOV dword ptr [EDX + 0x24],ECX      ; 00510b6a
    MOV ECX,dword ptr [EAX + 0x8]       ; 00510b6d
    MOV dword ptr [EDX + 0x28],ECX      ; 00510b70
    MOV EAX,dword ptr [EAX + 0xc]       ; 00510b73
    MOV dword ptr [EDX + 0x2c],EAX      ; 00510b76
    MOV EAX,dword ptr [EBX + 0x47ac0]   ; 00510b79
    LEA EDX,[EBX + 0x30]                ; 00510b7f
    ADD EAX,0x30                        ; 00510b82
    CMP EAX,EDX                         ; 00510b85
    JZ 0x00510b99                       ; 00510b87
        ;   XREF to: 00510b99 (CONDITIONAL_JUMP)  ; LAB_00510b99
    MOV ECX,dword ptr [EDX]             ; 00510b89
    MOV dword ptr [EAX],ECX             ; 00510b8b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00510b8d
    MOV dword ptr [EAX + 0x4],ECX       ; 00510b90
    MOV ECX,dword ptr [EDX + 0x8]       ; 00510b93
    MOV dword ptr [EAX + 0x8],ECX       ; 00510b96
    PUSH 0x1                            ; 00510b99
        ;   Label: LAB_00510b99
    PUSH 0x0                            ; 00510b9b
    LEA EAX,[EBX + 0x158]               ; 00510b9d
    PUSH EAX                            ; 00510ba3
    MOV dword ptr [EBX + 0x47abc],0x0   ; 00510ba4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00510bae
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00510bb3
    PUSH 0x0                            ; 00510bb6
    PUSH EBX                            ; 00510bb8
    CALL core_mimic.cpp_CMimic_processMorph_FUN_00510c20 ; 00510bb9
        ;   XREF to: 00510c20 (UNCONDITIONAL_CALL)  ; void core_mimic.cpp_CMimic_processMorph_FUN_00510c20(CMimic * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00510bbe
    LEA EAX,[EBX + 0x46e68]             ; 00510bc1
    PUSH EAX                            ; 00510bc7
    PUSH EBX                            ; 00510bc8
    PUSH 0x5e8ae7                       ; 00510bc9 | = "%s morphing into type %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 00510bce | g_CConsolePtr
    PUSH EDI                            ; 00510bd4 | g_CConsoleInstance
    MOV dword ptr [EBX + 0xfc],0x1      ; 00510bd5
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00510bdf
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00510be4
    POP EDI                             ; 00510be7
    POP EBX                             ; 00510be8
    RET                                 ; 00510be9
    PUSH ESI                            ; 00510bea
        ;   Label: LAB_00510bea
    MOV ECX,0x5e8a8c                    ; 00510beb | = "..\\core\\mimic.cpp"
    MOV ESI,0x499                       ; 00510bf0
    PUSH 0x5e8a9e                       ; 00510bf5 | = "CMimic::beginMorph() - can't do this ..."
    MOV dword ptr [0x01d1d400],ECX      ; 00510bfa | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 00510c00 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 00510c06
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 00510c0b
    POP ESI                             ; 00510c0e
    JMP 0x00510b13                      ; 00510c0f
        ;   XREF to: 00510b13 (UNCONDITIONAL_JUMP)  ; LAB_00510b13

