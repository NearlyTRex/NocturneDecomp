; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_004fb9c0(CMotionList *this_ptr,char *motion_name,int error_on_not_found)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; int              Stack[0xc]:4   error_on_not_found
;
; XREF[24]:
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_00433880 at 0043390f
;   core_charactr.cpp_CCharacter_initGesture_FUN_00432090 at 004320b6
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 00598905
;   core_event.cpp_FUN_0048c2e0 at 00490ccc
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004c9400 at 004c97a5
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0 at 004fc3ff
;   core_motion.cpp_FUN_004fc280 at 004fc29c
;   core_passngr.cpp_CPassenger_setup_FUN_0050a610 at 0050a7a4
;   core_prye.cpp_CPrye_makeDrawDecision_FUN_0051e6d0 at 0051e900
;   core_prye.cpp_CPrye_setup_FUN_00518680 at 005188c4
;   ... and 14 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_005c9b61
;   TerminatedCString s_Can_t_find_motion_s_in_m_005c9b74
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_string.c__stricmp_FUN_005a3260
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fb9c0
        ;   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_004fb9c0
    PUSH ESI                            ; 004fb9c1
    PUSH EDI                            ; 004fb9c2
    PUSH EBP                            ; 004fb9c3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004fb9c4
    MOV EBP,dword ptr [ESP + 0x18]      ; 004fb9c8
    MOV EDX,dword ptr [EDI + 0x1c24]    ; 004fb9cc
    XOR EBX,EBX                         ; 004fb9d2
    TEST EDX,EDX                        ; 004fb9d4
    JLE 0x004fb9fd                      ; 004fb9d6
        ;   XREF to: 004fb9fd (CONDITIONAL_JUMP)  ; LAB_004fb9fd
    LEA ESI,[EDI + 0x1c28]              ; 004fb9d8
    PUSH EBP                            ; 004fb9de
        ;   Label: LAB_004fb9de
    PUSH ESI                            ; 004fb9df
    CALL crt_string.c__stricmp_FUN_005a3260 ; 004fb9e0
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fb9e5
    TEST EAX,EAX                        ; 004fb9e8
    JZ 0x004fba0e                       ; 004fb9ea
        ;   XREF to: 004fba0e (CONDITIONAL_JUMP)  ; LAB_004fba0e
    INC EBX                             ; 004fb9ec
    MOV ECX,dword ptr [EDI + 0x1c24]    ; 004fb9ed
    ADD ESI,0x120                       ; 004fb9f3
    CMP EBX,ECX                         ; 004fb9f9
    JL 0x004fb9de                       ; 004fb9fb
        ;   XREF to: 004fb9de (CONDITIONAL_JUMP)  ; LAB_004fb9de
    CMP dword ptr [ESP + 0x1c],0x0      ; 004fb9fd
        ;   Label: LAB_004fb9fd
    JNZ 0x004fba15                      ; 004fba02
        ;   XREF to: 004fba15 (CONDITIONAL_JUMP)  ; LAB_004fba15
    MOV EAX,0xffffffff                  ; 004fba04
    POP EBP                             ; 004fba09
    POP EDI                             ; 004fba0a
    POP ESI                             ; 004fba0b
    POP EBX                             ; 004fba0c
    RET                                 ; 004fba0d
    MOV EAX,EBX                         ; 004fba0e
        ;   Label: LAB_004fba0e
    POP EBP                             ; 004fba10
    POP EDI                             ; 004fba11
    POP ESI                             ; 004fba12
    POP EBX                             ; 004fba13
    RET                                 ; 004fba14
    PUSH EBP                            ; 004fba15
        ;   Label: LAB_004fba15
    MOV ESI,0x5c9b61                    ; 004fba16 | = "..\\core\\motion.cpp"
    MOV EDI,0x13f                       ; 004fba1b
    PUSH 0x5c9b74                       ; 004fba20 | = "Can't find motion \"%s\" in motion list"
    MOV dword ptr [0x01d71de0],ESI      ; 004fba25 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 004fba2b | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004fba31
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 004fba36
    MOV EAX,0xffffffff                  ; 004fba39
    POP EBP                             ; 004fba3e
    POP EDI                             ; 004fba3f
    POP ESI                             ; 004fba40
    POP EBX                             ; 004fba41
    RET                                 ; 004fba42

