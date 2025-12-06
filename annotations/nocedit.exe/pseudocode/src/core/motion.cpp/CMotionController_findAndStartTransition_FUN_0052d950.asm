; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950(CMotionController * this_ptr)
;
; Parameters:
; CMotionController * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_motion.cpp_CMotionController_advance_FUN_0052d610 at 0052d674
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 at 0052db7d
;
; Referenced Globals:
;   void* switchdataD_0052d938 = 0052d9cd
;
; Called Functions:
;   core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0
;   core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0052d950
        ;   Label: core_motion.cpp_CMotionController_findAndStartTransition_FUN_0052d950
    PUSH ESI                            ; 0052d951
    PUSH EDI                            ; 0052d952
    PUSH EBP                            ; 0052d953
    MOV EBX,dword ptr [ESP + 0x14]      ; 0052d954
    PUSH EBX                            ; 0052d958
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052d959 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0052d95e
    MOV EDX,dword ptr [EBX + 0x28]      ; 0052d961
    MOV ESI,EAX                         ; 0052d964
    TEST EDX,EDX                        ; 0052d966
    JL 0x0052da37                       ; 0052d968 | LAB_0052da37
        ;   XREF to: 0052da37 (CONDITIONAL_JUMP)
    CMP EDX,dword ptr [EAX + 0x24]      ; 0052d96e
    JZ 0x0052da37                       ; 0052d971 | LAB_0052da37
        ;   XREF to: 0052da37 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [EBX + 0x2c]      ; 0052d977
    TEST EDI,EDI                        ; 0052d97a
    JNZ 0x0052d9fd                      ; 0052d97c | LAB_0052d9fd
        ;   XREF to: 0052d9fd (CONDITIONAL_JUMP)
    MOV EDX,dword ptr [ESI + 0x68]      ; 0052d982
        ;   Label: LAB_0052d982
    XOR EAX,EAX                         ; 0052d985
    XOR EBP,EBP                         ; 0052d987
    TEST EDX,EDX                        ; 0052d989
    JLE 0x0052d9a4                      ; 0052d98b | LAB_0052d9a4
        ;   XREF to: 0052d9a4 (CONDITIONAL_JUMP)
    MOV EDX,ESI                         ; 0052d98d
    IMUL EDI,EAX,0x18                   ; 0052d98f
        ;   Label: LAB_0052d98f
    MOV ECX,dword ptr [EDX + 0x6c]      ; 0052d992
    CMP ECX,dword ptr [EBX + 0x28]      ; 0052d995
    JNZ 0x0052da08                      ; 0052d998 | LAB_0052da08
        ;   XREF to: 0052da08 (CONDITIONAL_JUMP)
    ADD ESI,0x6c                        ; 0052d99e
    LEA EBP,[ESI + EDI*0x1]             ; 0052d9a1
    TEST EBP,EBP                        ; 0052d9a4
        ;   Label: LAB_0052d9a4
    JZ 0x0052da01                       ; 0052d9a6 | default
        ;   XREF to: 0052da01 (CONDITIONAL_JUMP)
    CMP EBP,dword ptr [EBX + 0x2c]      ; 0052d9a8
    JZ 0x0052da01                       ; 0052d9ab | default
        ;   XREF to: 0052da01 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0052d9ad
    MOV dword ptr [EBX + 0x2c],0x0      ; 0052d9ae
    CALL core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40 ; 0052d9b5 | void core_motion.cpp_CMotionController_clearTweenState_FUN_0052de40(CMotionController * this_ptr)
        ;   XREF to: 0052de40 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x4]       ; 0052d9ba
    DEC EAX                             ; 0052d9bd
    ADD ESP,0x4                         ; 0052d9be
    CMP EAX,0x5                         ; 0052d9c1
    JA 0x0052da01                       ; 0052d9c4 | default
        ;   XREF to: 0052da01 (CONDITIONAL_JUMP)
    JMP dword ptr [EAX*0x4 + 0x52d938]  ; 0052d9c6 | void * switchdataD_0052d938
        ;   Label: switchD
    MOV EDI,dword ptr [EBP + 0x8]       ; 0052d9cd
        ;   Label: caseD_1
    PUSH dword ptr [EBP + 0xc]          ; 0052d9d0
    PUSH EDI                            ; 0052d9d3
    PUSH EBX                            ; 0052d9d4
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0 ; 0052d9d5 | void core_motion.cpp_CMotionController_jumpToMotion_FUN_0052dde0(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
        ;   XREF to: 0052dde0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EBP + 0x14]      ; 0052d9da
    ADD ESP,0xc                         ; 0052d9dd
    TEST EAX,EAX                        ; 0052d9e0
    JZ 0x0052d9f3                       ; 0052d9e2 | LAB_0052d9f3
        ;   XREF to: 0052d9f3 (CONDITIONAL_JUMP)
    PUSH EBX                            ; 0052d9e4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052d9e5 | SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0052d9ea
    ADD ESP,0x4                         ; 0052d9ed
    MOV dword ptr [EBX + 0x28],EAX      ; 0052d9f0
    MOV EAX,0x1                         ; 0052d9f3
        ;   Label: LAB_0052d9f3
    POP EBP                             ; 0052d9f8
    POP EDI                             ; 0052d9f9
    POP ESI                             ; 0052d9fa
    POP EBX                             ; 0052d9fb
    RET                                 ; 0052d9fc
    CMP EDX,dword ptr [EDI]             ; 0052d9fd
        ;   Label: LAB_0052d9fd
    JNZ 0x0052d982                      ; 0052d9ff | LAB_0052d982
        ;   XREF to: 0052d982 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 0052da01
        ;   Label: default
    POP EBP                             ; 0052da03
    POP EDI                             ; 0052da04
    POP ESI                             ; 0052da05
    POP EBX                             ; 0052da06
    RET                                 ; 0052da07
    INC EAX                             ; 0052da08
        ;   Label: LAB_0052da08
    MOV ECX,dword ptr [ESI + 0x68]      ; 0052da09
    ADD EDX,0x18                        ; 0052da0c
    CMP EAX,ECX                         ; 0052da0f
    JL 0x0052d98f                       ; 0052da11 | LAB_0052d98f
        ;   XREF to: 0052d98f (CONDITIONAL_JUMP)
    JMP 0x0052d9a4                      ; 0052da17 | LAB_0052d9a4
        ;   XREF to: 0052d9a4 (UNCONDITIONAL_JUMP)
    MOV dword ptr [EBX + 0x2c],EBP      ; 0052da19
        ;   Label: caseD_2
    XOR EAX,EAX                         ; 0052da1c
    POP EBP                             ; 0052da1e
    POP EDI                             ; 0052da1f
    POP ESI                             ; 0052da20
    POP EBX                             ; 0052da21
    RET                                 ; 0052da22
    PUSH EBP                            ; 0052da23
        ;   Label: caseD_6
    PUSH EBX                            ; 0052da24
    MOV dword ptr [EBX + 0x2c],EBP      ; 0052da25
    CALL core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0 ; 0052da28 | void core_motion.cpp_CMotionController_startTransition_FUN_0052dbc0(CMotionController * this_ptr, SMotionTransition * transition)
        ;   XREF to: 0052dbc0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0052da2d
    XOR EAX,EAX                         ; 0052da30
    POP EBP                             ; 0052da32
    POP EDI                             ; 0052da33
    POP ESI                             ; 0052da34
    POP EBX                             ; 0052da35
    RET                                 ; 0052da36
    MOV dword ptr [EBX + 0x2c],0x0      ; 0052da37
        ;   Label: LAB_0052da37
    XOR EAX,EAX                         ; 0052da3e
    POP EBP                             ; 0052da40
    POP EDI                             ; 0052da41
    POP ESI                             ; 0052da42
    POP EBX                             ; 0052da43
    RET                                 ; 0052da44

