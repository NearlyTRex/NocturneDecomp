; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_writePBGHeader_FUN_0054b930(CPackedBitmap *this_ptr,_FILE *file_header)
;
; Parameters:
; CPackedBitmap *  Stack[0x4]:4   this_ptr
; _FILE *          Stack[0x8]:4   file_header
; Local Variables:
; undefined        Stack[-0x10]:1  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   TerminatedCString s_cockpit_pkbitmap_cpp_0063f250
;   TerminatedCString s_Error_writing_PBG_header_0063f268
;   undefined4 s_PBG_00680ca0
;   undefined4 s__00680ca4
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_fwrite_FUN_005fdc00
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0054b930
        ;   Label: cockpit_pkbitmap.cpp_CPackedBitmap_writePBGHeader_FUN_0054b930
    PUSH EDI                            ; 0054b931
    SUB ESP,0x8                         ; 0054b932
    MOV ECX,0x4                         ; 0054b935
    MOV ESI,0x680ca0                    ; 0054b93a | s_PBG_00680ca0
    MOV EDI,ESP                         ; 0054b93f
    MOV EDX,dword ptr [ESP + 0x18]      ; 0054b941
    PUSH EDI                            ; 0054b945
    MOV EAX,ECX                         ; 0054b946
    SHR ECX,0x2                         ; 0054b948
    MOVSD.REP ES:EDI,ESI                ; 0054b94b | s_PBG_00680ca0
    MOV CL,AL                           ; 0054b94d
    AND CL,0x3                          ; 0054b94f
    MOVSB.REP ES:EDI,ESI                ; 0054b952 | s__00680ca4
    POP EDI                             ; 0054b954
    PUSH EDX                            ; 0054b955
    PUSH 0x1                            ; 0054b956
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0054b958
    PUSH 0x8                            ; 0054b95c
    MOV dword ptr [ESP + 0x10],EDI      ; 0054b95e
    LEA EDI,[ESP + 0xc]                 ; 0054b962
    PUSH EDI                            ; 0054b966
    CALL crt_stdio.c_fwrite_FUN_005fdc00 ; 0054b967
        ;   XREF to: 005fdc00 (UNCONDITIONAL_CALL)  ; SIZE_T crt_stdio.c_fwrite_FUN_005fdc00(void * ptr, SIZE_T size, SIZE_T count, _FILE * file)
    ADD ESP,0x10                        ; 0054b96c
    MOV EDI,dword ptr [ESP + 0x18]      ; 0054b96f
    TEST byte ptr [EDI + 0xc],0x20      ; 0054b973
    JNZ 0x0054b97f                      ; 0054b977
        ;   XREF to: 0054b97f (CONDITIONAL_JUMP)  ; LAB_0054b97f
    ADD ESP,0x8                         ; 0054b979
    POP EDI                             ; 0054b97c
    POP ESI                             ; 0054b97d
    RET                                 ; 0054b97e
    PUSH EBX                            ; 0054b97f
        ;   Label: LAB_0054b97f
    MOV ECX,0x63f250                    ; 0054b980 | = "..\\cockpit\\pkbitmap.cpp"
    MOV EBX,0x538                       ; 0054b985
    PUSH 0x63f268                       ; 0054b98a | = "Error writing PBG header"
    MOV dword ptr [0x02f0ca48],ECX      ; 0054b98f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0054b995 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0054b99b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0054b9a0
    POP EBX                             ; 0054b9a3
    ADD ESP,0x8                         ; 0054b9a4
    POP EDI                             ; 0054b9a7
    POP ESI                             ; 0054b9a8
    RET                                 ; 0054b9a9

