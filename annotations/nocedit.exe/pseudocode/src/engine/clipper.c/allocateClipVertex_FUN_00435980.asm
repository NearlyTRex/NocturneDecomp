; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SRenderVertex * __cdecl engine_clipper_c_allocateClipVertex_FUN_00435980(void)
;
;
; Referenced Globals:
;   TerminatedCString s_engine_clipper_c_00618103
;   TerminatedCString s_Ran_out_of_clipped_verts_00618117
;   SRenderVertex[12] g_ClipperTempBuffer
;   int g_ClipperTempCount
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    CMP dword ptr [0x00825cec],0xc      ; 00435980 | g_ClipperTempCount
        ;   Label: engine_clipper.c_allocateClipVertex_FUN_00435980
    JGE 0x004359a8                      ; 00435987
        ;   XREF to: 004359a8 (CONDITIONAL_JUMP)  ; LAB_004359a8
    MOV ECX,dword ptr [0x00825cec]      ; 00435989 | g_ClipperTempCount
        ;   Label: LAB_00435989
    LEA EAX,[ECX*0x4 + 0x0]             ; 0043598f
    SUB EAX,ECX                         ; 00435996
    INC ECX                             ; 00435998
    SHL EAX,0x4                         ; 00435999
    MOV dword ptr [0x00825cec],ECX      ; 0043599c | g_ClipperTempCount
    ADD EAX,0x825aac                    ; 004359a2 | g_ClipperTempBuffer
    RET                                 ; 004359a7
    PUSH EBX                            ; 004359a8
        ;   Label: LAB_004359a8
    MOV ECX,0x618103                    ; 004359a9 | = "..\\engine\\clipper.c"
    MOV EBX,0x5e                        ; 004359ae
    PUSH 0x618117                       ; 004359b3 | = "Ran out of clipped verts!"
    MOV dword ptr [0x02f0ca48],ECX      ; 004359b8 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 004359be | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004359c4
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004359c9
    POP EBX                             ; 004359cc
    JMP 0x00435989                      ; 004359cd
        ;   XREF to: 00435989 (UNCONDITIONAL_JUMP)  ; LAB_00435989

