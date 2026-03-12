; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_0042c5f0(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; float            Stack[0xc]:4   min_dist
; float            Stack[0x10]:4   max_dist
; int *            Stack[0x14]:4   out_state
; Local Variables:
; CVector3f        Stack[-0x50]:12  local_50
; CVector3f        Stack[-0x44]:12  local_44
; CVector3f        Stack[-0x38]:12  local_38
; float            Stack[-0x2c]:4  local_2c
; float            Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
;
; XREF[3]:
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 at 0042cd08
;   core_hostage.cpp_CHostage_process_FUN_004f4bd0 at 004f569a
;   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 at 005e6b02
;
; Referenced Globals:
;   TerminatedCString s_s_tried_to_follow_NULL_a_006171ab
;   TerminatedCString s_s_confused_while_followi_006171cb
;   TerminatedCString s_s_confused_after_pathmap_006171eb
;   double DOUBLE_00617222 = 20
;   double DOUBLE_0061722a = 40
;   double DOUBLE_00617232 = 0.100000000000000
;   double DOUBLE_0061723a = 0.0100000000000000
;   double DOUBLE_0061724a = 0.174532925194444
;   CConsole* g_CConsolePtr = 0083b1a4
;   CConsole g_CConsoleInstance
;   UVector3 g_ZeroVector
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042c5f0
        ;   Label: core_charactr.cpp_CCharacter_followActor_FUN_0042c5f0
    PUSH ESI                            ; 0042c5f1
    PUSH EDI                            ; 0042c5f2
    PUSH EBP                            ; 0042c5f3
    MOV EBP,ESP                         ; 0042c5f4
    SUB ESP,0x40                        ; 0042c5f6
    AND ESP,0xfffffff8                  ; 0042c5f9
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042c5fc
    MOV EDI,dword ptr [EBP + 0x18]      ; 0042c5ff
    MOV EBX,dword ptr [EBP + 0x24]      ; 0042c602
    TEST EDI,EDI                        ; 0042c605
    JZ 0x0042c700                       ; 0042c607
        ;   XREF to: 0042c700 (CONDITIONAL_JUMP)  ; LAB_0042c700
    LEA EAX,[EDI + 0x20]                ; 0042c60d
    LEA EDX,[ESI + 0x20]                ; 0042c610
    FLD float ptr [EAX]                 ; 0042c613
    FSUB float ptr [EDX]                ; 0042c615
    FSTP float ptr [ESP]                ; 0042c617
    FLD float ptr [EAX + 0x4]           ; 0042c61a
    FSUB float ptr [EDX + 0x4]          ; 0042c61d
    FLD float ptr [EBP + 0x1c]          ; 0042c620
    FXCH                                ; 0042c623
    FSTP float ptr [ESP + 0x4]          ; 0042c625
    FLD float ptr [EAX + 0x8]           ; 0042c629
    FSUB float ptr [EDX + 0x8]          ; 0042c62c
    FLDZ                                ; 0042c62f
    FXCH                                ; 0042c631
    FSTP float ptr [ESP + 0x8]          ; 0042c633
    FCOMPP                              ; 0042c637
    FNSTSW AX                           ; 0042c639
    SAHF                                ; 0042c63b
    JA 0x0042c722                       ; 0042c63c
        ;   XREF to: 0042c722 (CONDITIONAL_JUMP)  ; LAB_0042c722
    FLD float ptr [ESP + 0x4]           ; 0042c642
    FABS                                ; 0042c646
    FCOMP double ptr [0x00617222]       ; 0042c648 | DOUBLE_00617222
    FNSTSW AX                           ; 0042c64e
    SAHF                                ; 0042c650
    JA 0x0042c83e                       ; 0042c651
        ;   XREF to: 0042c83e (CONDITIONAL_JUMP)  ; LAB_0042c83e
    FLD float ptr [ESP]                 ; 0042c657
    FABS                                ; 0042c65a
    FCOMP double ptr [0x0061722a]       ; 0042c65c | DOUBLE_0061722a
    FNSTSW AX                           ; 0042c662
    SAHF                                ; 0042c664
    JA 0x0042c83e                       ; 0042c665
        ;   XREF to: 0042c83e (CONDITIONAL_JUMP)  ; LAB_0042c83e
    FLD float ptr [ESP + 0x8]           ; 0042c66b
    FABS                                ; 0042c66f
    FCOMP double ptr [0x0061722a]       ; 0042c671 | DOUBLE_0061722a
    FNSTSW AX                           ; 0042c677
    SAHF                                ; 0042c679
    JA 0x0042c83e                       ; 0042c67a
        ;   XREF to: 0042c83e (CONDITIONAL_JUMP)  ; LAB_0042c83e
    FLD float ptr [ESP]                 ; 0042c680
    FMUL ST0                            ; 0042c683
    FLD float ptr [ESP + 0x8]           ; 0042c685
    FMUL ST0                            ; 0042c689
    FADDP                               ; 0042c68b
    FSQRT                               ; 0042c68d
    FLD float ptr [EBP + 0x20]          ; 0042c68f
    XOR EDX,EDX                         ; 0042c692
    FLDZ                                ; 0042c694
    MOV dword ptr [ESP + 0x4],EDX       ; 0042c696
    FXCH ST2                            ; 0042c69a
    FSTP float ptr [ESP + 0x24]         ; 0042c69c
    FXCH                                ; 0042c6a0
    FCOMPP                              ; 0042c6a2
    FNSTSW AX                           ; 0042c6a4
    SAHF                                ; 0042c6a6
    JA 0x0042c861                       ; 0042c6a7
        ;   XREF to: 0042c861 (CONDITIONAL_JUMP)  ; LAB_0042c861
    FLD float ptr [EBP + 0x1c]          ; 0042c6ad
        ;   Label: LAB_0042c6ad
    FMUL double ptr [0x00617232]        ; 0042c6b0 | DOUBLE_00617232
    MOV EAX,dword ptr [EBX]             ; 0042c6b6
    FSTP float ptr [ESP + 0x30]         ; 0042c6b8
    TEST EAX,EAX                        ; 0042c6bc
    JNZ 0x0042c86d                      ; 0042c6be
        ;   XREF to: 0042c86d (CONDITIONAL_JUMP)  ; LAB_0042c86d
    FLD float ptr [EBP + 0x1c]          ; 0042c6c4
    FADD float ptr [ESP + 0x30]         ; 0042c6c7
    FSTP float ptr [EBP + 0x1c]         ; 0042c6cb
        ;   Label: LAB_0042c6cb
    FLD float ptr [EBP + 0x1c]          ; 0042c6ce
        ;   Label: LAB_0042c6ce
    FCOMP double ptr [0x0061723a]       ; 0042c6d1 | DOUBLE_0061723a
    FNSTSW AX                           ; 0042c6d7
    SAHF                                ; 0042c6d9
    JNC 0x0042c6e3                      ; 0042c6da
        ;   XREF to: 0042c6e3 (CONDITIONAL_JUMP)  ; LAB_0042c6e3
    MOV dword ptr [EBP + 0x1c],0x3c23d70a ; 0042c6dc
    FLD float ptr [ESP + 0x24]          ; 0042c6e3
        ;   Label: LAB_0042c6e3
    FCOMP float ptr [EBP + 0x1c]        ; 0042c6e7
    FNSTSW AX                           ; 0042c6ea
    SAHF                                ; 0042c6ec
    JNC 0x0042c8a4                      ; 0042c6ed
        ;   XREF to: 0042c8a4 (CONDITIONAL_JUMP)  ; LAB_0042c8a4
    MOV dword ptr [EBX],0x0             ; 0042c6f3
    MOV ESP,EBP                         ; 0042c6f9
    POP EBP                             ; 0042c6fb
    POP EDI                             ; 0042c6fc
    POP ESI                             ; 0042c6fd
    POP EBX                             ; 0042c6fe
    RET                                 ; 0042c6ff
    PUSH ESI                            ; 0042c700
        ;   Label: LAB_0042c700
    PUSH 0x6171ab                       ; 0042c701 | = "%s tried to follow NULL actor!\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 0042c706 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 0042c70c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0042c70d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0042c712
    MOV dword ptr [EBX],0x3             ; 0042c715
    MOV ESP,EBP                         ; 0042c71b
    POP EBP                             ; 0042c71d
    POP EDI                             ; 0042c71e
    POP ESI                             ; 0042c71f
    POP EBX                             ; 0042c720
    RET                                 ; 0042c721
    MOV EAX,ESP                         ; 0042c722
        ;   Label: LAB_0042c722
    PUSH EAX                            ; 0042c724
    LEA EAX,[ESP + 0x10]                ; 0042c725
    PUSH EAX                            ; 0042c729
    XOR EDI,EDI                         ; 0042c72a
    PUSH ESI                            ; 0042c72c
    MOV dword ptr [ESP + 0x10],EDI      ; 0042c72d
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0 ; 0042c731
        ;   XREF to: 00408ea0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_00408ea0(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 0042c736
    PUSH EAX                            ; 0042c739
    LEA EAX,[ESP + 0x1c]                ; 0042c73a
    PUSH EAX                            ; 0042c73e
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 0042c73f
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,dword ptr [EAX + 0x4]       ; 0042c744
    MOV dword ptr [ESI + 0x2418],EDX    ; 0042c747
    MOV EAX,dword ptr [EBX]             ; 0042c74d
    ADD ESP,0x8                         ; 0042c74f
    TEST EAX,EAX                        ; 0042c752
    JNZ 0x0042c7f5                      ; 0042c754
        ;   XREF to: 0042c7f5 (CONDITIONAL_JUMP)  ; LAB_0042c7f5
    FLD float ptr [ESI + 0x2418]        ; 0042c75a
    FABS                                ; 0042c760
    FCOMP double ptr [0x0061724a]       ; 0042c762 | DOUBLE_0061724a
    FNSTSW AX                           ; 0042c768
    SAHF                                ; 0042c76a
    JBE 0x0042c81a                      ; 0042c76b
        ;   XREF to: 0042c81a (CONDITIONAL_JUMP)  ; LAB_0042c81a
    MOV dword ptr [EBX],0x1             ; 0042c771
        ;   Label: LAB_0042c771
    MOV EAX,dword ptr [ESI + 0x2418]    ; 0042c777
        ;   Label: LAB_0042c777
    MOV dword ptr [ESP + 0x34],EAX      ; 0042c77d
    MOV EAX,dword ptr [ESI + 0x2438]    ; 0042c781
    PUSH dword ptr [ESP + 0x34]         ; 0042c787
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042c78b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 0042c78f
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [ESP + 0x40],EAX      ; 0042c794
    FLD float ptr [ESP + 0x40]          ; 0042c798
    ADD ESP,0x4                         ; 0042c79c
    FLD float ptr [ESP + 0x38]          ; 0042c79f
    FXCH                                ; 0042c7a3
    FST float ptr [ESP + 0x34]          ; 0042c7a5
    FXCH                                ; 0042c7a9
    FCHS                                ; 0042c7ab
    FSTP float ptr [ESP + 0x28]         ; 0042c7ad
    FCOMP float ptr [ESP + 0x28]        ; 0042c7b1
    FNSTSW AX                           ; 0042c7b5
    SAHF                                ; 0042c7b7
    JNC 0x0042c825                      ; 0042c7b8
        ;   XREF to: 0042c825 (CONDITIONAL_JUMP)  ; LAB_0042c825
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042c7ba
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042c7be
        ;   Label: LAB_0042c7be
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0042c7c2
    MOV dword ptr [ESI + 0x2418],EAX    ; 0042c7c6
    MOV dword ptr [ESI + 0x23b4],0x0    ; 0042c7cc
        ;   Label: LAB_0042c7cc
    MOV EAX,dword ptr [ESI + 0x23b4]    ; 0042c7d6
    MOV dword ptr [ESI + 0x23b0],EAX    ; 0042c7dc
    MOV EAX,dword ptr [ESI + 0x23b0]    ; 0042c7e2
    MOV dword ptr [ESI + 0x23ac],EAX    ; 0042c7e8
    MOV ESP,EBP                         ; 0042c7ee
    POP EBP                             ; 0042c7f0
    POP EDI                             ; 0042c7f1
    POP ESI                             ; 0042c7f2
    POP EBX                             ; 0042c7f3
    RET                                 ; 0042c7f4
    FLD float ptr [ESI + 0x2418]        ; 0042c7f5
        ;   Label: LAB_0042c7f5
    FABS                                ; 0042c7fb
    PUSH EDI                            ; 0042c83e
        ;   Label: LAB_0042c83e
    PUSH ESI                            ; 0042c83f
    PUSH 0x6171cb                       ; 0042c840 | = "%s confused while following %s\n"
    MOV ECX,dword ptr [0x0066e8e0]      ; 0042c845 | g_CConsoleInstance | g_CConsolePtr
    PUSH ECX                            ; 0042c84b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0042c84c
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0042c851
    MOV dword ptr [EBX],0x3             ; 0042c854
    MOV ESP,EBP                         ; 0042c85a
    POP EBP                             ; 0042c85c
    POP EDI                             ; 0042c85d
    POP ESI                             ; 0042c85e
    POP EBX                             ; 0042c85f
    RET                                 ; 0042c860
    MOV dword ptr [EBP + 0x20],0x7149f2ca ; 0042c861
        ;   Label: LAB_0042c861
    JMP 0x0042c6ad                      ; 0042c868
        ;   XREF to: 0042c6ad (UNCONDITIONAL_JUMP)  ; LAB_0042c6ad
    CMP EAX,0x1                         ; 0042c86d
        ;   Label: LAB_0042c86d
    JNZ 0x0042c88c                      ; 0042c870
        ;   XREF to: 0042c88c (CONDITIONAL_JUMP)  ; LAB_0042c88c
    FLD float ptr [EBP + 0x1c]          ; 0042c872
    FLD float ptr [ESP + 0x30]          ; 0042c875
    FLD float ptr [EBP + 0x20]          ; 0042c879
    FADD ST0,ST1                        ; 0042c87c
    FXCH ST2                            ; 0042c87e
    FSUBRP                              ; 0042c880
    FXCH                                ; 0042c882
    FSTP float ptr [EBP + 0x20]         ; 0042c884
    JMP 0x0042c6cb                      ; 0042c887
        ;   XREF to: 0042c6cb (UNCONDITIONAL_JUMP)  ; LAB_0042c6cb
    CMP EAX,0x2                         ; 0042c88c
        ;   Label: LAB_0042c88c
    JNZ 0x0042c6ce                      ; 0042c88f
        ;   XREF to: 0042c6ce (CONDITIONAL_JUMP)  ; LAB_0042c6ce
    FLD float ptr [EBP + 0x20]          ; 0042c895
    FSUB float ptr [ESP + 0x30]         ; 0042c898
    FSTP float ptr [EBP + 0x20]         ; 0042c89c
    JMP 0x0042c6ce                      ; 0042c89f
        ;   XREF to: 0042c6ce (UNCONDITIONAL_JUMP)  ; LAB_0042c6ce
    PUSH 0x0                            ; 0042c8a4
        ;   Label: LAB_0042c8a4
    PUSH 0x0                            ; 0042c8a6
    PUSH 0x3f87558                      ; 0042c8a8 | g_ZeroVector
    MOV EAX,dword ptr [EDI + 0x154]     ; 0042c8ad
    PUSH EDI                            ; 0042c8b3
    CALL dword ptr [EAX + 0xbc]         ; 0042c8b4
    ADD ESP,0x4                         ; 0042c8ba
    PUSH EAX                            ; 0042c8bd
    LEA EAX,[EDI + 0x20]                ; 0042c8be
    PUSH EAX                            ; 0042c8c1
    PUSH ESI                            ; 0042c8c2
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0042c8c3
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042c8c8
    TEST EAX,EAX                        ; 0042c8cb
    JL 0x0042c8e8                       ; 0042c8cd
        ;   XREF to: 0042c8e8 (CONDITIONAL_JUMP)  ; LAB_0042c8e8
    FLD float ptr [ESP + 0x24]          ; 0042c8cf
    FCOMP float ptr [EBP + 0x20]        ; 0042c8d3
    FNSTSW AX                           ; 0042c8d6
    SAHF                                ; 0042c8d8
    JBE 0x0042c90b                      ; 0042c8d9
        ;   XREF to: 0042c90b (CONDITIONAL_JUMP)  ; LAB_0042c90b
    MOV dword ptr [EBX],0x2             ; 0042c8db
    MOV ESP,EBP                         ; 0042c8e1
    POP EBP                             ; 0042c8e3
    POP EDI                             ; 0042c8e4
    POP ESI                             ; 0042c8e5
    POP EBX                             ; 0042c8e6
    RET                                 ; 0042c8e7
    PUSH EDI                            ; 0042c8e8
        ;   Label: LAB_0042c8e8
    PUSH ESI                            ; 0042c8e9
    PUSH 0x6171eb                       ; 0042c8ea | = "%s confused after pathmap call while ..."
    MOV EDX,dword ptr [0x0066e8e0]      ; 0042c8ef | g_CConsoleInstance | g_CConsolePtr
    PUSH EDX                            ; 0042c8f5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0042c8f6
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0042c8fb
    MOV dword ptr [EBX],0x3             ; 0042c8fe
    MOV ESP,EBP                         ; 0042c904
    POP EBP                             ; 0042c906
    POP EDI                             ; 0042c907
    POP ESI                             ; 0042c908
    POP EBX                             ; 0042c909
    RET                                 ; 0042c90a
    MOV dword ptr [EBX],0x1             ; 0042c90b
        ;   Label: LAB_0042c90b
    MOV ESP,EBP                         ; 0042c911
    POP EBP                             ; 0042c913
    POP EDI                             ; 0042c914
    POP ESI                             ; 0042c915
    POP EBX                             ; 0042c916
    RET                                 ; 0042c917

