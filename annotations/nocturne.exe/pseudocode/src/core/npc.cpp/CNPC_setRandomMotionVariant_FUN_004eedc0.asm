; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_npc_cpp_CNPC_setRandomMotionVariant_FUN_004eedc0(undefined4 param_1,char *param_2)
;
; Local Variables:
; undefined        Stack[-0xd8]:1  local_d8
; undefined1       Stack[-0xd7]:1  local_d7
;
; XREF[1]:
;   core_npc.cpp_FUN_004eeea0 at 004eeefb
;
; Referenced Globals:
;   TerminatedCString s_s_d_0058cb63
;   TerminatedCString s_s_d_0058cb69
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_motion.cpp_CMotionController_getMotionList_FUN_004e1890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
;   crt_stdio.c_sprintf_FUN_00563c90
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eedc0
        ;   Label: core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0
    PUSH ESI                            ; 004eedc1
    PUSH EDI                            ; 004eedc2
    PUSH EBP                            ; 004eedc3
    SUB ESP,0xc8                        ; 004eedc4
    MOV ESI,dword ptr [ESP + 0xe0]      ; 004eedca
    MOV EDX,dword ptr [ESP + 0xdc]      ; 004eedd1
    PUSH EDX                            ; 004eedd8
    XOR EBX,EBX                         ; 004eedd9
    CALL core_motion.cpp_CMotionController_getMotionList_FUN_004e1890 ; 004eeddb
        ;   XREF to: 004e1890 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getMotionList_FUN_004e1890()
    ADD ESP,0x4                         ; 004eede0
    MOV EBP,EAX                         ; 004eede3
    XOR EDI,EDI                         ; 004eede5
    LEA EAX,[EBX + 0x1]                 ; 004eede7
        ;   Label: LAB_004eede7
    PUSH EAX                            ; 004eedea
    PUSH ESI                            ; 004eedeb
    PUSH 0x58cb63                       ; 004eedec | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 004eedf1
    PUSH EAX                            ; 004eedf5
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eedf6
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004eedfb
    PUSH EDI                            ; 004eedfe
    LEA EAX,[ESP + 0x4]                 ; 004eedff
    PUSH EAX                            ; 004eee03
    PUSH EBP                            ; 004eee04
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004eee05
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0()
    ADD ESP,0xc                         ; 004eee0a
    TEST EAX,EAX                        ; 004eee0d
    JL 0x004eee14                       ; 004eee0f
        ;   XREF to: 004eee14 (CONDITIONAL_JUMP)  ; LAB_004eee14
    INC EBX                             ; 004eee11
    JMP 0x004eede7                      ; 004eee12
        ;   XREF to: 004eede7 (UNCONDITIONAL_JUMP)  ; LAB_004eede7
    TEST EBX,EBX                        ; 004eee14
        ;   Label: LAB_004eee14
    JZ 0x004eee58                       ; 004eee16
        ;   XREF to: 004eee58 (CONDITIONAL_JUMP)  ; LAB_004eee58
    PUSH EBX                            ; 004eee18
    PUSH 0x1                            ; 004eee19
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004eee1b
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 004eee20
    PUSH EAX                            ; 004eee23
    PUSH ESI                            ; 004eee24
    PUSH 0x58cb69                       ; 004eee25 | = "%s_%d"
    LEA EAX,[ESP + 0xc]                 ; 004eee2a
    PUSH EAX                            ; 004eee2e
    CALL crt_stdio.c_sprintf_FUN_00563c90 ; 004eee2f
        ;   XREF to: 00563c90 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_sprintf_FUN_00563c90()
    ADD ESP,0x10                        ; 004eee34
    PUSH 0x0                            ; 004eee37
        ;   Label: LAB_004eee37
    LEA EAX,[ESP + 0x4]                 ; 004eee39
    PUSH EAX                            ; 004eee3d
    PUSH EBP                            ; 004eee3e
    CALL core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0 ; 004eee3f
        ;   XREF to: 004e10a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0()
    ADD ESP,0xc                         ; 004eee44
    TEST EAX,EAX                        ; 004eee47
    JGE 0x004eee76                      ; 004eee49
        ;   XREF to: 004eee76 (CONDITIONAL_JUMP)  ; LAB_004eee76
    XOR EAX,EAX                         ; 004eee4b
    ADD ESP,0xc8                        ; 004eee4d
    POP EBP                             ; 004eee53
    POP EDI                             ; 004eee54
    POP ESI                             ; 004eee55
    POP EBX                             ; 004eee56
    RET                                 ; 004eee57
    MOV EDI,ESP                         ; 004eee58
        ;   Label: LAB_004eee58
    PUSH EDI                            ; 004eee5a
    MOV AL,byte ptr [ESI]               ; 004eee5b
        ;   Label: LAB_004eee5b
    MOV byte ptr [EDI],AL               ; 004eee5d
    CMP AL,0x0                          ; 004eee5f
    JZ 0x004eee73                       ; 004eee61
        ;   XREF to: 004eee73 (CONDITIONAL_JUMP)  ; LAB_004eee73
    MOV AL,byte ptr [ESI + 0x1]         ; 004eee63
    ADD ESI,0x2                         ; 004eee66
    MOV byte ptr [EDI + 0x1],AL         ; 004eee69
    ADD EDI,0x2                         ; 004eee6c
    CMP AL,0x0                          ; 004eee6f
    JNZ 0x004eee5b                      ; 004eee71
        ;   XREF to: 004eee5b (CONDITIONAL_JUMP)  ; LAB_004eee5b
    POP EDI                             ; 004eee73
        ;   Label: LAB_004eee73
    JMP 0x004eee37                      ; 004eee74
        ;   XREF to: 004eee37 (UNCONDITIONAL_JUMP)  ; LAB_004eee37
    PUSH 0x1                            ; 004eee76
        ;   Label: LAB_004eee76
    PUSH EAX                            ; 004eee78
    MOV ECX,dword ptr [ESP + 0xe4]      ; 004eee79
    PUSH ECX                            ; 004eee80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004eee81
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    MOV EAX,0x1                         ; 004eee86
    ADD ESP,0xc                         ; 004eee8b
    ADD ESP,0xc8                        ; 004eee8e
    POP EBP                             ; 004eee94
    POP EDI                             ; 004eee95
    POP ESI                             ; 004eee96
    POP EBX                             ; 004eee97
    RET                                 ; 004eee98

