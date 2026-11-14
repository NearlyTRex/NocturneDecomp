; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00433f10(CCharacter *param_1,float param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 at 004a1012
;
; Referenced Globals:
;   undefined4 DAT_005d5dff
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_00435380
;   core_charactr.cpp_FUN_004354a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433f10
        ;   Label: core_charactr.cpp_FUN_00433f10
    PUSH EDI                            ; 00433f11
    SUB ESP,0x10                        ; 00433f12
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00433f15
    MOV ECX,dword ptr [ESP + 0x24]      ; 00433f19
    TEST ECX,ECX                        ; 00433f1d
    JZ 0x00433ff5                       ; 00433f1f
        ;   XREF to: 00433ff5 (CONDITIONAL_JUMP)  ; LAB_00433ff5
    CMP byte ptr [ECX],0x0              ; 00433f25
    JZ 0x00433ff5                       ; 00433f28
        ;   XREF to: 00433ff5 (CONDITIONAL_JUMP)  ; LAB_00433ff5
    FLD float ptr [EBX + 0x2784]        ; 00433f2e
    FSUB float ptr [ESP + 0x20]         ; 00433f34
    FST float ptr [EBX + 0x2784]        ; 00433f38
    FLDZ                                ; 00433f3e
    FCOMPP                              ; 00433f40
    FNSTSW AX                           ; 00433f42
    SAHF                                ; 00433f44
    JC 0x00433fe3                       ; 00433f45
        ;   XREF to: 00433fe3 (CONDITIONAL_JUMP)  ; LAB_00433fe3
    MOV EDX,dword ptr [EBX + 0x277c]    ; 00433f4b
    TEST EDX,EDX                        ; 00433f51
    JZ 0x00434015                       ; 00433f53
        ;   XREF to: 00434015 (CONDITIONAL_JUMP)  ; LAB_00434015
    MOV EAX,EDX                         ; 00433f59
    LEA EDX,[EBX + 0x20]                ; 00433f5b
    FLD float ptr [EAX + 0x20]          ; 00433f5e
    FSUB float ptr [EDX]                ; 00433f61
    FMUL ST0                            ; 00433f63
    FLD float ptr [EAX + 0x24]          ; 00433f65
    FSUB float ptr [EDX + 0x4]          ; 00433f68
    FMUL ST0                            ; 00433f6b
    FLD float ptr [EAX + 0x28]          ; 00433f6d
    FXCH                                ; 00433f70
    FADDP ST2,ST0                       ; 00433f72
    FSUB float ptr [EDX + 0x8]          ; 00433f74
    FMUL ST0                            ; 00433f77
    FADDP                               ; 00433f79
    FSQRT                               ; 00433f7b
    FCOMP double ptr [0x005d5dff]       ; 00433f7d | DAT_005d5dff
    FNSTSW AX                           ; 00433f83
    SAHF                                ; 00433f85
    JNC 0x00434015                      ; 00433f86
        ;   XREF to: 00434015 (CONDITIONAL_JUMP)  ; LAB_00434015
    MOV dword ptr [EBX + 0x2780],0x0    ; 00433f8c
    MOV dword ptr [EBX + 0x277c],0x0    ; 00433f96
        ;   Label: LAB_00433f96
    PUSH ECX                            ; 00433fa0
        ;   Label: LAB_00433fa0
    PUSH EBX                            ; 00433fa1
    CALL core_charactr.cpp_FUN_00435380 ; 00433fa2
        ;   XREF to: 00435380 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435380()
    MOV dword ptr [EBX + 0x277c],EAX    ; 00433fa7
    ADD ESP,0x8                         ; 00433fad
        ;   Label: LAB_00433fad
    MOV dword ptr [EBX + 0x2780],EAX    ; 00433fb0
    CMP dword ptr [EBX + 0x2780],0x0    ; 00433fb6
    JZ 0x0043403c                       ; 00433fbd
        ;   XREF to: 0043403c (CONDITIONAL_JUMP)  ; LAB_0043403c
    PUSH 0x40000000                     ; 00433fc3
    PUSH 0x3f800000                     ; 00433fc8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 00433fcd
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
        ;   Label: LAB_00433fcd
    MOV dword ptr [ESP + 0x14],EAX      ; 00433fd2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00433fd6
    MOV dword ptr [EBX + 0x2784],EAX    ; 00433fda
    ADD ESP,0x8                         ; 00433fe0
    MOV EDX,dword ptr [EBX + 0x2780]    ; 00433fe3
        ;   Label: LAB_00433fe3
    TEST EDX,EDX                        ; 00433fe9
    JNZ 0x00434048                      ; 00433feb
        ;   XREF to: 00434048 (CONDITIONAL_JUMP)  ; LAB_00434048
    XOR EAX,EAX                         ; 00433fed
        ;   Label: LAB_00433fed
    ADD ESP,0x10                        ; 00433fef
    POP EDI                             ; 00433ff2
    POP EBX                             ; 00433ff3
    RET                                 ; 00433ff4
    MOV dword ptr [EBX + 0x2780],0x0    ; 00433ff5
        ;   Label: LAB_00433ff5
    MOV dword ptr [EBX + 0x2784],0x0    ; 00433fff
    MOV dword ptr [EBX + 0x277c],0x0    ; 00434009
    JMP 0x00433fed                      ; 00434013
        ;   XREF to: 00433fed (UNCONDITIONAL_JUMP)  ; LAB_00433fed
    CMP dword ptr [EBX + 0x2780],0x0    ; 00434015
        ;   Label: LAB_00434015
    JZ 0x00433f96                       ; 0043401c
        ;   XREF to: 00433f96 (CONDITIONAL_JUMP)  ; LAB_00433f96
    MOV EDI,dword ptr [EBX + 0x277c]    ; 00434022
    TEST EDI,EDI                        ; 00434028
    JZ 0x00433fa0                       ; 0043402a
        ;   XREF to: 00433fa0 (CONDITIONAL_JUMP)  ; LAB_00433fa0
    PUSH EDI                            ; 00434030
    PUSH EBX                            ; 00434031
    CALL core_charactr.cpp_FUN_004354a0 ; 00434032
        ;   XREF to: 004354a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004354a0()
    JMP 0x00433fad                      ; 00434037
        ;   XREF to: 00433fad (UNCONDITIONAL_JUMP)  ; LAB_00433fad
    PUSH 0x41200000                     ; 0043403c
        ;   Label: LAB_0043403c
    PUSH 0x40800000                     ; 00434041
    JMP 0x00433fcd                      ; 00434046
        ;   XREF to: 00433fcd (UNCONDITIONAL_JUMP)  ; LAB_00433fcd
    PUSH 0x0                            ; 00434048
        ;   Label: LAB_00434048
    PUSH 0x0                            ; 0043404a
    PUSH 0x2c8af28                      ; 0043404c | DAT_02c8af28
    MOV EAX,EDX                         ; 00434051
    MOV EDX,dword ptr [EDX + 0x154]     ; 00434053
    PUSH EAX                            ; 00434059
    CALL dword ptr [EDX + 0xc4]         ; 0043405a
    ADD ESP,0x4                         ; 00434060
    PUSH EAX                            ; 00434063
    MOV EAX,dword ptr [EBX + 0x2780]    ; 00434064
    ADD EAX,0x20                        ; 0043406a
    PUSH EAX                            ; 0043406d
    PUSH EBX                            ; 0043406e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0043406f
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00434074
    TEST EAX,EAX                        ; 00434077
    JZ 0x00434085                       ; 00434079
        ;   XREF to: 00434085 (CONDITIONAL_JUMP)  ; LAB_00434085
    JL 0x00434090                       ; 0043407b
        ;   XREF to: 00434090 (CONDITIONAL_JUMP)  ; LAB_00434090
    XOR EAX,EAX                         ; 0043407d
    ADD ESP,0x10                        ; 0043407f
    POP EDI                             ; 00434082
    POP EBX                             ; 00434083
    RET                                 ; 00434084
    MOV EAX,0x1                         ; 00434085
        ;   Label: LAB_00434085
    ADD ESP,0x10                        ; 0043408a
    POP EDI                             ; 0043408d
    POP EBX                             ; 0043408e
    RET                                 ; 0043408f
    MOV dword ptr [EBX + 0x2780],0x0    ; 00434090
        ;   Label: LAB_00434090
    XOR EAX,EAX                         ; 0043409a
    ADD ESP,0x10                        ; 0043409c
    POP EDI                             ; 0043409f
    POP EBX                             ; 004340a0
    RET                                 ; 004340a1

