; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_skeleton_cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0(int param_1,float *param_2)
;
; Local Variables:
; undefined8       Stack[-0xd0]:8  local_d0
; undefined8       Stack[-0xc8]:8  local_c8
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined4       Stack[-0x9c]:4  local_9c
; undefined4       Stack[-0x98]:4  local_98
; undefined4       Stack[-0x94]:4  local_94
; undefined4       Stack[-0x90]:4  local_90
; undefined4       Stack[-0x8c]:4  local_8c
; undefined4       Stack[-0x88]:4  local_88
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_FUN_00427730 at 00427778
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051e9e0
        ;   Label: core_skeleton.cpp_CDeformableModelInstance_findClosestBone_FUN_0051e9e0
    PUSH ESI                            ; 0051e9e1
    PUSH EDI                            ; 0051e9e2
    PUSH EBP                            ; 0051e9e3
    MOV EBP,ESP                         ; 0051e9e4
    SUB ESP,0xbc                        ; 0051e9e6
    AND ESP,0xfffffff8                  ; 0051e9ec
    MOV EBX,dword ptr [EBP + 0x18]      ; 0051e9ef
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051e9f2
    PUSH EDX                            ; 0051e9f5
    XOR ESI,ESI                         ; 0051e9f6
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0 ; 0051e9f8
        ;   XREF to: 0051e0a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0()
    MOV ECX,0x7149f2ca                  ; 0051e9fd
    ADD ESP,0x4                         ; 0051ea02
    MOV EDI,dword ptr [EAX + 0x28558]   ; 0051ea05
    MOV dword ptr [ESP + 0x80],EAX      ; 0051ea0b
    MOV dword ptr [ESP + 0x90],ECX      ; 0051ea12
    MOV dword ptr [ESP + 0x84],ESI      ; 0051ea19
    TEST EDI,EDI                        ; 0051ea20
    JLE 0x0051ec32                      ; 0051ea22
        ;   XREF to: 0051ec32 (CONDITIONAL_JUMP)  ; LAB_0051ec32
    MOV EDX,dword ptr [EBP + 0x14]      ; 0051ea28
    ADD EDX,0xe80                       ; 0051ea2b
    MOV dword ptr [ESP + 0x94],EAX      ; 0051ea31
    MOV dword ptr [ESP + 0x88],EDX      ; 0051ea38
    MOV ECX,dword ptr [ESP + 0x94]      ; 0051ea3f
        ;   Label: LAB_0051ea3f
    MOV ECX,dword ptr [ECX + 0x2857c]   ; 0051ea46
    TEST ECX,ECX                        ; 0051ea4c
    JL 0x0051ec11                       ; 0051ea4e
        ;   XREF to: 0051ec11 (CONDITIONAL_JUMP)  ; LAB_0051ec11
    MOV EAX,dword ptr [EDX + 0xc]       ; 0051ea54
    MOV dword ptr [ESP + 0xb4],EAX      ; 0051ea57
    MOV EAX,dword ptr [EDX + 0x1c]      ; 0051ea5e
    MOV dword ptr [ESP + 0xb8],EAX      ; 0051ea61
    MOV EAX,dword ptr [EDX + 0x2c]      ; 0051ea68
    MOV dword ptr [ESP + 0xb0],EAX      ; 0051ea6b
    MOV EAX,dword ptr [ESP + 0xb4]      ; 0051ea72
    MOV dword ptr [ESP + 0x34],EAX      ; 0051ea79
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0051ea7d
    MOV dword ptr [ESP + 0x38],EAX      ; 0051ea84
    MOV EAX,dword ptr [ESP + 0xb0]      ; 0051ea88
    MOV dword ptr [ESP + 0x3c],EAX      ; 0051ea8f
    IMUL EAX,ECX,0x30                   ; 0051ea93
    ADD EAX,dword ptr [ESP + 0x88]      ; 0051ea96
    MOV EDI,dword ptr [EAX + 0xc]       ; 0051ea9d
    MOV dword ptr [ESP + 0x98],EDI      ; 0051eaa0
    MOV EDI,dword ptr [EAX + 0x1c]      ; 0051eaa7
    FLD float ptr [ESP + 0x98]          ; 0051eaaa
    MOV dword ptr [ESP + 0xa0],EDI      ; 0051eab1
    FSUB float ptr [ESP + 0xb4]         ; 0051eab8
    FLD float ptr [ESP + 0xa0]          ; 0051eabf
    FSUB float ptr [ESP + 0xb8]         ; 0051eac6
    MOV EAX,dword ptr [EAX + 0x2c]      ; 0051eacd
    FST float ptr [ESP + 0x20]          ; 0051ead0
    FMUL float ptr [ESP + 0x20]         ; 0051ead4
    FXCH                                ; 0051ead8
    FSTP float ptr [ESP + 0x1c]         ; 0051eada
    MOV dword ptr [ESP + 0xa4],EAX      ; 0051eade
    FLD float ptr [ESP + 0x1c]          ; 0051eae5
    FMUL ST0                            ; 0051eae9
    FLD float ptr [ESP + 0xa4]          ; 0051eaeb
    MOV EAX,dword ptr [ESP + 0x98]      ; 0051eaf2
    FSUB float ptr [ESP + 0xb0]         ; 0051eaf9
    FXCH                                ; 0051eb00
    FADDP ST2,ST0                       ; 0051eb02
    FST float ptr [ESP + 0x24]          ; 0051eb04
    FMUL float ptr [ESP + 0x24]         ; 0051eb08
    MOV dword ptr [ESP + 0x28],EAX      ; 0051eb0c
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0051eb10
    FADDP                               ; 0051eb17
    MOV dword ptr [ESP + 0x30],EAX      ; 0051eb19
    FSQRT                               ; 0051eb1d
    FLDZ                                ; 0051eb1f
    MOV dword ptr [ESP + 0x2c],EDI      ; 0051eb21
    FXCH                                ; 0051eb25
    FSTP double ptr [ESP + 0x8]         ; 0051eb27
    FCOMP double ptr [ESP + 0x8]        ; 0051eb2b
    FNSTSW AX                           ; 0051eb2f
    SAHF                                ; 0051eb31
    JNC 0x0051ebc8                      ; 0051eb32
        ;   XREF to: 0051ebc8 (CONDITIONAL_JUMP)  ; LAB_0051ebc8
    FLD double ptr [ESP + 0x8]          ; 0051eb38
    FLD1                                ; 0051eb3c
    FLD float ptr [ESP + 0x1c]          ; 0051eb3e
    FXCH ST2                            ; 0051eb42
    FSTP float ptr [ESP + 0x8c]         ; 0051eb44
    FDIV float ptr [ESP + 0x8c]         ; 0051eb4b
    FXCH                                ; 0051eb52
    FMUL ST1                            ; 0051eb54
    FLD float ptr [ESP + 0x20]          ; 0051eb56
    FMUL ST2                            ; 0051eb5a
    FLD float ptr [ESP + 0x24]          ; 0051eb5c
    FMULP ST3                           ; 0051eb60
    FLD float ptr [ESP + 0xb8]          ; 0051eb62
    FXCH                                ; 0051eb69
    FSTP float ptr [ESP + 0x20]         ; 0051eb6b
    FMUL float ptr [ESP + 0x20]         ; 0051eb6f
    FXCH                                ; 0051eb73
    FSTP float ptr [ESP + 0x1c]         ; 0051eb75
    FXCH                                ; 0051eb79
    FSTP float ptr [ESP + 0x24]         ; 0051eb7b
    FLD float ptr [EBX + 0x4]           ; 0051eb7f
    FMUL float ptr [ESP + 0x20]         ; 0051eb82
    FLD float ptr [ESP + 0xb4]          ; 0051eb86
    FMUL float ptr [ESP + 0x1c]         ; 0051eb8d
    FLD float ptr [EBX]                 ; 0051eb91
    FXCH                                ; 0051eb93
    FADDP ST3,ST0                       ; 0051eb95
    FMUL float ptr [ESP + 0x1c]         ; 0051eb97
    FLD float ptr [ESP + 0xb0]          ; 0051eb9b
    FXCH                                ; 0051eba2
    FADDP ST2,ST0                       ; 0051eba4
    FMUL float ptr [ESP + 0x24]         ; 0051eba6
    FLD float ptr [EBX + 0x8]           ; 0051ebaa
    FMUL float ptr [ESP + 0x24]         ; 0051ebad
    FXCH                                ; 0051ebb1
    FADDP ST3,ST0                       ; 0051ebb3
    FADDP                               ; 0051ebb5
    FSUBRP                              ; 0051ebb7
    FLDZ                                ; 0051ebb9
    FXCH                                ; 0051ebbb
    FSTP double ptr [ESP]               ; 0051ebbd
    FCOMP double ptr [ESP]              ; 0051ebc0
    FNSTSW AX                           ; 0051ebc3
    SAHF                                ; 0051ebc5
    JC 0x0051ec40                       ; 0051ebc6
        ;   XREF to: 0051ec40 (CONDITIONAL_JUMP)  ; LAB_0051ec40
    FLD float ptr [EBX]                 ; 0051ebc8
        ;   Label: LAB_0051ebc8
    FSUB float ptr [ESP + 0xb4]         ; 0051ebca
    FMUL ST0                            ; 0051ebd1
    FLD float ptr [EBX + 0x4]           ; 0051ebd3
    FSUB float ptr [ESP + 0xb8]         ; 0051ebd6
    FMUL ST0                            ; 0051ebdd
    FLD float ptr [EBX + 0x8]           ; 0051ebdf
    FXCH                                ; 0051ebe2
    FADDP ST2,ST0                       ; 0051ebe4
    FSUB float ptr [ESP + 0xb0]         ; 0051ebe6
    FMUL ST0                            ; 0051ebed
        ;   Label: LAB_0051ebed
    FADDP                               ; 0051ebef
    FSQRT                               ; 0051ebf1
    FSTP float ptr [ESP + 0xac]         ; 0051ebf3
    FLD float ptr [ESP + 0xac]          ; 0051ebfa
    FCOMP float ptr [ESP + 0x90]        ; 0051ec01
    FNSTSW AX                           ; 0051ec08
    SAHF                                ; 0051ec0a
    JC 0x0051ed09                       ; 0051ec0b
        ;   XREF to: 0051ed09 (CONDITIONAL_JUMP)  ; LAB_0051ed09
    ADD dword ptr [ESP + 0x94],0x24     ; 0051ec11
        ;   Label: LAB_0051ec11
    MOV EAX,dword ptr [ESP + 0x80]      ; 0051ec19
    INC ESI                             ; 0051ec20
    MOV ECX,dword ptr [EAX + 0x28558]   ; 0051ec21
    ADD EDX,0x30                        ; 0051ec27
    CMP ESI,ECX                         ; 0051ec2a
    JL 0x0051ea3f                       ; 0051ec2c
        ;   XREF to: 0051ea3f (CONDITIONAL_JUMP)  ; LAB_0051ea3f
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051ec32
        ;   Label: LAB_0051ec32
    MOV ESP,EBP                         ; 0051ec39
    POP EBP                             ; 0051ec3b
    POP EDI                             ; 0051ec3c
    POP ESI                             ; 0051ec3d
    POP EBX                             ; 0051ec3e
    RET                                 ; 0051ec3f
    FLD double ptr [ESP]                ; 0051ec40
        ;   Label: LAB_0051ec40
    FCOMP double ptr [ESP + 0x8]        ; 0051ec43
    FNSTSW AX                           ; 0051ec47
    SAHF                                ; 0051ec49
    JC 0x0051ec76                       ; 0051ec4a
        ;   XREF to: 0051ec76 (CONDITIONAL_JUMP)  ; LAB_0051ec76
    FLD float ptr [EBX]                 ; 0051ec4c
    FSUB float ptr [ESP + 0x98]         ; 0051ec4e
    FMUL ST0                            ; 0051ec55
    FLD float ptr [EBX + 0x4]           ; 0051ec57
    FSUB float ptr [ESP + 0xa0]         ; 0051ec5a
    FMUL ST0                            ; 0051ec61
    FLD float ptr [EBX + 0x8]           ; 0051ec63
    FXCH                                ; 0051ec66
    FADDP ST2,ST0                       ; 0051ec68
    FSUB float ptr [ESP + 0xa4]         ; 0051ec6a
    JMP 0x0051ebed                      ; 0051ec71
        ;   XREF to: 0051ebed (UNCONDITIONAL_JUMP)  ; LAB_0051ebed
    FLD float ptr [ESP + 0x1c]          ; 0051ec76
        ;   Label: LAB_0051ec76
    FLD double ptr [ESP]                ; 0051ec7a
    FSTP float ptr [ESP + 0xa8]         ; 0051ec7d
    FMUL float ptr [ESP + 0xa8]         ; 0051ec84
    FLD float ptr [ESP + 0x20]          ; 0051ec8b
    FMUL float ptr [ESP + 0xa8]         ; 0051ec8f
    FLD float ptr [ESP + 0x24]          ; 0051ec96
    FMUL float ptr [ESP + 0xa8]         ; 0051ec9a
    FLD float ptr [ESP + 0xb4]          ; 0051eca1
    FLD float ptr [ESP + 0xb8]          ; 0051eca8
    FLD float ptr [ESP + 0xb0]          ; 0051ecaf
    FXCH ST5                            ; 0051ecb6
    FSTP float ptr [ESP + 0x40]         ; 0051ecb8
    FXCH ST3                            ; 0051ecbc
    FSTP float ptr [ESP + 0x44]         ; 0051ecbe
    FXCH                                ; 0051ecc2
    FSTP float ptr [ESP + 0x48]         ; 0051ecc4
    FADD float ptr [ESP + 0x40]         ; 0051ecc8
    FXCH                                ; 0051eccc
    FADD float ptr [ESP + 0x44]         ; 0051ecce
    FXCH ST2                            ; 0051ecd2
    FADD float ptr [ESP + 0x48]         ; 0051ecd4
    FXCH                                ; 0051ecd8
    FSTP float ptr [ESP + 0x10]         ; 0051ecda
    FXCH                                ; 0051ecde
    FSTP float ptr [ESP + 0x14]         ; 0051ece0
    FSTP float ptr [ESP + 0x18]         ; 0051ece4
    FLD float ptr [EBX]                 ; 0051ece8
    FSUB float ptr [ESP + 0x10]         ; 0051ecea
    FMUL ST0                            ; 0051ecee
    FLD float ptr [EBX + 0x4]           ; 0051ecf0
    FSUB float ptr [ESP + 0x14]         ; 0051ecf3
    FMUL ST0                            ; 0051ecf7
    FLD float ptr [EBX + 0x8]           ; 0051ecf9
    FXCH                                ; 0051ecfc
    FADDP ST2,ST0                       ; 0051ecfe
    FSUB float ptr [ESP + 0x18]         ; 0051ed00
    JMP 0x0051ebed                      ; 0051ed04
        ;   XREF to: 0051ebed (UNCONDITIONAL_JUMP)  ; LAB_0051ebed
    MOV EAX,dword ptr [ESP + 0xac]      ; 0051ed09
        ;   Label: LAB_0051ed09
    MOV dword ptr [ESP + 0x84],ECX      ; 0051ed10
    MOV dword ptr [ESP + 0x90],EAX      ; 0051ed17
    JMP 0x0051ec11                      ; 0051ed1e
        ;   XREF to: 0051ec11 (UNCONDITIONAL_JUMP)  ; LAB_0051ec11

