; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(int param_1)
;
; Local Variables:
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x78]:1  local_78
; undefined        Stack[-0x6c]:1  local_6c
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined        Stack[-0x54]:1  local_54
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   FUN_00495a20 at 00496be7
;
; Referenced Globals:
;   double DOUBLE_00582182 = 5
;   double DOUBLE_0058218a = 3
;   double DOUBLE_00582192 = 0.300000000000000
;   double DOUBLE_0058219a = 0.5
;   double DOUBLE_005821a2 = 0.174532925194444
;   undefined4 DAT_005be368
;   undefined4 DAT_01cc3120
;   undefined4 DAT_01fa3ff0
;   undefined4 DAT_01fa3ff4
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040d890
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004987e0
        ;   Label: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0
    PUSH ESI                            ; 004987e1
    PUSH EDI                            ; 004987e2
    PUSH EBP                            ; 004987e3
    MOV EBP,ESP                         ; 004987e4
    SUB ESP,0x8c                        ; 004987e6
    AND ESP,0xfffffff8                  ; 004987ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 004987ef
    XOR EDI,EDI                         ; 004987f2
    LEA ESI,[EAX + 0x20]                ; 004987f4
    MOV dword ptr [ESP + 0x84],EDI      ; 004987f7
    MOV dword ptr [EAX + 0x1fa14],0x0   ; 004987fe
    MOV EAX,[0x005be368]                ; 00498808 | DAT_005be368
        ;   Label: LAB_00498808
    CMP EDI,dword ptr [EAX + 0x14cd6c]  ; 0049880d | DAT_01fa3ff0
    JL 0x00498832                       ; 00498813
        ;   XREF to: 00498832 (CONDITIONAL_JUMP)  ; LAB_00498832
    XOR EAX,EAX                         ; 00498815
    MOV ESP,EBP                         ; 00498817
    POP EBP                             ; 00498819
    POP EDI                             ; 0049881a
    POP ESI                             ; 0049881b
    POP EBX                             ; 0049881c
    RET                                 ; 0049881d
    MOV EAX,dword ptr [ESP + 0x84]      ; 0049881e
        ;   Label: LAB_0049881e
    ADD EAX,0x4                         ; 00498825
    INC EDI                             ; 00498828
    MOV dword ptr [ESP + 0x84],EAX      ; 00498829
    JMP 0x00498808                      ; 00498830
        ;   XREF to: 00498808 (UNCONDITIONAL_JUMP)  ; LAB_00498808
    MOV EBX,dword ptr [ESP + 0x84]      ; 00498832
        ;   Label: LAB_00498832
    MOV EDX,dword ptr [0x01cc3120]      ; 00498839 | DAT_01cc3120
    ADD EAX,EBX                         ; 0049883f
    PUSH EDX                            ; 00498841
    MOV EAX,dword ptr [EAX + 0x14cd70]  ; 00498842 | DAT_01fa3ff4
    PUSH EAX                            ; 00498848
    CALL core_actor.cpp_castToClassHash_FUN_0040d890 ; 00498849
        ;   XREF to: 0040d890 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040d890()
    ADD ESP,0x8                         ; 0049884e
    MOV EBX,EAX                         ; 00498851
    MOV dword ptr [ESP + 0x7c],EAX      ; 00498853
    TEST EAX,EAX                        ; 00498857
    JZ 0x0049881e                       ; 00498859
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    LEA EDX,[EAX + 0x20]                ; 0049885b
    FLD float ptr [ESI]                 ; 0049885e
    FSUB float ptr [EDX]                ; 00498860
    FSTP float ptr [ESP + 0x40]         ; 00498862
    FLD float ptr [ESI + 0x4]           ; 00498866
    FSUB float ptr [EDX + 0x4]          ; 00498869
    FST float ptr [ESP + 0x44]          ; 0049886c
    FABS                                ; 00498870
    FLD float ptr [ESI + 0x8]           ; 00498872
    FSUB float ptr [EDX + 0x8]          ; 00498875
    FSTP float ptr [ESP + 0x48]         ; 00498878
    FCOMP double ptr [0x00582182]       ; 0049887c | DOUBLE_00582182
    FNSTSW AX                           ; 00498882
    SAHF                                ; 00498884
    JA 0x0049881e                       ; 00498885
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    FLD float ptr [ESP + 0x40]          ; 00498887
    FMUL ST0                            ; 0049888b
    FLD float ptr [ESP + 0x48]          ; 0049888d
    FMUL ST0                            ; 00498891
    FADDP                               ; 00498893
    FSQRT                               ; 00498895
    XOR ECX,ECX                         ; 00498897
    MOV dword ptr [ESP + 0x44],ECX      ; 00498899
    FCOMP double ptr [0x0058218a]       ; 0049889d | DOUBLE_0058218a
    FNSTSW AX                           ; 004988a3
    SAHF                                ; 004988a5
    JA 0x0049881e                       ; 004988a6
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    PUSH EDX                            ; 004988ac
    LEA EAX,[ESP + 0x14]                ; 004988ad
    PUSH EAX                            ; 004988b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004988b2
    PUSH EAX                            ; 004988b5
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004988b6
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004988bb
    FLD float ptr [ESP + 0x10]          ; 004988be
    FABS                                ; 004988c2
    FCOMP double ptr [0x00582192]       ; 004988c4 | DOUBLE_00582192
    FNSTSW AX                           ; 004988ca
    SAHF                                ; 004988cc
    JA 0x0049881e                       ; 004988cd
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    FLD float ptr [ESP + 0x18]          ; 004988d3
    FST double ptr [ESP + 0x8]          ; 004988d7
    FCOMP double ptr [0x0058219a]       ; 004988db | DOUBLE_0058219a
    FNSTSW AX                           ; 004988e1
    SAHF                                ; 004988e3
    JC 0x0049881e                       ; 004988e4
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    FLD double ptr [ESP + 0x8]          ; 004988ea
    FCOMP double ptr [0x0058218a]       ; 004988ee | DOUBLE_0058218a
    FNSTSW AX                           ; 004988f4
    SAHF                                ; 004988f6
    JA 0x0049881e                       ; 004988f7
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    LEA EAX,[ESP + 0x10]                ; 004988fd
    PUSH EAX                            ; 00498901
    LEA EAX,[ESP + 0x50]                ; 00498902
    PUSH EAX                            ; 00498906
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00498907
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 0049890c
    PUSH dword ptr [EAX + 0x4]          ; 0049890f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 00498912
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x8c],EAX      ; 00498917
    FLD float ptr [ESP + 0x8c]          ; 0049891e
    FABS                                ; 00498925
    ADD ESP,0x4                         ; 00498927
    FCOMP double ptr [0x005821a2]       ; 0049892a | DOUBLE_005821a2
    FNSTSW AX                           ; 00498930
    SAHF                                ; 00498932
    JA 0x0049881e                       ; 00498933
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    PUSH ESI                            ; 00498939
    LEA EAX,[ESP + 0x2c]                ; 0049893a
    PUSH EAX                            ; 0049893e
    XOR EDX,EDX                         ; 0049893f
    PUSH EBX                            ; 00498941
    MOV dword ptr [ESP + 0x8c],EDX      ; 00498942
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 00498949
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    MOV EDX,EAX                         ; 0049894e
    LEA EAX,[ESP + 0x1c]                ; 00498950
    ADD ESP,0xc                         ; 00498954
    CMP EAX,EDX                         ; 00498957
    JZ 0x0049896f                       ; 00498959
        ;   XREF to: 0049896f (CONDITIONAL_JUMP)  ; LAB_0049896f
    MOV EAX,dword ptr [EDX]             ; 0049895b
    MOV dword ptr [ESP + 0x10],EAX      ; 0049895d
    MOV EAX,dword ptr [EDX + 0x4]       ; 00498961
    MOV dword ptr [ESP + 0x14],EAX      ; 00498964
    MOV EAX,dword ptr [EDX + 0x8]       ; 00498968
    MOV dword ptr [ESP + 0x18],EAX      ; 0049896b
    FLD float ptr [ESP + 0x18]          ; 0049896f
        ;   Label: LAB_0049896f
    FLDZ                                ; 00498973
    FCOMPP                              ; 00498975
    FNSTSW AX                           ; 00498977
    SAHF                                ; 00498979
    JBE 0x00498993                      ; 0049897a
        ;   XREF to: 00498993 (CONDITIONAL_JUMP)  ; LAB_00498993
    MOV AH,byte ptr [ESP + 0x1b]        ; 0049897c
    MOV ECX,0x1                         ; 00498980
    XOR AH,0x80                         ; 00498985
    MOV dword ptr [ESP + 0x80],ECX      ; 00498988
    MOV byte ptr [ESP + 0x1b],AH        ; 0049898f
    FLD float ptr [ESP + 0x10]          ; 00498993
        ;   Label: LAB_00498993
    FABS                                ; 00498997
    FCOMP double ptr [0x00582192]       ; 00498999 | DOUBLE_00582192
    FNSTSW AX                           ; 0049899f
    SAHF                                ; 004989a1
    JA 0x0049881e                       ; 004989a2
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    FLD float ptr [ESP + 0x18]          ; 004989a8
    FST double ptr [ESP]                ; 004989ac
    FCOMP double ptr [0x0058219a]       ; 004989af | DOUBLE_0058219a
    FNSTSW AX                           ; 004989b5
    SAHF                                ; 004989b7
    JC 0x0049881e                       ; 004989b8
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    FLD double ptr [ESP]                ; 004989be
    FCOMP double ptr [0x0058218a]       ; 004989c1 | DOUBLE_0058218a
    FNSTSW AX                           ; 004989c7
    SAHF                                ; 004989c9
    JA 0x0049881e                       ; 004989ca
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    LEA EAX,[ESP + 0x10]                ; 004989d0
    PUSH EAX                            ; 004989d4
    LEA EAX,[ESP + 0x74]                ; 004989d5
    PUSH EAX                            ; 004989d9
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004989da
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 004989df
    PUSH dword ptr [EAX + 0x4]          ; 004989e2
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004989e5
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x8c],EAX      ; 004989ea
    FLD float ptr [ESP + 0x8c]          ; 004989f1
    FABS                                ; 004989f8
    ADD ESP,0x4                         ; 004989fa
    FCOMP double ptr [0x005821a2]       ; 004989fd | DOUBLE_005821a2
    FNSTSW AX                           ; 00498a03
    SAHF                                ; 00498a05
    JA 0x0049881e                       ; 00498a06
        ;   XREF to: 0049881e (CONDITIONAL_JUMP)  ; LAB_0049881e
    PUSH 0x1                            ; 00498a0c
    MOV EDX,dword ptr [EBP + 0x14]      ; 00498a0e
    MOV EAX,dword ptr [ESP + 0x80]      ; 00498a11
    PUSH 0x16                           ; 00498a18
    MOV dword ptr [EDX + 0x1fa14],EAX   ; 00498a1a
    LEA EAX,[EDX + 0x150]               ; 00498a20
    PUSH EAX                            ; 00498a26
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00498a27
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 00498a2c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498a2f
    MOV EDI,0x40000000                  ; 00498a32
    XOR EBX,EBX                         ; 00498a37
    MOV dword ptr [EAX + 0xbca0],0x0    ; 00498a39
    MOV EAX,dword ptr [ESP + 0x80]      ; 00498a43
    MOV dword ptr [ESP + 0x1c],EBX      ; 00498a4a
    MOV dword ptr [ESP + 0x20],EBX      ; 00498a4e
    MOV dword ptr [ESP + 0x24],EDI      ; 00498a52
    TEST EAX,EAX                        ; 00498a56
    JZ 0x00498a62                       ; 00498a58
        ;   XREF to: 00498a62 (CONDITIONAL_JUMP)  ; LAB_00498a62
    MOV dword ptr [ESP + 0x24],0xc0000000 ; 00498a5a
    LEA EAX,[ESP + 0x1c]                ; 00498a62
        ;   Label: LAB_00498a62
    PUSH EAX                            ; 00498a66
    LEA EAX,[ESP + 0x38]                ; 00498a67
    PUSH EAX                            ; 00498a6b
    MOV ECX,dword ptr [ESP + 0x84]      ; 00498a6c
    PUSH ECX                            ; 00498a73
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00498a74
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240()
    ADD ESP,0xc                         ; 00498a79
    MOV EDX,EAX                         ; 00498a7c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498a7e
    MOV ECX,dword ptr [EDX]             ; 00498a81
    MOV dword ptr [EAX + 0x20],ECX      ; 00498a83
    MOV ECX,dword ptr [EDX + 0x4]       ; 00498a86
    MOV dword ptr [EAX + 0x24],ECX      ; 00498a89
    FLD float ptr [EDX + 0x8]           ; 00498a8c
    MOV EDX,dword ptr [ESP + 0x7c]      ; 00498a8f
    FSTP float ptr [EAX + 0x28]         ; 00498a93
    FLD float ptr [EDX + 0x20]          ; 00498a96
    FSUB float ptr [EAX + 0x20]         ; 00498a99
    FSTP float ptr [ESP + 0x58]         ; 00498a9c
    FLD float ptr [EDX + 0x24]          ; 00498aa0
    FSUB float ptr [EAX + 0x24]         ; 00498aa3
    FSTP float ptr [ESP + 0x5c]         ; 00498aa6
    FLD float ptr [EDX + 0x28]          ; 00498aaa
    FSUB float ptr [EAX + 0x28]         ; 00498aad
    LEA EAX,[ESP + 0x58]                ; 00498ab0
    PUSH EAX                            ; 00498ab4
    LEA EAX,[ESP + 0x68]                ; 00498ab5
    PUSH EAX                            ; 00498ab9
    FSTP float ptr [ESP + 0x68]         ; 00498aba
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 00498abe
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    ADD ESP,0x8                         ; 00498ac3
    FLD float ptr [EAX + 0x4]           ; 00498ac6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00498ac9
    PUSH EAX                            ; 00498acc
    FSTP float ptr [EAX + 0x34]         ; 00498acd
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000 ; 00498ad0
        ;   XREF to: 0040a000 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000()
    MOV EAX,0x1                         ; 00498ad5
    ADD ESP,0x4                         ; 00498ada
    MOV ESP,EBP                         ; 00498add
    POP EBP                             ; 00498adf
    POP EDI                             ; 00498ae0
    POP ESI                             ; 00498ae1
    POP EBX                             ; 00498ae2
    RET                                 ; 00498ae3

