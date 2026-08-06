; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_motion_cpp_CMotionController_save_FUN_004e2220(CMotionController *this_ptr,_FILE *file_handle,char *indent_prefix)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_handle
; char *           Stack[0xc]:4   indent_prefix
; Local Variables:
; undefined8       Stack[-0x14]:8  local_14
;
; XREF[1]:
;   core_actor.cpp_archiveMotionState_FUN_0040cb00 at 0040cbbc
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0058b40a
;   TerminatedCString s_Tried_to_save_motion_con_0058b41d
;   TerminatedCString s_s_s_g_current_motion_nam_0058b468
;   TerminatedCString s_s_s_g_current_motion_nam_0058b49a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_004c8440
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   crt_stdio.c_fprintf_FUN_005644f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e2220
        ;   Label: core_motion.cpp_CMotionController_save_FUN_004e2220
    PUSH EDI                            ; 004e2221
    PUSH EBP                            ; 004e2222
    MOV EBP,ESP                         ; 004e2223
    MOV EBX,dword ptr [EBP + 0x10]      ; 004e2225
    CMP byte ptr [EBX + 0x30],0x0       ; 004e2228
    JNZ 0x004e2281                      ; 004e222c
        ;   XREF to: 004e2281 (CONDITIONAL_JUMP)  ; LAB_004e2281
    CMP dword ptr [EBX],0x0             ; 004e222e
    JNZ 0x004e2255                      ; 004e2231
        ;   XREF to: 004e2255 (CONDITIONAL_JUMP)  ; LAB_004e2255
    MOV EDI,0x58b40a                    ; 004e2233 | = "..\\core\\motion.cpp"
    MOV EAX,0x536                       ; 004e2238
    PUSH 0x58b41d                       ; 004e223d | = "Tried to save motion controller state..."
    MOV dword ptr [0x01cc4800],EDI      ; 004e2242 | g_CurrentFilename
    MOV [0x01cc4804],EAX                ; 004e2248 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_004c8440 ; 004e224d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004c8440(char * format)
    ADD ESP,0x4                         ; 004e2252
    SUB ESP,0x8                         ; 004e2255
        ;   Label: LAB_004e2255
    FLD float ptr [EBX + 0x8]           ; 004e2258
    FSTP double ptr [ESP]               ; 004e225b
    PUSH EBX                            ; 004e225e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004e225f
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 004e2264
    PUSH EAX                            ; 004e2267
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e2268
    PUSH EDX                            ; 004e226b
    PUSH 0x58b468                       ; 004e226c | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e2271
    PUSH ECX                            ; 004e2274
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e2275
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005644f0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004e227a
    POP EBP                             ; 004e227d
    POP EDI                             ; 004e227e
    POP EBX                             ; 004e227f
    RET                                 ; 004e2280
    SUB ESP,0x8                         ; 004e2281
        ;   Label: LAB_004e2281
    FLD float ptr [EBX + 0x8]           ; 004e2284
    ADD EBX,0x30                        ; 004e2287
    FSTP double ptr [ESP]               ; 004e228a
    PUSH EBX                            ; 004e228d
    MOV EDX,dword ptr [EBP + 0x18]      ; 004e228e
    PUSH EDX                            ; 004e2291
    PUSH 0x58b49a                       ; 004e2292 | = "%s\"%s\",%g // current motion name, c..."
    MOV ECX,dword ptr [EBP + 0x14]      ; 004e2297
    PUSH ECX                            ; 004e229a
    CALL crt_stdio.c_fprintf_FUN_005644f0 ; 004e229b
        ;   XREF to: 005644f0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005644f0(_FILE * file, char * format)
    ADD ESP,0x18                        ; 004e22a0
    POP EBP                             ; 004e22a3
    POP EDI                             ; 004e22a4
    POP EBX                             ; 004e22a5
    RET                                 ; 004e22a6

