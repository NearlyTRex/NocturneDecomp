; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_helldog_cpp_CDog_processMeleeAttackState_FUN_005abfa0(CDog *this_ptr,float delta_time)
;
; Parameters:
; CDog *           Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_LeapAttack_005f0d8f
;   TerminatedCString s_Chasing_005f0d9a
;   undefined4 DAT_005f0da6
;   undefined4 DAT_00600c4c
;
; Called Functions:
;   core_actor.cpp_FUN_00408de0
;   core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_muzzle.cpp_FUN_0059d8e0
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005abfa0
        ;   Label: core_helldog.cpp_CDog_processMeleeAttackState_FUN_005abfa0
    PUSH ESI                            ; 005abfa1
    PUSH EDI                            ; 005abfa2
    SUB ESP,0x3c                        ; 005abfa3
    MOV EBX,dword ptr [ESP + 0x4c]      ; 005abfa6
    PUSH EBX                            ; 005abfaa
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005abfab
    CALL dword ptr [EAX + 0x17c]        ; 005abfb1
    ADD ESP,0x4                         ; 005abfb7
    TEST EAX,EAX                        ; 005abfba
    JNZ 0x005abfc5                      ; 005abfbc
        ;   XREF to: 005abfc5 (CONDITIONAL_JUMP)  ; LAB_005abfc5
    ADD ESP,0x3c                        ; 005abfbe
    POP EDI                             ; 005abfc1
    POP ESI                             ; 005abfc2
    POP EBX                             ; 005abfc3
    RET                                 ; 005abfc4
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005abfc5
        ;   Label: LAB_005abfc5
    ADD EAX,0x20                        ; 005abfcb
    PUSH EAX                            ; 005abfce
    PUSH EBX                            ; 005abfcf
    CALL core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850 ; 005abfd0
        ;   XREF to: 00423850 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_turnTowardPoint_FUN_00423850(CCharacter * this_ptr, CVector3f * target)
    LEA ESI,[EBX + 0x20]                ; 005abfd5
    ADD ESP,0x8                         ; 005abfd8
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005abfdb
    FLD float ptr [ESI]                 ; 005abfe1
    FSUB float ptr [EAX + 0x20]         ; 005abfe3
    FMUL ST0                            ; 005abfe6
    FLD float ptr [ESI + 0x8]           ; 005abfe8
    FSUB float ptr [EAX + 0x28]         ; 005abfeb
    FMUL ST0                            ; 005abfee
    FADDP                               ; 005abff0
    FSQRT                               ; 005abff2
    LEA ESI,[EBX + 0x2b4]               ; 005abff4
    PUSH ESI                            ; 005abffa
    FSTP float ptr [ESP + 0x38]         ; 005abffb
    CALL core_motion.cpp_FUN_005035c0   ; 005abfff
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 005ac004
    FLD float ptr [ESP + 0x34]          ; 005ac007
    FCOMP float ptr [0x00600c4c]        ; 005ac00b | DAT_00600c4c
    FNSTSW AX                           ; 005ac011
    SAHF                                ; 005ac013
    JBE 0x005ac0ab                      ; 005ac014
        ;   XREF to: 005ac0ab (CONDITIONAL_JUMP)  ; LAB_005ac0ab
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 005ac01a
    ADD EAX,0x20                        ; 005ac020
    PUSH EAX                            ; 005ac023
    PUSH EBX                            ; 005ac024
    LEA ESI,[ESP + 0x8]                 ; 005ac025
    LEA EDI,[ESP + 0x20]                ; 005ac029
    CALL core_actor.cpp_FUN_00408de0    ; 005ac02d
        ;   XREF to: 00408de0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408de0()
    LEA ESI,[ESP + 0x8]                 ; 005ac032
    LEA EAX,[ESP + 0x20]                ; 005ac036
    ADD ESP,0x8                         ; 005ac03a
    XOR EDX,EDX                         ; 005ac03d
    MOVSD ES:EDI,ESI                    ; 005ac03f
    MOVSD ES:EDI,ESI                    ; 005ac040
    MOVSD ES:EDI,ESI                    ; 005ac041
    PUSH EAX                            ; 005ac042
    LEA ESI,[ESP + 0x10]                ; 005ac043
    LEA EDI,[ESP + 0x28]                ; 005ac047
    MOV dword ptr [ESP + 0x20],EDX      ; 005ac04b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 005ac04f
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[ESP + 0x10]                ; 005ac054
    ADD ESP,0x4                         ; 005ac058
    MOVSD ES:EDI,ESI                    ; 005ac05b
    MOVSD ES:EDI,ESI                    ; 005ac05c
    MOVSD ES:EDI,ESI                    ; 005ac05d
    FLD float ptr [ESP + 0x28]          ; 005ac05e
    FABS                                ; 005ac062
    LEA ESI,[EBX + 0x10af8]             ; 005ac064
    FCOMP double ptr [0x005f0da6]       ; 005ac06a | DAT_005f0da6
    FNSTSW AX                           ; 005ac070
    SAHF                                ; 005ac072
    JNC 0x005ac08a                      ; 005ac073
        ;   XREF to: 005ac08a (CONDITIONAL_JUMP)  ; LAB_005ac08a
    PUSH 0x5f0d8f                       ; 005ac075 | = "LeapAttack"
    PUSH ESI                            ; 005ac07a
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005ac07b
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ac080
    ADD ESP,0x3c                        ; 005ac083
    POP EDI                             ; 005ac086
    POP ESI                             ; 005ac087
    POP EBX                             ; 005ac088
    RET                                 ; 005ac089
    PUSH 0x5f0d9a                       ; 005ac08a | = "Chasing"
        ;   Label: LAB_005ac08a
    FLD float ptr [0x00600c4c]          ; 005ac08f | DAT_00600c4c
    PUSH ESI                            ; 005ac095
    FSTP float ptr [EBX + 0x11394]      ; 005ac096
    CALL core_muzzle.cpp_FUN_0059d8e0   ; 005ac09c
        ;   XREF to: 0059d8e0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d8e0()
    ADD ESP,0x8                         ; 005ac0a1
    ADD ESP,0x3c                        ; 005ac0a4
    POP EDI                             ; 005ac0a7
    POP ESI                             ; 005ac0a8
    POP EBX                             ; 005ac0a9
    RET                                 ; 005ac0aa
    PUSH 0x1                            ; 005ac0ab
        ;   Label: LAB_005ac0ab
    PUSH 0x4                            ; 005ac0ad
    PUSH ESI                            ; 005ac0af
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005ac0b0
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005ac0b5
    ADD ESP,0x3c                        ; 005ac0b8
    POP EDI                             ; 005ac0bb
    POP ESI                             ; 005ac0bc
    POP EBX                             ; 005ac0bd
    RET                                 ; 005ac0be

