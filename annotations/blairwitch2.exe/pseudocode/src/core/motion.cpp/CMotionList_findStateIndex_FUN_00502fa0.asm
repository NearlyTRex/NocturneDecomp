; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findStateIndex_FUN_00502fa0(CMotionList *this_ptr,char *state_name,int error_on_not_found)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   state_name
; int              Stack[0xc]:4   error_on_not_found
;
; XREF[12]:
;   core_charactr.cpp_CCharacter_canLookAt_FUN_00429ce0 at 00429d2e
;   core_charactr.cpp_CCharacter_setWalkTarget_FUN_004285f0 at 00428639
;   core_event.cpp_FUN_00489670 at 0048d2e1
;   core_hero.cpp_CHero_canBeGrabbed_FUN_004cea00 at 004cea2f
;   core_hero.cpp_CHero_getGrabbed_FUN_004cea50 at 004ceac7
;   core_hero.cpp_CHero_releaseFromGrab_FUN_004ceb80 at 004cebc6
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_005036b0 at 005036c0
;   core_npc.cpp_CNPC_process_FUN_005105b0 at 00510895
;   core_npc.cpp_CNPC_setRandomMotionVariant_FUN_00510ab0 at 00510af5
;   core_script.cpp_CScript_step_FUN_00522350 at 00527568
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005dfb2e
;   TerminatedCString s_Can_t_find_state_s_in_mo_005dfb41
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00502fa0
        ;   Label: core_motion.cpp_CMotionList_findStateIndex_FUN_00502fa0
    PUSH ESI                            ; 00502fa1
    PUSH EDI                            ; 00502fa2
    PUSH EBP                            ; 00502fa3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00502fa4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00502fa8
    MOV EDX,dword ptr [EDI]             ; 00502fac
    XOR EBX,EBX                         ; 00502fae
    TEST EDX,EDX                        ; 00502fb0
    JLE 0x00502fcf                      ; 00502fb2
        ;   XREF to: 00502fcf (CONDITIONAL_JUMP)  ; LAB_00502fcf
    LEA ESI,[EDI + 0x4]                 ; 00502fb4
    PUSH EBP                            ; 00502fb7
        ;   Label: LAB_00502fb7
    PUSH ESI                            ; 00502fb8
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00502fb9
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 00502fbe
    TEST EAX,EAX                        ; 00502fc1
    JZ 0x00502fe0                       ; 00502fc3
        ;   XREF to: 00502fe0 (CONDITIONAL_JUMP)  ; LAB_00502fe0
    INC EBX                             ; 00502fc5
    MOV ECX,dword ptr [EDI]             ; 00502fc6
    ADD ESI,0x1e                        ; 00502fc8
    CMP EBX,ECX                         ; 00502fcb
    JL 0x00502fb7                       ; 00502fcd
        ;   XREF to: 00502fb7 (CONDITIONAL_JUMP)  ; LAB_00502fb7
    CMP dword ptr [ESP + 0x1c],0x0      ; 00502fcf
        ;   Label: LAB_00502fcf
    JNZ 0x00502fe7                      ; 00502fd4
        ;   XREF to: 00502fe7 (CONDITIONAL_JUMP)  ; LAB_00502fe7
    MOV EAX,0xffffffff                  ; 00502fd6
    POP EBP                             ; 00502fdb
    POP EDI                             ; 00502fdc
    POP ESI                             ; 00502fdd
    POP EBX                             ; 00502fde
    RET                                 ; 00502fdf
    MOV EAX,EBX                         ; 00502fe0
        ;   Label: LAB_00502fe0
    POP EBP                             ; 00502fe2
    POP EDI                             ; 00502fe3
    POP ESI                             ; 00502fe4
    POP EBX                             ; 00502fe5
    RET                                 ; 00502fe6
    PUSH EBP                            ; 00502fe7
        ;   Label: LAB_00502fe7
    MOV ESI,0x5dfb2e                    ; 00502fe8 | = "..\\core\\motion.cpp"
    MOV EDI,0x13e                       ; 00502fed
    PUSH 0x5dfb41                       ; 00502ff2 | = "Can't find state \"%s\" in motion list"
    MOV dword ptr [0x01d046a0],ESI      ; 00502ff7 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 00502ffd | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00503003
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 00503008
    MOV EAX,0xffffffff                  ; 0050300b
    POP EBP                             ; 00503010
    POP EDI                             ; 00503011
    POP ESI                             ; 00503012
    POP EBX                             ; 00503013
    RET                                 ; 00503014

