; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004fd0e0(int layer,int mode_extension)
;
; Parameters:
; int              Stack[0x4]:4   layer
; int              Stack[0x8]:4   mode_extension
;
; Referenced Globals:
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fd0e0
        ;   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_004fd0e0
    PUSH ESI                            ; 004fd0e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fd0e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fd0e6
    CMP EBX,0x1                         ; 004fd0ea
    JL 0x004fd10f                       ; 004fd0ed
        ;   XREF to: 004fd10f (CONDITIONAL_JUMP)  ; LAB_004fd10f
    CMP EBX,0x3                         ; 004fd0ef
    JG 0x004fd10f                       ; 004fd0f2
        ;   XREF to: 004fd10f (CONDITIONAL_JUMP)  ; LAB_004fd10f
    TEST ESI,ESI                        ; 004fd0f4
    JL 0x004fd10f                       ; 004fd0f6
        ;   XREF to: 004fd10f (CONDITIONAL_JUMP)  ; LAB_004fd10f
    CMP ESI,0x3                         ; 004fd0f8
    JG 0x004fd10f                       ; 004fd0fb
        ;   XREF to: 004fd10f (CONDITIONAL_JUMP)  ; LAB_004fd10f
    SHL ESI,0x2                         ; 004fd0fd
    SHL EBX,0x4                         ; 004fd100
    LEA EAX,[EBX + ESI*0x1]             ; 004fd103
    MOV EAX,dword ptr [EAX + 0x6007c0]  ; 004fd106
    POP ESI                             ; 004fd10c
    POP EBX                             ; 004fd10d
    RET                                 ; 004fd10e
    PUSH 0x1d94b98                      ; 004fd10f
        ;   Label: LAB_004fd10f
    PUSH ESI                            ; 004fd114
    PUSH EBX                            ; 004fd115
    MOV EDX,0x5c9f11                    ; 004fd116
    MOV ECX,0x1ea                       ; 004fd11b
    PUSH 0x5c9f22                       ; 004fd120
    MOV dword ptr [0x01d71de0],EDX      ; 004fd125 | g_CurrentFilename
    MOV dword ptr [0x01d71de4],ECX      ; 004fd12b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004e4330 ; 004fd131
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4330(char * format)
    ADD ESP,0x10                        ; 004fd136
    SHL ESI,0x2                         ; 004fd139
    SHL EBX,0x4                         ; 004fd13c
    LEA EAX,[EBX + ESI*0x1]             ; 004fd13f
    MOV EAX,dword ptr [EAX + 0x6007c0]  ; 004fd142
    POP ESI                             ; 004fd148
    POP EBX                             ; 004fd149
    RET                                 ; 004fd14a

