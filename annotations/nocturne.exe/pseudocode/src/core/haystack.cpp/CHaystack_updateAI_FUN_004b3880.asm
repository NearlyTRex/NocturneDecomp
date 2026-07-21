; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_haystack_cpp_CHaystack_updateAI_FUN_004b3880(int param_1,float param_2)
;
; Local Variables:
; undefined4       Stack[-0xac]:4  local_ac
; undefined8       Stack[-0xa8]:8  local_a8
; undefined8       Stack[-0xa0]:8  local_a0
; undefined8       Stack[-0x98]:8  local_98
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined        Stack[-0x84]:1  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x78]:4  local_78
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_004b32d0 at 004b3583
;
; Referenced Globals:
;   undefined4 DAT_005855bd
;   undefined4 DAT_005855c5
;   undefined4 DAT_005855cd
;   undefined4 DAT_005855d5
;   undefined4 DAT_005855dd
;   undefined4 DAT_005855e5
;   undefined4 DAT_005855ed
;   undefined4 DAT_005855f5
;   undefined4 DAT_005855fd
;   undefined4 DAT_00585605
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   core_actor.cpp_normalizeAngleToPi_FUN_0040df00
;   core_hero.cpp_CHero_closestEnemy_FUN_004b5d00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600
;   core_path.cpp_getPathMap_FUN_004f1e00
;   core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3880
        ;   Label: core_haystack.cpp_CHaystack_updateAI_FUN_004b3880
    PUSH ESI                            ; 004b3881
    PUSH EDI                            ; 004b3882
    PUSH EBP                            ; 004b3883
    MOV EBP,ESP                         ; 004b3884
    SUB ESP,0x98                        ; 004b3886
    AND ESP,0xfffffff8                  ; 004b388c
    MOV EBX,dword ptr [EBP + 0x14]      ; 004b388f
    MOV EDX,0x3e800000                  ; 004b3892
    MOV ECX,0x3f490fdb                  ; 004b3897
    PUSH 0x2c                           ; 004b389c
    XOR ESI,ESI                         ; 004b389e
    MOV EDI,dword ptr [0x01cae0e8]      ; 004b38a0 | DAT_01cae0e8
    PUSH ESI                            ; 004b38a6
    LEA EAX,[EBX + 0xbc94]              ; 004b38a7
    MOV dword ptr [ESP + 0x94],EDX      ; 004b38ad
    PUSH EAX                            ; 004b38b4
    MOV dword ptr [ESP + 0x94],ECX      ; 004b38b5
    MOV EDI,dword ptr [EDI*0x4 + 0x1cae0d8] ; 004b38bc
    CALL crt_memory.c_memset_FUN_00563cc0 ; 004b38c3
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    MOV EAX,dword ptr [EBX + 0x1fa38]   ; 004b38c8
    ADD ESP,0xc                         ; 004b38ce
    TEST EAX,EAX                        ; 004b38d1
    JZ 0x004b3c27                       ; 004b38d3
        ;   XREF to: 004b3c27 (CONDITIONAL_JUMP)  ; LAB_004b3c27
    MOV EAX,[0x01cae0e8]                ; 004b38d9 | DAT_01cae0e8
    LEA EDX,[EBX + 0x20]                ; 004b38de
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b38e1
    FLD float ptr [EDX]                 ; 004b38e8
    FSUB float ptr [EAX + 0x20]         ; 004b38ea
    FSTP float ptr [ESP + 0x60]         ; 004b38ed
    FLD float ptr [EDX + 0x4]           ; 004b38f1
    FSUB float ptr [EAX + 0x24]         ; 004b38f4
    FST float ptr [ESP + 0x64]          ; 004b38f7
    FMUL float ptr [ESP + 0x64]         ; 004b38fb
    FLD float ptr [ESP + 0x60]          ; 004b38ff
    FMUL ST0                            ; 004b3903
    FLD float ptr [EDX + 0x8]           ; 004b3905
    FSUB float ptr [EAX + 0x28]         ; 004b3908
    FXCH                                ; 004b390b
    FADDP ST2,ST0                       ; 004b390d
    FST float ptr [ESP + 0x68]          ; 004b390f
    FMUL float ptr [ESP + 0x68]         ; 004b3913
    FADDP                               ; 004b3917
    FSQRT                               ; 004b3919
    MOV EDX,dword ptr [EBX + 0x1fa38]   ; 004b391b
    FSTP float ptr [ESP + 0x78]         ; 004b3921
    CMP EDX,0x3                         ; 004b3925
    JNZ 0x004b3c2e                      ; 004b3928
        ;   XREF to: 004b3c2e (CONDITIONAL_JUMP)  ; LAB_004b3c2e
    MOV ECX,dword ptr [EBX + 0x1fa38]   ; 004b392e
        ;   Label: LAB_004b392e
    CMP ECX,0x2                         ; 004b3934
    JNZ 0x004b3c46                      ; 004b3937
        ;   XREF to: 004b3c46 (CONDITIONAL_JUMP)  ; LAB_004b3c46
    LEA EAX,[ESP + 0x20]                ; 004b393d
        ;   Label: LAB_004b393d
    PUSH EAX                            ; 004b3941
    MOV EDX,0x461c3f9a                  ; 004b3942
    PUSH EBX                            ; 004b3947
    MOV dword ptr [ESP + 0x28],EDX      ; 004b3948
    CALL core_hero.cpp_CHero_closestEnemy_FUN_004b5d00 ; 004b394c
        ;   XREF to: 004b5d00 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_CHero_closestEnemy_FUN_004b5d00()
    MOV EDX,EAX                         ; 004b3951
    ADD ESP,0x8                         ; 004b3953
    TEST EAX,EAX                        ; 004b3956
    JZ 0x004b3c54                       ; 004b3958
        ;   XREF to: 004b3c54 (CONDITIONAL_JUMP)  ; LAB_004b3c54
    FLD float ptr [ESP + 0x20]          ; 004b395e
    FCOMP double ptr [0x005855c5]       ; 004b3962 | DAT_005855c5
    FNSTSW AX                           ; 004b3968
    SAHF                                ; 004b396a
    JNC 0x004b3c54                      ; 004b396b
        ;   XREF to: 004b3c54 (CONDITIONAL_JUMP)  ; LAB_004b3c54
    MOV ESI,0x1                         ; 004b3971
    MOV EDI,EDX                         ; 004b3976
    LEA EDX,[EDI + 0x20]                ; 004b3978
        ;   Label: LAB_004b3978
    LEA EAX,[EBX + 0x20]                ; 004b397b
    FLD float ptr [EDX]                 ; 004b397e
    FSUB float ptr [EAX]                ; 004b3980
    FSTP float ptr [ESP + 0x30]         ; 004b3982
    FLD float ptr [EDX + 0x4]           ; 004b3986
    FSUB float ptr [EAX + 0x4]          ; 004b3989
    FSTP float ptr [ESP + 0x34]         ; 004b398c
    FLD float ptr [EDX + 0x8]           ; 004b3990
    LEA EDX,[ESP + 0x60]                ; 004b3993
    FSUB float ptr [EAX + 0x8]          ; 004b3997
    LEA EAX,[ESP + 0x30]                ; 004b399a
    FSTP float ptr [ESP + 0x38]         ; 004b399e
    CMP EDX,EAX                         ; 004b39a2
    JZ 0x004b39be                       ; 004b39a4
        ;   XREF to: 004b39be (CONDITIONAL_JUMP)  ; LAB_004b39be
    MOV EAX,dword ptr [ESP + 0x30]      ; 004b39a6
    MOV dword ptr [ESP + 0x60],EAX      ; 004b39aa
    MOV EAX,dword ptr [ESP + 0x34]      ; 004b39ae
    MOV dword ptr [ESP + 0x64],EAX      ; 004b39b2
    MOV EAX,dword ptr [ESP + 0x38]      ; 004b39b6
    MOV dword ptr [ESP + 0x68],EAX      ; 004b39ba
    FLD float ptr [ESP + 0x64]          ; 004b39be
        ;   Label: LAB_004b39be
    FMUL ST0                            ; 004b39c2
    FLD float ptr [ESP + 0x60]          ; 004b39c4
    FMUL ST0                            ; 004b39c8
    FADDP                               ; 004b39ca
    FLD float ptr [ESP + 0x68]          ; 004b39cc
    FMUL ST0                            ; 004b39d0
    FADDP                               ; 004b39d2
    FSQRT                               ; 004b39d4
    FSTP float ptr [ESP + 0x90]         ; 004b39d6
    MOV EAX,dword ptr [ESP + 0x90]      ; 004b39dd
    FLD float ptr [ESP + 0x90]          ; 004b39e4
    MOV dword ptr [ESP + 0x18],EAX      ; 004b39eb
    FCOMP double ptr [0x005855cd]       ; 004b39ef | DAT_005855cd
    FNSTSW AX                           ; 004b39f5
    SAHF                                ; 004b39f7
    JNC 0x004b3cc9                      ; 004b39f8
        ;   XREF to: 004b3cc9 (CONDITIONAL_JUMP)  ; LAB_004b3cc9
    LEA EAX,[EBX + 0x150]               ; 004b39fe
    CMP ESI,0x1                         ; 004b3a04
    JNZ 0x004b3c98                      ; 004b3a07
        ;   XREF to: 004b3c98 (CONDITIONAL_JUMP)  ; LAB_004b3c98
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004b3a0d
    JNZ 0x004b3c70                      ; 004b3a14
        ;   XREF to: 004b3c70 (CONDITIONAL_JUMP)  ; LAB_004b3c70
    MOV dword ptr [EBX + 0xbcac],ESI    ; 004b3a1a
    CMP ESI,0x1                         ; 004b3a20
        ;   Label: LAB_004b3a20
    JNZ 0x004b3aee                      ; 004b3a23
        ;   XREF to: 004b3aee (CONDITIONAL_JUMP)  ; LAB_004b3aee
    LEA EAX,[ESP + 0x60]                ; 004b3a29
    PUSH EAX                            ; 004b3a2d
    LEA EAX,[ESP + 0x4c]                ; 004b3a2e
    PUSH EAX                            ; 004b3a32
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b3a33
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    FLD float ptr [EAX + 0x4]           ; 004b3a38
    ADD ESP,0x8                         ; 004b3a3b
    FSUB float ptr [EBX + 0x34]         ; 004b3a3e
    SUB ESP,0x4                         ; 004b3a41
    FSTP float ptr [ESP]                ; 004b3a44
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b3a47
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 004b3a4c
    FLD float ptr [ESP + 0x98]          ; 004b3a53
    FMUL double ptr [0x005855d5]        ; 004b3a5a | DAT_005855d5
    ADD ESP,0x4                         ; 004b3a60
    FMUL double ptr [0x005855dd]        ; 004b3a63 | DAT_005855dd
    FLD float ptr [ESP + 0x8c]          ; 004b3a69
    FCHS                                ; 004b3a70
    FSTP float ptr [ESP + 0x80]         ; 004b3a72
    FST float ptr [EBX + 0xbcb8]        ; 004b3a79
    FCOMP float ptr [ESP + 0x80]        ; 004b3a7f
    FNSTSW AX                           ; 004b3a86
    SAHF                                ; 004b3a88
    JNC 0x004b3a98                      ; 004b3a89
        ;   XREF to: 004b3a98 (CONDITIONAL_JUMP)  ; LAB_004b3a98
    MOV EAX,dword ptr [ESP + 0x80]      ; 004b3a8b
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004b3a92
    FLD float ptr [EBX + 0xbcb8]        ; 004b3a98
        ;   Label: LAB_004b3a98
    FCOMP float ptr [ESP + 0x8c]        ; 004b3a9e
    FNSTSW AX                           ; 004b3aa5
    SAHF                                ; 004b3aa7
    JBE 0x004b3ab7                      ; 004b3aa8
        ;   XREF to: 004b3ab7 (CONDITIONAL_JUMP)  ; LAB_004b3ab7
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b3aaa
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004b3ab1
    FLD float ptr [EBX + 0xbcb8]        ; 004b3ab7
        ;   Label: LAB_004b3ab7
    FST double ptr [ESP + 0x10]         ; 004b3abd
    FCOMP double ptr [0x005855ed]       ; 004b3ac1 | DAT_005855ed
    FNSTSW AX                           ; 004b3ac7
    SAHF                                ; 004b3ac9
    JBE 0x004b3aee                      ; 004b3aca
        ;   XREF to: 004b3aee (CONDITIONAL_JUMP)  ; LAB_004b3aee
    FLD double ptr [ESP + 0x10]         ; 004b3acc
    FCOMP double ptr [0x005855f5]       ; 004b3ad0 | DAT_005855f5
    FNSTSW AX                           ; 004b3ad6
    SAHF                                ; 004b3ad8
    JNC 0x004b3aee                      ; 004b3ad9
        ;   XREF to: 004b3aee (CONDITIONAL_JUMP)  ; LAB_004b3aee
    CMP dword ptr [EBX + 0xbca0],0x0    ; 004b3adb
    JZ 0x004b3aee                       ; 004b3ae2
        ;   XREF to: 004b3aee (CONDITIONAL_JUMP)  ; LAB_004b3aee
    MOV dword ptr [EBX + 0xbcb8],0x0    ; 004b3ae4
    LEA EAX,[EBX + 0x20]                ; 004b3aee
        ;   Label: LAB_004b3aee
    FLD float ptr [EDI + 0x20]          ; 004b3af1
    FSUB float ptr [EAX]                ; 004b3af4
    FSTP float ptr [ESP + 0x3c]         ; 004b3af6
    FLD float ptr [EDI + 0x24]          ; 004b3afa
    FSUB float ptr [EAX + 0x4]          ; 004b3afd
    LEA EDX,[ESP + 0x3c]                ; 004b3b00
    FSTP float ptr [ESP + 0x40]         ; 004b3b04
    FLD float ptr [EDI + 0x28]          ; 004b3b08
    FSUB float ptr [EAX + 0x8]          ; 004b3b0b
    LEA EAX,[ESP + 0x60]                ; 004b3b0e
    FSTP float ptr [ESP + 0x44]         ; 004b3b12
    CMP EAX,EDX                         ; 004b3b16
    JZ 0x004b3b32                       ; 004b3b18
        ;   XREF to: 004b3b32 (CONDITIONAL_JUMP)  ; LAB_004b3b32
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004b3b1a
    MOV dword ptr [ESP + 0x60],EAX      ; 004b3b1e
    MOV EAX,dword ptr [ESP + 0x40]      ; 004b3b22
    MOV dword ptr [ESP + 0x64],EAX      ; 004b3b26
    MOV EAX,dword ptr [ESP + 0x44]      ; 004b3b2a
    MOV dword ptr [ESP + 0x68],EAX      ; 004b3b2e
    LEA EAX,[ESP + 0x60]                ; 004b3b32
        ;   Label: LAB_004b3b32
    PUSH EAX                            ; 004b3b36
    LEA EAX,[ESP + 0x70]                ; 004b3b37
    PUSH EAX                            ; 004b3b3b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0 ; 004b3b3c
        ;   XREF to: 0054e4a0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0()
    MOV EDX,EAX                         ; 004b3b41
    LEA EAX,[ESP + 0x68]                ; 004b3b43
    ADD ESP,0x8                         ; 004b3b47
    CMP EAX,EDX                         ; 004b3b4a
    JZ 0x004b3b62                       ; 004b3b4c
        ;   XREF to: 004b3b62 (CONDITIONAL_JUMP)  ; LAB_004b3b62
    MOV EAX,dword ptr [EDX]             ; 004b3b4e
    MOV dword ptr [ESP + 0x60],EAX      ; 004b3b50
    MOV EAX,dword ptr [EDX + 0x4]       ; 004b3b54
    MOV dword ptr [ESP + 0x64],EAX      ; 004b3b57
    MOV EAX,dword ptr [EDX + 0x8]       ; 004b3b5b
    MOV dword ptr [ESP + 0x68],EAX      ; 004b3b5e
    FLD float ptr [ESP + 0x64]          ; 004b3b62
        ;   Label: LAB_004b3b62
    FSUB float ptr [EBX + 0x34]         ; 004b3b66
    SUB ESP,0x4                         ; 004b3b69
    FSTP float ptr [ESP]                ; 004b3b6c
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b3b6f
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 004b3b74
    FLD float ptr [ESP + 0x98]          ; 004b3b7b
    ADD ESP,0x4                         ; 004b3b82
    FST float ptr [ESP + 0x58]          ; 004b3b85
    FCOMP float ptr [ESP + 0x88]        ; 004b3b89
    FNSTSW AX                           ; 004b3b90
    SAHF                                ; 004b3b92
    JBE 0x004b3ba0                      ; 004b3b93
        ;   XREF to: 004b3ba0 (CONDITIONAL_JUMP)  ; LAB_004b3ba0
    MOV EAX,dword ptr [ESP + 0x88]      ; 004b3b95
    MOV dword ptr [ESP + 0x58],EAX      ; 004b3b9c
    FLD float ptr [ESP + 0x58]          ; 004b3ba0
        ;   Label: LAB_004b3ba0
    FLD float ptr [ESP + 0x88]          ; 004b3ba4
    FCHS                                ; 004b3bab
    FSTP float ptr [ESP + 0x7c]         ; 004b3bad
    FCOMP float ptr [ESP + 0x7c]        ; 004b3bb1
    FNSTSW AX                           ; 004b3bb5
    SAHF                                ; 004b3bb7
    JNC 0x004b3bc2                      ; 004b3bb8
        ;   XREF to: 004b3bc2 (CONDITIONAL_JUMP)  ; LAB_004b3bc2
    MOV EAX,dword ptr [ESP + 0x7c]      ; 004b3bba
    MOV dword ptr [ESP + 0x58],EAX      ; 004b3bbe
    FLD float ptr [ESP + 0x58]          ; 004b3bc2
        ;   Label: LAB_004b3bc2
    FLD float ptr [EBP + 0x18]          ; 004b3bc6
    FXCH                                ; 004b3bc9
    FSUB float ptr [EBX + 0x1fa48]      ; 004b3bcb
    FXCH                                ; 004b3bd1
    FMUL double ptr [0x005855fd]        ; 004b3bd3 | DAT_005855fd
    FXCH                                ; 004b3bd9
    FST float ptr [ESP + 0x1c]          ; 004b3bdb
    FXCH                                ; 004b3bdf
    FSTP double ptr [ESP + 0x8]         ; 004b3be1
    FCOMP double ptr [ESP + 0x8]        ; 004b3be5
    FNSTSW AX                           ; 004b3be9
    SAHF                                ; 004b3beb
    JBE 0x004b3bf6                      ; 004b3bec
        ;   XREF to: 004b3bf6 (CONDITIONAL_JUMP)  ; LAB_004b3bf6
    FLD double ptr [ESP + 0x8]          ; 004b3bee
    FSTP float ptr [ESP + 0x1c]         ; 004b3bf2
    FLD float ptr [EBP + 0x18]          ; 004b3bf6
        ;   Label: LAB_004b3bf6
    FMUL double ptr [0x00585605]        ; 004b3bf9 | DAT_00585605
    FLD float ptr [ESP + 0x1c]          ; 004b3bff
    FXCH                                ; 004b3c03
    FSTP double ptr [ESP]               ; 004b3c05
    FCOMP double ptr [ESP]              ; 004b3c08
    FNSTSW AX                           ; 004b3c0b
    SAHF                                ; 004b3c0d
    JNC 0x004b3c17                      ; 004b3c0e
        ;   XREF to: 004b3c17 (CONDITIONAL_JUMP)  ; LAB_004b3c17
    FLD double ptr [ESP]                ; 004b3c10
    FSTP float ptr [ESP + 0x1c]         ; 004b3c13
    FLD float ptr [EBX + 0x1fa48]       ; 004b3c17
        ;   Label: LAB_004b3c17
    FADD float ptr [ESP + 0x1c]         ; 004b3c1d
    FSTP float ptr [EBX + 0x1fa48]      ; 004b3c21
    MOV ESP,EBP                         ; 004b3c27
        ;   Label: LAB_004b3c27
    POP EBP                             ; 004b3c29
    POP EDI                             ; 004b3c2a
    POP ESI                             ; 004b3c2b
    POP EBX                             ; 004b3c2c
    RET                                 ; 004b3c2d
    FLD float ptr [ESP + 0x78]          ; 004b3c2e
        ;   Label: LAB_004b3c2e
    FCOMP float ptr [0x005855bd]        ; 004b3c32 | DAT_005855bd
    FNSTSW AX                           ; 004b3c38
    SAHF                                ; 004b3c3a
    JC 0x004b392e                       ; 004b3c3b
        ;   XREF to: 004b392e (CONDITIONAL_JUMP)  ; LAB_004b392e
    JMP 0x004b3978                      ; 004b3c41
        ;   XREF to: 004b3978 (UNCONDITIONAL_JUMP)  ; LAB_004b3978
    CMP ECX,0x3                         ; 004b3c46
        ;   Label: LAB_004b3c46
    JZ 0x004b393d                       ; 004b3c49
        ;   XREF to: 004b393d (CONDITIONAL_JUMP)  ; LAB_004b393d
    JMP 0x004b3978                      ; 004b3c4f
        ;   XREF to: 004b3978 (UNCONDITIONAL_JUMP)  ; LAB_004b3978
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004b3c54
        ;   Label: LAB_004b3c54
    JZ 0x004b3978                       ; 004b3c5b
        ;   XREF to: 004b3978 (CONDITIONAL_JUMP)  ; LAB_004b3978
    MOV dword ptr [EBX + 0xbcac],0x1    ; 004b3c61
    JMP 0x004b3978                      ; 004b3c6b
        ;   XREF to: 004b3978 (UNCONDITIONAL_JUMP)  ; LAB_004b3978
    PUSH EAX                            ; 004b3c70
        ;   Label: LAB_004b3c70
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b3c71
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b3c76
    ADD ESP,0x4                         ; 004b3c79
    CMP EAX,0x2                         ; 004b3c7c
    JZ 0x004b3a20                       ; 004b3c7f
        ;   XREF to: 004b3a20 (CONDITIONAL_JUMP)  ; LAB_004b3a20
    CMP EAX,ESI                         ; 004b3c85
    JZ 0x004b3a20                       ; 004b3c87
        ;   XREF to: 004b3a20 (CONDITIONAL_JUMP)  ; LAB_004b3a20
    MOV dword ptr [EBX + 0xbca0],ESI    ; 004b3c8d
    JMP 0x004b3a20                      ; 004b3c93
        ;   XREF to: 004b3a20 (UNCONDITIONAL_JUMP)  ; LAB_004b3a20
    PUSH EAX                            ; 004b3c98
        ;   Label: LAB_004b3c98
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004b3c99
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004b3c9e
    ADD ESP,0x4                         ; 004b3ca1
    CMP EAX,0xa                         ; 004b3ca4
    JNZ 0x004b3a20                      ; 004b3ca7
        ;   XREF to: 004b3a20 (CONDITIONAL_JUMP)  ; LAB_004b3a20
    CMP dword ptr [EBX + 0x1fa3c],0x0   ; 004b3cad
    JZ 0x004b3a20                       ; 004b3cb4
        ;   XREF to: 004b3a20 (CONDITIONAL_JUMP)  ; LAB_004b3a20
    MOV dword ptr [EBX + 0xbcac],0x1    ; 004b3cba
    JMP 0x004b3a20                      ; 004b3cc4
        ;   XREF to: 004b3a20 (UNCONDITIONAL_JUMP)  ; LAB_004b3a20
    XOR EAX,EAX                         ; 004b3cc9
        ;   Label: LAB_004b3cc9
    TEST ESI,ESI                        ; 004b3ccb
    JNZ 0x004b3ceb                      ; 004b3ccd
        ;   XREF to: 004b3ceb (CONDITIONAL_JUMP)  ; LAB_004b3ceb
    MOV EAX,[0x01cae0e8]                ; 004b3ccf | DAT_01cae0e8
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 004b3cd4
    PUSH EAX                            ; 004b3cdb
    MOV EDX,dword ptr [EAX + 0x14c]     ; 004b3cdc
    CALL dword ptr [EDX + 0xbc]         ; 004b3ce2
    ADD ESP,0x4                         ; 004b3ce8
    TEST EAX,EAX                        ; 004b3ceb
        ;   Label: LAB_004b3ceb
    JNZ 0x004b3cfb                      ; 004b3ced
        ;   XREF to: 004b3cfb (CONDITIONAL_JUMP)  ; LAB_004b3cfb
    LEA EAX,[EDI + 0x20]                ; 004b3cef
    PUSH EAX                            ; 004b3cf2
    CALL core_path.cpp_getPathMap_FUN_004f1e00 ; 004b3cf3
        ;   XREF to: 004f1e00 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_getPathMap_FUN_004f1e00()
    ADD ESP,0x4                         ; 004b3cf8
    MOV EDX,dword ptr [EBX + 0x6c]      ; 004b3cfb
        ;   Label: LAB_004b3cfb
    PUSH EDX                            ; 004b3cfe
    LEA EDX,[ESP + 0x28]                ; 004b3cff
    PUSH EDX                            ; 004b3d03
    LEA EDX,[EBX + 0x20]                ; 004b3d04
    PUSH EDX                            ; 004b3d07
    PUSH EAX                            ; 004b3d08
    CALL core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600 ; 004b3d09
        ;   XREF to: 004f1600 (UNCONDITIONAL_CALL)  ; undefined core_path.cpp_CPathMap_findPathWithRetry_FUN_004f1600()
    ADD ESP,0x10                        ; 004b3d0e
    TEST EAX,EAX                        ; 004b3d11
    JZ 0x004b3aee                       ; 004b3d13
        ;   XREF to: 004b3aee (CONDITIONAL_JUMP)  ; LAB_004b3aee
    FLD float ptr [ESP + 0x28]          ; 004b3d19
    FSUB float ptr [EBX + 0x34]         ; 004b3d1d
    SUB ESP,0x4                         ; 004b3d20
    FSTP float ptr [ESP]                ; 004b3d23
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040df00 ; 004b3d26
        ;   XREF to: 0040df00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040df00()
    MOV dword ptr [ESP + 0x98],EAX      ; 004b3d2b
    FLD float ptr [ESP + 0x98]          ; 004b3d32
    FMUL double ptr [0x005855d5]        ; 004b3d39 | DAT_005855d5
    ADD ESP,0x4                         ; 004b3d3f
    FMUL double ptr [0x005855dd]        ; 004b3d42 | DAT_005855dd
    FLD float ptr [ESP + 0x8c]          ; 004b3d48
    FCHS                                ; 004b3d4f
    FSTP float ptr [ESP + 0x84]         ; 004b3d51
    FST float ptr [EBX + 0xbcb8]        ; 004b3d58
    FCOMP float ptr [ESP + 0x84]        ; 004b3d5e
    FNSTSW AX                           ; 004b3d65
    SAHF                                ; 004b3d67
    JC 0x004b3dac                       ; 004b3d68
        ;   XREF to: 004b3dac (CONDITIONAL_JUMP)  ; LAB_004b3dac
    FLD float ptr [EBX + 0xbcb8]        ; 004b3d6a
        ;   Label: LAB_004b3d6a
    FCOMP float ptr [ESP + 0x8c]        ; 004b3d70
    FNSTSW AX                           ; 004b3d77
    SAHF                                ; 004b3d79
    JBE 0x004b3d89                      ; 004b3d7a
        ;   XREF to: 004b3d89 (CONDITIONAL_JUMP)  ; LAB_004b3d89
    MOV EAX,dword ptr [ESP + 0x8c]      ; 004b3d7c
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004b3d83
    FLD float ptr [ESP + 0x18]          ; 004b3d89
        ;   Label: LAB_004b3d89
    FCOMP double ptr [0x005855e5]       ; 004b3d8d | DAT_005855e5
    FNSTSW AX                           ; 004b3d93
    SAHF                                ; 004b3d95
    JNC 0x004b3dbb                      ; 004b3d96
        ;   XREF to: 004b3dbb (CONDITIONAL_JUMP)  ; LAB_004b3dbb
    CMP ESI,0x1                         ; 004b3d98
    JZ 0x004b3dbb                       ; 004b3d9b
        ;   XREF to: 004b3dbb (CONDITIONAL_JUMP)  ; LAB_004b3dbb
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004b3d9d
    JMP 0x004b3aee                      ; 004b3da7
        ;   XREF to: 004b3aee (UNCONDITIONAL_JUMP)  ; LAB_004b3aee
    MOV EAX,dword ptr [ESP + 0x84]      ; 004b3dac
        ;   Label: LAB_004b3dac
    MOV dword ptr [EBX + 0xbcb8],EAX    ; 004b3db3
    JMP 0x004b3d6a                      ; 004b3db9
        ;   XREF to: 004b3d6a (UNCONDITIONAL_JUMP)  ; LAB_004b3d6a
    MOV dword ptr [EBX + 0xbc9c],0x1    ; 004b3dbb
        ;   Label: LAB_004b3dbb
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004b3dc5
    JMP 0x004b3aee                      ; 004b3dcf
        ;   XREF to: 004b3aee (UNCONDITIONAL_JUMP)  ; LAB_004b3aee

