; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120()
;
;
; Referenced Globals:
;   TerminatedCString s_ScatDazzle_0062f0f2
;
; Called Functions:
;   core_npc.cpp_CNPC_FUN_00544b70
;   crt_string.c_stricmp_FUN_005fe7f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6120
        ;   Label: core_hostage.cpp_RelatedToScatDazzle_FUN_004f6120
    MOV EBX,dword ptr [ESP + 0x8]       ; 004f6121
    PUSH EBX                            ; 004f6125
    MOV EAX,dword ptr [EBX + 0x154]     ; 004f6126
    CALL dword ptr [EAX + 0x120]        ; 004f612c
    ADD ESP,0x4                         ; 004f6132
    CMP EAX,0x1                         ; 004f6135
    JGE 0x004f613c                      ; 004f6138
        ;   XREF to: 004f613c (CONDITIONAL_JUMP)  ; LAB_004f613c
    POP EBX                             ; 004f613a
        ;   Label: LAB_004f613a
    RET                                 ; 004f613b
    PUSH 0x62f0f2                       ; 004f613c | = "ScatDazzle"
        ;   Label: LAB_004f613c
    PUSH EBX                            ; 004f6141
    CALL crt_string.c_stricmp_FUN_005fe7f0 ; 004f6142
        ;   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)  ; int crt_string.c_stricmp_FUN_005fe7f0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f6147
    TEST EAX,EAX                        ; 004f614a
    JZ 0x004f613a                       ; 004f614c
        ;   XREF to: 004f613a (CONDITIONAL_JUMP)  ; LAB_004f613a
    CMP dword ptr [ESP + 0xc],0x0       ; 004f614e
    JZ 0x004f615f                       ; 004f6153
        ;   XREF to: 004f615f (CONDITIONAL_JUMP)  ; LAB_004f615f
    MOV dword ptr [EBX + 0x240c],0x1    ; 004f6155
    MOV ECX,dword ptr [ESP + 0xc]       ; 004f615f
        ;   Label: LAB_004f615f
    PUSH ECX                            ; 004f6163
    PUSH EBX                            ; 004f6164
    CALL core_npc.cpp_CNPC_FUN_00544b70 ; 004f6165
        ;   XREF to: 00544b70 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_FUN_00544b70(CNPC * this_ptr)
    ADD ESP,0x8                         ; 004f616a
    POP EBX                             ; 004f616d
    RET                                 ; 004f616e

