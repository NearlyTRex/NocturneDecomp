; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFlies * __cdecl core_gore_cpp_CGore_spawnFlies_FUN_004edf30(CGore *this_ptr,CVector3f *position,int gather_count,float spawn_rate,CVector3f *box_size)
;
; Parameters:
; CGore *          Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   position
; int              Stack[0xc]:4   gather_count
; float            Stack[0x10]:4   spawn_rate
; CVector3f *      Stack[0x14]:4   box_size
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030 at 004ee04d
;
; Referenced Globals:
;   TerminatedCString s_core_gore_cpp_0062e3fa
;   TerminatedCString s_core_gore_cpp_0062e40b
;   TerminatedCString s_Can_t_create_flies_0062e41c
;   double DOUBLE_0062e432 = 60
;   CDemonMission* g_CDemonMissionPtr = 02f33740
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CDemonMission g_CDemonMissionInstance
;
; Called Functions:
;   core_flies.cpp_CFlies_ctor_FUN_004cbd60
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70
;   core_mission.cpp_CDemonMission_generateActorName_FUN_00524700
;   shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004edf30
        ;   Label: core_gore.cpp_CGore_spawnFlies_FUN_004edf30
    PUSH ESI                            ; 004edf31
    PUSH EDI                            ; 004edf32
    MOV EDI,dword ptr [ESP + 0x14]      ; 004edf33
    MOV ESI,dword ptr [ESP + 0x20]      ; 004edf37
    PUSH 0x67c                          ; 004edf3b
    PUSH 0x62e3fa                       ; 004edf40 | = "..\\core\\gore.cpp"
    PUSH 0x2a20                         ; 004edf45
    CALL shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0 ; 004edf4a
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAllocTracked1_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 004edf4f
    TEST EAX,EAX                        ; 004edf52
    JNZ 0x004ee014                      ; 004edf54
        ;   XREF to: 004ee014 (CONDITIONAL_JUMP)  ; LAB_004ee014
    MOV EBX,EAX                         ; 004edf5a
        ;   Label: LAB_004edf5a
    TEST EAX,EAX                        ; 004edf5c
    JNZ 0x004edf83                      ; 004edf5e
        ;   XREF to: 004edf83 (CONDITIONAL_JUMP)  ; LAB_004edf83
    MOV EDX,0x62e40b                    ; 004edf60 | = "..\\core\\gore.cpp"
    MOV ECX,0x67d                       ; 004edf65
    PUSH 0x62e41c                       ; 004edf6a | = "Can't create flies!"
    MOV dword ptr [0x02f0ca48],EDX      ; 004edf6f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 004edf75 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004edf7b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004edf80
    FLD float ptr [ESP + 0x1c]          ; 004edf83
        ;   Label: LAB_004edf83
    FDIVR double ptr [0x0062e432]       ; 004edf87 | DOUBLE_0062e432
    LEA EAX,[EBX + 0x20]                ; 004edf8d
    MOV EDX,dword ptr [EDI]             ; 004edf90
    MOV dword ptr [EAX],EDX             ; 004edf92
    MOV EDX,dword ptr [EDI + 0x4]       ; 004edf94
    MOV dword ptr [EAX + 0x4],EDX       ; 004edf97
    MOV EDX,dword ptr [EDI + 0x8]       ; 004edf9a
    MOV dword ptr [EAX + 0x8],EDX       ; 004edf9d
    MOV EAX,[0x0067d550]                ; 004edfa0 | g_CDemonMissionPtr
    MOV EAX,dword ptr [EAX]             ; 004edfa5 | g_CDemonMissionInstance
    MOV dword ptr [EBX + 0x164],0x0     ; 004edfa7
    MOV dword ptr [EBX + 0x2c],EAX      ; 004edfb1
    MOV EAX,dword ptr [ESP + 0x18]      ; 004edfb4
    MOV dword ptr [EBX + 0x2a0c],EAX    ; 004edfb8
    FSTP float ptr [EBX + 0x2a14]       ; 004edfbe
    TEST ESI,ESI                        ; 004edfc4
    JZ 0x004edfe2                       ; 004edfc6
        ;   XREF to: 004edfe2 (CONDITIONAL_JUMP)  ; LAB_004edfe2
    LEA EAX,[EBX + 0x158]               ; 004edfc8
    CMP EAX,ESI                         ; 004edfce
    JZ 0x004edfe2                       ; 004edfd0
        ;   XREF to: 004edfe2 (CONDITIONAL_JUMP)  ; LAB_004edfe2
    MOV EDX,dword ptr [ESI]             ; 004edfd2
    MOV dword ptr [EAX],EDX             ; 004edfd4
    MOV EDX,dword ptr [ESI + 0x4]       ; 004edfd6
    MOV dword ptr [EAX + 0x4],EDX       ; 004edfd9
    MOV EDX,dword ptr [ESI + 0x8]       ; 004edfdc
    MOV dword ptr [EAX + 0x8],EDX       ; 004edfdf
    PUSH EBX                            ; 004edfe2
        ;   Label: LAB_004edfe2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004edfe3
    CALL dword ptr [EAX]                ; 004edfe9
    ADD ESP,0x4                         ; 004edfeb
    PUSH EBX                            ; 004edfee
    MOV ESI,dword ptr [0x0067d550]      ; 004edfef | g_CDemonMissionPtr
    PUSH ESI                            ; 004edff5 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_00524700 ; 004edff6
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_00524700(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004edffb
    PUSH EBX                            ; 004edffe
    MOV EDI,dword ptr [0x0067d550]      ; 004edfff | g_CDemonMissionPtr
    PUSH EDI                            ; 004ee005 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70 ; 004ee006
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_00523b70(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004ee00b
    MOV EAX,EBX                         ; 004ee00e
    POP EDI                             ; 004ee010
    POP ESI                             ; 004ee011
    POP EBX                             ; 004ee012
    RET                                 ; 004ee013
    PUSH EAX                            ; 004ee014
        ;   Label: LAB_004ee014
    CALL core_flies.cpp_CFlies_ctor_FUN_004cbd60 ; 004ee015
        ;   XREF to: 004cbd60 (UNCONDITIONAL_CALL)  ; CFlies * core_flies.cpp_CFlies_ctor_FUN_004cbd60(CFlies * this_ptr)
    ADD ESP,0x4                         ; 004ee01a
    JMP 0x004edf5a                      ; 004ee01d
        ;   XREF to: 004edf5a (UNCONDITIONAL_JUMP)  ; LAB_004edf5a

