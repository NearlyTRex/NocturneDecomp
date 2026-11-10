; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_trigger_cpp_CTrigger_setup_FUN_005778a0(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_waypoint.cpp_CWayPoint_setup_FUN_00587dc0 at 00587dcb
;
; Referenced Globals:
;   undefined4 DAT_00618170
;
; Called Functions:
;   core_actor.cpp_CDemonActor_setup_FUN_00408a80
;   crt_string.c__stricmp_FUN_005b8130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005778a0
        ;   Label: core_trigger.cpp_CTrigger_setup_FUN_005778a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005778a1
    PUSH EBX                            ; 005778a5
    CALL core_actor.cpp_CDemonActor_setup_FUN_00408a80 ; 005778a6
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setup_FUN_00408a80(CDemonActor * this_ptr)
    MOV EAX,[0x00618170]                ; 005778ab | DAT_00618170
    MOV dword ptr [EBX + 0xf8],0x0      ; 005778b0
    MOV EAX,dword ptr [EAX + 0x1008]    ; 005778ba
    MOV dword ptr [EBX + 0x100],0x1     ; 005778c0
    ADD ESP,0x4                         ; 005778ca
    MOV EDX,dword ptr [EBX + 0x2d0]     ; 005778cd
    MOV dword ptr [EBX + 0xfc],EAX      ; 005778d3
    CMP EDX,0x5                         ; 005778d9
    JZ 0x00577979                       ; 005778dc
        ;   XREF to: 00577979 (CONDITIONAL_JUMP)  ; LAB_00577979
    CMP dword ptr [EBX + 0x2d0],0x4     ; 005778e2
        ;   Label: LAB_005778e2
    JNZ 0x005778f5                      ; 005778e9
        ;   XREF to: 005778f5 (CONDITIONAL_JUMP)  ; LAB_005778f5
    MOV dword ptr [EBX + 0x100],0x0     ; 005778eb
    CMP dword ptr [EBX + 0x2d0],0x7     ; 005778f5
        ;   Label: LAB_005778f5
    JNZ 0x00577908                      ; 005778fc
        ;   XREF to: 00577908 (CONDITIONAL_JUMP)  ; LAB_00577908
    MOV dword ptr [EBX + 0x100],0x0     ; 005778fe
    PUSH 0x5ecd76                       ; 00577908
        ;   Label: LAB_00577908
    LEA EAX,[EBX + 0x380]               ; 0057790d
    MOV dword ptr [EBX + 0x44c],0x0     ; 00577913
    PUSH EAX                            ; 0057791d
    MOV dword ptr [EBX + 0x4c8],0x0     ; 0057791e
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00577928
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057792d
    TEST EAX,EAX                        ; 00577930
    JNZ 0x0057793b                      ; 00577932
        ;   XREF to: 0057793b (CONDITIONAL_JUMP)  ; LAB_0057793b
    MOV byte ptr [EBX + 0x380],0x0      ; 00577934
    PUSH 0x5ecd7b                       ; 0057793b
        ;   Label: LAB_0057793b
    LEA EAX,[EBX + 0x3e4]               ; 00577940
    PUSH EAX                            ; 00577946
    CALL crt_string.c__stricmp_FUN_005b8130 ; 00577947
        ;   XREF to: 005b8130 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005b8130(char * str1, char * str2)
    ADD ESP,0x8                         ; 0057794c
    TEST EAX,EAX                        ; 0057794f
    JNZ 0x0057795a                      ; 00577951
        ;   XREF to: 0057795a (CONDITIONAL_JUMP)  ; LAB_0057795a
    MOV byte ptr [EBX + 0x3e4],0x0      ; 00577953
    MOV AH,byte ptr [EBX + 0x380]       ; 0057795a
        ;   Label: LAB_0057795a
    MOV dword ptr [EBX + 0x104],0x0     ; 00577960
    TEST AH,AH                          ; 0057796a
    JNZ 0x00577977                      ; 0057796c
        ;   XREF to: 00577977 (CONDITIONAL_JUMP)  ; LAB_00577977
    CMP byte ptr [EBX + 0x3e4],0x0      ; 0057796e
    JZ 0x00577988                       ; 00577975
        ;   XREF to: 00577988 (CONDITIONAL_JUMP)  ; LAB_00577988
    POP EBX                             ; 00577977
        ;   Label: LAB_00577977
    RET                                 ; 00577978
    MOV dword ptr [EBX + 0x100],0x0     ; 00577979
        ;   Label: LAB_00577979
    JMP 0x005778e2                      ; 00577983
        ;   XREF to: 005778e2 (UNCONDITIONAL_JUMP)  ; LAB_005778e2
    MOV dword ptr [EBX + 0x104],0x1     ; 00577988
        ;   Label: LAB_00577988
    POP EBX                             ; 00577992
    RET                                 ; 00577993

