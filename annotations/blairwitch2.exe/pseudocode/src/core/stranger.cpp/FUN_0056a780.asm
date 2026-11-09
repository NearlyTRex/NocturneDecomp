; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_0056a780(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; Local Variables:
; undefined8       Stack[-0x158]:8  local_158
; undefined        Stack[-0x150]:1  local_150
; undefined        Stack[-0x138]:1  local_138
; undefined        Stack[-0x114]:1  local_114
; undefined        Stack[-0xf0]:1  local_f0
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_FUN_0056e4d0 at 0056e765
;
; Referenced Globals:
;   undefined4 s_Ladder_dot_f_005ebaec+1
;   undefined4 DAT_005ebb05
;   undefined4 DAT_005ebb0d
;   undefined4 DAT_005ebb15
;   undefined4 DAT_005ebb1d
;   undefined4 DAT_005ebb25
;   undefined4 DAT_005ebb2d
;   CConsole* g_CConsolePtr = 007c158c
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 g_CLadderClassInfo.name_hash
;   undefined4 g_CDemonSetInstance.field1364324_0x14d164
;   undefined4 g_CDemonSetInstance.field1364328_0x14d168
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_FUN_0042a5a0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_vecdir.cpp_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056a780
        ;   Label: core_stranger.cpp_FUN_0056a780
    PUSH ESI                            ; 0056a781
    PUSH EDI                            ; 0056a782
    PUSH EBP                            ; 0056a783
    MOV EBP,ESP                         ; 0056a784
    SUB ESP,0x150                       ; 0056a786
    AND ESP,0xfffffff8                  ; 0056a78c
    PUSH 0x0                            ; 0056a78f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a791
    PUSH EAX                            ; 0056a794
    MOV dword ptr [EAX + 0x25694],0x0   ; 0056a795
    CALL core_charactr.cpp_FUN_0042a5a0 ; 0056a79f
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0x154],EAX     ; 0056a7a4
    FLD float ptr [ESP + 0x154]         ; 0056a7ab
    ADD ESP,0x8                         ; 0056a7b2
    FCOMP double ptr [0x005ebb05]       ; 0056a7b5 | DAT_005ebb05
    FNSTSW AX                           ; 0056a7bb
    SAHF                                ; 0056a7bd
    JC 0x0056a802                       ; 0056a7be
        ;   XREF to: 0056a802 (CONDITIONAL_JUMP)  ; LAB_0056a802
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a7c0
    MOV ECX,dword ptr [EAX + 0x2620]    ; 0056a7c3
    TEST ECX,ECX                        ; 0056a7c9
    JNZ 0x0056a802                      ; 0056a7cb
        ;   XREF to: 0056a802 (CONDITIONAL_JUMP)  ; LAB_0056a802
    CMP dword ptr [EAX + 0x2698],0x0    ; 0056a7cd
    JNZ 0x0056a802                      ; 0056a7d4
        ;   XREF to: 0056a802 (CONDITIONAL_JUMP)  ; LAB_0056a802
    MOV dword ptr [ESP + 0x140],ECX     ; 0056a7d6
    ADD EAX,0x20                        ; 0056a7dd
    MOV dword ptr [ESP + 0x144],ECX     ; 0056a7e0
    MOV dword ptr [ESP + 0x138],EAX     ; 0056a7e7
    MOV EAX,[0x0061b5a8]                ; 0056a7ee | g_CDemonSetPtr
        ;   Label: LAB_0056a7ee
    MOV EBX,dword ptr [ESP + 0x140]     ; 0056a7f3
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0056a7fa | g_CDemonSetInstance.field1364324_0x14d164
    JL 0x0056a82d                       ; 0056a800
        ;   XREF to: 0056a82d (CONDITIONAL_JUMP)  ; LAB_0056a82d
    XOR EAX,EAX                         ; 0056a802
        ;   Label: LAB_0056a802
    MOV ESP,EBP                         ; 0056a804
    POP EBP                             ; 0056a806
    POP EDI                             ; 0056a807
    POP ESI                             ; 0056a808
    POP EBX                             ; 0056a809
    RET                                 ; 0056a80a
    MOV ECX,dword ptr [ESP + 0x140]     ; 0056a80b
        ;   Label: LAB_0056a80b
    MOV EDX,dword ptr [ESP + 0x144]     ; 0056a812
    INC ECX                             ; 0056a819
    ADD EDX,0x4                         ; 0056a81a
    MOV dword ptr [ESP + 0x140],ECX     ; 0056a81d
    MOV dword ptr [ESP + 0x144],EDX     ; 0056a824
    JMP 0x0056a7ee                      ; 0056a82b
        ;   XREF to: 0056a7ee (UNCONDITIONAL_JUMP)  ; LAB_0056a7ee
    MOV ECX,dword ptr [ESP + 0x144]     ; 0056a82d
        ;   Label: LAB_0056a82d
    MOV EBX,dword ptr [0x01d02fc0]      ; 0056a834 | g_CLadderClassInfo.name_hash
    ADD EAX,ECX                         ; 0056a83a
    PUSH EBX                            ; 0056a83c
    MOV EAX,dword ptr [EAX + 0x14d168]  ; 0056a83d | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EAX                            ; 0056a843
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056a844
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c8f0()
    ADD ESP,0x8                         ; 0056a849
    MOV EBX,EAX                         ; 0056a84c
    MOV dword ptr [ESP + 0x148],EAX     ; 0056a84e
    TEST EAX,EAX                        ; 0056a855
    JZ 0x0056a80b                       ; 0056a857
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    FLD float ptr [EBX + 0x24]          ; 0056a859
    FADD float ptr [EAX + 0x434]        ; 0056a85c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a862
    FSUBR float ptr [EAX + 0x24]        ; 0056a865
    FABS                                ; 0056a868
    FCOMP double ptr [0x005ebb15]       ; 0056a86a | DAT_005ebb15
    FNSTSW AX                           ; 0056a870
    SAHF                                ; 0056a872
    JA 0x0056a80b                       ; 0056a873
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV ESI,dword ptr [ESP + 0x138]     ; 0056a875
    PUSH ESI                            ; 0056a87c
    PUSH EBX                            ; 0056a87d
    LEA ESI,[ESP + 0x54]                ; 0056a87e
    LEA EDI,[ESP + 0x78]                ; 0056a882
    CALL core_actor.cpp_FUN_00408de0    ; 0056a886
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x54]                ; 0056a88b
    ADD ESP,0x8                         ; 0056a88f
    MOVSD ES:EDI,ESI                    ; 0056a892
    MOVSD ES:EDI,ESI                    ; 0056a893
    MOVSD ES:EDI,ESI                    ; 0056a894
    FLD float ptr [ESP + 0x78]          ; 0056a895
    FST double ptr [ESP + 0x8]          ; 0056a899
    FABS                                ; 0056a89d
    FCOMP double ptr [0x005ebb1d]       ; 0056a89f | DAT_005ebb1d
    FNSTSW AX                           ; 0056a8a5
    SAHF                                ; 0056a8a7
    JA 0x0056a80b                       ; 0056a8a8
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    FLDZ                                ; 0056a8ae
    FCOMP double ptr [ESP + 0x8]        ; 0056a8b0
    FNSTSW AX                           ; 0056a8b4
    SAHF                                ; 0056a8b6
    JC 0x0056a80b                       ; 0056a8b7
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    PUSH EBX                            ; 0056a8bd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056a8be
    LEA ESI,[ESP + 0x14]                ; 0056a8c4
    LEA EDI,[ESP + 0x2c]                ; 0056a8c8
    CALL dword ptr [EAX + 0x24]         ; 0056a8cc
    MOV ECX,0x6                         ; 0056a8cf
    LEA ESI,[ESP + 0x14]                ; 0056a8d4
    ADD ESP,0x4                         ; 0056a8d8
    MOVSD.REP ES:EDI,ESI                ; 0056a8db
    FLD float ptr [ESP + 0x70]          ; 0056a8dd
    FCOMP float ptr [ESP + 0x34]        ; 0056a8e1
    FNSTSW AX                           ; 0056a8e5
    SAHF                                ; 0056a8e7
    JBE 0x0056a909                      ; 0056a8e8
        ;   XREF to: 0056a909 (CONDITIONAL_JUMP)  ; LAB_0056a909
    FLD float ptr [ESP + 0x34]          ; 0056a8ea
    FLD1                                ; 0056a8ee
    FADDP                               ; 0056a8f0
    FLD float ptr [ESP + 0x70]          ; 0056a8f2
    FCOMPP                              ; 0056a8f6
    FNSTSW AX                           ; 0056a8f8
    SAHF                                ; 0056a8fa
    JA 0x0056a80b                       ; 0056a8fb
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV EAX,dword ptr [ESP + 0x34]      ; 0056a901
    MOV dword ptr [ESP + 0x70],EAX      ; 0056a905
    FLD float ptr [ESP + 0x70]          ; 0056a909
        ;   Label: LAB_0056a909
    FCOMP float ptr [ESP + 0x28]        ; 0056a90d
    FNSTSW AX                           ; 0056a911
    SAHF                                ; 0056a913
    JNC 0x0056a937                      ; 0056a914
        ;   XREF to: 0056a937 (CONDITIONAL_JUMP)  ; LAB_0056a937
    FLD float ptr [ESP + 0x28]          ; 0056a916
    FADD double ptr [0x005ebb25]        ; 0056a91a | DAT_005ebb25
    FLD float ptr [ESP + 0x70]          ; 0056a920
    FCOMPP                              ; 0056a924
    FNSTSW AX                           ; 0056a926
    SAHF                                ; 0056a928
    JC 0x0056a80b                       ; 0056a929
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV EAX,dword ptr [ESP + 0x28]      ; 0056a92f
    MOV dword ptr [ESP + 0x70],EAX      ; 0056a933
    FLD float ptr [ESP + 0x28]          ; 0056a937
        ;   Label: LAB_0056a937
    FLD float ptr [ESP + 0x2c]          ; 0056a93b
    FLD float ptr [ESP + 0x30]          ; 0056a93f
    LEA EDI,[ESP + 0x94]                ; 0056a943
    LEA ESI,[ESP + 0xc4]                ; 0056a94a
    FXCH ST2                            ; 0056a951
    FADD float ptr [ESP + 0x34]         ; 0056a953
    FXCH                                ; 0056a957
    FADD float ptr [ESP + 0x38]         ; 0056a959
    FXCH ST2                            ; 0056a95d
    FADD float ptr [ESP + 0x3c]         ; 0056a95f
    FXCH                                ; 0056a963
    FSTP float ptr [ESP + 0xc4]         ; 0056a965
    FXCH                                ; 0056a96c
    FSTP float ptr [ESP + 0xc8]         ; 0056a96e
    FSTP float ptr [ESP + 0xcc]         ; 0056a975
    MOVSD ES:EDI,ESI                    ; 0056a97c
    MOVSD ES:EDI,ESI                    ; 0056a97d
    MOVSD ES:EDI,ESI                    ; 0056a97e
    FLD float ptr [0x005ebb0d]          ; 0056a97f | DAT_005ebb0d
    FLD float ptr [ESP + 0x94]          ; 0056a985
    FMUL ST1                            ; 0056a98c
    FLD float ptr [ESP + 0x98]          ; 0056a98e
    FMUL ST2                            ; 0056a995
    FLD float ptr [ESP + 0x9c]          ; 0056a997
    FMULP ST3                           ; 0056a99e
    LEA EDI,[ESP + 0x40]                ; 0056a9a0
    LEA ESI,[ESP + 0x58]                ; 0056a9a4
    FXCH                                ; 0056a9a8
    FSTP float ptr [ESP + 0x58]         ; 0056a9aa
    FSTP float ptr [ESP + 0x5c]         ; 0056a9ae
    FSTP float ptr [ESP + 0x60]         ; 0056a9b2
    MOVSD ES:EDI,ESI                    ; 0056a9b6
    MOVSD ES:EDI,ESI                    ; 0056a9b7
    MOVSD ES:EDI,ESI                    ; 0056a9b8
    MOV EAX,dword ptr [ESP + 0x48]      ; 0056a9b9
    MOV dword ptr [ESP + 0x78],EAX      ; 0056a9bd
    LEA EAX,[ESP + 0x70]                ; 0056a9c1
    PUSH EAX                            ; 0056a9c5
    MOV EDI,dword ptr [ESP + 0x14c]     ; 0056a9c6
    PUSH EDI                            ; 0056a9cd
    LEA ESI,[ESP + 0xc0]                ; 0056a9ce
    LEA EBX,[ESP + 0x78]                ; 0056a9d5
    CALL core_actor.cpp_FUN_00408d70    ; 0056a9d9
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA EDI,[ESP + 0xe4]                ; 0056a9de
    LEA ESI,[ESP + 0xc0]                ; 0056a9e5
    ADD ESP,0x8                         ; 0056a9ec
    LEA EAX,[ESP + 0xdc]                ; 0056a9ef
    MOVSD ES:EDI,ESI                    ; 0056a9f6
    MOVSD ES:EDI,ESI                    ; 0056a9f7
    MOVSD ES:EDI,ESI                    ; 0056a9f8
    CMP EBX,EAX                         ; 0056a9f9
    JZ 0x0056aa1e                       ; 0056a9fb
        ;   XREF to: 0056aa1e (CONDITIONAL_JUMP)  ; LAB_0056aa1e
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0056a9fd
    MOV dword ptr [ESP + 0x70],EAX      ; 0056aa04
    MOV EAX,dword ptr [ESP + 0xe0]      ; 0056aa08
    MOV dword ptr [ESP + 0x74],EAX      ; 0056aa0f
    MOV EAX,dword ptr [ESP + 0xe4]      ; 0056aa13
    MOV dword ptr [ESP + 0x78],EAX      ; 0056aa1a
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056aa1e
        ;   Label: LAB_0056aa1e
    FLD float ptr [ESP + 0x74]          ; 0056aa25
    FADD float ptr [EAX + 0x434]        ; 0056aa29
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056aa2f
    FSTP float ptr [ESP + 0x74]         ; 0056aa32
    MOV EAX,dword ptr [EAX + 0x44]      ; 0056aa36
    MOV dword ptr [ESP + 0x128],EAX     ; 0056aa39
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056aa40
    MOV EAX,dword ptr [EAX + 0x50]      ; 0056aa43
    MOV dword ptr [ESP + 0x12c],EAX     ; 0056aa46
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056aa4d
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0056aa50
    MOV dword ptr [ESP + 0x124],EAX     ; 0056aa53
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056aa5a
    MOV EAX,dword ptr [EAX + 0x44]      ; 0056aa61
    MOV dword ptr [ESP + 0x130],EAX     ; 0056aa64
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056aa6b
    MOV EAX,dword ptr [EAX + 0x50]      ; 0056aa72
    MOV dword ptr [ESP + 0x134],EAX     ; 0056aa75
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056aa7c
    MOV EAX,dword ptr [EAX + 0x5c]      ; 0056aa83
    FLD double ptr [0x005ebb2d]         ; 0056aa86 | DAT_005ebb2d
    MOV dword ptr [ESP + 0x13c],EAX     ; 0056aa8c
    FCOS                                ; 0056aa93
    FLD float ptr [ESP + 0x12c]         ; 0056aa95
    FMUL float ptr [ESP + 0x134]        ; 0056aa9c
    FLD float ptr [ESP + 0x128]         ; 0056aaa3
    FMUL float ptr [ESP + 0x130]        ; 0056aaaa
    FADDP                               ; 0056aab1
    FLD float ptr [ESP + 0x124]         ; 0056aab3
    FMUL float ptr [ESP + 0x13c]        ; 0056aaba
    FADDP                               ; 0056aac1
    FABS                                ; 0056aac3
    FSTP double ptr [ESP]               ; 0056aac5
    FCOMP double ptr [ESP]              ; 0056aac8
    FNSTSW AX                           ; 0056aacb
    SAHF                                ; 0056aacd
    JA 0x0056a80b                       ; 0056aace
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056aad4
    ADD EAX,0x20                        ; 0056aadb
    PUSH EAX                            ; 0056aade
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056aadf
    PUSH EAX                            ; 0056aae2
    LEA ESI,[ESP + 0xf0]                ; 0056aae3
    LEA EDI,[ESP + 0x90]                ; 0056aaea
    CALL core_actor.cpp_FUN_00408de0    ; 0056aaf1
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xf0]                ; 0056aaf6
    ADD ESP,0x8                         ; 0056aafd
    MOVSD ES:EDI,ESI                    ; 0056ab00
    MOVSD ES:EDI,ESI                    ; 0056ab01
    MOVSD ES:EDI,ESI                    ; 0056ab02
    FLD float ptr [ESP + 0x90]          ; 0056ab03
    FLDZ                                ; 0056ab0a
    FCOMPP                              ; 0056ab0c
    FNSTSW AX                           ; 0056ab0e
    SAHF                                ; 0056ab10
    JNC 0x0056a80b                      ; 0056ab11
        ;   XREF to: 0056a80b (CONDITIONAL_JUMP)  ; LAB_0056a80b
    MOV EDX,dword ptr [ESP + 0x4]       ; 0056ab17
    PUSH EDX                            ; 0056ab1b
    MOV ECX,dword ptr [ESP + 0x4]       ; 0056ab1c
    PUSH ECX                            ; 0056ab20
    PUSH 0x5ebaed                       ; 0056ab21 | s_Ladder_dot_f_005ebaec+1
    MOV EBX,dword ptr [0x00609ed0]      ; 0056ab26 | g_CConsolePtr
    PUSH EBX                            ; 0056ab2c | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0056ab2d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0x10                        ; 0056ab32
    PUSH 0x1                            ; 0056ab35
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056ab37
    PUSH 0x2b                           ; 0056ab3a
    ADD EAX,0x2b4                       ; 0056ab3c
    MOV EBX,dword ptr [ESP + 0x150]     ; 0056ab41
    PUSH EAX                            ; 0056ab48
    MOV dword ptr [EAX + 0x253e0],EBX   ; 0056ab49
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056ab4f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056ab54
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056ab57
    MOV EBX,EAX                         ; 0056ab5a
    MOV dword ptr [EAX + 0x10a74],0x0   ; 0056ab5c
    MOV EAX,dword ptr [ESP + 0x148]     ; 0056ab66
    MOV EDI,0xbfc00000                  ; 0056ab6d
    MOV EAX,dword ptr [EAX + 0x434]     ; 0056ab72
    XOR ESI,ESI                         ; 0056ab78
    MOV dword ptr [ESP + 0x80],EAX      ; 0056ab7a
    LEA EAX,[ESP + 0x7c]                ; 0056ab81
    MOV dword ptr [ESP + 0x7c],ESI      ; 0056ab85
    PUSH EAX                            ; 0056ab89
    MOV EAX,dword ptr [ESP + 0x14c]     ; 0056ab8a
    MOV dword ptr [ESP + 0x88],EDI      ; 0056ab91
    PUSH EAX                            ; 0056ab98
    LEA ESI,[ESP + 0xb4]                ; 0056ab99
    LEA EDI,[ESP + 0xa8]                ; 0056aba0
    CALL core_actor.cpp_FUN_00408d70    ; 0056aba7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0xb4]                ; 0056abac
    ADD ESP,0x8                         ; 0056abb3
    ADD EBX,0x258c0                     ; 0056abb6
    MOVSD ES:EDI,ESI                    ; 0056abbc
    MOVSD ES:EDI,ESI                    ; 0056abbd
    MOVSD ES:EDI,ESI                    ; 0056abbe
    LEA EAX,[ESP + 0xd0]                ; 0056abbf
    FLD float ptr [ESP + 0xa0]          ; 0056abc6
    FLD float ptr [ESP + 0xa4]          ; 0056abcd
    FLD float ptr [ESP + 0xa8]          ; 0056abd4
    LEA EDI,[ESP + 0xd0]                ; 0056abdb
    LEA ESI,[ESP + 0x10c]               ; 0056abe2
    FXCH ST2                            ; 0056abe9
    FSUB float ptr [EBX + 0xfffda760]   ; 0056abeb
    FXCH                                ; 0056abf1
    FSUB float ptr [EBX + 0xfffda764]   ; 0056abf3
    FXCH ST2                            ; 0056abf9
    FSUB float ptr [EBX + 0xfffda768]   ; 0056abfb
    FXCH                                ; 0056ac01
    FSTP float ptr [ESP + 0x10c]        ; 0056ac03
    FXCH                                ; 0056ac0a
    FSTP float ptr [ESP + 0x110]        ; 0056ac0c
    FSTP float ptr [ESP + 0x114]        ; 0056ac13
    MOVSD ES:EDI,ESI                    ; 0056ac1a
    MOVSD ES:EDI,ESI                    ; 0056ac1b
    MOVSD ES:EDI,ESI                    ; 0056ac1c
    CMP EBX,EAX                         ; 0056ac1d
    JZ 0x0056ac3e                       ; 0056ac1f
        ;   XREF to: 0056ac3e (CONDITIONAL_JUMP)  ; LAB_0056ac3e
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0056ac21
    MOV dword ptr [EBX],EAX             ; 0056ac28
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0056ac2a
    MOV dword ptr [EBX + 0x4],EAX       ; 0056ac31
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0056ac34
    MOV dword ptr [EBX + 0x8],EAX       ; 0056ac3b
    FLD float ptr [ESP + 0x70]          ; 0056ac3e
        ;   Label: LAB_0056ac3e
    FLD float ptr [ESP + 0x74]          ; 0056ac42
    FLD float ptr [ESP + 0x78]          ; 0056ac46
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056ac4a
    LEA EDI,[ESP + 0x64]                ; 0056ac4d
    LEA ESI,[ESP + 0x118]               ; 0056ac51
    FXCH ST2                            ; 0056ac58
    FSUB float ptr [EAX + 0x20]         ; 0056ac5a
    FXCH                                ; 0056ac5d
    FSUB float ptr [EAX + 0x24]         ; 0056ac5f
    FXCH ST2                            ; 0056ac62
    FSUB float ptr [EAX + 0x28]         ; 0056ac64
    FXCH                                ; 0056ac67
    FSTP float ptr [ESP + 0x118]        ; 0056ac69
    FXCH                                ; 0056ac70
    FSTP float ptr [ESP + 0x11c]        ; 0056ac72
    FSTP float ptr [ESP + 0x120]        ; 0056ac79
    LEA EAX,[ESP + 0x64]                ; 0056ac80
    MOVSD ES:EDI,ESI                    ; 0056ac84
    MOVSD ES:EDI,ESI                    ; 0056ac85
    MOVSD ES:EDI,ESI                    ; 0056ac86
    PUSH EAX                            ; 0056ac87
    LEA ESI,[ESP + 0xf8]                ; 0056ac88
    LEA EDI,[ESP + 0x104]               ; 0056ac8f
    CALL core_vecdir.cpp_FUN_005838f0   ; 0056ac96
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0xf8]                ; 0056ac9b
    ADD ESP,0x4                         ; 0056aca2
    MOVSD ES:EDI,ESI                    ; 0056aca5
    MOVSD ES:EDI,ESI                    ; 0056aca6
    MOVSD ES:EDI,ESI                    ; 0056aca7
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056aca8
    MOV EAX,dword ptr [ESP + 0x104]     ; 0056acab
    MOV dword ptr [EBX + 0x258d0],0x3f800000 ; 0056acb2
    MOV dword ptr [EBX + 0x258cc],EAX   ; 0056acbc
    MOV EAX,0x1                         ; 0056acc2
    MOV ESP,EBP                         ; 0056acc7
    POP EBP                             ; 0056acc9
    POP EDI                             ; 0056acca
    POP ESI                             ; 0056accb
    POP EBX                             ; 0056accc
    RET                                 ; 0056accd

