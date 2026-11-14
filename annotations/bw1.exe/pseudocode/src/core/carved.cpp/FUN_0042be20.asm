; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_carved_cpp_FUN_0042be20(int param_1)
;
; Local Variables:
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_carved.cpp_CCarved_process_FUN_00428ae0 at 00429bf3
;   core_carved.cpp_FUN_0042a930 at 0042ade5
;
; Referenced Globals:
;   undefined4 DAT_005fd46c
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042be20
        ;   Label: core_carved.cpp_FUN_0042be20
    PUSH ESI                            ; 0042be21
    PUSH EDI                            ; 0042be22
    PUSH EBP                            ; 0042be23
    MOV EBP,ESP                         ; 0042be24
    SUB ESP,0x24                        ; 0042be26
    AND ESP,0xfffffff8                  ; 0042be29
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042be2c
    MOV EDX,dword ptr [EBX + 0xc284]    ; 0042be2f
    LEA ESI,[EBX + 0x158]               ; 0042be35
    TEST EDX,EDX                        ; 0042be3b
    JNZ 0x0042bee7                      ; 0042be3d
        ;   XREF to: 0042bee7 (CONDITIONAL_JUMP)  ; LAB_0042bee7
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0042be43
    TEST ECX,ECX                        ; 0042be49
    JZ 0x0042bf2b                       ; 0042be4b
        ;   XREF to: 0042bf2b (CONDITIONAL_JUMP)  ; LAB_0042bf2b
    MOV EDI,ESP                         ; 0042be51
    MOV EAX,ECX                         ; 0042be53
    LEA ESI,[ESP + 0x18]                ; 0042be55
    LEA EDX,[EBX + 0x20]                ; 0042be59
    FLD float ptr [EAX + 0x24]          ; 0042be5c
    FLD float ptr [EAX + 0x28]          ; 0042be5f
    FLD float ptr [EAX + 0x20]          ; 0042be62
    LEA EAX,[ESP + 0xc]                 ; 0042be65
    FSUB float ptr [EDX]                ; 0042be69
    FXCH ST2                            ; 0042be6b
    FSUB float ptr [EDX + 0x4]          ; 0042be6d
    FXCH                                ; 0042be70
    FSUB float ptr [EDX + 0x8]          ; 0042be72
    FXCH ST2                            ; 0042be75
    FSTP float ptr [ESP + 0x18]         ; 0042be77
    FSTP float ptr [ESP + 0x1c]         ; 0042be7b
    FSTP float ptr [ESP + 0x20]         ; 0042be7f
    MOV EDX,ESP                         ; 0042be83
    MOVSD ES:EDI,ESI                    ; 0042be85
    MOVSD ES:EDI,ESI                    ; 0042be86
    MOVSD ES:EDI,ESI                    ; 0042be87
    CMP EAX,EDX                         ; 0042be88
    JNZ 0x0042befc                      ; 0042be8a
        ;   XREF to: 0042befc (CONDITIONAL_JUMP)  ; LAB_0042befc
    FLD float ptr [ESP + 0x10]          ; 0042be8c
        ;   Label: LAB_0042be8c
    FMUL ST0                            ; 0042be90
    FLD float ptr [ESP + 0xc]           ; 0042be92
    FMUL ST0                            ; 0042be96
    FADDP                               ; 0042be98
    FLD float ptr [ESP + 0x14]          ; 0042be9a
    FMUL ST0                            ; 0042be9e
    FADDP                               ; 0042bea0
    FSQRT                               ; 0042bea2
    FCOMP float ptr [0x005fd46c]        ; 0042bea4 | DAT_005fd46c
    FNSTSW AX                           ; 0042beaa
    SAHF                                ; 0042beac
    JNC 0x0042bf18                      ; 0042bead
        ;   XREF to: 0042bf18 (CONDITIONAL_JUMP)  ; LAB_0042bf18
    PUSH 0x3                            ; 0042beaf
    PUSH 0x0                            ; 0042beb1
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042beb3
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042beb8
    CMP EAX,0x1                         ; 0042bebb
    JNZ 0x0042bf18                      ; 0042bebe
        ;   XREF to: 0042bf18 (CONDITIONAL_JUMP)  ; LAB_0042bf18
    PUSH EAX                            ; 0042bec0
    PUSH 0x3                            ; 0042bec1
    PUSH 0x0                            ; 0042bec3
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042bec5
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042beca
    ADD EAX,0x3                         ; 0042becd
    PUSH EAX                            ; 0042bed0
        ;   Label: LAB_0042bed0
    ADD EBX,0x158                       ; 0042bed1
    PUSH EBX                            ; 0042bed7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042bed8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0042bed8
    ADD ESP,0xc                         ; 0042bedd
    MOV ESP,EBP                         ; 0042bee0
    POP EBP                             ; 0042bee2
    POP EDI                             ; 0042bee3
    POP ESI                             ; 0042bee4
    POP EBX                             ; 0042bee5
    RET                                 ; 0042bee6
    PUSH 0x1                            ; 0042bee7
        ;   Label: LAB_0042bee7
    PUSH 0x3                            ; 0042bee9
    PUSH 0x0                            ; 0042beeb
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042beed
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042bef2
    ADD EAX,0x7                         ; 0042bef5
    PUSH EAX                            ; 0042bef8
    PUSH ESI                            ; 0042bef9
    JMP 0x0042bed8                      ; 0042befa
        ;   XREF to: 0042bed8 (UNCONDITIONAL_JUMP)  ; LAB_0042bed8
    MOV EAX,dword ptr [ESP]             ; 0042befc
        ;   Label: LAB_0042befc
    MOV dword ptr [ESP + 0xc],EAX       ; 0042beff
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042bf03
    MOV dword ptr [ESP + 0x10],EAX      ; 0042bf07
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042bf0b
    MOV dword ptr [ESP + 0x14],EAX      ; 0042bf0f
    JMP 0x0042be8c                      ; 0042bf13
        ;   XREF to: 0042be8c (UNCONDITIONAL_JUMP)  ; LAB_0042be8c
    PUSH 0x1                            ; 0042bf18
        ;   Label: LAB_0042bf18
    PUSH 0x3                            ; 0042bf1a
    PUSH 0x0                            ; 0042bf1c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042bf1e
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042bf23
    ADD EAX,0x7                         ; 0042bf26
    JMP 0x0042bed0                      ; 0042bf29
        ;   XREF to: 0042bed0 (UNCONDITIONAL_JUMP)  ; LAB_0042bed0
    PUSH 0x1                            ; 0042bf2b
        ;   Label: LAB_0042bf2b
    PUSH 0x3                            ; 0042bf2d
    PUSH EDX                            ; 0042bf2f
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0042bf30
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0042bf35
    ADD EAX,0x3                         ; 0042bf38
    PUSH EAX                            ; 0042bf3b
    PUSH ESI                            ; 0042bf3c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0042bf3d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042bf42
    MOV ESP,EBP                         ; 0042bf45
    POP EBP                             ; 0042bf47
    POP EDI                             ; 0042bf48
    POP ESI                             ; 0042bf49
    POP EBX                             ; 0042bf4a
    RET                                 ; 0042bf4b

