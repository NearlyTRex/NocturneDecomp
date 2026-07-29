; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hostage_cpp_CHostage_renderBackground_FUN_004b82d0(CNPC *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_ScatDazzle_00585cb2
;
; Called Functions:
;   core_npc.cpp_FUN_004eece0
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b82d0
        ;   Label: core_hostage.cpp_CHostage_renderBackground_FUN_004b82d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b82d1
    PUSH EBX                            ; 004b82d5
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b82d6
    CALL dword ptr [EAX + 0x104]        ; 004b82dc
    ADD ESP,0x4                         ; 004b82e2
    CMP EAX,0x1                         ; 004b82e5
    JGE 0x004b82ec                      ; 004b82e8
        ;   XREF to: 004b82ec (CONDITIONAL_JUMP)  ; LAB_004b82ec
    POP EBX                             ; 004b82ea
        ;   Label: LAB_004b82ea
    RET                                 ; 004b82eb
    PUSH 0x585cb2                       ; 004b82ec | = "ScatDazzle"
        ;   Label: LAB_004b82ec
    PUSH EBX                            ; 004b82f1
    CALL crt_string.c__stricmp_FUN_00564520 ; 004b82f2
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004b82f7
    TEST EAX,EAX                        ; 004b82fa
    JZ 0x004b82ea                       ; 004b82fc
        ;   XREF to: 004b82ea (CONDITIONAL_JUMP)  ; LAB_004b82ea
    CMP dword ptr [ESP + 0xc],0x0       ; 004b82fe
    JZ 0x004b830f                       ; 004b8303
        ;   XREF to: 004b830f (CONDITIONAL_JUMP)  ; LAB_004b830f
    MOV dword ptr [EBX + 0x2404],0x1    ; 004b8305
    MOV ECX,dword ptr [ESP + 0xc]       ; 004b830f
        ;   Label: LAB_004b830f
    PUSH ECX                            ; 004b8313
    PUSH EBX                            ; 004b8314
    CALL core_npc.cpp_FUN_004eece0      ; 004b8315
        ;   XREF to: 004eece0 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_FUN_004eece0(CNPC * this_ptr, int layer_flag)
    ADD ESP,0x8                         ; 004b831a
    POP EBX                             ; 004b831d
    RET                                 ; 004b831e

