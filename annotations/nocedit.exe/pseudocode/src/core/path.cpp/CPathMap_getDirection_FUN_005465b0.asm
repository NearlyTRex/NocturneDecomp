; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl float core_path.cpp_CPathMap_getDirection_FUN_005465b0(CPathMap * this_ptr, int current_direction, int next_direction, int prev_direction, CVector3f * dest_position)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   current_direction
; int              Stack[0xc]:4   next_direction
; int              Stack[0x10]:4   prev_direction
; CVector3f *      Stack[0x14]:4   dest_position
; Local Variables:
; undefined4       Stack[-0xf8]:4  local_f8
; undefined4       Stack[-0xf4]:4  local_f4
; undefined4       Stack[-0xf0]:4  local_f0
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined4       Stack[-0xe0]:4  local_e0
; undefined4       Stack[-0xdc]:4  local_dc
; undefined4       Stack[-0xd8]:4  local_d8
; undefined4       Stack[-0xd4]:4  local_d4
; undefined4       Stack[-0xd0]:4  local_d0
; undefined4       Stack[-0xcc]:4  local_cc
; undefined4       Stack[-0xc8]:4  local_c8
; undefined4       Stack[-0xc4]:4  local_c4
; undefined4       Stack[-0xc0]:4  local_c0
; undefined1       Stack[-0xbc]:1  local_bc
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
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
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined1       Stack[-0x68]:1  local_68
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
; XREF[1]:
;   core_path.cpp_CPathMap_findPathToDestination_FUN_00547320 at 005478a7
;
; Referenced Globals:
;   void* switchdataD_00546554 = 00546654
;   void* switchdataD_00546564 = 00546685
;   void* switchdataD_00546574 = 005466f8
;   void* switchdataD_00546594 = 00546918
;   TerminatedCString s_core_path_cpp_0063e8c6
;   TerminatedCString s_CPathMap_getDirection_Sh_0063e8d7
;   float g_PathDirectionScale100 = 100
;   float g_PathRotationScaleFactor = 0.01000000
;   float g_PathNegativeOne = -1
;   double g_PathAngleNeg3PiOver4 = -2.35619449012500
;   double g_PathAngle3PiOver4 = 2.35619449012500
;   double g_PathAngleNegPiOver4 = -0.785398163375000
;   double g_PathAnglePiOver4 = 0.785398163375000
;   double g_PathAngleNegPiOver2 = -1.57079632675000
;   double g_PathAnglePiOver2 = 1.57079632675000
;   ... and 3 more
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005465b0
        ;   Label: core_path.cpp_CPathMap_getDirection_FUN_005465b0
    PUSH ESI                            ; 005465b1
    PUSH EDI                            ; 005465b2
    PUSH EBP                            ; 005465b3
    MOV EBP,ESP                         ; 005465b4
    SUB ESP,0xe4                        ; 005465b6
    AND ESP,0xfffffff8                  ; 005465bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005465bf
    MOV ESI,dword ptr [EBP + 0x18]      ; 005465c2
    MOV EDI,dword ptr [EBP + 0x20]      ; 005465c5
    MOV EBX,dword ptr [EBP + 0x24]      ; 005465c8
    FLD float ptr [EAX]                 ; 005465cb
    FSUB float ptr [EBX]                ; 005465cd
    FSTP float ptr [ESP + 0x60]         ; 005465cf
    FLD float ptr [EAX + 0x4]           ; 005465d3
    FSUB float ptr [EBX + 0x4]          ; 005465d6
    FSTP float ptr [ESP + 0x64]         ; 005465d9
    FLD float ptr [EAX + 0x8]           ; 005465dd
    LEA EAX,[ESP + 0x60]                ; 005465e0
    PUSH EAX                            ; 005465e4
    LEA EAX,[ESP + 0x94]                ; 005465e5
    FSUB float ptr [EBX + 0x8]          ; 005465ec
    PUSH EAX                            ; 005465ef
    FSTP float ptr [ESP + 0x70]         ; 005465f0
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005465f4 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    FLD float ptr [EAX]                 ; 005465f9
    FDIV float ptr [0x0063e950]         ; 005465fb | float g_PathDirectionScale100
    ADD ESP,0x8                         ; 00546601
    FSTP float ptr [ESP + 0x54]         ; 00546604
    FLD float ptr [0x0063e954]          ; 00546608 | float g_PathRotationScaleFactor
    FLD float ptr [EAX + 0x4]           ; 0054660e
    FMUL ST1                            ; 00546611
    FSTP float ptr [ESP + 0x58]         ; 00546613
    FMUL float ptr [EAX + 0x8]          ; 00546617
    MOV EBX,0x1                         ; 0054661a
    XOR EDX,EDX                         ; 0054661f
    MOV AH,byte ptr [ESP + 0x5b]        ; 00546621
    MOV dword ptr [ESP + 0xa8],EDX      ; 00546625
    MOV dword ptr [ESP + 0xac],EDX      ; 0054662c
    XOR AH,0x80                         ; 00546633
    MOV dword ptr [ESP + 0xb0],EDX      ; 00546636
    MOV byte ptr [ESP + 0x5b],AH        ; 0054663d
    LEA EAX,[ESI + -0x1]                ; 00546641
    FSTP float ptr [ESP + 0x5c]         ; 00546644
    CMP EAX,0x3                         ; 00546648
    JA 0x00546675                       ; 0054664b | default
        ;   XREF to: 00546675 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546554]  ; 0054664d | void * switchdataD_00546554
        ;   Label: switchD
    MOV ECX,0x3f800000                  ; 00546654
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0xb8],EDX      ; 00546659
    MOV dword ptr [ESP + 0xb4],EDX      ; 00546660
    MOV dword ptr [ESP + 0xbc],ECX      ; 00546667
    MOV dword ptr [ESP + 0xb0],ECX      ; 0054666e
        ;   Label: LAB_0054666e
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00546675
        ;   Label: default
    DEC EAX                             ; 00546678
    CMP EAX,0x3                         ; 00546679
    JA 0x005466b2                       ; 0054667c | default
        ;   XREF to: 005466b2 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546564]  ; 0054667e | void * switchdataD_00546564
        ;   Label: switchD
    FLD1                                ; 00546685
        ;   Label: caseD_1
    MOV ECX,0x3f800000                  ; 00546687
    XOR EAX,EAX                         ; 0054668c
    INC EBX                             ; 0054668e
    MOV dword ptr [ESP + 0x84],EAX      ; 0054668f
    MOV dword ptr [ESP + 0x88],EAX      ; 00546696
    FADD float ptr [ESP + 0xb0]         ; 0054669d
    MOV dword ptr [ESP + 0x8c],ECX      ; 005466a4
    FSTP float ptr [ESP + 0xb0]         ; 005466ab
        ;   Label: LAB_005466ab
    TEST dword ptr [ESP + 0xa8],0x7fffffff ; 005466b2
        ;   Label: default
    JNZ 0x00546901                      ; 005466bd | LAB_00546901
        ;   XREF to: 00546901 (CONDITIONAL_JUMP)
    TEST dword ptr [ESP + 0xac],0x7fffffff ; 005466c3
    JNZ 0x00546901                      ; 005466ce | LAB_00546901
        ;   XREF to: 00546901 (CONDITIONAL_JUMP)
    TEST dword ptr [ESP + 0xb0],0x7fffffff ; 005466d4
    JNZ 0x00546901                      ; 005466df | LAB_00546901
        ;   XREF to: 00546901 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + -0x1]                ; 005466e5
    CMP EAX,0x7                         ; 005466e8
    JA 0x005468df                       ; 005466eb | default
        ;   XREF to: 005468df (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546574]  ; 005466f1 | void * switchdataD_00546574
        ;   Label: switchD
    MOV EAX,dword ptr [ESP + 0x58]      ; 005466f8
        ;   Label: caseD_1
    MOV dword ptr [ESP + 0xdc],EAX      ; 005466fc
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546703
    MOV ESP,EBP                         ; 0054670a
    POP EBP                             ; 0054670c
    POP EDI                             ; 0054670d
    POP ESI                             ; 0054670e
    POP EBX                             ; 0054670f
    RET                                 ; 00546710
    MOV ECX,0xbf800000                  ; 00546711
        ;   Label: caseD_2
    MOV dword ptr [ESP + 0x70],EDX      ; 00546716
    MOV dword ptr [ESP + 0x6c],EDX      ; 0054671a
    MOV dword ptr [ESP + 0x74],ECX      ; 0054671e
    JMP 0x0054666e                      ; 00546722 | LAB_0054666e
        ;   XREF to: 0054666e (UNCONDITIONAL_JUMP)
    MOV EAX,0x3f800000                  ; 00546727
        ;   Label: caseD_3
    MOV dword ptr [ESP + 0x4],EDX       ; 0054672c
    MOV dword ptr [ESP + 0x8],EDX       ; 00546730
    MOV dword ptr [ESP + 0xa8],EAX      ; 00546734
    MOV dword ptr [ESP],EAX             ; 0054673b
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054673e
    DEC EAX                             ; 00546741
    CMP EAX,0x3                         ; 00546742
    JA 0x005466b2                       ; 00546745 | default
        ;   XREF to: 005466b2 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546564]  ; 0054674b | void * switchdataD_00546564
        ;   Label: switchD
    MOV EAX,0xbf800000                  ; 00546752
        ;   Label: caseD_4
    MOV dword ptr [ESP + 0x28],EDX      ; 00546757
    MOV dword ptr [ESP + 0x2c],EDX      ; 0054675b
    MOV dword ptr [ESP + 0xa8],EAX      ; 0054675f
    MOV dword ptr [ESP + 0x24],EAX      ; 00546766
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0054676a
    DEC EAX                             ; 0054676d
    CMP EAX,0x3                         ; 0054676e
    JA 0x005466b2                       ; 00546771 | default
        ;   XREF to: 005466b2 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546564]  ; 00546777 | void * switchdataD_00546564
        ;   Label: switchD
    FLD float ptr [ESP + 0xb0]          ; 0054677e
        ;   Label: caseD_2
    MOV ECX,0xbf800000                  ; 00546785
    XOR EAX,EAX                         ; 0054678a
    INC EBX                             ; 0054678c
    MOV dword ptr [ESP + 0x78],EAX      ; 0054678d
    MOV dword ptr [ESP + 0x7c],EAX      ; 00546791
    FADD float ptr [0x0063e958]         ; 00546795 | float g_PathNegativeOne
    MOV dword ptr [ESP + 0x80],ECX      ; 0054679b
    JMP 0x005466ab                      ; 005467a2 | LAB_005466ab
        ;   XREF to: 005466ab (UNCONDITIONAL_JUMP)
    FLD1                                ; 005467a7
        ;   Label: caseD_3
    MOV EAX,0x3f800000                  ; 005467a9
    INC EBX                             ; 005467ae
    XOR EDX,EDX                         ; 005467af
    MOV dword ptr [ESP + 0x30],EAX      ; 005467b1
    MOV dword ptr [ESP + 0x34],EDX      ; 005467b5
    FADD float ptr [ESP + 0xa8]         ; 005467b9
    MOV dword ptr [ESP + 0x38],EDX      ; 005467c0
    FSTP float ptr [ESP + 0xa8]         ; 005467c4
    JMP 0x005466b2                      ; 005467cb | default
        ;   XREF to: 005466b2 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xa8]          ; 005467d0
        ;   Label: caseD_4
    MOV EAX,0xbf800000                  ; 005467d7
    INC EBX                             ; 005467dc
    XOR EDX,EDX                         ; 005467dd
    MOV dword ptr [ESP + 0xcc],EAX      ; 005467df
    MOV dword ptr [ESP + 0xd0],EDX      ; 005467e6
    FADD float ptr [0x0063e958]         ; 005467ed | float g_PathNegativeOne
    MOV dword ptr [ESP + 0xd4],EDX      ; 005467f3
    FSTP float ptr [ESP + 0xa8]         ; 005467fa
    JMP 0x005466b2                      ; 00546801 | default
        ;   XREF to: 005466b2 (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0x58]          ; 00546806
        ;   Label: caseD_5
    FADD double ptr [0x0063e978]        ; 0054680a | double g_PathAnglePiOver4
    FSTP float ptr [ESP + 0xdc]         ; 00546810
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546817
    MOV ESP,EBP                         ; 0054681e
    POP EBP                             ; 00546820
    POP EDI                             ; 00546821
    POP ESI                             ; 00546822
    POP EBX                             ; 00546823
    RET                                 ; 00546824
    FLD float ptr [ESP + 0x58]          ; 00546825
        ;   Label: caseD_3
    FADD double ptr [0x0063e988]        ; 00546829 | double g_PathAnglePiOver2
    FSTP float ptr [ESP + 0xdc]         ; 0054682f
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546836
    MOV ESP,EBP                         ; 0054683d
    POP EBP                             ; 0054683f
    POP EDI                             ; 00546840
    POP ESI                             ; 00546841
    POP EBX                             ; 00546842
    RET                                 ; 00546843
    FLD float ptr [ESP + 0x58]          ; 00546844
        ;   Label: caseD_7
    FADD double ptr [0x0063e968]        ; 00546848 | double g_PathAngle3PiOver4
    FSTP float ptr [ESP + 0xdc]         ; 0054684e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546855
    MOV ESP,EBP                         ; 0054685c
    POP EBP                             ; 0054685e
    POP EDI                             ; 0054685f
    POP ESI                             ; 00546860
    POP EBX                             ; 00546861
    RET                                 ; 00546862
    FLD float ptr [ESP + 0x58]          ; 00546863
        ;   Label: caseD_2
    FADD double ptr [0x0063e990]        ; 00546867 | double g_PathAnglePi
    FSTP float ptr [ESP + 0xdc]         ; 0054686d
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546874
    MOV ESP,EBP                         ; 0054687b
    POP EBP                             ; 0054687d
    POP EDI                             ; 0054687e
    POP ESI                             ; 0054687f
    POP EBX                             ; 00546880
    RET                                 ; 00546881
    FLD float ptr [ESP + 0x58]          ; 00546882
        ;   Label: caseD_8
    FADD double ptr [0x0063e960]        ; 00546886 | double g_PathAngleNeg3PiOver4
    FSTP float ptr [ESP + 0xdc]         ; 0054688c
    MOV EAX,dword ptr [ESP + 0xdc]      ; 00546893
    MOV ESP,EBP                         ; 0054689a
    POP EBP                             ; 0054689c
    POP EDI                             ; 0054689d
    POP ESI                             ; 0054689e
    POP EBX                             ; 0054689f
    RET                                 ; 005468a0
    FLD float ptr [ESP + 0x58]          ; 005468a1
        ;   Label: caseD_4
    FADD double ptr [0x0063e980]        ; 005468a5 | double g_PathAngleNegPiOver2
    FSTP float ptr [ESP + 0xdc]         ; 005468ab
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005468b2
    MOV ESP,EBP                         ; 005468b9
    POP EBP                             ; 005468bb
    POP EDI                             ; 005468bc
    POP ESI                             ; 005468bd
    POP EBX                             ; 005468be
    RET                                 ; 005468bf
    FLD float ptr [ESP + 0x58]          ; 005468c0
        ;   Label: caseD_6
    FADD double ptr [0x0063e970]        ; 005468c4 | double g_PathAngleNegPiOver4
    FSTP float ptr [ESP + 0xdc]         ; 005468ca
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005468d1
    MOV ESP,EBP                         ; 005468d8
    POP EBP                             ; 005468da
    POP EDI                             ; 005468db
    POP ESI                             ; 005468dc
    POP EBX                             ; 005468dd
    RET                                 ; 005468de
    MOV EAX,0x63e8c6                    ; 005468df | = "..\\core\\path.cpp" | s_core_path_cpp_0063e8c6 = ..\core\path.cpp
        ;   Label: default
    MOV EDX,0x183                       ; 005468e4
    PUSH 0x63e8d7                       ; 005468e9 | = "CPathMap::getDirection - Should never..." | s_CPathMap_getDirection_Sh_0063e8d7 = CPathMap::getDirection - Should never get here either
    MOV [0x02f0ca48],EAX                ; 005468ee | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005468f3 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005468f9 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 005468fe
    CMP ESI,EDI                         ; 00546901
        ;   Label: LAB_00546901
    JNZ 0x005469b5                      ; 00546903 | LAB_005469b5
        ;   XREF to: 005469b5 (CONDITIONAL_JUMP)
    LEA EAX,[EDI + -0x1]                ; 00546909
        ;   Label: LAB_00546909
    CMP EAX,0x3                         ; 0054690c
    JA 0x0054693c                       ; 0054690f | default
        ;   XREF to: 0054693c (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x546594]  ; 00546911 | void * switchdataD_00546594
        ;   Label: switchD
    FLD1                                ; 00546918
        ;   Label: caseD_1
    MOV EDI,0x3f800000                  ; 0054691a
    XOR ECX,ECX                         ; 0054691f
    INC EBX                             ; 00546921
    MOV dword ptr [ESP + 0xc],ECX       ; 00546922
    MOV dword ptr [ESP + 0x10],ECX      ; 00546926
    FADD float ptr [ESP + 0xb0]         ; 0054692a
    MOV dword ptr [ESP + 0x14],EDI      ; 00546931
    FSTP float ptr [ESP + 0xb0]         ; 00546935
        ;   Label: LAB_00546935
    FLD1                                ; 0054693c
        ;   Label: default
    MOV dword ptr [ESP + 0xe0],EBX      ; 0054693e
    FLD float ptr [ESP + 0xa8]          ; 00546945
    FILD dword ptr [ESP + 0xe0]         ; 0054694c
    FSTP float ptr [ESP + 0xd8]         ; 00546953
    FXCH                                ; 0054695a
    FDIV float ptr [ESP + 0xd8]         ; 0054695c
    FXCH                                ; 00546963
    FMUL ST1                            ; 00546965
    FLD float ptr [ESP + 0xac]          ; 00546967
    FMUL ST2                            ; 0054696e
    LEA EAX,[ESP + 0x18]                ; 00546970
    FLD float ptr [ESP + 0xb0]          ; 00546974
    PUSH EAX                            ; 0054697b
    LEA EAX,[ESP + 0x40]                ; 0054697c
    FMULP ST3                           ; 00546980
    PUSH EAX                            ; 00546982
    FXCH                                ; 00546983
    FSTP float ptr [ESP + 0x20]         ; 00546985
    FSTP float ptr [ESP + 0x24]         ; 00546989
    FSTP float ptr [ESP + 0x28]         ; 0054698d
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 00546991 | CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00546996
    FLD float ptr [EAX + 0x4]           ; 00546999
    FADD float ptr [ESP + 0x58]         ; 0054699c
    FSTP float ptr [ESP + 0xdc]         ; 005469a0
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005469a7
    MOV ESP,EBP                         ; 005469ae
    POP EBP                             ; 005469b0
    POP EDI                             ; 005469b1
    POP ESI                             ; 005469b2
    POP EBX                             ; 005469b3
    RET                                 ; 005469b4
    CMP EDI,dword ptr [EBP + 0x1c]      ; 005469b5
        ;   Label: LAB_005469b5
    JZ 0x00546909                       ; 005469b8 | LAB_00546909
        ;   XREF to: 00546909 (CONDITIONAL_JUMP)
    JMP 0x0054693c                      ; 005469be | default
        ;   XREF to: 0054693c (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xb0]          ; 005469c3
        ;   Label: caseD_2
    MOV EDX,0xbf800000                  ; 005469ca
    XOR EDI,EDI                         ; 005469cf
    INC EBX                             ; 005469d1
    MOV dword ptr [ESP + 0x48],EDI      ; 005469d2
    MOV dword ptr [ESP + 0x4c],EDI      ; 005469d6
    FADD float ptr [0x0063e958]         ; 005469da | float g_PathNegativeOne
    MOV dword ptr [ESP + 0x50],EDX      ; 005469e0
    JMP 0x00546935                      ; 005469e4 | LAB_00546935
        ;   XREF to: 00546935 (UNCONDITIONAL_JUMP)
    FLD1                                ; 005469e9
        ;   Label: caseD_3
    MOV EDX,0x3f800000                  ; 005469eb
    INC EBX                             ; 005469f0
    XOR ECX,ECX                         ; 005469f1
    MOV dword ptr [ESP + 0x9c],EDX      ; 005469f3
    MOV dword ptr [ESP + 0xa0],ECX      ; 005469fa
    FADD float ptr [ESP + 0xa8]         ; 00546a01
    MOV dword ptr [ESP + 0xa4],ECX      ; 00546a08
    FSTP float ptr [ESP + 0xa8]         ; 00546a0f
    JMP 0x0054693c                      ; 00546a16 | default
        ;   XREF to: 0054693c (UNCONDITIONAL_JUMP)
    FLD float ptr [ESP + 0xa8]          ; 00546a1b
        ;   Label: caseD_4
    MOV ESI,0xbf800000                  ; 00546a22
    INC EBX                             ; 00546a27
    XOR EDI,EDI                         ; 00546a28
    MOV dword ptr [ESP + 0xc0],ESI      ; 00546a2a
    MOV dword ptr [ESP + 0xc4],EDI      ; 00546a31
    FADD float ptr [0x0063e958]         ; 00546a38 | float g_PathNegativeOne
    MOV dword ptr [ESP + 0xc8],EDI      ; 00546a3e
    FSTP float ptr [ESP + 0xa8]         ; 00546a45
    JMP 0x0054693c                      ; 00546a4c | default
        ;   XREF to: 0054693c (UNCONDITIONAL_JUMP)

