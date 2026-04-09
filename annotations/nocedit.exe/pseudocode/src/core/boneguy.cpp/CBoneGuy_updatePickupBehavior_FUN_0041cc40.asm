; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_boneguy_cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40(CBoneGuy *this_ptr,float delta_time)
;
; Parameters:
; CBoneGuy *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4[10]   Stack[-0xd4]:40  auStack_d4
; CBoundingBox3D   Stack[-0xac]:24  CStack_ac
; CBoundingBox3D   Stack[-0x94]:24  CStack_94
; CVector3f        Stack[-0x7c]:12  CStack_7c
; CVector3f        Stack[-0x70]:12  CStack_70
; float            Stack[-0x64]:4  fStack_64
; float            Stack[-0x60]:4  fStack_60
; float            Stack[-0x5c]:4  fStack_5c
; CVector3f        Stack[-0x58]:12  CStack_58
; CVector3f        Stack[-0x4c]:12  CStack_4c
; float            Stack[-0x40]:4  fStack_40
; float            Stack[-0x3c]:4  fStack_3c
; float            Stack[-0x38]:4  fStack_38
; float            Stack[-0x30]:4  fStack_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_0041bf90 at 0041c8fa
;
; Referenced Globals:
;   TerminatedCString s_s_can_t_pick_up_s_sombod_00616175
;   TerminatedCString s_s_can_t_pick_up_s_giving_006161a7
;   TerminatedCString s_s_beginning_to_pickup_s_006161cb
;   TerminatedCString s_CBodyPart_006161e6
;   TerminatedCString s_s_is_going_to_try_to_pic_006161f0
;   double DOUBLE_00616215 = 0.333333333333333
;   double DOUBLE_0061621d = 5
;   double DOUBLE_00616225 = 0.400000000000000
;   double DOUBLE_0061622d = 2
;   double DOUBLE_00616235 = 6
;   CConsole* g_CConsolePtr = 0083b1a4
;   CDemonSet* g_CDemonSetPtr = 03114278
;   CConsole g_CConsoleInstance
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_bodypart.cpp_addVector_FUN_0041b540
;   core_bodypart.cpp_scaleVector_FUN_0041b4e0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041cc40
        ;   Label: core_boneguy.cpp_CBoneGuy_updatePickupBehavior_FUN_0041cc40
    PUSH ESI                            ; 0041cc41
    PUSH EDI                            ; 0041cc42
    PUSH EBP                            ; 0041cc43
    MOV EBP,ESP                         ; 0041cc44
    SUB ESP,0xcc                        ; 0041cc46
    AND ESP,0xfffffff8                  ; 0041cc4c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cc4f
    FLD float ptr [EAX + 0xbec0]        ; 0041cc52
    FSUB float ptr [EBP + 0x18]         ; 0041cc58
    FST float ptr [EAX + 0xbec0]        ; 0041cc5b
    FLDZ                                ; 0041cc61
    FCOMPP                              ; 0041cc63
    FNSTSW AX                           ; 0041cc65
    SAHF                                ; 0041cc67
    JC 0x0041ccb3                       ; 0041cc68
        ;   XREF to: 0041ccb3 (CONDITIONAL_JUMP)  ; LAB_0041ccb3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cc6a
        ;   Label: LAB_0041cc6a
    MOV ECX,dword ptr [EAX + 0x24f8]    ; 0041cc6d
    TEST ECX,ECX                        ; 0041cc73
    JNZ 0x0041ccaa                      ; 0041cc75
        ;   XREF to: 0041ccaa (CONDITIONAL_JUMP)  ; LAB_0041ccaa
    FLD float ptr [EAX + 0xbec4]        ; 0041cc77
    FLDZ                                ; 0041cc7d
    FCOMPP                              ; 0041cc7f
    FNSTSW AX                           ; 0041cc81
    SAHF                                ; 0041cc83
    JNC 0x0041ccf1                      ; 0041cc84
        ;   XREF to: 0041ccf1 (CONDITIONAL_JUMP)  ; LAB_0041ccf1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cc86
    FLD float ptr [EAX + 0xbec4]        ; 0041cc89
    FSUB float ptr [EBP + 0x18]         ; 0041cc8f
    FST float ptr [EAX + 0xbec4]        ; 0041cc92
    FLDZ                                ; 0041cc98
    FCOMPP                              ; 0041cc9a
    FNSTSW AX                           ; 0041cc9c
    SAHF                                ; 0041cc9e
    JBE 0x0041ccaa                      ; 0041cc9f
        ;   XREF to: 0041ccaa (CONDITIONAL_JUMP)  ; LAB_0041ccaa
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cca1
    MOV dword ptr [EAX + 0xbec4],ECX    ; 0041cca4
    XOR EAX,EAX                         ; 0041ccaa
        ;   Label: LAB_0041ccaa
    MOV ESP,EBP                         ; 0041ccac
    POP EBP                             ; 0041ccae
    POP EDI                             ; 0041ccaf
    POP ESI                             ; 0041ccb0
    POP EBX                             ; 0041ccb1
    RET                                 ; 0041ccb2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ccb3
        ;   Label: LAB_0041ccb3
    MOV EDX,dword ptr [EAX + 0xbebc]    ; 0041ccb6
    PUSH 0x41200000                     ; 0041ccbc
    INC EDX                             ; 0041ccc1
    PUSH 0x40a00000                     ; 0041ccc2
    MOV dword ptr [EAX + 0xbebc],EDX    ; 0041ccc7
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 0041cccd
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xd0],EAX      ; 0041ccd2
    FLD float ptr [ESP + 0xd0]          ; 0041ccd9
    ADD ESP,0x8                         ; 0041cce0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cce3
    FSTP float ptr [EAX + 0xbec0]       ; 0041cce6
    JMP 0x0041cc6a                      ; 0041ccec
        ;   XREF to: 0041cc6a (UNCONDITIONAL_JUMP)  ; LAB_0041cc6a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ccf1
        ;   Label: LAB_0041ccf1
    MOV EDI,dword ptr [EBP + 0x14]      ; 0041ccf4
    MOV EBX,dword ptr [EAX + 0xbec8]    ; 0041ccf7
    ADD EDI,0x20                        ; 0041ccfd
    TEST EBX,EBX                        ; 0041cd00
    JNZ 0x0041cd7a                      ; 0041cd02
        ;   XREF to: 0041cd7a (CONDITIONAL_JUMP)  ; LAB_0041cd7a
    MOV dword ptr [ESP + 0xb4],ECX      ; 0041cd04
    MOV dword ptr [ESP + 0xbc],ECX      ; 0041cd0b
    MOV dword ptr [ESP + 0xc0],ECX      ; 0041cd12
    XOR ESI,ESI                         ; 0041cd19
    MOV EAX,[0x006810c8]                ; 0041cd1b | g_CDemonSetPtr
        ;   Label: LAB_0041cd1b
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0041cd20
    CMP EDX,dword ptr [EAX + 0x14d154]  ; 0041cd27 | g_CDemonSetInstance.actor_count
    JGE 0x0041d105                      ; 0041cd2d
        ;   XREF to: 0041d105 (CONDITIONAL_JUMP)  ; LAB_0041d105
    ADD EAX,dword ptr [ESP + 0xc0]      ; 0041cd33
    MOV EBX,dword ptr [EAX + 0x14d158]  ; 0041cd3a | g_CDemonSetInstance.actors[0] | g_CDemonSetInstance.actors[1]
    PUSH EBX                            ; 0041cd40
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cd41
    CALL dword ptr [EAX + 0x8c]         ; 0041cd47
    ADD ESP,0x4                         ; 0041cd4d
    TEST EAX,EAX                        ; 0041cd50
    JZ 0x0041cfa5                       ; 0041cd52
        ;   XREF to: 0041cfa5 (CONDITIONAL_JUMP)  ; LAB_0041cfa5
    MOV EDX,dword ptr [ESP + 0xbc]      ; 0041cd58
        ;   Label: LAB_0041cd58
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0041cd5f
    INC EDX                             ; 0041cd66
    ADD EAX,0x4                         ; 0041cd67
    MOV dword ptr [ESP + 0xbc],EDX      ; 0041cd6a
    MOV dword ptr [ESP + 0xc0],EAX      ; 0041cd71
    JMP 0x0041cd1b                      ; 0041cd78
        ;   XREF to: 0041cd1b (UNCONDITIONAL_JUMP)  ; LAB_0041cd1b
    PUSH EBX                            ; 0041cd7a
        ;   Label: LAB_0041cd7a
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041cd7b
    CALL dword ptr [EDX + 0x8c]         ; 0041cd81
    ADD ESP,0x4                         ; 0041cd87
    TEST EAX,EAX                        ; 0041cd8a
    JNZ 0x0041ced1                      ; 0041cd8c
        ;   XREF to: 0041ced1 (CONDITIONAL_JUMP)  ; LAB_0041ced1
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cd92
    MOV EAX,dword ptr [EAX + 0xbec8]    ; 0041cd95
    FLD float ptr [EDI]                 ; 0041cd9b
    FSUB float ptr [EAX + 0x20]         ; 0041cd9d
    FMUL ST0                            ; 0041cda0
    FLD float ptr [EDI + 0x8]           ; 0041cda2
    FSUB float ptr [EAX + 0x28]         ; 0041cda5
    FMUL ST0                            ; 0041cda8
    FADDP                               ; 0041cdaa
    FSQRT                               ; 0041cdac
    FMUL double ptr [0x00616215]        ; 0041cdae | DOUBLE_00616215
    FSUBR double ptr [0x0061621d]       ; 0041cdb4 | DOUBLE_0061621d
    FLD1                                ; 0041cdba
    FCOMPP                              ; 0041cdbc
    FNSTSW AX                           ; 0041cdbe
    SAHF                                ; 0041cdc0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cdc1
    MOV EBX,0xffffffff                  ; 0041cdc4
    FLD float ptr [EAX + 0xbec4]        ; 0041cdc9
    FLDZ                                ; 0041cdcf
    FCOMPP                              ; 0041cdd1
    FNSTSW AX                           ; 0041cdd3
    SAHF                                ; 0041cdd5
    JBE 0x0041ceb2                      ; 0041cdd6
        ;   XREF to: 0041ceb2 (CONDITIONAL_JUMP)  ; LAB_0041ceb2
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041cddc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cddf
    PUSH ECX                            ; 0041cde2
    MOV EAX,dword ptr [EAX + 0xbec8]    ; 0041cde3
    PUSH EAX                            ; 0041cde9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0041cdea
    CALL dword ptr [EDX + 0x7c]         ; 0041cdf0
    ADD ESP,0x8                         ; 0041cdf3
    CMP EAX,0x3                         ; 0041cdf6
    JNZ 0x0041ceb2                      ; 0041cdf9
        ;   XREF to: 0041ceb2 (CONDITIONAL_JUMP)  ; LAB_0041ceb2
    LEA EDX,[ESP + 0x4c]                ; 0041cdff
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041ce03
    PUSH EDX                            ; 0041ce06
    MOV EBX,dword ptr [EBX + 0xbec8]    ; 0041ce07
    PUSH EBX                            ; 0041ce0d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041ce0e
    CALL dword ptr [EAX + 0x14]         ; 0041ce14
    ADD ESP,0x8                         ; 0041ce17
    LEA EAX,[ESP + 0xb0]                ; 0041ce1a
    PUSH EAX                            ; 0041ce21
    LEA EAX,[ESP + 0x74]                ; 0041ce22
    PUSH EAX                            ; 0041ce26
    LEA EAX,[ESP + 0x60]                ; 0041ce27
    PUSH EAX                            ; 0041ce2b
    LEA EAX,[ESP + 0xa0]                ; 0041ce2c
    PUSH EAX                            ; 0041ce33
    LEA EAX,[ESP + 0x5c]                ; 0041ce34
    MOV ESI,0x3f000000                  ; 0041ce38
    PUSH EAX                            ; 0041ce3d
    MOV dword ptr [ESP + 0xc4],ESI      ; 0041ce3e
    CALL core_bodypart.cpp_addVector_FUN_0041b540 ; 0041ce45
        ;   XREF to: 0041b540 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_addVector_FUN_0041b540(CVector3f * a, CVector3f * dst, CVector3f * b)
    ADD ESP,0xc                         ; 0041ce4a
    PUSH EAX                            ; 0041ce4d
    CALL core_bodypart.cpp_scaleVector_FUN_0041b4e0 ; 0041ce4e
        ;   XREF to: 0041b4e0 (UNCONDITIONAL_CALL)  ; CVector3f * core_bodypart.cpp_scaleVector_FUN_0041b4e0(CVector3f * src, CVector3f * dst, float * scalar)
    ADD ESP,0xc                         ; 0041ce53
    LEA EAX,[ESP + 0x70]                ; 0041ce56
    PUSH EAX                            ; 0041ce5a
    LEA EAX,[ESP + 0x8c]                ; 0041ce5b
    FLD float ptr [ESP + 0x58]          ; 0041ce62
    PUSH EAX                            ; 0041ce66
    FADD double ptr [0x00616225]        ; 0041ce67 | DOUBLE_00616225
    PUSH EBX                            ; 0041ce6d
    FSTP float ptr [ESP + 0x84]         ; 0041ce6e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0041ce75
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 0041ce7a
    XOR EAX,EAX                         ; 0041ce7d
    PUSH 0x0                            ; 0041ce7f
    MOV dword ptr [ESP + 0x6c],EAX      ; 0041ce81
    MOV dword ptr [ESP + 0x70],EAX      ; 0041ce85
    LEA EAX,[ESP + 0x68]                ; 0041ce89
    PUSH 0x0                            ; 0041ce8d
    PUSH EAX                            ; 0041ce8f
    XOR EDX,EDX                         ; 0041ce90
    PUSH EDX                            ; 0041ce92
    LEA EAX,[ESP + 0x98]                ; 0041ce93
    PUSH EAX                            ; 0041ce9a
    MOV ECX,dword ptr [EBP + 0x14]      ; 0041ce9b
    MOV EDI,0x3fc00000                  ; 0041ce9e
    PUSH ECX                            ; 0041cea3
    MOV dword ptr [ESP + 0x7c],EDI      ; 0041cea4
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 0041cea8
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041cead
    MOV EBX,EAX                         ; 0041ceb0
    MOV ESI,dword ptr [EBP + 0x14]      ; 0041ceb2
        ;   Label: LAB_0041ceb2
    ADD ESI,0x158                       ; 0041ceb5
    TEST EBX,EBX                        ; 0041cebb
    JL 0x0041cf22                       ; 0041cebd
        ;   XREF to: 0041cf22 (CONDITIONAL_JUMP)  ; LAB_0041cf22
    JG 0x0041cf6e                       ; 0041cebf
        ;   XREF to: 0041cf6e (CONDITIONAL_JUMP)  ; LAB_0041cf6e
    MOV EAX,0x1                         ; 0041cec5
    MOV ESP,EBP                         ; 0041ceca
    POP EBP                             ; 0041cecc
    POP EDI                             ; 0041cecd
    POP ESI                             ; 0041cece
    POP EBX                             ; 0041cecf
    RET                                 ; 0041ced0
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041ced1
        ;   Label: LAB_0041ced1
    MOV ESI,dword ptr [EAX + 0xbec8]    ; 0041ced4
    PUSH ESI                            ; 0041ceda
    PUSH EAX                            ; 0041cedb
    PUSH 0x616175                       ; 0041cedc | = "%s can't pick up %s, sombody else bea..."
    MOV EDI,EAX                         ; 0041cee1
    MOV EAX,[0x0066e8e0]                ; 0041cee3 | g_CConsolePtr
    PUSH EAX                            ; 0041cee8 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041cee9
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0041ceee
    MOV EAX,EDI                         ; 0041cef1
    PUSH 0x1                            ; 0041cef3
    ADD EAX,0x158                       ; 0041cef5
    PUSH 0x1                            ; 0041cefa
    MOV dword ptr [EAX + 0xbd70],0x0    ; 0041cefc
    PUSH EAX                            ; 0041cf06
    MOV dword ptr [EAX + 0xbd6c],0x0    ; 0041cf07
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041cf11
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041cf16
    XOR EAX,EAX                         ; 0041cf19
    MOV ESP,EBP                         ; 0041cf1b
    POP EBP                             ; 0041cf1d
    POP EDI                             ; 0041cf1e
    POP ESI                             ; 0041cf1f
    POP EBX                             ; 0041cf20
    RET                                 ; 0041cf21
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cf22
        ;   Label: LAB_0041cf22
    MOV EDX,dword ptr [EAX + 0xbec8]    ; 0041cf25
    PUSH EDX                            ; 0041cf2b
    PUSH EAX                            ; 0041cf2c
    PUSH 0x6161a7                       ; 0041cf2d | = "%s can't pick up %s, giving up!!!!\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 0041cf32 | g_CConsolePtr | g_CConsoleInstance
    PUSH EBX                            ; 0041cf38 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041cf39
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0041cf3e
    PUSH 0x1                            ; 0041cf41
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cf43
    PUSH 0x1                            ; 0041cf46
    MOV dword ptr [EAX + 0xbec8],0x0    ; 0041cf48
    PUSH ESI                            ; 0041cf52
    MOV dword ptr [EAX + 0xbec4],0x41a00000 ; 0041cf53
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041cf5d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041cf62
    XOR EAX,EAX                         ; 0041cf65
    MOV ESP,EBP                         ; 0041cf67
    POP EBP                             ; 0041cf69
    POP EDI                             ; 0041cf6a
    POP ESI                             ; 0041cf6b
    POP EBX                             ; 0041cf6c
    RET                                 ; 0041cf6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0041cf6e
        ;   Label: LAB_0041cf6e
    MOV EBX,dword ptr [EAX + 0xbec8]    ; 0041cf71
    PUSH EBX                            ; 0041cf77
    PUSH EAX                            ; 0041cf78
    PUSH 0x6161cb                       ; 0041cf79 | = "%s beginning to pickup %s\n"
    MOV EAX,[0x0066e8e0]                ; 0041cf7e | g_CConsolePtr
    PUSH EAX                            ; 0041cf83 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041cf84
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0041cf89
    PUSH 0x1                            ; 0041cf8c
    PUSH 0x7                            ; 0041cf8e
    PUSH ESI                            ; 0041cf90
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0041cf91
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,0x1                         ; 0041cf96
    ADD ESP,0xc                         ; 0041cf9b
    MOV ESP,EBP                         ; 0041cf9e
    POP EBP                             ; 0041cfa0
    POP EDI                             ; 0041cfa1
    POP ESI                             ; 0041cfa2
    POP EBX                             ; 0041cfa3
    RET                                 ; 0041cfa4
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041cfa5
        ;   Label: LAB_0041cfa5
    PUSH EDX                            ; 0041cfa8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041cfa9
    PUSH EBX                            ; 0041cfaf
    CALL dword ptr [EAX + 0x7c]         ; 0041cfb0
    ADD ESP,0x8                         ; 0041cfb3
    CMP EAX,0x3                         ; 0041cfb6
    JNZ 0x0041cd58                      ; 0041cfb9
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    LEA EAX,[ESP + 0x34]                ; 0041cfbf
    PUSH EAX                            ; 0041cfc3
    MOV EDX,dword ptr [EBX + 0x154]     ; 0041cfc4
    PUSH EBX                            ; 0041cfca
    CALL dword ptr [EDX + 0x14]         ; 0041cfcb
    LEA EDX,[EAX + 0xc]                 ; 0041cfce
    FLD float ptr [EDX]                 ; 0041cfd1
    FSUB float ptr [EAX]                ; 0041cfd3
    ADD ESP,0x8                         ; 0041cfd5
    FSTP float ptr [ESP + 0x7c]         ; 0041cfd8
    FLD float ptr [EDX + 0x4]           ; 0041cfdc
    FSUB float ptr [EAX + 0x4]          ; 0041cfdf
    FLD float ptr [ESP + 0x7c]          ; 0041cfe2
    FXCH                                ; 0041cfe6
    FSTP float ptr [ESP + 0x80]         ; 0041cfe8
    FLD float ptr [EDX + 0x8]           ; 0041cfef
    FSUB float ptr [EAX + 0x8]          ; 0041cff2
    FLD1                                ; 0041cff5
    FXCH                                ; 0041cff7
    FSTP float ptr [ESP + 0x84]         ; 0041cff9
    FCOMPP                              ; 0041d000
    FNSTSW AX                           ; 0041d002
    SAHF                                ; 0041d004
    JBE 0x0041cd58                      ; 0041d005
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    FLD float ptr [ESP + 0x80]          ; 0041d00b
    FLD1                                ; 0041d012
    FCOMPP                              ; 0041d014
    FNSTSW AX                           ; 0041d016
    SAHF                                ; 0041d018
    JBE 0x0041cd58                      ; 0041d019
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    FLD float ptr [ESP + 0x84]          ; 0041d01f
    FST double ptr [ESP]                ; 0041d026
    FCOMP double ptr [0x0061622d]       ; 0041d029 | DOUBLE_0061622d
    FNSTSW AX                           ; 0041d02f
    SAHF                                ; 0041d031
    JBE 0x0041cd58                      ; 0041d032
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    FLD double ptr [ESP]                ; 0041d038
    FCOMP double ptr [0x00616235]       ; 0041d03b | DOUBLE_00616235
    FNSTSW AX                           ; 0041d041
    SAHF                                ; 0041d043
    JNC 0x0041cd58                      ; 0041d044
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    PUSH 0x6161e6                       ; 0041d04a | = "CBodyPart"
    PUSH EBX                            ; 0041d04f
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0041d050
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0041d055
    TEST EAX,EAX                        ; 0041d058
    JNZ 0x0041cd58                      ; 0041d05a
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    LEA EAX,[EBX + 0x20]                ; 0041d060
    FLD float ptr [EAX]                 ; 0041d063
    FSUB float ptr [EDI]                ; 0041d065
    FSTP float ptr [ESP + 0xa0]         ; 0041d067
    FLD float ptr [EAX + 0x4]           ; 0041d06e
    FSUB float ptr [EDI + 0x4]          ; 0041d071
    FST float ptr [ESP + 0xa4]          ; 0041d074
    FMUL float ptr [ESP + 0xa4]         ; 0041d07b
    FLD float ptr [EAX + 0x8]           ; 0041d082
    FSUB float ptr [EDI + 0x8]          ; 0041d085
    FXCH                                ; 0041d088
    FST float ptr [ESP + 0xa4]          ; 0041d08a
    FMUL float ptr [ESP + 0xa4]         ; 0041d091
    FST float ptr [ESP + 0xa4]          ; 0041d098
    FMUL float ptr [ESP + 0xa4]         ; 0041d09f
    FLD float ptr [ESP + 0xa0]          ; 0041d0a6
    FMUL ST0                            ; 0041d0ad
    FADDP                               ; 0041d0af
    FXCH                                ; 0041d0b1
    FST float ptr [ESP + 0xa8]          ; 0041d0b3
    FMUL float ptr [ESP + 0xa8]         ; 0041d0ba
    FADDP                               ; 0041d0c1
    FSQRT                               ; 0041d0c3
    FST float ptr [ESP + 0x8]           ; 0041d0c5
    FCOMP double ptr [0x0061621d]       ; 0041d0c9 | DOUBLE_0061621d
    FNSTSW AX                           ; 0041d0cf
    SAHF                                ; 0041d0d1
    JC 0x0041cd58                       ; 0041d0d2
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    CMP dword ptr [ESP + 0x8],0x41700000 ; 0041d0d8
    JG 0x0041cd58                       ; 0041d0e0
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    MOV dword ptr [ESP + ESI*0x1 + 0xc],EBX ; 0041d0e6
    MOV EBX,dword ptr [ESP + 0xb4]      ; 0041d0ea
    INC EBX                             ; 0041d0f1
    ADD ESI,0x4                         ; 0041d0f2
    MOV dword ptr [ESP + 0xb4],EBX      ; 0041d0f5
    CMP ESI,0x28                        ; 0041d0fc
    JL 0x0041cd58                       ; 0041d0ff
        ;   XREF to: 0041cd58 (CONDITIONAL_JUMP)  ; LAB_0041cd58
    MOV ESI,dword ptr [ESP + 0xb4]      ; 0041d105
        ;   Label: LAB_0041d105
    CMP ESI,0x1                         ; 0041d10c
    JL 0x0041ccaa                       ; 0041d10f
        ;   XREF to: 0041ccaa (CONDITIONAL_JUMP)  ; LAB_0041ccaa
    LEA EAX,[ESI + -0x1]                ; 0041d115
    PUSH EAX                            ; 0041d118
    PUSH 0x0                            ; 0041d119
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 0041d11b
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 0041d120
    MOV EDX,dword ptr [EBP + 0x14]      ; 0041d123
    MOV EAX,dword ptr [ESP + EAX*0x4 + 0xc] ; 0041d126
    MOV dword ptr [EDX + 0xbec4],0xc2200000 ; 0041d12a
    MOV EDI,dword ptr [EDX + 0xbebc]    ; 0041d134
    MOV dword ptr [EDX + 0xbec8],EAX    ; 0041d13a
    INC EDI                             ; 0041d140
    MOV dword ptr [EDX + 0xbebc],EDI    ; 0041d141
    MOV ECX,EDX                         ; 0041d147
    MOV EDX,dword ptr [EDX + 0xbec8]    ; 0041d149
    PUSH EDX                            ; 0041d14f
    PUSH ECX                            ; 0041d150
    PUSH 0x6161f0                       ; 0041d151 | = "%s is going to try to pick up %s\n"
    MOV EBX,dword ptr [0x0066e8e0]      ; 0041d156 | g_CConsolePtr
    PUSH EBX                            ; 0041d15c | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 0041d15d
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,0x1                         ; 0041d162
    ADD ESP,0x10                        ; 0041d167
    MOV ESP,EBP                         ; 0041d16a
    POP EBP                             ; 0041d16c
    POP EDI                             ; 0041d16d
    POP ESI                             ; 0041d16e
    POP EBX                             ; 0041d16f
    RET                                 ; 0041d170

