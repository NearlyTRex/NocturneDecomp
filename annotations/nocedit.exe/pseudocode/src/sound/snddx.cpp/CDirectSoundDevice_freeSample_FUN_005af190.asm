; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190(CDirectSoundDevice * this_ptr, int buffer_id)
;
; Parameters:
; CDirectSoundDevice * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   buffer_id
;
; Referenced Globals:
;   TerminatedCString s_sound_snddx_cpp_00651c57
;   TerminatedCString s_DirectSoundDevice_freeSa_00651c6a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
;   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005af190
        ;   Label: sound_snddx.cpp_CDirectSoundDevice_freeSample_FUN_005af190
    PUSH ESI                            ; 005af191
    PUSH EBP                            ; 005af192
    MOV EBX,dword ptr [ESP + 0x14]      ; 005af193
    TEST EBX,EBX                        ; 005af197
    JLE 0x005af1a0                      ; 005af199
        ;   XREF to: 005af1a0 (CONDITIONAL_JUMP)  ; LAB_005af1a0
    CMP EBX,0x19                        ; 005af19b
    JL 0x005af1ef                       ; 005af19e
        ;   XREF to: 005af1ef (CONDITIONAL_JUMP)  ; LAB_005af1ef
    PUSH EDI                            ; 005af1a0
        ;   Label: LAB_005af1a0
    PUSH EBX                            ; 005af1a1
    MOV ESI,0x651c57                    ; 005af1a2 | = "..\\sound\\snddx.cpp"
    MOV EDI,0x2b1                       ; 005af1a7
    PUSH 0x651c6a                       ; 005af1ac | = "DirectSoundDevice::freeSample - Inval..."
    MOV dword ptr [0x02f0ca48],ESI      ; 005af1b1 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 005af1b7 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005af1bd
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 005af1c2
    POP EDI                             ; 005af1c5
    LEA ESI,[EBX*0x4 + 0x0]             ; 005af1c6
        ;   Label: LAB_005af1c6
    ADD ESI,0x3f6a9e0                   ; 005af1cd | g_DirectSoundSampleBuffers
    MOV EBP,dword ptr [ESI]             ; 005af1d3 | g_DirectSoundSampleBuffers
    TEST EBP,EBP                        ; 005af1d5
    JNZ 0x005af20e                      ; 005af1d7
        ;   XREF to: 005af20e (CONDITIONAL_JUMP)  ; LAB_005af20e
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af1d9
        ;   Label: LAB_005af1d9
    ADD EAX,EBX                         ; 005af1e0
    XOR EDX,EDX                         ; 005af1e2
    MOV dword ptr [EAX*0x4 + 0x3f6ab3c],EDX ; 005af1e4 | g_DirectSoundBufferMetadata
    POP EBP                             ; 005af1eb
    POP ESI                             ; 005af1ec
    POP EBX                             ; 005af1ed
    RET                                 ; 005af1ee
    CMP dword ptr [EBX*0x4 + 0x3f6a9e0],0x0 ; 005af1ef | g_DirectSoundSampleBuffers
        ;   Label: LAB_005af1ef
    JZ 0x005af1a0                       ; 005af1f7
        ;   XREF to: 005af1a0 (CONDITIONAL_JUMP)  ; LAB_005af1a0
    LEA EAX,[EBX*0x4 + 0x0]             ; 005af1f9
    ADD EAX,EBX                         ; 005af200
    CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1 ; 005af202 | g_DirectSoundBufferMetadata
    JL 0x005af1a0                       ; 005af20a
        ;   XREF to: 005af1a0 (CONDITIONAL_JUMP)  ; LAB_005af1a0
    JMP 0x005af1c6                      ; 005af20c
        ;   XREF to: 005af1c6 (UNCONDITIONAL_JUMP)  ; LAB_005af1c6
    PUSH EBP                            ; 005af20e
        ;   Label: LAB_005af20e
    MOV EDX,dword ptr [EBP]             ; 005af20f
    CALL dword ptr [EDX + 0x8]          ; 005af212
    MOV dword ptr [ESI],0x0             ; 005af215 | g_DirectSoundSampleBuffers
    JMP 0x005af1d9                      ; 005af21b
        ;   XREF to: 005af1d9 (UNCONDITIONAL_JUMP)  ; LAB_005af1d9

