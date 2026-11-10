; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004d2da0(CHostage *this_ptr,int layer_flag)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   undefined4 s_ScatDazzle_005da3ad+1
;
; Called Functions:
;   core_npc.cpp_CNPC_renderBackground_FUN_005108d0
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2da0
        ;   Label: core_hostage.cpp_CHostage_renderBackground_FUN_004d2da0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d2da1
    PUSH EBX                            ; 004d2da5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004d2da6
    CALL dword ptr [EAX + 0x114]        ; 004d2dac
    ADD ESP,0x4                         ; 004d2db2
    CMP EAX,0x1                         ; 004d2db5
    JGE 0x004d2dbc                      ; 004d2db8
        ;   XREF to: 004d2dbc (CONDITIONAL_JUMP)  ; LAB_004d2dbc
    POP EBX                             ; 004d2dba
        ;   Label: LAB_004d2dba
    RET                                 ; 004d2dbb
    PUSH 0x5da3ae                       ; 004d2dbc | s_ScatDazzle_005da3ad+1
        ;   Label: LAB_004d2dbc
    PUSH EBX                            ; 004d2dc1
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004d2dc2
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004d2dc7
    TEST EAX,EAX                        ; 004d2dca
    JZ 0x004d2dba                       ; 004d2dcc
        ;   XREF to: 004d2dba (CONDITIONAL_JUMP)  ; LAB_004d2dba
    CMP dword ptr [ESP + 0xc],0x0       ; 004d2dce
    JZ 0x004d2ddf                       ; 004d2dd3
        ;   XREF to: 004d2ddf (CONDITIONAL_JUMP)  ; LAB_004d2ddf
    MOV dword ptr [EBX + 0x2568],0x1    ; 004d2dd5
    MOV ECX,dword ptr [ESP + 0xc]       ; 004d2ddf
        ;   Label: LAB_004d2ddf
    PUSH ECX                            ; 004d2de3
    PUSH EBX                            ; 004d2de4
    CALL core_npc.cpp_CNPC_renderBackground_FUN_005108d0 ; 004d2de5
        ;   XREF to: 005108d0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_renderBackground_FUN_005108d0(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004d2dea
    POP EBX                             ; 004d2ded
    RET                                 ; 004d2dee

