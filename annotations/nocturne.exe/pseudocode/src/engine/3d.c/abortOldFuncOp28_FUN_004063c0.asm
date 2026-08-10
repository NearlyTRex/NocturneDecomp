; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLHeaderExtended * __cdecl engine_3d_c_abortOldFuncOp28_FUN_004063c0(SMRGLHeaderExtended *primitive)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   primitive
; Local Variables:
; undefined        Stack[-0x54]:1  local_54
;
; Referenced Globals:
;   TerminatedCString s_Old_func_d_005774c8
;   TerminatedCString s_engine_3d_c_005774d6
;   undefined4 DAT_006b0288
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004063c0
        ;   Label: engine_3d.c_abortOldFuncOp28_FUN_004063c0
    SUB ESP,0x50                        ; 004063c1
    MOV EAX,dword ptr [ESP + 0x58]      ; 004063c4
    MOV EDX,dword ptr [EAX]             ; 004063c8
    PUSH EDX                            ; 004063ca
    PUSH 0x5774c8                       ; 004063cb | = "Old func : %d"
    LEA EAX,[ESP + 0x8]                 ; 004063d0
    PUSH EAX                            ; 004063d4
    MOV EBX,0xd9                        ; 004063d5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004063da
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_00563c90(char * buffer, char * format)
    ADD ESP,0xc                         ; 004063df
    MOV EAX,ESP                         ; 004063e2
    MOV ECX,0x5774d6                    ; 004063e4 | = "..\\engine\\3d.c"
    PUSH EAX                            ; 004063e9
    MOV dword ptr [0x01cc4804],EBX      ; 004063ea | g_CurrentLineNumber
    MOV dword ptr [0x01cc4800],ECX      ; 004063f0 | g_CurrentFilename
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004063f6
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    MOV EAX,0x6b0288                    ; 004063fb | DAT_006b0288
    ADD ESP,0x4                         ; 00406400
    ADD ESP,0x50                        ; 00406403
    POP EBX                             ; 00406406
    RET                                 ; 00406407

