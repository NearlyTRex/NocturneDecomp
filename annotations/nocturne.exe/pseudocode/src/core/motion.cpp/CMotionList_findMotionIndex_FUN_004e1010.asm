; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(CMotionList *this_ptr,char *motion_name,int error_on_not_found)
;
; Parameters:
; CMotionList *    Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   motion_name
; int              Stack[0xc]:4   error_on_not_found
;
; XREF[18]:
;   core_charactr.cpp_CCharacter_buildLayerActionTransitionCosts_FUN_0042a800 at 0042a888
;   core_charactr.cpp_CCharacter_initGesture_FUN_00429520 at 00429546
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047d536
;   core_gabriela.cpp_CGabriella_setup_FUN_004957c0 at 00495994
;   core_ghoul.cpp_CGhoul_processDamage_FUN_004ab450 at 004ab7f5
;   core_hostage.cpp_CHostage_setup_FUN_004b6b20 at 004b6cda
;   core_icepick.cpp_FUN_004ba740 at 004ba7a2
;   core_motion.cpp_CMotionController_jumpToMotionByName_FUN_004e1960 at 004e196f
;   core_motion.cpp_CMotionController_setMotionList_FUN_004e1860 at 004e187c
;   core_passngr.cpp_CPassenger_setup_FUN_004ef6d0 at 004ef864
;   ... and 8 more
;
; Referenced Globals:
;   TerminatedCString s_core_motion_cpp_0058b181
;   TerminatedCString s_Can_t_find_motion_s_in_m_0058b194
;   char* g_CHAR_PTR_01cc4800
;   int g_INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e1010
        ;   Label: core_motion.cpp_CMotionList_findMotionIndex_FUN_004e1010
    PUSH ESI                            ; 004e1011
    PUSH EDI                            ; 004e1012
    PUSH EBP                            ; 004e1013
    MOV EDI,dword ptr [ESP + 0x14]      ; 004e1014
    MOV EBP,dword ptr [ESP + 0x18]      ; 004e1018
    MOV EDX,dword ptr [EDI + 0x964]     ; 004e101c
    XOR EBX,EBX                         ; 004e1022
    TEST EDX,EDX                        ; 004e1024
    JLE 0x004e104d                      ; 004e1026
        ;   XREF to: 004e104d (CONDITIONAL_JUMP)  ; LAB_004e104d
    LEA ESI,[EDI + 0x968]               ; 004e1028
    PUSH EBP                            ; 004e102e
        ;   Label: LAB_004e102e
    PUSH ESI                            ; 004e102f
    CALL crt_string.c__stricmp_FUN_00564520 ; 004e1030
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_00564520(char * str1, char * str2)
    ADD ESP,0x8                         ; 004e1035
    TEST EAX,EAX                        ; 004e1038
    JZ 0x004e105e                       ; 004e103a
        ;   XREF to: 004e105e (CONDITIONAL_JUMP)  ; LAB_004e105e
    INC EBX                             ; 004e103c
    MOV ECX,dword ptr [EDI + 0x964]     ; 004e103d
    ADD ESI,0x54c                       ; 004e1043
    CMP EBX,ECX                         ; 004e1049
    JL 0x004e102e                       ; 004e104b
        ;   XREF to: 004e102e (CONDITIONAL_JUMP)  ; LAB_004e102e
    CMP dword ptr [ESP + 0x1c],0x0      ; 004e104d
        ;   Label: LAB_004e104d
    JNZ 0x004e1065                      ; 004e1052
        ;   XREF to: 004e1065 (CONDITIONAL_JUMP)  ; LAB_004e1065
    MOV EAX,0xffffffff                  ; 004e1054
    POP EBP                             ; 004e1059
    POP EDI                             ; 004e105a
    POP ESI                             ; 004e105b
    POP EBX                             ; 004e105c
    RET                                 ; 004e105d
    MOV EAX,EBX                         ; 004e105e
        ;   Label: LAB_004e105e
    POP EBP                             ; 004e1060
    POP EDI                             ; 004e1061
    POP ESI                             ; 004e1062
    POP EBX                             ; 004e1063
    RET                                 ; 004e1064
    PUSH EBP                            ; 004e1065
        ;   Label: LAB_004e1065
    MOV ESI,0x58b181                    ; 004e1066 | = "..\\core\\motion.cpp"
    MOV EDI,0x100                       ; 004e106b
    PUSH 0x58b194                       ; 004e1070 | = "Can't find motion \"%s\" in motion list"
    MOV dword ptr [0x01cc4800],ESI      ; 004e1075 | g_CHAR_PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 004e107b | g_INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 004e1081
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x8                         ; 004e1086
    MOV EAX,0xffffffff                  ; 004e1089
    POP EBP                             ; 004e108e
    POP EDI                             ; 004e108f
    POP ESI                             ; 004e1090
    POP EBX                             ; 004e1091
    RET                                 ; 004e1092

