; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl crt_string_c__strnicmp_FUN_00564bc0(char *str1,char *str2,int count)
;
; Parameters:
; char *           Stack[0x4]:4   str1
; char *           Stack[0x8]:4   str2
; int              Stack[0xc]:4   count
;
; XREF[14]:
;   core_charactr.cpp_CCharacter_getDeathState_FUN_00428710 at 00428738
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00425050 at 004255e8
;   core_emitter.cpp_CEmitter_process_FUN_00478790 at 004789e0
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047ae25
;   core_game.cpp_FUN_004a4170 at 004a45e4
;   core_mission.cpp_CDemonMission_generateUniqueActorName_FUN_004d9680 at 004d96af
;   core_script.cpp_CScript_skipCommands_FUN_00504c70 at 00504cef
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 004ff4e7
;   core_set.cpp_CDemonSet_load_FUN_00506f10 at 005079a3
;   core_set.cpp_CDemonSet_process_FUN_0050d040 at 0050d15d
;   ... and 4 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00564bc0
        ;   Label: crt_string.c__strnicmp_FUN_00564bc0
    PUSH ESI                            ; 00564bc1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00564bc2
    MOV EDX,dword ptr [ESP + 0x14]      ; 00564bc6
    MOV ESI,dword ptr [ESP + 0x10]      ; 00564bca
    TEST EDX,EDX                        ; 00564bce
    JNZ 0x00564bd7                      ; 00564bd0
        ;   XREF to: 00564bd7 (CONDITIONAL_JUMP)  ; LAB_00564bd7
    XOR EAX,EAX                         ; 00564bd2
        ;   Label: LAB_00564bd2
    POP ESI                             ; 00564bd4
    POP EBX                             ; 00564bd5
    RET                                 ; 00564bd6
    MOV AL,byte ptr [EBX]               ; 00564bd7
        ;   Label: LAB_00564bd7
    MOV AH,byte ptr [ESI]               ; 00564bd9
    CMP AL,0x41                         ; 00564bdb
    JC 0x00564be5                       ; 00564bdd
        ;   XREF to: 00564be5 (CONDITIONAL_JUMP)  ; LAB_00564be5
    CMP AL,0x5a                         ; 00564bdf
    JA 0x00564be5                       ; 00564be1
        ;   XREF to: 00564be5 (CONDITIONAL_JUMP)  ; LAB_00564be5
    ADD AL,0x20                         ; 00564be3
    CMP AH,0x41                         ; 00564be5
        ;   Label: LAB_00564be5
    JC 0x00564bf2                       ; 00564be8
        ;   XREF to: 00564bf2 (CONDITIONAL_JUMP)  ; LAB_00564bf2
    CMP AH,0x5a                         ; 00564bea
    JA 0x00564bf2                       ; 00564bed
        ;   XREF to: 00564bf2 (CONDITIONAL_JUMP)  ; LAB_00564bf2
    ADD AH,0x20                         ; 00564bef
    CMP AL,AH                           ; 00564bf2
        ;   Label: LAB_00564bf2
    JZ 0x00564c08                       ; 00564bf4
        ;   XREF to: 00564c08 (CONDITIONAL_JUMP)  ; LAB_00564c08
    XOR EDX,EDX                         ; 00564bf6
    MOV DL,AL                           ; 00564bf8
    MOV AL,AH                           ; 00564bfa
    AND EAX,0xff                        ; 00564bfc
    SUB EDX,EAX                         ; 00564c01
    MOV EAX,EDX                         ; 00564c03
    POP ESI                             ; 00564c05
    POP EBX                             ; 00564c06
    RET                                 ; 00564c07
    TEST AH,AH                          ; 00564c08
        ;   Label: LAB_00564c08
    JNZ 0x00564c11                      ; 00564c0a
        ;   XREF to: 00564c11 (CONDITIONAL_JUMP)  ; LAB_00564c11
    XOR EAX,EAX                         ; 00564c0c
    POP ESI                             ; 00564c0e
    POP EBX                             ; 00564c0f
    RET                                 ; 00564c10
    INC EBX                             ; 00564c11
        ;   Label: LAB_00564c11
    INC ESI                             ; 00564c12
    DEC EDX                             ; 00564c13
    JZ 0x00564bd2                       ; 00564c14
        ;   XREF to: 00564bd2 (CONDITIONAL_JUMP)  ; LAB_00564bd2
    JMP 0x00564bd7                      ; 00564c16
        ;   XREF to: 00564bd7 (UNCONDITIONAL_JUMP)  ; LAB_00564bd7

