; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(int *param_1,undefined4 param_2,int param_3)
;
;
; XREF[11]:
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429fe0 at 0042a02e
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_00428ab0 at 00428b35
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047cf3f
;   core_hero.cpp_CHero_getGrabbed_FUN_004b4c70 at 004b4cb6
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004b4d50 at 004b4d88
;   core_hero.cpp_FUN_004b4c20 at 004b4c4f
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_004e1740 at 004e1750
;   core_npc.cpp_CNPC_process_FUN_004eea20 at 004eeca7
;   core_npc.cpp_CNPC_setRandomMotionVariant_FUN_004eedc0 at 004eee05
;   core_zombie.cpp_CZombie_resetChaseState_FUN_005624e0 at 005624fc
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0058b1ba
;   TerminatedCString s_Can_t_find_state_s_in_mo_0058b1cd
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e10a0
        ;   Label: core_motion.cpp_CMotionList_findStateIndex_FUN_004e10a0
    PUSH ESI                            ; 004e10a1
    PUSH EDI                            ; 004e10a2
    PUSH EBP                            ; 004e10a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e10a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e10a8
    MOV EDX,dword ptr [EDI]             ; 004e10ac
    XOR EBX,EBX                         ; 004e10ae
    TEST EDX,EDX                        ; 004e10b0
    JLE 0x004e10cf                      ; 004e10b2
        ;   XREF to: 004e10cf (CONDITIONAL_JUMP)  ; LAB_004e10cf
    LEA ESI,[EDI + 0x4]                 ; 004e10b4
    PUSH EBP                            ; 004e10b7
        ;   Label: LAB_004e10b7
    PUSH ESI                            ; 004e10b8
    CALL crt_string.c__stricmp_FUN_00564520 ; 004e10b9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004e10be
    TEST EAX,EAX                        ; 004e10c1
    JZ 0x004e10e0                       ; 004e10c3
        ;   XREF to: 004e10e0 (CONDITIONAL_JUMP)  ; LAB_004e10e0
    INC EBX                             ; 004e10c5
    MOV ECX,dword ptr [EDI]             ; 004e10c6
    ADD ESI,0x1e                        ; 004e10c8
    CMP EBX,ECX                         ; 004e10cb
    JL 0x004e10b7                       ; 004e10cd
        ;   XREF to: 004e10b7 (CONDITIONAL_JUMP)  ; LAB_004e10b7
    CMP dword ptr [ESP + 0x1c],0x0      ; 004e10cf
        ;   Label: LAB_004e10cf
    JNZ 0x004e10e7                      ; 004e10d4
        ;   XREF to: 004e10e7 (CONDITIONAL_JUMP)  ; LAB_004e10e7
    MOV EAX,0xffffffff                  ; 004e10d6
    POP EBP                             ; 004e10db
    POP EDI                             ; 004e10dc
    POP ESI                             ; 004e10dd
    POP EBX                             ; 004e10de
    RET                                 ; 004e10df
    MOV EAX,EBX                         ; 004e10e0
        ;   Label: LAB_004e10e0
    POP EBP                             ; 004e10e2
    POP EDI                             ; 004e10e3
    POP ESI                             ; 004e10e4
    POP EBX                             ; 004e10e5
    RET                                 ; 004e10e6
    PUSH EBP                            ; 004e10e7
        ;   Label: LAB_004e10e7
    MOV ESI,0x58b1ba                    ; 004e10e8 | = "..\\core\\motion.cpp"
    MOV EDI,0x113                       ; 004e10ed
    PUSH 0x58b1cd                       ; 004e10f2 | = "Can't find state \"%s\" in motion list"
    MOV dword ptr [0x01cc4800],ESI      ; 004e10f7 | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e10fd | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e1103
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e1108
    MOV EAX,0xffffffff                  ; 004e110b
    POP EBP                             ; 004e1110
    POP EDI                             ; 004e1111
    POP ESI                             ; 004e1112
    POP EBX                             ; 004e1113
    RET                                 ; 004e1114

