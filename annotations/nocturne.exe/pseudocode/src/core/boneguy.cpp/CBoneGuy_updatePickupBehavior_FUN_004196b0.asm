; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_004196b0(CBoneGuy *this_ptr,float delta_time)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_00418a00 at 0041936a
;
; Referenced Globals:
;   TerminatedCString s_s_can_t_pick_up_s_sombod_0057937e
;   TerminatedCString s_s_can_t_pick_up_s_giving_005793b0
;   TerminatedCString s_s_beginning_to_pickup_s_005793d4
;   TerminatedCString s_CBodyPart_005793ef
;   TerminatedCString s_s_is_going_to_try_to_pic_005793f9
;   double DOUBLE_0057941e = 0.333333333333333
;   double DOUBLE_00579426 = 5
;   double DOUBLE_0057942e = 0.400000000000000
;   double DOUBLE_00579436 = 2
;   double DOUBLE_0057943e = 6
;   CConsole* g_CConsole_PTR_005ad350 = 0077ad0c
;   CDemonSet* g_CDemonSet_PTR_005be368 = 01e57284
;   CConsole g_CConsole_0077ad0c
;   undefined4 g_CDemonSet_01e57284.actor_count
;   undefined4 g_CDemonSet_01e57284.actors[0]
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_actor.cpp_isOfClass_FUN_0040d7e0
;   core_bodypart.cpp_addVector_FUN_00417fc0
;   core_bodypart.cpp_scaleVector_FUN_00417f60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   engine_console.cpp_CConsole_printf_FUN_0043ac60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004196b0
        ;   Label: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_004196b0
    PUSH ESI                            ; 004196b1
    PUSH EDI                            ; 004196b2
    PUSH EBP                            ; 004196b3
    MOV EBP,ESP                         ; 004196b4
    SUB ESP,0xcc                        ; 004196b6
    AND ESP,0xfffffff8                  ; 004196bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004196bf
    FLD float ptr [EAX + 0xbd28]        ; 004196c2
    FSUB float ptr [EBP + 0x18]         ; 004196c8
    FST float ptr [EAX + 0xbd28]        ; 004196cb
    FLDZ                                ; 004196d1
    FCOMPP                              ; 004196d3
    FNSTSW AX                           ; 004196d5
    SAHF                                ; 004196d7
    JC 0x00419723                       ; 004196d8
        ;   XREF to: 00419723 (CONDITIONAL_JUMP)  ; LAB_00419723
    MOV EAX,dword ptr [EBP + 0x14]      ; 004196da
        ;   Label: LAB_004196da
    MOV ECX,dword ptr [EAX + 0x24f0]    ; 004196dd
    TEST ECX,ECX                        ; 004196e3
    JNZ 0x0041971a                      ; 004196e5
        ;   XREF to: 0041971a (CONDITIONAL_JUMP)  ; LAB_0041971a
    FLD float ptr [EAX + 0xbd2c]        ; 004196e7
    FLDZ                                ; 004196ed
    FCOMPP                              ; 004196ef
    FNSTSW AX                           ; 004196f1
    SAHF                                ; 004196f3
    JNC 0x00419761                      ; 004196f4
        ;   XREF to: 00419761 (CONDITIONAL_JUMP)  ; LAB_00419761
    MOV EAX,dword ptr [EBP + 0x14]      ; 004196f6
    FLD float ptr [EAX + 0xbd2c]        ; 004196f9
    FSUB float ptr [EBP + 0x18]         ; 004196ff
    FST float ptr [EAX + 0xbd2c]        ; 00419702
    FLDZ                                ; 00419708
    FCOMPP                              ; 0041970a
    FNSTSW AX                           ; 0041970c
    SAHF                                ; 0041970e
    JBE 0x0041971a                      ; 0041970f
        ;   XREF to: 0041971a (CONDITIONAL_JUMP)  ; LAB_0041971a
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419711
    MOV dword ptr [EAX + 0xbd2c],ECX    ; 00419714
    XOR EAX,EAX                         ; 0041971a
        ;   Label: LAB_0041971a
    MOV ESP,EBP                         ; 0041971c
    POP EBP                             ; 0041971e
    POP EDI                             ; 0041971f
    POP ESI                             ; 00419720
    POP EBX                             ; 00419721
    RET                                 ; 00419722
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419723
        ;   Label: LAB_00419723
    MOV EDX,dword ptr [EAX + 0xbd24]    ; 00419726
    PUSH 0x41200000                     ; 0041972c
    INC EDX                             ; 00419731
    PUSH 0x40a00000                     ; 00419732
    MOV dword ptr [EAX + 0xbd24],EDX    ; 00419737
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0041973d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd0],EAX      ; 00419742
    FLD float ptr [ESP + 0xd0]          ; 00419749
    ADD ESP,0x8                         ; 00419750
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419753
    FSTP float ptr [EAX + 0xbd28]       ; 00419756
    JMP 0x004196da                      ; 0041975c
        ;   XREF to: 004196da (UNCONDITIONAL_JUMP)  ; LAB_004196da
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419761
        ;   Label: LAB_00419761
    MOV EDI,dword ptr [EBP + 0x14]      ; 00419764
    MOV EBX,dword ptr [EAX + 0xbd30]    ; 00419767
    ADD EDI,0x20                        ; 0041976d
    TEST EBX,EBX                        ; 00419770
    JNZ 0x004197ea                      ; 00419772
        ;   XREF to: 004197ea (CONDITIONAL_JUMP)  ; LAB_004197ea
    MOV dword ptr [ESP + 0xb4],ECX      ; 00419774
    MOV dword ptr [ESP + 0xbc],ECX      ; 0041977b
    MOV dword ptr [ESP + 0xc0],ECX      ; 00419782
    XOR ESI,ESI                         ; 00419789
    MOV EAX,[0x005be368]                ; 0041978b | g_CDemonSet_PTR_005be368
        ;   Label: LAB_0041978b
    MOV EDX,dword ptr [ESP + 0xbc]      ; 00419790
    CMP EDX,dword ptr [EAX + 0x14cd6c]  ; 00419797 | g_CDemonSet_01e57284.actor_count
    JGE 0x00419b75                      ; 0041979d
        ;   XREF to: 00419b75 (CONDITIONAL_JUMP)  ; LAB_00419b75
    ADD EAX,dword ptr [ESP + 0xc0]      ; 004197a3
    MOV EBX,dword ptr [EAX + 0x14cd70]  ; 004197aa | g_CDemonSet_01e57284.actors[0]
    PUSH EBX                            ; 004197b0
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004197b1
    CALL dword ptr [EAX + 0x8c]         ; 004197b7
    ADD ESP,0x4                         ; 004197bd
    TEST EAX,EAX                        ; 004197c0
    JZ 0x00419a15                       ; 004197c2
        ;   XREF to: 00419a15 (CONDITIONAL_JUMP)  ; LAB_00419a15
    MOV EDX,dword ptr [ESP + 0xbc]      ; 004197c8
        ;   Label: LAB_004197c8
    MOV EAX,dword ptr [ESP + 0xc0]      ; 004197cf
    INC EDX                             ; 004197d6
    ADD EAX,0x4                         ; 004197d7
    MOV dword ptr [ESP + 0xbc],EDX      ; 004197da
    MOV dword ptr [ESP + 0xc0],EAX      ; 004197e1
    JMP 0x0041978b                      ; 004197e8
        ;   XREF to: 0041978b (UNCONDITIONAL_JUMP)  ; LAB_0041978b
    PUSH EBX                            ; 004197ea
        ;   Label: LAB_004197ea
    MOV EDX,dword ptr [EBX + 0x14c]     ; 004197eb
    CALL dword ptr [EDX + 0x8c]         ; 004197f1
    ADD ESP,0x4                         ; 004197f7
    TEST EAX,EAX                        ; 004197fa
    JNZ 0x00419941                      ; 004197fc
        ;   XREF to: 00419941 (CONDITIONAL_JUMP)  ; LAB_00419941
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419802
    MOV EAX,dword ptr [EAX + 0xbd30]    ; 00419805
    FLD float ptr [EDI]                 ; 0041980b
    FSUB float ptr [EAX + 0x20]         ; 0041980d
    FMUL ST0                            ; 00419810
    FLD float ptr [EDI + 0x8]           ; 00419812
    FSUB float ptr [EAX + 0x28]         ; 00419815
    FMUL ST0                            ; 00419818
    FADDP                               ; 0041981a
    FSQRT                               ; 0041981c
    FMUL double ptr [0x0057941e]        ; 0041981e | DOUBLE_0057941e
    FSUBR double ptr [0x00579426]       ; 00419824 | DOUBLE_00579426
    FLD1                                ; 0041982a
    FCOMPP                              ; 0041982c
    FNSTSW AX                           ; 0041982e
    SAHF                                ; 00419830
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419831
    MOV EBX,0xffffffff                  ; 00419834
    FLD float ptr [EAX + 0xbd2c]        ; 00419839
    FLDZ                                ; 0041983f
    FCOMPP                              ; 00419841
    FNSTSW AX                           ; 00419843
    SAHF                                ; 00419845
    JBE 0x00419922                      ; 00419846
        ;   XREF to: 00419922 (CONDITIONAL_JUMP)  ; LAB_00419922
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041984c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041984f
    PUSH ECX                            ; 00419852
    MOV EAX,dword ptr [EAX + 0xbd30]    ; 00419853
    PUSH EAX                            ; 00419859
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0041985a
    CALL dword ptr [EDX + 0x7c]         ; 00419860
    ADD ESP,0x8                         ; 00419863
    CMP EAX,0x3                         ; 00419866
    JNZ 0x00419922                      ; 00419869
        ;   XREF to: 00419922 (CONDITIONAL_JUMP)  ; LAB_00419922
    LEA EDX,[ESP + 0x4c]                ; 0041986f
    MOV EBX,dword ptr [EBP + 0x14]      ; 00419873
    PUSH EDX                            ; 00419876
    MOV EBX,dword ptr [EBX + 0xbd30]    ; 00419877
    PUSH EBX                            ; 0041987d
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0041987e
    CALL dword ptr [EAX + 0x14]         ; 00419884
    ADD ESP,0x8                         ; 00419887
    LEA EAX,[ESP + 0xb0]                ; 0041988a
    PUSH EAX                            ; 00419891
    LEA EAX,[ESP + 0x74]                ; 00419892
    PUSH EAX                            ; 00419896
    LEA EAX,[ESP + 0x60]                ; 00419897
    PUSH EAX                            ; 0041989b
    LEA EAX,[ESP + 0xa0]                ; 0041989c
    PUSH EAX                            ; 004198a3
    LEA EAX,[ESP + 0x5c]                ; 004198a4
    MOV ESI,0x3f000000                  ; 004198a8
    PUSH EAX                            ; 004198ad
    MOV dword ptr [ESP + 0xc4],ESI      ; 004198ae
    CALL core_bodypart.cpp_addVector_FUN_00417fc0 ; 004198b5
        ;   XREF to: 00417fc0 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_addVector_FUN_00417fc0(CVector3f * a, CVector3f * dst, CVector3f * b)
    ADD ESP,0xc                         ; 004198ba
    PUSH EAX                            ; 004198bd
    CALL core_bodypart.cpp_scaleVector_FUN_00417f60 ; 004198be
        ;   XREF to: 00417f60 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_scaleVector_FUN_00417f60(CVector3f * src, CVector3f * dst, float * scalar)
    ADD ESP,0xc                         ; 004198c3
    LEA EAX,[ESP + 0x70]                ; 004198c6
    PUSH EAX                            ; 004198ca
    LEA EAX,[ESP + 0x8c]                ; 004198cb
    FLD float ptr [ESP + 0x58]          ; 004198d2
    PUSH EAX                            ; 004198d6
    FADD double ptr [0x0057942e]        ; 004198d7 | DOUBLE_0057942e
    PUSH EBX                            ; 004198dd
    FSTP float ptr [ESP + 0x84]         ; 004198de
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004198e5
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004198ea
    XOR EAX,EAX                         ; 004198ed
    PUSH 0x0                            ; 004198ef
    MOV dword ptr [ESP + 0x6c],EAX      ; 004198f1
    MOV dword ptr [ESP + 0x70],EAX      ; 004198f5
    LEA EAX,[ESP + 0x68]                ; 004198f9
    PUSH 0x0                            ; 004198fd
    PUSH EAX                            ; 004198ff
    XOR EDX,EDX                         ; 00419900
    PUSH EDX                            ; 00419902
    LEA EAX,[ESP + 0x98]                ; 00419903
    PUSH EAX                            ; 0041990a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041990b
    MOV EDI,0x3fc00000                  ; 0041990e
    PUSH ECX                            ; 00419913
    MOV dword ptr [ESP + 0x7c],EDI      ; 00419914
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0 ; 00419918
        ;   XREF to: 004247f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004247f0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041991d
    MOV EBX,EAX                         ; 00419920
    MOV ESI,dword ptr [EBP + 0x14]      ; 00419922
        ;   Label: LAB_00419922
    ADD ESI,0x150                       ; 00419925
    TEST EBX,EBX                        ; 0041992b
    JL 0x00419992                       ; 0041992d
        ;   XREF to: 00419992 (CONDITIONAL_JUMP)  ; LAB_00419992
    JG 0x004199de                       ; 0041992f
        ;   XREF to: 004199de (CONDITIONAL_JUMP)  ; LAB_004199de
    MOV EAX,0x1                         ; 00419935
    MOV ESP,EBP                         ; 0041993a
    POP EBP                             ; 0041993c
    POP EDI                             ; 0041993d
    POP ESI                             ; 0041993e
    POP EBX                             ; 0041993f
    RET                                 ; 00419940
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419941
        ;   Label: LAB_00419941
    MOV ESI,dword ptr [EAX + 0xbd30]    ; 00419944
    PUSH ESI                            ; 0041994a
    PUSH EAX                            ; 0041994b
    PUSH 0x57937e                       ; 0041994c | = "%s can't pick up %s, sombody else bea..."
    MOV EDI,EAX                         ; 00419951
    MOV EAX,[0x005ad350]                ; 00419953 | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 00419958 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00419959
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0041995e
    MOV EAX,EDI                         ; 00419961
    PUSH 0x1                            ; 00419963
    ADD EAX,0x150                       ; 00419965
    PUSH 0x1                            ; 0041996a
    MOV dword ptr [EAX + 0xbbe0],0x0    ; 0041996c
    PUSH EAX                            ; 00419976
    MOV dword ptr [EAX + 0xbbdc],0x0    ; 00419977
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419981
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00419986
    XOR EAX,EAX                         ; 00419989
    MOV ESP,EBP                         ; 0041998b
    POP EBP                             ; 0041998d
    POP EDI                             ; 0041998e
    POP ESI                             ; 0041998f
    POP EBX                             ; 00419990
    RET                                 ; 00419991
    MOV EAX,dword ptr [EBP + 0x14]      ; 00419992
        ;   Label: LAB_00419992
    MOV EDX,dword ptr [EAX + 0xbd30]    ; 00419995
    PUSH EDX                            ; 0041999b
    PUSH EAX                            ; 0041999c
    PUSH 0x5793b0                       ; 0041999d | = "%s can't pick up %s, giving up!!!!\n"
    MOV EBX,dword ptr [0x005ad350]      ; 004199a2 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 004199a8 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004199a9
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004199ae
    PUSH 0x1                            ; 004199b1
    MOV EAX,dword ptr [EBP + 0x14]      ; 004199b3
    PUSH 0x1                            ; 004199b6
    MOV dword ptr [EAX + 0xbd30],0x0    ; 004199b8
    PUSH ESI                            ; 004199c2
    MOV dword ptr [EAX + 0xbd2c],0x41a00000 ; 004199c3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004199cd
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004199d2
    XOR EAX,EAX                         ; 004199d5
    MOV ESP,EBP                         ; 004199d7
    POP EBP                             ; 004199d9
    POP EDI                             ; 004199da
    POP ESI                             ; 004199db
    POP EBX                             ; 004199dc
    RET                                 ; 004199dd
    MOV EAX,dword ptr [EBP + 0x14]      ; 004199de
        ;   Label: LAB_004199de
    MOV EBX,dword ptr [EAX + 0xbd30]    ; 004199e1
    PUSH EBX                            ; 004199e7
    PUSH EAX                            ; 004199e8
    PUSH 0x5793d4                       ; 004199e9 | = "%s beginning to pickup %s\n"
    MOV EAX,[0x005ad350]                ; 004199ee | g_CConsole_PTR_005ad350
    PUSH EAX                            ; 004199f3 | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 004199f4
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 004199f9
    PUSH 0x1                            ; 004199fc
    PUSH 0x7                            ; 004199fe
    PUSH ESI                            ; 00419a00
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00419a01
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 00419a06
    ADD ESP,0xc                         ; 00419a0b
    MOV ESP,EBP                         ; 00419a0e
    POP EBP                             ; 00419a10
    POP EDI                             ; 00419a11
    POP ESI                             ; 00419a12
    POP EBX                             ; 00419a13
    RET                                 ; 00419a14
    MOV EDX,dword ptr [EBP + 0x14]      ; 00419a15
        ;   Label: LAB_00419a15
    PUSH EDX                            ; 00419a18
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00419a19
    PUSH EBX                            ; 00419a1f
    CALL dword ptr [EAX + 0x7c]         ; 00419a20
    ADD ESP,0x8                         ; 00419a23
    CMP EAX,0x3                         ; 00419a26
    JNZ 0x004197c8                      ; 00419a29
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    LEA EAX,[ESP + 0x34]                ; 00419a2f
    PUSH EAX                            ; 00419a33
    MOV EDX,dword ptr [EBX + 0x14c]     ; 00419a34
    PUSH EBX                            ; 00419a3a
    CALL dword ptr [EDX + 0x14]         ; 00419a3b
    LEA EDX,[EAX + 0xc]                 ; 00419a3e
    FLD float ptr [EDX]                 ; 00419a41
    FSUB float ptr [EAX]                ; 00419a43
    ADD ESP,0x8                         ; 00419a45
    FSTP float ptr [ESP + 0x7c]         ; 00419a48
    FLD float ptr [EDX + 0x4]           ; 00419a4c
    FSUB float ptr [EAX + 0x4]          ; 00419a4f
    FLD float ptr [ESP + 0x7c]          ; 00419a52
    FXCH                                ; 00419a56
    FSTP float ptr [ESP + 0x80]         ; 00419a58
    FLD float ptr [EDX + 0x8]           ; 00419a5f
    FSUB float ptr [EAX + 0x8]          ; 00419a62
    FLD1                                ; 00419a65
    FXCH                                ; 00419a67
    FSTP float ptr [ESP + 0x84]         ; 00419a69
    FCOMPP                              ; 00419a70
    FNSTSW AX                           ; 00419a72
    SAHF                                ; 00419a74
    JBE 0x004197c8                      ; 00419a75
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    FLD float ptr [ESP + 0x80]          ; 00419a7b
    FLD1                                ; 00419a82
    FCOMPP                              ; 00419a84
    FNSTSW AX                           ; 00419a86
    SAHF                                ; 00419a88
    JBE 0x004197c8                      ; 00419a89
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    FLD float ptr [ESP + 0x84]          ; 00419a8f
    FST double ptr [ESP]                ; 00419a96
    FCOMP double ptr [0x00579436]       ; 00419a99 | DOUBLE_00579436
    FNSTSW AX                           ; 00419a9f
    SAHF                                ; 00419aa1
    JBE 0x004197c8                      ; 00419aa2
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    FLD double ptr [ESP]                ; 00419aa8
    FCOMP double ptr [0x0057943e]       ; 00419aab | DOUBLE_0057943e
    FNSTSW AX                           ; 00419ab1
    SAHF                                ; 00419ab3
    JNC 0x004197c8                      ; 00419ab4
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    PUSH 0x5793ef                       ; 00419aba | = "CBodyPart"
    PUSH EBX                            ; 00419abf
    CALL core_actor.cpp_isOfClass_FUN_0040d7e0 ; 00419ac0
        ;   XREF to: 0040d7e0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040d7e0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00419ac5
    TEST EAX,EAX                        ; 00419ac8
    JNZ 0x004197c8                      ; 00419aca
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    LEA EAX,[EBX + 0x20]                ; 00419ad0
    FLD float ptr [EAX]                 ; 00419ad3
    FSUB float ptr [EDI]                ; 00419ad5
    FSTP float ptr [ESP + 0xa0]         ; 00419ad7
    FLD float ptr [EAX + 0x4]           ; 00419ade
    FSUB float ptr [EDI + 0x4]          ; 00419ae1
    FST float ptr [ESP + 0xa4]          ; 00419ae4
    FMUL float ptr [ESP + 0xa4]         ; 00419aeb
    FLD float ptr [EAX + 0x8]           ; 00419af2
    FSUB float ptr [EDI + 0x8]          ; 00419af5
    FXCH                                ; 00419af8
    FST float ptr [ESP + 0xa4]          ; 00419afa
    FMUL float ptr [ESP + 0xa4]         ; 00419b01
    FST float ptr [ESP + 0xa4]          ; 00419b08
    FMUL float ptr [ESP + 0xa4]         ; 00419b0f
    FLD float ptr [ESP + 0xa0]          ; 00419b16
    FMUL ST0                            ; 00419b1d
    FADDP                               ; 00419b1f
    FXCH                                ; 00419b21
    FST float ptr [ESP + 0xa8]          ; 00419b23
    FMUL float ptr [ESP + 0xa8]         ; 00419b2a
    FADDP                               ; 00419b31
    FSQRT                               ; 00419b33
    FST float ptr [ESP + 0x8]           ; 00419b35
    FCOMP double ptr [0x00579426]       ; 00419b39 | DOUBLE_00579426
    FNSTSW AX                           ; 00419b3f
    SAHF                                ; 00419b41
    JC 0x004197c8                       ; 00419b42
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    CMP dword ptr [ESP + 0x8],0x41700000 ; 00419b48
    JG 0x004197c8                       ; 00419b50
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    MOV dword ptr [ESP + ESI*0x1 + 0xc],EBX ; 00419b56
    MOV EBX,dword ptr [ESP + 0xb4]      ; 00419b5a
    INC EBX                             ; 00419b61
    ADD ESI,0x4                         ; 00419b62
    MOV dword ptr [ESP + 0xb4],EBX      ; 00419b65
    CMP ESI,0x28                        ; 00419b6c
    JL 0x004197c8                       ; 00419b6f
        ;   XREF to: 004197c8 (CONDITIONAL_JUMP)  ; LAB_004197c8
    MOV ESI,dword ptr [ESP + 0xb4]      ; 00419b75
        ;   Label: LAB_00419b75
    CMP ESI,0x1                         ; 00419b7c
    JL 0x0041971a                       ; 00419b7f
        ;   XREF to: 0041971a (CONDITIONAL_JUMP)  ; LAB_0041971a
    LEA EAX,[ESI + -0x1]                ; 00419b85
    PUSH EAX                            ; 00419b88
    PUSH 0x0                            ; 00419b89
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00419b8b
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 00419b90
    MOV EDX,dword ptr [EBP + 0x14]      ; 00419b93
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 00419b96
    MOV dword ptr [EDX + 0xbd2c],0xc2200000 ; 00419b9a
    MOV EDI,dword ptr [EDX + 0xbd24]    ; 00419ba4
    MOV dword ptr [EDX + 0xbd30],EAX    ; 00419baa
    INC EDI                             ; 00419bb0
    MOV dword ptr [EDX + 0xbd24],EDI    ; 00419bb1
    MOV ECX,EDX                         ; 00419bb7
    MOV EDX,dword ptr [EDX + 0xbd30]    ; 00419bb9
    PUSH EDX                            ; 00419bbf
    PUSH ECX                            ; 00419bc0
    PUSH 0x5793f9                       ; 00419bc1 | = "%s is going to try to pick up %s\n"
    MOV EBX,dword ptr [0x005ad350]      ; 00419bc6 | g_CConsole_PTR_005ad350
    PUSH EBX                            ; 00419bcc | g_CConsole_0077ad0c
    CALL engine_console.cpp_CConsole_printf_FUN_0043ac60 ; 00419bcd
        ;   XREF to: 0043ac60 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_0043ac60(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 00419bd2
    ADD ESP,0x10                        ; 00419bd7
    MOV ESP,EBP                         ; 00419bda
    POP EBP                             ; 00419bdc
    POP EDI                             ; 00419bdd
    POP ESI                             ; 00419bde
    POP EBX                             ; 00419bdf
    RET                                 ; 00419be0

