; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_shotgun_cpp_CShotgun_onFired_FUN_00516620(int param_1)
;
; Local Variables:
; undefined        Stack[-0x64]:1  local_64
; undefined        Stack[-0x3c]:1  local_3c
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0xc]:4  local_c
;
; Referenced Globals:
;   string s_shell.kfm_0059108d
;   string s_shotgun-cock.wav_00591097
;   undefined4 DAT_005b80f0
;
; Called Functions:
;   core_actor.cpp_CDemonActor_transformVector_FUN_0040a200
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
;   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40
;   core_dmodel.cpp_loadModel_FUN_004543b0
;   core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516620
        ;   Label: core_shotgun.cpp_CShotgun_onFired_FUN_00516620
    PUSH EBP                            ; 00516621
    SUB ESP,0x5c                        ; 00516622
    MOV EBX,dword ptr [ESP + 0x68]      ; 00516625
    CMP dword ptr [EBX + 0x560],0x0     ; 00516629
    JG 0x00516638                       ; 00516630
        ;   XREF to: 00516638 (CONDITIONAL_JUMP)  ; LAB_00516638
    ADD ESP,0x5c                        ; 00516632
    POP EBP                             ; 00516635
    POP EBX                             ; 00516636
    RET                                 ; 00516637
    PUSH EDI                            ; 00516638
        ;   Label: LAB_00516638
    PUSH ESI                            ; 00516639
    PUSH 0x3ec90fdb                     ; 0051663a
    MOV ECX,0x40a00000                  ; 0051663f
    MOV ESI,0x40c00000                  ; 00516644
    MOV EDI,0xc0c00000                  ; 00516649
    PUSH 0xbec90fdb                     ; 0051664e
    MOV dword ptr [ESP + 0x44],ECX      ; 00516653
    MOV dword ptr [ESP + 0x48],ESI      ; 00516657
    MOV dword ptr [ESP + 0x4c],EDI      ; 0051665b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0051665f
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 00516664
    FLD float ptr [ESP + 0x68]          ; 00516668
    ADD ESP,0x8                         ; 0051666c
    PUSH 0x3ec90fdb                     ; 0051666f
    PUSH 0xbec90fdb                     ; 00516674
    FSTP float ptr [ESP + 0x50]         ; 00516679
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 0051667d
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [ESP + 0x68],EAX      ; 00516682
    FLD float ptr [ESP + 0x68]          ; 00516686
    ADD ESP,0x8                         ; 0051668a
    LEA EAX,[ESP + 0x48]                ; 0051668d
    PUSH EAX                            ; 00516691
    LEA EAX,[ESP + 0xc]                 ; 00516692
    XOR EBP,EBP                         ; 00516696
    PUSH EAX                            ; 00516698
    FSTP float ptr [ESP + 0x54]         ; 00516699
    MOV dword ptr [ESP + 0x58],EBP      ; 0051669d
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0 ; 005166a1
        ;   XREF to: 0044d7a0 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0()
    ADD ESP,0x8                         ; 005166a6
    LEA EAX,[ESP + 0x3c]                ; 005166a9
    PUSH EAX                            ; 005166ad
    LEA EAX,[ESP + 0x58]                ; 005166ae
    PUSH EAX                            ; 005166b2
    LEA EAX,[ESP + 0x10]                ; 005166b3
    PUSH EAX                            ; 005166b7
    CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40 ; 005166b8
        ;   XREF to: 0044da40 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_0044da40()
    ADD ESP,0xc                         ; 005166bd
    PUSH EAX                            ; 005166c0
    LEA EAX,[ESP + 0x34]                ; 005166c1
    PUSH EAX                            ; 005166c5
    PUSH EBX                            ; 005166c6
    CALL core_actor.cpp_CDemonActor_transformVector_FUN_0040a200 ; 005166c7
        ;   XREF to: 0040a200 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_transformVector_FUN_0040a200()
    MOV EDX,EAX                         ; 005166cc
    LEA EAX,[ESP + 0x48]                ; 005166ce
    ADD ESP,0xc                         ; 005166d2
    CMP EAX,EDX                         ; 005166d5
    JZ 0x005166ed                       ; 005166d7
        ;   XREF to: 005166ed (CONDITIONAL_JUMP)  ; LAB_005166ed
    MOV EAX,dword ptr [EDX]             ; 005166d9
    MOV dword ptr [ESP + 0x3c],EAX      ; 005166db
    MOV EAX,dword ptr [EDX + 0x4]       ; 005166df
    MOV dword ptr [ESP + 0x40],EAX      ; 005166e2
    MOV EAX,dword ptr [EDX + 0x8]       ; 005166e6
    MOV dword ptr [ESP + 0x44],EAX      ; 005166e9
    PUSH 0x59108d                       ; 005166ed | = "shell.kfm"
        ;   Label: LAB_005166ed
    CALL core_dmodel.cpp_loadModel_FUN_004543b0 ; 005166f2
        ;   XREF to: 004543b0 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_loadModel_FUN_004543b0()
    ADD ESP,0x4                         ; 005166f7
    PUSH EAX                            ; 005166fa
    LEA EAX,[ESP + 0x40]                ; 005166fb
    PUSH EAX                            ; 005166ff
    LEA EAX,[EBX + 0x30]                ; 00516700
    PUSH EAX                            ; 00516703
    LEA EAX,[EBX + 0x20]                ; 00516704
    PUSH EAX                            ; 00516707
    MOV EAX,[0x005b80f0]                ; 00516708 | DAT_005b80f0
    PUSH EAX                            ; 0051670d
    CALL core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0 ; 0051670e
        ;   XREF to: 0048c6b0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_CFireEffect_createShell_FUN_0048c6b0()
    ADD ESP,0x14                        ; 00516713
    PUSH 0x591097                       ; 00516716 | = "shotgun-cock.wav"
    MOV EAX,dword ptr [EBX + 0x14c]     ; 0051671b
    PUSH EBX                            ; 00516721
    CALL dword ptr [EAX + 0x24]         ; 00516722
    ADD ESP,0x8                         ; 00516725
    POP ESI                             ; 00516728
    POP EDI                             ; 00516729
    ADD ESP,0x5c                        ; 0051672a
    POP EBP                             ; 0051672d
    POP EBX                             ; 0051672e
    RET                                 ; 0051672f

