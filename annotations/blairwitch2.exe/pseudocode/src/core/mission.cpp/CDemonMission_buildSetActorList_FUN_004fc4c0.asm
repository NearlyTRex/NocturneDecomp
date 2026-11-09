; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_buildSetActorList_FUN_004fc4c0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_CDemonMission_createHeros_FUN_004fd0e0 at 004fd1de
;   core_mission.cpp_CDemonMission_loadSet_FUN_004fc6b0 at 004fc6df
;   core_mission.cpp_FUN_004fc640 at 004fc66f
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005de6b4
;   TerminatedCString s_CDemonMission_buildSetAc_005de6c8
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   core_set.cpp_FUN_00534820
;   core_setcolid.cpp_FUN_00537fc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fc4c0
        ;   Label: core_mission.cpp_CDemonMission_buildSetActorList_FUN_004fc4c0
    PUSH ESI                            ; 004fc4c1
    PUSH EDI                            ; 004fc4c2
    PUSH EBP                            ; 004fc4c3
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fc4c4
    MOV EAX,[0x0061b5a8]                ; 004fc4c8 | g_CDemonSetPtr
    MOV dword ptr [EAX + 0x14d164],0x0  ; 004fc4cd | g_CDemonSetInstance.field1364324_0x14d164
    MOV EBX,dword ptr [ESI + 0x1114]    ; 004fc4d7
    TEST EBX,EBX                        ; 004fc4dd
    JZ 0x004fc4fc                       ; 004fc4df
        ;   XREF to: 004fc4fc (CONDITIONAL_JUMP)  ; LAB_004fc4fc
    MOV EDI,0x5de6b4                    ; 004fc4e1 | = "..\\core\\mission.cpp"
    MOV EBP,0x391                       ; 004fc4e6
    MOV EDX,dword ptr [ESI]             ; 004fc4eb
        ;   Label: LAB_004fc4eb
    CMP EDX,dword ptr [EBX + 0x2c]      ; 004fc4ed
    JZ 0x004fc51f                       ; 004fc4f0
        ;   XREF to: 004fc51f (CONDITIONAL_JUMP)  ; LAB_004fc51f
    MOV EBX,dword ptr [EBX + 0x14c]     ; 004fc4f2
        ;   Label: LAB_004fc4f2
    TEST EBX,EBX                        ; 004fc4f8
    JNZ 0x004fc4eb                      ; 004fc4fa
        ;   XREF to: 004fc4eb (CONDITIONAL_JUMP)  ; LAB_004fc4eb
    MOV ECX,dword ptr [0x0061b5a8]      ; 004fc4fc | g_CDemonSetPtr
        ;   Label: LAB_004fc4fc
    PUSH ECX                            ; 004fc502 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00537fc0 ; 004fc503
        ;   XREF to: 00537fc0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_FUN_00537fc0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fc508
    MOV EBX,dword ptr [0x0061b5a8]      ; 004fc50b | g_CDemonSetPtr
    PUSH EBX                            ; 004fc511 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00534820      ; 004fc512
        ;   XREF to: 00534820 (UNCONDITIONAL_CALL)  ; void core_set.cpp_FUN_00534820(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fc517
    POP EBP                             ; 004fc51a
    POP EDI                             ; 004fc51b
    POP ESI                             ; 004fc51c
    POP EBX                             ; 004fc51d
    RET                                 ; 004fc51e
    MOV EAX,[0x0061b5a8]                ; 004fc51f | g_CDemonSetPtr
        ;   Label: LAB_004fc51f
    CMP dword ptr [EAX + 0x14d164],0x7d0 ; 004fc524 | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x004fc549                       ; 004fc52e
        ;   XREF to: 004fc549 (CONDITIONAL_JUMP)  ; LAB_004fc549
    PUSH 0x5de6c8                       ; 004fc530 | = "CDemonMission::buildSetActorList - To..."
    MOV dword ptr [0x01d046a0],EDI      ; 004fc535 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBP      ; 004fc53b | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 004fc541
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 004fc546
    MOV EAX,[0x0061b5a8]                ; 004fc549 | g_CDemonSetPtr
        ;   Label: LAB_004fc549
    MOV EDX,dword ptr [EAX + 0x14d164]  ; 004fc54e | g_CDemonSetInstance.field1364324_0x14d164
    MOV dword ptr [EAX + EDX*0x4 + 0x14d168],EBX ; 004fc554 | g_CDemonSetInstance.field1364328_0x14d168
    INC dword ptr [EAX + 0x14d164]      ; 004fc55b | g_CDemonSetInstance.field1364324_0x14d164
    JMP 0x004fc4f2                      ; 004fc561
        ;   XREF to: 004fc4f2 (UNCONDITIONAL_JUMP)  ; LAB_004fc4f2

