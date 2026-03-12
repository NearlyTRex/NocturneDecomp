; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_trigger_cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980(CTrigger *this_ptr,CDemonActor *querying_actor,CVector3f *query_position)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   querying_actor
; CVector3f *      Stack[0xc]:4   query_position
; Local Variables:
; CBoundingBox3D   Stack[-0x30]:24  CStack_30
; CVector3f        Stack[-0x18]:12  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e0980
        ;   Label: core_trigger.cpp_CTrigger_evaluateTriggerCondition_FUN_005e0980
    PUSH ESI                            ; 005e0981
    SUB ESP,0x28                        ; 005e0982
    MOV ESI,dword ptr [ESP + 0x34]      ; 005e0985
    CMP dword ptr [ESI + 0x174],0x3     ; 005e0989
    JZ 0x005e09a4                       ; 005e0990
        ;   XREF to: 005e09a4 (CONDITIONAL_JUMP)  ; LAB_005e09a4
    MOV dword ptr [ESP + 0x24],0xbf800000 ; 005e0992
        ;   Label: LAB_005e0992
    MOV EAX,dword ptr [ESP + 0x24]      ; 005e099a
    ADD ESP,0x28                        ; 005e099e
    POP ESI                             ; 005e09a1
    POP EBX                             ; 005e09a2
    RET                                 ; 005e09a3
    MOV ECX,dword ptr [ESP + 0x3c]      ; 005e09a4
        ;   Label: LAB_005e09a4
    PUSH ECX                            ; 005e09a8
    LEA EDX,[ESP + 0x1c]                ; 005e09a9
    PUSH EDX                            ; 005e09ad
    PUSH ESI                            ; 005e09ae
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005e09af
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 005e09b4
    MOV EDX,ESP                         ; 005e09b7
    PUSH EDX                            ; 005e09b9
    MOV EBX,EAX                         ; 005e09ba
    MOV EAX,dword ptr [ESI + 0x154]     ; 005e09bc
    PUSH ESI                            ; 005e09c2
    CALL dword ptr [EAX + 0x14]         ; 005e09c3
    MOV EDX,EAX                         ; 005e09c6
    ADD ESP,0x8                         ; 005e09c8
    FLD float ptr [EDX]                 ; 005e09cb
    FCOMP float ptr [EBX]               ; 005e09cd
    FNSTSW AX                           ; 005e09cf
    SAHF                                ; 005e09d1
    JA 0x005e0992                       ; 005e09d2
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    FLD float ptr [EDX + 0x4]           ; 005e09d4
    FCOMP float ptr [EBX + 0x4]         ; 005e09d7
    FNSTSW AX                           ; 005e09da
    SAHF                                ; 005e09dc
    JA 0x005e0992                       ; 005e09dd
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    FLD float ptr [EDX + 0x8]           ; 005e09df
    FCOMP float ptr [EBX + 0x8]         ; 005e09e2
    FNSTSW AX                           ; 005e09e5
    SAHF                                ; 005e09e7
    JA 0x005e0992                       ; 005e09e8
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    FLD float ptr [EDX + 0xc]           ; 005e09ea
    FCOMP float ptr [EBX]               ; 005e09ed
    FNSTSW AX                           ; 005e09ef
    SAHF                                ; 005e09f1
    JC 0x005e0992                       ; 005e09f2
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    FLD float ptr [EDX + 0x10]          ; 005e09f4
    FCOMP float ptr [EBX + 0x4]         ; 005e09f7
    FNSTSW AX                           ; 005e09fa
    SAHF                                ; 005e09fc
    JC 0x005e0992                       ; 005e09fd
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    FLD float ptr [EDX + 0x14]          ; 005e09ff
    FCOMP float ptr [EBX + 0x8]         ; 005e0a02
    FNSTSW AX                           ; 005e0a05
    SAHF                                ; 005e0a07
    JC 0x005e0992                       ; 005e0a08
        ;   XREF to: 005e0992 (CONDITIONAL_JUMP)  ; LAB_005e0992
    XOR ESI,ESI                         ; 005e0a0a
    MOV dword ptr [ESP + 0x24],ESI      ; 005e0a0c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005e0a10
    ADD ESP,0x28                        ; 005e0a14
    POP ESI                             ; 005e0a17
    POP EBX                             ; 005e0a18
    RET                                 ; 005e0a19

