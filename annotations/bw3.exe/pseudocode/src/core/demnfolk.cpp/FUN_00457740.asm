; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_demnfolk_cpp_FUN_00457740(CCharacter *param_1,float param_2)
;
; Local Variables:
; undefined        Stack[-0x168]:1  local_168
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_demnfolk.cpp_FUN_00455080 at 00456864
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005ba741+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005ba774
;   TerminatedCString s_s_beginning_to_pickup_s_005ba794
;   TerminatedCString s_core_demnfolk_cpp_005ba7af
;   TerminatedCString s_Invalid_demon_townsfolk_005ba7c4
;   TerminatedCString s_CBodyPart_005ba7ea
;   TerminatedCString s_s_is_going_to_try_to_pic_005ba7f4
;   undefined4 DAT_005ba81a
;   undefined4 DAT_005ba822
;   undefined4 DAT_005ba82a
;   undefined4 DAT_005ba832
;   CConsole* g_CConsolePtr = 007f7ea4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d71de0
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_bodypart.cpp_FUN_00416bd0
;   core_bodypart.cpp_FUN_00416c50
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_demnfolk.cpp_FUN_004549e0
;   core_demnfolk.cpp_FUN_004580a0
;   core_demnfolk.cpp_FUN_00458140
;   core_demnfolk.cpp_FUN_00458fb0
;   core_main.c_FUN_004e4330
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457740
        ;   Label: core_demnfolk.cpp_FUN_00457740
    PUSH ESI                            ; 00457741
    PUSH EDI                            ; 00457742
    PUSH EBP                            ; 00457743
    MOV EBP,ESP                         ; 00457744
    SUB ESP,0x224                       ; 00457746
    AND ESP,0xfffffff8                  ; 0045774c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045774f
    CMP dword ptr [EAX + 0xd124],0x0    ; 00457752
    JL 0x004577bd                       ; 00457759
        ;   XREF to: 004577bd (CONDITIONAL_JUMP)  ; LAB_004577bd
    FLD float ptr [EAX + 0xd05c]        ; 0045775b
    FSUB float ptr [EBP + 0x18]         ; 00457761
    FST float ptr [EAX + 0xd05c]        ; 00457764
    FLDZ                                ; 0045776a
    FCOMPP                              ; 0045776c
    FNSTSW AX                           ; 0045776e
    SAHF                                ; 00457770
    JC 0x004577c6                       ; 00457771
        ;   XREF to: 004577c6 (CONDITIONAL_JUMP)  ; LAB_004577c6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457773
        ;   Label: LAB_00457773
    MOV EBX,dword ptr [EAX + 0x25b0]    ; 00457776
    TEST EBX,EBX                        ; 0045777c
    JNZ 0x004577bd                      ; 0045777e
        ;   XREF to: 004577bd (CONDITIONAL_JUMP)  ; LAB_004577bd
    MOV ESI,dword ptr [EAX + 0x2628]    ; 00457780
    TEST ESI,ESI                        ; 00457786
    JNZ 0x004577bd                      ; 00457788
        ;   XREF to: 004577bd (CONDITIONAL_JUMP)  ; LAB_004577bd
    FLD float ptr [EAX + 0xd060]        ; 0045778a
    FLDZ                                ; 00457790
    FCOMPP                              ; 00457792
    FNSTSW AX                           ; 00457794
    SAHF                                ; 00457796
    JNC 0x00457804                      ; 00457797
        ;   XREF to: 00457804 (CONDITIONAL_JUMP)  ; LAB_00457804
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457799
    FLD float ptr [EAX + 0xd060]        ; 0045779c
    FSUB float ptr [EBP + 0x18]         ; 004577a2
    FST float ptr [EAX + 0xd060]        ; 004577a5
    FLDZ                                ; 004577ab
    FCOMPP                              ; 004577ad
    FNSTSW AX                           ; 004577af
    SAHF                                ; 004577b1
    JBE 0x004577bd                      ; 004577b2
        ;   XREF to: 004577bd (CONDITIONAL_JUMP)  ; LAB_004577bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004577b4
    MOV dword ptr [EAX + 0xd060],EBX    ; 004577b7
    XOR EAX,EAX                         ; 004577bd
        ;   Label: LAB_004577bd
    MOV ESP,EBP                         ; 004577bf
    POP EBP                             ; 004577c1
    POP EDI                             ; 004577c2
    POP ESI                             ; 004577c3
    POP EBX                             ; 004577c4
    RET                                 ; 004577c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004577c6
        ;   Label: LAB_004577c6
    MOV ECX,dword ptr [EAX + 0xd058]    ; 004577c9
    PUSH 0x41200000                     ; 004577cf
    INC ECX                             ; 004577d4
    PUSH 0x40a00000                     ; 004577d5
    MOV dword ptr [EAX + 0xd058],ECX    ; 004577da
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004577e0
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x228],EAX     ; 004577e5
    FLD float ptr [ESP + 0x228]         ; 004577ec
    ADD ESP,0x8                         ; 004577f3
    MOV EAX,dword ptr [EBP + 0x14]      ; 004577f6
    FSTP float ptr [EAX + 0xd05c]       ; 004577f9
    JMP 0x00457773                      ; 004577ff
        ;   XREF to: 00457773 (UNCONDITIONAL_JUMP)  ; LAB_00457773
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457804
        ;   Label: LAB_00457804
    MOV EBX,dword ptr [EBP + 0x14]      ; 00457807
    MOV EDI,dword ptr [EAX + 0xd064]    ; 0045780a
    ADD EBX,0x20                        ; 00457810
    TEST EDI,EDI                        ; 00457813
    JNZ 0x004578ae                      ; 00457815
        ;   XREF to: 004578ae (CONDITIONAL_JUMP)  ; LAB_004578ae
    LEA EAX,[ESP + 0xd0]                ; 0045781b
    MOV dword ptr [ESP + 0x208],ESI     ; 00457822
    MOV dword ptr [ESP + 0x218],ESI     ; 00457829
    MOV dword ptr [ESP + 0x20c],EBX     ; 00457830
    MOV dword ptr [ESP + 0x210],ESI     ; 00457837
    ADD EAX,0xc                         ; 0045783e
    MOV dword ptr [ESP + 0x21c],ESI     ; 00457841
    MOV dword ptr [ESP + 0x214],EAX     ; 00457848
    MOV EAX,[0x00603b28]                ; 0045784f | g_CDemonSetPtr
        ;   Label: LAB_0045784f
    MOV EBX,dword ptr [ESP + 0x218]     ; 00457854
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 0045785b | g_CDemonSetInstance.actor_count
    JGE 0x0045802b                      ; 00457861
        ;   XREF to: 0045802b (CONDITIONAL_JUMP)  ; LAB_0045802b
    ADD EAX,dword ptr [ESP + 0x210]     ; 00457867
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 0045786e | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 00457874
    MOV EAX,dword ptr [EBX + 0x154]     ; 00457875
    CALL dword ptr [EAX + 0x94]         ; 0045787b
    ADD ESP,0x4                         ; 00457881
    TEST EAX,EAX                        ; 00457884
    JZ 0x00457e48                       ; 00457886
        ;   XREF to: 00457e48 (CONDITIONAL_JUMP)  ; LAB_00457e48
    MOV ECX,dword ptr [ESP + 0x218]     ; 0045788c
        ;   Label: LAB_0045788c
    MOV EDX,dword ptr [ESP + 0x210]     ; 00457893
    INC ECX                             ; 0045789a
    ADD EDX,0x4                         ; 0045789b
    MOV dword ptr [ESP + 0x218],ECX     ; 0045789e
    MOV dword ptr [ESP + 0x210],EDX     ; 004578a5
    JMP 0x0045784f                      ; 004578ac
        ;   XREF to: 0045784f (UNCONDITIONAL_JUMP)  ; LAB_0045784f
    PUSH EDI                            ; 004578ae
        ;   Label: LAB_004578ae
    MOV ESI,dword ptr [EDI + 0x154]     ; 004578af
    CALL dword ptr [ESI + 0x94]         ; 004578b5
    ADD ESP,0x4                         ; 004578bb
    TEST EAX,EAX                        ; 004578be
    JNZ 0x00457bb5                      ; 004578c0
        ;   XREF to: 00457bb5 (CONDITIONAL_JUMP)  ; LAB_00457bb5
    MOV EAX,dword ptr [EBP + 0x14]      ; 004578c6
    MOV EAX,dword ptr [EAX + 0xd064]    ; 004578c9
    FLD float ptr [EBX]                 ; 004578cf
    FSUB float ptr [EAX + 0x20]         ; 004578d1
    FMUL ST0                            ; 004578d4
    FLD float ptr [EBX + 0x8]           ; 004578d6
    FSUB float ptr [EAX + 0x28]         ; 004578d9
    FMUL ST0                            ; 004578dc
    FADDP                               ; 004578de
    FSQRT                               ; 004578e0
    FMUL double ptr [0x005ba81a]        ; 004578e2 | DAT_005ba81a
    FSUBR double ptr [0x005ba822]       ; 004578e8 | DAT_005ba822
    FST float ptr [ESP + 0x4]           ; 004578ee
    FLD1                                ; 004578f2
    FCOMPP                              ; 004578f4
    FNSTSW AX                           ; 004578f6
    SAHF                                ; 004578f8
    JBE 0x00457903                      ; 004578f9
        ;   XREF to: 00457903 (CONDITIONAL_JUMP)  ; LAB_00457903
    MOV dword ptr [ESP + 0x4],0x3f800000 ; 004578fb
    FLD float ptr [EBP + 0x18]          ; 00457903
        ;   Label: LAB_00457903
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457906
    FMUL float ptr [ESP + 0x4]          ; 00457909
    MOV EDI,dword ptr [EAX + 0xd068]    ; 0045790d
    PUSH EDI                            ; 00457913
    FADD float ptr [EAX + 0xd060]       ; 00457914
    PUSH EAX                            ; 0045791a
    FSTP float ptr [EAX + 0xd060]       ; 0045791b
    CALL core_demnfolk.cpp_FUN_004580a0 ; 00457921
        ;   XREF to: 004580a0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_004580a0()
    ADD ESP,0x8                         ; 00457926
    MOV ESI,0xffffffff                  ; 00457929
    MOV dword ptr [ESP + 0x200],EAX     ; 0045792e
    TEST EAX,EAX                        ; 00457935
    JL 0x00457b9b                       ; 00457937
        ;   XREF to: 00457b9b (CONDITIONAL_JUMP)  ; LAB_00457b9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045793d
    FLD float ptr [EAX + 0xd060]        ; 00457940
    FLDZ                                ; 00457946
    FCOMPP                              ; 00457948
    FNSTSW AX                           ; 0045794a
    SAHF                                ; 0045794c
    JBE 0x00457b9b                      ; 0045794d
        ;   XREF to: 00457b9b (CONDITIONAL_JUMP)  ; LAB_00457b9b
    MOV EDX,dword ptr [EBP + 0x14]      ; 00457953
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457956
    PUSH EDX                            ; 00457959
    MOV EAX,dword ptr [EAX + 0xd064]    ; 0045795a
    PUSH EAX                            ; 00457960
    MOV EBX,dword ptr [EAX + 0x154]     ; 00457961
    CALL dword ptr [EBX + 0x84]         ; 00457967
    ADD ESP,0x8                         ; 0045796d
    CMP EAX,0x3                         ; 00457970
    JNZ 0x00457b9b                      ; 00457973
        ;   XREF to: 00457b9b (CONDITIONAL_JUMP)  ; LAB_00457b9b
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457979
    MOV ECX,dword ptr [EAX + 0xd068]    ; 0045797c
    PUSH ECX                            ; 00457982
    PUSH EAX                            ; 00457983
    CALL core_demnfolk.cpp_FUN_00458140 ; 00457984
        ;   XREF to: 00458140 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458140()
    ADD ESP,0x8                         ; 00457989
    TEST EAX,EAX                        ; 0045798c
    JZ 0x00457b9b                       ; 0045798e
        ;   XREF to: 00457b9b (CONDITIONAL_JUMP)  ; LAB_00457b9b
    MOV ESI,dword ptr [EBP + 0x14]      ; 00457994
    MOV ESI,dword ptr [ESI + 0xd068]    ; 00457997
    CMP ESI,0x2                         ; 0045799d
    JNC 0x00457d27                      ; 004579a0
        ;   XREF to: 00457d27 (CONDITIONAL_JUMP)  ; LAB_00457d27
    CMP ESI,0x1                         ; 004579a6
    JNZ 0x00457d36                      ; 004579a9
        ;   XREF to: 00457d36 (CONDITIONAL_JUMP)  ; LAB_00457d36
    MOV EBX,dword ptr [EBP + 0x14]      ; 004579af
        ;   Label: LAB_004579af
    MOV EBX,dword ptr [EBX + 0xd064]    ; 004579b2
    PUSH EBX                            ; 004579b8
    MOV EAX,dword ptr [EBX + 0x154]     ; 004579b9
    LEA ESI,[ESP + 0xa4]                ; 004579bf
    LEA EDI,[ESP + 0x5c]                ; 004579c6
    CALL dword ptr [EAX + 0x1c]         ; 004579ca
    MOV ECX,0x6                         ; 004579cd
    ADD ESP,0x4                         ; 004579d2
    LEA EAX,[ESP + 0x1f0]               ; 004579d5
    LEA ESI,[ESP + 0xa0]                ; 004579dc
    PUSH EAX                            ; 004579e3
    MOVSD.REP ES:EDI,ESI                ; 004579e4
    LEA EAX,[ESP + 0x68]                ; 004579e6
    MOV EDI,0x3f000000                  ; 004579ea
    PUSH EAX                            ; 004579ef
    LEA EAX,[ESP + 0x60]                ; 004579f0
    LEA ESI,[ESP + 0x1bc]               ; 004579f4
    PUSH EAX                            ; 004579fb
    MOV dword ptr [ESP + 0x1fc],EDI     ; 004579fc
    LEA EDI,[ESP + 0xf4]                ; 00457a03
    CALL core_bodypart.cpp_FUN_00416c50 ; 00457a0a
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416c50()
    LEA ESI,[ESP + 0x1c0]               ; 00457a0f
    ADD ESP,0x8                         ; 00457a16
    LEA EAX,[ESP + 0xec]                ; 00457a19
    MOVSD ES:EDI,ESI                    ; 00457a20
    MOVSD ES:EDI,ESI                    ; 00457a21
    MOVSD ES:EDI,ESI                    ; 00457a22
    PUSH EAX                            ; 00457a23
    LEA ESI,[ESP + 0x1ec]               ; 00457a24
    LEA EDI,[ESP + 0x1e0]               ; 00457a2b
    CALL core_bodypart.cpp_FUN_00416bd0 ; 00457a32
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416bd0()
    LEA ESI,[ESP + 0x1ec]               ; 00457a37
    ADD ESP,0x8                         ; 00457a3e
    LEA EAX,[ESP + 0x13c]               ; 00457a41
    FLD float ptr [ESP + 0x60]          ; 00457a48
    MOVSD ES:EDI,ESI                    ; 00457a4c
    MOVSD ES:EDI,ESI                    ; 00457a4d
    MOVSD ES:EDI,ESI                    ; 00457a4e
    PUSH EAX                            ; 00457a4f
    LEA EDI,[ESP + 0x140]               ; 00457a50
    LEA ESI,[ESP + 0x1dc]               ; 00457a57
    FADD double ptr [0x005ba82a]        ; 00457a5e | DAT_005ba82a
    PUSH EBX                            ; 00457a64
    FSTP float ptr [ESP + 0x1e8]        ; 00457a65
    MOVSD ES:EDI,ESI                    ; 00457a6c
    MOVSD ES:EDI,ESI                    ; 00457a6d
    MOVSD ES:EDI,ESI                    ; 00457a6e
    LEA EBX,[ESP + 0x15c]               ; 00457a6f
    LEA ESI,[ESP + 0x12c]               ; 00457a76
    LEA EDI,[ESP + 0x1a4]               ; 00457a7d
    CALL core_actor.cpp_FUN_00408b80    ; 00457a84
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x12c]               ; 00457a89
    ADD ESP,0x8                         ; 00457a90
    LEA EAX,[ESP + 0x19c]               ; 00457a93
    MOVSD ES:EDI,ESI                    ; 00457a9a
    MOVSD ES:EDI,ESI                    ; 00457a9b
    MOVSD ES:EDI,ESI                    ; 00457a9c
    CMP EBX,EAX                         ; 00457a9d
    JZ 0x00457acb                       ; 00457a9f
        ;   XREF to: 00457acb (CONDITIONAL_JUMP)  ; LAB_00457acb
    MOV EAX,dword ptr [ESP + 0x19c]     ; 00457aa1
    MOV dword ptr [ESP + 0x154],EAX     ; 00457aa8
    MOV EAX,dword ptr [ESP + 0x1a0]     ; 00457aaf
    MOV dword ptr [ESP + 0x158],EAX     ; 00457ab6
    MOV EAX,dword ptr [ESP + 0x1a4]     ; 00457abd
    MOV dword ptr [ESP + 0x15c],EAX     ; 00457ac4
        ;   Label: LAB_00457ac4
    LEA EDI,[ESP + 0x178]               ; 00457acb
        ;   Label: LAB_00457acb
    MOV ESI,0x2cfd900                   ; 00457ad2
    MOV EAX,dword ptr [ESP + 0x200]     ; 00457ad7
    MOVSD ES:EDI,ESI                    ; 00457ade | DAT_02cfd900
    MOVSD ES:EDI,ESI                    ; 00457adf | DAT_02cfd904
    MOVSD ES:EDI,ESI                    ; 00457ae0 | DAT_02cfd908
    TEST EAX,EAX                        ; 00457ae1
    JNZ 0x00457b28                      ; 00457ae3
        ;   XREF to: 00457b28 (CONDITIONAL_JUMP)  ; LAB_00457b28
    MOV EDX,0xbfc00000                  ; 00457ae5
    LEA EBX,[ESP + 0x178]               ; 00457aea
    MOV dword ptr [ESP + 0x11c],EAX     ; 00457af1
    MOV dword ptr [ESP + 0x120],EAX     ; 00457af8
    LEA EAX,[ESP + 0x118]               ; 00457aff
    MOV dword ptr [ESP + 0x118],EDX     ; 00457b06
    CMP EBX,EAX                         ; 00457b0d
    JZ 0x00457b28                       ; 00457b0f
        ;   XREF to: 00457b28 (CONDITIONAL_JUMP)  ; LAB_00457b28
    XOR EDI,EDI                         ; 00457b11
    MOV dword ptr [ESP + 0x178],EDX     ; 00457b13
    MOV dword ptr [ESP + 0x17c],EDI     ; 00457b1a
    MOV dword ptr [ESP + 0x180],EDI     ; 00457b21
    CMP dword ptr [ESP + 0x200],0x1     ; 00457b28
        ;   Label: LAB_00457b28
    JNZ 0x00457b77                      ; 00457b30
        ;   XREF to: 00457b77 (CONDITIONAL_JUMP)  ; LAB_00457b77
    MOV ECX,0x3fc00000                  ; 00457b32
    XOR EBX,EBX                         ; 00457b37
    LEA EAX,[ESP + 0x178]               ; 00457b39
    MOV dword ptr [ESP + 0x1ac],EBX     ; 00457b40
    MOV dword ptr [ESP + 0x1b0],EBX     ; 00457b47
    LEA EBX,[ESP + 0x1a8]               ; 00457b4e
    MOV dword ptr [ESP + 0x1a8],ECX     ; 00457b55
    CMP EAX,EBX                         ; 00457b5c
    JZ 0x00457b77                       ; 00457b5e
        ;   XREF to: 00457b77 (CONDITIONAL_JUMP)  ; LAB_00457b77
    XOR EAX,EAX                         ; 00457b60
    MOV dword ptr [ESP + 0x178],ECX     ; 00457b62
    MOV dword ptr [ESP + 0x17c],EAX     ; 00457b69
    MOV dword ptr [ESP + 0x180],EAX     ; 00457b70
    PUSH 0x0                            ; 00457b77
        ;   Label: LAB_00457b77
    LEA EAX,[ESP + 0x17c]               ; 00457b79
    PUSH 0x0                            ; 00457b80
    PUSH EAX                            ; 00457b82
    PUSH 0x0                            ; 00457b83
    LEA EAX,[ESP + 0x164]               ; 00457b85
    PUSH EAX                            ; 00457b8c
    MOV ECX,dword ptr [EBP + 0x14]      ; 00457b8d
    PUSH ECX                            ; 00457b90
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00457b91
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00457b96
    MOV ESI,EAX                         ; 00457b99
    TEST ESI,ESI                        ; 00457b9b
        ;   Label: LAB_00457b9b
    JL 0x00457d6c                       ; 00457b9d
        ;   XREF to: 00457d6c (CONDITIONAL_JUMP)  ; LAB_00457d6c
    JG 0x00457dde                       ; 00457ba3
        ;   XREF to: 00457dde (CONDITIONAL_JUMP)  ; LAB_00457dde
    MOV EAX,0x1                         ; 00457ba9
    MOV ESP,EBP                         ; 00457bae
    POP EBP                             ; 00457bb0
    POP EDI                             ; 00457bb1
    POP ESI                             ; 00457bb2
    POP EBX                             ; 00457bb3
    RET                                 ; 00457bb4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457bb5
        ;   Label: LAB_00457bb5
    MOV EDX,dword ptr [EAX + 0xd064]    ; 00457bb8
    PUSH EDX                            ; 00457bbe
    PUSH EAX                            ; 00457bbf
    PUSH 0x5ba742                       ; 00457bc0 | s_s_can_t_pick_up_s_sombod_005ba741+1
    MOV EBX,dword ptr [0x005f1690]      ; 00457bc5 | g_CConsolePtr
    PUSH EBX                            ; 00457bcb | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00457bcc
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00457bd1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457bd4
    MOV dword ptr [EAX + 0xd064],0x0    ; 00457bd7
    PUSH EAX                            ; 00457be1
    MOV dword ptr [EAX + 0xd060],0x0    ; 00457be2
    CALL core_demnfolk.cpp_FUN_00458fb0 ; 00457bec
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00457bf1
    XOR EAX,EAX                         ; 00457bf4
    MOV ESP,EBP                         ; 00457bf6
    POP EBP                             ; 00457bf8
    POP EDI                             ; 00457bf9
    POP ESI                             ; 00457bfa
    POP EBX                             ; 00457bfb
    RET                                 ; 00457bfc
    MOV EBX,dword ptr [EBP + 0x14]      ; 00457bfd
        ;   Label: LAB_00457bfd
    MOV EBX,dword ptr [EBX + 0xd064]    ; 00457c00
    PUSH EBX                            ; 00457c06
    MOV EAX,dword ptr [EBX + 0x154]     ; 00457c07
    LEA ESI,[ESP + 0xbc]                ; 00457c0d
    LEA EDI,[ESP + 0x8c]                ; 00457c14
    CALL dword ptr [EAX + 0x1c]         ; 00457c1b
    MOV ECX,0x6                         ; 00457c1e
    ADD ESP,0x4                         ; 00457c23
    LEA EAX,[ESP + 0x1fc]               ; 00457c26
    LEA ESI,[ESP + 0xb8]                ; 00457c2d
    PUSH EAX                            ; 00457c34
    MOVSD.REP ES:EDI,ESI                ; 00457c35
    LEA EAX,[ESP + 0x98]                ; 00457c37
    MOV ESI,0x3f000000                  ; 00457c3e
    PUSH EAX                            ; 00457c43
    LEA EAX,[ESP + 0x90]                ; 00457c44
    MOV dword ptr [ESP + 0x204],ESI     ; 00457c4b
    PUSH EAX                            ; 00457c52
    LEA ESI,[ESP + 0x178]               ; 00457c53
    LEA EDI,[ESP + 0x190]               ; 00457c5a
    CALL core_bodypart.cpp_FUN_00416c50 ; 00457c61
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416c50()
    LEA ESI,[ESP + 0x178]               ; 00457c66
    ADD ESP,0x8                         ; 00457c6d
    LEA EAX,[ESP + 0x188]               ; 00457c70
    MOVSD ES:EDI,ESI                    ; 00457c77
    MOVSD ES:EDI,ESI                    ; 00457c78
    MOVSD ES:EDI,ESI                    ; 00457c79
    PUSH EAX                            ; 00457c7a
    LEA ESI,[ESP + 0xfc]                ; 00457c7b
    LEA EDI,[ESP + 0x198]               ; 00457c82
    CALL core_bodypart.cpp_FUN_00416bd0 ; 00457c89
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416bd0()
    LEA ESI,[ESP + 0xfc]                ; 00457c8e
    ADD ESP,0x8                         ; 00457c95
    LEA EAX,[ESP + 0x10c]               ; 00457c98
    FLD float ptr [ESP + 0x90]          ; 00457c9f
    MOVSD ES:EDI,ESI                    ; 00457ca6
    MOVSD ES:EDI,ESI                    ; 00457ca7
    MOVSD ES:EDI,ESI                    ; 00457ca8
    PUSH EAX                            ; 00457ca9
    LEA EDI,[ESP + 0x110]               ; 00457caa
    LEA ESI,[ESP + 0x194]               ; 00457cb1
    FADD double ptr [0x005ba82a]        ; 00457cb8 | DAT_005ba82a
    PUSH EBX                            ; 00457cbe
    FSTP float ptr [ESP + 0x1a0]        ; 00457cbf
    MOVSD ES:EDI,ESI                    ; 00457cc6
    MOVSD ES:EDI,ESI                    ; 00457cc7
    MOVSD ES:EDI,ESI                    ; 00457cc8
    LEA EBX,[ESP + 0x168]               ; 00457cc9
    LEA ESI,[ESP + 0x108]               ; 00457cd0
    LEA EDI,[ESP + 0x168]               ; 00457cd7
    CALL core_actor.cpp_FUN_00408b80    ; 00457cde
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x108]               ; 00457ce3
    ADD ESP,0x8                         ; 00457cea
    LEA EAX,[ESP + 0x154]               ; 00457ced
    MOVSD ES:EDI,ESI                    ; 00457cf4
    MOVSD ES:EDI,ESI                    ; 00457cf5
    MOVSD ES:EDI,ESI                    ; 00457cf6
    CMP EAX,EBX                         ; 00457cf7
    JZ 0x00457acb                       ; 00457cf9
        ;   XREF to: 00457acb (CONDITIONAL_JUMP)  ; LAB_00457acb
    MOV EAX,dword ptr [ESP + 0x160]     ; 00457cff
    MOV dword ptr [ESP + 0x154],EAX     ; 00457d06
    MOV EAX,dword ptr [ESP + 0x164]     ; 00457d0d
    MOV dword ptr [ESP + 0x158],EAX     ; 00457d14
    MOV EAX,dword ptr [ESP + 0x168]     ; 00457d1b
    JMP 0x00457ac4                      ; 00457d22
        ;   XREF to: 00457ac4 (UNCONDITIONAL_JUMP)  ; LAB_00457ac4
    JBE 0x00457bfd                      ; 00457d27
        ;   XREF to: 00457bfd (CONDITIONAL_JUMP)  ; LAB_00457bfd
        ;   Label: LAB_00457d27
    CMP ESI,0x3                         ; 00457d2d
    JZ 0x004579af                       ; 00457d30
        ;   XREF to: 004579af (CONDITIONAL_JUMP)  ; LAB_004579af
    MOV EBX,dword ptr [EBP + 0x14]      ; 00457d36
        ;   Label: LAB_00457d36
    MOV EBX,dword ptr [EBX + 0xd064]    ; 00457d39
    LEA EAX,[ESP + 0x154]               ; 00457d3f
    ADD EBX,0x20                        ; 00457d46
    CMP EAX,EBX                         ; 00457d49
    JZ 0x00457acb                       ; 00457d4b
        ;   XREF to: 00457acb (CONDITIONAL_JUMP)  ; LAB_00457acb
    MOV EAX,dword ptr [EBX]             ; 00457d51
    MOV dword ptr [ESP + 0x154],EAX     ; 00457d53
    MOV EAX,dword ptr [EBX + 0x4]       ; 00457d5a
    MOV dword ptr [ESP + 0x158],EAX     ; 00457d5d
    MOV EAX,dword ptr [EBX + 0x8]       ; 00457d64
    JMP 0x00457ac4                      ; 00457d67
        ;   XREF to: 00457ac4 (UNCONDITIONAL_JUMP)  ; LAB_00457ac4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457d6c
        ;   Label: LAB_00457d6c
    MOV ECX,dword ptr [EAX + 0xd064]    ; 00457d6f
    PUSH ECX                            ; 00457d75
    PUSH EAX                            ; 00457d76
    PUSH 0x5ba774                       ; 00457d77 | = "%s can't pick up %s, giving up\n"
    MOV ESI,dword ptr [0x005f1690]      ; 00457d7c | g_CConsolePtr
    PUSH ESI                            ; 00457d82 | g_CConsoleInstance
    MOV EBX,EAX                         ; 00457d83
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00457d85
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,EBX                         ; 00457d8a
    ADD ESP,0x10                        ; 00457d8c
    MOV dword ptr [EAX + 0xd064],0x0    ; 00457d8f
    PUSH EAX                            ; 00457d99
    MOV dword ptr [EAX + 0xd060],0x41a00000 ; 00457d9a
    CALL core_demnfolk.cpp_FUN_00458fb0 ; 00457da4
        ;   XREF to: 00458fb0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458fb0()
    ADD ESP,0x4                         ; 00457da9
    XOR EAX,EAX                         ; 00457dac
    MOV ESP,EBP                         ; 00457dae
    POP EBP                             ; 00457db0
    POP EDI                             ; 00457db1
    POP ESI                             ; 00457db2
    POP EBX                             ; 00457db3
    RET                                 ; 00457db4
    PUSH 0x1                            ; 00457db5
        ;   Label: LAB_00457db5
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457db7
    PUSH 0x1f                           ; 00457dba
    ADD EAX,0x158                       ; 00457dbc
        ;   Label: LAB_00457dbc
    PUSH EAX                            ; 00457dc1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00457dc2
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00457dc7
    MOV EAX,0x1                         ; 00457dca
    MOV ESP,EBP                         ; 00457dcf
    POP EBP                             ; 00457dd1
    POP EDI                             ; 00457dd2
    POP ESI                             ; 00457dd3
    POP EBX                             ; 00457dd4
    RET                                 ; 00457dd5
    PUSH 0x1                            ; 00457dd6
        ;   Label: LAB_00457dd6
    MOV EAX,ESI                         ; 00457dd8
    PUSH 0x21                           ; 00457dda
    JMP 0x00457dbc                      ; 00457ddc
        ;   XREF to: 00457dbc (UNCONDITIONAL_JUMP)  ; LAB_00457dbc
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457dde
        ;   Label: LAB_00457dde
    MOV EBX,dword ptr [EAX + 0xd064]    ; 00457de1
    PUSH EBX                            ; 00457de7
    PUSH EAX                            ; 00457de8
    PUSH 0x5ba794                       ; 00457de9 | = "%s beginning to pickup %s\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00457dee | g_CConsolePtr
    PUSH EDI                            ; 00457df4 | g_CConsoleInstance
    MOV ESI,EAX                         ; 00457df5
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00457df7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,ESI                         ; 00457dfc
    MOV EAX,dword ptr [EAX + 0xd068]    ; 00457dfe
    ADD ESP,0x10                        ; 00457e04
    CMP EAX,0x2                         ; 00457e07
    JNC 0x00457e13                      ; 00457e0a
        ;   XREF to: 00457e13 (CONDITIONAL_JUMP)  ; LAB_00457e13
    CMP EAX,0x1                         ; 00457e0c
    JZ 0x00457db5                       ; 00457e0f
        ;   XREF to: 00457db5 (CONDITIONAL_JUMP)  ; LAB_00457db5
    JMP 0x00457e1a                      ; 00457e11
        ;   XREF to: 00457e1a (UNCONDITIONAL_JUMP)  ; LAB_00457e1a
    JBE 0x00457dd6                      ; 00457e13
        ;   XREF to: 00457dd6 (CONDITIONAL_JUMP)  ; LAB_00457dd6
        ;   Label: LAB_00457e13
    CMP EAX,0x3                         ; 00457e15
    JZ 0x00457db5                       ; 00457e18
        ;   XREF to: 00457db5 (CONDITIONAL_JUMP)  ; LAB_00457db5
    MOV EAX,0x5ba7af                    ; 00457e1a | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_00457e1a
    MOV EDX,0x615                       ; 00457e1f
    PUSH 0x5ba7c4                       ; 00457e24 | = "Invalid demon townsfolk object shape!"
    MOV [0x01d71de0],EAX                ; 00457e29 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDX      ; 00457e2e | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 00457e34
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 00457e39
    MOV EAX,0x1                         ; 00457e3c
    MOV ESP,EBP                         ; 00457e41
    POP EBP                             ; 00457e43
    POP EDI                             ; 00457e44
    POP ESI                             ; 00457e45
    POP EBX                             ; 00457e46
    RET                                 ; 00457e47
    MOV ECX,dword ptr [EBP + 0x14]      ; 00457e48
        ;   Label: LAB_00457e48
    PUSH ECX                            ; 00457e4b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00457e4c
    PUSH EBX                            ; 00457e52
    CALL dword ptr [EAX + 0x84]         ; 00457e53
    ADD ESP,0x8                         ; 00457e59
    CMP EAX,0x3                         ; 00457e5c
    JNZ 0x0045788c                      ; 00457e5f
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    PUSH EBX                            ; 00457e65
    MOV EAX,dword ptr [EBX + 0x154]     ; 00457e66
    LEA ESI,[ESP + 0x74]                ; 00457e6c
    LEA EDI,[ESP + 0xd4]                ; 00457e70
    CALL dword ptr [EAX + 0x1c]         ; 00457e77
    MOV ECX,0x6                         ; 00457e7a
    ADD ESP,0x4                         ; 00457e7f
    LEA ESI,[ESP + 0x70]                ; 00457e82
    MOV EAX,dword ptr [ESP + 0x214]     ; 00457e86
    MOVSD.REP ES:EDI,ESI                ; 00457e8d
    FLD float ptr [EAX + 0x4]           ; 00457e8f
    FLD float ptr [EAX + 0x8]           ; 00457e92
    FLD float ptr [EAX]                 ; 00457e95
    LEA EDI,[ESP + 0x1c0]               ; 00457e97
    LEA ESI,[ESP + 0x148]               ; 00457e9e
    LEA EAX,[ESP + 0x1c0]               ; 00457ea5
    FSUB float ptr [ESP + 0xd0]         ; 00457eac
    FXCH ST2                            ; 00457eb3
    FSUB float ptr [ESP + 0xd4]         ; 00457eb5
    FXCH                                ; 00457ebc
    FSUB float ptr [ESP + 0xd8]         ; 00457ebe
    FXCH ST2                            ; 00457ec5
    FSTP float ptr [ESP + 0x148]        ; 00457ec7
    FSTP float ptr [ESP + 0x14c]        ; 00457ece
    FSTP float ptr [ESP + 0x150]        ; 00457ed5
    PUSH EAX                            ; 00457edc
    MOVSD ES:EDI,ESI                    ; 00457edd
    MOVSD ES:EDI,ESI                    ; 00457ede
    MOVSD ES:EDI,ESI                    ; 00457edf
    CALL core_demnfolk.cpp_FUN_004549e0 ; 00457ee0
        ;   XREF to: 004549e0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_004549e0()
    ADD ESP,0x4                         ; 00457ee5
    MOV dword ptr [ESP + 0x204],EAX     ; 00457ee8
    TEST EAX,EAX                        ; 00457eef
    JZ 0x0045788c                       ; 00457ef1
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    PUSH EAX                            ; 00457ef7
    MOV ESI,dword ptr [EBP + 0x14]      ; 00457ef8
    PUSH ESI                            ; 00457efb
    CALL core_demnfolk.cpp_FUN_00458140 ; 00457efc
        ;   XREF to: 00458140 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458140()
    ADD ESP,0x8                         ; 00457f01
    TEST EAX,EAX                        ; 00457f04
    JZ 0x0045788c                       ; 00457f06
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    PUSH 0x5ba7ea                       ; 00457f0c | = "CBodyPart"
    PUSH EBX                            ; 00457f11
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00457f12
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00457f17
    TEST EAX,EAX                        ; 00457f1a
    JZ 0x00457f38                       ; 00457f1c
        ;   XREF to: 00457f38 (CONDITIONAL_JUMP)  ; LAB_00457f38
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457f1e
    MOV ESI,dword ptr [EBX + 0x6c]      ; 00457f21
    MOV EAX,dword ptr [EAX + 0xd058]    ; 00457f24
    AND ESI,0x3                         ; 00457f2a
    AND EAX,0x3                         ; 00457f2d
    CMP ESI,EAX                         ; 00457f30
    JNZ 0x0045788c                      ; 00457f32
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    LEA EAX,[EBX + 0x20]                ; 00457f38
        ;   Label: LAB_00457f38
    MOV ESI,dword ptr [ESP + 0x20c]     ; 00457f3b
    LEA EDI,[ESP + 0x1cc]               ; 00457f42
    FLD float ptr [EAX]                 ; 00457f49
    FLD float ptr [EAX + 0x4]           ; 00457f4b
    FLD float ptr [EAX + 0x8]           ; 00457f4e
    FXCH ST2                            ; 00457f51
    FSUB float ptr [ESI]                ; 00457f53
    FXCH                                ; 00457f55
    FSUB float ptr [ESI + 0x4]          ; 00457f57
    FXCH ST2                            ; 00457f5a
    FSUB float ptr [ESI + 0x8]          ; 00457f5c
    FXCH                                ; 00457f5f
    FSTP float ptr [ESP + 0x130]        ; 00457f61
    FXCH                                ; 00457f68
    FSTP float ptr [ESP + 0x134]        ; 00457f6a
    LEA ESI,[ESP + 0x130]               ; 00457f71
    FSTP float ptr [ESP + 0x138]        ; 00457f78
    MOVSD ES:EDI,ESI                    ; 00457f7f
    MOVSD ES:EDI,ESI                    ; 00457f80
    MOVSD ES:EDI,ESI                    ; 00457f81
    FLD float ptr [ESP + 0x1d0]         ; 00457f82
    FMUL ST0                            ; 00457f89
    FST float ptr [ESP + 0x1d0]         ; 00457f8b
    FMUL float ptr [ESP + 0x1d0]        ; 00457f92
    FST float ptr [ESP + 0x1d0]         ; 00457f99
    FMUL float ptr [ESP + 0x1d0]        ; 00457fa0
    FLD float ptr [ESP + 0x1cc]         ; 00457fa7
    FMUL ST0                            ; 00457fae
    FADDP                               ; 00457fb0
    FLD float ptr [ESP + 0x1d4]         ; 00457fb2
    FMUL ST0                            ; 00457fb9
    FADDP                               ; 00457fbb
    FSQRT                               ; 00457fbd
    FST float ptr [ESP]                 ; 00457fbf
    FCOMP double ptr [0x005ba822]       ; 00457fc2 | DAT_005ba822
    FNSTSW AX                           ; 00457fc8
    SAHF                                ; 00457fca
    JC 0x0045788c                       ; 00457fcb
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457fd1
    FLD float ptr [EAX + 0xd054]        ; 00457fd4
    FMUL float ptr [0x005ba832]         ; 00457fda | DAT_005ba832
    FCOMP float ptr [ESP]               ; 00457fe0
    FNSTSW AX                           ; 00457fe3
    SAHF                                ; 00457fe5
    JC 0x0045788c                       ; 00457fe6
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    MOV EAX,dword ptr [ESP + 0x21c]     ; 00457fec
    MOV dword ptr [ESP + EAX*0x1 + 0x8],EBX ; 00457ff3
    MOV EBX,dword ptr [ESP + 0x21c]     ; 00457ff7
    MOV EAX,dword ptr [ESP + 0x204]     ; 00457ffe
    MOV dword ptr [ESP + EBX*0x1 + 0x30],EAX ; 00458005
    MOV EAX,dword ptr [ESP + 0x208]     ; 00458009
    LEA EDI,[EBX + 0x4]                 ; 00458010
    INC EAX                             ; 00458013
    MOV dword ptr [ESP + 0x21c],EDI     ; 00458014
    MOV dword ptr [ESP + 0x208],EAX     ; 0045801b
    CMP EDI,0x28                        ; 00458022
    JL 0x0045788c                       ; 00458025
        ;   XREF to: 0045788c (CONDITIONAL_JUMP)  ; LAB_0045788c
    MOV ECX,dword ptr [ESP + 0x208]     ; 0045802b
        ;   Label: LAB_0045802b
    CMP ECX,0x1                         ; 00458032
    JL 0x004577bd                       ; 00458035
        ;   XREF to: 004577bd (CONDITIONAL_JUMP)  ; LAB_004577bd
    LEA EAX,[ECX + -0x1]                ; 0045803b
    PUSH EAX                            ; 0045803e
    PUSH 0x0                            ; 0045803f
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00458041
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00458046
    MOV ESI,dword ptr [EBP + 0x14]      ; 00458049
    MOV EBX,dword ptr [ESP + EAX*0x4 + 0x8] ; 0045804c
    MOV dword ptr [ESI + 0xd064],EBX    ; 00458050
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0x30] ; 00458056
    MOV EBX,dword ptr [ESI + 0xd058]    ; 0045805a
    MOV dword ptr [ESI + 0xd060],0xc2200000 ; 00458060
    INC EBX                             ; 0045806a
    MOV dword ptr [ESI + 0xd068],EAX    ; 0045806b
    MOV dword ptr [ESI + 0xd058],EBX    ; 00458071
    MOV EDI,ESI                         ; 00458077
    MOV ESI,dword ptr [ESI + 0xd064]    ; 00458079
    PUSH ESI                            ; 0045807f
    PUSH EDI                            ; 00458080
    PUSH 0x5ba7f4                       ; 00458081 | = "%s is going to try to pick up %s\n"
    MOV EAX,[0x005f1690]                ; 00458086 | g_CConsolePtr
    PUSH EAX                            ; 0045808b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0045808c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 00458091
    ADD ESP,0x10                        ; 00458096
    MOV ESP,EBP                         ; 00458099
    POP EBP                             ; 0045809b
    POP EDI                             ; 0045809c
    POP ESI                             ; 0045809d
    POP EBX                             ; 0045809e
    RET                                 ; 0045809f

