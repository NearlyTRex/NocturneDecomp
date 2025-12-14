; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void * sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10(int layer, int mode_extension)
;
; Parameters:
; int              Stack[0x4]:4   layer
; int              Stack[0x8]:4   mode_extension
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0063aca4
;   TerminatedCString s_js_bound_bad_layer_modex_0063acb5
;   void*[4][4] g_MpegLayer2AllocationTables
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   char[256] g_CurrentMp3Filename
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052ea10
        ;   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_0052ea10
    PUSH ESI                            ; 0052ea11
    MOV EBX,dword ptr [ESP + 0xc]       ; 0052ea12
    MOV ESI,dword ptr [ESP + 0x10]      ; 0052ea16
    CMP EBX,0x1                         ; 0052ea1a
    JL 0x0052ea3f                       ; 0052ea1d
        ;   XREF to: 0052ea3f (CONDITIONAL_JUMP)  ; LAB_0052ea3f
    CMP EBX,0x3                         ; 0052ea1f
    JG 0x0052ea3f                       ; 0052ea22
        ;   XREF to: 0052ea3f (CONDITIONAL_JUMP)  ; LAB_0052ea3f
    TEST ESI,ESI                        ; 0052ea24
    JL 0x0052ea3f                       ; 0052ea26
        ;   XREF to: 0052ea3f (CONDITIONAL_JUMP)  ; LAB_0052ea3f
    CMP ESI,0x3                         ; 0052ea28
    JG 0x0052ea3f                       ; 0052ea2b
        ;   XREF to: 0052ea3f (CONDITIONAL_JUMP)  ; LAB_0052ea3f
    SHL ESI,0x2                         ; 0052ea2d
    SHL EBX,0x4                         ; 0052ea30
    LEA EAX,[EBX + ESI*0x1]             ; 0052ea33
    MOV EAX,dword ptr [EAX + 0x67d820]  ; 0052ea36 | g_MpegLayer2AllocationTables
    POP ESI                             ; 0052ea3c
    POP EBX                             ; 0052ea3d
    RET                                 ; 0052ea3e
    PUSH 0x2f68188                      ; 0052ea3f | g_CurrentMp3Filename
        ;   Label: LAB_0052ea3f
    PUSH ESI                            ; 0052ea44
    PUSH EBX                            ; 0052ea45
    MOV EDX,0x63aca4                    ; 0052ea46 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1b2                       ; 0052ea4b
    PUSH 0x63acb5                       ; 0052ea50 | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0052ea55 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0052ea5b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0052ea61
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x10                        ; 0052ea66
    SHL ESI,0x2                         ; 0052ea69
    SHL EBX,0x4                         ; 0052ea6c
    LEA EAX,[EBX + ESI*0x1]             ; 0052ea6f
    MOV EAX,dword ptr [EAX + 0x67d820]  ; 0052ea72 | g_MpegLayer2AllocationTables
    POP ESI                             ; 0052ea78
    POP EBX                             ; 0052ea79
    RET                                 ; 0052ea7a

