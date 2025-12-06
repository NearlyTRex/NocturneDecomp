; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_boxactor.cpp_FUN_004218d0()
;
;
; XREF[4]:
;   core_boxactor.cpp_FUN_00422390 at 0042248f
;   core_boxactor.cpp_FUN_004224f0 at 00422503
;   core_boxactor.cpp_FUN_00422640 at 004226b7
;   core_boxactor.cpp_FUN_004228e0 at 004228f2
;
; Referenced Globals:
;   float FLOAT_0061663f = 0.5
;   undefined4 DAT_0078a123
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_box.cpp_CBox_setupCorners_FUN_0041dd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004218d0
        ;   Label: core_boxactor.cpp_FUN_004218d0
    SUB ESP,0x48                        ; 004218d1
    MOV EBX,dword ptr [ESP + 0x50]      ; 004218d4
    FLD float ptr [EBX + 0x390]         ; 004218d8
    FLDZ                                ; 004218de
    MOV dword ptr [EBX + 0x5e8],0x0     ; 004218e0
    FCOMPP                              ; 004218ea
    FNSTSW AX                           ; 004218ec
    SAHF                                ; 004218ee
    JNC 0x00421913                      ; 004218ef | LAB_00421913
        ;   XREF to: 00421913 (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x68],0x78a123 ; 004218f1 | DAT_0078a123
    JNZ 0x00421913                      ; 004218f8 | LAB_00421913
        ;   XREF to: 00421913 (CONDITIONAL_JUMP)
    LEA EAX,[EBX + 0x158]               ; 004218fa
    CMP dword ptr [EAX + 0x178],0x0     ; 00421900
    JNZ 0x00421918                      ; 00421907 | LAB_00421918
        ;   XREF to: 00421918 (CONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x5e8],0xffffffff ; 00421909
    ADD ESP,0x48                        ; 00421913
        ;   Label: LAB_00421913
    POP EBX                             ; 00421916
    RET                                 ; 00421917
    MOV EAX,ESP                         ; 00421918
        ;   Label: LAB_00421918
    PUSH EAX                            ; 0042191a
    MOV EDX,dword ptr [EBX + 0x154]     ; 0042191b
    PUSH EBX                            ; 00421921
    CALL dword ptr [EDX + 0x14]         ; 00421922
    ADD ESP,0x8                         ; 00421925
    FLD float ptr [ESP + 0x4]           ; 00421928
    FLD float ptr [ESP]                 ; 0042192c
    FADD float ptr [ESP + 0xc]          ; 0042192f
    FXCH                                ; 00421933
    FADD float ptr [ESP + 0x10]         ; 00421935
    FXCH                                ; 00421939
    FST float ptr [ESP + 0x30]          ; 0042193b
    FLD float ptr [0x0061663f]          ; 0042193f | float FLOAT_0061663f
    FXCH                                ; 00421945
    FMUL ST1                            ; 00421947
    FXCH ST2                            ; 00421949
    FST float ptr [ESP + 0x34]          ; 0042194b
    FMUL ST1                            ; 0042194f
    LEA EAX,[ESP + 0x24]                ; 00421951
    FLD float ptr [ESP + 0x8]           ; 00421955
    PUSH EAX                            ; 00421959
    FADD float ptr [ESP + 0x18]         ; 0042195a
    LEA EAX,[ESP + 0x1c]                ; 0042195e
    FST float ptr [ESP + 0x3c]          ; 00421962
    PUSH EAX                            ; 00421966
    FMULP ST2                           ; 00421967
    PUSH EBX                            ; 00421969
    FXCH ST2                            ; 0042196a
    FSTP float ptr [ESP + 0x30]         ; 0042196c
    FXCH                                ; 00421970
    FSTP float ptr [ESP + 0x34]         ; 00421972
    FSTP float ptr [ESP + 0x38]         ; 00421976
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0042197a | CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0042197f
    LEA EAX,[ESP + 0x3c]                ; 00421982
    FLD float ptr [ESP + 0xc]           ; 00421986
    FLD float ptr [ESP + 0x10]          ; 0042198a
    FLD float ptr [ESP + 0x14]          ; 0042198e
    FXCH ST2                            ; 00421992
    FSUB float ptr [ESP]                ; 00421994
    FXCH                                ; 00421997
    FSUB float ptr [ESP + 0x4]          ; 00421999
    FXCH ST2                            ; 0042199d
    FSUB float ptr [ESP + 0x8]          ; 0042199f
    FXCH                                ; 004219a3
    FSTP float ptr [ESP + 0x3c]         ; 004219a5
    FXCH                                ; 004219a9
    FSTP float ptr [ESP + 0x40]         ; 004219ab
    FSTP float ptr [ESP + 0x44]         ; 004219af
    PUSH dword ptr [EBX + 0x390]        ; 004219b3
    PUSH EAX                            ; 004219b9
    LEA EAX,[EBX + 0x30]                ; 004219ba
    PUSH EAX                            ; 004219bd
    LEA EAX,[ESP + 0x24]                ; 004219be
    PUSH EAX                            ; 004219c2
    ADD EBX,0x394                       ; 004219c3
    PUSH EBX                            ; 004219c9
    CALL core_box.cpp_CBox_setupCorners_FUN_0041dd20 ; 004219ca | void core_box.cpp_CBox_setupCorners_FUN_0041dd20(CBox * this_ptr, CVector3f * position, CVector3f * orientation, CVector3f * extents, ...)
        ;   XREF to: 0041dd20 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004219cf
    ADD ESP,0x48                        ; 004219d2
    POP EBX                             ; 004219d5
    RET                                 ; 004219d6

