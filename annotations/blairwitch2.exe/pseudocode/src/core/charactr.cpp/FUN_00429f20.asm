; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00429f20(CCharacter *param_1,float param_2,char *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 at 004889a2
;
; Referenced Globals:
;   undefined4 DAT_005cd146
;   undefined4 DAT_0265370c
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_0042b300
;   core_charactr.cpp_FUN_0042b420
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00429f20
        ;   Label: core_charactr.cpp_FUN_00429f20
    PUSH EDI                            ; 00429f21
    SUB ESP,0x10                        ; 00429f22
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00429f25
    MOV ECX,dword ptr [ESP + 0x24]      ; 00429f29
    TEST ECX,ECX                        ; 00429f2d
    JZ 0x0042a005                       ; 00429f2f
        ;   XREF to: 0042a005 (CONDITIONAL_JUMP)  ; LAB_0042a005
    CMP byte ptr [ECX],0x0              ; 00429f35
    JZ 0x0042a005                       ; 00429f38
        ;   XREF to: 0042a005 (CONDITIONAL_JUMP)  ; LAB_0042a005
    FLD float ptr [EBX + 0x27f0]        ; 00429f3e
    FSUB float ptr [ESP + 0x20]         ; 00429f44
    FST float ptr [EBX + 0x27f0]        ; 00429f48
    FLDZ                                ; 00429f4e
    FCOMPP                              ; 00429f50
    FNSTSW AX                           ; 00429f52
    SAHF                                ; 00429f54
    JC 0x00429ff3                       ; 00429f55
        ;   XREF to: 00429ff3 (CONDITIONAL_JUMP)  ; LAB_00429ff3
    MOV EDX,dword ptr [EBX + 0x27e8]    ; 00429f5b
    TEST EDX,EDX                        ; 00429f61
    JZ 0x0042a025                       ; 00429f63
        ;   XREF to: 0042a025 (CONDITIONAL_JUMP)  ; LAB_0042a025
    MOV EAX,EDX                         ; 00429f69
    LEA EDX,[EBX + 0x20]                ; 00429f6b
    FLD float ptr [EAX + 0x20]          ; 00429f6e
    FSUB float ptr [EDX]                ; 00429f71
    FMUL ST0                            ; 00429f73
    FLD float ptr [EAX + 0x24]          ; 00429f75
    FSUB float ptr [EDX + 0x4]          ; 00429f78
    FMUL ST0                            ; 00429f7b
    FLD float ptr [EAX + 0x28]          ; 00429f7d
    FXCH                                ; 00429f80
    FADDP ST2,ST0                       ; 00429f82
    FSUB float ptr [EDX + 0x8]          ; 00429f84
    FMUL ST0                            ; 00429f87
    FADDP                               ; 00429f89
    FSQRT                               ; 00429f8b
    FCOMP double ptr [0x005cd146]       ; 00429f8d | DAT_005cd146
    FNSTSW AX                           ; 00429f93
    SAHF                                ; 00429f95
    JNC 0x0042a025                      ; 00429f96
        ;   XREF to: 0042a025 (CONDITIONAL_JUMP)  ; LAB_0042a025
    MOV dword ptr [EBX + 0x27ec],0x0    ; 00429f9c
    MOV dword ptr [EBX + 0x27e8],0x0    ; 00429fa6
        ;   Label: LAB_00429fa6
    PUSH ECX                            ; 00429fb0
        ;   Label: LAB_00429fb0
    PUSH EBX                            ; 00429fb1
    CALL core_charactr.cpp_FUN_0042b300 ; 00429fb2
        ;   XREF to: 0042b300 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b300()
    MOV dword ptr [EBX + 0x27e8],EAX    ; 00429fb7
    ADD ESP,0x8                         ; 00429fbd
        ;   Label: LAB_00429fbd
    MOV dword ptr [EBX + 0x27ec],EAX    ; 00429fc0
    CMP dword ptr [EBX + 0x27ec],0x0    ; 00429fc6
    JZ 0x0042a04c                       ; 00429fcd
        ;   XREF to: 0042a04c (CONDITIONAL_JUMP)  ; LAB_0042a04c
    PUSH 0x40000000                     ; 00429fd3
    PUSH 0x3f800000                     ; 00429fd8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00429fdd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
        ;   Label: LAB_00429fdd
    MOV dword ptr [ESP + 0x14],EAX      ; 00429fe2
    MOV EAX,dword ptr [ESP + 0x14]      ; 00429fe6
    MOV dword ptr [EBX + 0x27f0],EAX    ; 00429fea
    ADD ESP,0x8                         ; 00429ff0
    MOV EDX,dword ptr [EBX + 0x27ec]    ; 00429ff3
        ;   Label: LAB_00429ff3
    TEST EDX,EDX                        ; 00429ff9
    JNZ 0x0042a058                      ; 00429ffb
        ;   XREF to: 0042a058 (CONDITIONAL_JUMP)  ; LAB_0042a058
    XOR EAX,EAX                         ; 00429ffd
        ;   Label: LAB_00429ffd
    ADD ESP,0x10                        ; 00429fff
    POP EDI                             ; 0042a002
    POP EBX                             ; 0042a003
    RET                                 ; 0042a004
    MOV dword ptr [EBX + 0x27ec],0x0    ; 0042a005
        ;   Label: LAB_0042a005
    MOV dword ptr [EBX + 0x27f0],0x0    ; 0042a00f
    MOV dword ptr [EBX + 0x27e8],0x0    ; 0042a019
    JMP 0x00429ffd                      ; 0042a023
        ;   XREF to: 00429ffd (UNCONDITIONAL_JUMP)  ; LAB_00429ffd
    CMP dword ptr [EBX + 0x27ec],0x0    ; 0042a025
        ;   Label: LAB_0042a025
    JZ 0x00429fa6                       ; 0042a02c
        ;   XREF to: 00429fa6 (CONDITIONAL_JUMP)  ; LAB_00429fa6
    MOV EDI,dword ptr [EBX + 0x27e8]    ; 0042a032
    TEST EDI,EDI                        ; 0042a038
    JZ 0x00429fb0                       ; 0042a03a
        ;   XREF to: 00429fb0 (CONDITIONAL_JUMP)  ; LAB_00429fb0
    PUSH EDI                            ; 0042a040
    PUSH EBX                            ; 0042a041
    CALL core_charactr.cpp_FUN_0042b420 ; 0042a042
        ;   XREF to: 0042b420 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b420()
    JMP 0x00429fbd                      ; 0042a047
        ;   XREF to: 00429fbd (UNCONDITIONAL_JUMP)  ; LAB_00429fbd
    PUSH 0x41200000                     ; 0042a04c
        ;   Label: LAB_0042a04c
    PUSH 0x40800000                     ; 0042a051
    JMP 0x00429fdd                      ; 0042a056
        ;   XREF to: 00429fdd (UNCONDITIONAL_JUMP)  ; LAB_00429fdd
    PUSH 0x0                            ; 0042a058
        ;   Label: LAB_0042a058
    PUSH 0x0                            ; 0042a05a
    PUSH 0x265370c                      ; 0042a05c | DAT_0265370c
    MOV EAX,EDX                         ; 0042a061
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0042a063
    PUSH EAX                            ; 0042a069
    CALL dword ptr [EDX + 0xcc]         ; 0042a06a
    ADD ESP,0x4                         ; 0042a070
    PUSH EAX                            ; 0042a073
    MOV EAX,dword ptr [EBX + 0x27ec]    ; 0042a074
    ADD EAX,0x20                        ; 0042a07a
    PUSH EAX                            ; 0042a07d
    PUSH EBX                            ; 0042a07e
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0042a07f
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0042a084
    TEST EAX,EAX                        ; 0042a087
    JZ 0x0042a095                       ; 0042a089
        ;   XREF to: 0042a095 (CONDITIONAL_JUMP)  ; LAB_0042a095
    JL 0x0042a0a0                       ; 0042a08b
        ;   XREF to: 0042a0a0 (CONDITIONAL_JUMP)  ; LAB_0042a0a0
    XOR EAX,EAX                         ; 0042a08d
    ADD ESP,0x10                        ; 0042a08f
    POP EDI                             ; 0042a092
    POP EBX                             ; 0042a093
    RET                                 ; 0042a094
    MOV EAX,0x1                         ; 0042a095
        ;   Label: LAB_0042a095
    ADD ESP,0x10                        ; 0042a09a
    POP EDI                             ; 0042a09d
    POP EBX                             ; 0042a09e
    RET                                 ; 0042a09f
    MOV dword ptr [EBX + 0x27ec],0x0    ; 0042a0a0
        ;   Label: LAB_0042a0a0
    XOR EAX,EAX                         ; 0042a0aa
    ADD ESP,0x10                        ; 0042a0ac
    POP EDI                             ; 0042a0af
    POP EBX                             ; 0042a0b0
    RET                                 ; 0042a0b1

