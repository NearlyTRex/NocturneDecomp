; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004998c0(int param_1,float param_2,int param_3)
;
; Local Variables:
; undefined        Stack[-0x50]:1  local_50
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
;
; XREF[1]:
;   FUN_00495a20 at 00496069
;
; Referenced Globals:
;   undefined4 DAT_0059dcbc
;   undefined4 DAT_005be368
;   undefined4 DAT_01c7139c
;   undefined4 DAT_01c713a0
;   undefined4 DAT_01c713d8
;   undefined4 DAT_01c713dc
;   undefined4 DAT_01e57284
;
; Called Functions:
;   core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0
;   core_setcolid.cpp_CDemonSet_ignore_FUN_00511780
;   core_setcolid.cpp_CDemonSet_init_FUN_00511750
;   core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
;   FUN_00499b00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004998c0
        ;   Label: FUN_004998c0
    PUSH ESI                            ; 004998c1
    PUSH EDI                            ; 004998c2
    PUSH EBP                            ; 004998c3
    SUB ESP,0x58                        ; 004998c4
    MOV EBX,dword ptr [ESP + 0x6c]      ; 004998c7
    FLD float ptr [ESP + 0x70]          ; 004998cb
    FLD float ptr [EBX + 0x1fa58]       ; 004998cf
    FLD float ptr [EBX + 0x1fa5c]       ; 004998d5
    FXCH ST2                            ; 004998db
    FDIV float ptr [0x0059dcbc]         ; 004998dd | DAT_0059dcbc
    FXCH                                ; 004998e3
    FSUB ST0,ST1                        ; 004998e5
    FXCH ST2                            ; 004998e7
    FSUBRP                              ; 004998e9
    FXCH                                ; 004998eb
    FSTP float ptr [EBX + 0x1fa58]      ; 004998ed
    FSTP float ptr [EBX + 0x1fa5c]      ; 004998f3
    FLD float ptr [EBX + 0x1fa58]       ; 004998f9
    FLDZ                                ; 004998ff
    FCOMPP                              ; 00499901
    FNSTSW AX                           ; 00499903
    SAHF                                ; 00499905
    JA 0x00499a84                       ; 00499906
        ;   XREF to: 00499a84 (CONDITIONAL_JUMP)  ; LAB_00499a84
    FLD float ptr [EBX + 0x1fa5c]       ; 0049990c
        ;   Label: LAB_0049990c
    FLDZ                                ; 00499912
    FCOMPP                              ; 00499914
    FNSTSW AX                           ; 00499916
    SAHF                                ; 00499918
    JBE 0x00499925                      ; 00499919
        ;   XREF to: 00499925 (CONDITIONAL_JUMP)  ; LAB_00499925
    MOV dword ptr [EBX + 0x1fa5c],0x0   ; 0049991b
    MOV EDX,dword ptr [ESP + 0x74]      ; 00499925
        ;   Label: LAB_00499925
    TEST EDX,EDX                        ; 00499929
    JZ 0x00499aaa                       ; 0049992b
        ;   XREF to: 00499aaa (CONDITIONAL_JUMP)  ; LAB_00499aaa
    PUSH EBX                            ; 00499931
    MOV EBP,dword ptr [0x005be368]      ; 00499932 | DAT_005be368
    PUSH EBP                            ; 00499938 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00499939
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    MOV EAX,dword ptr [EBX + 0x24ac]    ; 0049993e
    ADD ESP,0x8                         ; 00499944
    TEST EAX,EAX                        ; 00499947
    JZ 0x0049995b                       ; 00499949
        ;   XREF to: 0049995b (CONDITIONAL_JUMP)  ; LAB_0049995b
    PUSH EAX                            ; 0049994b
    MOV ECX,dword ptr [0x005be368]      ; 0049994c | DAT_005be368
    PUSH ECX                            ; 00499952 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 00499953
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00499958
    MOV ESI,dword ptr [EBX + 0x24f0]    ; 0049995b
        ;   Label: LAB_0049995b
    TEST ESI,ESI                        ; 00499961
    JZ 0x00499975                       ; 00499963
        ;   XREF to: 00499975 (CONDITIONAL_JUMP)  ; LAB_00499975
    PUSH ESI                            ; 00499965
    MOV EBP,dword ptr [0x005be368]      ; 00499966 | DAT_005be368
    PUSH EBP                            ; 0049996c | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00511780 ; 0049996d
        ;   XREF to: 00511780 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_ignore_FUN_00511780()
    ADD ESP,0x8                         ; 00499972
    MOV EAX,[0x005be368]                ; 00499975 | DAT_005be368
        ;   Label: LAB_00499975
    PUSH EAX                            ; 0049997a | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0 ; 0049997b
        ;   XREF to: 005117e0 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_disableIgnore_FUN_005117e0()
    ADD ESP,0x4                         ; 00499980
    XOR EDX,EDX                         ; 00499983
    MOV dword ptr [ESP + 0x44],EDX      ; 00499985
    MOV dword ptr [ESP + 0x40],EDX      ; 00499989
    MOV dword ptr [ESP + 0x3c],EDX      ; 0049998d
    MOV EDI,dword ptr [EBX + 0x24ac]    ; 00499991
    TEST EDI,EDI                        ; 00499997
    JZ 0x00499a93                       ; 00499999
        ;   XREF to: 00499a93 (CONDITIONAL_JUMP)  ; LAB_00499a93
    LEA ESI,[ESP + 0x18]                ; 0049999f
    PUSH ESI                            ; 004999a3
    MOV EDX,dword ptr [EDI + 0x14c]     ; 004999a4
    PUSH EDI                            ; 004999aa
    CALL dword ptr [EDX + 0x14]         ; 004999ab
    LEA EDX,[EAX + 0xc]                 ; 004999ae
    FLD float ptr [EDX]                 ; 004999b1
    FSUB float ptr [EAX]                ; 004999b3
    ADD ESP,0x8                         ; 004999b5
    FSTP float ptr [ESP + 0x30]         ; 004999b8
    FLD float ptr [EDX + 0x4]           ; 004999bc
    FSUB float ptr [EAX + 0x4]          ; 004999bf
    FSTP float ptr [ESP + 0x34]         ; 004999c2
    FLD float ptr [EDX + 0x8]           ; 004999c6
    FSUB float ptr [EAX + 0x8]          ; 004999c9
    FST float ptr [ESP + 0x38]          ; 004999cc
    FCHS                                ; 004999d0
    FSTP float ptr [ESP + 0x3c]         ; 004999d2
    LEA EAX,[ESP + 0x3c]                ; 004999d6
        ;   Label: LAB_004999d6
    PUSH EAX                            ; 004999da
    MOV EAX,[0x01c7139c]                ; 004999db | DAT_01c7139c
    PUSH EAX                            ; 004999e0
    MOV EDX,dword ptr [0x01c713d8]      ; 004999e1 | DAT_01c713d8
    PUSH EDX                            ; 004999e7
    LEA EAX,[EBX + 0x1fa58]             ; 004999e8
    PUSH EAX                            ; 004999ee
    PUSH dword ptr [ESP + 0x80]         ; 004999ef
    PUSH EBX                            ; 004999f6
    CALL FUN_00499b00                   ; 004999f7
        ;   XREF to: 00499b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00499b00()
    MOV ECX,dword ptr [EBX + 0x24f0]    ; 004999fc
    ADD ESP,0x18                        ; 00499a02
    TEST ECX,ECX                        ; 00499a05
    JZ 0x00499aa0                       ; 00499a07
        ;   XREF to: 00499aa0 (CONDITIONAL_JUMP)  ; LAB_00499aa0
    MOV ESI,ESP                         ; 00499a0d
    PUSH ESI                            ; 00499a0f
    MOV EDX,dword ptr [ECX + 0x14c]     ; 00499a10
    PUSH ECX                            ; 00499a16
    CALL dword ptr [EDX + 0x14]         ; 00499a17
    LEA EDX,[EAX + 0xc]                 ; 00499a1a
    FLD float ptr [EDX]                 ; 00499a1d
    FSUB float ptr [EAX]                ; 00499a1f
    ADD ESP,0x8                         ; 00499a21
    FSTP float ptr [ESP + 0x48]         ; 00499a24
    FLD float ptr [EDX + 0x4]           ; 00499a28
    FSUB float ptr [EAX + 0x4]          ; 00499a2b
    FSTP float ptr [ESP + 0x4c]         ; 00499a2e
    FLD float ptr [EDX + 0x8]           ; 00499a32
    FSUB float ptr [EAX + 0x8]          ; 00499a35
    FSTP float ptr [ESP + 0x50]         ; 00499a38
    MOV EAX,dword ptr [ESP + 0x50]      ; 00499a3c
    MOV dword ptr [ESP + 0x3c],EAX      ; 00499a40
    LEA EAX,[ESP + 0x3c]                ; 00499a44
        ;   Label: LAB_00499a44
    PUSH EAX                            ; 00499a48
    MOV EDI,dword ptr [0x01c713a0]      ; 00499a49 | DAT_01c713a0
    PUSH EDI                            ; 00499a4f
    MOV EBP,dword ptr [0x01c713dc]      ; 00499a50 | DAT_01c713dc
    PUSH EBP                            ; 00499a56
    LEA EAX,[EBX + 0x1fa5c]             ; 00499a57
    PUSH EAX                            ; 00499a5d
    PUSH dword ptr [ESP + 0x80]         ; 00499a5e
    PUSH EBX                            ; 00499a65
    CALL FUN_00499b00                   ; 00499a66
        ;   XREF to: 00499b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00499b00()
    ADD ESP,0x18                        ; 00499a6b
    MOV EAX,[0x005be368]                ; 00499a6e | DAT_005be368
    PUSH EAX                            ; 00499a73 | DAT_01e57284
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00511750 ; 00499a74
        ;   XREF to: 00511750 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_CDemonSet_init_FUN_00511750()
    ADD ESP,0x4                         ; 00499a79
    ADD ESP,0x58                        ; 00499a7c
    POP EBP                             ; 00499a7f
    POP EDI                             ; 00499a80
    POP ESI                             ; 00499a81
    POP EBX                             ; 00499a82
    RET                                 ; 00499a83
    MOV dword ptr [EBX + 0x1fa58],0x0   ; 00499a84
        ;   Label: LAB_00499a84
    JMP 0x0049990c                      ; 00499a8e
        ;   XREF to: 0049990c (UNCONDITIONAL_JUMP)  ; LAB_0049990c
    MOV dword ptr [ESP + 0x3c],0xbf000000 ; 00499a93
        ;   Label: LAB_00499a93
    JMP 0x004999d6                      ; 00499a9b
        ;   XREF to: 004999d6 (UNCONDITIONAL_JUMP)  ; LAB_004999d6
    MOV dword ptr [ESP + 0x3c],0x3f000000 ; 00499aa0
        ;   Label: LAB_00499aa0
    JMP 0x00499a44                      ; 00499aa8
        ;   XREF to: 00499a44 (UNCONDITIONAL_JUMP)  ; LAB_00499a44
    PUSH 0x51b650                       ; 00499aaa
        ;   Label: LAB_00499aaa
    MOV ECX,dword ptr [0x01c7139c]      ; 00499aaf | DAT_01c7139c
    PUSH ECX                            ; 00499ab5
    PUSH dword ptr [EBX + 0x1fa58]      ; 00499ab6
    PUSH 0x0                            ; 00499abc
    PUSH EDX                            ; 00499abe
    LEA ESI,[EBX + 0x150]               ; 00499abf
    PUSH ESI                            ; 00499ac5
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00499ac6
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    ADD ESP,0x18                        ; 00499acb
    PUSH 0x51b650                       ; 00499ace
    MOV EDI,dword ptr [0x01c713a0]      ; 00499ad3 | DAT_01c713a0
    PUSH EDI                            ; 00499ad9
    PUSH dword ptr [EBX + 0x1fa5c]      ; 00499ada
    PUSH 0x0                            ; 00499ae0
    PUSH 0x0                            ; 00499ae2
    PUSH ESI                            ; 00499ae4
    CALL core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0 ; 00499ae5
        ;   XREF to: 0051c3d0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0()
    ADD ESP,0x18                        ; 00499aea
    ADD ESP,0x58                        ; 00499aed
    POP EBP                             ; 00499af0
    POP EDI                             ; 00499af1
    POP ESI                             ; 00499af2
    POP EBX                             ; 00499af3
    RET                                 ; 00499af4

