; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_00569620(CStranger *this_ptr,char *class_name)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   class_name
; Local Variables:
; undefined        Stack[-0x240]:1  local_240
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_stranger.cpp_FUN_0056e4d0 at 0056e678
;
; Referenced Globals:
;   void* switchdataD_005695f8 = 00569a82
;   void* switchdataD_00569608 = 00569d92
;   undefined4 s_Picking_up_heavy_s_shelf_005eb970+1
;   TerminatedCString s_Picking_up_heavy_s_crate_005eb98c
;   TerminatedCString s_s_out_of_reach_canceling_005eb9a7
;   TerminatedCString s_Picking_up_s_waist_level_005eb9cb
;   TerminatedCString s_Picking_up_s_off_ground_005eb9e6
;   TerminatedCString s_Rummaging_s_005eba00
;   TerminatedCString s_core_stranger_cpp_005eba0e
;   TerminatedCString s_Hell_froze_invalid_pickU_005eba23
;   undefined4 DAT_005eba4d
;   undefined4 DAT_005eba55
;   undefined4 DAT_005eba5d
;   undefined4 DAT_005eba65
;   undefined4 DAT_005eba6d
;   ... and 10 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_FUN_00408de0
;   core_actor.cpp_FUN_0040c840
;   core_charactr.cpp_FUN_0042a5a0
;   core_main.c_FUN_004e4500
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005038a0
;   core_skeleton.cpp_FUN_005469a0
;   core_vecdir.cpp_FUN_005838f0
;   engine_console.cpp_FUN_00436710
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00569620
        ;   Label: core_stranger.cpp_FUN_00569620
    PUSH ESI                            ; 00569621
    PUSH EDI                            ; 00569622
    PUSH EBP                            ; 00569623
    MOV EBP,ESP                         ; 00569624
    SUB ESP,0x274                       ; 00569626
    AND ESP,0xfffffff8                  ; 0056962c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056962f
    FLD float ptr [EAX + 0x256ac]       ; 00569632
    FLDZ                                ; 00569638
    FCOMPP                              ; 0056963a
    FNSTSW AX                           ; 0056963c
    SAHF                                ; 0056963e
    JC 0x0056964e                       ; 0056963f
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569641
    MOV EDX,dword ptr [EAX + 0x25608]   ; 00569644
    TEST EDX,EDX                        ; 0056964a
    JZ 0x00569657                       ; 0056964c
        ;   XREF to: 00569657 (CONDITIONAL_JUMP)  ; LAB_00569657
    XOR EAX,EAX                         ; 0056964e
        ;   Label: LAB_0056964e
    MOV ESP,EBP                         ; 00569650
    POP EBP                             ; 00569652
    POP EDI                             ; 00569653
    POP ESI                             ; 00569654
    POP EBX                             ; 00569655
    RET                                 ; 00569656
    PUSH EDX                            ; 00569657
        ;   Label: LAB_00569657
    PUSH EAX                            ; 00569658
    CALL core_charactr.cpp_FUN_0042a5a0 ; 00569659
        ;   XREF to: 0042a5a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042a5a0()
    MOV dword ptr [ESP + 0x278],EAX     ; 0056965e
    FLD float ptr [ESP + 0x278]         ; 00569665
    ADD ESP,0x8                         ; 0056966c
    FCOMP double ptr [0x005eba4d]       ; 0056966f | DAT_005eba4d
    FNSTSW AX                           ; 00569675
    SAHF                                ; 00569677
    JC 0x0056964e                       ; 00569678
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056967a
    PUSH 0x0                            ; 0056967d
    ADD EAX,0x2b4                       ; 0056967f
    PUSH EAX                            ; 00569684
    CALL core_motion.cpp_FUN_005038a0   ; 00569685
        ;   XREF to: 005038a0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005038a0()
    MOV dword ptr [ESP + 0x278],EAX     ; 0056968a
    FLD float ptr [ESP + 0x278]         ; 00569691
    FLD1                                ; 00569698
    ADD ESP,0x8                         ; 0056969a
    FCOMPP                              ; 0056969d
    FNSTSW AX                           ; 0056969f
    SAHF                                ; 005696a1
    JA 0x0056964e                       ; 005696a2
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    MOV EAX,dword ptr [EBP + 0x14]      ; 005696a4
    MOV EBX,dword ptr [EAX + 0x2620]    ; 005696a7
    TEST EBX,EBX                        ; 005696ad
    JNZ 0x0056964e                      ; 005696af
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    CMP dword ptr [EAX + 0x2698],0x0    ; 005696b1
    JNZ 0x0056964e                      ; 005696b8
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    LEA EAX,[ESP + 0x48]                ; 005696ba
    MOV EDI,0x40800000                  ; 005696be
    ADD EAX,0xc                         ; 005696c3
    MOV dword ptr [ESP + 0x26c],EBX     ; 005696c6
    MOV dword ptr [ESP + 0x268],EAX     ; 005696cd
    MOV EAX,dword ptr [EBP + 0x14]      ; 005696d4
    MOV dword ptr [ESP + 0x264],EBX     ; 005696d7
    ADD EAX,0x20                        ; 005696de
    MOV dword ptr [ESP + 0x254],EDI     ; 005696e1
    MOV dword ptr [ESP + 0x258],EAX     ; 005696e8
    MOV EAX,[0x0061b5a8]                ; 005696ef | g_CDemonSetPtr
        ;   Label: LAB_005696ef
    MOV EDX,dword ptr [ESP + 0x26c]     ; 005696f4
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 005696fb | g_CDemonSetInstance.field1364324_0x14d164
    JGE 0x00569be5                      ; 00569701
        ;   XREF to: 00569be5 (CONDITIONAL_JUMP)  ; LAB_00569be5
    ADD EAX,dword ptr [ESP + 0x264]     ; 00569707
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0056970e | g_CDemonSetInstance.field1364328_0x14d168
    PUSH EBX                            ; 00569714
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00569715
    CALL dword ptr [EAX + 0x9c]         ; 0056971b
    ADD ESP,0x4                         ; 00569721
    TEST EAX,EAX                        ; 00569724
    JZ 0x00569bb9                       ; 00569726
        ;   XREF to: 00569bb9 (CONDITIONAL_JUMP)  ; LAB_00569bb9
    MOV EAX,dword ptr [ESP + 0x26c]     ; 0056972c
        ;   Label: default
    MOV EDI,dword ptr [ESP + 0x264]     ; 00569733
    INC EAX                             ; 0056973a
    ADD EDI,0x4                         ; 0056973b
    MOV dword ptr [ESP + 0x26c],EAX     ; 0056973e
    MOV dword ptr [ESP + 0x264],EDI     ; 00569745
    JMP 0x005696ef                      ; 0056974c
        ;   XREF to: 005696ef (UNCONDITIONAL_JUMP)  ; LAB_005696ef
    MOV EDI,dword ptr [ESI + 0x2698]    ; 0056974e
        ;   Label: caseD_2
    TEST EDI,EDI                        ; 00569754
    JNZ 0x0056972c                      ; 00569756
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV EDX,0x40400000                  ; 00569758
    MOV ECX,0x40000000                  ; 0056975d
    LEA ESI,[ESP + 0x1b0]               ; 00569762
    LEA EAX,[ESP + 0xfc]                ; 00569769
    MOV dword ptr [ESP + 0x1b0],EDI     ; 00569770
    MOV dword ptr [ESP + 0x1b4],EDX     ; 00569777
    MOV dword ptr [ESP + 0x1b8],ECX     ; 0056977e
    CMP EAX,ESI                         ; 00569785
    JZ 0x0056979e                       ; 00569787
        ;   XREF to: 0056979e (CONDITIONAL_JUMP)  ; LAB_0056979e
    MOV dword ptr [ESP + 0x100],EDX     ; 00569789
    MOV dword ptr [ESP + 0x104],ECX     ; 00569790
    MOV dword ptr [ESP + 0xfc],EDI      ; 00569797
    LEA EAX,[ESP + 0xfc]                ; 0056979e
        ;   Label: LAB_0056979e
    PUSH EAX                            ; 005697a5
    MOV ECX,dword ptr [EBP + 0x14]      ; 005697a6
    PUSH ECX                            ; 005697a9
    LEA ESI,[ESP + 0x14c]               ; 005697aa
    LEA EDI,[ESP + 0xd4]                ; 005697b1
    CALL core_actor.cpp_FUN_00408d70    ; 005697b8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x14c]               ; 005697bd
    ADD ESP,0x8                         ; 005697c4
    MOVSD ES:EDI,ESI                    ; 005697c7
    MOVSD ES:EDI,ESI                    ; 005697c8
    MOVSD ES:EDI,ESI                    ; 005697c9
    PUSH EBX                            ; 005697ca
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005697cb
    LEA ESI,[ESP + 0x4]                 ; 005697d1
    LEA EDI,[ESP + 0x4c]                ; 005697d5
    CALL dword ptr [EAX + 0x24]         ; 005697d9
    MOV ECX,0x6                         ; 005697dc
    LEA ESI,[ESP + 0x4]                 ; 005697e1
    ADD ESP,0x4                         ; 005697e5
    MOVSD.REP ES:EDI,ESI                ; 005697e8
    MOV EAX,dword ptr [ESP + 0x268]     ; 005697ea
    FLD float ptr [ESP + 0x48]          ; 005697f1
    FLD float ptr [ESP + 0x4c]          ; 005697f5
    FLD float ptr [ESP + 0x50]          ; 005697f9
    LEA EDI,[ESP + 0x1ec]               ; 005697fd
    LEA ESI,[ESP + 0x198]               ; 00569804
    FXCH ST2                            ; 0056980b
    FADD float ptr [EAX]                ; 0056980d
    FXCH                                ; 0056980f
    FADD float ptr [EAX + 0x4]          ; 00569811
    FXCH ST2                            ; 00569814
    FADD float ptr [EAX + 0x8]          ; 00569816
    FXCH                                ; 00569819
    FSTP float ptr [ESP + 0x198]        ; 0056981b
    FXCH                                ; 00569822
    FSTP float ptr [ESP + 0x19c]        ; 00569824
    FSTP float ptr [ESP + 0x1a0]        ; 0056982b
    MOVSD ES:EDI,ESI                    ; 00569832
    MOVSD ES:EDI,ESI                    ; 00569833
    MOVSD ES:EDI,ESI                    ; 00569834
    FLD float ptr [0x005eba55]          ; 00569835 | DAT_005eba55
    FLD float ptr [ESP + 0x1ec]         ; 0056983b
    FMUL ST1                            ; 00569842
    FLD float ptr [ESP + 0x1f0]         ; 00569844
    FMUL ST2                            ; 0056984b
    LEA EAX,[ESP + 0x234]               ; 0056984d
    FLD float ptr [ESP + 0x1f4]         ; 00569854
    FMULP ST3                           ; 0056985b
    PUSH EAX                            ; 0056985d
    LEA EDI,[ESP + 0x238]               ; 0056985e
    LEA ESI,[ESP + 0x1e4]               ; 00569865
    FXCH                                ; 0056986c
    FSTP float ptr [ESP + 0x1e4]        ; 0056986e
    FSTP float ptr [ESP + 0x1e8]        ; 00569875
    FSTP float ptr [ESP + 0x1ec]        ; 0056987c
    MOVSD ES:EDI,ESI                    ; 00569883
    MOVSD ES:EDI,ESI                    ; 00569884
    MOVSD ES:EDI,ESI                    ; 00569885
    PUSH EBX                            ; 00569886
    LEA ESI,[ESP + 0x1dc]               ; 00569887
    LEA EDI,[ESP + 0x110]               ; 0056988e
    CALL core_actor.cpp_FUN_00408d70    ; 00569895
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x1dc]               ; 0056989a
    ADD ESP,0x8                         ; 005698a1
    MOVSD ES:EDI,ESI                    ; 005698a4
    MOVSD ES:EDI,ESI                    ; 005698a5
    MOVSD ES:EDI,ESI                    ; 005698a6
    FLD float ptr [ESP + 0x108]         ; 005698a7
    FLD float ptr [ESP + 0x10c]         ; 005698ae
    FLD float ptr [ESP + 0x110]         ; 005698b5
    LEA EDI,[ESP + 0x15c]               ; 005698bc
    LEA ESI,[ESP + 0x138]               ; 005698c3
    FXCH ST2                            ; 005698ca
    FSUB float ptr [ESP + 0xcc]         ; 005698cc
    FXCH                                ; 005698d3
    FSUB float ptr [ESP + 0xd0]         ; 005698d5
    FXCH ST2                            ; 005698dc
    FSUB float ptr [ESP + 0xd4]         ; 005698de
    FXCH                                ; 005698e5
    FSTP float ptr [ESP + 0x138]        ; 005698e7
    FXCH                                ; 005698ee
    FSTP float ptr [ESP + 0x13c]        ; 005698f0
    FSTP float ptr [ESP + 0x140]        ; 005698f7
    MOVSD ES:EDI,ESI                    ; 005698fe
    MOVSD ES:EDI,ESI                    ; 005698ff
    MOVSD ES:EDI,ESI                    ; 00569900
    FLD float ptr [ESP + 0x160]         ; 00569901
    FABS                                ; 00569908
    FCOMP double ptr [0x005eba75]       ; 0056990a | DAT_005eba75
    FNSTSW AX                           ; 00569910
    SAHF                                ; 00569912
    JA 0x0056972c                       ; 00569913
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    FLD float ptr [ESP + 0x164]         ; 00569919
    FMUL ST0                            ; 00569920
    FLD float ptr [ESP + 0x15c]         ; 00569922
    FMUL ST0                            ; 00569929
    FADDP                               ; 0056992b
    FST float ptr [ESP + 0x260]         ; 0056992d
    FCOMP float ptr [ESP + 0x254]       ; 00569934
    FNSTSW AX                           ; 0056993b
    SAHF                                ; 0056993d
    JA 0x0056972c                       ; 0056993e
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV ESI,dword ptr [EBP + 0x18]      ; 00569944
    PUSH ESI                            ; 00569947
    PUSH EBX                            ; 00569948
    CALL core_actor.cpp_FUN_0040c840    ; 00569949
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056994e
    TEST EAX,EAX                        ; 00569951
    JZ 0x0056972c                       ; 00569953
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569959
    MOV dword ptr [EAX + 0x25608],EBX   ; 0056995c
    MOV EAX,dword ptr [ESP + 0x260]     ; 00569962
    MOV dword ptr [ESP + 0x254],EAX     ; 00569969
    MOV EAX,dword ptr [ESP + 0x250]     ; 00569970
    MOV dword ptr [ESP + 0x24c],EAX     ; 00569977
    JMP 0x0056972c                      ; 0056997e
        ;   XREF to: 0056972c (UNCONDITIONAL_JUMP)  ; default
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569983
        ;   Label: caseD_3
    CMP dword ptr [EAX + 0x2698],0x0    ; 00569986
    JNZ 0x0056972c                      ; 0056998d
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV EDX,dword ptr [EBP + 0x14]      ; 00569993
    PUSH EDX                            ; 00569996
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00569997
    PUSH EBX                            ; 0056999d
    CALL dword ptr [EAX + 0x8c]         ; 0056999e
    ADD ESP,0x8                         ; 005699a4
    CMP EAX,0x4                         ; 005699a7
    SETZ AL                             ; 005699aa
    AND EAX,0xff                        ; 005699ad
    JZ 0x00569a2a                       ; 005699b2
        ;   XREF to: 00569a2a (CONDITIONAL_JUMP)  ; LAB_00569a2a
    MOV ECX,dword ptr [ESP + 0x258]     ; 005699b4
    PUSH ECX                            ; 005699bb
    PUSH EBX                            ; 005699bc
    LEA ESI,[ESP + 0x1c4]               ; 005699bd
    LEA EDI,[ESP + 0x74]                ; 005699c4
    CALL core_actor.cpp_FUN_00408de0    ; 005699c8
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x1c4]               ; 005699cd
    ADD ESP,0x8                         ; 005699d4
    MOVSD ES:EDI,ESI                    ; 005699d7
    MOVSD ES:EDI,ESI                    ; 005699d8
    MOVSD ES:EDI,ESI                    ; 005699d9
    FLD float ptr [ESP + 0x6c]          ; 005699da
    FABS                                ; 005699de
    FLD1                                ; 005699e0
    FCOMPP                              ; 005699e2
    FNSTSW AX                           ; 005699e4
    SAHF                                ; 005699e6
    JC 0x0056972c                       ; 005699e7
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    LEA EAX,[ESP + 0x6c]                ; 005699ed
    PUSH EAX                            ; 005699f1
    LEA ESI,[ESP + 0x1a8]               ; 005699f2
    LEA EDI,[ESP + 0x88]                ; 005699f9
    CALL core_vecdir.cpp_FUN_005838f0   ; 00569a00
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_FUN_005838f0()
    LEA ESI,[ESP + 0x1a8]               ; 00569a05
    ADD ESP,0x4                         ; 00569a0c
    MOVSD ES:EDI,ESI                    ; 00569a0f
    MOVSD ES:EDI,ESI                    ; 00569a10
    MOVSD ES:EDI,ESI                    ; 00569a11
    FLD float ptr [ESP + 0x88]          ; 00569a12
    FABS                                ; 00569a19
    FCOMP double ptr [0x005eba6d]       ; 00569a1b | DAT_005eba6d
    FNSTSW AX                           ; 00569a21
    SAHF                                ; 00569a23
    JA 0x0056972c                       ; 00569a24
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV EDI,0x40400000                  ; 00569a2a
        ;   Label: LAB_00569a2a
    MOV EAX,0x40000000                  ; 00569a2f
    XOR ESI,ESI                         ; 00569a34
    MOV dword ptr [ESP + 0xe0],EAX      ; 00569a36
    MOV dword ptr [ESP + 0xd8],ESI      ; 00569a3d
    LEA EAX,[ESP + 0xd8]                ; 00569a44
    LEA ESI,[ESP + 0xfc]                ; 00569a4b
    MOV dword ptr [ESP + 0xdc],EDI      ; 00569a52
    CMP ESI,EAX                         ; 00569a59
    JZ 0x0056979e                       ; 00569a5b
        ;   XREF to: 0056979e (CONDITIONAL_JUMP)  ; LAB_0056979e
    MOV ESI,0x40000000                  ; 00569a61
    MOV dword ptr [ESP + 0x100],EDI     ; 00569a66
    XOR EDX,EDX                         ; 00569a6d
    MOV dword ptr [ESP + 0x104],ESI     ; 00569a6f
    MOV dword ptr [ESP + 0xfc],EDX      ; 00569a76
    JMP 0x0056979e                      ; 00569a7d
        ;   XREF to: 0056979e (UNCONDITIONAL_JUMP)  ; LAB_0056979e
    CMP dword ptr [ESI + 0x2620],0x0    ; 00569a82
        ;   Label: caseD_1
    JNZ 0x0056972c                      ; 00569a89
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV ECX,dword ptr [ESP + 0x258]     ; 00569a8f
    PUSH ECX                            ; 00569a96
    PUSH EBX                            ; 00569a97
    LEA ESI,[ESP + 0xb0]                ; 00569a98
    LEA EDI,[ESP + 0x1d0]               ; 00569a9f
    CALL core_actor.cpp_FUN_00408de0    ; 00569aa6
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xb0]                ; 00569aab
    ADD ESP,0x8                         ; 00569ab2
    MOVSD ES:EDI,ESI                    ; 00569ab5
    MOVSD ES:EDI,ESI                    ; 00569ab6
    MOVSD ES:EDI,ESI                    ; 00569ab7
    FLD float ptr [ESP + 0x1cc]         ; 00569ab8
    FMUL ST0                            ; 00569abf
    FLD float ptr [ESP + 0x1c8]         ; 00569ac1
    FMUL ST0                            ; 00569ac8
    FADDP                               ; 00569aca
    FLD float ptr [ESP + 0x1d0]         ; 00569acc
    FMUL ST0                            ; 00569ad3
    FADDP                               ; 00569ad5
    FSQRT                               ; 00569ad7
    FLDZ                                ; 00569ad9
    FXCH                                ; 00569adb
    FSTP float ptr [ESP + 0x25c]        ; 00569add
    FCOMP float ptr [ESP + 0x25c]       ; 00569ae4
    FNSTSW AX                           ; 00569aeb
    SAHF                                ; 00569aed
    JNC 0x00569b9d                      ; 00569aee
        ;   XREF to: 00569b9d (CONDITIONAL_JUMP)  ; LAB_00569b9d
    FLD1                                ; 00569af4
    FLD float ptr [ESP + 0x1c8]         ; 00569af6
    FXCH                                ; 00569afd
    FDIV float ptr [ESP + 0x25c]        ; 00569aff
    FXCH                                ; 00569b06
    FMUL ST1                            ; 00569b08
    FLD float ptr [ESP + 0x1cc]         ; 00569b0a
    FMUL ST2                            ; 00569b11
    FLD float ptr [ESP + 0x1d0]         ; 00569b13
    FMULP ST3                           ; 00569b1a
    FXCH                                ; 00569b1c
    FSTP float ptr [ESP + 0x1c8]        ; 00569b1e
    FSTP float ptr [ESP + 0x1cc]        ; 00569b25
    FSTP float ptr [ESP + 0x1d0]        ; 00569b2c
    FLD float ptr [ESP + 0x1d0]         ; 00569b33
        ;   Label: LAB_00569b33
    FLDZ                                ; 00569b3a
    FCOMPP                              ; 00569b3c
    FNSTSW AX                           ; 00569b3e
    SAHF                                ; 00569b40
    JC 0x0056972c                       ; 00569b41
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    MOV ECX,0x40400000                  ; 00569b47
    MOV ESI,0x40000000                  ; 00569b4c
    LEA EAX,[ESP + 0xfc]                ; 00569b51
    XOR EDX,EDX                         ; 00569b58
    MOV dword ptr [ESP + 0x220],ECX     ; 00569b5a
    MOV dword ptr [ESP + 0x224],ESI     ; 00569b61
    LEA ESI,[ESP + 0x21c]               ; 00569b68
    MOV dword ptr [ESP + 0x21c],EDX     ; 00569b6f
    CMP EAX,ESI                         ; 00569b76
    JZ 0x0056979e                       ; 00569b78
        ;   XREF to: 0056979e (CONDITIONAL_JUMP)  ; LAB_0056979e
    MOV dword ptr [ESP + 0xfc],EDX      ; 00569b7e
    MOV EDX,0x40000000                  ; 00569b85
    MOV dword ptr [ESP + 0x100],ECX     ; 00569b8a
    MOV dword ptr [ESP + 0x104],EDX     ; 00569b91
    JMP 0x0056979e                      ; 00569b98
        ;   XREF to: 0056979e (UNCONDITIONAL_JUMP)  ; LAB_0056979e
    XOR ESI,ESI                         ; 00569b9d
        ;   Label: LAB_00569b9d
    MOV dword ptr [ESP + 0x1cc],ESI     ; 00569b9f
    MOV dword ptr [ESP + 0x1c8],ESI     ; 00569ba6
    MOV dword ptr [ESP + 0x1d0],ESI     ; 00569bad
    JMP 0x00569b33                      ; 00569bb4
        ;   XREF to: 00569b33 (UNCONDITIONAL_JUMP)  ; LAB_00569b33
    MOV ESI,dword ptr [EBP + 0x14]      ; 00569bb9
        ;   Label: LAB_00569bb9
    PUSH ESI                            ; 00569bbc
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00569bbd
    PUSH EBX                            ; 00569bc3
    CALL dword ptr [EAX + 0x8c]         ; 00569bc4
    ADD ESP,0x8                         ; 00569bca
    MOV dword ptr [ESP + 0x250],EAX     ; 00569bcd
    DEC EAX                             ; 00569bd4
    CMP EAX,0x3                         ; 00569bd5
    JA 0x0056972c                       ; 00569bd8
        ;   XREF to: 0056972c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5695f8]  ; 00569bde | caseD_1 | caseD_2 | caseD_4
        ;   Label: switchD
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569be5
        ;   Label: LAB_00569be5
    MOV EBX,dword ptr [EAX + 0x25608]   ; 00569be8
    TEST EBX,EBX                        ; 00569bee
    JZ 0x0056964e                       ; 00569bf0
        ;   XREF to: 0056964e (CONDITIONAL_JUMP)  ; LAB_0056964e
    PUSH EBX                            ; 00569bf6
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 00569bf7
    LEA ESI,[ESP + 0x34]                ; 00569bfd
    LEA EDI,[ESP + 0x1c]                ; 00569c01
    CALL dword ptr [EDX + 0x24]         ; 00569c05
    MOV ECX,0x6                         ; 00569c08
    ADD ESP,0x4                         ; 00569c0d
    LEA ESI,[ESP + 0x30]                ; 00569c10
    MOV EBX,dword ptr [EBP + 0x14]      ; 00569c14
    MOVSD.REP ES:EDI,ESI                ; 00569c17
    ADD EBX,0x25710                     ; 00569c19
    LEA EDX,[ESP + 0x18]                ; 00569c1f
    MOV ESI,EBX                         ; 00569c23
    CMP EBX,EDX                         ; 00569c25
    JZ 0x00569c3d                       ; 00569c27
        ;   XREF to: 00569c3d (CONDITIONAL_JUMP)  ; LAB_00569c3d
    MOV EAX,dword ptr [ESP + 0x18]      ; 00569c29
    MOV dword ptr [EBX],EAX             ; 00569c2d
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00569c2f
    MOV dword ptr [EBX + 0x4],EAX       ; 00569c33
    MOV EAX,dword ptr [ESP + 0x20]      ; 00569c36
    MOV dword ptr [EBX + 0x8],EAX       ; 00569c3a
    LEA EAX,[EDX + 0xc]                 ; 00569c3d
        ;   Label: LAB_00569c3d
    LEA EBX,[ESI + 0xc]                 ; 00569c40
    CMP EBX,EAX                         ; 00569c43
    JZ 0x00569c57                       ; 00569c45
        ;   XREF to: 00569c57 (CONDITIONAL_JUMP)  ; LAB_00569c57
    MOV EDX,dword ptr [EAX]             ; 00569c47
    MOV dword ptr [EBX],EDX             ; 00569c49
    MOV EDX,dword ptr [EAX + 0x4]       ; 00569c4b
    MOV dword ptr [EBX + 0x4],EDX       ; 00569c4e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00569c51
    MOV dword ptr [EBX + 0x8],EDX       ; 00569c54
    MOV EBX,dword ptr [EBP + 0x14]      ; 00569c57
        ;   Label: LAB_00569c57
    LEA EDI,[ESP + 0x114]               ; 00569c5a
    LEA ESI,[ESP + 0x168]               ; 00569c61
    FLD float ptr [EBX + 0x25710]       ; 00569c68
    FLD float ptr [EBX + 0x25714]       ; 00569c6e
    FLD float ptr [EBX + 0x25718]       ; 00569c74
    FXCH ST2                            ; 00569c7a
    FADD float ptr [EBX + 0x2571c]      ; 00569c7c
    FXCH                                ; 00569c82
    FADD float ptr [EBX + 0x25720]      ; 00569c84
    FXCH ST2                            ; 00569c8a
    FADD float ptr [EBX + 0x25724]      ; 00569c8c
    FXCH                                ; 00569c92
    FSTP float ptr [ESP + 0x168]        ; 00569c94
    FXCH                                ; 00569c9b
    FSTP float ptr [ESP + 0x16c]        ; 00569c9d
    FSTP float ptr [ESP + 0x170]        ; 00569ca4
    MOVSD ES:EDI,ESI                    ; 00569cab
    MOVSD ES:EDI,ESI                    ; 00569cac
    MOVSD ES:EDI,ESI                    ; 00569cad
    FLD float ptr [0x005eba55]          ; 00569cae | DAT_005eba55
    FLD float ptr [ESP + 0x114]         ; 00569cb4
    FMUL ST1                            ; 00569cbb
    FLD float ptr [ESP + 0x118]         ; 00569cbd
    FMUL ST2                            ; 00569cc4
    FLD float ptr [ESP + 0x11c]         ; 00569cc6
    FMULP ST3                           ; 00569ccd
    LEA EAX,[ESP + 0xb4]                ; 00569ccf
    LEA EDI,[ESP + 0xb4]                ; 00569cd6
    LEA ESI,[ESP + 0x18c]               ; 00569cdd
    FXCH                                ; 00569ce4
    FSTP float ptr [ESP + 0x18c]        ; 00569ce6
    FSTP float ptr [ESP + 0x190]        ; 00569ced
    FSTP float ptr [ESP + 0x194]        ; 00569cf4
    MOVSD ES:EDI,ESI                    ; 00569cfb
    MOVSD ES:EDI,ESI                    ; 00569cfc
    MOVSD ES:EDI,ESI                    ; 00569cfd
    PUSH EAX                            ; 00569cfe
    MOV ESI,dword ptr [EBX + 0x25608]   ; 00569cff
    PUSH ESI                            ; 00569d05
    LEA ESI,[ESP + 0x230]               ; 00569d06
    LEA EDI,[ESP + 0x80]                ; 00569d0d
    CALL core_actor.cpp_FUN_00408d70    ; 00569d14
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00569d19
    LEA EAX,[ESP + 0x78]                ; 00569d1c
    LEA ESI,[ESP + 0x228]               ; 00569d20
    PUSH EAX                            ; 00569d27
    MOVSD ES:EDI,ESI                    ; 00569d28
    MOVSD ES:EDI,ESI                    ; 00569d29
    MOVSD ES:EDI,ESI                    ; 00569d2a
    PUSH EBX                            ; 00569d2b
    LEA ESI,[ESP + 0xec]                ; 00569d2c
    LEA EDI,[ESP + 0xf8]                ; 00569d33
    CALL core_actor.cpp_FUN_00408de0    ; 00569d3a
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0xec]                ; 00569d3f
    LEA EAX,[ESP + 0xf8]                ; 00569d46
    ADD ESP,0x8                         ; 00569d4d
    ADD EBX,0x25704                     ; 00569d50
    MOVSD ES:EDI,ESI                    ; 00569d56
    MOVSD ES:EDI,ESI                    ; 00569d57
    MOVSD ES:EDI,ESI                    ; 00569d58
    CMP EBX,EAX                         ; 00569d59
    JZ 0x00569d7a                       ; 00569d5b
        ;   XREF to: 00569d7a (CONDITIONAL_JUMP)  ; LAB_00569d7a
    MOV EAX,dword ptr [ESP + 0xf0]      ; 00569d5d
    MOV dword ptr [EBX],EAX             ; 00569d64
    MOV EAX,dword ptr [ESP + 0xf4]      ; 00569d66
    MOV dword ptr [EBX + 0x4],EAX       ; 00569d6d
    MOV EAX,dword ptr [ESP + 0xf8]      ; 00569d70
    MOV dword ptr [EBX + 0x8],EAX       ; 00569d77
    MOV EAX,dword ptr [ESP + 0x24c]     ; 00569d7a
        ;   Label: LAB_00569d7a
    DEC EAX                             ; 00569d81
    CMP EAX,0x3                         ; 00569d82
    JA 0x0056a12c                       ; 00569d85
        ;   XREF to: 0056a12c (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x569608]  ; 00569d8b | caseD_1 | caseD_4 | switchdataD_00569608
        ;   Label: switchD
    PUSH 0x1                            ; 00569d92
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569d94
    PUSH 0x1b                           ; 00569d97
    ADD EAX,0x2b4                       ; 00569d99
    PUSH EAX                            ; 00569d9e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00569d9f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00569da4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569da7
    MOV EDX,dword ptr [EAX + 0x25608]   ; 00569daa
    PUSH EDX                            ; 00569db0
    PUSH 0x5eba00                       ; 00569db1 | = "Rummaging %s\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 00569db6 | g_CConsolePtr
    PUSH ECX                            ; 00569dbc | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 00569dbd
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
        ;   Label: LAB_00569dbd
    ADD ESP,0xc                         ; 00569dc2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569dc5
        ;   Label: LAB_00569dc5
    MOV dword ptr [EAX + 0x256ac],0x40800000 ; 00569dc8
    MOV dword ptr [EAX + 0x256a4],0x4   ; 00569dd2
    MOV EAX,0x1                         ; 00569ddc
    MOV ESP,EBP                         ; 00569de1
    POP EBP                             ; 00569de3
    POP EDI                             ; 00569de4
    POP ESI                             ; 00569de5
    POP EBX                             ; 00569de6
    RET                                 ; 00569de7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569de8
        ;   Label: caseD_2
    MOV EAX,dword ptr [EAX + 0x25608]   ; 00569deb
    TEST EAX,EAX                        ; 00569df1
    JNZ 0x00569f8b                      ; 00569df3
        ;   XREF to: 00569f8b (CONDITIONAL_JUMP)  ; LAB_00569f8b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569df9
        ;   Label: LAB_00569df9
    FLD float ptr [EAX + 0x25708]       ; 00569dfc
    LEA EBX,[EAX + 0x2b4]               ; 00569e02
    FCOMP double ptr [0x005eba65]       ; 00569e08 | DAT_005eba65
    FNSTSW AX                           ; 00569e0e
    SAHF                                ; 00569e10
    JBE 0x0056a104                      ; 00569e11
        ;   XREF to: 0056a104 (CONDITIONAL_JUMP)  ; LAB_0056a104
    MOV EAX,[0x0264be68]                ; 00569e17 | DAT_0264be68
    PUSH EAX                            ; 00569e1c
    PUSH EBX                            ; 00569e1d
    LEA ESI,[ESP + 0x17c]               ; 00569e1e
    LEA EDI,[ESP + 0x20c]               ; 00569e25
    CALL core_skeleton.cpp_FUN_005469a0 ; 00569e2c
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 00569e31
    MOV EDX,dword ptr [0x0264be40]      ; 00569e34 | DAT_0264be40
    LEA ESI,[ESP + 0x174]               ; 00569e3a
    PUSH EDX                            ; 00569e41
    MOVSD ES:EDI,ESI                    ; 00569e42
    MOVSD ES:EDI,ESI                    ; 00569e43
    MOVSD ES:EDI,ESI                    ; 00569e44
    PUSH EBX                            ; 00569e45
    LEA ESI,[ESP + 0xc8]                ; 00569e46
    LEA EDI,[ESP + 0x98]                ; 00569e4d
    CALL core_skeleton.cpp_FUN_005469a0 ; 00569e54
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 00569e59
    LEA ESI,[ESP + 0xc0]                ; 00569e5c
    FLD float ptr [ESP + 0x204]         ; 00569e63
    FLD float ptr [ESP + 0x208]         ; 00569e6a
    MOVSD ES:EDI,ESI                    ; 00569e71
    MOVSD ES:EDI,ESI                    ; 00569e72
    MOVSD ES:EDI,ESI                    ; 00569e73
    FLD float ptr [ESP + 0x20c]         ; 00569e74
    LEA EDI,[ESP + 0x1f8]               ; 00569e7b
    LEA ESI,[ESP + 0x60]                ; 00569e82
    FXCH ST2                            ; 00569e86
    FSUB float ptr [ESP + 0x90]         ; 00569e88
    FXCH                                ; 00569e8f
    FSUB float ptr [ESP + 0x94]         ; 00569e91
    FXCH ST2                            ; 00569e98
    FSUB float ptr [ESP + 0x98]         ; 00569e9a
    FXCH                                ; 00569ea1
    FSTP float ptr [ESP + 0x60]         ; 00569ea3
    FXCH                                ; 00569ea7
    FSTP float ptr [ESP + 0x64]         ; 00569ea9
    FSTP float ptr [ESP + 0x68]         ; 00569ead
    MOVSD ES:EDI,ESI                    ; 00569eb1
    MOVSD ES:EDI,ESI                    ; 00569eb2
    MOVSD ES:EDI,ESI                    ; 00569eb3
    FLD float ptr [ESP + 0x1fc]         ; 00569eb4
    FMUL ST0                            ; 00569ebb
    FLD float ptr [ESP + 0x1f8]         ; 00569ebd
    FMUL ST0                            ; 00569ec4
    FADDP                               ; 00569ec6
    FLD float ptr [ESP + 0x200]         ; 00569ec8
    FMUL ST0                            ; 00569ecf
    FADDP                               ; 00569ed1
    FSQRT                               ; 00569ed3
    FLD float ptr [ESP + 0x90]          ; 00569ed5
    FLD float ptr [ESP + 0x94]          ; 00569edc
    FLD float ptr [ESP + 0x98]          ; 00569ee3
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569eea
    LEA EDI,[ESP + 0x180]               ; 00569eed
    LEA ESI,[ESP + 0x9c]                ; 00569ef4
    FXCH ST2                            ; 00569efb
    FSUB float ptr [EAX + 0x25704]      ; 00569efd
    FXCH                                ; 00569f03
    FSUB float ptr [EAX + 0x25708]      ; 00569f05
    FXCH ST2                            ; 00569f0b
    FSUB float ptr [EAX + 0x2570c]      ; 00569f0d
    FXCH                                ; 00569f13
    FSTP float ptr [ESP + 0x9c]         ; 00569f15
    FXCH                                ; 00569f1c
    FSTP float ptr [ESP + 0xa0]         ; 00569f1e
    FSTP float ptr [ESP + 0xa4]         ; 00569f25
    MOVSD ES:EDI,ESI                    ; 00569f2c
    MOVSD ES:EDI,ESI                    ; 00569f2d
    MOVSD ES:EDI,ESI                    ; 00569f2e
    FLD float ptr [ESP + 0x184]         ; 00569f2f
    FMUL ST0                            ; 00569f36
    FLD float ptr [ESP + 0x180]         ; 00569f38
    FMUL ST0                            ; 00569f3f
    FADDP                               ; 00569f41
    FLD float ptr [ESP + 0x188]         ; 00569f43
    FMUL ST0                            ; 00569f4a
    FADDP                               ; 00569f4c
    FSQRT                               ; 00569f4e
    FSUBP                               ; 00569f50
    FABS                                ; 00569f52
    FCOMP double ptr [0x005eba65]       ; 00569f54 | DAT_005eba65
    FNSTSW AX                           ; 00569f5a
    SAHF                                ; 00569f5c
    JA 0x0056a0d0                       ; 00569f5d
        ;   XREF to: 0056a0d0 (CONDITIONAL_JUMP)  ; LAB_0056a0d0
    PUSH 0x1                            ; 00569f63
    PUSH 0x15                           ; 00569f65
    PUSH EBX                            ; 00569f67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00569f68
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00569f6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00569f70
    MOV ECX,dword ptr [EAX + 0x25608]   ; 00569f73
    PUSH ECX                            ; 00569f79
    PUSH 0x5eb9cb                       ; 00569f7a | = "Picking up %s waist level\n"
    MOV EBX,dword ptr [0x00609ed0]      ; 00569f7f | g_CConsolePtr
    PUSH EBX                            ; 00569f85 | g_CConsoleInstance
    JMP 0x00569dbd                      ; 00569f86
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    MOV EBX,dword ptr [EBP + 0x14]      ; 00569f8b
        ;   Label: LAB_00569f8b
    PUSH EBX                            ; 00569f8e
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00569f8f
    PUSH EAX                            ; 00569f95
    CALL dword ptr [EDX + 0x8c]         ; 00569f96
    ADD ESP,0x8                         ; 00569f9c
    CMP EAX,0x4                         ; 00569f9f
    SETZ AL                             ; 00569fa2
    AND EAX,0xff                        ; 00569fa5
    JZ 0x00569df9                       ; 00569faa
        ;   XREF to: 00569df9 (CONDITIONAL_JUMP)  ; LAB_00569df9
    LEA EAX,[EBX + 0x20]                ; 00569fb0
    PUSH EAX                            ; 00569fb3
    MOV ESI,dword ptr [EBX + 0x25608]   ; 00569fb4
    PUSH ESI                            ; 00569fba
    LEA ESI,[ESP + 0x134]               ; 00569fbb
    LEA EDI,[ESP + 0x128]               ; 00569fc2
    CALL core_actor.cpp_FUN_00408de0    ; 00569fc9
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x134]               ; 00569fce
    ADD ESP,0x8                         ; 00569fd5
    MOVSD ES:EDI,ESI                    ; 00569fd8
    MOVSD ES:EDI,ESI                    ; 00569fd9
    MOVSD ES:EDI,ESI                    ; 00569fda
    FLD float ptr [ESP + 0x128]         ; 00569fdb
    FLDZ                                ; 00569fe2
    FCOMPP                              ; 00569fe4
    FNSTSW AX                           ; 00569fe6
    SAHF                                ; 00569fe8
    JNC 0x0056a0a2                      ; 00569fe9
        ;   XREF to: 0056a0a2 (CONDITIONAL_JUMP)  ; LAB_0056a0a2
    MOV EAX,0x1                         ; 00569fef
    MOV EDX,dword ptr [EBP + 0x14]      ; 00569ff4
        ;   Label: LAB_00569ff4
    FLD float ptr [EDX + 0x25708]       ; 00569ff7
    LEA EBX,[EDX + 0x2b4]               ; 00569ffd
    MOV dword ptr [EDX + 0x256f4],EAX   ; 0056a003
    FCOMP double ptr [0x005eba5d]       ; 0056a009 | DAT_005eba5d
    FNSTSW AX                           ; 0056a00f
    SAHF                                ; 0056a011
    JBE 0x0056a0a9                      ; 0056a012
        ;   XREF to: 0056a0a9 (CONDITIONAL_JUMP)  ; LAB_0056a0a9
    PUSH 0x1                            ; 0056a018
    PUSH 0x18                           ; 0056a01a
    PUSH EBX                            ; 0056a01c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056a01d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056a022
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a025
    MOV EAX,dword ptr [EAX + 0x25608]   ; 0056a028
    ADD EAX,0x20                        ; 0056a02e
    PUSH EAX                            ; 0056a031
    MOV EDX,dword ptr [EBP + 0x14]      ; 0056a032
    PUSH EDX                            ; 0056a035
    LEA ESI,[ESP + 0x158]               ; 0056a036
    LEA EDI,[ESP + 0x218]               ; 0056a03d
    CALL core_actor.cpp_FUN_00408de0    ; 0056a044
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    ADD ESP,0x8                         ; 0056a049
    LEA ESI,[ESP + 0x150]               ; 0056a04c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056a053
    LEA EAX,[ESP + 0x210]               ; 0056a056
    ADD EBX,0x25704                     ; 0056a05d
    MOVSD ES:EDI,ESI                    ; 0056a063
    MOVSD ES:EDI,ESI                    ; 0056a064
    MOVSD ES:EDI,ESI                    ; 0056a065
    CMP EBX,EAX                         ; 0056a066
    JZ 0x0056a087                       ; 0056a068
        ;   XREF to: 0056a087 (CONDITIONAL_JUMP)  ; LAB_0056a087
    MOV EAX,dword ptr [ESP + 0x210]     ; 0056a06a
    MOV dword ptr [EBX],EAX             ; 0056a071
    MOV EAX,dword ptr [ESP + 0x214]     ; 0056a073
    MOV dword ptr [EBX + 0x4],EAX       ; 0056a07a
    MOV EAX,dword ptr [ESP + 0x218]     ; 0056a07d
    MOV dword ptr [EBX + 0x8],EAX       ; 0056a084
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a087
        ;   Label: LAB_0056a087
    MOV ECX,dword ptr [EAX + 0x25608]   ; 0056a08a
    PUSH ECX                            ; 0056a090
    PUSH 0x5eb971                       ; 0056a091 | s_Picking_up_heavy_s_shelf_005eb970+1
    MOV EBX,dword ptr [0x00609ed0]      ; 0056a096 | g_CConsolePtr
    PUSH EBX                            ; 0056a09c | g_CConsoleInstance
    JMP 0x00569dbd                      ; 0056a09d
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    XOR EAX,EAX                         ; 0056a0a2
        ;   Label: LAB_0056a0a2
    JMP 0x00569ff4                      ; 0056a0a4
        ;   XREF to: 00569ff4 (UNCONDITIONAL_JUMP)  ; LAB_00569ff4
    PUSH 0x1                            ; 0056a0a9
        ;   Label: LAB_0056a0a9
    PUSH 0x17                           ; 0056a0ab
    PUSH EBX                            ; 0056a0ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056a0ae
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056a0b3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a0b6
    MOV EDI,dword ptr [EAX + 0x25608]   ; 0056a0b9
    PUSH EDI                            ; 0056a0bf
    PUSH 0x5eb98c                       ; 0056a0c0 | = "Picking up heavy %s crate\n"
    MOV EAX,[0x00609ed0]                ; 0056a0c5 | g_CConsolePtr
    PUSH EAX                            ; 0056a0ca | g_CConsoleInstance
    JMP 0x00569dbd                      ; 0056a0cb
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a0d0
        ;   Label: LAB_0056a0d0
    MOV ESI,dword ptr [EAX + 0x25608]   ; 0056a0d3
    PUSH ESI                            ; 0056a0d9
    PUSH 0x5eb9a7                       ; 0056a0da | = "%s out of reach - canceling pickup\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0056a0df | g_CConsolePtr
    PUSH EDI                            ; 0056a0e5 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 0056a0e6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 0056a0eb
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a0ee
    MOV dword ptr [EAX + 0x25608],0x0   ; 0056a0f1
    XOR EAX,EAX                         ; 0056a0fb
    MOV ESP,EBP                         ; 0056a0fd
    POP EBP                             ; 0056a0ff
    POP EDI                             ; 0056a100
    POP ESI                             ; 0056a101
    POP EBX                             ; 0056a102
    RET                                 ; 0056a103
    PUSH 0x1                            ; 0056a104
        ;   Label: LAB_0056a104
    PUSH 0x13                           ; 0056a106
    PUSH EBX                            ; 0056a108
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056a109
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056a10e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0056a111
    MOV ESI,dword ptr [EAX + 0x25608]   ; 0056a114
    PUSH ESI                            ; 0056a11a
    PUSH 0x5eb9e6                       ; 0056a11b | = "Picking up %s off ground\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 0056a120 | g_CConsolePtr
    PUSH EDI                            ; 0056a126 | g_CConsoleInstance
    JMP 0x00569dbd                      ; 0056a127
        ;   XREF to: 00569dbd (UNCONDITIONAL_JUMP)  ; LAB_00569dbd
    MOV ECX,dword ptr [ESP + 0x24c]     ; 0056a12c
        ;   Label: default
    PUSH ECX                            ; 0056a133
    MOV EAX,0x5eba0e                    ; 0056a134 | = "..\\core\\stranger.cpp"
    MOV EDX,0xd2d                       ; 0056a139
    PUSH 0x5eba23                       ; 0056a13e | = "Hell froze - invalid pickUpType: %d"
    MOV [0x01d046a0],EAX                ; 0056a143 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 0056a148 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0056a14e
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0056a153
    JMP 0x00569dc5                      ; 0056a156
        ;   XREF to: 00569dc5 (UNCONDITIONAL_JUMP)  ; LAB_00569dc5

