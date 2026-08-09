; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CTrigger * __cdecl core_trigger_cpp_CTrigger_ctor_FUN_005df840(CTrigger *this_ptr)
;
; Parameters:
; CTrigger *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_trigger.cpp_factoryFuncTrigger_FUN_005df800 at 005df81a
;   core_waypoint.cpp_CWayPoint_ctor_FUN_005ebe70 at 005ebe75
;
; Referenced Globals:
;   TerminatedCString s_nobody_006555f9
;   undefined4 s_obody_006555fa
;   undefined4 s_body_006555fb
;   undefined4 s_ody_006555fc
;   TerminatedCString s_CDemonActor_00655600
;   undefined4 s_DemonActor_00655601
;   undefined4 s_emonActor_00655602
;   undefined4 s_monActor_00655603
;   CDemonActor_vtable g_CTriggerVTable
;
; Called Functions:
;   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 005df840
        ;   Label: core_trigger.cpp_CTrigger_ctor_FUN_005df840
    PUSH EDI                            ; 005df841
    MOV EDX,dword ptr [ESP + 0xc]       ; 005df842
    PUSH EDX                            ; 005df846
    CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0 ; 005df847
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_CDemonActor_ctor_FUN_004088b0(CDemonActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x664a24 ; 005df84c | g_CTriggerVTable
    MOV dword ptr [EAX + 0x160],0x40a00000 ; 005df856
    MOV dword ptr [EAX + 0x164],0x41100000 ; 005df860
    MOV dword ptr [EAX + 0x168],0x40a00000 ; 005df86a
    MOV dword ptr [EAX + 0x170],0x0     ; 005df874
    MOV dword ptr [EAX + 0x15c],0x0     ; 005df87e
    MOV ESI,0x6555f9                    ; 005df888 | = "nobody"
    MOV byte ptr [EAX + 0x224],0x0      ; 005df88d
    MOV EDX,EAX                         ; 005df894
    MOV byte ptr [EAX + 0x288],0x0      ; 005df896
    ADD ESP,0x4                         ; 005df89d
    MOV dword ptr [EAX + 0x16c],0x0     ; 005df8a0
    LEA EDI,[EAX + 0x178]               ; 005df8aa
    MOV dword ptr [EAX + 0x174],0x0     ; 005df8b0
    PUSH EDI                            ; 005df8ba
    MOV AL,byte ptr [ESI]               ; 005df8bb | = "nobody" | s_body_006555fb
        ;   Label: LAB_005df8bb
    MOV byte ptr [EDI],AL               ; 005df8bd
    CMP AL,0x0                          ; 005df8bf
    JZ 0x005df8d3                       ; 005df8c1
        ;   XREF to: 005df8d3 (CONDITIONAL_JUMP)  ; LAB_005df8d3
    MOV AL,byte ptr [ESI + 0x1]         ; 005df8c3 | s_obody_006555fa | s_ody_006555fc
    ADD ESI,0x2                         ; 005df8c6
    MOV byte ptr [EDI + 0x1],AL         ; 005df8c9
    ADD EDI,0x2                         ; 005df8cc
    CMP AL,0x0                          ; 005df8cf
    JNZ 0x005df8bb                      ; 005df8d1
        ;   XREF to: 005df8bb (CONDITIONAL_JUMP)  ; LAB_005df8bb
    POP EDI                             ; 005df8d3
        ;   Label: LAB_005df8d3
    MOV ESI,0x655600                    ; 005df8d4 | = "CDemonActor"
    LEA EDI,[EDX + 0x1c8]               ; 005df8d9
    PUSH EDI                            ; 005df8df
    MOV AL,byte ptr [ESI]               ; 005df8e0 | = "CDemonActor" | s_emonActor_00655602
        ;   Label: LAB_005df8e0
    MOV byte ptr [EDI],AL               ; 005df8e2
    CMP AL,0x0                          ; 005df8e4
    JZ 0x005df8f8                       ; 005df8e6
        ;   XREF to: 005df8f8 (CONDITIONAL_JUMP)  ; LAB_005df8f8
    MOV AL,byte ptr [ESI + 0x1]         ; 005df8e8 | s_DemonActor_00655601 | s_monActor_00655603
    ADD ESI,0x2                         ; 005df8eb
    MOV byte ptr [EDI + 0x1],AL         ; 005df8ee
    ADD EDI,0x2                         ; 005df8f1
    CMP AL,0x0                          ; 005df8f4
    JNZ 0x005df8e0                      ; 005df8f6
        ;   XREF to: 005df8e0 (CONDITIONAL_JUMP)  ; LAB_005df8e0
    POP EDI                             ; 005df8f8
        ;   Label: LAB_005df8f8
    MOV dword ptr [EDX + 0x218],0x0     ; 005df8f9
    MOV dword ptr [EDX + 0x21c],0x3e800000 ; 005df903
    MOV dword ptr [EDX + 0x220],0x3f800000 ; 005df90d
    MOV dword ptr [EDX + 0x2ec],0x0     ; 005df917
    MOV dword ptr [EDX + 0x2f0],0x0     ; 005df921
    MOV dword ptr [EDX + 0x2f4],0x1     ; 005df92b
    MOV dword ptr [EDX + 0x2f8],0x42c80000 ; 005df935
    MOV dword ptr [EDX + 0x64],0x96     ; 005df93f
    MOV dword ptr [EDX + 0x368],0x0     ; 005df946
    MOV dword ptr [EDX + 0x2fc],0x0     ; 005df950
    MOV dword ptr [EDX + 0x158],0x47c34ff3 ; 005df95a
    MOV dword ptr [EDX + 0x300],0x1     ; 005df964
    MOV byte ptr [EDX + 0x304],0x0      ; 005df96e
    MOV EAX,EDX                         ; 005df975
    MOV dword ptr [EDX + 0x36c],0x0     ; 005df977
    POP EDI                             ; 005df981
    POP ESI                             ; 005df982
    RET                                 ; 005df983

