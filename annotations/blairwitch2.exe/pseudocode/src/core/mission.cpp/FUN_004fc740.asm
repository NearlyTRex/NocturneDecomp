; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_mission_cpp_FUN_004fc740(CDemonMission *this_ptr,char *name)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   name
;
; XREF[10]:
;   core_event.cpp_resolveActorByName_FUN_00488d00 at 00488dd5
;   core_game.cpp_FUN_004bbf70 at 004bc5ac
;   core_hiram.cpp_FUN_004d1070 at 004d1146
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004fcd00 at 004fcd64
;   core_mission.cpp_CDemonMission_loadActor_FUN_004fc040 at 004fc13f
;   core_mission.cpp_FUN_004fd280 at 004fd320
;   core_patrpoin.cpp_FUN_0059c9c0 at 0059cb01
;   core_script.cpp_getActor_FUN_00521290 at 005213b9
;   core_script.cpp_readActorReference_FUN_0052a010 at 0052a076
;   unkafter_basicene.cpp_FUN_0059ee00 at 0059ef52
;
; Called Functions:
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc740
        ;   Label: core_mission.cpp_FUN_004fc740
    PUSH ESI                            ; 004fc741
    MOV ESI,dword ptr [ESP + 0x10]      ; 004fc742
    MOV EBX,dword ptr [ESP + 0xc]       ; 004fc746
    MOV EBX,dword ptr [EBX + 0x1114]    ; 004fc74a
    TEST EBX,EBX                        ; 004fc750
    JZ 0x004fc76c                       ; 004fc752
        ;   XREF to: 004fc76c (CONDITIONAL_JUMP)  ; LAB_004fc76c
    PUSH ESI                            ; 004fc754
        ;   Label: LAB_004fc754
    PUSH EBX                            ; 004fc755
    CALL crt_string.c__stricmp_FUN_005b8130 ; 004fc756
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 004fc75b
    TEST EAX,EAX                        ; 004fc75e
    JZ 0x004fc771                       ; 004fc760
        ;   XREF to: 004fc771 (CONDITIONAL_JUMP)  ; LAB_004fc771
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fc762
    TEST EBX,EBX                        ; 004fc768
    JNZ 0x004fc754                      ; 004fc76a
        ;   XREF to: 004fc754 (CONDITIONAL_JUMP)  ; LAB_004fc754
    XOR EAX,EAX                         ; 004fc76c
        ;   Label: LAB_004fc76c
    POP ESI                             ; 004fc76e
    POP EBX                             ; 004fc76f
    RET                                 ; 004fc770
    MOV EAX,EBX                         ; 004fc771
        ;   Label: LAB_004fc771
    POP ESI                             ; 004fc773
    POP EBX                             ; 004fc774
    RET                                 ; 004fc775

