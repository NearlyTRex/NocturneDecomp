; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_npc_cpp_CNPC_processDamage_FUN_00544d30(CNPC *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; XREF[1]:
;   core_hostage.cpp_CHostage_processDamage_FUN_004f6450 at 004f6544
;
; Referenced Globals:
;   TerminatedCString s_DIE_0063e3b8
;   TerminatedCString s_HURT_0063e3bc
;   TerminatedCString s_DAMAGE_0063e3c1
;   TerminatedCString s_SHOT_0063e3c8
;   CDemonActorType g_CNPCClassInfo
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042d060
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;   core_npc.cpp_FUN_00544c50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544d30
        ;   Label: core_npc.cpp_CNPC_processDamage_FUN_00544d30
    PUSH ESI                            ; 00544d31
    PUSH EDI                            ; 00544d32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00544d33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00544d37
    PUSH EBX                            ; 00544d3b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00544d3c
    CALL dword ptr [EAX + 0xc4]         ; 00544d42
    ADD ESP,0x4                         ; 00544d48
    CMP EAX,0x2fd8ce0                   ; 00544d4b | g_CNPCClassInfo
    JNZ 0x00544da9                      ; 00544d50
        ;   XREF to: 00544da9 (CONDITIONAL_JUMP)  ; LAB_00544da9
    FLD float ptr [EDI + 0x4]           ; 00544d52
    FSUBR float ptr [EBX + 0x243c]      ; 00544d55
    LEA ESI,[EBX + 0x158]               ; 00544d5b
    FST float ptr [EBX + 0x243c]        ; 00544d61
    FLDZ                                ; 00544d67
    FCOMPP                              ; 00544d69
    FNSTSW AX                           ; 00544d6b
    SAHF                                ; 00544d6d
    JNC 0x00544db7                      ; 00544d6e
        ;   XREF to: 00544db7 (CONDITIONAL_JUMP)  ; LAB_00544db7
    FLD float ptr [EDI + 0x4]           ; 00544d70
    FLDZ                                ; 00544d73
    FCOMPP                              ; 00544d75
    FNSTSW AX                           ; 00544d77
    SAHF                                ; 00544d79
    JNC 0x00544da9                      ; 00544d7a
        ;   XREF to: 00544da9 (CONDITIONAL_JUMP)  ; LAB_00544da9
    CMP dword ptr [EBX + 0x2598],0x0    ; 00544d7c
    JNZ 0x00544da9                      ; 00544d83
        ;   XREF to: 00544da9 (CONDITIONAL_JUMP)  ; LAB_00544da9
    PUSH 0x63e3bc                       ; 00544d85 | = "HURT"
    PUSH ESI                            ; 00544d8a
    CALL core_npc.cpp_FUN_00544c50      ; 00544d8b
        ;   XREF to: 00544c50 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_FUN_00544c50()
    ADD ESP,0x8                         ; 00544d90
    TEST EAX,EAX                        ; 00544d93
    JNZ 0x00544da9                      ; 00544d95
        ;   XREF to: 00544da9 (CONDITIONAL_JUMP)  ; LAB_00544da9
    PUSH 0x63e3c1                       ; 00544d97 | = "DAMAGE"
    PUSH ESI                            ; 00544d9c
    CALL core_npc.cpp_FUN_00544c50      ; 00544d9d
        ;   XREF to: 00544c50 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_FUN_00544c50()
    ADD ESP,0x8                         ; 00544da2
    TEST EAX,EAX                        ; 00544da5
    JZ 0x00544df1                       ; 00544da7
        ;   XREF to: 00544df1 (CONDITIONAL_JUMP)  ; LAB_00544df1
    PUSH EDI                            ; 00544da9
        ;   Label: LAB_00544da9
    PUSH EBX                            ; 00544daa
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 00544dab
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00544db0
    POP EDI                             ; 00544db3
    POP ESI                             ; 00544db4
    POP EBX                             ; 00544db5
    RET                                 ; 00544db6
    PUSH 0x41c80000                     ; 00544db7
        ;   Label: LAB_00544db7
    PUSH 0x32                           ; 00544dbc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00544dbe
    PUSH EBX                            ; 00544dc4
    MOV dword ptr [EBX + 0x243c],0x0    ; 00544dc5
    CALL dword ptr [EAX + 0xa0]         ; 00544dcf
    ADD ESP,0xc                         ; 00544dd5
    PUSH EBX                            ; 00544dd8
    CALL core_charactr.cpp_CCharacter_FUN_0042d060 ; 00544dd9
        ;   XREF to: 0042d060 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042d060(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00544dde
    PUSH 0x63e3b8                       ; 00544de1 | = "DIE"
    PUSH ESI                            ; 00544de6
    CALL core_npc.cpp_FUN_00544c50      ; 00544de7
        ;   XREF to: 00544c50 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_FUN_00544c50()
    ADD ESP,0x8                         ; 00544dec
    JMP 0x00544da9                      ; 00544def
        ;   XREF to: 00544da9 (UNCONDITIONAL_JUMP)  ; LAB_00544da9
    PUSH 0x63e3c8                       ; 00544df1 | = "SHOT"
        ;   Label: LAB_00544df1
    PUSH ESI                            ; 00544df6
    CALL core_npc.cpp_FUN_00544c50      ; 00544df7
        ;   XREF to: 00544c50 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_FUN_00544c50()
    ADD ESP,0x8                         ; 00544dfc
    PUSH EDI                            ; 00544dff
    PUSH EBX                            ; 00544e00
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 00544e01
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00544e06
    POP EDI                             ; 00544e09
    POP ESI                             ; 00544e0a
    POP EBX                             ; 00544e0b
    RET                                 ; 00544e0c

