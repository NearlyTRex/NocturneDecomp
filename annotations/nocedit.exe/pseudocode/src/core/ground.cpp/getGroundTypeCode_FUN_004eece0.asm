; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl core_ground_cpp_getGroundTypeCode_FUN_004eece0(int type)
;
; Parameters:
; int              Stack[0x4]:4   type
;
; XREF[3]:
;   core_actor.cpp_CDemonActor_handleFootstep_FUN_0040ca10 at 0040cb15
;   core_fire.cpp_CFireEffect_createBulletImpact_FUN_004c76a0 at 004c78af
;   core_setedit.cpp_loadGroundTypes_FUN_00578420 at 0057854d
;
; Referenced Globals:
;   void* switchdataD_004eeca0 = 004eecf1
;   TerminatedCString s_no_0062e5c7
;   TerminatedCString s_ct_0062e5ca
;   TerminatedCString s_dt_0062e5cd
;   TerminatedCString s_dt_0062e5d0
;   TerminatedCString s_mt_0062e5d3
;   TerminatedCString s_wt_0062e5d6
;   TerminatedCString s_wd_0062e5d9
;   TerminatedCString s_mb_0062e5dc
;   TerminatedCString s_md_0062e5df
;   TerminatedCString s_cp_0062e5e2
;   TerminatedCString s_bd_0062e5e5
;   TerminatedCString s_gl_0062e5e8
;   TerminatedCString s_gr_0062e5eb
;   TerminatedCString s_df_0062e5ee
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004eece0
        ;   Label: core_ground.cpp_getGroundTypeCode_FUN_004eece0
    DEC EAX                             ; 004eece4
    CMP EAX,0xc                         ; 004eece5
    JA 0x004eed3f                       ; 004eece8
        ;   XREF to: 004eed3f (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x4eeca0]  ; 004eecea | caseD_1 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV EAX,0x62e5c7                    ; 004eecf1 | = "no"
        ;   Label: caseD_1
    RET                                 ; 004eecf6
    MOV EAX,0x62e5ca                    ; 004eecf7 | = "ct"
        ;   Label: caseD_2
    RET                                 ; 004eecfc
    MOV EAX,0x62e5cd                    ; 004eecfd | = "dt"
        ;   Label: caseD_3
    RET                                 ; 004eed02
    MOV EAX,0x62e5d0                    ; 004eed03 | = "dt"
        ;   Label: caseD_4
    RET                                 ; 004eed08
    MOV EAX,0x62e5d3                    ; 004eed09 | = "mt"
        ;   Label: caseD_5
    RET                                 ; 004eed0e
    MOV EAX,0x62e5d6                    ; 004eed0f | = "wt"
        ;   Label: caseD_6
    RET                                 ; 004eed14
    MOV EAX,0x62e5d9                    ; 004eed15 | = "wd"
        ;   Label: caseD_7
    RET                                 ; 004eed1a
    MOV EAX,0x62e5dc                    ; 004eed1b | = "mb"
        ;   Label: caseD_8
    RET                                 ; 004eed20
    MOV EAX,0x62e5df                    ; 004eed21 | = "md"
        ;   Label: caseD_9
    RET                                 ; 004eed26
    MOV EAX,0x62e5e2                    ; 004eed27 | = "cp"
        ;   Label: caseD_a
    RET                                 ; 004eed2c
    MOV EAX,0x62e5e5                    ; 004eed2d | = "bd"
        ;   Label: caseD_b
    RET                                 ; 004eed32
    MOV EAX,0x62e5e8                    ; 004eed33 | = "gl"
        ;   Label: caseD_c
    RET                                 ; 004eed38
    MOV EAX,0x62e5eb                    ; 004eed39 | = "gr"
        ;   Label: caseD_d
    RET                                 ; 004eed3e
    MOV EAX,0x62e5ee                    ; 004eed3f | = "df"
        ;   Label: default
    RET                                 ; 004eed44

