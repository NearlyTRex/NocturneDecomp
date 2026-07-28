; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004b11b0(EGroundType type)
;
; Parameters:
; EGroundType      Stack[0x4]:4   type
;
; XREF[2]:
;   core_actor.cpp_FUN_0040db50 at 0040dc78
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_0048ab60 at 0048ad6f
;
; Referenced Globals:
;   void* switchdataD_004b1170 = 004b11c1
;   TerminatedCString s_no_005852b3
;   TerminatedCString s_ct_005852b6
;   TerminatedCString s_dt_005852b9
;   TerminatedCString s_dt_005852bc
;   TerminatedCString s_mt_005852bf
;   TerminatedCString s_wt_005852c2
;   TerminatedCString s_wd_005852c5
;   TerminatedCString s_mb_005852c8
;   TerminatedCString s_md_005852cb
;   TerminatedCString s_cp_005852ce
;   TerminatedCString s_bd_005852d1
;   TerminatedCString s_gl_005852d4
;   TerminatedCString s_gr_005852d7
;   TerminatedCString s_df_005852da
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004b11b0
        ;   Label: core_ground.cpp_getGroundTypeCode_FUN_004b11b0
    DEC EAX                             ; 004b11b4
    CMP EAX,0xc                         ; 004b11b5
    JA 0x004b120f                       ; 004b11b8
        ;   XREF to: 004b120f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4b1170]  ; 004b11ba | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x5852b3                    ; 004b11c1 | = "no"
        ;   Label: caseD_1
    RET                                 ; 004b11c6
    MOV EAX,0x5852b6                    ; 004b11c7 | = "ct"
        ;   Label: caseD_2
    RET                                 ; 004b11cc
    MOV EAX,0x5852b9                    ; 004b11cd | = "dt"
        ;   Label: caseD_3
    RET                                 ; 004b11d2
    MOV EAX,0x5852bc                    ; 004b11d3 | = "dt"
        ;   Label: caseD_4
    RET                                 ; 004b11d8
    MOV EAX,0x5852bf                    ; 004b11d9 | = "mt"
        ;   Label: caseD_5
    RET                                 ; 004b11de
    MOV EAX,0x5852c2                    ; 004b11df | = "wt"
        ;   Label: caseD_6
    RET                                 ; 004b11e4
    MOV EAX,0x5852c5                    ; 004b11e5 | = "wd"
        ;   Label: caseD_7
    RET                                 ; 004b11ea
    MOV EAX,0x5852c8                    ; 004b11eb | = "mb"
        ;   Label: caseD_8
    RET                                 ; 004b11f0
    MOV EAX,0x5852cb                    ; 004b11f1 | = "md"
        ;   Label: caseD_9
    RET                                 ; 004b11f6
    MOV EAX,0x5852ce                    ; 004b11f7 | = "cp"
        ;   Label: caseD_a
    RET                                 ; 004b11fc
    MOV EAX,0x5852d1                    ; 004b11fd | = "bd"
        ;   Label: caseD_b
    RET                                 ; 004b1202
    MOV EAX,0x5852d4                    ; 004b1203 | = "gl"
        ;   Label: caseD_c
    RET                                 ; 004b1208
    MOV EAX,0x5852d7                    ; 004b1209 | = "gr"
        ;   Label: caseD_d
    RET                                 ; 004b120e
    MOV EAX,0x5852da                    ; 004b120f | = "df"
        ;   Label: default
    RET                                 ; 004b1214

