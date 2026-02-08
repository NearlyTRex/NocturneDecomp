; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl _FILE * __cdecl crt_stdio_c__freopen_FUN_00601b14(char *filename,char *mode,_FILE *stream)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; _FILE *          Stack[0xc]:4   stream
;
; XREF[1]:
;   core_main.c_initializeGameSystems_FUN_00507a60 at 00507b2e
;
; Referenced Globals:
;   ENTER_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8 = 00602434
;   EXIT_CRITICAL_SECTION_BY_INDEX_FUNC* PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec = 00602434
;   SPECIAL_DEVICE_CLEANUP_FUNC* g_SpecialDeviceCleanupFunc = 00000000
;
; Called Functions:
;   crt_stdio.c_OpenFileAndInitialize_FUN_0060190c
;   crt_stdio.c_OpenModeStringParser_FUN_006017d0
;   crt_sync.c_CriticalSectionStub_FUN_00602434
;   crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00601b14
        ;   Label: crt_stdio.c__freopen_FUN_00601b14
    PUSH ESI                            ; 00601b15
    PUSH EDI                            ; 00601b16
    PUSH EBP                            ; 00601b17
    SUB ESP,0x4                         ; 00601b18
    MOV ESI,dword ptr [ESP + 0x20]      ; 00601b1b
    MOV EAX,ESP                         ; 00601b1f
    PUSH EAX                            ; 00601b21
    MOV EDX,dword ptr [ESP + 0x20]      ; 00601b22
    PUSH EDX                            ; 00601b26
    CALL crt_stdio.c_OpenModeStringParser_FUN_006017d0 ; 00601b27
        ;   XREF to: 006017d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_OpenModeStringParser_FUN_006017d0(char * mode_string, char * output_flags)
    ADD ESP,0x8                         ; 00601b2c
    MOV EDI,EAX                         ; 00601b2f
    TEST EAX,EAX                        ; 00601b31
    JZ 0x00601b9e                       ; 00601b33
        ;   XREF to: 00601b9e (CONDITIONAL_JUMP)  ; LAB_00601b9e
    MOV EBX,dword ptr [ESI + 0x10]      ; 00601b35
    PUSH EBX                            ; 00601b38
    CALL dword ptr [0x00684ee8]         ; 00601b39 | PTR_crt_sync.c_EnterCriticalSection_FUN_00602434_00684ee8
    MOV ECX,dword ptr [0x00685288]      ; 00601b3f | g_SpecialDeviceCleanupFunc
    ADD ESP,0x4                         ; 00601b45
    TEST ECX,ECX                        ; 00601b48
    JZ 0x00601b56                       ; 00601b4a
        ;   XREF to: 00601b56 (CONDITIONAL_JUMP)  ; LAB_00601b56
    PUSH EBX                            ; 00601b4c
    CALL dword ptr [0x00685288]         ; 00601b4d | g_SpecialDeviceCleanupFunc
    ADD ESP,0x4                         ; 00601b53
    PUSH ESI                            ; 00601b56
        ;   Label: LAB_00601b56
    CALL crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94 ; 00601b57
        ;   XREF to: 00601a94 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_MultipleDoNothingCalls_FUN_00601a94()
    ADD ESP,0x4                         ; 00601b5c
    MOV ESI,EAX                         ; 00601b5f
    TEST EAX,EAX                        ; 00601b61
    JZ 0x00601b92                       ; 00601b63
        ;   XREF to: 00601b92 (CONDITIONAL_JUMP)  ; LAB_00601b92
    MOV ESI,dword ptr [EAX + 0xc]       ; 00601b65
    AND ESI,0x4000                      ; 00601b68
    PUSH EAX                            ; 00601b6e
    MOV dword ptr [EAX + 0xc],ESI       ; 00601b6f
    PUSH 0x0                            ; 00601b72
    MOV EBP,dword ptr [ESP + 0x8]       ; 00601b74
    PUSH EBP                            ; 00601b78
    MOV ESI,dword ptr [ESP + 0x28]      ; 00601b79
    XOR EAX,EAX                         ; 00601b7d
    PUSH EDI                            ; 00601b7f
    MOV AL,byte ptr [ESI]               ; 00601b80
    PUSH EAX                            ; 00601b82
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00601b83
    PUSH EAX                            ; 00601b87
    CALL crt_stdio.c_OpenFileAndInitialize_FUN_0060190c ; 00601b88
        ;   XREF to: 0060190c (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c_OpenFileAndInitialize_FUN_0060190c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, ...)
    ADD ESP,0x18                        ; 00601b8d
    MOV ESI,EAX                         ; 00601b90
    PUSH EBX                            ; 00601b92
        ;   Label: LAB_00601b92
    CALL dword ptr [0x00684eec]         ; 00601b93 | PTR_crt_sync.c_ExitCriticalSection_FUN_00602434_00684eec
    ADD ESP,0x4                         ; 00601b99
    MOV EAX,ESI                         ; 00601b9c
    ADD ESP,0x4                         ; 00601b9e
        ;   Label: LAB_00601b9e
    POP EBP                             ; 00601ba1
    POP EDI                             ; 00601ba2
    POP ESI                             ; 00601ba3
    POP EBX                             ; 00601ba4
    RET                                 ; 00601ba5

