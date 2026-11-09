; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dirmat_cpp_FUN_0045f690(float *param_1,float *param_2)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[56]:
;   core_actor.cpp_FUN_00408ac0 at 00408ada
;   core_actor.cpp_FUN_00408b40 at 00408b5c
;   core_box.cpp_CBox_processPhysics_FUN_0041e130 at 0041e3cc
;   core_box.cpp_FUN_0041de90 at 0041e031
;   core_box.cpp_FUN_00420140 at 004202a2
;   core_bugs.cpp_FUN_00426030 at 00426213
;   core_bugs.cpp_FUN_004263d0 at 00426795
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90 at 00431044
;   core_charactr.cpp_FUN_00434c60 at 00434f3d
;   core_cloth.cpp_FUN_0043fd50 at 00440414
;   ... and 46 more
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 0045f690
        ;   Label: core_dirmat.cpp_FUN_0045f690
    SUB ESP,0xc                         ; 0045f691
    MOV EDX,dword ptr [ESP + 0x14]      ; 0045f694
    MOV EAX,dword ptr [ESP + 0x18]      ; 0045f698
    MOV ECX,ESI                         ; 0045f69c
    FLD float ptr [EAX + 0x4]           ; 0045f69e
    FMUL float ptr [EDX + 0x4]          ; 0045f6a1
    FLD float ptr [EAX + 0x4]           ; 0045f6a4
    FMUL float ptr [EDX + 0x10]         ; 0045f6a7
    FLD float ptr [EAX + 0x4]           ; 0045f6aa
    FMUL float ptr [EDX + 0x1c]         ; 0045f6ad
    FLD float ptr [EAX]                 ; 0045f6b0
    FMUL float ptr [EDX]                ; 0045f6b2
    FLD float ptr [EAX]                 ; 0045f6b4
    FMUL float ptr [EDX + 0xc]          ; 0045f6b6
    FLD float ptr [EAX]                 ; 0045f6b9
    FXCH ST2                            ; 0045f6bb
    FADDP ST5,ST0                       ; 0045f6bd
    FXCH                                ; 0045f6bf
    FMUL float ptr [EDX + 0x18]         ; 0045f6c1
    FLD float ptr [EAX + 0x8]           ; 0045f6c4
    FMUL float ptr [EDX + 0x8]          ; 0045f6c7
    FXCH ST2                            ; 0045f6ca
    FADDP ST4,ST0                       ; 0045f6cc
    FADDP ST2,ST0                       ; 0045f6ce
    FLD float ptr [EAX + 0x8]           ; 0045f6d0
    FMUL float ptr [EDX + 0x14]         ; 0045f6d3
    FLD float ptr [EAX + 0x8]           ; 0045f6d6
    FMUL float ptr [EDX + 0x20]         ; 0045f6d9
    MOV EDI,ESI                         ; 0045f6dc
    MOV ESI,ESP                         ; 0045f6de
    FXCH ST2                            ; 0045f6e0
    FADDP ST5,ST0                       ; 0045f6e2
    FADDP ST3,ST0                       ; 0045f6e4
    FADDP                               ; 0045f6e6
    FXCH                                ; 0045f6e8
    FSTP float ptr [ESP + 0x4]          ; 0045f6ea
    FSTP float ptr [ESP + 0x8]          ; 0045f6ee
    FSTP float ptr [ESP]                ; 0045f6f2
    MOVSD ES:EDI,ESI                    ; 0045f6f5
    MOVSD ES:EDI,ESI                    ; 0045f6f6
    MOVSD ES:EDI,ESI                    ; 0045f6f7
    MOV EAX,ECX                         ; 0045f6f8
    ADD ESP,0xc                         ; 0045f6fa
    POP EDI                             ; 0045f6fd
    RET                                 ; 0045f6fe

