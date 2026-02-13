; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_event_cpp_CEventList_setSfxHandle_FUN_004b0c80(CEventList *this_ptr,char *name,uint sfx_handle)
;
; Parameters:
; CEventList *     Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
; uint             Stack[0xc]:4   sfx_handle
;
; XREF[1]:
;   core_event.cpp_CEventList_executeCommand_FUN_004aacc0 at 004ac5a2
;
; Referenced Globals:
;   TerminatedCString s_core_event_cpp_00625ca8
;   TerminatedCString s_CEventList_setSfxHandle__00625cba
;   TerminatedCString s_core_event_cpp_00625ce3
;   TerminatedCString s_CEventList_setSfxHandle__00625cf5
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60
;   core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0c80
        ;   Label: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
    PUSH ESI                            ; 004b0c81
    PUSH EDI                            ; 004b0c82
    PUSH EBP                            ; 004b0c83
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b0c84
    MOV ESI,dword ptr [ESP + 0x18]      ; 004b0c88
    PUSH EBX                            ; 004b0c8c
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004b0c8d
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b0c92
    PUSH ESI                            ; 004b0c95
    PUSH EBX                            ; 004b0c96
    CALL core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60 ; 004b0c97
        ;   XREF to: 004b0d60 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60(CEventList * this_ptr, char * name)
    ADD ESP,0x8                         ; 004b0c9c
    MOV EDX,EAX                         ; 004b0c9f
    TEST EAX,EAX                        ; 004b0ca1
    JGE 0x004b0ce0                      ; 004b0ca3
        ;   XREF to: 004b0ce0 (CONDITIONAL_JUMP)  ; LAB_004b0ce0
    CMP dword ptr [EBX + 0x3ac8],0x14   ; 004b0ca5
    JL 0x004b0cd1                       ; 004b0cac
        ;   XREF to: 004b0cd1 (CONDITIONAL_JUMP)  ; LAB_004b0cd1
    MOV ECX,0x625ca8                    ; 004b0cae | = "..\\core\\event.cpp"
    MOV EDI,0xba6                       ; 004b0cb3
    PUSH 0x625cba                       ; 004b0cb8 | = "CEventList::setSfxHandle - too many sfx!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004b0cbd | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 004b0cc3 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b0cc9
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004b0cce
    MOV EDX,dword ptr [EBX + 0x3ac8]    ; 004b0cd1
        ;   Label: LAB_004b0cd1
    LEA EAX,[EDX + 0x1]                 ; 004b0cd7
    MOV dword ptr [EBX + 0x3ac8],EAX    ; 004b0cda
    LEA EAX,[EDX*0x8 + 0x0]             ; 004b0ce0
        ;   Label: LAB_004b0ce0
    ADD EAX,EDX                         ; 004b0ce7
    LEA EBP,[EBX + 0x3acc]              ; 004b0ce9
    SHL EAX,0x5                         ; 004b0cef
    MOV EDI,ESI                         ; 004b0cf2
    ADD EBP,EAX                         ; 004b0cf4
    SUB ECX,ECX                         ; 004b0cf6
    DEC ECX                             ; 004b0cf8
    XOR EAX,EAX                         ; 004b0cf9
    SCASB.REPNE ES:EDI                  ; 004b0cfb
    NOT ECX                             ; 004b0cfd
    DEC ECX                             ; 004b0cff
    CMP ECX,0x14                        ; 004b0d00
    JNC 0x004b0d37                      ; 004b0d03
        ;   XREF to: 004b0d37 (CONDITIONAL_JUMP)  ; LAB_004b0d37
    LEA EDI,[EBP + 0x4]                 ; 004b0d05
        ;   Label: LAB_004b0d05
    PUSH EDI                            ; 004b0d08
    MOV AL,byte ptr [ESI]               ; 004b0d09
        ;   Label: LAB_004b0d09
    MOV byte ptr [EDI],AL               ; 004b0d0b
    CMP AL,0x0                          ; 004b0d0d
    JZ 0x004b0d21                       ; 004b0d0f
        ;   XREF to: 004b0d21 (CONDITIONAL_JUMP)  ; LAB_004b0d21
    MOV AL,byte ptr [ESI + 0x1]         ; 004b0d11
    ADD ESI,0x2                         ; 004b0d14
    MOV byte ptr [EDI + 0x1],AL         ; 004b0d17
    ADD EDI,0x2                         ; 004b0d1a
    CMP AL,0x0                          ; 004b0d1d
    JNZ 0x004b0d09                      ; 004b0d1f
        ;   XREF to: 004b0d09 (CONDITIONAL_JUMP)  ; LAB_004b0d09
    POP EDI                             ; 004b0d21
        ;   Label: LAB_004b0d21
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b0d22
    PUSH EBX                            ; 004b0d26
    MOV dword ptr [EBP],EAX             ; 004b0d27
    CALL core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0 ; 004b0d2a
        ;   XREF to: 004b0db0 (UNCONDITIONAL_CALL)  ; void core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0(CEventList * this_ptr)
    ADD ESP,0x4                         ; 004b0d2f
    POP EBP                             ; 004b0d32
    POP EDI                             ; 004b0d33
    POP ESI                             ; 004b0d34
    POP EBX                             ; 004b0d35
    RET                                 ; 004b0d36
    PUSH 0x13                           ; 004b0d37
        ;   Label: LAB_004b0d37
    PUSH ESI                            ; 004b0d39
    MOV EAX,0x625ce3                    ; 004b0d3a | = "..\\core\\event.cpp"
    MOV EDX,0xbae                       ; 004b0d3f
    PUSH 0x625cf5                       ; 004b0d44 | = "CEventList::setSfxHandle - sfx handle..."
    MOV [0x02f0ca48],EAX                ; 004b0d49 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 004b0d4e | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004b0d54
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0xc                         ; 004b0d59
    JMP 0x004b0d05                      ; 004b0d5c
        ;   XREF to: 004b0d05 (UNCONDITIONAL_JUMP)  ; LAB_004b0d05

