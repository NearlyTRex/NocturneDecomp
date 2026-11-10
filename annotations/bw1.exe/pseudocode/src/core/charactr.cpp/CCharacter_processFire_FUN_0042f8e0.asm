; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_0042f8e0(CCharacter *this_ptr,float delta_time)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined        Stack[-0x88]:1  local_88
; undefined        Stack[-0x7c]:1  local_7c
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined        Stack[-0x64]:1  local_64
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 at 0042e1d3
;
; Referenced Globals:
;   undefined4 s_character_onfire_fallapa_005d59be+1
;   TerminatedCString s_character_onfire_loop_wa_005d59de
;   undefined4 DAT_005d59ff
;   undefined4 DAT_005d5a07
;   undefined4 DAT_005d5a0f
;   undefined4 DAT_005d5a17
;   undefined4 DAT_005d5a1f
;   undefined4 DAT_005fd60c
;   undefined4 DAT_005fd610
;   undefined4 DAT_007c6384
;   undefined4 DAT_007c6388
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_charactr.cpp_CCharacter_dismember_FUN_00430d90
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
;   core_xform.cpp_FUN_005b5080
;   sound_sndmain.cpp_FUN_005728e0
;   sound_sndmain.cpp_FUN_00573950
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_popSfxOptions_FUN_00572b40
;   sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f8e0
        ;   Label: core_charactr.cpp_CCharacter_processFire_FUN_0042f8e0
    PUSH ESI                            ; 0042f8e1
    PUSH EDI                            ; 0042f8e2
    PUSH EBP                            ; 0042f8e3
    MOV EBP,ESP                         ; 0042f8e4
    SUB ESP,0x74                        ; 0042f8e6
    AND ESP,0xfffffff8                  ; 0042f8e9
    MOV EBX,dword ptr [EBP + 0x14]      ; 0042f8ec
    LEA EDI,[EBX + 0x158]               ; 0042f8ef
    PUSH EDI                            ; 0042f8f5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0042f8f6
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f8fb
    MOV EDX,dword ptr [EBX + 0xb9e8]    ; 0042f8fe
    MOV dword ptr [ESP + 0x70],EAX      ; 0042f904
    TEST EDX,EDX                        ; 0042f908
    JNZ 0x0042fc54                      ; 0042f90a
        ;   XREF to: 0042fc54 (CONDITIONAL_JUMP)  ; LAB_0042fc54
    CMP dword ptr [EBX + 0x3120],0x0    ; 0042f910
    JLE 0x0042fa95                      ; 0042f917
        ;   XREF to: 0042fa95 (CONDITIONAL_JUMP)  ; LAB_0042fa95
    PUSH EDI                            ; 0042f91d
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30 ; 0042f91e
        ;   XREF to: 00569f30 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f923
    PUSH EDI                            ; 0042f926
    MOV ESI,EAX                         ; 0042f927
    MOV dword ptr [ESP + 0x4c],EAX      ; 0042f929
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042f92d
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0042f932
    MOV EDI,EAX                         ; 0042f935
    MOV EAX,dword ptr [ESI + 0x1de78]   ; 0042f937
    XOR EDX,EDX                         ; 0042f93d
    TEST EAX,EAX                        ; 0042f93f
    JLE 0x0042f960                      ; 0042f941
        ;   XREF to: 0042f960 (CONDITIONAL_JUMP)  ; LAB_0042f960
    MOV ESI,dword ptr [ESP + 0x48]      ; 0042f943
    XOR EAX,EAX                         ; 0042f947
    XOR ECX,ECX                         ; 0042f949
        ;   Label: LAB_0042f949
    MOV dword ptr [EAX + 0x7c6384],ECX  ; 0042f94b | DAT_007c6384 | DAT_007c6388
    INC EDX                             ; 0042f951
    MOV ECX,dword ptr [ESI + 0x1de78]   ; 0042f952
    ADD EAX,0x4                         ; 0042f958
    CMP EDX,ECX                         ; 0042f95b
    JL 0x0042f949                       ; 0042f95d
        ;   XREF to: 0042f949 (CONDITIONAL_JUMP)  ; LAB_0042f949
    NOP                                 ; 0042f95f
    MOV ESI,dword ptr [EBX + 0x3120]    ; 0042f960
        ;   Label: LAB_0042f960
    XOR EAX,EAX                         ; 0042f966
    TEST ESI,ESI                        ; 0042f968
    JLE 0x0042f9ae                      ; 0042f96a
        ;   XREF to: 0042f9ae (CONDITIONAL_JUMP)  ; LAB_0042f9ae
    FLD float ptr [0x005fd610]          ; 0042f96c | DAT_005fd610
    FLD double ptr [0x005d59ff]         ; 0042f972 | DAT_005d59ff
    MOV ESI,EBX                         ; 0042f978
    FLD float ptr [ESI + 0x3140]        ; 0042f97a
        ;   Label: LAB_0042f97a
    MOV EDX,dword ptr [ESI + 0x3130]    ; 0042f980
    FMUL ST1                            ; 0042f986
    FLD float ptr [EDX*0x4 + 0x7c6384]  ; 0042f988 | DAT_007c6384
    FLD ST3                             ; 0042f98f
    FDIVP ST2,ST0                       ; 0042f991
    FADDP                               ; 0042f993
    INC EAX                             ; 0042f995
    FSTP float ptr [EDX*0x4 + 0x7c6384] ; 0042f996 | DAT_007c6384
    MOV EDX,dword ptr [EBX + 0x3120]    ; 0042f99d
    ADD ESI,0x18                        ; 0042f9a3
    CMP EAX,EDX                         ; 0042f9a6
    JL 0x0042f97a                       ; 0042f9a8
        ;   XREF to: 0042f97a (CONDITIONAL_JUMP)  ; LAB_0042f97a
    FSTP ST0                            ; 0042f9aa
    FSTP ST0                            ; 0042f9ac
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042f9ae
        ;   Label: LAB_0042f9ae
    XOR ESI,ESI                         ; 0042f9b2
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0042f9b4
    MOV dword ptr [ESP + 0x50],ESI      ; 0042f9ba
    TEST EDX,EDX                        ; 0042f9be
    JLE 0x0042fa3e                      ; 0042f9c0
        ;   XREF to: 0042fa3e (CONDITIONAL_JUMP)  ; LAB_0042fa3e
    LEA EAX,[EBX + 0x158]               ; 0042f9c6
    MOV dword ptr [ESP + 0x4c],EDI      ; 0042f9cc
    MOV dword ptr [ESP + 0x40],EAX      ; 0042f9d0
    XOR EDI,EDI                         ; 0042f9d4
    FLD float ptr [EDI + 0x7c6384]      ; 0042f9d6 | DAT_007c6384 | DAT_007c6388
        ;   Label: LAB_0042f9d6
    FCOMP double ptr [0x005d59ff]       ; 0042f9dc | DAT_005d59ff
    FNSTSW AX                           ; 0042f9e2
    SAHF                                ; 0042f9e4
    JC 0x0042f9e8                       ; 0042f9e5
        ;   XREF to: 0042f9e8 (CONDITIONAL_JUMP)  ; LAB_0042f9e8
    INC ESI                             ; 0042f9e7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042f9e8
        ;   Label: LAB_0042f9e8
    CMP dword ptr [EAX + 0x33cc],-0x1   ; 0042f9ec
    JNZ 0x0042f9f6                      ; 0042f9f3
        ;   XREF to: 0042f9f6 (CONDITIONAL_JUMP)  ; LAB_0042f9f6
    INC ESI                             ; 0042f9f5
    MOV ECX,dword ptr [ESP + 0x40]      ; 0042f9f6
        ;   Label: LAB_0042f9f6
    PUSH ECX                            ; 0042f9fa
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0 ; 0042f9fb
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x323c] ; 0042fa00
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0042fa07
    ADD ESP,0x4                         ; 0042fa0e
    TEST EDX,EDX                        ; 0042fa11
    JZ 0x0042fca8                       ; 0042fa13
        ;   XREF to: 0042fca8 (CONDITIONAL_JUMP)  ; LAB_0042fca8
    MOV ECX,dword ptr [ESP + 0x4c]      ; 0042fa19
        ;   Label: LAB_0042fa19
    MOV EAX,dword ptr [ESP + 0x50]      ; 0042fa1d
    MOV EDX,dword ptr [ESP + 0x48]      ; 0042fa21
    ADD EDI,0x4                         ; 0042fa25
    ADD ECX,0x4                         ; 0042fa28
    INC EAX                             ; 0042fa2b
    MOV dword ptr [ESP + 0x4c],ECX      ; 0042fa2c
    MOV ECX,dword ptr [EDX + 0x1de78]   ; 0042fa30
    MOV dword ptr [ESP + 0x50],EAX      ; 0042fa36
    CMP EAX,ECX                         ; 0042fa3a
    JL 0x0042f9d6                       ; 0042fa3c
        ;   XREF to: 0042f9d6 (CONDITIONAL_JUMP)  ; LAB_0042f9d6
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042fa3e
        ;   Label: LAB_0042fa3e
    CMP ESI,dword ptr [EAX + 0x1de78]   ; 0042fa42
    JNZ 0x0042fa5e                      ; 0042fa48
        ;   XREF to: 0042fa5e (CONDITIONAL_JUMP)  ; LAB_0042fa5e
    MOV dword ptr [EBX + 0xb9ec],0x3f800000 ; 0042fa4a
    MOV dword ptr [EBX + 0xb9e8],0x1    ; 0042fa54
    FILD dword ptr [EBX + 0x3120]       ; 0042fa5e
        ;   Label: LAB_0042fa5e
    FMUL double ptr [0x005d5a07]        ; 0042fa64 | DAT_005d5a07
    FMUL double ptr [0x005d5a0f]        ; 0042fa6a | DAT_005d5a0f
    FADD double ptr [0x005d5a17]        ; 0042fa70 | DAT_005d5a17
    MOV EAX,dword ptr [EBX + 0xb9e4]    ; 0042fa76
    FSTP float ptr [ESP + 0x34]         ; 0042fa7c
    PUSH dword ptr [ESP + 0x34]         ; 0042fa80
    PUSH EAX                            ; 0042fa84
    CALL sound_sndmain.cpp_FUN_00573950 ; 0042fa85
        ;   XREF to: 00573950 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00573950()
    ADD ESP,0x8                         ; 0042fa8a
    TEST EAX,EAX                        ; 0042fa8d
    JZ 0x0042fcae                       ; 0042fa8f
        ;   XREF to: 0042fcae (CONDITIONAL_JUMP)  ; LAB_0042fcae
    XOR ECX,ECX                         ; 0042fa95
        ;   Label: LAB_0042fa95
    MOV ESI,dword ptr [EBX + 0x3120]    ; 0042fa97
    MOV dword ptr [ESP + 0x58],ECX      ; 0042fa9d
    TEST ESI,ESI                        ; 0042faa1
    JLE 0x0042fbe8                      ; 0042faa3
        ;   XREF to: 0042fbe8 (CONDITIONAL_JUMP)  ; LAB_0042fbe8
    LEA EAX,[EBX + 0xfd8]               ; 0042faa9
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042faaf
    LEA EAX,[EBX + 0x35dc]              ; 0042fab3
    MOV dword ptr [ESP + 0x44],EAX      ; 0042fab9
    LEA EAX,[EBX + 0x312c]              ; 0042fabd
    MOV dword ptr [ESP + 0x64],EAX      ; 0042fac3
    MOV dword ptr [ESP + 0x60],EBX      ; 0042fac7
    LEA EAX,[EBX + 0x35fc]              ; 0042facb
    MOV dword ptr [ESP + 0x5c],EAX      ; 0042fad1
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fad5
        ;   Label: LAB_0042fad5
    MOV EAX,dword ptr [EAX]             ; 0042fad9
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042fadb
    JZ 0x0042fbab                       ; 0042fae3
        ;   XREF to: 0042fbab (CONDITIONAL_JUMP)  ; LAB_0042fbab
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fae9
    MOV dword ptr [EBX + 0xfc],0x1      ; 0042faed
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 0042faf7
    ADD EAX,dword ptr [ESP + 0x3c]      ; 0042fafb
    PUSH EAX                            ; 0042faff
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042fb00
    ADD EAX,0x8                         ; 0042fb04
    PUSH EAX                            ; 0042fb07
    LEA ESI,[ESP + 0x14]                ; 0042fb08
    LEA EDI,[ESP + 0x2c]                ; 0042fb0c
    CALL core_xform.cpp_FUN_005b5080    ; 0042fb10
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0042fb15
    LEA EAX,[ESP + 0x24]                ; 0042fb18
    LEA ESI,[ESP + 0xc]                 ; 0042fb1c
    PUSH EAX                            ; 0042fb20
    MOVSD ES:EDI,ESI                    ; 0042fb21
    MOVSD ES:EDI,ESI                    ; 0042fb22
    MOVSD ES:EDI,ESI                    ; 0042fb23
    PUSH EBX                            ; 0042fb24
    LEA ESI,[ESP + 0x8]                 ; 0042fb25
    CALL core_actor.cpp_FUN_00408b40    ; 0042fb29
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0042fb2e
    IMUL EDX,dword ptr [ESP + 0x58],0x2a4 ; 0042fb31
    LEA EDI,[ESP + 0x18]                ; 0042fb39
    MOV ESI,ESP                         ; 0042fb3d
    MOVSD ES:EDI,ESI                    ; 0042fb3f
    MOVSD ES:EDI,ESI                    ; 0042fb40
    MOVSD ES:EDI,ESI                    ; 0042fb41
    MOV ESI,dword ptr [ESP + 0x5c]      ; 0042fb42
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042fb46
    MOV dword ptr [ESI],EAX             ; 0042fb4a
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0042fb4c
    MOV dword ptr [ESI + 0x4],EAX       ; 0042fb50
    MOV EAX,dword ptr [ESP + 0x20]      ; 0042fb53
    MOV dword ptr [ESI + 0x8],EAX       ; 0042fb57
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fb5a
    FLD double ptr [0x005d5a1f]         ; 0042fb5e | DAT_005d5a1f
    FLD float ptr [EAX + 0x14]          ; 0042fb64
    FMUL ST1                            ; 0042fb67
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042fb69
    FSTP float ptr [EAX + 0x3734]       ; 0042fb6d
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fb73
    FLD float ptr [EAX + 0x14]          ; 0042fb77
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042fb7a
    FSTP float ptr [EAX + 0x3738]       ; 0042fb7e
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fb84
    FMUL float ptr [EAX + 0x14]         ; 0042fb88
    MOV ECX,dword ptr [ESP + 0x44]      ; 0042fb8b
    PUSH dword ptr [EBP + 0x18]         ; 0042fb8f
    ADD EDX,ECX                         ; 0042fb92
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042fb94
    PUSH EDX                            ; 0042fb98
    FSTP float ptr [EAX + 0x373c]       ; 0042fb99
    MOV EAX,dword ptr [EDX + 0x154]     ; 0042fb9f
    CALL dword ptr [EAX + 0xc]          ; 0042fba5
    ADD ESP,0x8                         ; 0042fba8
    MOV EDI,dword ptr [ESP + 0x64]      ; 0042fbab
        ;   Label: LAB_0042fbab
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042fbaf
    MOV EDX,dword ptr [ESP + 0x5c]      ; 0042fbb3
    MOV ECX,dword ptr [ESP + 0x58]      ; 0042fbb7
    MOV ESI,dword ptr [EBX + 0x3120]    ; 0042fbbb
    ADD EDI,0x18                        ; 0042fbc1
    ADD EAX,0x2a4                       ; 0042fbc4
    ADD EDX,0x2a4                       ; 0042fbc9
    INC ECX                             ; 0042fbcf
    MOV dword ptr [ESP + 0x64],EDI      ; 0042fbd0
    MOV dword ptr [ESP + 0x60],EAX      ; 0042fbd4
    MOV dword ptr [ESP + 0x5c],EDX      ; 0042fbd8
    MOV dword ptr [ESP + 0x58],ECX      ; 0042fbdc
    CMP ECX,ESI                         ; 0042fbe0
    JL 0x0042fad5                       ; 0042fbe2
        ;   XREF to: 0042fad5 (CONDITIONAL_JUMP)  ; LAB_0042fad5
    MOV EDI,dword ptr [EBX + 0x27a4]    ; 0042fbe8
        ;   Label: LAB_0042fbe8
    TEST EDI,EDI                        ; 0042fbee
    JNZ 0x0042fc4d                      ; 0042fbf0
        ;   XREF to: 0042fc4d (CONDITIONAL_JUMP)  ; LAB_0042fc4d
    MOV EDX,dword ptr [EBX + 0x3120]    ; 0042fbf2
    MOV dword ptr [ESP + 0x54],EDI      ; 0042fbf8
    TEST EDX,EDX                        ; 0042fbfc
    JLE 0x0042fc4d                      ; 0042fbfe
        ;   XREF to: 0042fc4d (CONDITIONAL_JUMP)  ; LAB_0042fc4d
    FLD float ptr [EBP + 0x18]          ; 0042fc00
    LEA EAX,[EBX + 0x312c]              ; 0042fc03
    FMUL float ptr [0x005fd60c]         ; 0042fc09 | DAT_005fd60c
    MOV dword ptr [ESP + 0x68],EAX      ; 0042fc0f
    FSTP float ptr [ESP + 0x38]         ; 0042fc13
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042fc17
        ;   Label: LAB_0042fc17
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042fc1b
    MOV EAX,dword ptr [EAX]             ; 0042fc1f
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0042fc21
    JNZ 0x0042fce1                      ; 0042fc29
        ;   XREF to: 0042fce1 (CONDITIONAL_JUMP)  ; LAB_0042fce1
    MOV ESI,dword ptr [ESP + 0x68]      ; 0042fc2f
        ;   Label: LAB_0042fc2f
    MOV EDI,dword ptr [ESP + 0x54]      ; 0042fc33
    MOV EDX,dword ptr [EBX + 0x3120]    ; 0042fc37
    ADD ESI,0x18                        ; 0042fc3d
    INC EDI                             ; 0042fc40
    MOV dword ptr [ESP + 0x68],ESI      ; 0042fc41
    MOV dword ptr [ESP + 0x54],EDI      ; 0042fc45
    CMP EDI,EDX                         ; 0042fc49
    JL 0x0042fc17                       ; 0042fc4b
        ;   XREF to: 0042fc17 (CONDITIONAL_JUMP)  ; LAB_0042fc17
    MOV ESP,EBP                         ; 0042fc4d
        ;   Label: LAB_0042fc4d
    POP EBP                             ; 0042fc4f
    POP EDI                             ; 0042fc50
    POP ESI                             ; 0042fc51
    POP EBX                             ; 0042fc52
    RET                                 ; 0042fc53
    FLD float ptr [EBX + 0xb9ec]        ; 0042fc54
        ;   Label: LAB_0042fc54
    FSUB float ptr [EBP + 0x18]         ; 0042fc5a
    FST float ptr [EBX + 0xb9ec]        ; 0042fc5d
    FLDZ                                ; 0042fc63
    FCOMPP                              ; 0042fc65
    FNSTSW AX                           ; 0042fc67
    SAHF                                ; 0042fc69
    JBE 0x0042fa95                      ; 0042fc6a
        ;   XREF to: 0042fa95 (CONDITIONAL_JUMP)  ; LAB_0042fa95
    MOV EDX,dword ptr [EBX + 0xb9e4]    ; 0042fc70
    PUSH EDX                            ; 0042fc76
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0042fc77
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0042fc7c
    PUSH 0x5d59bf                       ; 0042fc7f | s_character_onfire_fallapa_005d59be+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042fc84
    PUSH EBX                            ; 0042fc8a
    CALL dword ptr [EAX + 0x2c]         ; 0042fc8b
    ADD ESP,0x8                         ; 0042fc8e
    PUSH 0x0                            ; 0042fc91
    PUSH 0xbf800000                     ; 0042fc93
    PUSH 0x0                            ; 0042fc98
    PUSH EBX                            ; 0042fc9a
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00430d90 ; 0042fc9b
        ;   XREF to: 00430d90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00430d90(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0042fca0
    JMP 0x0042fa95                      ; 0042fca3
        ;   XREF to: 0042fa95 (UNCONDITIONAL_JUMP)  ; LAB_0042fa95
    INC ESI                             ; 0042fca8
        ;   Label: LAB_0042fca8
    JMP 0x0042fa19                      ; 0042fca9
        ;   XREF to: 0042fa19 (UNCONDITIONAL_JUMP)  ; LAB_0042fa19
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0 ; 0042fcae
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00572ac0()
        ;   Label: LAB_0042fcae
    PUSH dword ptr [ESP + 0x34]         ; 0042fcb3
    CALL sound_sndmain.cpp_FUN_005728e0 ; 0042fcb7
        ;   XREF to: 005728e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005728e0(float volume)
    ADD ESP,0x4                         ; 0042fcbc
    PUSH 0x5d59de                       ; 0042fcbf | = "character-onfire-loop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042fcc4
    PUSH EBX                            ; 0042fcca
    CALL dword ptr [EAX + 0x30]         ; 0042fccb
    ADD ESP,0x8                         ; 0042fcce
    MOV dword ptr [EBX + 0xb9e4],EAX    ; 0042fcd1
    CALL sound_sndmain.cpp_popSfxOptions_FUN_00572b40 ; 0042fcd7
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_00572b40()
    JMP 0x0042fa95                      ; 0042fcdc
        ;   XREF to: 0042fa95 (UNCONDITIONAL_JUMP)  ; LAB_0042fa95
    FLD float ptr [ESP + 0x38]          ; 0042fce1
        ;   Label: LAB_0042fce1
    FMUL float ptr [EBX + 0x3128]       ; 0042fce5
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042fceb
    FADD float ptr [EAX + 0x14]         ; 0042fcef
    FST float ptr [EAX + 0x14]          ; 0042fcf2
    FCOMP float ptr [0x005fd610]        ; 0042fcf5 | DAT_005fd610
    FNSTSW AX                           ; 0042fcfb
    SAHF                                ; 0042fcfd
    JBE 0x0042fc2f                      ; 0042fcfe
        ;   XREF to: 0042fc2f (CONDITIONAL_JUMP)  ; LAB_0042fc2f
    MOV EAX,dword ptr [ESP + 0x68]      ; 0042fd04
    MOV EDX,dword ptr [0x005fd610]      ; 0042fd08 | DAT_005fd610
    MOV dword ptr [EAX + 0x14],EDX      ; 0042fd0e
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042fd11
    MOV EDI,dword ptr [EAX + 0x1de78]   ; 0042fd15
    XOR ESI,ESI                         ; 0042fd1b
    TEST EDI,EDI                        ; 0042fd1d
    JLE 0x0042fd6c                      ; 0042fd1f
        ;   XREF to: 0042fd6c (CONDITIONAL_JUMP)  ; LAB_0042fd6c
    MOV EDI,EAX                         ; 0042fd21
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0042fd23
        ;   Label: LAB_0042fd23
    MOV EAX,dword ptr [EDI + 0x1de9c]   ; 0042fd27
    MOV ECX,dword ptr [EDX + 0x4]       ; 0042fd2d
    CMP EAX,ECX                         ; 0042fd30
    JNZ 0x0042fd5a                      ; 0042fd32
        ;   XREF to: 0042fd5a (CONDITIONAL_JUMP)  ; LAB_0042fd5a
    MOV EDX,dword ptr [EBX + 0x3120]    ; 0042fd34
    XOR EAX,ECX                         ; 0042fd3a
    TEST EDX,EDX                        ; 0042fd3c
    JLE 0x0042fd4e                      ; 0042fd3e
        ;   XREF to: 0042fd4e (CONDITIONAL_JUMP)  ; LAB_0042fd4e
    MOV EDX,EBX                         ; 0042fd40
    CMP ESI,dword ptr [EDX + 0x3130]    ; 0042fd42
        ;   Label: LAB_0042fd42
    JNZ 0x0042fdc4                      ; 0042fd48
        ;   XREF to: 0042fdc4 (CONDITIONAL_JUMP)  ; LAB_0042fdc4
    CMP EAX,dword ptr [EBX + 0x3120]    ; 0042fd4e
        ;   Label: LAB_0042fd4e
    JZ 0x0042fddb                       ; 0042fd54
        ;   XREF to: 0042fddb (CONDITIONAL_JUMP)  ; LAB_0042fddb
    MOV EAX,dword ptr [ESP + 0x70]      ; 0042fd5a
        ;   Label: LAB_0042fd5a
    INC ESI                             ; 0042fd5e
    MOV EDX,dword ptr [EAX + 0x1de78]   ; 0042fd5f
    ADD EDI,0x24                        ; 0042fd65
    CMP ESI,EDX                         ; 0042fd68
    JL 0x0042fd23                       ; 0042fd6a
        ;   XREF to: 0042fd23 (CONDITIONAL_JUMP)  ; LAB_0042fd23
    MOV ECX,dword ptr [EBX + 0x3120]    ; 0042fd6c
        ;   Label: LAB_0042fd6c
    XOR EAX,EAX                         ; 0042fd72
    TEST ECX,ECX                        ; 0042fd74
    JLE 0x0042fd94                      ; 0042fd76
        ;   XREF to: 0042fd94 (CONDITIONAL_JUMP)  ; LAB_0042fd94
    MOV EDX,dword ptr [ESP + 0x6c]      ; 0042fd78
    IMUL EDI,dword ptr [EDX + 0x4],0x24 ; 0042fd7c
    ADD EDI,dword ptr [ESP + 0x70]      ; 0042fd80
    MOV EDX,EBX                         ; 0042fd84
    MOV ECX,dword ptr [EDI + 0x1de9c]   ; 0042fd86
        ;   Label: LAB_0042fd86
    CMP ECX,dword ptr [EDX + 0x3130]    ; 0042fd8c
    JNZ 0x0042fdef                      ; 0042fd92
        ;   XREF to: 0042fdef (CONDITIONAL_JUMP)  ; LAB_0042fdef
    CMP EAX,dword ptr [EBX + 0x3120]    ; 0042fd94
        ;   Label: LAB_0042fd94
    JNZ 0x0042fc2f                      ; 0042fd9a
        ;   XREF to: 0042fc2f (CONDITIONAL_JUMP)  ; LAB_0042fc2f
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042fda0
    IMUL EAX,dword ptr [EAX + 0x4],0x24 ; 0042fda4
    MOV EDX,dword ptr [ESP + 0x70]      ; 0042fda8
    ADD EAX,EDX                         ; 0042fdac
    MOV ECX,dword ptr [EAX + 0x1de9c]   ; 0042fdae
    PUSH ECX                            ; 0042fdb4
    PUSH EDX                            ; 0042fdb5
    PUSH EBX                            ; 0042fdb6
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0 ; 0042fdb7
        ;   XREF to: 0042f4d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042fdbc
    JMP 0x0042fc2f                      ; 0042fdbf
        ;   XREF to: 0042fc2f (UNCONDITIONAL_JUMP)  ; LAB_0042fc2f
    INC EAX                             ; 0042fdc4
        ;   Label: LAB_0042fdc4
    MOV ECX,dword ptr [EBX + 0x3120]    ; 0042fdc5
    ADD EDX,0x18                        ; 0042fdcb
    CMP EAX,ECX                         ; 0042fdce
    JL 0x0042fd42                       ; 0042fdd0
        ;   XREF to: 0042fd42 (CONDITIONAL_JUMP)  ; LAB_0042fd42
    JMP 0x0042fd4e                      ; 0042fdd6
        ;   XREF to: 0042fd4e (UNCONDITIONAL_JUMP)  ; LAB_0042fd4e
    PUSH ESI                            ; 0042fddb
        ;   Label: LAB_0042fddb
    MOV ECX,dword ptr [ESP + 0x74]      ; 0042fddc
    PUSH ECX                            ; 0042fde0
    PUSH EBX                            ; 0042fde1
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0 ; 0042fde2
        ;   XREF to: 0042f4d0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_0042f4d0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042fde7
    JMP 0x0042fd5a                      ; 0042fdea
        ;   XREF to: 0042fd5a (UNCONDITIONAL_JUMP)  ; LAB_0042fd5a
    INC EAX                             ; 0042fdef
        ;   Label: LAB_0042fdef
    MOV ECX,dword ptr [EBX + 0x3120]    ; 0042fdf0
    ADD EDX,0x18                        ; 0042fdf6
    CMP EAX,ECX                         ; 0042fdf9
    JL 0x0042fd86                       ; 0042fdfb
        ;   XREF to: 0042fd86 (CONDITIONAL_JUMP)  ; LAB_0042fd86
    JMP 0x0042fd94                      ; 0042fdfd
        ;   XREF to: 0042fd94 (UNCONDITIONAL_JUMP)  ; LAB_0042fd94

