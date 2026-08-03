; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_CActorDestination_process_FUN_0044b850(CActorDestination *this_ptr,float delta_time)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_filmreel.cpp_CFilmProjector_process_FUN_00482010 at 00482043
;
; Referenced Globals:
;   double DOUBLE_0057be0f = 0.25
;   double DOUBLE_0057be17 = 0.100000000000000
;   undefined4 DAT_005b7650
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;   undefined4 g_CDemonSet_01e57284.actors[1]
;
; Called Functions:
;   core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0
;   core_event.cpp_CEventList_executeCommands_FUN_0047ab70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b850
        ;   Label: core_dest.cpp_CActorDestination_process_FUN_0044b850
    PUSH ESI                            ; 0044b851
    PUSH EDI                            ; 0044b852
    PUSH EBP                            ; 0044b853
    MOV EBP,ESP                         ; 0044b854
    SUB ESP,0x24                        ; 0044b856
    AND ESP,0xfffffff8                  ; 0044b859
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b85c
    CMP dword ptr [EAX + 0x1e8],0x0     ; 0044b85f
    JZ 0x0044b8f1                       ; 0044b866
        ;   XREF to: 0044b8f1 (CONDITIONAL_JUMP)  ; LAB_0044b8f1
    CMP dword ptr [EAX + 0x150],0x0     ; 0044b86c
    JNZ 0x0044b8f1                      ; 0044b873
        ;   XREF to: 0044b8f1 (CONDITIONAL_JUMP)  ; LAB_0044b8f1
    LEA ESI,[EAX + 0x20]                ; 0044b879
    XOR EDI,EDI                         ; 0044b87c
    XOR EBX,EBX                         ; 0044b87e
    MOV EDX,dword ptr [0x005be368]      ; 0044b880 | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0044b880
    CMP EDI,dword ptr [EDX + 0x14cd6c]  ; 0044b886 | g_CDemonSet_01e57284.actor_count
    JGE 0x0044b8f1                      ; 0044b88c
        ;   XREF to: 0044b8f1 (CONDITIONAL_JUMP)  ; LAB_0044b8f1
    ADD EDX,EBX                         ; 0044b88e
    MOV EAX,dword ptr [EDX + 0x14cd70]  ; 0044b890 | g_CDemonSet_01e57284.actors[0] | g_CDemonSet_01e57284.actors[1]
    FLD float ptr [ESI]                 ; 0044b896
    FSUB float ptr [EAX + 0x20]         ; 0044b898
    FSTP float ptr [ESP + 0xc]          ; 0044b89b
    FLD float ptr [ESI + 0x4]           ; 0044b89f
    FSUB float ptr [EAX + 0x24]         ; 0044b8a2
    FST float ptr [ESP + 0x10]          ; 0044b8a5
    FMUL float ptr [ESP + 0x10]         ; 0044b8a9
    FLD float ptr [ESP + 0xc]           ; 0044b8ad
    FMUL ST0                            ; 0044b8b1
    FLD float ptr [ESI + 0x8]           ; 0044b8b3
    FSUB float ptr [EAX + 0x28]         ; 0044b8b6
    FXCH                                ; 0044b8b9
    FADDP ST2,ST0                       ; 0044b8bb
    FST float ptr [ESP + 0x14]          ; 0044b8bd
    FMUL float ptr [ESP + 0x14]         ; 0044b8c1
    FADDP                               ; 0044b8c5
    FSQRT                               ; 0044b8c7
    FCOMP double ptr [0x0057be17]       ; 0044b8c9 | DOUBLE_0057be17
    FNSTSW AX                           ; 0044b8cf
    SAHF                                ; 0044b8d1
    JC 0x0044b8da                       ; 0044b8d2
        ;   XREF to: 0044b8da (CONDITIONAL_JUMP)  ; LAB_0044b8da
    INC EDI                             ; 0044b8d4
        ;   Label: LAB_0044b8d4
    ADD EBX,0x4                         ; 0044b8d5
    JMP 0x0044b880                      ; 0044b8d8
        ;   XREF to: 0044b880 (UNCONDITIONAL_JUMP)  ; LAB_0044b880
    MOV ECX,dword ptr [EDX + 0x14cd70]  ; 0044b8da | g_CDemonSet_01e57284.actors[0]
        ;   Label: LAB_0044b8da
    PUSH ECX                            ; 0044b8e0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b8e1
    PUSH EAX                            ; 0044b8e4
    CALL core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0 ; 0044b8e5
        ;   XREF to: 0044bab0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_CActorDestination_acceptsActor_FUN_0044bab0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0044b8ea
    TEST EAX,EAX                        ; 0044b8ed
    JZ 0x0044b8d4                       ; 0044b8ef
        ;   XREF to: 0044b8d4 (CONDITIONAL_JUMP)  ; LAB_0044b8d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b8f1
        ;   Label: LAB_0044b8f1
    MOV EDX,dword ptr [EAX + 0x150]     ; 0044b8f4
    TEST EDX,EDX                        ; 0044b8fa
    JZ 0x0044b9b0                       ; 0044b8fc
        ;   XREF to: 0044b9b0 (CONDITIONAL_JUMP)  ; LAB_0044b9b0
    FLD float ptr [EDX + 0x20]          ; 0044b902
    FSUB float ptr [EAX + 0x20]         ; 0044b905
    FSTP float ptr [ESP]                ; 0044b908
    FLD float ptr [EDX + 0x24]          ; 0044b90b
    FSUB float ptr [EAX + 0x24]         ; 0044b90e
    FSTP float ptr [ESP + 0x4]          ; 0044b911
    FLD float ptr [EDX + 0x28]          ; 0044b915
    LEA EDX,[ESP + 0x18]                ; 0044b918
    FSUB float ptr [EAX + 0x28]         ; 0044b91c
    MOV EAX,ESP                         ; 0044b91f
    FSTP float ptr [ESP + 0x8]          ; 0044b921
    CMP EDX,EAX                         ; 0044b925
    JNZ 0x0044b9c4                      ; 0044b927
        ;   XREF to: 0044b9c4 (CONDITIONAL_JUMP)  ; LAB_0044b9c4
    FLD float ptr [ESP + 0x18]          ; 0044b92d
        ;   Label: LAB_0044b92d
    FABS                                ; 0044b931
    FCOMP double ptr [0x0057be0f]       ; 0044b933 | DOUBLE_0057be0f
    FNSTSW AX                           ; 0044b939
    SAHF                                ; 0044b93b
    JNC 0x0044b9e9                      ; 0044b93c
        ;   XREF to: 0044b9e9 (CONDITIONAL_JUMP)  ; LAB_0044b9e9
    FLD float ptr [ESP + 0x1c]          ; 0044b942
    FABS                                ; 0044b946
    FCOMP double ptr [0x0057be0f]       ; 0044b948 | DOUBLE_0057be0f
    FNSTSW AX                           ; 0044b94e
    SAHF                                ; 0044b950
    JNC 0x0044b9e9                      ; 0044b951
        ;   XREF to: 0044b9e9 (CONDITIONAL_JUMP)  ; LAB_0044b9e9
    FLD float ptr [ESP + 0x20]          ; 0044b957
    FABS                                ; 0044b95b
    FCOMP double ptr [0x0057be0f]       ; 0044b95d | DOUBLE_0057be0f
    FNSTSW AX                           ; 0044b963
    SAHF                                ; 0044b965
    JNC 0x0044b9e9                      ; 0044b966
        ;   XREF to: 0044b9e9 (CONDITIONAL_JUMP)  ; LAB_0044b9e9
    MOV EDX,dword ptr [EBP + 0x14]      ; 0044b96c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b96f
    MOV ECX,dword ptr [EDX + 0x1e4]     ; 0044b972
    ADD EAX,0x180                       ; 0044b978
    TEST ECX,ECX                        ; 0044b97d
    JNZ 0x0044b9e0                      ; 0044b97f
        ;   XREF to: 0044b9e0 (CONDITIONAL_JUMP)  ; LAB_0044b9e0
    CMP dword ptr [EDX + 0x17c],0x0     ; 0044b981
    JNZ 0x0044b9a3                      ; 0044b988
        ;   XREF to: 0044b9a3 (CONDITIONAL_JUMP)  ; LAB_0044b9a3
    CMP dword ptr [EDX + 0x1e8],0x0     ; 0044b98a
    JNZ 0x0044b9a3                      ; 0044b991
        ;   XREF to: 0044b9a3 (CONDITIONAL_JUMP)  ; LAB_0044b9a3
    PUSH EAX                            ; 0044b993
    MOV EDI,dword ptr [0x005b7650]      ; 0044b994 | DAT_005b7650
    PUSH EDI                            ; 0044b99a
    CALL core_event.cpp_CEventList_executeCommands_FUN_0047ab70 ; 0044b99b
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0047ab70(CEventList * this_ptr, char * commands)
        ;   Label: LAB_0044b99b
    ADD ESP,0x8                         ; 0044b9a0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9a3
        ;   Label: LAB_0044b9a3
    MOV dword ptr [EAX + 0x17c],0x1     ; 0044b9a6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9b0
        ;   Label: LAB_0044b9b0
    MOV dword ptr [EAX + 0x1e8],0x0     ; 0044b9b3
    MOV ESP,EBP                         ; 0044b9bd
    POP EBP                             ; 0044b9bf
    POP EDI                             ; 0044b9c0
    POP ESI                             ; 0044b9c1
    POP EBX                             ; 0044b9c2
    RET                                 ; 0044b9c3
    MOV EAX,dword ptr [ESP]             ; 0044b9c4
        ;   Label: LAB_0044b9c4
    MOV dword ptr [ESP + 0x18],EAX      ; 0044b9c7
    MOV EAX,dword ptr [ESP + 0x4]       ; 0044b9cb
    MOV dword ptr [ESP + 0x1c],EAX      ; 0044b9cf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0044b9d3
    MOV dword ptr [ESP + 0x20],EAX      ; 0044b9d7
    JMP 0x0044b92d                      ; 0044b9db
        ;   XREF to: 0044b92d (UNCONDITIONAL_JUMP)  ; LAB_0044b92d
    PUSH EAX                            ; 0044b9e0
        ;   Label: LAB_0044b9e0
    MOV EAX,[0x005b7650]                ; 0044b9e1 | DAT_005b7650
    PUSH EAX                            ; 0044b9e6
    JMP 0x0044b99b                      ; 0044b9e7
        ;   XREF to: 0044b99b (UNCONDITIONAL_JUMP)  ; LAB_0044b99b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9e9
        ;   Label: LAB_0044b9e9
    MOV dword ptr [EAX + 0x17c],0x0     ; 0044b9ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044b9f6
    MOV dword ptr [EAX + 0x1e8],0x0     ; 0044b9f9
    MOV ESP,EBP                         ; 0044ba03
    POP EBP                             ; 0044ba05
    POP EDI                             ; 0044ba06
    POP ESI                             ; 0044ba07
    POP EBX                             ; 0044ba08
    RET                                 ; 0044ba09

