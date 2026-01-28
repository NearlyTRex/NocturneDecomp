; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_setutil_cpp_C3DSLight_addFilter_FUN_00586fa0 (C3DSLight *this_ptr,char *filter_name,float duration,int filter_mode)
;
; Parameters:
; C3DSLight *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   filter_name
; float            Stack[0xc]:4   duration
; int              Stack[0x10]:4   filter_mode
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055bdf4
;
; Referenced Globals:
;   TerminatedCString s_core_setutil_cpp_00649794
;   TerminatedCString s_C3DSLight_addFilter_too__006497a8
;   CFilterCache* g_CFilterCachePtr = 020a4c08
;   CFilterCache g_CFilterCacheInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586fa0
        ;   Label: core_setutil.cpp_C3DSLight_addFilter_FUN_00586fa0
    PUSH ESI                            ; 00586fa1
    PUSH EDI                            ; 00586fa2
    PUSH EBP                            ; 00586fa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00586fa4
    CMP dword ptr [EBX + 0x11ec],0x20   ; 00586fa8
    JGE 0x0058705a                      ; 00586faf
        ;   XREF to: 0058705a (CONDITIONAL_JUMP)  ; LAB_0058705a
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00586fb5
        ;   Label: LAB_00586fb5
    LEA EAX,[EDX*0x4 + 0x0]             ; 00586fbb
    ADD EAX,EDX                         ; 00586fc2
    LEA ECX,[EBX + 0x11f4]              ; 00586fc4
    SHL EAX,0x3                         ; 00586fca
    MOV ESI,dword ptr [ESP + 0x18]      ; 00586fcd
    LEA EDI,[ECX + EAX*0x1]             ; 00586fd1
    PUSH EDI                            ; 00586fd4
    MOV AL,byte ptr [ESI]               ; 00586fd5
        ;   Label: LAB_00586fd5
    MOV byte ptr [EDI],AL               ; 00586fd7
    CMP AL,0x0                          ; 00586fd9
    JZ 0x00586fed                       ; 00586fdb
        ;   XREF to: 00586fed (CONDITIONAL_JUMP)  ; LAB_00586fed
    MOV AL,byte ptr [ESI + 0x1]         ; 00586fdd
    ADD ESI,0x2                         ; 00586fe0
    MOV byte ptr [EDI + 0x1],AL         ; 00586fe3
    ADD EDI,0x2                         ; 00586fe6
    CMP AL,0x0                          ; 00586fe9
    JNZ 0x00586fd5                      ; 00586feb
        ;   XREF to: 00586fd5 (CONDITIONAL_JUMP)  ; LAB_00586fd5
    POP EDI                             ; 00586fed
        ;   Label: LAB_00586fed
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00586fee
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00586ff4
    MOV dword ptr [EBX + EAX*0x4 + 0x16f4],EDX ; 00586ff8
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00586fff
    MOV EDX,dword ptr [ESP + 0x20]      ; 00587005
    MOV dword ptr [EBX + EAX*0x4 + 0x1774],EDX ; 00587009
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00587010
    LEA EAX,[EDX*0x4 + 0x0]             ; 00587016
    ADD EAX,EDX                         ; 0058701d
    MOV EDI,dword ptr [EBX + 0x11f0]    ; 0058701f
    SHL EAX,0x3                         ; 00587025
    PUSH EDI                            ; 00587028
    ADD ECX,EAX                         ; 00587029
    PUSH ECX                            ; 0058702b
    MOV EBP,dword ptr [0x0066efcc]      ; 0058702c | g_CFilterCachePtr
    PUSH EBP                            ; 00587032 | g_CFilterCacheInstance
    CALL core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060 ; 00587033
        ;   XREF to: 00470060 (UNCONDITIONAL_CALL)  ; CDemonFilter * core_dfilter.cpp_CFilterCache_getFilter_FUN_00470060(CFilterCache * this_ptr, char * filter_name, char * filter_filename, int enable_init)
    MOV EDX,dword ptr [EBX + 0x11ec]    ; 00587038
    MOV dword ptr [EBX + EDX*0x4 + 0x1810],EAX ; 0058703e
    MOV EAX,dword ptr [EBX + 0x11ec]    ; 00587045
    INC EAX                             ; 0058704b
    ADD ESP,0xc                         ; 0058704c
    MOV dword ptr [EBX + 0x11ec],EAX    ; 0058704f
    POP EBP                             ; 00587055
    POP EDI                             ; 00587056
    POP ESI                             ; 00587057
    POP EBX                             ; 00587058
    RET                                 ; 00587059
    PUSH 0x20                           ; 0058705a
        ;   Label: LAB_0058705a
    MOV ECX,0x649794                    ; 0058705c | = "..\\core\\setutil.cpp"
    MOV ESI,0x3b6                       ; 00587061
    PUSH 0x6497a8                       ; 00587066 | = "C3DSLight::addFilter - too many filte..."
    MOV dword ptr [0x02f0ca48],ECX      ; 0058706b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00587071 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00587077
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x8                         ; 0058707c
    JMP 0x00586fb5                      ; 0058707f
        ;   XREF to: 00586fb5 (UNCONDITIONAL_JUMP)  ; LAB_00586fb5

