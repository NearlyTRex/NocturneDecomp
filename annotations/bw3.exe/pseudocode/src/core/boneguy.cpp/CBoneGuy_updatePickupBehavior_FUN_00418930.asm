; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_00418930(CBoneGuy *this_ptr,float delta_time)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x12c]:1  local_12c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   core_boneguy.cpp_CBaalSkel_process_FUN_00419b40 at 0041a6ae
;   core_boneguy.cpp_CBoneGuy_process_FUN_004179b0 at 00418556
;
; Referenced Globals:
;   undefined4 s_s_can_t_pick_up_s_sombod_005b6f89+1
;   TerminatedCString s_s_can_t_pick_up_s_giving_005b6fbc
;   TerminatedCString s_s_beginning_to_pickup_s_005b6fe0
;   TerminatedCString s_CBodyPart_005b6ffb
;   TerminatedCString s_s_is_going_to_try_to_pic_005b7005
;   undefined4 DAT_005b702a
;   undefined4 DAT_005b7032
;   undefined4 DAT_005b703a
;   undefined4 DAT_005b7042
;   undefined4 DAT_005b704a
;   CConsole* g_CConsolePtr = 007f7ea4
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_bodypart.cpp_FUN_00416bd0
;   core_bodypart.cpp_FUN_00416c50
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   engine_console.cpp_CConsole_printf_FUN_00441ff0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418930
        ;   Label: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_00418930
    PUSH ESI                            ; 00418931
    PUSH EDI                            ; 00418932
    PUSH EBP                            ; 00418933
    MOV EBP,ESP                         ; 00418934
    SUB ESP,0x150                       ; 00418936
    AND ESP,0xfffffff8                  ; 0041893c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041893f
    FLD float ptr [EAX + 0xd05c]        ; 00418942
    FSUB float ptr [EBP + 0x18]         ; 00418948
    FST float ptr [EAX + 0xd05c]        ; 0041894b
    FLDZ                                ; 00418951
    FCOMPP                              ; 00418953
    FNSTSW AX                           ; 00418955
    SAHF                                ; 00418957
    JC 0x004189a3                       ; 00418958
        ;   XREF to: 004189a3 (CONDITIONAL_JUMP)  ; LAB_004189a3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041895a
        ;   Label: LAB_0041895a
    MOV ECX,dword ptr [EAX + 0x2628]    ; 0041895d
    TEST ECX,ECX                        ; 00418963
    JNZ 0x0041899a                      ; 00418965
        ;   XREF to: 0041899a (CONDITIONAL_JUMP)  ; LAB_0041899a
    FLD float ptr [EAX + 0xd060]        ; 00418967
    FLDZ                                ; 0041896d
    FCOMPP                              ; 0041896f
    FNSTSW AX                           ; 00418971
    SAHF                                ; 00418973
    JNC 0x004189e1                      ; 00418974
        ;   XREF to: 004189e1 (CONDITIONAL_JUMP)  ; LAB_004189e1
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418976
    FLD float ptr [EAX + 0xd060]        ; 00418979
    FSUB float ptr [EBP + 0x18]         ; 0041897f
    FST float ptr [EAX + 0xd060]        ; 00418982
    FLDZ                                ; 00418988
    FCOMPP                              ; 0041898a
    FNSTSW AX                           ; 0041898c
    SAHF                                ; 0041898e
    JBE 0x0041899a                      ; 0041898f
        ;   XREF to: 0041899a (CONDITIONAL_JUMP)  ; LAB_0041899a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418991
    MOV dword ptr [EAX + 0xd060],ECX    ; 00418994
    XOR EAX,EAX                         ; 0041899a
        ;   Label: LAB_0041899a
    MOV ESP,EBP                         ; 0041899c
    POP EBP                             ; 0041899e
    POP EDI                             ; 0041899f
    POP ESI                             ; 004189a0
    POP EBX                             ; 004189a1
    RET                                 ; 004189a2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004189a3
        ;   Label: LAB_004189a3
    MOV EDX,dword ptr [EAX + 0xd054]    ; 004189a6
    PUSH 0x41200000                     ; 004189ac
    INC EDX                             ; 004189b1
    PUSH 0x40a00000                     ; 004189b2
    MOV dword ptr [EAX + 0xd054],EDX    ; 004189b7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004189bd
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x154],EAX     ; 004189c2
    FLD float ptr [ESP + 0x154]         ; 004189c9
    ADD ESP,0x8                         ; 004189d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 004189d3
    FSTP float ptr [EAX + 0xd05c]       ; 004189d6
    JMP 0x0041895a                      ; 004189dc
        ;   XREF to: 0041895a (UNCONDITIONAL_JUMP)  ; LAB_0041895a
    MOV EAX,dword ptr [EBP + 0x14]      ; 004189e1
        ;   Label: LAB_004189e1
    MOV EBX,dword ptr [EBP + 0x14]      ; 004189e4
    MOV ESI,dword ptr [EAX + 0xd064]    ; 004189e7
    ADD EBX,0x20                        ; 004189ed
    TEST ESI,ESI                        ; 004189f0
    JNZ 0x00418a88                      ; 004189f2
        ;   XREF to: 00418a88 (CONDITIONAL_JUMP)  ; LAB_00418a88
    LEA EAX,[ESP + 0x34]                ; 004189f8
    MOV dword ptr [ESP + 0x148],ECX     ; 004189fc
    MOV dword ptr [ESP + 0x13c],ECX     ; 00418a03
    MOV dword ptr [ESP + 0x130],EBX     ; 00418a0a
    MOV dword ptr [ESP + 0x134],ECX     ; 00418a11
    ADD EAX,0xc                         ; 00418a18
    MOV dword ptr [ESP + 0x144],ECX     ; 00418a1b
    MOV dword ptr [ESP + 0x138],EAX     ; 00418a22
    MOV EAX,[0x00603b28]                ; 00418a29 | g_CDemonSetPtr
        ;   Label: LAB_00418a29
    MOV EBX,dword ptr [ESP + 0x13c]     ; 00418a2e
    CMP EBX,dword ptr [EAX + 0x14d164]  ; 00418a35 | g_CDemonSetInstance.actor_count
    JGE 0x00418ee9                      ; 00418a3b
        ;   XREF to: 00418ee9 (CONDITIONAL_JUMP)  ; LAB_00418ee9
    ADD EAX,dword ptr [ESP + 0x134]     ; 00418a41
    MOV EBX,dword ptr [EAX + 0x14d168]  ; 00418a48 | g_CDemonSetInstance.actors[0]
    PUSH EBX                            ; 00418a4e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418a4f
    CALL dword ptr [EAX + 0x94]         ; 00418a55
    ADD ESP,0x4                         ; 00418a5b
    TEST EAX,EAX                        ; 00418a5e
    JZ 0x00418d23                       ; 00418a60
        ;   XREF to: 00418d23 (CONDITIONAL_JUMP)  ; LAB_00418d23
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00418a66
        ;   Label: LAB_00418a66
    MOV EDI,dword ptr [ESP + 0x134]     ; 00418a6d
    INC EAX                             ; 00418a74
    ADD EDI,0x4                         ; 00418a75
    MOV dword ptr [ESP + 0x13c],EAX     ; 00418a78
    MOV dword ptr [ESP + 0x134],EDI     ; 00418a7f
    JMP 0x00418a29                      ; 00418a86
        ;   XREF to: 00418a29 (UNCONDITIONAL_JUMP)  ; LAB_00418a29
    MOV EAX,ESI                         ; 00418a88
        ;   Label: LAB_00418a88
    PUSH EAX                            ; 00418a8a
    MOV ESI,dword ptr [ESI + 0x154]     ; 00418a8b
    CALL dword ptr [ESI + 0x94]         ; 00418a91
    ADD ESP,0x4                         ; 00418a97
    TEST EAX,EAX                        ; 00418a9a
    JNZ 0x00418c4d                      ; 00418a9c
        ;   XREF to: 00418c4d (CONDITIONAL_JUMP)  ; LAB_00418c4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418aa2
    MOV EAX,dword ptr [EAX + 0xd064]    ; 00418aa5
    FLD float ptr [EBX]                 ; 00418aab
    FSUB float ptr [EAX + 0x20]         ; 00418aad
    FMUL ST0                            ; 00418ab0
    FLD float ptr [EBX + 0x8]           ; 00418ab2
    FSUB float ptr [EAX + 0x28]         ; 00418ab5
    FMUL ST0                            ; 00418ab8
    FADDP                               ; 00418aba
    FSQRT                               ; 00418abc
    FMUL double ptr [0x005b702a]        ; 00418abe | DAT_005b702a
    FSUBR double ptr [0x005b7032]       ; 00418ac4 | DAT_005b7032
    FLD1                                ; 00418aca
    FCOMPP                              ; 00418acc
    FNSTSW AX                           ; 00418ace
    SAHF                                ; 00418ad0
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418ad1
    MOV ESI,0xffffffff                  ; 00418ad4
    FLD float ptr [EAX + 0xd060]        ; 00418ad9
    FLDZ                                ; 00418adf
    FCOMPP                              ; 00418ae1
    FNSTSW AX                           ; 00418ae3
    SAHF                                ; 00418ae5
    JBE 0x00418c2e                      ; 00418ae6
        ;   XREF to: 00418c2e (CONDITIONAL_JUMP)  ; LAB_00418c2e
    MOV EDI,dword ptr [EBP + 0x14]      ; 00418aec
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418aef
    PUSH EDI                            ; 00418af2
    MOV EAX,dword ptr [EAX + 0xd064]    ; 00418af3
    PUSH EAX                            ; 00418af9
    MOV EBX,dword ptr [EAX + 0x154]     ; 00418afa
    CALL dword ptr [EBX + 0x84]         ; 00418b00
    ADD ESP,0x8                         ; 00418b06
    CMP EAX,0x3                         ; 00418b09
    JNZ 0x00418c2e                      ; 00418b0c
        ;   XREF to: 00418c2e (CONDITIONAL_JUMP)  ; LAB_00418c2e
    MOV EBX,dword ptr [EDI + 0xd064]    ; 00418b12
    PUSH EBX                            ; 00418b18
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418b19
    LEA ESI,[ESP + 0x80]                ; 00418b1f
    CALL dword ptr [EAX + 0x1c]         ; 00418b26
    MOV EAX,0x3f000000                  ; 00418b29
    ADD ESP,0x4                         ; 00418b2e
    LEA EDI,[ESP + 0x64]                ; 00418b31
    MOV dword ptr [ESP + 0x12c],EAX     ; 00418b35
    LEA EAX,[ESP + 0x12c]               ; 00418b3c
    MOV ECX,0x6                         ; 00418b43
    PUSH EAX                            ; 00418b48
    LEA EAX,[ESP + 0x74]                ; 00418b49
    LEA ESI,[ESP + 0x80]                ; 00418b4d
    PUSH EAX                            ; 00418b54
    LEA EAX,[ESP + 0x6c]                ; 00418b55
    MOVSD.REP ES:EDI,ESI                ; 00418b59
    PUSH EAX                            ; 00418b5b
    LEA ESI,[ESP + 0xc4]                ; 00418b5c
    LEA EDI,[ESP + 0x124]               ; 00418b63
    CALL core_bodypart.cpp_FUN_00416c50 ; 00418b6a
        ;   XREF to: 00416c50 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416c50()
    LEA ESI,[ESP + 0xc4]                ; 00418b6f
    ADD ESP,0x8                         ; 00418b76
    LEA EAX,[ESP + 0x11c]               ; 00418b79
    MOVSD ES:EDI,ESI                    ; 00418b80
    MOVSD ES:EDI,ESI                    ; 00418b81
    MOVSD ES:EDI,ESI                    ; 00418b82
    PUSH EAX                            ; 00418b83
    LEA ESI,[ESP + 0x108]               ; 00418b84
    LEA EDI,[ESP + 0xd8]                ; 00418b8b
    CALL core_bodypart.cpp_FUN_00416bd0 ; 00418b92
        ;   XREF to: 00416bd0 (UNCONDITIONAL_CALL)  ; undefined core_bodypart.cpp_FUN_00416bd0()
    LEA ESI,[ESP + 0x108]               ; 00418b97
    ADD ESP,0x8                         ; 00418b9e
    LEA EAX,[ESP + 0xdc]                ; 00418ba1
    FLD float ptr [ESP + 0x6c]          ; 00418ba8
    MOVSD ES:EDI,ESI                    ; 00418bac
    MOVSD ES:EDI,ESI                    ; 00418bad
    MOVSD ES:EDI,ESI                    ; 00418bae
    PUSH EAX                            ; 00418baf
    LEA EDI,[ESP + 0xe0]                ; 00418bb0
    FADD double ptr [0x005b703a]        ; 00418bb7 | DAT_005b703a
    LEA ESI,[ESP + 0xd4]                ; 00418bbd
    FSTP float ptr [ESP + 0xdc]         ; 00418bc4
    MOVSD ES:EDI,ESI                    ; 00418bcb
    MOVSD ES:EDI,ESI                    ; 00418bcc
    MOVSD ES:EDI,ESI                    ; 00418bcd
    PUSH EBX                            ; 00418bce
    LEA ESI,[ESP + 0x114]               ; 00418bcf
    CALL core_actor.cpp_FUN_00408b80    ; 00418bd6
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00418bdb
    LEA EDI,[ESP + 0xc4]                ; 00418bde
    LEA ESI,[ESP + 0x10c]               ; 00418be5
    PUSH 0x0                            ; 00418bec
    LEA EAX,[ESP + 0xec]                ; 00418bee
    PUSH 0x0                            ; 00418bf5
    MOV EDX,0x3fc00000                  ; 00418bf7
    PUSH EAX                            ; 00418bfc
    XOR ECX,ECX                         ; 00418bfd
    LEA EAX,[ESP + 0xd0]                ; 00418bff
    PUSH ECX                            ; 00418c06
    MOVSD ES:EDI,ESI                    ; 00418c07
    MOVSD ES:EDI,ESI                    ; 00418c08
    MOVSD ES:EDI,ESI                    ; 00418c09
    PUSH EAX                            ; 00418c0a
    MOV ESI,dword ptr [EBP + 0x14]      ; 00418c0b
    MOV dword ptr [ESP + 0xfc],EDX      ; 00418c0e
    PUSH ESI                            ; 00418c15
    MOV dword ptr [ESP + 0x104],ECX     ; 00418c16
    MOV dword ptr [ESP + 0x108],ECX     ; 00418c1d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00418c24
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00418c29
    MOV ESI,EAX                         ; 00418c2c
    MOV EBX,dword ptr [EBP + 0x14]      ; 00418c2e
        ;   Label: LAB_00418c2e
    ADD EBX,0x158                       ; 00418c31
    TEST ESI,ESI                        ; 00418c37
    JL 0x00418c9e                       ; 00418c39
        ;   XREF to: 00418c9e (CONDITIONAL_JUMP)  ; LAB_00418c9e
    JG 0x00418ceb                       ; 00418c3b
        ;   XREF to: 00418ceb (CONDITIONAL_JUMP)  ; LAB_00418ceb
    MOV EAX,0x1                         ; 00418c41
    MOV ESP,EBP                         ; 00418c46
    POP EBP                             ; 00418c48
    POP EDI                             ; 00418c49
    POP ESI                             ; 00418c4a
    POP EBX                             ; 00418c4b
    RET                                 ; 00418c4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418c4d
        ;   Label: LAB_00418c4d
    MOV EDX,dword ptr [EAX + 0xd064]    ; 00418c50
    PUSH EDX                            ; 00418c56
    PUSH EAX                            ; 00418c57
    PUSH 0x5b6f8a                       ; 00418c58 | s_s_can_t_pick_up_s_sombod_005b6f89+1
    MOV EBX,dword ptr [0x005f1690]      ; 00418c5d | g_CConsolePtr
    PUSH EBX                            ; 00418c63 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00418c64
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00418c69
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418c6c
    PUSH 0x1                            ; 00418c6f
    ADD EAX,0x158                       ; 00418c71
    PUSH 0x1                            ; 00418c76
    MOV dword ptr [EAX + 0xcf0c],0x0    ; 00418c78
    PUSH EAX                            ; 00418c82
    MOV dword ptr [EAX + 0xcf08],0x0    ; 00418c83
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418c8d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418c92
    XOR EAX,EAX                         ; 00418c95
    MOV ESP,EBP                         ; 00418c97
    POP EBP                             ; 00418c99
    POP EDI                             ; 00418c9a
    POP ESI                             ; 00418c9b
    POP EBX                             ; 00418c9c
    RET                                 ; 00418c9d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418c9e
        ;   Label: LAB_00418c9e
    MOV ECX,dword ptr [EAX + 0xd064]    ; 00418ca1
    PUSH ECX                            ; 00418ca7
    PUSH EAX                            ; 00418ca8
    PUSH 0x5b6fbc                       ; 00418ca9 | = "%s can't pick up %s, giving up!!!!\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00418cae | g_CConsolePtr
    PUSH EDI                            ; 00418cb4 | g_CConsoleInstance
    MOV ESI,EAX                         ; 00418cb5
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00418cb7
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00418cbc
    PUSH 0x1                            ; 00418cbf
    MOV EAX,ESI                         ; 00418cc1
    PUSH 0x1                            ; 00418cc3
    MOV dword ptr [EAX + 0xd064],0x0    ; 00418cc5
    PUSH EBX                            ; 00418ccf
    MOV dword ptr [EAX + 0xd060],0x41a00000 ; 00418cd0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418cda
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00418cdf
    XOR EAX,EAX                         ; 00418ce2
    MOV ESP,EBP                         ; 00418ce4
    POP EBP                             ; 00418ce6
    POP EDI                             ; 00418ce7
    POP ESI                             ; 00418ce8
    POP EBX                             ; 00418ce9
    RET                                 ; 00418cea
    MOV EAX,dword ptr [EBP + 0x14]      ; 00418ceb
        ;   Label: LAB_00418ceb
    MOV EDI,dword ptr [EAX + 0xd064]    ; 00418cee
    PUSH EDI                            ; 00418cf4
    PUSH EAX                            ; 00418cf5
    PUSH 0x5b6fe0                       ; 00418cf6 | = "%s beginning to pickup %s\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00418cfb | g_CConsolePtr
    PUSH EDX                            ; 00418d01 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00418d02
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 00418d07
    PUSH 0x1                            ; 00418d0a
    PUSH 0x7                            ; 00418d0c
    PUSH EBX                            ; 00418d0e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00418d0f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00418d14
    ADD ESP,0xc                         ; 00418d19
    MOV ESP,EBP                         ; 00418d1c
    POP EBP                             ; 00418d1e
    POP EDI                             ; 00418d1f
    POP ESI                             ; 00418d20
    POP EBX                             ; 00418d21
    RET                                 ; 00418d22
    MOV EDX,dword ptr [EBP + 0x14]      ; 00418d23
        ;   Label: LAB_00418d23
    PUSH EDX                            ; 00418d26
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418d27
    PUSH EBX                            ; 00418d2d
    CALL dword ptr [EAX + 0x84]         ; 00418d2e
    ADD ESP,0x8                         ; 00418d34
    CMP EAX,0x3                         ; 00418d37
    JNZ 0x00418a66                      ; 00418d3a
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    PUSH EBX                            ; 00418d40
    MOV EAX,dword ptr [EBX + 0x154]     ; 00418d41
    LEA ESI,[ESP + 0x50]                ; 00418d47
    LEA EDI,[ESP + 0x38]                ; 00418d4b
    CALL dword ptr [EAX + 0x1c]         ; 00418d4f
    MOV ECX,0x6                         ; 00418d52
    ADD ESP,0x4                         ; 00418d57
    LEA ESI,[ESP + 0x4c]                ; 00418d5a
    MOV EAX,dword ptr [ESP + 0x138]     ; 00418d5e
    MOVSD.REP ES:EDI,ESI                ; 00418d65
    FLD float ptr [EAX]                 ; 00418d67
    FLD float ptr [EAX + 0x4]           ; 00418d69
    FLD float ptr [EAX + 0x8]           ; 00418d6c
    LEA EDI,[ESP + 0x94]                ; 00418d6f
    LEA ESI,[ESP + 0xf4]                ; 00418d76
    FXCH ST2                            ; 00418d7d
    FSUB float ptr [ESP + 0x34]         ; 00418d7f
    FXCH                                ; 00418d83
    FSUB float ptr [ESP + 0x38]         ; 00418d85
    FXCH ST2                            ; 00418d89
    FSUB float ptr [ESP + 0x3c]         ; 00418d8b
    FXCH                                ; 00418d8f
    FSTP float ptr [ESP + 0xf4]         ; 00418d91
    FXCH                                ; 00418d98
    FSTP float ptr [ESP + 0xf8]         ; 00418d9a
    FSTP float ptr [ESP + 0xfc]         ; 00418da1
    MOVSD ES:EDI,ESI                    ; 00418da8
    MOVSD ES:EDI,ESI                    ; 00418da9
    MOVSD ES:EDI,ESI                    ; 00418daa
    FLD float ptr [ESP + 0x94]          ; 00418dab
    FLD1                                ; 00418db2
    FCOMPP                              ; 00418db4
    FNSTSW AX                           ; 00418db6
    SAHF                                ; 00418db8
    JBE 0x00418a66                      ; 00418db9
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    FLD float ptr [ESP + 0x98]          ; 00418dbf
    FLD1                                ; 00418dc6
    FCOMPP                              ; 00418dc8
    FNSTSW AX                           ; 00418dca
    SAHF                                ; 00418dcc
    JBE 0x00418a66                      ; 00418dcd
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    FLD float ptr [ESP + 0x9c]          ; 00418dd3
    FST double ptr [ESP]                ; 00418dda
    FCOMP double ptr [0x005b7042]       ; 00418ddd | DAT_005b7042
    FNSTSW AX                           ; 00418de3
    SAHF                                ; 00418de5
    JBE 0x00418a66                      ; 00418de6
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    FLD double ptr [ESP]                ; 00418dec
    FCOMP double ptr [0x005b704a]       ; 00418def | DAT_005b704a
    FNSTSW AX                           ; 00418df5
    SAHF                                ; 00418df7
    JNC 0x00418a66                      ; 00418df8
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    PUSH 0x5b6ffb                       ; 00418dfe | = "CBodyPart"
    PUSH EBX                            ; 00418e03
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00418e04
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00418e09
    TEST EAX,EAX                        ; 00418e0c
    JNZ 0x00418a66                      ; 00418e0e
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    LEA EAX,[EBX + 0x20]                ; 00418e14
    MOV ESI,dword ptr [ESP + 0x130]     ; 00418e17
    LEA EDI,[ESP + 0xa0]                ; 00418e1e
    FLD float ptr [EAX]                 ; 00418e25
    FLD float ptr [EAX + 0x4]           ; 00418e27
    FLD float ptr [EAX + 0x8]           ; 00418e2a
    FXCH ST2                            ; 00418e2d
    FSUB float ptr [ESI]                ; 00418e2f
    FXCH                                ; 00418e31
    FSUB float ptr [ESI + 0x4]          ; 00418e33
    FXCH ST2                            ; 00418e36
    FSUB float ptr [ESI + 0x8]          ; 00418e38
    FXCH                                ; 00418e3b
    FSTP float ptr [ESP + 0xac]         ; 00418e3d
    FXCH                                ; 00418e44
    FSTP float ptr [ESP + 0xb0]         ; 00418e46
    LEA ESI,[ESP + 0xac]                ; 00418e4d
    FSTP float ptr [ESP + 0xb4]         ; 00418e54
    MOVSD ES:EDI,ESI                    ; 00418e5b
    MOVSD ES:EDI,ESI                    ; 00418e5c
    MOVSD ES:EDI,ESI                    ; 00418e5d
    FLD float ptr [ESP + 0xa4]          ; 00418e5e
    FMUL ST0                            ; 00418e65
    FST float ptr [ESP + 0xa4]          ; 00418e67
    FMUL float ptr [ESP + 0xa4]         ; 00418e6e
    FST float ptr [ESP + 0xa4]          ; 00418e75
    FMUL float ptr [ESP + 0xa4]         ; 00418e7c
    FLD float ptr [ESP + 0xa0]          ; 00418e83
    FMUL ST0                            ; 00418e8a
    FADDP                               ; 00418e8c
    FLD float ptr [ESP + 0xa8]          ; 00418e8e
    FMUL ST0                            ; 00418e95
    FADDP                               ; 00418e97
    FSQRT                               ; 00418e99
    FST float ptr [ESP + 0x8]           ; 00418e9b
    FCOMP double ptr [0x005b7032]       ; 00418e9f | DAT_005b7032
    FNSTSW AX                           ; 00418ea5
    SAHF                                ; 00418ea7
    JC 0x00418a66                       ; 00418ea8
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    CMP dword ptr [ESP + 0x8],0x41700000 ; 00418eae
    JG 0x00418a66                       ; 00418eb6
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    MOV ESI,dword ptr [ESP + 0x148]     ; 00418ebc
    MOV EAX,dword ptr [ESP + 0x144]     ; 00418ec3
    INC ESI                             ; 00418eca
    MOV dword ptr [ESP + EAX*0x1 + 0xc],EBX ; 00418ecb
    LEA EBX,[EAX + 0x4]                 ; 00418ecf
    MOV dword ptr [ESP + 0x148],ESI     ; 00418ed2
    MOV dword ptr [ESP + 0x144],EBX     ; 00418ed9
    CMP EBX,0x28                        ; 00418ee0
    JL 0x00418a66                       ; 00418ee3
        ;   XREF to: 00418a66 (CONDITIONAL_JUMP)  ; LAB_00418a66
    MOV EAX,dword ptr [ESP + 0x148]     ; 00418ee9
        ;   Label: LAB_00418ee9
    CMP EAX,0x1                         ; 00418ef0
    JL 0x0041899a                       ; 00418ef3
        ;   XREF to: 0041899a (CONDITIONAL_JUMP)  ; LAB_0041899a
    DEC EAX                             ; 00418ef9
    PUSH EAX                            ; 00418efa
    PUSH 0x0                            ; 00418efb
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00418efd
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00418f02
    MOV EBX,dword ptr [EBP + 0x14]      ; 00418f05
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00418f08
    MOV dword ptr [EBX + 0xd064],EAX    ; 00418f0c
    MOV ECX,dword ptr [EBX + 0xd064]    ; 00418f12
    PUSH ECX                            ; 00418f18
    PUSH EBX                            ; 00418f19
    MOV ESI,dword ptr [0x005f1690]      ; 00418f1a | g_CConsolePtr
    MOV EDX,dword ptr [EBX + 0xd054]    ; 00418f20
    PUSH 0x5b7005                       ; 00418f26 | = "%s is going to try to pick up %s\n"
    MOV dword ptr [EBX + 0xd060],0xc2200000 ; 00418f2b
    INC EDX                             ; 00418f35
    PUSH ESI                            ; 00418f36 | g_CConsoleInstance
    MOV dword ptr [EBX + 0xd054],EDX    ; 00418f37
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00418f3d
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 00418f42
    ADD ESP,0x10                        ; 00418f47
    MOV ESP,EBP                         ; 00418f4a
    POP EBP                             ; 00418f4c
    POP EDI                             ; 00418f4d
    POP ESI                             ; 00418f4e
    POP EBX                             ; 00418f4f
    RET                                 ; 00418f50

