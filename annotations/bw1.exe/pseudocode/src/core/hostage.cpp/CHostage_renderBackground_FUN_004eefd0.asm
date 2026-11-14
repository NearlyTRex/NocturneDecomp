; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_hostage_cpp_CHostage_renderBackground_FUN_004eefd0(CHostage *this_ptr,int layer_flag)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   layer_flag
;
; Referenced Globals:
;   TerminatedCString s_ScatDazzle_005e4f0f
;
; Called Functions:
;   core_npc.cpp_CNPC_renderBackground_FUN_00531ae0
;   crt_string.c__stricmp_FUN_005c04e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eefd0
        ;   Label: core_hostage.cpp_CHostage_renderBackground_FUN_004eefd0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004eefd1
    PUSH EBX                            ; 004eefd5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004eefd6
    CALL dword ptr [EAX + 0x10c]        ; 004eefdc
    ADD ESP,0x4                         ; 004eefe2
    CMP EAX,0x1                         ; 004eefe5
    JGE 0x004eefec                      ; 004eefe8
        ;   XREF to: 004eefec (CONDITIONAL_JUMP)  ; LAB_004eefec
    POP EBX                             ; 004eefea
        ;   Label: LAB_004eefea
    RET                                 ; 004eefeb
    PUSH 0x5e4f0f                       ; 004eefec | = "ScatDazzle"
        ;   Label: LAB_004eefec
    PUSH EBX                            ; 004eeff1
    CALL crt_string.c__stricmp_FUN_005c04e0 ; 004eeff2
        ;   XREF to: 005c04e0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c04e0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004eeff7
    TEST EAX,EAX                        ; 004eeffa
    JZ 0x004eefea                       ; 004eeffc
        ;   XREF to: 004eefea (CONDITIONAL_JUMP)  ; LAB_004eefea
    CMP dword ptr [ESP + 0xc],0x0       ; 004eeffe
    JZ 0x004ef00f                       ; 004ef003
        ;   XREF to: 004ef00f (CONDITIONAL_JUMP)  ; LAB_004ef00f
    MOV dword ptr [EBX + 0x24fc],0x1    ; 004ef005
    MOV ECX,dword ptr [ESP + 0xc]       ; 004ef00f
        ;   Label: LAB_004ef00f
    PUSH ECX                            ; 004ef013
    PUSH EBX                            ; 004ef014
    CALL core_npc.cpp_CNPC_renderBackground_FUN_00531ae0 ; 004ef015
        ;   XREF to: 00531ae0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_renderBackground_FUN_00531ae0(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004ef01a
    POP EBX                             ; 004ef01d
    RET                                 ; 004ef01e

