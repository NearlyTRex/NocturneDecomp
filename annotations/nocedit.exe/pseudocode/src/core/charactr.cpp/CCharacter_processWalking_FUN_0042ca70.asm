; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; CVector3f        Stack[-0x48]:12  CStack_48
; CVector3f        Stack[-0x3c]:12  local_3c
; CVector3f        Stack[-0x30]:12  CStack_30
; float            Stack[-0x1c]:4  fStack_1c
; float            Stack[-0x18]:4  fStack_18
;
; XREF[31]:
;   core_armour.cpp_CArmour_process_FUN_00412260 at 004122ed
;   core_baron.cpp_CBaron_process_FUN_00412e80 at 00412fd9
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415518
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041691b
;   core_biggs.cpp_CBiggs_process_FUN_00418700 at 0041878c
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c3a1
;   core_colonel.cpp_CColonel_process_FUN_0043fa00 at 0043faa2
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 004443b8
;   core_dog.cpp_CZombieDog_process_FUN_0047f140 at 0047f1ff
;   core_dracbrid.cpp_CDraculaBride_process_FUN_00484410 at 0048467e
;   ... and 21 more
;
; Referenced Globals:
;   TerminatedCString s_s_can_t_figure_out_next__0061725e
;   double DOUBLE_0061729a = 0.628318530700000
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   UVector3 g_ZeroVector
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042ca70
        ;   Label: core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
    PUSH ESI                            ; 0042ca71
    PUSH EDI                            ; 0042ca72
    PUSH EBP                            ; 0042ca73
    SUB ESP,0x38                        ; 0042ca74
    MOV EBX,dword ptr [ESP + 0x4c]      ; 0042ca77
    CMP dword ptr [EBX + 0x25a0],0x0    ; 0042ca7b
    JNZ 0x0042ca91                      ; 0042ca82
        ;   XREF to: 0042ca91 (CONDITIONAL_JUMP)  ; LAB_0042ca91
    CMP dword ptr [EBX + 0x25b4],0x0    ; 0042ca84
    JZ 0x0042cb3b                       ; 0042ca8b
        ;   XREF to: 0042cb3b (CONDITIONAL_JUMP)  ; LAB_0042cb3b
    FLD float ptr [EBX + 0x25ac]        ; 0042ca91
        ;   Label: LAB_0042ca91
    FLDZ                                ; 0042ca97
    FCOMPP                              ; 0042ca99
    FNSTSW AX                           ; 0042ca9b
    SAHF                                ; 0042ca9d
    JA 0x0042cb45                       ; 0042ca9e
        ;   XREF to: 0042cb45 (CONDITIONAL_JUMP)  ; LAB_0042cb45
    FLD float ptr [EBX + 0x25ac]        ; 0042caa4
    FSUB float ptr [ESP + 0x50]         ; 0042caaa
    FST float ptr [EBX + 0x25ac]        ; 0042caae
    FLDZ                                ; 0042cab4
    FCOMPP                              ; 0042cab6
    FNSTSW AX                           ; 0042cab8
    SAHF                                ; 0042caba
    JC 0x0042cb45                       ; 0042cabb
        ;   XREF to: 0042cb45 (CONDITIONAL_JUMP)  ; LAB_0042cb45
    MOV dword ptr [EBX + 0x25ac],0x0    ; 0042cac1
    MOV EDX,dword ptr [EBX + 0x25a0]    ; 0042cacb
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042cad1
    LEA EAX,[EBX + 0x20]                ; 0042cadb
    MOV ECX,dword ptr [EDX + 0x20]      ; 0042cade
    MOV dword ptr [EAX],ECX             ; 0042cae1
    MOV ECX,dword ptr [EDX + 0x24]      ; 0042cae3
    MOV dword ptr [EAX + 0x4],ECX       ; 0042cae6
    MOV ECX,dword ptr [EDX + 0x28]      ; 0042cae9
    MOV dword ptr [EAX + 0x8],ECX       ; 0042caec
    MOV EDX,dword ptr [EDX + 0x2c]      ; 0042caef
    MOV dword ptr [EAX + 0xc],EDX       ; 0042caf2
    MOV EDX,dword ptr [EBX + 0x25a0]    ; 0042caf5
    LEA EAX,[EBX + 0x30]                ; 0042cafb
    ADD EDX,0x30                        ; 0042cafe
    CMP EAX,EDX                         ; 0042cb01
    JZ 0x0042cb15                       ; 0042cb03
        ;   XREF to: 0042cb15 (CONDITIONAL_JUMP)  ; LAB_0042cb15
    MOV ECX,dword ptr [EDX]             ; 0042cb05
    MOV dword ptr [EAX],ECX             ; 0042cb07
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042cb09
    MOV dword ptr [EAX + 0x4],ECX       ; 0042cb0c
    MOV ECX,dword ptr [EDX + 0x8]       ; 0042cb0f
    MOV dword ptr [EAX + 0x8],ECX       ; 0042cb12
    CMP dword ptr [EBX + 0x25b4],0x0    ; 0042cb15
        ;   Label: LAB_0042cb15
    JZ 0x0042cb2e                       ; 0042cb1c
        ;   XREF to: 0042cb2e (CONDITIONAL_JUMP)  ; LAB_0042cb2e
    PUSH EBX                            ; 0042cb1e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042cb1f
    CALL dword ptr [EAX + 0x134]        ; 0042cb25
    ADD ESP,0x4                         ; 0042cb2b
    MOV EAX,0x1                         ; 0042cb2e
        ;   Label: LAB_0042cb2e
    ADD ESP,0x38                        ; 0042cb33
    POP EBP                             ; 0042cb36
    POP EDI                             ; 0042cb37
    POP ESI                             ; 0042cb38
    POP EBX                             ; 0042cb39
    RET                                 ; 0042cb3a
    XOR EAX,EAX                         ; 0042cb3b
        ;   Label: LAB_0042cb3b
    ADD ESP,0x38                        ; 0042cb3d
    POP EBP                             ; 0042cb40
    POP EDI                             ; 0042cb41
    POP ESI                             ; 0042cb42
    POP EBX                             ; 0042cb43
    RET                                 ; 0042cb44
    MOV ESI,dword ptr [EBX + 0x25b4]    ; 0042cb45
        ;   Label: LAB_0042cb45
    LEA EDI,[EBX + 0x20]                ; 0042cb4b
    TEST ESI,ESI                        ; 0042cb4e
    JZ 0x0042ccba                       ; 0042cb50
        ;   XREF to: 0042ccba (CONDITIONAL_JUMP)  ; LAB_0042ccba
    PUSH EDI                            ; 0042cb56
    LEA EAX,[EBX + 0x25b8]              ; 0042cb57
    PUSH EAX                            ; 0042cb5d
    LEA EAX,[ESP + 0x14]                ; 0042cb5e
    PUSH EAX                            ; 0042cb62
    PUSH ESI                            ; 0042cb63
    CALL core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20 ; 0042cb64
        ;   XREF to: 00480e20 (UNCONDITIONAL_CALL)  ; float * core_door.cpp_CDoor_getOpenStandPos_FUN_00480e20(CDoor * this_ptr)
    ADD ESP,0x10                        ; 0042cb69
    PUSH 0x0                            ; 0042cb6c
    MOV EAX,dword ptr [EBX + 0x25b4]    ; 0042cb6e
    PUSH 0x0                            ; 0042cb74
    PUSH 0x3f87558                      ; 0042cb76 | g_ZeroVector
    MOV EDX,dword ptr [EAX + 0x154]     ; 0042cb7b
    PUSH EAX                            ; 0042cb81
    CALL dword ptr [EDX + 0xbc]         ; 0042cb82
    ADD ESP,0x4                         ; 0042cb88
    PUSH EAX                            ; 0042cb8b
    LEA EAX,[ESP + 0x1c]                ; 0042cb8c
    PUSH EAX                            ; 0042cb90
    PUSH EBX                            ; 0042cb91
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042cb92
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042cb97
    TEST EAX,EAX                        ; 0042cb9a
    JL 0x0042cc64                       ; 0042cb9c
        ;   XREF to: 0042cc64 (CONDITIONAL_JUMP)  ; LAB_0042cc64
    JLE 0x0042cca3                      ; 0042cba2
        ;   XREF to: 0042cca3 (CONDITIONAL_JUMP)  ; LAB_0042cca3
    MOV EAX,dword ptr [EBX + 0x25b4]    ; 0042cba8
    ADD EAX,0x9bc                       ; 0042cbae
    PUSH EAX                            ; 0042cbb3
    LEA EAX,[ESP + 0x1c]                ; 0042cbb4
    PUSH EAX                            ; 0042cbb8
    PUSH EBX                            ; 0042cbb9
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042cbba
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 0042cbbf
    PUSH EAX                            ; 0042cbc2
    LEA EAX,[ESP + 0x4]                 ; 0042cbc3
    PUSH EAX                            ; 0042cbc7
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042cbc8
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 0042cbcd
    ADD ESP,0x8                         ; 0042cbd0
    FST float ptr [EBX + 0x2418]        ; 0042cbd3
    FCOMP double ptr [0x0061729a]       ; 0042cbd9 | DOUBLE_0061729a
    FNSTSW AX                           ; 0042cbdf
    SAHF                                ; 0042cbe1
    JNC 0x0042cc7b                      ; 0042cbe2
        ;   XREF to: 0042cc7b (CONDITIONAL_JUMP)  ; LAB_0042cc7b
    PUSH EBX                            ; 0042cbe8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042cbe9
    MOV dword ptr [EBX + 0x25b0],0x0    ; 0042cbef
    CALL dword ptr [EAX + 0x134]        ; 0042cbf9
    ADD ESP,0x4                         ; 0042cbff
    MOV EAX,dword ptr [EBX + 0x2418]    ; 0042cc02
        ;   Label: LAB_0042cc02
    MOV dword ptr [ESP + 0x30],EAX      ; 0042cc08
    MOV EAX,dword ptr [EBX + 0x2438]    ; 0042cc0c
    PUSH dword ptr [ESP + 0x30]         ; 0042cc12
    MOV dword ptr [ESP + 0x30],EAX      ; 0042cc16
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0042cc1a
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x38],EAX      ; 0042cc1f
    FLD float ptr [ESP + 0x38]          ; 0042cc23
    ADD ESP,0x4                         ; 0042cc27
    FLD float ptr [ESP + 0x2c]          ; 0042cc2a
    FXCH                                ; 0042cc2e
    FST float ptr [ESP + 0x30]          ; 0042cc30
    FXCH                                ; 0042cc34
    FCHS                                ; 0042cc36
    FSTP float ptr [ESP + 0x24]         ; 0042cc38
    FCOMP float ptr [ESP + 0x24]        ; 0042cc3c
    FNSTSW AX                           ; 0042cc40
    SAHF                                ; 0042cc42
    JNC 0x0042cc8a                      ; 0042cc43
        ;   XREF to: 0042cc8a (CONDITIONAL_JUMP)  ; LAB_0042cc8a
    MOV EAX,dword ptr [ESP + 0x24]      ; 0042cc45
    MOV dword ptr [ESP + 0x28],EAX      ; 0042cc49
        ;   Label: LAB_0042cc49
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042cc4d
    MOV dword ptr [EBX + 0x2418],EAX    ; 0042cc51
    MOV EAX,0x1                         ; 0042cc57
    ADD ESP,0x38                        ; 0042cc5c
    POP EBP                             ; 0042cc5f
    POP EDI                             ; 0042cc60
    POP ESI                             ; 0042cc61
    POP EBX                             ; 0042cc62
    RET                                 ; 0042cc63
    MOV dword ptr [EBX + 0x25b0],0x3    ; 0042cc64
        ;   Label: LAB_0042cc64
    MOV EAX,0x1                         ; 0042cc6e
    ADD ESP,0x38                        ; 0042cc73
    POP EBP                             ; 0042cc76
    POP EDI                             ; 0042cc77
    POP ESI                             ; 0042cc78
    POP EBX                             ; 0042cc79
    RET                                 ; 0042cc7a
    MOV dword ptr [EBX + 0x25b0],0x1    ; 0042cc7b
        ;   Label: LAB_0042cc7b
    JMP 0x0042cc02                      ; 0042cc85
        ;   XREF to: 0042cc02 (UNCONDITIONAL_JUMP)  ; LAB_0042cc02
    FLD float ptr [ESP + 0x30]          ; 0042cc8a
        ;   Label: LAB_0042cc8a
    FCOMP float ptr [ESP + 0x2c]        ; 0042cc8e
    FNSTSW AX                           ; 0042cc92
    SAHF                                ; 0042cc94
    JBE 0x0042cc9d                      ; 0042cc95
        ;   XREF to: 0042cc9d (CONDITIONAL_JUMP)  ; LAB_0042cc9d
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042cc97
    JMP 0x0042cc49                      ; 0042cc9b
        ;   XREF to: 0042cc49 (UNCONDITIONAL_JUMP)  ; LAB_0042cc49
    MOV EAX,dword ptr [ESP + 0x30]      ; 0042cc9d
        ;   Label: LAB_0042cc9d
    JMP 0x0042cc49                      ; 0042cca1
        ;   XREF to: 0042cc49 (UNCONDITIONAL_JUMP)  ; LAB_0042cc49
    MOV dword ptr [EBX + 0x25b0],0x1    ; 0042cca3
        ;   Label: LAB_0042cca3
    MOV EAX,0x1                         ; 0042ccad
    ADD ESP,0x38                        ; 0042ccb2
    POP EBP                             ; 0042ccb5
    POP EDI                             ; 0042ccb6
    POP ESI                             ; 0042ccb7
    POP EBX                             ; 0042ccb8
    RET                                 ; 0042ccb9
    FLD float ptr [EBX + 0x25a4]        ; 0042ccba
        ;   Label: LAB_0042ccba
    FLDZ                                ; 0042ccc0
    MOV ESI,dword ptr [EBX + 0x25a0]    ; 0042ccc2
    FCOMPP                              ; 0042ccc8
    FNSTSW AX                           ; 0042ccca
    SAHF                                ; 0042cccc
    JA 0x0042ccf3                       ; 0042cccd
        ;   XREF to: 0042ccf3 (CONDITIONAL_JUMP)  ; LAB_0042ccf3
    MOV EBP,dword ptr [0x03f9591c]      ; 0042cccf | g_CWayPointClassInfo.name_hash
    PUSH EBP                            ; 0042ccd5
    PUSH ESI                            ; 0042ccd6
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 0042ccd7
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0042ccdc
    TEST EAX,EAX                        ; 0042ccdf
    JZ 0x0042ccf3                       ; 0042cce1
        ;   XREF to: 0042ccf3 (CONDITIONAL_JUMP)  ; LAB_0042ccf3
    PUSH EAX                            ; 0042cce3
    PUSH EDI                            ; 0042cce4
    CALL core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320 ; 0042cce5
        ;   XREF to: 005ec320 (UNCONDITIONAL_CALL)  ; CWayPoint * core_waypoint.cpp_CWayPoint_findNearestReachable_FUN_005ec320(CWayPoint * this_ptr, CWayPoint * start_waypoint)
    ADD ESP,0x8                         ; 0042ccea
    MOV ESI,EAX                         ; 0042cced
    TEST EAX,EAX                        ; 0042ccef
    JZ 0x0042cd1d                       ; 0042ccf1
        ;   XREF to: 0042cd1d (CONDITIONAL_JUMP)  ; LAB_0042cd1d
    LEA EAX,[EBX + 0x25b0]              ; 0042ccf3
        ;   Label: LAB_0042ccf3
    PUSH EAX                            ; 0042ccf9
    PUSH dword ptr [EBX + 0x25a8]       ; 0042ccfa
    PUSH dword ptr [EBX + 0x25a4]       ; 0042cd00
    PUSH ESI                            ; 0042cd06
    PUSH EBX                            ; 0042cd07
    CALL core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 ; 0042cd08
        ;   XREF to: 0042c5f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter * this_ptr, CDemonActor * actor, float min_dist, float max_dist, ...)
    ADD ESP,0x14                        ; 0042cd0d
    MOV EAX,0x1                         ; 0042cd10
    ADD ESP,0x38                        ; 0042cd15
    POP EBP                             ; 0042cd18
    POP EDI                             ; 0042cd19
    POP ESI                             ; 0042cd1a
    POP EBX                             ; 0042cd1b
    RET                                 ; 0042cd1c
    MOV EAX,dword ptr [EBX + 0x25a0]    ; 0042cd1d
        ;   Label: LAB_0042cd1d
    PUSH EAX                            ; 0042cd23
    PUSH EBX                            ; 0042cd24
    PUSH 0x61725e                       ; 0042cd25 | = "%s can't figure out next waypoint try..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 0042cd2a | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 0042cd30 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0042cd31
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 0042cd36
    ADD ESP,0x10                        ; 0042cd3b
    ADD ESP,0x38                        ; 0042cd3e
    POP EBP                             ; 0042cd41
    POP EDI                             ; 0042cd42
    POP ESI                             ; 0042cd43
    POP EBX                             ; 0042cd44
    RET                                 ; 0042cd45

