; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_npc_cpp_FUN_004eeea0(CCharacter *param_1,SDamageInfo *param_2)
;
;
; XREF[1]:
;   core_hostage.cpp_FUN_004b8600 at 004b8683
;
; Referenced Globals:
;   TerminatedCString s_DIE_0058cb6f
;   TerminatedCString s_HURT_0058cb73
;   TerminatedCString s_DAMAGE_0058cb78
;   TerminatedCString s_SHOT_0058cb7f
;
; Called Functions:
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;   core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eeea0
        ;   Label: core_npc.cpp_FUN_004eeea0
    PUSH ESI                            ; 004eeea1
    PUSH EDI                            ; 004eeea2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eeea3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004eeea7
    PUSH EBX                            ; 004eeeab
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004eeeac
    CALL dword ptr [EAX + 0xc4]         ; 004eeeb2
    ADD ESP,0x4                         ; 004eeeb8
    CMP EAX,0x1d46820                   ; 004eeebb
    JNZ 0x004eef19                      ; 004eeec0
        ;   XREF to: 004eef19 (CONDITIONAL_JUMP)  ; LAB_004eef19
    FLD float ptr [EDI + 0x4]           ; 004eeec2
    FSUBR float ptr [EBX + 0x2434]      ; 004eeec5
    LEA ESI,[EBX + 0x150]               ; 004eeecb
    FST float ptr [EBX + 0x2434]        ; 004eeed1
    FLDZ                                ; 004eeed7
    FCOMPP                              ; 004eeed9
    FNSTSW AX                           ; 004eeedb
    SAHF                                ; 004eeedd
    JNC 0x004eef27                      ; 004eeede
        ;   XREF to: 004eef27 (CONDITIONAL_JUMP)  ; LAB_004eef27
    FLD float ptr [EDI + 0x4]           ; 004eeee0
    FLDZ                                ; 004eeee3
    FCOMPP                              ; 004eeee5
    FNSTSW AX                           ; 004eeee7
    SAHF                                ; 004eeee9
    JNC 0x004eef19                      ; 004eeeea
        ;   XREF to: 004eef19 (CONDITIONAL_JUMP)  ; LAB_004eef19
    CMP dword ptr [EBX + 0x2590],0x0    ; 004eeeec
    JNZ 0x004eef19                      ; 004eeef3
        ;   XREF to: 004eef19 (CONDITIONAL_JUMP)  ; LAB_004eef19
    PUSH 0x58cb73                       ; 004eeef5 | = "HURT"
    PUSH ESI                            ; 004eeefa
    CALL core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0 ; 004eeefb
        ;   XREF to: 004eedc0 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 004eef00
    TEST EAX,EAX                        ; 004eef03
    JNZ 0x004eef19                      ; 004eef05
        ;   XREF to: 004eef19 (CONDITIONAL_JUMP)  ; LAB_004eef19
    PUSH 0x58cb78                       ; 004eef07 | = "DAMAGE"
    PUSH ESI                            ; 004eef0c
    CALL core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0 ; 004eef0d
        ;   XREF to: 004eedc0 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 004eef12
    TEST EAX,EAX                        ; 004eef15
    JZ 0x004eef61                       ; 004eef17
        ;   XREF to: 004eef61 (CONDITIONAL_JUMP)  ; LAB_004eef61
    PUSH EDI                            ; 004eef19
        ;   Label: LAB_004eef19
    PUSH EBX                            ; 004eef1a
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004eef1b
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004eef20
    POP EDI                             ; 004eef23
    POP ESI                             ; 004eef24
    POP EBX                             ; 004eef25
    RET                                 ; 004eef26
    PUSH 0x41c80000                     ; 004eef27
        ;   Label: LAB_004eef27
    PUSH 0x32                           ; 004eef2c
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004eef2e
    PUSH EBX                            ; 004eef34
    MOV dword ptr [EBX + 0x2434],0x0    ; 004eef35
    CALL dword ptr [EAX + 0xa0]         ; 004eef3f
    ADD ESP,0xc                         ; 004eef45
    PUSH EBX                            ; 004eef48
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0 ; 004eef49
        ;   XREF to: 004291f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_004291f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004eef4e
    PUSH 0x58cb6f                       ; 004eef51 | = "DIE"
    PUSH ESI                            ; 004eef56
    CALL core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0 ; 004eef57
        ;   XREF to: 004eedc0 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 004eef5c
    JMP 0x004eef19                      ; 004eef5f
        ;   XREF to: 004eef19 (UNCONDITIONAL_JUMP)  ; LAB_004eef19
    PUSH 0x58cb7f                       ; 004eef61 | = "SHOT"
        ;   Label: LAB_004eef61
    PUSH ESI                            ; 004eef66
    CALL core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0 ; 004eef67
        ;   XREF to: 004eedc0 (UNCONDITIONAL_CALL)  ; int core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(CNPC * this_ptr, char * motion_name)
    ADD ESP,0x8                         ; 004eef6c
    PUSH EDI                            ; 004eef6f
    PUSH EBX                            ; 004eef70
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004eef71
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00428510(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004eef76
    POP EDI                             ; 004eef79
    POP ESI                             ; 004eef7a
    POP EBX                             ; 004eef7b
    RET                                 ; 004eef7c

