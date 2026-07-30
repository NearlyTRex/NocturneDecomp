; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_followActor_FUN_00428780(CCharacter *this_ptr,CDemonActor *actor,float min_dist,float max_dist,int *out_state )
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; CDemonActor *    Stack[0x8]:4   actor
; float            Stack[0xc]:4   min_dist
; float            Stack[0x10]:4   max_dist
; int *            Stack[0x14]:4   out_state
; Local Variables:
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined        Stack[-0x44]:1  local_44
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[3]:
;   core_charactr.cpp_FUN_00428c00 at 00428e98
;   core_hostage.cpp_CHostage_process_FUN_004b6d80 at 004b784a
;   core_vampboss.cpp_CVampireBoss_process_FUN_0054c690 at 0054d822
;
; Referenced Globals:
;   TerminatedCString s_s_tried_to_follow_NULL_a_0057a053
;   TerminatedCString s_s_confused_while_followi_0057a073
;   TerminatedCString s_s_confused_after_pathmap_0057a093
;   double DOUBLE_0057a0ca = 20
;   double DOUBLE_0057a0d2 = 40
;   double DOUBLE_0057a0da = 0.100000000000000
;   double DOUBLE_0057a0e2 = 0.0100000000000000
;   double DOUBLE_0057a0ea = 0.0349065850388889
;   double DOUBLE_0057a0f2 = 0.174532925194444
;   void* PTR_DAT_005ad350 = 0077ad0c
;   undefined4 DAT_0077ad0c
;   undefined4 DAT_02dd1184
;
; Called Functions:
;   core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428780
        ;   Label: core_charactr.cpp_CCharacter_followActor_FUN_00428780
    PUSH ESI                            ; 00428781
    PUSH EDI                            ; 00428782
    PUSH EBP                            ; 00428783
    MOV EBP,ESP                         ; 00428784
    SUB ESP,0x40                        ; 00428786
    AND ESP,0xfffffff8                  ; 00428789
    MOV ESI,dword ptr [EBP + 0x14]      ; 0042878c
    MOV EDI,dword ptr [EBP + 0x18]      ; 0042878f
    MOV EBX,dword ptr [EBP + 0x24]      ; 00428792
    TEST EDI,EDI                        ; 00428795
    JZ 0x00428890                       ; 00428797
        ;   XREF to: 00428890 (CONDITIONAL_JUMP)  ; LAB_00428890
    LEA EAX,[EDI + 0x20]                ; 0042879d
    LEA EDX,[ESI + 0x20]                ; 004287a0
    FLD float ptr [EAX]                 ; 004287a3
    FSUB float ptr [EDX]                ; 004287a5
    FSTP float ptr [ESP]                ; 004287a7
    FLD float ptr [EAX + 0x4]           ; 004287aa
    FSUB float ptr [EDX + 0x4]          ; 004287ad
    FLD float ptr [EBP + 0x1c]          ; 004287b0
    FXCH                                ; 004287b3
    FSTP float ptr [ESP + 0x4]          ; 004287b5
    FLD float ptr [EAX + 0x8]           ; 004287b9
    FSUB float ptr [EDX + 0x8]          ; 004287bc
    FLDZ                                ; 004287bf
    FXCH                                ; 004287c1
    FSTP float ptr [ESP + 0x8]          ; 004287c3
    FCOMPP                              ; 004287c7
    FNSTSW AX                           ; 004287c9
    SAHF                                ; 004287cb
    JA 0x004288b2                       ; 004287cc
        ;   XREF to: 004288b2 (CONDITIONAL_JUMP)  ; LAB_004288b2
    FLD float ptr [ESP + 0x4]           ; 004287d2
    FABS                                ; 004287d6
    FCOMP double ptr [0x0057a0ca]       ; 004287d8 | DOUBLE_0057a0ca
    FNSTSW AX                           ; 004287de
    SAHF                                ; 004287e0
    JA 0x004289ce                       ; 004287e1
        ;   XREF to: 004289ce (CONDITIONAL_JUMP)  ; LAB_004289ce
    FLD float ptr [ESP]                 ; 004287e7
    FABS                                ; 004287ea
    FCOMP double ptr [0x0057a0d2]       ; 004287ec | DOUBLE_0057a0d2
    FNSTSW AX                           ; 004287f2
    SAHF                                ; 004287f4
    JA 0x004289ce                       ; 004287f5
        ;   XREF to: 004289ce (CONDITIONAL_JUMP)  ; LAB_004289ce
    FLD float ptr [ESP + 0x8]           ; 004287fb
    FABS                                ; 004287ff
    FCOMP double ptr [0x0057a0d2]       ; 00428801 | DOUBLE_0057a0d2
    FNSTSW AX                           ; 00428807
    SAHF                                ; 00428809
    JA 0x004289ce                       ; 0042880a
        ;   XREF to: 004289ce (CONDITIONAL_JUMP)  ; LAB_004289ce
    FLD float ptr [ESP]                 ; 00428810
    FMUL ST0                            ; 00428813
    FLD float ptr [ESP + 0x8]           ; 00428815
    FMUL ST0                            ; 00428819
    FADDP                               ; 0042881b
    FSQRT                               ; 0042881d
    FLD float ptr [EBP + 0x20]          ; 0042881f
    XOR EDX,EDX                         ; 00428822
    FLDZ                                ; 00428824
    MOV dword ptr [ESP + 0x4],EDX       ; 00428826
    FXCH ST2                            ; 0042882a
    FSTP float ptr [ESP + 0x24]         ; 0042882c
    FXCH                                ; 00428830
    FCOMPP                              ; 00428832
    FNSTSW AX                           ; 00428834
    SAHF                                ; 00428836
    JA 0x004289f1                       ; 00428837
        ;   XREF to: 004289f1 (CONDITIONAL_JUMP)  ; LAB_004289f1
    FLD float ptr [EBP + 0x1c]          ; 0042883d
        ;   Label: LAB_0042883d
    FMUL double ptr [0x0057a0da]        ; 00428840 | DOUBLE_0057a0da
    MOV EAX,dword ptr [EBX]             ; 00428846
    FSTP float ptr [ESP + 0x30]         ; 00428848
    TEST EAX,EAX                        ; 0042884c
    JNZ 0x004289fd                      ; 0042884e
        ;   XREF to: 004289fd (CONDITIONAL_JUMP)  ; LAB_004289fd
    FLD float ptr [EBP + 0x1c]          ; 00428854
    FADD float ptr [ESP + 0x30]         ; 00428857
    FSTP float ptr [EBP + 0x1c]         ; 0042885b
        ;   Label: LAB_0042885b
    FLD float ptr [EBP + 0x1c]          ; 0042885e
        ;   Label: LAB_0042885e
    FCOMP double ptr [0x0057a0e2]       ; 00428861 | DOUBLE_0057a0e2
    FNSTSW AX                           ; 00428867
    SAHF                                ; 00428869
    JNC 0x00428873                      ; 0042886a
        ;   XREF to: 00428873 (CONDITIONAL_JUMP)  ; LAB_00428873
    MOV dword ptr [EBP + 0x1c],0x3c23d70a ; 0042886c
    FLD float ptr [ESP + 0x24]          ; 00428873
        ;   Label: LAB_00428873
    FCOMP float ptr [EBP + 0x1c]        ; 00428877
    FNSTSW AX                           ; 0042887a
    SAHF                                ; 0042887c
    JNC 0x00428a34                      ; 0042887d
        ;   XREF to: 00428a34 (CONDITIONAL_JUMP)  ; LAB_00428a34
    MOV dword ptr [EBX],0x0             ; 00428883
    MOV ESP,EBP                         ; 00428889
    POP EBP                             ; 0042888b
    POP EDI                             ; 0042888c
    POP ESI                             ; 0042888d
    POP EBX                             ; 0042888e
    RET                                 ; 0042888f
    PUSH ESI                            ; 00428890
        ;   Label: LAB_00428890
    PUSH 0x57a053                       ; 00428891 | = "%s tried to follow NULL actor!\n"
    MOV ECX,dword ptr [0x005ad350]      ; 00428896 | PTR_DAT_005ad350
    PUSH ECX                            ; 0042889c | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 0042889d
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0xc                         ; 004288a2
    MOV dword ptr [EBX],0x3             ; 004288a5
    MOV ESP,EBP                         ; 004288ab
    POP EBP                             ; 004288ad
    POP EDI                             ; 004288ae
    POP ESI                             ; 004288af
    POP EBX                             ; 004288b0
    RET                                 ; 004288b1
    MOV EAX,ESP                         ; 004288b2
        ;   Label: LAB_004288b2
    PUSH EAX                            ; 004288b4
    LEA EAX,[ESP + 0x10]                ; 004288b5
    PUSH EAX                            ; 004288b9
    XOR EDI,EDI                         ; 004288ba
    PUSH ESI                            ; 004288bc
    MOV dword ptr [ESP + 0x10],EDI      ; 004288bd
    CALL core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220 ; 004288c1
        ;   XREF to: 0040a220 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_inverseTransformVector_FUN_0040a220(CDemonActor * this_ptr, CVector3f * output_vector, CVector3f * input_vector)
    ADD ESP,0xc                         ; 004288c6
    PUSH EAX                            ; 004288c9
    LEA EAX,[ESP + 0x1c]                ; 004288ca
    PUSH EAX                            ; 004288ce
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004288cf
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    MOV EDX,dword ptr [EAX + 0x4]       ; 004288d4
    MOV dword ptr [ESI + 0x2410],EDX    ; 004288d7
    MOV EAX,dword ptr [EBX]             ; 004288dd
    ADD ESP,0x8                         ; 004288df
    TEST EAX,EAX                        ; 004288e2
    JNZ 0x00428985                      ; 004288e4
        ;   XREF to: 00428985 (CONDITIONAL_JUMP)  ; LAB_00428985
    FLD float ptr [ESI + 0x2410]        ; 004288ea
    FABS                                ; 004288f0
    FCOMP double ptr [0x0057a0f2]       ; 004288f2 | DOUBLE_0057a0f2
    FNSTSW AX                           ; 004288f8
    SAHF                                ; 004288fa
    JBE 0x004289aa                      ; 004288fb
        ;   XREF to: 004289aa (CONDITIONAL_JUMP)  ; LAB_004289aa
    MOV dword ptr [EBX],0x1             ; 00428901
        ;   Label: LAB_00428901
    MOV EAX,dword ptr [ESI + 0x2410]    ; 00428907
        ;   Label: LAB_00428907
    MOV dword ptr [ESP + 0x34],EAX      ; 0042890d
    MOV EAX,dword ptr [ESI + 0x2430]    ; 00428911
    PUSH dword ptr [ESP + 0x34]         ; 00428917
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042891b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 0042891f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040df00(float angle_radians)
    MOV dword ptr [ESP + 0x40],EAX      ; 00428924
    FLD float ptr [ESP + 0x40]          ; 00428928
    ADD ESP,0x4                         ; 0042892c
    FLD float ptr [ESP + 0x38]          ; 0042892f
    FXCH                                ; 00428933
    FST float ptr [ESP + 0x34]          ; 00428935
    FXCH                                ; 00428939
    FCHS                                ; 0042893b
    FSTP float ptr [ESP + 0x28]         ; 0042893d
    FCOMP float ptr [ESP + 0x28]        ; 00428941
    FNSTSW AX                           ; 00428945
    SAHF                                ; 00428947
    JNC 0x004289b5                      ; 00428948
        ;   XREF to: 004289b5 (CONDITIONAL_JUMP)  ; LAB_004289b5
    MOV EAX,dword ptr [ESP + 0x28]      ; 0042894a
    MOV dword ptr [ESP + 0x2c],EAX      ; 0042894e
        ;   Label: LAB_0042894e
    MOV EAX,dword ptr [ESP + 0x2c]      ; 00428952
    MOV dword ptr [ESI + 0x2410],EAX    ; 00428956
    MOV dword ptr [ESI + 0x23ac],0x0    ; 0042895c
        ;   Label: LAB_0042895c
    MOV EAX,dword ptr [ESI + 0x23ac]    ; 00428966
    MOV dword ptr [ESI + 0x23a8],EAX    ; 0042896c
    MOV EAX,dword ptr [ESI + 0x23a8]    ; 00428972
    MOV dword ptr [ESI + 0x23a4],EAX    ; 00428978
    MOV ESP,EBP                         ; 0042897e
    POP EBP                             ; 00428980
    POP EDI                             ; 00428981
    POP ESI                             ; 00428982
    POP EBX                             ; 00428983
    RET                                 ; 00428984
    FLD float ptr [ESI + 0x2410]        ; 00428985
        ;   Label: LAB_00428985
    FABS                                ; 0042898b
    FCOMP double ptr [0x0057a0ea]       ; 0042898d | DOUBLE_0057a0ea
    FNSTSW AX                           ; 00428993
    SAHF                                ; 00428995
    JNC 0x00428901                      ; 00428996
        ;   XREF to: 00428901 (CONDITIONAL_JUMP)  ; LAB_00428901
    MOV dword ptr [EBX],EDI             ; 0042899c
    MOV dword ptr [ESI + 0x2410],0x0    ; 0042899e
        ;   Label: LAB_0042899e
    JMP 0x0042895c                      ; 004289a8
        ;   XREF to: 0042895c (UNCONDITIONAL_JUMP)  ; LAB_0042895c
    CMP dword ptr [EBX],0x1             ; 004289aa
        ;   Label: LAB_004289aa
    JZ 0x00428907                       ; 004289ad
        ;   XREF to: 00428907 (CONDITIONAL_JUMP)  ; LAB_00428907
    JMP 0x0042899e                      ; 004289b3
        ;   XREF to: 0042899e (UNCONDITIONAL_JUMP)  ; LAB_0042899e
    FLD float ptr [ESP + 0x34]          ; 004289b5
        ;   Label: LAB_004289b5
    FCOMP float ptr [ESP + 0x38]        ; 004289b9
    FNSTSW AX                           ; 004289bd
    SAHF                                ; 004289bf
    JBE 0x004289c8                      ; 004289c0
        ;   XREF to: 004289c8 (CONDITIONAL_JUMP)  ; LAB_004289c8
    MOV EAX,dword ptr [ESP + 0x38]      ; 004289c2
    JMP 0x0042894e                      ; 004289c6
        ;   XREF to: 0042894e (UNCONDITIONAL_JUMP)  ; LAB_0042894e
    MOV EAX,dword ptr [ESP + 0x34]      ; 004289c8
        ;   Label: LAB_004289c8
    JMP 0x0042894e                      ; 004289cc
        ;   XREF to: 0042894e (UNCONDITIONAL_JUMP)  ; LAB_0042894e
    PUSH EDI                            ; 004289ce
        ;   Label: LAB_004289ce
    PUSH ESI                            ; 004289cf
    PUSH 0x57a073                       ; 004289d0 | = "%s confused while following %s\n"
    MOV ECX,dword ptr [0x005ad350]      ; 004289d5 | PTR_DAT_005ad350
    PUSH ECX                            ; 004289db | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004289dc
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 004289e1
    MOV dword ptr [EBX],0x3             ; 004289e4
    MOV ESP,EBP                         ; 004289ea
    POP EBP                             ; 004289ec
    POP EDI                             ; 004289ed
    POP ESI                             ; 004289ee
    POP EBX                             ; 004289ef
    RET                                 ; 004289f0
    MOV dword ptr [EBP + 0x20],0x7149f2ca ; 004289f1
        ;   Label: LAB_004289f1
    JMP 0x0042883d                      ; 004289f8
        ;   XREF to: 0042883d (UNCONDITIONAL_JUMP)  ; LAB_0042883d
    CMP EAX,0x1                         ; 004289fd
        ;   Label: LAB_004289fd
    JNZ 0x00428a1c                      ; 00428a00
        ;   XREF to: 00428a1c (CONDITIONAL_JUMP)  ; LAB_00428a1c
    FLD float ptr [EBP + 0x1c]          ; 00428a02
    FLD float ptr [ESP + 0x30]          ; 00428a05
    FLD float ptr [EBP + 0x20]          ; 00428a09
    FADD ST0,ST1                        ; 00428a0c
    FXCH ST2                            ; 00428a0e
    FSUBRP                              ; 00428a10
    FXCH                                ; 00428a12
    FSTP float ptr [EBP + 0x20]         ; 00428a14
    JMP 0x0042885b                      ; 00428a17
        ;   XREF to: 0042885b (UNCONDITIONAL_JUMP)  ; LAB_0042885b
    CMP EAX,0x2                         ; 00428a1c
        ;   Label: LAB_00428a1c
    JNZ 0x0042885e                      ; 00428a1f
        ;   XREF to: 0042885e (CONDITIONAL_JUMP)  ; LAB_0042885e
    FLD float ptr [EBP + 0x20]          ; 00428a25
    FSUB float ptr [ESP + 0x30]         ; 00428a28
    FSTP float ptr [EBP + 0x20]         ; 00428a2c
    JMP 0x0042885e                      ; 00428a2f
        ;   XREF to: 0042885e (UNCONDITIONAL_JUMP)  ; LAB_0042885e
    PUSH 0x0                            ; 00428a34
        ;   Label: LAB_00428a34
    PUSH 0x0                            ; 00428a36
    PUSH 0x2dd1184                      ; 00428a38 | DAT_02dd1184
    MOV EAX,dword ptr [EDI + 0x14c]     ; 00428a3d
    PUSH EDI                            ; 00428a43
    CALL dword ptr [EAX + 0xbc]         ; 00428a44
    ADD ESP,0x4                         ; 00428a4a
    PUSH EAX                            ; 00428a4d
    LEA EAX,[EDI + 0x20]                ; 00428a4e
    PUSH EAX                            ; 00428a51
    PUSH ESI                            ; 00428a52
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00428a53
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00428a58
    TEST EAX,EAX                        ; 00428a5b
    JL 0x00428a78                       ; 00428a5d
        ;   XREF to: 00428a78 (CONDITIONAL_JUMP)  ; LAB_00428a78
    FLD float ptr [ESP + 0x24]          ; 00428a5f
    FCOMP float ptr [EBP + 0x20]        ; 00428a63
    FNSTSW AX                           ; 00428a66
    SAHF                                ; 00428a68
    JBE 0x00428a9b                      ; 00428a69
        ;   XREF to: 00428a9b (CONDITIONAL_JUMP)  ; LAB_00428a9b
    MOV dword ptr [EBX],0x2             ; 00428a6b
    MOV ESP,EBP                         ; 00428a71
    POP EBP                             ; 00428a73
    POP EDI                             ; 00428a74
    POP ESI                             ; 00428a75
    POP EBX                             ; 00428a76
    RET                                 ; 00428a77
    PUSH EDI                            ; 00428a78
        ;   Label: LAB_00428a78
    PUSH ESI                            ; 00428a79
    PUSH 0x57a093                       ; 00428a7a | = "%s confused after pathmap call while ..."
    MOV EDX,dword ptr [0x005ad350]      ; 00428a7f | PTR_DAT_005ad350
    PUSH EDX                            ; 00428a85 | DAT_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00428a86
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_CConsole_printf_FUN_0043ac60()
    ADD ESP,0x10                        ; 00428a8b
    MOV dword ptr [EBX],0x3             ; 00428a8e
    MOV ESP,EBP                         ; 00428a94
    POP EBP                             ; 00428a96
    POP EDI                             ; 00428a97
    POP ESI                             ; 00428a98
    POP EBX                             ; 00428a99
    RET                                 ; 00428a9a
    MOV dword ptr [EBX],0x1             ; 00428a9b
        ;   Label: LAB_00428a9b
    MOV ESP,EBP                         ; 00428aa1
    POP EBP                             ; 00428aa3
    POP EDI                             ; 00428aa4
    POP ESI                             ; 00428aa5
    POP EBX                             ; 00428aa6
    RET                                 ; 00428aa7

