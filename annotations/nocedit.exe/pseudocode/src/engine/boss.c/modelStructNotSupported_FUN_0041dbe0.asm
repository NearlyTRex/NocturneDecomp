; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_boss_c_modelStructNotSupported_FUN_0041dbe0(SMRGLHeaderExtended *header)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   header
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
;
; XREF[1]:
;   engine_model.c_getMRGLBounds_FUN_00528140 at 005285aa
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00616419
;   string s_modelStruct_not_supported_0061642a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041dbe0
        ;   Label: engine_boss.c_modelStructNotSupported_FUN_0041dbe0
    PUSH EDI                            ; 0041dbe1
    SUB ESP,0x34                        ; 0041dbe2
    MOV EBX,ESI                         ; 0041dbe5
    MOV EDX,0x616419                    ; 0041dbe7 | = "..\\engine\\boss.c"
    MOV ECX,0x44                        ; 0041dbec
    PUSH 0x61642a                       ; 0041dbf1 | = "modelStruct not supported"
    MOV EDI,ESI                         ; 0041dbf6
    LEA ESI,[ESP + 0x4]                 ; 0041dbf8
    MOV dword ptr [0x02f0ca48],EDX      ; 0041dbfc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041dc02 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041dc08
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    MOV ECX,0xd                         ; 0041dc0d
    ADD ESP,0x4                         ; 0041dc12
    MOVSD.REP ES:EDI,ESI                ; 0041dc15
    MOV EAX,EBX                         ; 0041dc17
    ADD ESP,0x34                        ; 0041dc19
    POP EDI                             ; 0041dc1c
    POP EBX                             ; 0041dc1d
    RET                                 ; 0041dc1e

