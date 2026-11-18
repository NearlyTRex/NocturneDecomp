; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004cf9a0(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; XREF[2]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040cab0 at 0040cd0b
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004a2090 at 004a22a5
;
; Referenced Globals:
;   void* switchdataD_004cf960 = 004cf9b1
;   TerminatedCString s_no_005c486c
;   TerminatedCString s_ct_005c486f
;   TerminatedCString s_dt_005c4872
;   TerminatedCString s_dt_005c4875
;   TerminatedCString s_mt_005c4878
;   TerminatedCString s_wt_005c487b
;   TerminatedCString s_wd_005c487e
;   TerminatedCString s_mb_005c4881
;   TerminatedCString s_md_005c4884
;   TerminatedCString s_cp_005c4887
;   TerminatedCString s_bd_005c488a
;   TerminatedCString s_gl_005c488d
;   TerminatedCString s_gr_005c4890
;   TerminatedCString s_dt_005c4893
;   ... and 1 more
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004cf9a0
        ;   Label: core_ground.cpp_getGroundTypeCode_FUN_004cf9a0
    DEC EAX                             ; 004cf9a4
    CMP EAX,0xd                         ; 004cf9a5
    JA 0x004cfa05                       ; 004cf9a8
        ;   XREF to: 004cfa05 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4cf960]  ; 004cf9aa | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5c486c                    ; 004cf9b1 | = "no"
        ;   Label: caseD_1
    RET                                 ; 004cf9b6
    MOV EAX,0x5c486f                    ; 004cf9b7 | = "ct"
        ;   Label: caseD_2
    RET                                 ; 004cf9bc
    MOV EAX,0x5c4872                    ; 004cf9bd | = "dt"
        ;   Label: caseD_3
    RET                                 ; 004cf9c2
    MOV EAX,0x5c4875                    ; 004cf9c3 | = "dt"
        ;   Label: caseD_4
    RET                                 ; 004cf9c8
    MOV EAX,0x5c4878                    ; 004cf9c9 | = "mt"
        ;   Label: caseD_5
    RET                                 ; 004cf9ce
    MOV EAX,0x5c487b                    ; 004cf9cf | = "wt"
        ;   Label: caseD_6
    RET                                 ; 004cf9d4
    MOV EAX,0x5c487e                    ; 004cf9d5 | = "wd"
        ;   Label: caseD_7
    RET                                 ; 004cf9da
    MOV EAX,0x5c4881                    ; 004cf9db | = "mb"
        ;   Label: caseD_8
    RET                                 ; 004cf9e0
    MOV EAX,0x5c4884                    ; 004cf9e1 | = "md"
        ;   Label: caseD_9
    RET                                 ; 004cf9e6
    MOV EAX,0x5c4887                    ; 004cf9e7 | = "cp"
        ;   Label: caseD_a
    RET                                 ; 004cf9ec
    MOV EAX,0x5c488a                    ; 004cf9ed | = "bd"
        ;   Label: caseD_b
    RET                                 ; 004cf9f2
    MOV EAX,0x5c488d                    ; 004cf9f3 | = "gl"
        ;   Label: caseD_c
    RET                                 ; 004cf9f8
    MOV EAX,0x5c4890                    ; 004cf9f9 | = "gr"
        ;   Label: caseD_d
    RET                                 ; 004cf9fe
    MOV EAX,0x5c4893                    ; 004cf9ff | = "dt"
        ;   Label: caseD_e
    RET                                 ; 004cfa04
    MOV EAX,0x5c4896                    ; 004cfa05 | DAT_005c4896
        ;   Label: default
    RET                                 ; 004cfa0a

