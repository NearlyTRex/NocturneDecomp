; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_CHaystack_processDamage_FUN_004b4000(int param_1,int param_2)
;
;
; Referenced Globals:
;   float FLOAT_0059e878 = 0.5
;   undefined4 DAT_005b9354
;   undefined4 DAT_005b96c4
;   undefined4 DAT_01c777bc
;   undefined4 DAT_01c77818
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b4000
        ;   Label: core_haystack.cpp_CHaystack_processDamage_FUN_004b4000
    PUSH ESI                            ; 004b4001
    PUSH EDI                            ; 004b4002
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b4003
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b4007
    TEST dword ptr [EBX + 0xbc8c],0x7fffffff ; 004b400b
    JNZ 0x004b409c                      ; 004b4015
        ;   XREF to: 004b409c (CONDITIONAL_JUMP)  ; LAB_004b409c
    MOV EAX,[0x005b9354]                ; 004b401b | DAT_005b9354
        ;   Label: LAB_004b401b
    CMP dword ptr [EAX + 0x1d0],0x0     ; 004b4020 | DAT_01c777bc
    JZ 0x004b4030                       ; 004b4027
        ;   XREF to: 004b4030 (CONDITIONAL_JUMP)  ; LAB_004b4030
    MOV dword ptr [EDI + 0x4],0x0       ; 004b4029
    MOV EAX,[0x005b9354]                ; 004b4030 | DAT_005b9354
        ;   Label: LAB_004b4030
    MOV ESI,dword ptr [EAX + 0x22c]     ; 004b4035 | DAT_01c77818
    TEST ESI,ESI                        ; 004b403b
    JZ 0x004b40a8                       ; 004b403d
        ;   XREF to: 004b40a8 (CONDITIONAL_JUMP)  ; LAB_004b40a8
    MOV EAX,[0x0059e878]                ; 004b403f | FLOAT_0059e878
        ;   Label: LAB_004b403f
    MOV dword ptr [EBX + 0xbc8c],EAX    ; 004b4044
    FLD float ptr [EDI + 0x4]           ; 004b404a
    FSUBR float ptr [EBX + 0x2434]      ; 004b404d
    LEA ESI,[EBX + 0x150]               ; 004b4053
    FST float ptr [EBX + 0x2434]        ; 004b4059
    FLDZ                                ; 004b405f
    FCOMPP                              ; 004b4061
    FNSTSW AX                           ; 004b4063
    SAHF                                ; 004b4065
    JNC 0x004b40ad                      ; 004b4066
        ;   XREF to: 004b40ad (CONDITIONAL_JUMP)  ; LAB_004b40ad
    FLD float ptr [EDI + 0x4]           ; 004b4068
    FLDZ                                ; 004b406b
    FCOMPP                              ; 004b406d
    FNSTSW AX                           ; 004b406f
    SAHF                                ; 004b4071
    JNC 0x004b408e                      ; 004b4072
        ;   XREF to: 004b408e (CONDITIONAL_JUMP)  ; LAB_004b408e
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004b4074
    JNZ 0x004b4116                      ; 004b407b
        ;   XREF to: 004b4116 (CONDITIONAL_JUMP)  ; LAB_004b4116
    PUSH 0x1                            ; 004b4081
    PUSH 0x4                            ; 004b4083
    PUSH ESI                            ; 004b4085
        ;   Label: LAB_004b4085
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b4086
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004b408b
    PUSH EDI                            ; 004b408e
        ;   Label: LAB_004b408e
    PUSH EBX                            ; 004b408f
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004b4090
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004b4095
    POP EDI                             ; 004b4098
    POP ESI                             ; 004b4099
    POP EBX                             ; 004b409a
    RET                                 ; 004b409b
    MOV dword ptr [EDI + 0x4],0x0       ; 004b409c
        ;   Label: LAB_004b409c
    JMP 0x004b401b                      ; 004b40a3
        ;   XREF to: 004b401b (UNCONDITIONAL_JUMP)  ; LAB_004b401b
    MOV dword ptr [EDI + 0x4],ESI       ; 004b40a8
        ;   Label: LAB_004b40a8
    JMP 0x004b403f                      ; 004b40ab
        ;   XREF to: 004b403f (UNCONDITIONAL_JUMP)  ; LAB_004b403f
    PUSH ESI                            ; 004b40ad
        ;   Label: LAB_004b40ad
    MOV dword ptr [EBX + 0x2434],0x0    ; 004b40ae
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b40b8
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b40bd
    ADD ESP,0x4                         ; 004b40c0
    CMP EAX,0x9                         ; 004b40c3
    JZ 0x004b408e                       ; 004b40c6
        ;   XREF to: 004b408e (CONDITIONAL_JUMP)  ; LAB_004b408e
    PUSH ESI                            ; 004b40c8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b40c9
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b40ce
    ADD ESP,0x4                         ; 004b40d1
    CMP EAX,0x8                         ; 004b40d4
    JZ 0x004b408e                       ; 004b40d7
        ;   XREF to: 004b408e (CONDITIONAL_JUMP)  ; LAB_004b408e
    PUSH 0x1                            ; 004b40d9
    PUSH 0x8                            ; 004b40db
    PUSH ESI                            ; 004b40dd
    MOV dword ptr [EBX + 0x2590],0x0    ; 004b40de
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004b40e8
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0()
    ADD ESP,0xc                         ; 004b40ed
    PUSH 0x0                            ; 004b40f0
    PUSH 0x42480000                     ; 004b40f2
    PUSH 0x32                           ; 004b40f7
    PUSH EBX                            ; 004b40f9
    MOV EAX,[0x005b96c4]                ; 004b40fa | DAT_005b96c4
    PUSH EAX                            ; 004b40ff
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 ; 004b4100
        ;   XREF to: 004b0670 (UNCONDITIONAL_CALL)  ; undefined core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670()
    ADD ESP,0x14                        ; 004b4105
    PUSH EDI                            ; 004b4108
    PUSH EBX                            ; 004b4109
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 004b410a
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 004b410f
    POP EDI                             ; 004b4112
    POP ESI                             ; 004b4113
    POP EBX                             ; 004b4114
    RET                                 ; 004b4115
    PUSH 0x1                            ; 004b4116
        ;   Label: LAB_004b4116
    PUSH 0xb                            ; 004b4118
    JMP 0x004b4085                      ; 004b411a
        ;   XREF to: 004b4085 (UNCONDITIONAL_JUMP)  ; LAB_004b4085

