; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_teleport_cpp_CTeleport_process_FUN_00543910(CTeleport *this_ptr,float delta_time)
;
; Parameters:
; CTeleport *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   CDemonMission* g_CDemonMission_PTR_005baf90 = 01cc9450
;   int g_LocalHeroIndex
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_mission.cpp_CDemonMission_FUN_004d90e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00543910
        ;   Label: core_teleport.cpp_CTeleport_process_FUN_00543910
    PUSH ESI                            ; 00543911
    SUB ESP,0x24                        ; 00543912
    MOV ESI,dword ptr [ESP + 0x30]      ; 00543915
    CMP dword ptr [ESI + 0x15c],0x0     ; 00543919
    JNZ 0x00543928                      ; 00543920
        ;   XREF to: 00543928 (CONDITIONAL_JUMP)  ; LAB_00543928
    ADD ESP,0x24                        ; 00543922
        ;   Label: LAB_00543922
    POP ESI                             ; 00543925
    POP EBX                             ; 00543926
    RET                                 ; 00543927
    MOV EDX,dword ptr [0x01cae0e8]      ; 00543928 | g_LocalHeroIndex
        ;   Label: LAB_00543928
    MOV EDX,dword ptr [EDX*0x4 + 0x1cae0d8] ; 0054392e
    ADD EDX,0x20                        ; 00543935
    PUSH EDX                            ; 00543938
    LEA EAX,[ESP + 0x1c]                ; 00543939
    PUSH EAX                            ; 0054393d
    PUSH ESI                            ; 0054393e
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 0054393f
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00543944
    MOV EDX,ESP                         ; 00543947
    PUSH EDX                            ; 00543949
    MOV EBX,EAX                         ; 0054394a
    MOV EAX,dword ptr [ESI + 0x14c]     ; 0054394c
    PUSH ESI                            ; 00543952
    CALL dword ptr [EAX + 0x14]         ; 00543953
    MOV EDX,EAX                         ; 00543956
    ADD ESP,0x8                         ; 00543958
    FLD float ptr [EDX]                 ; 0054395b
    FCOMP float ptr [EBX]               ; 0054395d
    FNSTSW AX                           ; 0054395f
    SAHF                                ; 00543961
    JA 0x00543922                       ; 00543962
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    FLD float ptr [EDX + 0x4]           ; 00543964
    FCOMP float ptr [EBX + 0x4]         ; 00543967
    FNSTSW AX                           ; 0054396a
    SAHF                                ; 0054396c
    JA 0x00543922                       ; 0054396d
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    FLD float ptr [EDX + 0x8]           ; 0054396f
    FCOMP float ptr [EBX + 0x8]         ; 00543972
    FNSTSW AX                           ; 00543975
    SAHF                                ; 00543977
    JA 0x00543922                       ; 00543978
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    FLD float ptr [EDX + 0xc]           ; 0054397a
    FCOMP float ptr [EBX]               ; 0054397d
    FNSTSW AX                           ; 0054397f
    SAHF                                ; 00543981
    JC 0x00543922                       ; 00543982
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    FLD float ptr [EDX + 0x10]          ; 00543984
    FCOMP float ptr [EBX + 0x4]         ; 00543987
    FNSTSW AX                           ; 0054398a
    SAHF                                ; 0054398c
    JC 0x00543922                       ; 0054398d
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    FLD float ptr [EDX + 0x14]          ; 0054398f
    FCOMP float ptr [EBX + 0x8]         ; 00543992
    FNSTSW AX                           ; 00543995
    SAHF                                ; 00543997
    JC 0x00543922                       ; 00543998
        ;   XREF to: 00543922 (CONDITIONAL_JUMP)  ; LAB_00543922
    MOV EDX,dword ptr [ESI + 0x15c]     ; 0054399a
    ADD EDX,0x20                        ; 005439a0
    PUSH EDX                            ; 005439a3
    MOV ECX,dword ptr [0x005baf90]      ; 005439a4 | g_CDemonMission_PTR_005baf90
    PUSH ECX                            ; 005439aa | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_FUN_004d90e0 ; 005439ab
        ;   XREF to: 004d90e0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_004d90e0(CDemonMission * this_ptr, CLocation * teleport_target)
    ADD ESP,0x8                         ; 005439b0
    ADD ESP,0x24                        ; 005439b3
    POP ESI                             ; 005439b6
    POP EBX                             ; 005439b7
    RET                                 ; 005439b8

