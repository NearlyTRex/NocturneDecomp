; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl SMRGLHeaderExtended * __cdecl engine_3d_c_renderPrim_FUN_00407920(SMRGLHeaderPrimitive *primitive)
;
; Parameters:
; SMRGLHeaderPrimitive * Stack[0x4]:4   primitive
; Local Variables:
; undefined        Stack[-0x104]:1  local_104
;
; Referenced Globals:
;   TerminatedCString s_engine_3d_c_006134a9
;   TerminatedCString s_renderPrim_Bad_input_poi_006134b8
;   TerminatedCString s_Bad_prim_d_006134d6
;   TerminatedCString s_engine_3d_c_006134e4
;   MRGLBlockHandlerFunc*[67] g_MRGLBlockHandlerTable
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c__sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00407920
        ;   Label: engine_3d.c_renderPrim_FUN_00407920
    SUB ESP,0x100                       ; 00407921
    MOV EBX,dword ptr [ESP + 0x108]     ; 00407927
    TEST EBX,EBX                        ; 0040792e
    JZ 0x0040797d                       ; 00407930
        ;   XREF to: 0040797d (CONDITIONAL_JUMP)  ; LAB_0040797d
    MOV EAX,dword ptr [EBX]             ; 00407932
        ;   Label: LAB_00407932
    TEST EAX,EAX                        ; 00407934
    JL 0x0040793d                       ; 00407936
        ;   XREF to: 0040793d (CONDITIONAL_JUMP)  ; LAB_0040793d
    CMP EAX,0x43                        ; 00407938
    JL 0x004079a2                       ; 0040793b
        ;   XREF to: 004079a2 (CONDITIONAL_JUMP)  ; LAB_004079a2
    PUSH ESI                            ; 0040793d
        ;   Label: LAB_0040793d
    PUSH EAX                            ; 0040793e
    PUSH 0x6134d6                       ; 0040793f | = "Bad prim : %d"
    LEA EAX,[ESP + 0xc]                 ; 00407944
    PUSH EAX                            ; 00407948
    MOV EBX,0x6134e4                    ; 00407949 | = "..\\engine\\3d.c"
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0040794e
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 00407953
    LEA EAX,[ESP + 0x4]                 ; 00407956
    MOV ESI,0xc8b                       ; 0040795a
    PUSH EAX                            ; 0040795f
    MOV dword ptr [0x02f0ca48],EBX      ; 00407960 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 00407966 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040796c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00407971
    POP ESI                             ; 00407974
    ADD ESP,0x100                       ; 00407975
    POP EBX                             ; 0040797b
    RET                                 ; 0040797c
    MOV EDX,0x6134a9                    ; 0040797d | = "..\\engine\\3d.c"
        ;   Label: LAB_0040797d
    MOV ECX,0xc82                       ; 00407982
    PUSH 0x6134b8                       ; 00407987 | = "renderPrim: Bad input pointer"
    MOV dword ptr [0x02f0ca48],EDX      ; 0040798c | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00407992 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00407998
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0040799d
    JMP 0x00407932                      ; 004079a0
        ;   XREF to: 00407932 (UNCONDITIONAL_JUMP)  ; LAB_00407932
    PUSH EBX                            ; 004079a2
        ;   Label: LAB_004079a2
    CALL dword ptr [EAX*0x4 + 0x66df88] ; 004079a3 | g_MRGLBlockHandlerTable
    ADD ESP,0x4                         ; 004079aa
    ADD ESP,0x100                       ; 004079ad
    POP EBX                             ; 004079b3
    RET                                 ; 004079b4

