; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter *this_ptr,CVector3f *target_pos,CPathMap *path_map,CVector3f *direction,float min_distance,float max_distance)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   target_pos
; CPathMap *       Stack[0xc]:4   path_map
; CVector3f *      Stack[0x10]:4   direction
; float            Stack[0x14]:4   min_distance
; float            Stack[0x18]:4   max_distance
; Local Variables:
; undefined4       Stack[-0x11c]:4  local_11c
; undefined8       Stack[-0x118]:8  local_118
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined1       Stack[-0xf8]:1  local_f8
; undefined1       Stack[-0xec]:1  local_ec
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined1       Stack[-0xb0]:1  local_b0
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
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
; XREF[27]:
;   core_batcreat.cpp_CBatCreature_process_FUN_00415470 at 00415b09
;   core_batman.cpp_CBatman_process_FUN_00416870 at 0041724e
;   core_boneguy.cpp_CBoneGuy_FUN_0041cc40 at 0041cea8
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c961
;   core_bride.cpp_CBride_process_FUN_00423a30 at 00423d6b
;   core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0 at 0042c8c3
;   core_charactr.cpp_CCharacter_moveOutOfHeroWay_FUN_0042ede0 at 0042f2cc
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 at 0042cb92
;   core_charactr.cpp_CCharacter_updateWanderToWaypoint_FUN_0042e050 at 0042e32c
;   core_cow.cpp_CZombieCow_process_FUN_00444310 at 004447bc
;   ... and 17 more
;
; Referenced Globals:
;   TerminatedCString s_CCharacter_walkToPoint_g_00617005
;   double DOUBLE_0061703a = 0.0100000000000000
;   double DOUBLE_00617042 = 5
;   double DOUBLE_0061704a = 0.318309886192889
;   double DOUBLE_00617052 = 2
;   double DOUBLE_0061705a = 1.5
;   double DOUBLE_00617062 = 0.5
;   double DOUBLE_0061706a = 4
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00
;   core_path.cpp_FUN_00548500
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004286e0
        ;   Label: core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
    PUSH ESI                            ; 004286e1
    PUSH EDI                            ; 004286e2
    PUSH EBP                            ; 004286e3
    MOV EBP,ESP                         ; 004286e4
    SUB ESP,0x104                       ; 004286e6
    AND ESP,0xfffffff8                  ; 004286ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 004286ef
    MOV EDI,dword ptr [EBP + 0x18]      ; 004286f2
    MOV ESI,dword ptr [EBP + 0x20]      ; 004286f5
    FLD float ptr [ESI + 0x8]           ; 004286f8
    FMUL ST0                            ; 004286fb
    MOV EAX,dword ptr [EBX + 0x2434]    ; 004286fd
    FLD float ptr [ESI]                 ; 00428703
    FMUL ST0                            ; 00428705
    MOV dword ptr [ESP + 0x8],EAX       ; 00428707
    MOV EAX,dword ptr [EBX + 0x2438]    ; 0042870b
    FADDP                               ; 00428711
    MOV dword ptr [ESP + 0xfc],EAX      ; 00428713
    FSQRT                               ; 0042871a
    PUSH ESI                            ; 0042871c
    LEA EAX,[ESP + 0x6c]                ; 0042871d
    PUSH EAX                            ; 00428721
    FSTP float ptr [ESP + 0x20]         ; 00428722
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00428726
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 0042872b
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042872e
    PUSH EDI                            ; 00428731
    MOV dword ptr [ESP + 0x14],EAX      ; 00428732
    LEA EAX,[ESP + 0x60]                ; 00428736
    PUSH EAX                            ; 0042873a
    PUSH EBX                            ; 0042873b
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 0042873c
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    ADD ESP,0xc                         ; 00428741
    FLD float ptr [ESP + 0x64]          ; 00428744
    FMUL ST0                            ; 00428748
    FLD float ptr [ESP + 0x5c]          ; 0042874a
    FMUL ST0                            ; 0042874e
    FADDP                               ; 00428750
    FSQRT                               ; 00428752
    LEA EAX,[ESP + 0x5c]                ; 00428754
    PUSH EAX                            ; 00428758
    LEA EAX,[ESP + 0x48]                ; 00428759
    PUSH EAX                            ; 0042875d
    FSTP float ptr [ESP + 0x14]         ; 0042875e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00428762
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 00428767
    MOV EAX,dword ptr [EAX + 0x4]       ; 0042876a
    FLD float ptr [ESP + 0xc]           ; 0042876d
    FSUB float ptr [ESP + 0x18]         ; 00428771
    MOV dword ptr [ESP + 0xf8],EAX      ; 00428775
    FABS                                ; 0042877c
    FLD float ptr [ESI + 0x4]           ; 0042877e
    FMUL ST0                            ; 00428781
    FLD float ptr [ESI]                 ; 00428783
    FMUL ST0                            ; 00428785
    FADDP                               ; 00428787
    FLD float ptr [ESI + 0x8]           ; 00428789
    FMUL ST0                            ; 0042878c
    FADDP                               ; 0042878e
    FSQRT                               ; 00428790
    XOR EDX,EDX                         ; 00428792
    MOV dword ptr [ESP + 0xcc],EDX      ; 00428794
    MOV dword ptr [ESP + 0x1c],EDX      ; 0042879b
    FXCH                                ; 0042879f
    FSTP float ptr [ESP + 0x14]         ; 004287a1
    FLDZ                                ; 004287a5
    FCOMPP                              ; 004287a7
    FNSTSW AX                           ; 004287a9
    SAHF                                ; 004287ab
    JC 0x00428892                       ; 004287ac
        ;   XREF to: 00428892 (CONDITIONAL_JUMP)  ; LAB_00428892
    FLD float ptr [EBP + 0x24]          ; 004287b2
        ;   Label: LAB_004287b2
    FADD double ptr [0x0061703a]        ; 004287b5 | DOUBLE_0061703a
    FLD float ptr [ESP + 0x14]          ; 004287bb
    FCOMPP                              ; 004287bf
    FNSTSW AX                           ; 004287c1
    SAHF                                ; 004287c3
    JNC 0x004287f6                      ; 004287c4
        ;   XREF to: 004287f6 (CONDITIONAL_JUMP)  ; LAB_004287f6
    FLD float ptr [EBP + 0x28]          ; 004287c6
    FADD double ptr [0x0061703a]        ; 004287c9 | DOUBLE_0061703a
    FLD float ptr [ESP + 0x1c]          ; 004287cf
    FCOMPP                              ; 004287d3
    FNSTSW AX                           ; 004287d5
    SAHF                                ; 004287d7
    JNC 0x004287f6                      ; 004287d8
        ;   XREF to: 004287f6 (CONDITIONAL_JUMP)  ; LAB_004287f6
    FLD float ptr [ESP + 0x60]          ; 004287da
    FABS                                ; 004287de
    FCOMP double ptr [0x00617042]       ; 004287e0 | DOUBLE_00617042
    FNSTSW AX                           ; 004287e6
    SAHF                                ; 004287e8
    JNC 0x004287f6                      ; 004287e9
        ;   XREF to: 004287f6 (CONDITIONAL_JUMP)  ; LAB_004287f6
    MOV dword ptr [ESP + 0xcc],0x1      ; 004287eb
    LEA EAX,[EBX + 0x23ac]              ; 004287f6
        ;   Label: LAB_004287f6
    MOV dword ptr [EAX + 0x8],0x0       ; 004287fc
    FLD float ptr [ESP + 0x10]          ; 00428803
    MOV EDX,dword ptr [EAX + 0x8]       ; 00428807
    MOV dword ptr [EAX + 0x4],EDX       ; 0042880a
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042880d
    MOV dword ptr [EAX],EDX             ; 00428810
    FABS                                ; 00428812
    FMUL double ptr [0x0061704a]        ; 00428814 | DOUBLE_0061704a
    FMUL double ptr [0x00617052]        ; 0042881a | DOUBLE_00617052
    FLD float ptr [ESP + 0x18]          ; 00428820
    FST double ptr [ESP]                ; 00428824
    FMUL double ptr [0x0061705a]        ; 00428827 | DOUBLE_0061705a
    FADD double ptr [0x00617062]        ; 0042882d | DOUBLE_00617062
    FADDP                               ; 00428833
    FCOMP float ptr [ESP + 0xc]         ; 00428835
    FNSTSW AX                           ; 00428839
    SAHF                                ; 0042883b
    JA 0x004288c4                       ; 0042883c
        ;   XREF to: 004288c4 (CONDITIONAL_JUMP)  ; LAB_004288c4
    CMP dword ptr [EBP + 0x1c],0x0      ; 00428842
        ;   Label: LAB_00428842
    JNZ 0x00428854                      ; 00428846
        ;   XREF to: 00428854 (CONDITIONAL_JUMP)  ; LAB_00428854
    PUSH EDI                            ; 00428848
    CALL core_path.cpp_FUN_00548500     ; 00428849
        ;   XREF to: 00548500 (UNCONDITIONAL_CALL)  ; CPathMap * core_path.cpp_FUN_00548500(CLocation * location)
    ADD ESP,0x4                         ; 0042884e
    MOV dword ptr [EBP + 0x1c],EAX      ; 00428851
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00428854
        ;   Label: LAB_00428854
    PUSH ESI                            ; 00428857
    LEA EAX,[ESP + 0xa8]                ; 00428858
    PUSH EAX                            ; 0042885f
    LEA EAX,[EBX + 0x20]                ; 00428860
    PUSH EAX                            ; 00428863
    MOV EDI,dword ptr [EBP + 0x1c]      ; 00428864
    PUSH EDI                            ; 00428867
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00 ; 00428868
        ;   XREF to: 00547d00 (UNCONDITIONAL_CALL)  ; int core_path.cpp_CPathMap_findPathWithRetry_FUN_00547d00(CPathMap * this_ptr, CVector3f * dest_position, CVector3f * out_euler_angles, int direction_hint)
    ADD ESP,0x10                        ; 0042886d
    TEST EAX,EAX                        ; 00428870
    JNZ 0x00428a92                      ; 00428872
        ;   XREF to: 00428a92 (CONDITIONAL_JUMP)  ; LAB_00428a92
    CMP dword ptr [ESP + 0xcc],0x0      ; 00428878
    JZ 0x00428a72                       ; 00428880
        ;   XREF to: 00428a72 (CONDITIONAL_JUMP)  ; LAB_00428a72
    MOV EAX,0x1                         ; 00428886
    MOV ESP,EBP                         ; 0042888b
        ;   Label: LAB_0042888b
    POP EBP                             ; 0042888d
    POP EDI                             ; 0042888e
    POP ESI                             ; 0042888f
    POP EBX                             ; 00428890
    RET                                 ; 00428891
    FLD float ptr [ESP + 0xf8]          ; 00428892
        ;   Label: LAB_00428892
    FSUB float ptr [ESP + 0x10]         ; 00428899
    SUB ESP,0x4                         ; 0042889d
    FSTP float ptr [ESP]                ; 004288a0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004288a3
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x104],EAX     ; 004288a8
    FLD float ptr [ESP + 0x104]         ; 004288af
    FABS                                ; 004288b6
    ADD ESP,0x4                         ; 004288b8
    FSTP float ptr [ESP + 0x1c]         ; 004288bb
    JMP 0x004287b2                      ; 004288bf
        ;   XREF to: 004287b2 (UNCONDITIONAL_JUMP)  ; LAB_004287b2
    FLD float ptr [ESP + 0x60]          ; 004288c4
        ;   Label: LAB_004288c4
    FABS                                ; 004288c8
    FLD1                                ; 004288ca
    FCOMPP                              ; 004288cc
    FNSTSW AX                           ; 004288ce
    SAHF                                ; 004288d0
    JC 0x00428842                       ; 004288d1
        ;   XREF to: 00428842 (CONDITIONAL_JUMP)  ; LAB_00428842
    FLD float ptr [ESP + 0x8]           ; 004288d7
    FMUL double ptr [0x0061706a]        ; 004288db | DOUBLE_0061706a
    FADD double ptr [ESP]               ; 004288e1
    FLD float ptr [ESP + 0xc]           ; 004288e4
    FCOMPP                              ; 004288e8
    FNSTSW AX                           ; 004288ea
    SAHF                                ; 004288ec
    JNC 0x00428bcf                      ; 004288ed
        ;   XREF to: 00428bcf (CONDITIONAL_JUMP)  ; LAB_00428bcf
    FLD float ptr [ESP + 0x60]          ; 004288f3
    FLD float ptr [ESP + 0x5c]          ; 004288f7
    FSUB float ptr [ESI]                ; 004288fb
    FLD float ptr [ESP + 0x64]          ; 004288fd
    FXCH                                ; 00428901
    FSTP float ptr [ESP + 0x38]         ; 00428903
    FXCH                                ; 00428907
    FSUB float ptr [ESI + 0x4]          ; 00428909
    FLD float ptr [ESP + 0x38]          ; 0042890c
    FXCH                                ; 00428910
    FSTP float ptr [ESP + 0x3c]         ; 00428912
    FXCH                                ; 00428916
    FSUB float ptr [ESI + 0x8]          ; 00428918
    FXCH                                ; 0042891b
    FMUL float ptr [ESP + 0x38]         ; 0042891d
    FXCH                                ; 00428921
    FST float ptr [ESP + 0x40]          ; 00428923
    FMUL float ptr [ESP + 0x40]         ; 00428927
    FADDP                               ; 0042892b
    FSQRT                               ; 0042892d
    XOR EDX,EDX                         ; 0042892f
    MOV dword ptr [ESP + 0x3c],EDX      ; 00428931
    FST float ptr [ESP + 0xb8]          ; 00428935
    FCOMP float ptr [ESP + 0x8]         ; 0042893c
    FNSTSW AX                           ; 00428940
    SAHF                                ; 00428942
    JBE 0x00428986                      ; 00428943
        ;   XREF to: 00428986 (CONDITIONAL_JUMP)  ; LAB_00428986
    FLD float ptr [ESP + 0x8]           ; 00428945
    FDIV float ptr [ESP + 0xb8]         ; 00428949
    FLD float ptr [ESP + 0x38]          ; 00428950
    FXCH                                ; 00428954
    FSTP float ptr [ESP + 0xd0]         ; 00428956
    FMUL float ptr [ESP + 0xd0]         ; 0042895d
    FLDZ                                ; 00428964
    FMUL float ptr [ESP + 0xd0]         ; 00428966
    FLD float ptr [ESP + 0x40]          ; 0042896d
    FMUL float ptr [ESP + 0xd0]         ; 00428971
    FXCH ST2                            ; 00428978
    FSTP float ptr [ESP + 0x38]         ; 0042897a
    FSTP float ptr [ESP + 0x3c]         ; 0042897e
    FSTP float ptr [ESP + 0x40]         ; 00428982
    LEA ESI,[EBX + 0x241c]              ; 00428986
        ;   Label: LAB_00428986
    LEA EAX,[ESP + 0x98]                ; 0042898c
    FLD float ptr [ESI + 0x4]           ; 00428993
    FLD float ptr [ESI]                 ; 00428996
    FADD float ptr [ESP + 0x38]         ; 00428998
    FLD float ptr [ESI + 0x8]           ; 0042899c
    FXCH                                ; 0042899f
    FSTP float ptr [ESI]                ; 004289a1
    FXCH                                ; 004289a3
    FADD float ptr [ESP + 0x3c]         ; 004289a5
    PUSH EAX                            ; 004289a9
    FSTP float ptr [ESI + 0x4]          ; 004289aa
    FADD float ptr [ESP + 0x44]         ; 004289ad
    LEA EAX,[ESP + 0x54]                ; 004289b1
    FSTP float ptr [ESI + 0x8]          ; 004289b5
    FLD float ptr [ESP + 0x60]          ; 004289b8
    FSUB float ptr [ESI]                ; 004289bc
    FLD float ptr [ESP + 0x64]          ; 004289be
    FXCH                                ; 004289c2
    FSTP float ptr [ESP + 0x9c]         ; 004289c4
    FSUB float ptr [ESI + 0x4]          ; 004289cb
    FLD float ptr [ESP + 0x68]          ; 004289ce
    FXCH                                ; 004289d2
    FSTP float ptr [ESP + 0xa0]         ; 004289d4
    FSUB float ptr [ESI + 0x8]          ; 004289db
    PUSH EAX                            ; 004289de
    FSTP float ptr [ESP + 0xa8]         ; 004289df
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 004289e6
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    ADD ESP,0x8                         ; 004289eb
    FLD float ptr [EAX + 0x4]           ; 004289ee
    FSUB float ptr [ESP + 0x10]         ; 004289f1
    SUB ESP,0x4                         ; 004289f5
    FSTP float ptr [ESP]                ; 004289f8
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 004289fb
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x104],EAX     ; 00428a00
    FLD float ptr [ESP + 0x104]         ; 00428a07
    ADD ESP,0x4                         ; 00428a0e
    FLD float ptr [ESP + 0xfc]          ; 00428a11
    FXCH                                ; 00428a18
    FST float ptr [ESP + 0xf0]          ; 00428a1a
    FXCH                                ; 00428a21
    FCHS                                ; 00428a23
    FSTP float ptr [ESP + 0xc0]         ; 00428a25
    FCOMP float ptr [ESP + 0xc0]        ; 00428a2c
    FNSTSW AX                           ; 00428a33
    SAHF                                ; 00428a35
    JNC 0x00428ba4                      ; 00428a36
        ;   XREF to: 00428ba4 (CONDITIONAL_JUMP)  ; LAB_00428ba4
    MOV EAX,dword ptr [ESP + 0xc0]      ; 00428a3c
    MOV dword ptr [ESP + 0xe0],EAX      ; 00428a43
        ;   Label: LAB_00428a43
    MOV EAX,dword ptr [ESP + 0xe0]      ; 00428a4a
    MOV dword ptr [EBX + 0x2418],EAX    ; 00428a51
        ;   Label: LAB_00428a51
    MOV EAX,dword ptr [ESP + 0xcc]      ; 00428a57
        ;   Label: LAB_00428a57
    TEST EAX,EAX                        ; 00428a5e
    JZ 0x0042888b                       ; 00428a60
        ;   XREF to: 0042888b (CONDITIONAL_JUMP)  ; LAB_0042888b
    MOV EAX,0x1                         ; 00428a66
    MOV ESP,EBP                         ; 00428a6b
    POP EBP                             ; 00428a6d
    POP EDI                             ; 00428a6e
    POP ESI                             ; 00428a6f
    POP EBX                             ; 00428a70
    RET                                 ; 00428a71
    PUSH 0x617005                       ; 00428a72 | = "CCharacter::walkToPoint - go somewher..."
        ;   Label: LAB_00428a72
    MOV ECX,dword ptr [0x0066e8e0]      ; 00428a77 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 00428a7d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 00428a7e
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0xffffffff                  ; 00428a83
    ADD ESP,0x8                         ; 00428a88
    MOV ESP,EBP                         ; 00428a8b
    POP EBP                             ; 00428a8d
    POP EDI                             ; 00428a8e
    POP ESI                             ; 00428a8f
    POP EBX                             ; 00428a90
    RET                                 ; 00428a91
    FLD float ptr [ESP + 0xc]           ; 00428a92
        ;   Label: LAB_00428a92
    FLD float ptr [ESP + 0x8]           ; 00428a96
    LEA EDX,[EBX + 0x2424]              ; 00428a9a
    FCHS                                ; 00428aa0
    FXCH                                ; 00428aa2
    FSUB float ptr [ESP + 0x18]         ; 00428aa4
    FXCH                                ; 00428aa8
    FSTP float ptr [ESP + 0xc4]         ; 00428aaa
    FST float ptr [ESP + 0xc8]          ; 00428ab1
    FCOMP float ptr [ESP + 0xc4]        ; 00428ab8
    FNSTSW AX                           ; 00428abf
    SAHF                                ; 00428ac1
    JNC 0x00428b5a                      ; 00428ac2
        ;   XREF to: 00428b5a (CONDITIONAL_JUMP)  ; LAB_00428b5a
    MOV EAX,dword ptr [ESP + 0xc4]      ; 00428ac8
    MOV dword ptr [ESP + 0xd4],EAX      ; 00428acf
        ;   Label: LAB_00428acf
    FLD float ptr [EDX]                 ; 00428ad6
    FADD float ptr [ESP + 0xd4]         ; 00428ad8
    FSTP float ptr [EDX]                ; 00428adf
    FLD float ptr [ESP + 0xa8]          ; 00428ae1
    FSUB float ptr [EBX + 0x34]         ; 00428ae8
    FSTP float ptr [ESP + 0x100]        ; 00428aeb
    PUSH dword ptr [ESP + 0x100]        ; 00428af2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00428af9
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x104],EAX     ; 00428afe
    FLD float ptr [ESP + 0x104]         ; 00428b05
    ADD ESP,0x4                         ; 00428b0c
    ADD EBX,0x2418                      ; 00428b0f
    FLD float ptr [ESP + 0xfc]          ; 00428b15
    FXCH                                ; 00428b1c
    FST float ptr [ESP + 0xf4]          ; 00428b1e
    FXCH                                ; 00428b25
    FCHS                                ; 00428b27
    FSTP float ptr [ESP + 0xbc]         ; 00428b29
    FCOMP float ptr [ESP + 0xbc]        ; 00428b30
    FNSTSW AX                           ; 00428b37
    SAHF                                ; 00428b39
    JNC 0x00428b7f                      ; 00428b3a
        ;   XREF to: 00428b7f (CONDITIONAL_JUMP)  ; LAB_00428b7f
    MOV EAX,dword ptr [ESP + 0xbc]      ; 00428b3c
    MOV dword ptr [ESP + 0xd8],EAX      ; 00428b43
        ;   Label: LAB_00428b43
    FLD float ptr [EBX]                 ; 00428b4a
    FADD float ptr [ESP + 0xd8]         ; 00428b4c
    FSTP float ptr [EBX]                ; 00428b53
    JMP 0x00428a57                      ; 00428b55
        ;   XREF to: 00428a57 (UNCONDITIONAL_JUMP)  ; LAB_00428a57
    FLD float ptr [ESP + 0xc8]          ; 00428b5a
        ;   Label: LAB_00428b5a
    FCOMP float ptr [ESP + 0x8]         ; 00428b61
    FNSTSW AX                           ; 00428b65
    SAHF                                ; 00428b67
    JBE 0x00428b73                      ; 00428b68
        ;   XREF to: 00428b73 (CONDITIONAL_JUMP)  ; LAB_00428b73
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428b6a
    JMP 0x00428acf                      ; 00428b6e
        ;   XREF to: 00428acf (UNCONDITIONAL_JUMP)  ; LAB_00428acf
    MOV EAX,dword ptr [ESP + 0xc8]      ; 00428b73
        ;   Label: LAB_00428b73
    JMP 0x00428acf                      ; 00428b7a
        ;   XREF to: 00428acf (UNCONDITIONAL_JUMP)  ; LAB_00428acf
    FLD float ptr [ESP + 0xf4]          ; 00428b7f
        ;   Label: LAB_00428b7f
    FCOMP float ptr [ESP + 0xfc]        ; 00428b86
    FNSTSW AX                           ; 00428b8d
    SAHF                                ; 00428b8f
    JBE 0x00428b9b                      ; 00428b90
        ;   XREF to: 00428b9b (CONDITIONAL_JUMP)  ; LAB_00428b9b
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00428b92
    JMP 0x00428b43                      ; 00428b99
        ;   XREF to: 00428b43 (UNCONDITIONAL_JUMP)  ; LAB_00428b43
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00428b9b
        ;   Label: LAB_00428b9b
    JMP 0x00428b43                      ; 00428ba2
        ;   XREF to: 00428b43 (UNCONDITIONAL_JUMP)  ; LAB_00428b43
    FLD float ptr [ESP + 0xf0]          ; 00428ba4
        ;   Label: LAB_00428ba4
    FCOMP float ptr [ESP + 0xfc]        ; 00428bab
    FNSTSW AX                           ; 00428bb2
    SAHF                                ; 00428bb4
    JBE 0x00428bc3                      ; 00428bb5
        ;   XREF to: 00428bc3 (CONDITIONAL_JUMP)  ; LAB_00428bc3
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00428bb7
    JMP 0x00428a43                      ; 00428bbe
        ;   XREF to: 00428a43 (UNCONDITIONAL_JUMP)  ; LAB_00428a43
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00428bc3
        ;   Label: LAB_00428bc3
    JMP 0x00428a43                      ; 00428bca
        ;   XREF to: 00428a43 (UNCONDITIONAL_JUMP)  ; LAB_00428a43
    FLD float ptr [ESP + 0xc]           ; 00428bcf
        ;   Label: LAB_00428bcf
    FLD float ptr [ESP + 0x8]           ; 00428bd3
    LEA EDX,[EBX + 0x2424]              ; 00428bd7
    FCHS                                ; 00428bdd
    FXCH                                ; 00428bdf
    FSUB float ptr [ESP + 0x18]         ; 00428be1
    FXCH                                ; 00428be5
    FSTP float ptr [ESP + 0xb4]         ; 00428be7
    FST float ptr [ESP + 0xdc]          ; 00428bee
    FCOMP float ptr [ESP + 0xb4]        ; 00428bf5
    FNSTSW AX                           ; 00428bfc
    SAHF                                ; 00428bfe
    JNC 0x00428d11                      ; 00428bff
        ;   XREF to: 00428d11 (CONDITIONAL_JUMP)  ; LAB_00428d11
    MOV EAX,dword ptr [ESP + 0xb4]      ; 00428c05
    MOV dword ptr [ESP + 0xe8],EAX      ; 00428c0c
        ;   Label: LAB_00428c0c
    LEA EAX,[EBX + 0x241c]              ; 00428c13
    PUSH EAX                            ; 00428c19
    LEA EAX,[ESP + 0x90]                ; 00428c1a
    FLD float ptr [EDX]                 ; 00428c21
    PUSH EAX                            ; 00428c23
    FADD float ptr [ESP + 0xf0]         ; 00428c24
    PUSH EBX                            ; 00428c2b
    FSTP float ptr [EDX]                ; 00428c2c
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00428c2e
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00428c33
    PUSH ESI                            ; 00428c36
    LEA EAX,[ESP + 0x24]                ; 00428c37
    PUSH EAX                            ; 00428c3b
    PUSH EBX                            ; 00428c3c
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80 ; 00428c3d
        ;   XREF to: 00408e80 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_transformVector_FUN_00408e80(CDemonActor * this_ptr, CVector3f * output, CVector3f * input)
    FLD float ptr [EDI]                 ; 00428c42
    FSUB float ptr [EAX]                ; 00428c44
    ADD ESP,0xc                         ; 00428c46
    FST float ptr [ESP + 0x74]          ; 00428c49
    FLD float ptr [EDI + 0x4]           ; 00428c4d
    FSUB float ptr [EAX + 0x4]          ; 00428c50
    FXCH                                ; 00428c53
    FSUB float ptr [ESP + 0x8c]         ; 00428c55
    FXCH                                ; 00428c5c
    FST float ptr [ESP + 0x78]          ; 00428c5e
    FLD float ptr [EDI + 0x8]           ; 00428c62
    FSUB float ptr [EAX + 0x8]          ; 00428c65
    FXCH                                ; 00428c68
    FSUB float ptr [ESP + 0x90]         ; 00428c6a
    FXCH                                ; 00428c71
    FSTP float ptr [ESP + 0x7c]         ; 00428c73
    FXCH                                ; 00428c77
    FSTP float ptr [ESP + 0x80]         ; 00428c79
    FSTP float ptr [ESP + 0x84]         ; 00428c80
    LEA EAX,[ESP + 0x80]                ; 00428c87
    FLD float ptr [ESP + 0x7c]          ; 00428c8e
    PUSH EAX                            ; 00428c92
    LEA EAX,[ESP + 0x30]                ; 00428c93
    FSUB float ptr [ESP + 0x98]         ; 00428c97
    PUSH EAX                            ; 00428c9e
    FSTP float ptr [ESP + 0x90]         ; 00428c9f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00428ca6
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EAX + 0x4]           ; 00428cab
    ADD ESP,0x8                         ; 00428cae
    FSUB float ptr [EBX + 0x34]         ; 00428cb1
    SUB ESP,0x4                         ; 00428cb4
    FSTP float ptr [ESP]                ; 00428cb7
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 00428cba
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x104],EAX     ; 00428cbf
    FLD float ptr [ESP + 0x104]         ; 00428cc6
    ADD ESP,0x4                         ; 00428ccd
    FLD float ptr [ESP + 0xfc]          ; 00428cd0
    FXCH                                ; 00428cd7
    FST float ptr [ESP + 0xec]          ; 00428cd9
    FXCH                                ; 00428ce0
    FCHS                                ; 00428ce2
    FSTP float ptr [ESP + 0xb0]         ; 00428ce4
    FCOMP float ptr [ESP + 0xb0]        ; 00428ceb
    FNSTSW AX                           ; 00428cf2
    SAHF                                ; 00428cf4
    JNC 0x00428d36                      ; 00428cf5
        ;   XREF to: 00428d36 (CONDITIONAL_JUMP)  ; LAB_00428d36
    MOV EAX,dword ptr [ESP + 0xb0]      ; 00428cf7
    MOV dword ptr [ESP + 0xe4],EAX      ; 00428cfe
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00428d05
    JMP 0x00428a51                      ; 00428d0c
        ;   XREF to: 00428a51 (UNCONDITIONAL_JUMP)  ; LAB_00428a51
    FLD float ptr [ESP + 0xdc]          ; 00428d11
        ;   Label: LAB_00428d11
    FCOMP float ptr [ESP + 0x8]         ; 00428d18
    FNSTSW AX                           ; 00428d1c
    SAHF                                ; 00428d1e
    JBE 0x00428d2a                      ; 00428d1f
        ;   XREF to: 00428d2a (CONDITIONAL_JUMP)  ; LAB_00428d2a
    MOV EAX,dword ptr [ESP + 0x8]       ; 00428d21
    JMP 0x00428c0c                      ; 00428d25
        ;   XREF to: 00428c0c (UNCONDITIONAL_JUMP)  ; LAB_00428c0c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00428d2a
        ;   Label: LAB_00428d2a
    JMP 0x00428c0c                      ; 00428d31
        ;   XREF to: 00428c0c (UNCONDITIONAL_JUMP)  ; LAB_00428c0c
    FLD float ptr [ESP + 0xec]          ; 00428d36
        ;   Label: LAB_00428d36
    FCOMP float ptr [ESP + 0xfc]        ; 00428d3d
    FNSTSW AX                           ; 00428d44
    SAHF                                ; 00428d46
    JBE 0x00428d63                      ; 00428d47
        ;   XREF to: 00428d63 (CONDITIONAL_JUMP)  ; LAB_00428d63
    MOV EAX,dword ptr [ESP + 0xfc]      ; 00428d49
    MOV dword ptr [ESP + 0xe4],EAX      ; 00428d50
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00428d57
    JMP 0x00428a51                      ; 00428d5e
        ;   XREF to: 00428a51 (UNCONDITIONAL_JUMP)  ; LAB_00428a51
    MOV EAX,dword ptr [ESP + 0xec]      ; 00428d63
        ;   Label: LAB_00428d63
    MOV dword ptr [ESP + 0xe4],EAX      ; 00428d6a
    MOV EAX,dword ptr [ESP + 0xe4]      ; 00428d71
    JMP 0x00428a51                      ; 00428d78
        ;   XREF to: 00428a51 (UNCONDITIONAL_JUMP)  ; LAB_00428a51

