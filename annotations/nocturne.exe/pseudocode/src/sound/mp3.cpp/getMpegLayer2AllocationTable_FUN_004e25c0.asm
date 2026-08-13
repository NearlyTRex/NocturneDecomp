; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void * __cdecl sound_mp3_cpp_getMpegLayer2AllocationTable_FUN_004e25c0(int layer,int mode_extension)
;
; Parameters:
; int              Stack[0x4]:4   layer
; int              Stack[0x8]:4   mode_extension
;
; Referenced Globals:
;   TerminatedCString s_sound_mp3_cpp_0058b52a
;   TerminatedCString s_js_bound_bad_layer_modex_0058b53b
;   undefined4 s_CMotionController_005bb246+0xa
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_01cd8b28
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e25c0
        ;   Label: sound_mp3.cpp_getMpegLayer2AllocationTable_FUN_004e25c0
    PUSH ESI                            ; 004e25c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e25c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004e25c6
    CMP EBX,0x1                         ; 004e25ca
    JL 0x004e25ef                       ; 004e25cd
        ;   XREF to: 004e25ef (CONDITIONAL_JUMP)  ; LAB_004e25ef
    CMP EBX,0x3                         ; 004e25cf
    JG 0x004e25ef                       ; 004e25d2
        ;   XREF to: 004e25ef (CONDITIONAL_JUMP)  ; LAB_004e25ef
    TEST ESI,ESI                        ; 004e25d4
    JL 0x004e25ef                       ; 004e25d6
        ;   XREF to: 004e25ef (CONDITIONAL_JUMP)  ; LAB_004e25ef
    CMP ESI,0x3                         ; 004e25d8
    JG 0x004e25ef                       ; 004e25db
        ;   XREF to: 004e25ef (CONDITIONAL_JUMP)  ; LAB_004e25ef
    SHL ESI,0x2                         ; 004e25dd
    SHL EBX,0x4                         ; 004e25e0
    LEA EAX,[EBX + ESI*0x1]             ; 004e25e3
    MOV EAX,dword ptr [EAX + 0x5bb250]  ; 004e25e6 | s_CMotionController_005bb246+0xa
    POP ESI                             ; 004e25ec
    POP EBX                             ; 004e25ed
    RET                                 ; 004e25ee
    PUSH 0x1cd8b28                      ; 004e25ef | DAT_01cd8b28
        ;   Label: LAB_004e25ef
    PUSH ESI                            ; 004e25f4
    PUSH EBX                            ; 004e25f5
    MOV EDX,0x58b52a                    ; 004e25f6 | = "..\\sound\\mp3.cpp"
    MOV ECX,0x1b1                       ; 004e25fb
    PUSH 0x58b53b                       ; 004e2600 | = "js_bound bad layer/modext (%d/%d)  Fi..."
    MOV dword ptr [0x01cc4800],EDX      ; 004e2605 | g_CurrentFilename
    MOV dword ptr [0x01cc4804],ECX      ; 004e260b | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e2611
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x10                        ; 004e2616
    SHL ESI,0x2                         ; 004e2619
    SHL EBX,0x4                         ; 004e261c
    LEA EAX,[EBX + ESI*0x1]             ; 004e261f
    MOV EAX,dword ptr [EAX + 0x5bb250]  ; 004e2622 | s_CMotionController_005bb246+0xa
    POP ESI                             ; 004e2628
    POP EBX                             ; 004e2629
    RET                                 ; 004e262a

