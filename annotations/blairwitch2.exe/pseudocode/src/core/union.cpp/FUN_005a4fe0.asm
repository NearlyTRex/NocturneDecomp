; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_union_cpp_FUN_005a4fe0(CCharacter *param_1)
;
;
; XREF[1]:
;   core_union.cpp_CUnion_processStates_FUN_005a4c50 at 005a4cff
;
; Referenced Globals:
;   undefined4 s_BChasing_005f0559+1
;   undefined4 DAT_005f0562
;   undefined4 DAT_005ff8f4
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_motion.cpp_FUN_00503e60
;   unkaddr_0059d350.cpp_FUN_0059d8e0
;   unkaddr_0059d350.cpp_FUN_0059dcb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a4fe0
        ;   Label: core_union.cpp_FUN_005a4fe0
    PUSH ESI                            ; 005a4fe1
    PUSH EDI                            ; 005a4fe2
    SUB ESP,0xc                         ; 005a4fe3
    MOV EBX,dword ptr [ESP + 0x1c]      ; 005a4fe6
    PUSH EBX                            ; 005a4fea
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005a4feb
    CALL dword ptr [EAX + 0x17c]        ; 005a4ff1
    ADD ESP,0x4                         ; 005a4ff7
    TEST EAX,EAX                        ; 005a4ffa
    JZ 0x005a50ba                       ; 005a4ffc
        ;   XREF to: 005a50ba (CONDITIONAL_JUMP)  ; LAB_005a50ba
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 005a5002
    LEA EAX,[EBX + 0x20]                ; 005a5008
    FLD float ptr [ESI + 0x20]          ; 005a500b
    FSUB float ptr [EAX]                ; 005a500e
    FMUL ST0                            ; 005a5010
    FLD float ptr [ESI + 0x28]          ; 005a5012
    FSUB float ptr [EAX + 0x8]          ; 005a5015
    FMUL ST0                            ; 005a5018
    FADDP                               ; 005a501a
    FSQRT                               ; 005a501c
    ADD ESI,0x20                        ; 005a501e
    FCOMP float ptr [0x005ff8f4]        ; 005a5021 | DAT_005ff8f4
    FNSTSW AX                           ; 005a5027
    SAHF                                ; 005a5029
    JA 0x005a50c1                       ; 005a502a
        ;   XREF to: 005a50c1 (CONDITIONAL_JUMP)  ; LAB_005a50c1
    PUSH ESI                            ; 005a5030
    PUSH EBX                            ; 005a5031
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005a5032
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    MOV ESI,dword ptr [EBX + 0x11860]   ; 005a5037
    ADD ESP,0x8                         ; 005a503d
    TEST ESI,ESI                        ; 005a5040
    JBE 0x005a50e5                      ; 005a5042
        ;   XREF to: 005a50e5 (CONDITIONAL_JUMP)  ; LAB_005a50e5
    CMP ESI,0x1                         ; 005a5048
    JNZ 0x005a5052                      ; 005a504b
        ;   XREF to: 005a5052 (CONDITIONAL_JUMP)  ; LAB_005a5052
    MOV EDI,0x9                         ; 005a504d
    PUSH 0x1                            ; 005a5052
        ;   Label: LAB_005a5052
    PUSH EDI                            ; 005a5054
    LEA ESI,[EBX + 0x2b4]               ; 005a5055
    PUSH ESI                            ; 005a505b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005a505c
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a5061
    PUSH ESI                            ; 005a5064
    CALL core_motion.cpp_FUN_005035c0   ; 005a5065
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a506a
    ADD ESP,0x4                         ; 005a506d
    CMP EAX,0x5                         ; 005a5070
    JNZ 0x005a50a3                      ; 005a5073
        ;   XREF to: 005a50a3 (CONDITIONAL_JUMP)  ; LAB_005a50a3
    PUSH ESI                            ; 005a5075
    CALL core_motion.cpp_FUN_00503e60   ; 005a5076
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xc],EAX       ; 005a507b
    FLD float ptr [ESP + 0xc]           ; 005a507f
    ADD ESP,0x4                         ; 005a5083
    FCOMP double ptr [0x005f0562]       ; 005a5086 | DAT_005f0562
    FNSTSW AX                           ; 005a508c
    SAHF                                ; 005a508e
    JBE 0x005a50a3                      ; 005a508f
        ;   XREF to: 005a50a3 (CONDITIONAL_JUMP)  ; LAB_005a50a3
    PUSH 0x1                            ; 005a5091
    PUSH 0x0                            ; 005a5093
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005a5095
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a509a
    MOV dword ptr [EBX + 0x11860],EAX   ; 005a509d
    LEA ESI,[EBX + 0x2b4]               ; 005a50a3
        ;   Label: LAB_005a50a3
    PUSH ESI                            ; 005a50a9
    CALL core_motion.cpp_FUN_005035c0   ; 005a50aa
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005a50af
    ADD ESP,0x4                         ; 005a50b2
    CMP EAX,0x9                         ; 005a50b5
    JZ 0x005a50ef                       ; 005a50b8
        ;   XREF to: 005a50ef (CONDITIONAL_JUMP)  ; LAB_005a50ef
    ADD ESP,0xc                         ; 005a50ba
        ;   Label: LAB_005a50ba
    POP EDI                             ; 005a50bd
    POP ESI                             ; 005a50be
    POP EBX                             ; 005a50bf
    RET                                 ; 005a50c0
    ADD EBX,0x10af8                     ; 005a50c1
        ;   Label: LAB_005a50c1
    PUSH 0x3f800000                     ; 005a50c7
    PUSH EBX                            ; 005a50cc
    CALL unkaddr_0059d350.cpp_FUN_0059dcb0 ; 005a50cd
        ;   XREF to: 0059dcb0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059dcb0()
    ADD ESP,0x8                         ; 005a50d2
    PUSH 0x5f055a                       ; 005a50d5 | s_BChasing_005f0559+1
    PUSH EBX                            ; 005a50da
    CALL unkaddr_0059d350.cpp_FUN_0059d8e0 ; 005a50db
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005a50e0
    JMP 0x005a50ba                      ; 005a50e3
        ;   XREF to: 005a50ba (UNCONDITIONAL_JUMP)  ; LAB_005a50ba
    MOV EDI,0x5                         ; 005a50e5
        ;   Label: LAB_005a50e5
    JMP 0x005a5052                      ; 005a50ea
        ;   XREF to: 005a5052 (UNCONDITIONAL_JUMP)  ; LAB_005a5052
    PUSH ESI                            ; 005a50ef
        ;   Label: LAB_005a50ef
    CALL core_motion.cpp_FUN_00503e60   ; 005a50f0
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [ESP + 0xc],EAX       ; 005a50f5
    FLD float ptr [ESP + 0xc]           ; 005a50f9
    ADD ESP,0x4                         ; 005a50fd
    FCOMP double ptr [0x005f0562]       ; 005a5100 | DAT_005f0562
    FNSTSW AX                           ; 005a5106
    SAHF                                ; 005a5108
    JBE 0x005a50ba                      ; 005a5109
        ;   XREF to: 005a50ba (CONDITIONAL_JUMP)  ; LAB_005a50ba
    PUSH 0x1                            ; 005a510b
    PUSH 0x0                            ; 005a510d
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 005a510f
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a5114
    MOV dword ptr [EBX + 0x11860],EAX   ; 005a5117
    ADD ESP,0xc                         ; 005a511d
    POP EDI                             ; 005a5120
    POP ESI                             ; 005a5121
    POP EBX                             ; 005a5122
    RET                                 ; 005a5123

