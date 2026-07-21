; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_gore_cpp_CGore_spawnFlies_FUN_004b0580(undefined4 param_1,undefined4 *param_2,undefined4 param_3,float param_4,undefined4 *param_5)
;
;
; XREF[1]:
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004b0670 at 004b068d
;
; Referenced Globals:
;   undefined4 s_..\\core\\gore.cpp_00585197+1
;   string s_Can't_create_flies!_005851a9
;   undefined4 DAT_005851c0
;   undefined4 DAT_005baf90
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;   undefined4 DAT_01cc9450
;
; Called Functions:
;   core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60
;   core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720
;   FUN_0048eef0
;   FUN_004c8440
;   FUN_0056497c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b0580
        ;   Label: core_gore.cpp_CGore_spawnFlies_FUN_004b0580
    PUSH ESI                            ; 004b0581
    PUSH EDI                            ; 004b0582
    MOV EDI,dword ptr [ESP + 0x14]      ; 004b0583
    MOV ESI,dword ptr [ESP + 0x20]      ; 004b0587
    PUSH 0x2a18                         ; 004b058b
    CALL FUN_0056497c                   ; 004b0590
        ;   XREF to: 0056497c (UNCONDITIONAL_CALL)  ; undefined FUN_0056497c()
    ADD ESP,0x4                         ; 004b0595
    TEST EAX,EAX                        ; 004b0598
    JNZ 0x004b065a                      ; 004b059a
        ;   XREF to: 004b065a (CONDITIONAL_JUMP)  ; LAB_004b065a
    MOV EBX,EAX                         ; 004b05a0
        ;   Label: LAB_004b05a0
    TEST EAX,EAX                        ; 004b05a2
    JNZ 0x004b05c9                      ; 004b05a4
        ;   XREF to: 004b05c9 (CONDITIONAL_JUMP)  ; LAB_004b05c9
    MOV EDX,0x585198                    ; 004b05a6 | s_..\core\gore.cpp_00585197+1
    MOV ECX,0x675                       ; 004b05ab
    PUSH 0x5851a9                       ; 004b05b0 | = "Can't create flies!"
    MOV dword ptr [0x01cc4800],EDX      ; 004b05b5 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 004b05bb | DAT_01cc4804
    CALL FUN_004c8440                   ; 004b05c1
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004b05c6
    FLD float ptr [ESP + 0x1c]          ; 004b05c9
        ;   Label: LAB_004b05c9
    FDIVR double ptr [0x005851c0]       ; 004b05cd | DAT_005851c0
    LEA EAX,[EBX + 0x20]                ; 004b05d3
    MOV EDX,dword ptr [EDI]             ; 004b05d6
    MOV dword ptr [EAX],EDX             ; 004b05d8
    MOV EDX,dword ptr [EDI + 0x4]       ; 004b05da
    MOV dword ptr [EAX + 0x4],EDX       ; 004b05dd
    MOV EDX,dword ptr [EDI + 0x8]       ; 004b05e0
    MOV dword ptr [EAX + 0x8],EDX       ; 004b05e3
    MOV EAX,[0x005baf90]                ; 004b05e6 | DAT_005baf90
    MOV EAX,dword ptr [EAX]             ; 004b05eb | DAT_01cc9450
    MOV dword ptr [EBX + 0x15c],0x0     ; 004b05ed
    MOV dword ptr [EBX + 0x2c],EAX      ; 004b05f7
    MOV EAX,dword ptr [ESP + 0x18]      ; 004b05fa
    MOV dword ptr [EBX + 0x2a04],EAX    ; 004b05fe
    FSTP float ptr [EBX + 0x2a0c]       ; 004b0604
    TEST ESI,ESI                        ; 004b060a
    JZ 0x004b0628                       ; 004b060c
        ;   XREF to: 004b0628 (CONDITIONAL_JUMP)  ; LAB_004b0628
    LEA EAX,[EBX + 0x150]               ; 004b060e
    CMP EAX,ESI                         ; 004b0614
    JZ 0x004b0628                       ; 004b0616
        ;   XREF to: 004b0628 (CONDITIONAL_JUMP)  ; LAB_004b0628
    MOV EDX,dword ptr [ESI]             ; 004b0618
    MOV dword ptr [EAX],EDX             ; 004b061a
    MOV EDX,dword ptr [ESI + 0x4]       ; 004b061c
    MOV dword ptr [EAX + 0x4],EDX       ; 004b061f
    MOV EDX,dword ptr [ESI + 0x8]       ; 004b0622
    MOV dword ptr [EAX + 0x8],EDX       ; 004b0625
    PUSH EBX                            ; 004b0628
        ;   Label: LAB_004b0628
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004b0629
    CALL dword ptr [EAX]                ; 004b062f
    ADD ESP,0x4                         ; 004b0631
    PUSH EBX                            ; 004b0634
    MOV ESI,dword ptr [0x005baf90]      ; 004b0635 | DAT_005baf90
    PUSH ESI                            ; 004b063b | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720 ; 004b063c
        ;   XREF to: 004d9720 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_generateActorName_FUN_004d9720()
    ADD ESP,0x8                         ; 004b0641
    PUSH EBX                            ; 004b0644
    MOV EDI,dword ptr [0x005baf90]      ; 004b0645 | DAT_005baf90
    PUSH EDI                            ; 004b064b | DAT_01cc9450
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60 ; 004b064c
        ;   XREF to: 004d8c60 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_CDemonMission_addActorToList_FUN_004d8c60()
    ADD ESP,0x8                         ; 004b0651
    MOV EAX,EBX                         ; 004b0654
    POP EDI                             ; 004b0656
    POP ESI                             ; 004b0657
    POP EBX                             ; 004b0658
    RET                                 ; 004b0659
    PUSH EAX                            ; 004b065a
        ;   Label: LAB_004b065a
    CALL FUN_0048eef0                   ; 004b065b
        ;   XREF to: 0048eef0 (UNCONDITIONAL_CALL)  ; undefined FUN_0048eef0()
    ADD ESP,0x4                         ; 004b0660
    JMP 0x004b05a0                      ; 004b0663
        ;   XREF to: 004b05a0 (UNCONDITIONAL_JUMP)  ; LAB_004b05a0

