; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_waypoint.cpp_CWayPoint_FUN_005ec280(CWayPoint * this_ptr)
;
; Parameters:
; CWayPoint *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined1       Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   TerminatedCString s_nextWayPoint_00657587
;   TerminatedCString s_adjCount_00657594
;   int g_CWayPointClassVersion = 0x2
;
; Called Functions:
;   core_actor.cpp_serializeActor_FUN_0040b870
;   core_actor.cpp_serializeInteger_FUN_0040b7f0
;   core_trigger.cpp_CTrigger_serialize_FUN_005e0690
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ec280
        ;   Label: core_waypoint.cpp_CWayPoint_FUN_005ec280
    PUSH ESI                            ; 005ec281
    PUSH EDI                            ; 005ec282
    PUSH EBP                            ; 005ec283
    SUB ESP,0x4                         ; 005ec284
    MOV EDI,dword ptr [ESP + 0x18]      ; 005ec287
    PUSH EDI                            ; 005ec28b
    CALL core_trigger.cpp_CTrigger_serialize_FUN_005e0690 ; 005ec28c
        ;   XREF to: 005e0690 (UNCONDITIONAL_CALL)  ; void core_trigger.cpp_CTrigger_serialize_FUN_005e0690(CTrigger * this_ptr)
    MOV EDX,dword ptr [0x0068489c]      ; 005ec291 | g_CWayPointClassVersion
    ADD ESP,0x4                         ; 005ec297
    CMP EDX,0x2                         ; 005ec29a
    JL 0x005ec2b8                       ; 005ec29d
        ;   XREF to: 005ec2b8 (CONDITIONAL_JUMP)  ; LAB_005ec2b8
    CMP dword ptr [0x0068489c],0x2      ; 005ec29f | g_CWayPointClassVersion
        ;   Label: LAB_005ec29f
    JGE 0x005ec2cc                      ; 005ec2a6
        ;   XREF to: 005ec2cc (CONDITIONAL_JUMP)  ; LAB_005ec2cc
    LEA EAX,[EAX]                       ; 005ec2a8
    MOV EDX,EDX                         ; 005ec2ae
    ADD ESP,0x4                         ; 005ec2b0
        ;   Label: LAB_005ec2b0
    POP EBP                             ; 005ec2b3
    POP EDI                             ; 005ec2b4
    POP ESI                             ; 005ec2b5
    POP EBX                             ; 005ec2b6
    RET                                 ; 005ec2b7
    PUSH 0x657587                       ; 005ec2b8 | = "nextWayPoint"
        ;   Label: LAB_005ec2b8
    LEA EBX,[ESP + 0x4]                 ; 005ec2bd
    PUSH EBX                            ; 005ec2c1
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005ec2c2
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ec2c7
    JMP 0x005ec29f                      ; 005ec2ca
        ;   XREF to: 005ec29f (UNCONDITIONAL_JUMP)  ; LAB_005ec29f
    PUSH 0x657594                       ; 005ec2cc | = "adjCount"
        ;   Label: LAB_005ec2cc
    LEA EBX,[EDI + 0x370]               ; 005ec2d1
    PUSH EBX                            ; 005ec2d7
    XOR ESI,ESI                         ; 005ec2d8
    CALL core_actor.cpp_serializeInteger_FUN_0040b7f0 ; 005ec2da
        ;   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeInteger_FUN_0040b7f0(int * int_ptr, char * property_name)
    MOV EBX,dword ptr [EDI + 0x370]     ; 005ec2df
    ADD ESP,0x8                         ; 005ec2e5
    TEST EBX,EBX                        ; 005ec2e8
    JLE 0x005ec2b0                      ; 005ec2ea
        ;   XREF to: 005ec2b0 (CONDITIONAL_JUMP)  ; LAB_005ec2b0
    LEA EBX,[EDI + 0x374]               ; 005ec2ec
    PUSH 0x0                            ; 005ec2f2
        ;   Label: LAB_005ec2f2
    PUSH EBX                            ; 005ec2f4
    INC ESI                             ; 005ec2f5
    CALL core_actor.cpp_serializeActor_FUN_0040b870 ; 005ec2f6
        ;   XREF to: 0040b870 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_serializeActor_FUN_0040b870(CDemonActor * actor_ptr, char * property_name)
    ADD ESP,0x8                         ; 005ec2fb
    MOV EBP,dword ptr [EDI + 0x370]     ; 005ec2fe
    ADD EBX,0x8                         ; 005ec304
    CMP ESI,EBP                         ; 005ec307
    JL 0x005ec2f2                       ; 005ec309
        ;   XREF to: 005ec2f2 (CONDITIONAL_JUMP)  ; LAB_005ec2f2
    ADD ESP,0x4                         ; 005ec30b
    POP EBP                             ; 005ec30e
    POP EDI                             ; 005ec30f
    POP ESI                             ; 005ec310
    POP EBX                             ; 005ec311
    RET                                 ; 005ec312

