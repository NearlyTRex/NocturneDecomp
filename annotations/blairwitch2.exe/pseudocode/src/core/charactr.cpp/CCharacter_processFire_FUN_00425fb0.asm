; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_processFire_FUN_00425fb0(CCharacter *this_ptr,float delta_time)
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
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 at 004244e2
;
; Referenced Globals:
;   undefined4 s_character_onfire_fallapa_005ccd35+1
;   TerminatedCString s_character_onfire_loop_wa_005ccd55
;   undefined4 DAT_005ccd76
;   undefined4 DAT_005ccd7e
;   undefined4 DAT_005ccd86
;   undefined4 DAT_005ccd8e
;   undefined4 DAT_005ccd96
;   undefined4 DAT_005f407c
;   undefined4 DAT_005f4080
;   undefined4 DAT_007bdc9c
;   undefined4 DAT_007bdca0
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_charactr.cpp_CCharacter_dismember_FUN_00427360
;   core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
;   core_xform.cpp_FUN_00591530
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxVolume_FUN_00550270
;   sound_sndmain.cpp_setSfxVolume_FUN_00550f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00425fb0
        ;   Label: core_charactr.cpp_CCharacter_processFire_FUN_00425fb0
    PUSH ESI                            ; 00425fb1
    PUSH EDI                            ; 00425fb2
    PUSH EBP                            ; 00425fb3
    MOV EBP,ESP                         ; 00425fb4
    SUB ESP,0x74                        ; 00425fb6
    AND ESP,0xfffffff8                  ; 00425fb9
    MOV EBX,dword ptr [EBP + 0x14]      ; 00425fbc
    LEA EDI,[EBX + 0x2b4]               ; 00425fbf
    PUSH EDI                            ; 00425fc5
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00425fc6
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00425fcb
    MOV EDX,dword ptr [EBX + 0x10224]   ; 00425fce
    MOV dword ptr [ESP + 0x70],EAX      ; 00425fd4
    TEST EDX,EDX                        ; 00425fd8
    JNZ 0x00426323                      ; 00425fda
        ;   XREF to: 00426323 (CONDITIONAL_JUMP)  ; LAB_00426323
    CMP dword ptr [EBX + 0x3564],0x0    ; 00425fe0
    JLE 0x00426165                      ; 00425fe7
        ;   XREF to: 00426165 (CONDITIONAL_JUMP)  ; LAB_00426165
    PUSH EDI                            ; 00425fed
    CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890 ; 00425fee
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; CSkeleton * core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00425ff3
    PUSH EDI                            ; 00425ff6
    MOV ESI,EAX                         ; 00425ff7
    MOV dword ptr [ESP + 0x4c],EAX      ; 00425ff9
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 00425ffd
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00426002
    MOV EDI,EAX                         ; 00426005
    MOV EAX,dword ptr [ESI + 0x1d1f8]   ; 00426007
    XOR EDX,EDX                         ; 0042600d
    TEST EAX,EAX                        ; 0042600f
    JLE 0x00426030                      ; 00426011
        ;   XREF to: 00426030 (CONDITIONAL_JUMP)  ; LAB_00426030
    MOV ESI,dword ptr [ESP + 0x48]      ; 00426013
    XOR EAX,EAX                         ; 00426017
    XOR ECX,ECX                         ; 00426019
        ;   Label: LAB_00426019
    MOV dword ptr [EAX + 0x7bdc9c],ECX  ; 0042601b | DAT_007bdc9c | DAT_007bdca0
    INC EDX                             ; 00426021
    MOV ECX,dword ptr [ESI + 0x1d1f8]   ; 00426022
    ADD EAX,0x4                         ; 00426028
    CMP EDX,ECX                         ; 0042602b
    JL 0x00426019                       ; 0042602d
        ;   XREF to: 00426019 (CONDITIONAL_JUMP)  ; LAB_00426019
    NOP                                 ; 0042602f
    MOV ESI,dword ptr [EBX + 0x3564]    ; 00426030
        ;   Label: LAB_00426030
    XOR EAX,EAX                         ; 00426036
    TEST ESI,ESI                        ; 00426038
    JLE 0x0042607e                      ; 0042603a
        ;   XREF to: 0042607e (CONDITIONAL_JUMP)  ; LAB_0042607e
    FLD float ptr [0x005f4080]          ; 0042603c | DAT_005f4080
    FLD double ptr [0x005ccd76]         ; 00426042 | DAT_005ccd76
    MOV ESI,EBX                         ; 00426048
    FLD float ptr [ESI + 0x3584]        ; 0042604a
        ;   Label: LAB_0042604a
    MOV EDX,dword ptr [ESI + 0x3574]    ; 00426050
    FMUL ST1                            ; 00426056
    FLD float ptr [EDX*0x4 + 0x7bdc9c]  ; 00426058 | DAT_007bdc9c
    FLD ST3                             ; 0042605f
    FDIVP ST2,ST0                       ; 00426061
    FADDP                               ; 00426063
    INC EAX                             ; 00426065
    FSTP float ptr [EDX*0x4 + 0x7bdc9c] ; 00426066 | DAT_007bdc9c
    MOV EDX,dword ptr [EBX + 0x3564]    ; 0042606d
    ADD ESI,0x18                        ; 00426073
    CMP EAX,EDX                         ; 00426076
    JL 0x0042604a                       ; 00426078
        ;   XREF to: 0042604a (CONDITIONAL_JUMP)  ; LAB_0042604a
    FSTP ST0                            ; 0042607a
    FSTP ST0                            ; 0042607c
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042607e
        ;   Label: LAB_0042607e
    XOR ESI,ESI                         ; 00426082
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00426084
    MOV dword ptr [ESP + 0x50],ESI      ; 0042608a
    TEST EDX,EDX                        ; 0042608e
    JLE 0x0042610e                      ; 00426090
        ;   XREF to: 0042610e (CONDITIONAL_JUMP)  ; LAB_0042610e
    LEA EAX,[EBX + 0x2b4]               ; 00426096
    MOV dword ptr [ESP + 0x4c],EDI      ; 0042609c
    MOV dword ptr [ESP + 0x40],EAX      ; 004260a0
    XOR EDI,EDI                         ; 004260a4
    FLD float ptr [EDI + 0x7bdc9c]      ; 004260a6 | DAT_007bdc9c | DAT_007bdca0
        ;   Label: LAB_004260a6
    FCOMP double ptr [0x005ccd76]       ; 004260ac | DAT_005ccd76
    FNSTSW AX                           ; 004260b2
    SAHF                                ; 004260b4
    JC 0x004260b8                       ; 004260b5
        ;   XREF to: 004260b8 (CONDITIONAL_JUMP)  ; LAB_004260b8
    INC ESI                             ; 004260b7
    MOV EAX,dword ptr [ESP + 0x4c]      ; 004260b8
        ;   Label: LAB_004260b8
    CMP dword ptr [EAX + 0x288c],-0x1   ; 004260bc
    JNZ 0x004260c6                      ; 004260c3
        ;   XREF to: 004260c6 (CONDITIONAL_JUMP)  ; LAB_004260c6
    INC ESI                             ; 004260c5
    MOV ECX,dword ptr [ESP + 0x40]      ; 004260c6
        ;   Label: LAB_004260c6
    PUSH ECX                            ; 004260ca
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 004260cb
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EDI + EAX*0x1 + 0x26fc] ; 004260d0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004260d7
    ADD ESP,0x4                         ; 004260de
    TEST EDX,EDX                        ; 004260e1
    JZ 0x00426377                       ; 004260e3
        ;   XREF to: 00426377 (CONDITIONAL_JUMP)  ; LAB_00426377
    MOV ECX,dword ptr [ESP + 0x4c]      ; 004260e9
        ;   Label: LAB_004260e9
    MOV EAX,dword ptr [ESP + 0x50]      ; 004260ed
    MOV EDX,dword ptr [ESP + 0x48]      ; 004260f1
    ADD EDI,0x4                         ; 004260f5
    ADD ECX,0x4                         ; 004260f8
    INC EAX                             ; 004260fb
    MOV dword ptr [ESP + 0x4c],ECX      ; 004260fc
    MOV ECX,dword ptr [EDX + 0x1d1f8]   ; 00426100
    MOV dword ptr [ESP + 0x50],EAX      ; 00426106
    CMP EAX,ECX                         ; 0042610a
    JL 0x004260a6                       ; 0042610c
        ;   XREF to: 004260a6 (CONDITIONAL_JUMP)  ; LAB_004260a6
    MOV EAX,dword ptr [ESP + 0x48]      ; 0042610e
        ;   Label: LAB_0042610e
    CMP ESI,dword ptr [EAX + 0x1d1f8]   ; 00426112
    JNZ 0x0042612e                      ; 00426118
        ;   XREF to: 0042612e (CONDITIONAL_JUMP)  ; LAB_0042612e
    MOV dword ptr [EBX + 0x10228],0x3f800000 ; 0042611a
    MOV dword ptr [EBX + 0x10224],0x1   ; 00426124
    FILD dword ptr [EBX + 0x3564]       ; 0042612e
        ;   Label: LAB_0042612e
    FMUL double ptr [0x005ccd7e]        ; 00426134 | DAT_005ccd7e
    FMUL double ptr [0x005ccd86]        ; 0042613a | DAT_005ccd86
    FADD double ptr [0x005ccd8e]        ; 00426140 | DAT_005ccd8e
    MOV EAX,dword ptr [EBX + 0x10220]   ; 00426146
    FSTP float ptr [ESP + 0x34]         ; 0042614c
    PUSH dword ptr [ESP + 0x34]         ; 00426150
    PUSH EAX                            ; 00426154
    CALL sound_sndmain.cpp_setSfxVolume_FUN_00550f20 ; 00426155
        ;   XREF to: 00550f20 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxVolume_FUN_00550f20(uint sfx_handle, float volume)
    ADD ESP,0x8                         ; 0042615a
    TEST EAX,EAX                        ; 0042615d
    JZ 0x0042637d                       ; 0042615f
        ;   XREF to: 0042637d (CONDITIONAL_JUMP)  ; LAB_0042637d
    XOR ECX,ECX                         ; 00426165
        ;   Label: LAB_00426165
    MOV ESI,dword ptr [EBX + 0x3564]    ; 00426167
    MOV dword ptr [ESP + 0x58],ECX      ; 0042616d
    TEST ESI,ESI                        ; 00426171
    JLE 0x004262b7                      ; 00426173
        ;   XREF to: 004262b7 (CONDITIONAL_JUMP)  ; LAB_004262b7
    LEA EAX,[EBX + 0x1134]              ; 00426179
    MOV dword ptr [ESP + 0x3c],EAX      ; 0042617f
    LEA EAX,[EBX + 0x3a20]              ; 00426183
    MOV dword ptr [ESP + 0x44],EAX      ; 00426189
    LEA EAX,[EBX + 0x3570]              ; 0042618d
    MOV dword ptr [ESP + 0x64],EAX      ; 00426193
    MOV dword ptr [ESP + 0x60],EBX      ; 00426197
    LEA EAX,[EBX + 0x3a40]              ; 0042619b
    MOV dword ptr [ESP + 0x5c],EAX      ; 004261a1
    MOV EAX,dword ptr [ESP + 0x64]      ; 004261a5
        ;   Label: LAB_004261a5
    MOV EAX,dword ptr [EAX]             ; 004261a9
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004261ab
    JZ 0x0042627a                       ; 004261b3
        ;   XREF to: 0042627a (CONDITIONAL_JUMP)  ; LAB_0042627a
    MOV EAX,dword ptr [ESP + 0x64]      ; 004261b9
    MOV dword ptr [EBX + 0xfc],0x1      ; 004261bd
    IMUL EAX,dword ptr [EAX + 0x4],0x30 ; 004261c7
    ADD EAX,dword ptr [ESP + 0x3c]      ; 004261cb
    PUSH EAX                            ; 004261cf
    MOV EAX,dword ptr [ESP + 0x68]      ; 004261d0
    ADD EAX,0x8                         ; 004261d4
    PUSH EAX                            ; 004261d7
    LEA ESI,[ESP + 0x14]                ; 004261d8
    LEA EDI,[ESP + 0x2c]                ; 004261dc
    CALL core_xform.cpp_FUN_00591530    ; 004261e0
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004261e5
    LEA EAX,[ESP + 0x24]                ; 004261e8
    LEA ESI,[ESP + 0xc]                 ; 004261ec
    PUSH EAX                            ; 004261f0
    MOVSD ES:EDI,ESI                    ; 004261f1
    MOVSD ES:EDI,ESI                    ; 004261f2
    MOVSD ES:EDI,ESI                    ; 004261f3
    PUSH EBX                            ; 004261f4
    LEA ESI,[ESP + 0x8]                 ; 004261f5
    LEA EDI,[ESP + 0x20]                ; 004261f9
    CALL core_actor.cpp_FUN_00408d70    ; 004261fd
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 00426202
    MOV ESI,ESP                         ; 00426205
    MOV EDX,dword ptr [ESP + 0x58]      ; 00426207
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042620b
    MOVSD ES:EDI,ESI                    ; 0042620f
    MOVSD ES:EDI,ESI                    ; 00426210
    MOVSD ES:EDI,ESI                    ; 00426211
    SHL EDX,0xa                         ; 00426212
    MOV ESI,dword ptr [ESP + 0x5c]      ; 00426215
    ADD EDX,EAX                         ; 00426219
    MOV EAX,dword ptr [ESP + 0x18]      ; 0042621b
    MOV dword ptr [ESI],EAX             ; 0042621f
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00426221
    MOV dword ptr [ESI + 0x4],EAX       ; 00426225
    MOV EAX,dword ptr [ESP + 0x20]      ; 00426228
    MOV dword ptr [ESI + 0x8],EAX       ; 0042622c
    MOV EAX,dword ptr [ESP + 0x64]      ; 0042622f
    FLD double ptr [0x005ccd96]         ; 00426233 | DAT_005ccd96
    FLD float ptr [EAX + 0x14]          ; 00426239
    FMUL ST1                            ; 0042623c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042623e
    FSTP float ptr [EAX + 0x3cd4]       ; 00426242
    MOV EAX,dword ptr [ESP + 0x64]      ; 00426248
    FLD float ptr [EAX + 0x14]          ; 0042624c
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042624f
    FSTP float ptr [EAX + 0x3cd8]       ; 00426253
    MOV EAX,dword ptr [ESP + 0x64]      ; 00426259
    FMUL float ptr [EAX + 0x14]         ; 0042625d
    PUSH dword ptr [EBP + 0x18]         ; 00426260
    MOV EAX,dword ptr [ESP + 0x64]      ; 00426263
    PUSH EDX                            ; 00426267
    FSTP float ptr [EAX + 0x3cdc]       ; 00426268
    MOV EAX,dword ptr [EDX + 0x2b0]     ; 0042626e
    CALL dword ptr [EAX + 0x14]         ; 00426274
    ADD ESP,0x8                         ; 00426277
    MOV EDI,dword ptr [ESP + 0x64]      ; 0042627a
        ;   Label: LAB_0042627a
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042627e
    MOV EDX,dword ptr [ESP + 0x5c]      ; 00426282
    MOV ECX,dword ptr [ESP + 0x58]      ; 00426286
    MOV ESI,dword ptr [EBX + 0x3564]    ; 0042628a
    ADD EDI,0x18                        ; 00426290
    ADD EAX,0x400                       ; 00426293
    ADD EDX,0x400                       ; 00426298
    INC ECX                             ; 0042629e
    MOV dword ptr [ESP + 0x64],EDI      ; 0042629f
    MOV dword ptr [ESP + 0x60],EAX      ; 004262a3
    MOV dword ptr [ESP + 0x5c],EDX      ; 004262a7
    MOV dword ptr [ESP + 0x58],ECX      ; 004262ab
    CMP ECX,ESI                         ; 004262af
    JL 0x004261a5                       ; 004262b1
        ;   XREF to: 004261a5 (CONDITIONAL_JUMP)  ; LAB_004261a5
    MOV EDI,dword ptr [EBX + 0x2810]    ; 004262b7
        ;   Label: LAB_004262b7
    TEST EDI,EDI                        ; 004262bd
    JNZ 0x0042631c                      ; 004262bf
        ;   XREF to: 0042631c (CONDITIONAL_JUMP)  ; LAB_0042631c
    MOV EDX,dword ptr [EBX + 0x3564]    ; 004262c1
    MOV dword ptr [ESP + 0x54],EDI      ; 004262c7
    TEST EDX,EDX                        ; 004262cb
    JLE 0x0042631c                      ; 004262cd
        ;   XREF to: 0042631c (CONDITIONAL_JUMP)  ; LAB_0042631c
    FLD float ptr [EBP + 0x18]          ; 004262cf
    LEA EAX,[EBX + 0x3570]              ; 004262d2
    FMUL float ptr [0x005f407c]         ; 004262d8 | DAT_005f407c
    MOV dword ptr [ESP + 0x68],EAX      ; 004262de
    FSTP float ptr [ESP + 0x38]         ; 004262e2
    MOV EAX,dword ptr [ESP + 0x68]      ; 004262e6
        ;   Label: LAB_004262e6
    MOV dword ptr [ESP + 0x6c],EAX      ; 004262ea
    MOV EAX,dword ptr [EAX]             ; 004262ee
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004262f0
    JNZ 0x004263b0                      ; 004262f8
        ;   XREF to: 004263b0 (CONDITIONAL_JUMP)  ; LAB_004263b0
    MOV EDX,dword ptr [ESP + 0x68]      ; 004262fe
        ;   Label: LAB_004262fe
    MOV ECX,dword ptr [ESP + 0x54]      ; 00426302
    MOV ESI,dword ptr [EBX + 0x3564]    ; 00426306
    ADD EDX,0x18                        ; 0042630c
    INC ECX                             ; 0042630f
    MOV dword ptr [ESP + 0x68],EDX      ; 00426310
    MOV dword ptr [ESP + 0x54],ECX      ; 00426314
    CMP ECX,ESI                         ; 00426318
    JL 0x004262e6                       ; 0042631a
        ;   XREF to: 004262e6 (CONDITIONAL_JUMP)  ; LAB_004262e6
    MOV ESP,EBP                         ; 0042631c
        ;   Label: LAB_0042631c
    POP EBP                             ; 0042631e
    POP EDI                             ; 0042631f
    POP ESI                             ; 00426320
    POP EBX                             ; 00426321
    RET                                 ; 00426322
    FLD float ptr [EBX + 0x10228]       ; 00426323
        ;   Label: LAB_00426323
    FSUB float ptr [EBP + 0x18]         ; 00426329
    FST float ptr [EBX + 0x10228]       ; 0042632c
    FLDZ                                ; 00426332
    FCOMPP                              ; 00426334
    FNSTSW AX                           ; 00426336
    SAHF                                ; 00426338
    JBE 0x00426165                      ; 00426339
        ;   XREF to: 00426165 (CONDITIONAL_JUMP)  ; LAB_00426165
    MOV EDX,dword ptr [EBX + 0x10220]   ; 0042633f
    PUSH EDX                            ; 00426345
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00426346
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0042634b
    PUSH 0x5ccd36                       ; 0042634e | s_character_onfire_fallapa_005ccd35+1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00426353
    PUSH EBX                            ; 00426359
    CALL dword ptr [EAX + 0x34]         ; 0042635a
    ADD ESP,0x8                         ; 0042635d
    PUSH 0x0                            ; 00426360
    PUSH 0xbf800000                     ; 00426362
    PUSH 0x0                            ; 00426367
    PUSH EBX                            ; 00426369
    CALL core_charactr.cpp_CCharacter_dismember_FUN_00427360 ; 0042636a
        ;   XREF to: 00427360 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_00427360(CCharacter * this_ptr, CVector3f * impact_point, float impact_force, int render_in_background)
    ADD ESP,0x10                        ; 0042636f
    JMP 0x00426165                      ; 00426372
        ;   XREF to: 00426165 (UNCONDITIONAL_JUMP)  ; LAB_00426165
    INC ESI                             ; 00426377
        ;   Label: LAB_00426377
    JMP 0x004260e9                      ; 00426378
        ;   XREF to: 004260e9 (UNCONDITIONAL_JUMP)  ; LAB_004260e9
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0042637d
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_0042637d
    PUSH dword ptr [ESP + 0x34]         ; 00426382
    CALL sound_sndmain.cpp_setNextSfxVolume_FUN_00550270 ; 00426386
        ;   XREF to: 00550270 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxVolume_FUN_00550270(float volume)
    ADD ESP,0x4                         ; 0042638b
    PUSH 0x5ccd55                       ; 0042638e | = "character-onfire-loop.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00426393
    PUSH EBX                            ; 00426399
    CALL dword ptr [EAX + 0x38]         ; 0042639a
    ADD ESP,0x8                         ; 0042639d
    MOV dword ptr [EBX + 0x10220],EAX   ; 004263a0
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004263a6
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x00426165                      ; 004263ab
        ;   XREF to: 00426165 (UNCONDITIONAL_JUMP)  ; LAB_00426165
    FLD float ptr [ESP + 0x38]          ; 004263b0
        ;   Label: LAB_004263b0
    FMUL float ptr [EBX + 0x356c]       ; 004263b4
    MOV EAX,dword ptr [ESP + 0x68]      ; 004263ba
    FADD float ptr [EAX + 0x14]         ; 004263be
    FST float ptr [EAX + 0x14]          ; 004263c1
    FCOMP float ptr [0x005f4080]        ; 004263c4 | DAT_005f4080
    FNSTSW AX                           ; 004263ca
    SAHF                                ; 004263cc
    JBE 0x004262fe                      ; 004263cd
        ;   XREF to: 004262fe (CONDITIONAL_JUMP)  ; LAB_004262fe
    MOV EAX,dword ptr [ESP + 0x68]      ; 004263d3
    MOV EDX,dword ptr [0x005f4080]      ; 004263d7 | DAT_005f4080
    MOV dword ptr [EAX + 0x14],EDX      ; 004263dd
    MOV EAX,dword ptr [ESP + 0x70]      ; 004263e0
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 004263e4
    XOR ESI,ESI                         ; 004263ea
    TEST EDX,EDX                        ; 004263ec
    JLE 0x0042643b                      ; 004263ee
        ;   XREF to: 0042643b (CONDITIONAL_JUMP)  ; LAB_0042643b
    MOV EDI,EAX                         ; 004263f0
    MOV EDX,dword ptr [ESP + 0x6c]      ; 004263f2
        ;   Label: LAB_004263f2
    MOV EAX,dword ptr [EDI + 0x1d21c]   ; 004263f6
    MOV ECX,dword ptr [EDX + 0x4]       ; 004263fc
    CMP EAX,ECX                         ; 004263ff
    JNZ 0x00426429                      ; 00426401
        ;   XREF to: 00426429 (CONDITIONAL_JUMP)  ; LAB_00426429
    MOV EDX,dword ptr [EBX + 0x3564]    ; 00426403
    XOR EAX,ECX                         ; 00426409
    TEST EDX,EDX                        ; 0042640b
    JLE 0x0042641d                      ; 0042640d
        ;   XREF to: 0042641d (CONDITIONAL_JUMP)  ; LAB_0042641d
    MOV EDX,EBX                         ; 0042640f
    CMP ESI,dword ptr [EDX + 0x3574]    ; 00426411
        ;   Label: LAB_00426411
    JNZ 0x00426493                      ; 00426417
        ;   XREF to: 00426493 (CONDITIONAL_JUMP)  ; LAB_00426493
    CMP EAX,dword ptr [EBX + 0x3564]    ; 0042641d
        ;   Label: LAB_0042641d
    JZ 0x004264aa                       ; 00426423
        ;   XREF to: 004264aa (CONDITIONAL_JUMP)  ; LAB_004264aa
    MOV EAX,dword ptr [ESP + 0x70]      ; 00426429
        ;   Label: LAB_00426429
    INC ESI                             ; 0042642d
    MOV ECX,dword ptr [EAX + 0x1d1f8]   ; 0042642e
    ADD EDI,0x24                        ; 00426434
    CMP ESI,ECX                         ; 00426437
    JL 0x004263f2                       ; 00426439
        ;   XREF to: 004263f2 (CONDITIONAL_JUMP)  ; LAB_004263f2
    MOV ESI,dword ptr [EBX + 0x3564]    ; 0042643b
        ;   Label: LAB_0042643b
    XOR EAX,EAX                         ; 00426441
    TEST ESI,ESI                        ; 00426443
    JLE 0x00426463                      ; 00426445
        ;   XREF to: 00426463 (CONDITIONAL_JUMP)  ; LAB_00426463
    MOV EDX,dword ptr [ESP + 0x6c]      ; 00426447
    IMUL EDI,dword ptr [EDX + 0x4],0x24 ; 0042644b
    ADD EDI,dword ptr [ESP + 0x70]      ; 0042644f
    MOV EDX,EBX                         ; 00426453
    MOV ECX,dword ptr [EDI + 0x1d21c]   ; 00426455
        ;   Label: LAB_00426455
    CMP ECX,dword ptr [EDX + 0x3574]    ; 0042645b
    JNZ 0x004264be                      ; 00426461
        ;   XREF to: 004264be (CONDITIONAL_JUMP)  ; LAB_004264be
    CMP EAX,dword ptr [EBX + 0x3564]    ; 00426463
        ;   Label: LAB_00426463
    JNZ 0x004262fe                      ; 00426469
        ;   XREF to: 004262fe (CONDITIONAL_JUMP)  ; LAB_004262fe
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0042646f
    IMUL EAX,dword ptr [EAX + 0x4],0x24 ; 00426473
    MOV EDX,dword ptr [ESP + 0x70]      ; 00426477
    ADD EAX,EDX                         ; 0042647b
    MOV ECX,dword ptr [EAX + 0x1d21c]   ; 0042647d
    PUSH ECX                            ; 00426483
    PUSH EDX                            ; 00426484
    PUSH EBX                            ; 00426485
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0 ; 00426486
        ;   XREF to: 00425bb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 0042648b
    JMP 0x004262fe                      ; 0042648e
        ;   XREF to: 004262fe (UNCONDITIONAL_JUMP)  ; LAB_004262fe
    INC EAX                             ; 00426493
        ;   Label: LAB_00426493
    MOV ECX,dword ptr [EBX + 0x3564]    ; 00426494
    ADD EDX,0x18                        ; 0042649a
    CMP EAX,ECX                         ; 0042649d
    JL 0x00426411                       ; 0042649f
        ;   XREF to: 00426411 (CONDITIONAL_JUMP)  ; LAB_00426411
    JMP 0x0042641d                      ; 004264a5
        ;   XREF to: 0042641d (UNCONDITIONAL_JUMP)  ; LAB_0042641d
    PUSH ESI                            ; 004264aa
        ;   Label: LAB_004264aa
    MOV ECX,dword ptr [ESP + 0x74]      ; 004264ab
    PUSH ECX                            ; 004264af
    PUSH EBX                            ; 004264b0
    CALL core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0 ; 004264b1
        ;   XREF to: 00425bb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnFireOnBone_FUN_00425bb0(CCharacter * this_ptr, CSkeleton * skeleton, int target_bone_index)
    ADD ESP,0xc                         ; 004264b6
    JMP 0x00426429                      ; 004264b9
        ;   XREF to: 00426429 (UNCONDITIONAL_JUMP)  ; LAB_00426429
    INC EAX                             ; 004264be
        ;   Label: LAB_004264be
    MOV ECX,dword ptr [EBX + 0x3564]    ; 004264bf
    ADD EDX,0x18                        ; 004264c5
    CMP EAX,ECX                         ; 004264c8
    JL 0x00426455                       ; 004264ca
        ;   XREF to: 00426455 (CONDITIONAL_JUMP)  ; LAB_00426455
    JMP 0x00426463                      ; 004264cc
        ;   XREF to: 00426463 (UNCONDITIONAL_JUMP)  ; LAB_00426463

