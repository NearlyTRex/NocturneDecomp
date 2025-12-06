; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_sndmain.cpp_generateSilence_FUN_005a5db0(void * buffer, uint bits_per_sample, uint num_samples)
;
; Parameters:
; void *           Stack[0x4]:4   buffer
; uint             Stack[0x8]:4   bits_per_sample
; uint             Stack[0xc]:4   num_samples
;
; Referenced Globals:
;   TerminatedCString s_sound_sndmain_cpp_0064fc6b
;   TerminatedCString s_generateSilence_invalid__0064fc80
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5db0
        ;   Label: sound_sndmain.cpp_generateSilence_FUN_005a5db0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a5db4
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a5db8
    CMP EAX,0x8                         ; 005a5dbc
    JC 0x005a5de0                       ; 005a5dbf | LAB_005a5de0
        ;   XREF to: 005a5de0 (CONDITIONAL_JUMP)
    JBE 0x005a5dd8                      ; 005a5dc1 | LAB_005a5dd8
        ;   XREF to: 005a5dd8 (CONDITIONAL_JUMP)
    CMP EAX,0x10                        ; 005a5dc3
    JNZ 0x005a5de0                      ; 005a5dc6 | LAB_005a5de0
        ;   XREF to: 005a5de0 (CONDITIONAL_JUMP)
    LEA EAX,[ECX + ECX*0x1]             ; 005a5dc8
    PUSH EAX                            ; 005a5dcb
    PUSH 0x0                            ; 005a5dcc
    PUSH EDX                            ; 005a5dce
        ;   Label: LAB_005a5dce
    CALL crt_memory.c_memset_FUN_005fde40 ; 005a5dcf | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 005a5dd4
    RET                                 ; 005a5dd7
    PUSH ECX                            ; 005a5dd8
        ;   Label: LAB_005a5dd8
    PUSH 0x80                           ; 005a5dd9
    JMP 0x005a5dce                      ; 005a5dde | LAB_005a5dce
        ;   XREF to: 005a5dce (UNCONDITIONAL_JUMP)
    MOV EDX,0x64fc6b                    ; 005a5de0 | = "..\\sound\\sndmain.cpp" | s_sound_sndmain_cpp_0064fc6b = ..\sound\sndmain.cpp
        ;   Label: LAB_005a5de0
    MOV ECX,0x5ca                       ; 005a5de5
    PUSH 0x64fc80                       ; 005a5dea | = "generateSilence - invalid bit depth!" | s_generateSilence_invalid__0064fc80 = generateSilence - invalid bit depth!
    MOV dword ptr [0x02f0ca48],EDX      ; 005a5def | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005a5df5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005a5dfb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005a5e00
    RET                                 ; 005a5e03

