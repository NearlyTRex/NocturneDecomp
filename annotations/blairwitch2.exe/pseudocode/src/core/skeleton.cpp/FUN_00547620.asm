; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeleton_cpp_FUN_00547620(CDeformableModelInstance *this_ptr)
;
; Parameters:
; CDeformableModelInstance * Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
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
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_skeleton.cpp_CDeformableModelInstance_initializeFromModel_FUN_005474b0 at 005475cd
;
; Referenced Globals:
;   undefined4 DAT_005e73f3
;   undefined4 DAT_005fb9a0
;
; Called Functions:
;   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
;   core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
;   core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00547620
        ;   Label: core_skeleton.cpp_FUN_00547620
    PUSH ESI                            ; 00547621
    PUSH EDI                            ; 00547622
    PUSH EBP                            ; 00547623
    SUB ESP,0x54                        ; 00547624
    MOV EBP,dword ptr [ESP + 0x68]      ; 00547627
    MOV EDX,0x7fffffff                  ; 0054762b
    MOV ESI,0x80000001                  ; 00547630
    PUSH EBP                            ; 00547635
    MOV dword ptr [ESP + 0x24],EDX      ; 00547636
    MOV dword ptr [ESP + 0x20],EDX      ; 0054763a
    MOV dword ptr [ESP + 0x1c],EDX      ; 0054763e
    MOV dword ptr [ESP + 0xc],ESI       ; 00547642
    MOV dword ptr [ESP + 0x8],ESI       ; 00547646
    MOV dword ptr [ESP + 0x4],ESI       ; 0054764a
    CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810 ; 0054764e
        ;   XREF to: 00547810 (UNCONDITIONAL_CALL)  ; CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00547653
    PUSH 0x0                            ; 00547656
    PUSH 0x0                            ; 00547658
    PUSH EBP                            ; 0054765a
    MOV ESI,dword ptr [EAX + 0x2c]      ; 0054765b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50 ; 0054765e
        ;   XREF to: 00544f50 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance * this_ptr, int motion_index, float frame_number)
    ADD ESP,0xc                         ; 00547663
    PUSH 0x0                            ; 00547666
    PUSH EBP                            ; 00547668
    CALL core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0 ; 00547669
        ;   XREF to: 005471f0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(CDeformableModelInstance * this_ptr, int lod_index)
    ADD ESP,0x8                         ; 0054766e
    TEST ESI,ESI                        ; 00547671
    JLE 0x005476f1                      ; 00547673
        ;   XREF to: 005476f1 (CONDITIONAL_JUMP)  ; LAB_005476f1
    LEA ECX,[ESI*0x4 + 0x0]             ; 00547679
    SUB ECX,ESI                         ; 00547680
    XOR EDX,EDX                         ; 00547682
    SHL ECX,0x2                         ; 00547684
    MOV ESI,dword ptr [EBP + 0x2234]    ; 00547687
        ;   Label: LAB_00547687
    LEA EDI,[ESP + 0xc]                 ; 0054768d
    ADD ESI,EDX                         ; 00547691
    MOVSD ES:EDI,ESI                    ; 00547693
    MOVSD ES:EDI,ESI                    ; 00547694
    MOVSD ES:EDI,ESI                    ; 00547695
    MOV EBX,dword ptr [ESP + 0x18]      ; 00547696
    MOV EAX,dword ptr [ESP + 0xc]       ; 0054769a
    CMP EAX,EBX                         ; 0054769e
    JGE 0x005476a6                      ; 005476a0
        ;   XREF to: 005476a6 (CONDITIONAL_JUMP)  ; LAB_005476a6
    MOV dword ptr [ESP + 0x18],EAX      ; 005476a2
    MOV EAX,dword ptr [ESP + 0xc]       ; 005476a6
        ;   Label: LAB_005476a6
    CMP EAX,dword ptr [ESP]             ; 005476aa
    JLE 0x005476b2                      ; 005476ad
        ;   XREF to: 005476b2 (CONDITIONAL_JUMP)  ; LAB_005476b2
    MOV dword ptr [ESP],EAX             ; 005476af
    MOV EAX,dword ptr [ESP + 0x10]      ; 005476b2
        ;   Label: LAB_005476b2
    CMP EAX,dword ptr [ESP + 0x1c]      ; 005476b6
    JGE 0x005476c0                      ; 005476ba
        ;   XREF to: 005476c0 (CONDITIONAL_JUMP)  ; LAB_005476c0
    MOV dword ptr [ESP + 0x1c],EAX      ; 005476bc
    MOV EAX,dword ptr [ESP + 0x10]      ; 005476c0
        ;   Label: LAB_005476c0
    CMP EAX,dword ptr [ESP + 0x4]       ; 005476c4
    JLE 0x005476ce                      ; 005476c8
        ;   XREF to: 005476ce (CONDITIONAL_JUMP)  ; LAB_005476ce
    MOV dword ptr [ESP + 0x4],EAX       ; 005476ca
    MOV EAX,dword ptr [ESP + 0x14]      ; 005476ce
        ;   Label: LAB_005476ce
    CMP EAX,dword ptr [ESP + 0x20]      ; 005476d2
    JGE 0x005476dc                      ; 005476d6
        ;   XREF to: 005476dc (CONDITIONAL_JUMP)  ; LAB_005476dc
    MOV dword ptr [ESP + 0x20],EAX      ; 005476d8
    MOV EAX,dword ptr [ESP + 0x14]      ; 005476dc
        ;   Label: LAB_005476dc
    CMP EAX,dword ptr [ESP + 0x8]       ; 005476e0
    JLE 0x005476ea                      ; 005476e4
        ;   XREF to: 005476ea (CONDITIONAL_JUMP)  ; LAB_005476ea
    MOV dword ptr [ESP + 0x8],EAX       ; 005476e6
    ADD EDX,0xc                         ; 005476ea
        ;   Label: LAB_005476ea
    CMP EDX,ECX                         ; 005476ed
    JL 0x00547687                       ; 005476ef
        ;   XREF to: 00547687 (CONDITIONAL_JUMP)  ; LAB_00547687
    LEA EDX,[EBP + 0x2238]              ; 005476f1
        ;   Label: LAB_005476f1
    LEA EAX,[ESP + 0x18]                ; 005476f7
    MOV EBX,EDX                         ; 005476fb
    LEA EDI,[ESP + 0x3c]                ; 005476fd
    FILD dword ptr [EAX]                ; 00547701
    FMUL float ptr [0x005fb9a0]         ; 00547703 | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00547709
    FILD dword ptr [EAX + 0x4]          ; 0054770b
    FMUL float ptr [0x005fb9a0]         ; 0054770e | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 00547714
    FILD dword ptr [EAX + 0x8]          ; 00547717
    FMUL float ptr [0x005fb9a0]         ; 0054771a | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00547720
    ADD EBP,0x2244                      ; 00547723
    MOV EAX,ESP                         ; 00547729
    MOV EBX,EBP                         ; 0054772b
    LEA ESI,[ESP + 0x30]                ; 0054772d
    FILD dword ptr [EAX]                ; 00547731
    FMUL float ptr [0x005fb9a0]         ; 00547733 | DAT_005fb9a0
    FSTP float ptr [EBX]                ; 00547739
    FILD dword ptr [EAX + 0x4]          ; 0054773b
    FMUL float ptr [0x005fb9a0]         ; 0054773e | DAT_005fb9a0
    FSTP float ptr [EBX + 0x4]          ; 00547744
    FILD dword ptr [EAX + 0x8]          ; 00547747
    FMUL float ptr [0x005fb9a0]         ; 0054774a | DAT_005fb9a0
    FSTP float ptr [EBX + 0x8]          ; 00547750
    FLD float ptr [EBP]                 ; 00547753
    FLD float ptr [EBP + 0x4]           ; 00547756
    FLD float ptr [EBP + 0x8]           ; 00547759
    FXCH ST2                            ; 0054775c
    FSUB float ptr [EDX]                ; 0054775e
    FXCH                                ; 00547760
    FSUB float ptr [EDX + 0x4]          ; 00547762
    FXCH ST2                            ; 00547765
    FSUB float ptr [EDX + 0x8]          ; 00547767
    FXCH                                ; 0054776a
    FSTP float ptr [ESP + 0x30]         ; 0054776c
    FXCH                                ; 00547770
    FSTP float ptr [ESP + 0x34]         ; 00547772
    FSTP float ptr [ESP + 0x38]         ; 00547776
    MOVSD ES:EDI,ESI                    ; 0054777a
    MOVSD ES:EDI,ESI                    ; 0054777b
    MOVSD ES:EDI,ESI                    ; 0054777c
    FLD float ptr [0x005e73f3]          ; 0054777d | DAT_005e73f3
    FLD float ptr [ESP + 0x3c]          ; 00547783
    FMUL ST1                            ; 00547787
    FLD float ptr [ESP + 0x40]          ; 00547789
    FMUL ST2                            ; 0054778d
    FLD float ptr [ESP + 0x44]          ; 0054778f
    FMULP ST3                           ; 00547793
    LEA EDI,[ESP + 0x24]                ; 00547795
    LEA ESI,[ESP + 0x48]                ; 00547799
    FXCH                                ; 0054779d
    FSTP float ptr [ESP + 0x48]         ; 0054779f
    FSTP float ptr [ESP + 0x4c]         ; 005477a3
    FSTP float ptr [ESP + 0x50]         ; 005477a7
    MOVSD ES:EDI,ESI                    ; 005477ab
    MOVSD ES:EDI,ESI                    ; 005477ac
    MOVSD ES:EDI,ESI                    ; 005477ad
    FLD float ptr [EDX]                 ; 005477ae
    FLD float ptr [EDX + 0x4]           ; 005477b0
    FLD float ptr [EDX + 0x8]           ; 005477b3
    FXCH ST2                            ; 005477b6
    FSUB float ptr [ESP + 0x24]         ; 005477b8
    FXCH                                ; 005477bc
    FSUB float ptr [ESP + 0x28]         ; 005477be
    FXCH ST2                            ; 005477c2
    FSUB float ptr [ESP + 0x2c]         ; 005477c4
    FXCH                                ; 005477c8
    FSTP float ptr [EDX]                ; 005477ca
    FXCH                                ; 005477cc
    FSTP float ptr [EDX + 0x4]          ; 005477ce
    FSTP float ptr [EDX + 0x8]          ; 005477d1
    FLD float ptr [EBP]                 ; 005477d4
    FLD float ptr [EBP + 0x4]           ; 005477d7
    FLD float ptr [EBP + 0x8]           ; 005477da
    FXCH ST2                            ; 005477dd
    FADD float ptr [ESP + 0x24]         ; 005477df
    FXCH                                ; 005477e3
    FADD float ptr [ESP + 0x28]         ; 005477e5
    FXCH ST2                            ; 005477e9
    FADD float ptr [ESP + 0x2c]         ; 005477eb
    FXCH                                ; 005477ef
    FSTP float ptr [EBP]                ; 005477f1
    FXCH                                ; 005477f4
    FSTP float ptr [EBP + 0x4]          ; 005477f6
    FSTP float ptr [EBP + 0x8]          ; 005477f9
    ADD ESP,0x54                        ; 005477fc
    POP EBP                             ; 005477ff
    POP EDI                             ; 00547800
    POP ESI                             ; 00547801
    POP EBX                             ; 00547802
    RET                                 ; 00547803

