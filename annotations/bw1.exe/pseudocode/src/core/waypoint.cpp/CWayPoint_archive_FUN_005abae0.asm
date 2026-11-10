; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_waypoint_cpp_CWayPoint_archive_FUN_005abae0(CWayPoint *this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_nextWayPoint_005f9462
;   TerminatedCString s_adjCount_005f946f
;   int g_CWayPointClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b6f0
;   core_actor.cpp_archiveInteger_FUN_0040b670
;   core_trigger.cpp_CTrigger_archive_FUN_0059b950
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abae0
        ;   Label: core_waypoint.cpp_CWayPoint_archive_FUN_005abae0
    PUSH ESI                            ; 005abae1
    PUSH EDI                            ; 005abae2
    PUSH EBP                            ; 005abae3
    SUB ESP,0x4                         ; 005abae4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005abae7
    PUSH EDI                            ; 005abaeb
    CALL core_trigger.cpp_CTrigger_archive_FUN_0059b950 ; 005abaec
        ;   XREF to: 0059b950 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_archive_FUN_0059b950(CTrigger * this_ptr)
    MOV EDX,dword ptr [0x00626020]      ; 005abaf1 | g_CWayPointClassVersion
    ADD ESP,0x4                         ; 005abaf7
    CMP EDX,0x2                         ; 005abafa
    JL 0x005abb18                       ; 005abafd
        ;   XREF to: 005abb18 (CONDITIONAL_JUMP)  ; LAB_005abb18
    CMP dword ptr [0x00626020],0x2      ; 005abaff | g_CWayPointClassVersion
        ;   Label: LAB_005abaff
    JGE 0x005abb2c                      ; 005abb06
        ;   XREF to: 005abb2c (CONDITIONAL_JUMP)  ; LAB_005abb2c
    LEA EAX,[EAX]                       ; 005abb08
    MOV EDX,EDX                         ; 005abb0e
    ADD ESP,0x4                         ; 005abb10
        ;   Label: LAB_005abb10
    POP EBP                             ; 005abb13
    POP EDI                             ; 005abb14
    POP ESI                             ; 005abb15
    POP EBX                             ; 005abb16
    RET                                 ; 005abb17
    PUSH 0x5f9462                       ; 005abb18 | = "nextWayPoint"
        ;   Label: LAB_005abb18
    LEA EBX,[ESP + 0x4]                 ; 005abb1d
    PUSH EBX                            ; 005abb21
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005abb22
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005abb27
    JMP 0x005abaff                      ; 005abb2a
        ;   XREF to: 005abaff (UNCONDITIONAL_JUMP)  ; LAB_005abaff
    PUSH 0x5f946f                       ; 005abb2c | = "adjCount"
        ;   Label: LAB_005abb2c
    LEA EBX,[EDI + 0x374]               ; 005abb31
    PUSH EBX                            ; 005abb37
    XOR ESI,ESI                         ; 005abb38
    CALL core_actor.cpp_archiveInteger_FUN_0040b670 ; 005abb3a
        ;   XREF to: 0040b670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b670(int * int_ptr, char * property_name)
    MOV EBX,dword ptr [EDI + 0x374]     ; 005abb3f
    ADD ESP,0x8                         ; 005abb45
    TEST EBX,EBX                        ; 005abb48
    JLE 0x005abb10                      ; 005abb4a
        ;   XREF to: 005abb10 (CONDITIONAL_JUMP)  ; LAB_005abb10
    LEA EBX,[EDI + 0x378]               ; 005abb4c
    PUSH 0x0                            ; 005abb52
        ;   Label: LAB_005abb52
    PUSH EBX                            ; 005abb54
    INC ESI                             ; 005abb55
    CALL core_actor.cpp_archiveActor_FUN_0040b6f0 ; 005abb56
        ;   XREF to: 0040b6f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b6f0()
    ADD ESP,0x8                         ; 005abb5b
    MOV EBP,dword ptr [EDI + 0x374]     ; 005abb5e
    ADD EBX,0x8                         ; 005abb64
    CMP ESI,EBP                         ; 005abb67
    JL 0x005abb52                       ; 005abb69
        ;   XREF to: 005abb52 (CONDITIONAL_JUMP)  ; LAB_005abb52
    ADD ESP,0x4                         ; 005abb6b
    POP EBP                             ; 005abb6e
    POP EDI                             ; 005abb6f
    POP ESI                             ; 005abb70
    POP EBX                             ; 005abb71
    RET                                 ; 005abb72

