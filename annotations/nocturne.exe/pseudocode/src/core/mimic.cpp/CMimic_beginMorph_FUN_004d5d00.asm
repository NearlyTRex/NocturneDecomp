; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_beginMorph_FUN_004d5d00(int param_1)
;
;
; XREF[1]:
;   core_mimic.cpp_FUN_004d4f30 at 004d52ef
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_00589513
;   TerminatedCString s_CMimic_beginMorph_can_t_00589525
;   TerminatedCString s_s_morphing_into_type_s_0058956e
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   core_mimic.cpp_CMimic_processMorph_FUN_004d5e20
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5d00
        ;   Label: core_mimic.cpp_CMimic_beginMorph_FUN_004d5d00
    PUSH EDI                            ; 004d5d01
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d5d02
    CMP dword ptr [EBX + 0x4757c],0x0   ; 004d5d06
    JZ 0x004d5dea                       ; 004d5d0d
        ;   XREF to: 004d5dea (CONDITIONAL_JUMP)  ; LAB_004d5dea
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d5d13
        ;   Label: LAB_004d5d13
    MOV EDX,dword ptr [EBX + 0x108]     ; 004d5d19
    MOV dword ptr [EAX + 0x108],EDX     ; 004d5d1f
    MOV EDX,dword ptr [EBX + 0x4757c]   ; 004d5d25
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004d5d2b
    MOV dword ptr [EDX + 0x10c],EAX     ; 004d5d31
    MOV EDX,dword ptr [EBX + 0x4757c]   ; 004d5d37
    MOV EAX,dword ptr [EBX + 0x110]     ; 004d5d3d
    MOV dword ptr [EDX + 0x110],EAX     ; 004d5d43
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d5d49
    MOV dword ptr [EAX + 0xbd14],0x1    ; 004d5d4f
    LEA EAX,[EBX + 0x20]                ; 004d5d59
    MOV EDX,dword ptr [EBX + 0x4757c]   ; 004d5d5c
    MOV ECX,dword ptr [EAX]             ; 004d5d62
    MOV dword ptr [EDX + 0x20],ECX      ; 004d5d64
    MOV ECX,dword ptr [EAX + 0x4]       ; 004d5d67
    MOV dword ptr [EDX + 0x24],ECX      ; 004d5d6a
    MOV ECX,dword ptr [EAX + 0x8]       ; 004d5d6d
    MOV dword ptr [EDX + 0x28],ECX      ; 004d5d70
    MOV EAX,dword ptr [EAX + 0xc]       ; 004d5d73
    MOV dword ptr [EDX + 0x2c],EAX      ; 004d5d76
    MOV EAX,dword ptr [EBX + 0x4757c]   ; 004d5d79
    LEA EDX,[EBX + 0x30]                ; 004d5d7f
    ADD EAX,0x30                        ; 004d5d82
    CMP EAX,EDX                         ; 004d5d85
    JZ 0x004d5d99                       ; 004d5d87
        ;   XREF to: 004d5d99 (CONDITIONAL_JUMP)  ; LAB_004d5d99
    MOV ECX,dword ptr [EDX]             ; 004d5d89
    MOV dword ptr [EAX],ECX             ; 004d5d8b
    MOV ECX,dword ptr [EDX + 0x4]       ; 004d5d8d
    MOV dword ptr [EAX + 0x4],ECX       ; 004d5d90
    MOV ECX,dword ptr [EDX + 0x8]       ; 004d5d93
    MOV dword ptr [EAX + 0x8],ECX       ; 004d5d96
    PUSH 0x1                            ; 004d5d99
        ;   Label: LAB_004d5d99
    PUSH 0x0                            ; 004d5d9b
    LEA EAX,[EBX + 0x150]               ; 004d5d9d
    PUSH EAX                            ; 004d5da3
    MOV dword ptr [EBX + 0x47578],0x0   ; 004d5da4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004d5dae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004d5db3
    PUSH 0x0                            ; 004d5db6
    PUSH EBX                            ; 004d5db8
    CALL core_mimic.cpp_CMimic_processMorph_FUN_004d5e20 ; 004d5db9
        ;   XREF to: 004d5e20 (UNCONDITIONAL_CALL)  ; undefined core_mimic.cpp_CMimic_processMorph_FUN_004d5e20()
    ADD ESP,0x8                         ; 004d5dbe
    LEA EAX,[EBX + 0x46924]             ; 004d5dc1
    PUSH EAX                            ; 004d5dc7
    PUSH EBX                            ; 004d5dc8
    PUSH 0x58956e                       ; 004d5dc9 | = "%s morphing into type %s\n"
    MOV EDI,dword ptr [0x005ad350]      ; 004d5dce | PTR_DAT_005ad350
    PUSH EDI                            ; 004d5dd4 | DAT_0077ad0c
    MOV dword ptr [EBX + 0xfc],0x1      ; 004d5dd5
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004d5ddf
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 004d5de4
    POP EDI                             ; 004d5de7
    POP EBX                             ; 004d5de8
    RET                                 ; 004d5de9
    PUSH ESI                            ; 004d5dea
        ;   Label: LAB_004d5dea
    MOV ECX,0x589513                    ; 004d5deb | = "..\\core\\mimic.cpp"
    MOV ESI,0x499                       ; 004d5df0
    PUSH 0x589525                       ; 004d5df5 | = "CMimic::beginMorph() - can't do this ..."
    MOV dword ptr [0x01cc4800],ECX      ; 004d5dfa | PTR_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004d5e00 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004d5e06
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 004d5e0b
    POP ESI                             ; 004d5e0e
    JMP 0x004d5d13                      ; 004d5e0f
        ;   XREF to: 004d5d13 (UNCONDITIONAL_JUMP)  ; LAB_004d5d13

