; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; Local Variables:
; undefined        Stack[-0x74]:1  local_74
; undefined        Stack[-0x5c]:1  local_5c
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[6]:
;   core_bird.cpp_CBird_renderTransparent_FUN_0040ff30 at 0040ff64
;   core_demnfolk.cpp_CDemnfolk_renderTransparent_FUN_00458200 at 004583a9
;   core_prye.cpp_CPrye_renderTransparent_FUN_00522880 at 00522886
;   core_tawiscara.cpp_CTawiscara_renderTransparent_FUN_00595d20 at 00595e48
;   core_werewolf.cpp_CWerewolf_renderTransparent_FUN_0057f440 at 0057f568
;   core_zombie.cpp_CZombie_renderTransparent_FUN_0058beb0 at 0058c042
;
; Referenced Globals:
;   undefined4 DAT_005b837a
;   undefined4 DAT_005b837e
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_007e2af0
;   undefined4 DAT_007e2b0c
;   undefined4 DAT_007e2b10
;   undefined4 DAT_007e2b2c
;   undefined1 DAT_007e2b30
;   undefined4 DAT_007e2cb0
;   CDemonSet g_CDemonSetInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830
;   core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0
;   core_charactr.cpp_FUN_0042d8e0
;   core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30
;   core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0
;   core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0
;   core_set.cpp_FUN_00537320
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042f510
        ;   Label: core_charactr.cpp_CCharacter_renderTransparent_FUN_0042f510
    PUSH ESI                            ; 0042f511
    PUSH EDI                            ; 0042f512
    PUSH EBP                            ; 0042f513
    SUB ESP,0x64                        ; 0042f514
    MOV EBX,dword ptr [ESP + 0x78]      ; 0042f517
    MOV AH,byte ptr [0x007e2b30]        ; 0042f51b | DAT_007e2b30
    TEST AH,0x1                         ; 0042f521
    JZ 0x0042f6c9                       ; 0042f524
        ;   XREF to: 0042f6c9 (CONDITIONAL_JUMP)  ; LAB_0042f6c9
    MOV EDX,dword ptr [EBX + 0x27a8]    ; 0042f52a
        ;   Label: LAB_0042f52a
    XOR EBP,EBP                         ; 0042f530
    TEST EDX,EDX                        ; 0042f532
    JZ 0x0042f639                       ; 0042f534
        ;   XREF to: 0042f639 (CONDITIONAL_JUMP)  ; LAB_0042f639
    CMP dword ptr [EBX + 0x30cc],0x0    ; 0042f53a
    JNZ 0x0042f639                      ; 0042f541
        ;   XREF to: 0042f639 (CONDITIONAL_JUMP)  ; LAB_0042f639
    FLD float ptr [0x007e2cb0]          ; 0042f547 | DAT_007e2cb0
    FADD float ptr [0x005b837a]         ; 0042f54d | DAT_005b837a
    FST float ptr [0x007e2cb0]          ; 0042f553 | DAT_007e2cb0
    FLD ST0                             ; 0042f559
    FSIN                                ; 0042f55b
    FXCH                                ; 0042f55d
    FCOS                                ; 0042f55f
    MOV ESI,0x40400000                  ; 0042f561
    LEA EDI,[ESP + 0x3c]                ; 0042f566
    MOV dword ptr [ESP + 0x34],ESI      ; 0042f56a
    LEA ESI,[ESP + 0x48]                ; 0042f56e
    FXCH                                ; 0042f572
    FSTP float ptr [ESP + 0x60]         ; 0042f574
    MOV EAX,dword ptr [ESP + 0x60]      ; 0042f578
    FSTP float ptr [ESP + 0x5c]         ; 0042f57c
    MOV dword ptr [ESP + 0x30],EAX      ; 0042f580
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042f584
    FLD float ptr [ESP + 0x30]          ; 0042f588
    MOV dword ptr [ESP + 0x38],EAX      ; 0042f58c
    LEA EAX,[EBX + 0x20]                ; 0042f590
    FLD float ptr [ESP + 0x38]          ; 0042f593
    FLD float ptr [EAX + 0x4]           ; 0042f597
    FXCH ST2                            ; 0042f59a
    FADD float ptr [EAX]                ; 0042f59c
    FXCH                                ; 0042f59e
    FADD float ptr [EAX + 0x8]          ; 0042f5a0
    FXCH                                ; 0042f5a3
    FSTP float ptr [ESP + 0x48]         ; 0042f5a5
    FXCH                                ; 0042f5a9
    FADD float ptr [0x005b837e]         ; 0042f5ab | DAT_005b837e
    FXCH                                ; 0042f5b1
    FSTP float ptr [ESP + 0x50]         ; 0042f5b3
    FSTP float ptr [ESP + 0x4c]         ; 0042f5b7
    MOVSD ES:EDI,ESI                    ; 0042f5bb
    MOVSD ES:EDI,ESI                    ; 0042f5bc
    MOVSD ES:EDI,ESI                    ; 0042f5bd
    LEA EAX,[ESP + 0x30]                ; 0042f5be
    LEA ESI,[ESP + 0x3c]                ; 0042f5c2
    CMP EAX,ESI                         ; 0042f5c6
    JZ 0x0042f5e2                       ; 0042f5c8
        ;   XREF to: 0042f5e2 (CONDITIONAL_JUMP)  ; LAB_0042f5e2
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042f5ca
    MOV dword ptr [ESP + 0x30],EAX      ; 0042f5ce
    MOV EAX,dword ptr [ESP + 0x40]      ; 0042f5d2
    MOV dword ptr [ESP + 0x34],EAX      ; 0042f5d6
    MOV EAX,dword ptr [ESP + 0x44]      ; 0042f5da
    MOV dword ptr [ESP + 0x38],EAX      ; 0042f5de
    LEA EAX,[ESP + 0x30]                ; 0042f5e2
        ;   Label: LAB_0042f5e2
    PUSH EAX                            ; 0042f5e6
    PUSH 0x7e2af0                       ; 0042f5e7 | DAT_007e2af0
    CALL core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0 ; 0042f5ec
        ;   XREF to: 0045aae0 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_setPosition_FUN_0045aae0(CDemonGlobe * this_ptr, CVector3f * position)
    ADD ESP,0x8                         ; 0042f5f1
    MOV EDI,0xafc8                      ; 0042f5f4
    PUSH 0x40400000                     ; 0042f5f9
    MOV DH,0x2b                         ; 0042f5fe
    PUSH 0x7e2af0                       ; 0042f600 | DAT_007e2af0
    MOV dword ptr [0x007e2b2c],EDI      ; 0042f605 | DAT_007e2b2c
    MOV byte ptr [0x007e2b0c],DH        ; 0042f60b | DAT_007e2b0c
    CALL core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30 ; 0042f611
        ;   XREF to: 0045ab30 (UNCONDITIONAL_CALL)  ; void core_dglobe.cpp_CDemonGlobe_precomputeAttenuation_FUN_0045ab30(CDemonGlobe * this_ptr, float radius)
    ADD ESP,0x8                         ; 0042f616
    PUSH 0x7e2af0                       ; 0042f619 | DAT_007e2af0
    MOV EAX,[0x00603b28]                ; 0042f61e | g_CDemonSetPtr
    XOR EBP,EBP                         ; 0042f623
    PUSH EAX                            ; 0042f625 | g_CDemonSetInstance
    MOV dword ptr [0x007e2b10],EBP      ; 0042f626 | DAT_007e2b10
    MOV EBP,0x1                         ; 0042f62c
    CALL core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0 ; 0042f631
        ;   XREF to: 005372f0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_addCoronaGlobe_FUN_005372f0(CDemonSet * this_ptr, CDemonGlobe * globe)
    ADD ESP,0x8                         ; 0042f636
    PUSH EBX                            ; 0042f639
        ;   Label: LAB_0042f639
    CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0 ; 0042f63a
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_setupRenderState_FUN_004087f0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f63f
    PUSH 0x0                            ; 0042f642
    MOV EAX,dword ptr [EBX + 0x154]     ; 0042f644
    PUSH EBX                            ; 0042f64a
    LEA ESI,[ESP + 0x8]                 ; 0042f64b
    LEA EDI,[ESP + 0x20]                ; 0042f64f
    CALL dword ptr [EAX + 0x1c]         ; 0042f653
    MOV ECX,0x6                         ; 0042f656
    ADD ESP,0x4                         ; 0042f65b
    LEA EAX,[ESP + 0x1c]                ; 0042f65e
    LEA ESI,[ESP + 0x4]                 ; 0042f662
    PUSH EAX                            ; 0042f666
    MOVSD.REP ES:EDI,ESI                ; 0042f667
    CALL core_box.cpp_FUN_0041daf0      ; 0042f669
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0042f66e
    TEST EAX,EAX                        ; 0042f671
    JZ 0x0042f688                       ; 0042f673
        ;   XREF to: 0042f688 (CONDITIONAL_JUMP)  ; LAB_0042f688
    PUSH EBX                            ; 0042f675
    MOV dword ptr [EBX + 0x27bc],0x1    ; 0042f676
    CALL core_charactr.cpp_FUN_0042d8e0 ; 0042f680
        ;   XREF to: 0042d8e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d8e0()
    ADD ESP,0x4                         ; 0042f685
    PUSH EBX                            ; 0042f688
        ;   Label: LAB_0042f688
    CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830 ; 0042f689
        ;   XREF to: 00408830 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408830(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0042f68e
    TEST EBP,EBP                        ; 0042f691
    JZ 0x0042f6a9                       ; 0042f693
        ;   XREF to: 0042f6a9 (CONDITIONAL_JUMP)  ; LAB_0042f6a9
    PUSH 0x7e2af0                       ; 0042f695 | DAT_007e2af0
    MOV EDX,dword ptr [0x00603b28]      ; 0042f69a | g_CDemonSetPtr
    PUSH EDX                            ; 0042f6a0 | g_CDemonSetInstance
    CALL core_set.cpp_FUN_00537320      ; 0042f6a1
        ;   XREF to: 00537320 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_FUN_00537320()
    ADD ESP,0x8                         ; 0042f6a6
    CMP dword ptr [EBX + 0x33a0],0x0    ; 0042f6a9
        ;   Label: LAB_0042f6a9
    JLE 0x0042f6bb                      ; 0042f6b0
        ;   XREF to: 0042f6bb (CONDITIONAL_JUMP)  ; LAB_0042f6bb
    CMP dword ptr [EBX + 0x27bc],0x0    ; 0042f6b2
    JNZ 0x0042f6d9                      ; 0042f6b9
        ;   XREF to: 0042f6d9 (CONDITIONAL_JUMP)  ; LAB_0042f6d9
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0042f6bb
        ;   Label: LAB_0042f6bb
    ADD ESP,0x64                        ; 0042f6c1
    POP EBP                             ; 0042f6c4
    POP EDI                             ; 0042f6c5
    POP ESI                             ; 0042f6c6
    POP EBX                             ; 0042f6c7
    RET                                 ; 0042f6c8
    MOV DL,AH                           ; 0042f6c9
        ;   Label: LAB_0042f6c9
    OR DL,0x1                           ; 0042f6cb
    MOV byte ptr [0x007e2b30],DL        ; 0042f6ce | DAT_007e2b30
    JMP 0x0042f52a                      ; 0042f6d4
        ;   XREF to: 0042f52a (UNCONDITIONAL_JUMP)  ; LAB_0042f52a
    PUSH EBX                            ; 0042f6d9
        ;   Label: LAB_0042f6d9
    CALL core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0 ; 0042f6da
        ;   XREF to: 0042f6f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_renderFlames_FUN_0042f6f0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042f6df
    MOV EAX,dword ptr [EBX + 0x27bc]    ; 0042f6e2
    ADD ESP,0x64                        ; 0042f6e8
    POP EBP                             ; 0042f6eb
    POP EDI                             ; 0042f6ec
    POP ESI                             ; 0042f6ed
    POP EBX                             ; 0042f6ee
    RET                                 ; 0042f6ef

