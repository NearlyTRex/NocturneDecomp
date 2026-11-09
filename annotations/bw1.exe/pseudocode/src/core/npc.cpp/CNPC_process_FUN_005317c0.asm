; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_npc_cpp_CNPC_process_FUN_005317c0(CNPC *this_ptr,float delta_time)
;
; Parameters:
; CNPC *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_hpriest.cpp_FUN_004f0a20 at 004f0a2a
;
; Referenced Globals:
;   TerminatedCString s_STAND_005ec745
;   TerminatedCString s_s_confused_while_walking_005ec74b
;   undefined4 DAT_005ec775
;   undefined4 DAT_005ec779
;   TerminatedCString s_STAND_005ec77e
;   CConsole* g_CConsolePtr = 007db5f0
;   CGore* g_CGorePtr = 01cd0e3c
;   CConsole g_CConsoleInstance
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   core_charactr.cpp_FUN_0042e160
;   core_charactr.cpp_FUN_00432240
;   core_charactr.cpp_FUN_00432f10
;   core_charactr.cpp_FUN_00433e80
;   core_charactr.cpp_FUN_00434790
;   core_charactr.cpp_FUN_00435320
;   core_gore.cpp_CGore_createBloodPool_FUN_004e62e0
;   core_motion.cpp_CMotionController_advance_FUN_00524270
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850
;   ... and 5 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005317c0
        ;   Label: core_npc.cpp_CNPC_process_FUN_005317c0
    PUSH ESI                            ; 005317c1
    PUSH EDI                            ; 005317c2
    PUSH EBP                            ; 005317c3
    MOV EBP,ESP                         ; 005317c4
    SUB ESP,0x80                        ; 005317c6
    AND ESP,0xfffffff8                  ; 005317cc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005317cf
    PUSH dword ptr [EBP + 0x18]         ; 005317d2
    PUSH EBX                            ; 005317d5
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 005317d6
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005317db
    TEST EAX,EAX                        ; 005317de
    JNZ 0x005317e9                      ; 005317e0
        ;   XREF to: 005317e9 (CONDITIONAL_JUMP)  ; LAB_005317e9
    MOV ESP,EBP                         ; 005317e2
    POP EBP                             ; 005317e4
    POP EDI                             ; 005317e5
    POP ESI                             ; 005317e6
    POP EBX                             ; 005317e7
    RET                                 ; 005317e8
    PUSH dword ptr [EBP + 0x18]         ; 005317e9
        ;   Label: LAB_005317e9
    PUSH EBX                            ; 005317ec
    CALL core_charactr.cpp_FUN_00434790 ; 005317ed
        ;   XREF to: 00434790 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434790()
    LEA EAX,[EBX + 0x249c]              ; 005317f2
    XOR EDX,EDX                         ; 005317f8
    ADD ESP,0x8                         ; 005317fa
    MOV dword ptr [EAX + 0x8],EDX       ; 005317fd
    FLD float ptr [EBP + 0x18]          ; 00531800
    MOV ECX,dword ptr [EAX + 0x8]       ; 00531803
    MOV dword ptr [EAX + 0x4],ECX       ; 00531806
    MOV ECX,dword ptr [EAX + 0x4]       ; 00531809
    MOV dword ptr [EAX],ECX             ; 0053180c
    FMUL float ptr [EBX + 0x1fab4]      ; 0053180e
    MOV dword ptr [ESP + 0x7c],EDX      ; 00531814
    LEA ESI,[EBX + 0x158]               ; 00531818
    FSTP float ptr [ESP]                ; 0053181e
    FLD float ptr [ESP]                 ; 00531821
        ;   Label: LAB_00531821
    FLDZ                                ; 00531824
    FCOMPP                              ; 00531826
    FNSTSW AX                           ; 00531828
    SAHF                                ; 0053182a
    JNC 0x00531845                      ; 0053182b
        ;   XREF to: 00531845 (CONDITIONAL_JUMP)  ; LAB_00531845
    MOV EAX,ESP                         ; 0053182d
    PUSH EAX                            ; 0053182f
    PUSH ESI                            ; 00531830
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 00531831
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00531836
    PUSH EAX                            ; 00531839
    PUSH EBX                            ; 0053183a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0053183b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00531840
    JMP 0x00531821                      ; 00531843
        ;   XREF to: 00531821 (UNCONDITIONAL_JUMP)  ; LAB_00531821
    PUSH EBX                            ; 00531845
        ;   Label: LAB_00531845
    MOV EAX,dword ptr [EBX + 0x154]     ; 00531846
    CALL dword ptr [EAX + 0x10c]        ; 0053184c
    ADD ESP,0x4                         ; 00531852
    CMP EAX,0x1                         ; 00531855
    JLE 0x005318d6                      ; 00531858
        ;   XREF to: 005318d6 (CONDITIONAL_JUMP)  ; LAB_005318d6
    CMP dword ptr [EBX + 0x70],0x1      ; 0053185e
    JNZ 0x005318d6                      ; 00531862
        ;   XREF to: 005318d6 (CONDITIONAL_JUMP)  ; LAB_005318d6
    MOV EDI,dword ptr [EBX + 0x1fab0]   ; 00531864
    TEST EDI,EDI                        ; 0053186a
    JNZ 0x005318d6                      ; 0053186c
        ;   XREF to: 005318d6 (CONDITIONAL_JUMP)  ; LAB_005318d6
    CMP dword ptr [EBX + 0xdc],0x0      ; 0053186e
    JNZ 0x005318d6                      ; 00531875
        ;   XREF to: 005318d6 (CONDITIONAL_JUMP)  ; LAB_005318d6
    PUSH EDI                            ; 00531877
    PUSH ESI                            ; 00531878
    LEA ESI,[ESP + 0x54]                ; 00531879
    LEA EDI,[ESP + 0x78]                ; 0053187d
    CALL core_skeleton.cpp_FUN_00569040 ; 00531881
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00531886
    LEA EAX,[ESP + 0x70]                ; 00531889
    LEA ESI,[ESP + 0x4c]                ; 0053188d
    PUSH EAX                            ; 00531891
    MOVSD ES:EDI,ESI                    ; 00531892
    MOVSD ES:EDI,ESI                    ; 00531893
    MOVSD ES:EDI,ESI                    ; 00531894
    PUSH EBX                            ; 00531895
    LEA ESI,[ESP + 0x30]                ; 00531896
    CALL core_actor.cpp_FUN_00408b40    ; 0053189a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0053189f
    PUSH 0x0                            ; 005318a2
    LEA EAX,[ESP + 0x38]                ; 005318a4
    LEA EDI,[ESP + 0x38]                ; 005318a8
    PUSH EAX                            ; 005318ac
    MOV EDX,dword ptr [0x0061dca4]      ; 005318ad | g_CGorePtr
    LEA ESI,[ESP + 0x30]                ; 005318b3
    PUSH EDX                            ; 005318b7
    MOVSD ES:EDI,ESI                    ; 005318b8
    MOVSD ES:EDI,ESI                    ; 005318b9
    MOVSD ES:EDI,ESI                    ; 005318ba
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 005318bb
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    MOV ECX,0x1                         ; 005318c0
    ADD ESP,0xc                         ; 005318c5
    MOV dword ptr [EBX + 0x1fab0],0x1   ; 005318c8
    MOV dword ptr [ESP + 0x7c],ECX      ; 005318d2
    FLD float ptr [EBP + 0x18]          ; 005318d6
        ;   Label: LAB_005318d6
    FMUL float ptr [EBX + 0x1fab4]      ; 005318d9
    FLD float ptr [EBX + 0x24a4]        ; 005318df
    SUB ESP,0x4                         ; 005318e5
    FSTP float ptr [EBX + 0x2524]       ; 005318e8
    FSTP float ptr [ESP]                ; 005318ee
    PUSH EBX                            ; 005318f1
    CALL core_charactr.cpp_FUN_00435320 ; 005318f2
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 005318f7
    PUSH dword ptr [EBP + 0x18]         ; 005318fa
    PUSH EBX                            ; 005318fd
    CALL core_charactr.cpp_FUN_00432240 ; 005318fe
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00531903
    TEST EAX,EAX                        ; 00531906
    JZ 0x00531950                       ; 00531908
        ;   XREF to: 00531950 (CONDITIONAL_JUMP)  ; LAB_00531950
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0053190a
    CMP EAX,0x2                         ; 00531910
    JNC 0x00531ac3                      ; 00531913
        ;   XREF to: 00531ac3 (CONDITIONAL_JUMP)  ; LAB_00531ac3
    CMP EAX,0x1                         ; 00531919
    JNZ 0x00531ad0                      ; 0053191c
        ;   XREF to: 00531ad0 (CONDITIONAL_JUMP)  ; LAB_00531ad0
    PUSH 0x1                            ; 00531922
        ;   Label: LAB_00531922
    PUSH 0x5ec779                       ; 00531924 | DAT_005ec779
    LEA EAX,[EBX + 0x158]               ; 00531929
        ;   Label: LAB_00531929
    PUSH EAX                            ; 0053192f
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 00531930
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 00531935
        ;   Label: LAB_00531935
    LEA EAX,[EBX + 0x249c]              ; 00531938
    MOV dword ptr [EAX + 0x8],0x0       ; 0053193e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00531945
    MOV dword ptr [EAX + 0x4],EDX       ; 00531948
    MOV EDX,dword ptr [EAX + 0x4]       ; 0053194b
    MOV dword ptr [EAX],EDX             ; 0053194e
    PUSH dword ptr [EBP + 0x18]         ; 00531950
        ;   Label: LAB_00531950
    PUSH EBX                            ; 00531953
    LEA ESI,[EBX + 0x2518]              ; 00531954
    CALL core_charactr.cpp_FUN_0042d700 ; 0053195a
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    ADD ESP,0x8                         ; 0053195f
    FLD float ptr [ESI]                 ; 00531962
    FMUL float ptr [EBP + 0x18]         ; 00531964
    FLD float ptr [ESI + 0x4]           ; 00531967
    FMUL float ptr [EBP + 0x18]         ; 0053196a
    FLD float ptr [ESI + 0x8]           ; 0053196d
    FMUL float ptr [EBP + 0x18]         ; 00531970
    LEA EDI,[ESP + 0x10]                ; 00531973
    LEA ESI,[ESP + 0x58]                ; 00531977
    FXCH ST2                            ; 0053197b
    FSTP float ptr [ESP + 0x58]         ; 0053197d
    FSTP float ptr [ESP + 0x5c]         ; 00531981
    FSTP float ptr [ESP + 0x60]         ; 00531985
    MOVSD ES:EDI,ESI                    ; 00531989
    MOVSD ES:EDI,ESI                    ; 0053198a
    MOVSD ES:EDI,ESI                    ; 0053198b
    LEA EAX,[EBX + 0x250c]              ; 0053198c
    FLD float ptr [ESP + 0x10]          ; 00531992
    FLD float ptr [ESP + 0x14]          ; 00531996
    FLD float ptr [ESP + 0x18]          ; 0053199a
    LEA EDI,[ESP + 0x4]                 ; 0053199e
    LEA ESI,[ESP + 0x40]                ; 005319a2
    FXCH ST2                            ; 005319a6
    FADD float ptr [EAX]                ; 005319a8
    FXCH                                ; 005319aa
    FADD float ptr [EAX + 0x4]          ; 005319ac
    FXCH ST2                            ; 005319af
    FADD float ptr [EAX + 0x8]          ; 005319b1
    FXCH                                ; 005319b4
    FSTP float ptr [ESP + 0x40]         ; 005319b6
    FXCH                                ; 005319ba
    FSTP float ptr [ESP + 0x44]         ; 005319bc
    FSTP float ptr [ESP + 0x48]         ; 005319c0
    MOVSD ES:EDI,ESI                    ; 005319c4
    MOVSD ES:EDI,ESI                    ; 005319c5
    MOVSD ES:EDI,ESI                    ; 005319c6
    LEA EDX,[EBX + 0x249c]              ; 005319c7
    FLD float ptr [ESP + 0x4]           ; 005319cd
    FLD float ptr [ESP + 0x8]           ; 005319d1
    FLD float ptr [ESP + 0xc]           ; 005319d5
    LEA EDI,[ESP + 0x1c]                ; 005319d9
    LEA ESI,[ESP + 0x64]                ; 005319dd
    FXCH ST2                            ; 005319e1
    FADD float ptr [EDX]                ; 005319e3
    FXCH                                ; 005319e5
    FADD float ptr [EDX + 0x4]          ; 005319e7
    FXCH ST2                            ; 005319ea
    FADD float ptr [EDX + 0x8]          ; 005319ec
    FXCH                                ; 005319ef
    FSTP float ptr [ESP + 0x64]         ; 005319f1
    FXCH                                ; 005319f5
    FSTP float ptr [ESP + 0x68]         ; 005319f7
    FSTP float ptr [ESP + 0x6c]         ; 005319fb
    MOVSD ES:EDI,ESI                    ; 005319ff
    MOVSD ES:EDI,ESI                    ; 00531a00
    MOVSD ES:EDI,ESI                    ; 00531a01
    MOV dword ptr [EAX + 0x8],0x0       ; 00531a02
    MOV ECX,dword ptr [EAX + 0x8]       ; 00531a09
    MOV dword ptr [EAX + 0x4],ECX       ; 00531a0c
    MOV ECX,dword ptr [EAX + 0x4]       ; 00531a0f
    MOV dword ptr [EAX],ECX             ; 00531a12
    MOV dword ptr [EDX + 0x8],0x0       ; 00531a14
    LEA EAX,[ESP + 0x1c]                ; 00531a1b
    FLD float ptr [EDX + 0x8]           ; 00531a1f
    PUSH EAX                            ; 00531a22
    FST float ptr [EDX + 0x4]           ; 00531a23
    PUSH EBX                            ; 00531a26
    FSTP float ptr [EDX]                ; 00531a27
    CALL core_charactr.cpp_FUN_0042d750 ; 00531a29
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00531a2e
    PUSH EBX                            ; 00531a31
    CALL core_charactr.cpp_FUN_0042e160 ; 00531a32
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00531a37
    LEA EAX,[EBX + 0x158]               ; 00531a3a
    PUSH EAX                            ; 00531a40
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00531a41
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00531a46
    MOV EDI,dword ptr [ESP + 0x7c]      ; 00531a49
    PUSH EDI                            ; 00531a4d
    PUSH dword ptr [EBP + 0x18]         ; 00531a4e
    PUSH EBX                            ; 00531a51
    CALL core_charactr.cpp_FUN_00432f10 ; 00531a52
        ;   XREF to: 00432f10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00432f10()
    ADD ESP,0xc                         ; 00531a57
    PUSH dword ptr [EBP + 0x18]         ; 00531a5a
    PUSH EBX                            ; 00531a5d
    CALL core_charactr.cpp_FUN_00433e80 ; 00531a5e
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00531a63
    MOV ESP,EBP                         ; 00531a66
    POP EBP                             ; 00531a68
    POP EDI                             ; 00531a69
    POP ESI                             ; 00531a6a
    POP EBX                             ; 00531a6b
    RET                                 ; 00531a6c
    PUSH 0x1                            ; 00531a6d
        ;   Label: LAB_00531a6d
    PUSH 0x5ec745                       ; 00531a6f | = "STAND"
    PUSH ESI                            ; 00531a74
    CALL core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850 ; 00531a75
        ;   XREF to: 00524850 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredStateByName_FUN_00524850(CMotionController * this_ptr, char * state_name, int force_immediate)
    ADD ESP,0xc                         ; 00531a7a
    PUSH EBX                            ; 00531a7d
    PUSH 0x5ec74b                       ; 00531a7e | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 00531a83 | g_CConsolePtr
    PUSH ESI                            ; 00531a89 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00445430 ; 00531a8a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00445430()
    JMP 0x00531935                      ; 00531a8f
        ;   XREF to: 00531935 (UNCONDITIONAL_JUMP)  ; LAB_00531935
    PUSH 0x0                            ; 00531a94
        ;   Label: LAB_00531a94
    PUSH 0x5ec775                       ; 00531a96 | DAT_005ec775
    PUSH ESI                            ; 00531a9b
    CALL core_motion.cpp_FUN_00524a00   ; 00531a9c
        ;   XREF to: 00524a00 (UNCONDITIONAL_CALL)  ; CMotionList * core_motion.cpp_FUN_00524a00(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00531aa1
    PUSH EAX                            ; 00531aa4
    CALL core_motion.cpp_FUN_00524150   ; 00531aa5
        ;   XREF to: 00524150 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_FUN_00524150(CMotionList * this_ptr, char * state_name, int error_on_not_found)
    ADD ESP,0xc                         ; 00531aaa
    TEST EAX,EAX                        ; 00531aad
    JL 0x00531922                       ; 00531aaf
        ;   XREF to: 00531922 (CONDITIONAL_JUMP)  ; LAB_00531922
    PUSH 0x1                            ; 00531ab5
    PUSH EAX                            ; 00531ab7
    PUSH ESI                            ; 00531ab8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00531ab9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    JMP 0x00531935                      ; 00531abe
        ;   XREF to: 00531935 (UNCONDITIONAL_JUMP)  ; LAB_00531935
    LEA ESI,[EBX + 0x158]               ; 00531ac3
        ;   Label: LAB_00531ac3
    JBE 0x00531a94                      ; 00531ac9
        ;   XREF to: 00531a94 (CONDITIONAL_JUMP)  ; LAB_00531a94
    CMP EAX,0x3                         ; 00531acb
    JZ 0x00531a6d                       ; 00531ace
        ;   XREF to: 00531a6d (CONDITIONAL_JUMP)  ; LAB_00531a6d
    PUSH 0x1                            ; 00531ad0
        ;   Label: LAB_00531ad0
    PUSH 0x5ec77e                       ; 00531ad2 | = "STAND"
    JMP 0x00531929                      ; 00531ad7
        ;   XREF to: 00531929 (UNCONDITIONAL_JUMP)  ; LAB_00531929

