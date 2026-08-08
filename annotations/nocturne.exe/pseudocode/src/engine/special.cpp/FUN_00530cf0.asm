; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_FUN_00530cf0(int *param_1,int param_2)
;
; Parameters:
; int *            Stack[0x4]:4   param_1
; int              Stack[0x8]:4   param_2
;
; Referenced Globals:
;   TerminatedCString s_engine_special_c_00594d27
;   TerminatedCString s_Unable_to_find_function_00594d3b
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00530cf0
        ;   Label: engine_special.cpp_FUN_00530cf0
    MOV EDX,dword ptr [ESP + 0x4]       ; 00530cf4
    MOV dword ptr [EDX],EAX             ; 00530cf8
    TEST EAX,EAX                        ; 00530cfa
    JZ 0x00530cff                       ; 00530cfc
        ;   XREF to: 00530cff (CONDITIONAL_JUMP)  ; LAB_00530cff
    RET                                 ; 00530cfe
    MOV EDX,0x594d27                    ; 00530cff | = "..\\engine\\special.c"
        ;   Label: LAB_00530cff
    MOV ECX,0x86                        ; 00530d04
    PUSH 0x594d3b                       ; 00530d09 | = "Unable to find function!"
    MOV dword ptr [0x01cc4800],EDX      ; 00530d0e | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 00530d14 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 00530d1a
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 00530d1f
    RET                                 ; 00530d22

