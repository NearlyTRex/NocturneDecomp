; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_mimic.cpp_CMimic_beginMorph_FUN_00520a80()
;
;
; XREF[1]:
;   core_mimic.cpp_FUN_0051fcc0 at 0052007f
;
; Referenced Globals:
;   TerminatedCString s_core_mimic_cpp_0063883f
;   TerminatedCString s_CMimic_beginMorph_can_t__00638851
;   TerminatedCString s_s_morphing_into_type_s_0063889a
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_ConsolePtr
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mimic.cpp_CMimic_processMorph_FUN_00520ba0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520a80
        ;   Label: core_mimic.cpp_CMimic_beginMorph_FUN_00520a80
    PUSH EDI                            ; 00520a81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520a82
    CMP dword ptr [EBX + 0x4ca54],0x0   ; 00520a86
    JZ 0x00520b6a                       ; 00520a8d | LAB_00520b6a
        ;   XREF to: 00520b6a (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 00520a93
        ;   Label: LAB_00520a93
    MOV EDX,dword ptr [EBX + 0x108]     ; 00520a99
    MOV dword ptr [EAX + 0x108],EDX     ; 00520a9f
    MOV EDX,dword ptr [EBX + 0x4ca54]   ; 00520aa5
    MOV EAX,dword ptr [EBX + 0x10c]     ; 00520aab
    MOV dword ptr [EDX + 0x10c],EAX     ; 00520ab1
    MOV EDX,dword ptr [EBX + 0x4ca54]   ; 00520ab7
    MOV EAX,dword ptr [EBX + 0x110]     ; 00520abd
    MOV dword ptr [EDX + 0x110],EAX     ; 00520ac3
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 00520ac9
    MOV dword ptr [EAX + 0xbeac],0x1    ; 00520acf
    LEA EAX,[EBX + 0x20]                ; 00520ad9
    MOV EDX,dword ptr [EBX + 0x4ca54]   ; 00520adc
    MOV ECX,dword ptr [EAX]             ; 00520ae2
    MOV dword ptr [EDX + 0x20],ECX      ; 00520ae4
    MOV ECX,dword ptr [EAX + 0x4]       ; 00520ae7
    MOV dword ptr [EDX + 0x24],ECX      ; 00520aea
    MOV ECX,dword ptr [EAX + 0x8]       ; 00520aed
    MOV dword ptr [EDX + 0x28],ECX      ; 00520af0
    MOV EAX,dword ptr [EAX + 0xc]       ; 00520af3
    MOV dword ptr [EDX + 0x2c],EAX      ; 00520af6
    MOV EAX,dword ptr [EBX + 0x4ca54]   ; 00520af9
    LEA EDX,[EBX + 0x30]                ; 00520aff
    ADD EAX,0x30                        ; 00520b02
    CMP EAX,EDX                         ; 00520b05
    JZ 0x00520b19                       ; 00520b07 | LAB_00520b19
        ;   XREF to: 00520b19 (CONDITIONAL_JUMP)
    MOV ECX,dword ptr [EDX]             ; 00520b09
    MOV dword ptr [EAX],ECX             ; 00520b0b
    MOV ECX,dword ptr [EDX + 0x4]       ; 00520b0d
    MOV dword ptr [EAX + 0x4],ECX       ; 00520b10
    MOV ECX,dword ptr [EDX + 0x8]       ; 00520b13
    MOV dword ptr [EAX + 0x8],ECX       ; 00520b16
    PUSH 0x1                            ; 00520b19
        ;   Label: LAB_00520b19
    PUSH 0x0                            ; 00520b1b
    LEA EAX,[EBX + 0x158]               ; 00520b1d
    PUSH EAX                            ; 00520b23
    MOV dword ptr [EBX + 0x4ca50],0x0   ; 00520b24
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00520b2e | void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00520b33
    PUSH 0x0                            ; 00520b36
    PUSH EBX                            ; 00520b38
    CALL core_mimic.cpp_CMimic_processMorph_FUN_00520ba0 ; 00520b39 | undefined core_mimic.cpp_CMimic_processMorph_FUN_00520ba0()
        ;   XREF to: 00520ba0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00520b3e
    LEA EAX,[EBX + 0x4bdfc]             ; 00520b41
    PUSH EAX                            ; 00520b47
    PUSH EBX                            ; 00520b48
    PUSH 0x63889a                       ; 00520b49 | = "%s morphing into type %s\n" | s_s_morphing_into_type_s_0063889a = %s morphing into type %s

    MOV EDI,dword ptr [0x0066e8e0]      ; 00520b4e | CConsole * g_CConsolePtr
    PUSH EDI                            ; 00520b54 | CConsole g_ConsolePtr
    MOV dword ptr [EBX + 0xfc],0x1      ; 00520b55
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00520b5f | void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00520b64
    POP EDI                             ; 00520b67
    POP EBX                             ; 00520b68
    RET                                 ; 00520b69
    PUSH ESI                            ; 00520b6a
        ;   Label: LAB_00520b6a
    MOV ECX,0x63883f                    ; 00520b6b | = "..\\core\\mimic.cpp" | s_core_mimic_cpp_0063883f = ..\core\mimic.cpp
    MOV ESI,0x499                       ; 00520b70
    PUSH 0x638851                       ; 00520b75 | = "CMimic::beginMorph() - can't do this ..." | s_CMimic_beginMorph_can_t__00638851 = CMimic::beginMorph() - can't do this unless morphActor has been created!
    MOV dword ptr [0x02f0ca48],ECX      ; 00520b7a | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00520b80 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00520b86 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00520b8b
    POP ESI                             ; 00520b8e
    JMP 0x00520a93                      ; 00520b8f | LAB_00520a93
        ;   XREF to: 00520a93 (UNCONDITIONAL_JUMP)

