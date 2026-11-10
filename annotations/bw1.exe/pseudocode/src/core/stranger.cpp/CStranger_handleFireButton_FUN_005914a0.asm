; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_handleFireButton_FUN_005914a0(CStranger *this_ptr,float delta_time)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_stranger.cpp_CStranger_processFrame_FUN_00585b00 at 0058685f
;
; Referenced Globals:
;   void* switchdataD_00591474 = 00591594
;   undefined4 DAT_005f70c1
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590
;   core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005914a0
        ;   Label: core_stranger.cpp_CStranger_handleFireButton_FUN_005914a0
    PUSH ESI                            ; 005914a1
    PUSH EDI                            ; 005914a2
    PUSH EBP                            ; 005914a3
    SUB ESP,0x4                         ; 005914a4
    MOV EBX,dword ptr [ESP + 0x18]      ; 005914a7
    MOV EDX,dword ptr [EBX + 0xc1e4]    ; 005914ab
    MOV dword ptr [EBX + 0x2000c],0x0   ; 005914b1
    TEST EDX,EDX                        ; 005914bb
    JZ 0x005915f7                       ; 005914bd
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    CMP dword ptr [EBX + 0x26fc],0x0    ; 005914c3
    JNZ 0x005915f7                      ; 005914ca
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    CMP dword ptr [EBX + 0x1ff5c],0x0   ; 005914d0
    JNZ 0x005915f7                      ; 005914d7
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    CMP dword ptr [EBX + 0x1ffac],0x0   ; 005914dd
    JZ 0x005915f7                       ; 005914e4
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    MOV EAX,dword ptr [EBX + 0x20004]   ; 005914ea
    TEST EAX,EAX                        ; 005914f0
    JNZ 0x005915ff                      ; 005914f2
        ;   XREF to: 005915ff (CONDITIONAL_JUMP)  ; LAB_005915ff
    MOV EAX,dword ptr [EBX + 0x2628]    ; 005914f8
    TEST EAX,EAX                        ; 005914fe
        ;   Label: LAB_005914fe
    JNZ 0x00591611                      ; 00591500
        ;   XREF to: 00591611 (CONDITIONAL_JUMP)  ; LAB_00591611
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00591506
        ;   Label: LAB_00591506
    TEST EAX,EAX                        ; 0059150c
    JZ 0x005915f7                       ; 0059150e
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    MOV EDX,dword ptr [EAX + 0x2e0]     ; 00591514
    CMP EDX,0x3                         ; 0059151a
    JZ 0x005915f7                       ; 0059151d
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    CMP dword ptr [EBX + 0x1fae4],0x0   ; 00591523
    JNZ 0x00591570                      ; 0059152a
        ;   XREF to: 00591570 (CONDITIONAL_JUMP)  ; LAB_00591570
    TEST EDX,EDX                        ; 0059152c
    JNZ 0x00591570                      ; 0059152e
        ;   XREF to: 00591570 (CONDITIONAL_JUMP)  ; LAB_00591570
    LEA ECX,[EBX + 0x1ffc0]             ; 00591530
    MOV EDI,dword ptr [EBX + 0x20008]   ; 00591536
    LEA EAX,[EBX + 0x1ffe0]             ; 0059153c
    TEST EDI,EDI                        ; 00591542
    JZ 0x005916ae                       ; 00591544
        ;   XREF to: 005916ae (CONDITIONAL_JUMP)  ; LAB_005916ae
    MOV EDX,EAX                         ; 0059154a
    MOV EAX,ECX                         ; 0059154c
    MOV EBP,dword ptr [EAX + 0x1c]      ; 0059154e
        ;   Label: LAB_0059154e
    CMP EBP,0x2                         ; 00591551
    JNZ 0x00591570                      ; 00591554
        ;   XREF to: 00591570 (CONDITIONAL_JUMP)  ; LAB_00591570
    CMP EBP,dword ptr [EDX + 0x1c]      ; 00591556
    JZ 0x00591570                       ; 00591559
        ;   XREF to: 00591570 (CONDITIONAL_JUMP)  ; LAB_00591570
    CMP dword ptr [EBX + 0x20008],0x0   ; 0059155b
    SETZ AL                             ; 00591562
    AND EAX,0xff                        ; 00591565
    MOV dword ptr [EBX + 0x20008],EAX   ; 0059156a
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00591570
        ;   Label: LAB_00591570
    TEST EAX,EAX                        ; 00591576
    JZ 0x005916e7                       ; 00591578
        ;   XREF to: 005916e7 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EAX + 0x2e0]     ; 0059157e
    CMP EAX,0xa                         ; 00591584
    JA 0x005916e7                       ; 00591587
        ;   XREF to: 005916e7 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x591474]  ; 0059158d | caseD_5 | caseD_1 | caseD_2
        ;   Label: switchD
    MOV EAX,0x2                         ; 00591594
        ;   Label: caseD_0
    PUSH EAX                            ; 00591599
        ;   Label: LAB_00591599
    PUSH EBX                            ; 0059159a
    CALL core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590 ; 0059159b
        ;   XREF to: 00434590 (UNCONDITIONAL_CALL)  ; float core_charactr.cpp_CCharacter_getLayerActionBlendWeight_FUN_00434590(CCharacter * this_ptr, int state_index)
    MOV dword ptr [ESP + 0x8],EAX       ; 005915a0
    FLD float ptr [ESP + 0x8]           ; 005915a4
    ADD ESP,0x8                         ; 005915a8
    FCOMP double ptr [0x005f70c1]       ; 005915ab | DAT_005f70c1
    FNSTSW AX                           ; 005915b1
    SAHF                                ; 005915b3
    JC 0x005915f7                       ; 005915b4
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    MOV ECX,dword ptr [EBX + 0x20008]   ; 005915b6
    LEA EDX,[EBX + 0x1ffc0]             ; 005915bc
    TEST ECX,ECX                        ; 005915c2
    JZ 0x005915db                       ; 005915c4
        ;   XREF to: 005915db (CONDITIONAL_JUMP)  ; LAB_005915db
    MOV EAX,dword ptr [EBX + 0x20004]   ; 005915c6
    CMP dword ptr [EAX + 0x2e0],0x0     ; 005915cc
    JNZ 0x005915db                      ; 005915d3
        ;   XREF to: 005915db (CONDITIONAL_JUMP)  ; LAB_005915db
    LEA EDX,[EBX + 0x1ffe0]             ; 005915d5
    FLD float ptr [EDX + 0x14]          ; 005915db
        ;   Label: LAB_005915db
    FLD1                                ; 005915de
    FCOMPP                              ; 005915e0
    FNSTSW AX                           ; 005915e2
    SAHF                                ; 005915e4
    JA 0x005915f7                       ; 005915e5
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    FLD float ptr [EDX + 0x10]          ; 005915e7
    FLDZ                                ; 005915ea
    FCOMPP                              ; 005915ec
    FNSTSW AX                           ; 005915ee
    SAHF                                ; 005915f0
    JNC 0x005916ee                      ; 005915f1
        ;   XREF to: 005916ee (CONDITIONAL_JUMP)  ; LAB_005916ee
    ADD ESP,0x4                         ; 005915f7
        ;   Label: LAB_005915f7
    POP EBP                             ; 005915fa
    POP EDI                             ; 005915fb
    POP ESI                             ; 005915fc
    POP EBX                             ; 005915fd
    RET                                 ; 005915fe
    CMP dword ptr [EAX + 0x2e0],0x7     ; 005915ff
        ;   Label: LAB_005915ff
    JZ 0x005914fe                       ; 00591606
        ;   XREF to: 005914fe (CONDITIONAL_JUMP)  ; LAB_005914fe
    JMP 0x00591506                      ; 0059160c
        ;   XREF to: 00591506 (UNCONDITIONAL_JUMP)  ; LAB_00591506
    PUSH EAX                            ; 00591611
        ;   Label: LAB_00591611
    MOV EDX,dword ptr [EAX + 0x154]     ; 00591612
    CALL dword ptr [EDX + 0x74]         ; 00591618
    ADD ESP,0x4                         ; 0059161b
    MOV ESI,EAX                         ; 0059161e
    TEST EAX,EAX                        ; 00591620
    JZ 0x00591506                       ; 00591622
        ;   XREF to: 00591506 (CONDITIONAL_JUMP)  ; LAB_00591506
    XOR ECX,ECX                         ; 00591628
    XOR EDI,EDI                         ; 0059162a
    MOV EBP,dword ptr [EBX + 0x20010]   ; 0059162c
        ;   Label: LAB_0059162c
    INC EBP                             ; 00591632
    MOV dword ptr [EBX + 0x20010],EBP   ; 00591633
    CMP EDI,EBP                         ; 00591639
    JLE 0x00591665                      ; 0059163b
        ;   XREF to: 00591665 (CONDITIONAL_JUMP)  ; LAB_00591665
    MOV dword ptr [EBX + 0x20010],EDI   ; 0059163d
        ;   Label: LAB_0059163d
    MOV EDX,dword ptr [EBX + 0x20010]   ; 00591643
        ;   Label: LAB_00591643
    ADD EDX,0xc                         ; 00591649
    MOV EAX,EDI                         ; 0059164c
    CMP EDX,0xc                         ; 0059164e
    JNC 0x0059167a                      ; 00591651
        ;   XREF to: 0059167a (CONDITIONAL_JUMP)  ; LAB_0059167a
    TEST EAX,ESI                        ; 00591653
        ;   Label: LAB_00591653
    JNZ 0x00591683                      ; 00591655
        ;   XREF to: 00591683 (CONDITIONAL_JUMP)  ; LAB_00591683
    INC ECX                             ; 00591657
    CMP ECX,0x14                        ; 00591658
    JL 0x0059162c                       ; 0059165b
        ;   XREF to: 0059162c (CONDITIONAL_JUMP)  ; LAB_0059162c
    ADD ESP,0x4                         ; 0059165d
    POP EBP                             ; 00591660
    POP EDI                             ; 00591661
    POP ESI                             ; 00591662
    POP EBX                             ; 00591663
    RET                                 ; 00591664
    CMP EBP,0x2                         ; 00591665
        ;   Label: LAB_00591665
    JL 0x00591643                       ; 00591668
        ;   XREF to: 00591643 (CONDITIONAL_JUMP)  ; LAB_00591643
    JMP 0x0059163d                      ; 0059166a
        ;   XREF to: 0059163d (UNCONDITIONAL_JUMP)  ; LAB_0059163d
    MOV EAX,0x1                         ; 0059166c
        ;   Label: LAB_0059166c
    JMP 0x00591653                      ; 00591671
        ;   XREF to: 00591653 (UNCONDITIONAL_JUMP)  ; LAB_00591653
    MOV EAX,0x2                         ; 00591673
        ;   Label: LAB_00591673
    JMP 0x00591653                      ; 00591678
        ;   XREF to: 00591653 (UNCONDITIONAL_JUMP)  ; LAB_00591653
    JBE 0x0059166c                      ; 0059167a
        ;   XREF to: 0059166c (CONDITIONAL_JUMP)  ; LAB_0059166c
        ;   Label: LAB_0059167a
    CMP EDX,0xd                         ; 0059167c
    JZ 0x00591673                       ; 0059167f
        ;   XREF to: 00591673 (CONDITIONAL_JUMP)  ; LAB_00591673
    JMP 0x00591653                      ; 00591681
        ;   XREF to: 00591653 (UNCONDITIONAL_JUMP)  ; LAB_00591653
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00591683
        ;   Label: LAB_00591683
    MOV EAX,dword ptr [EBX + 0x20010]   ; 0059168d
    MOV dword ptr [EBX + 0x1ff5c],0x7   ; 00591693
    ADD EAX,0xc                         ; 0059169d
    MOV dword ptr [EBX + 0x2c98],EAX    ; 005916a0
    ADD ESP,0x4                         ; 005916a6
    POP EBP                             ; 005916a9
    POP EDI                             ; 005916aa
    POP ESI                             ; 005916ab
    POP EBX                             ; 005916ac
    RET                                 ; 005916ad
    MOV EDX,ECX                         ; 005916ae
        ;   Label: LAB_005916ae
    JMP 0x0059154e                      ; 005916b0
        ;   XREF to: 0059154e (UNCONDITIONAL_JUMP)  ; LAB_0059154e
    MOV EAX,0x4                         ; 005916b5
        ;   Label: caseD_1
    JMP 0x00591599                      ; 005916ba
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    MOV EAX,0xe                         ; 005916bf
        ;   Label: caseD_9
    JMP 0x00591599                      ; 005916c4
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    MOV EAX,0x7                         ; 005916c9
        ;   Label: caseD_4
    JMP 0x00591599                      ; 005916ce
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    MOV EAX,0x5                         ; 005916d3
        ;   Label: caseD_2
    JMP 0x00591599                      ; 005916d8
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    MOV EAX,0x8                         ; 005916dd
        ;   Label: caseD_7
    JMP 0x00591599                      ; 005916e2
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    XOR EAX,EAX                         ; 005916e7
        ;   Label: caseD_3
    JMP 0x00591599                      ; 005916e9
        ;   XREF to: 00591599 (UNCONDITIONAL_JUMP)  ; LAB_00591599
    MOV EAX,dword ptr [EBX + 0x20004]   ; 005916ee
        ;   Label: LAB_005916ee
    PUSH EAX                            ; 005916f4
    MOV EDX,dword ptr [EAX + 0x154]     ; 005916f5
    CALL dword ptr [EDX + 0xe8]         ; 005916fb
    ADD ESP,0x4                         ; 00591701
    TEST EAX,EAX                        ; 00591704
    JZ 0x005915f7                       ; 00591706
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0059170c
    CMP dword ptr [EAX + 0x2e0],0x0     ; 00591712
    JZ 0x00591785                       ; 00591719
        ;   XREF to: 00591785 (CONDITIONAL_JUMP)  ; LAB_00591785
    MOV EAX,dword ptr [EBX + 0x20004]   ; 0059171b
        ;   Label: LAB_0059171b
    MOV dword ptr [EBX + 0x2000c],0x0   ; 00591721
    PUSH EAX                            ; 0059172b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059172c
    CALL dword ptr [EDX + 0xe4]         ; 00591732
    ADD ESP,0x4                         ; 00591738
    TEST EAX,EAX                        ; 0059173b
    JZ 0x00591749                       ; 0059173d
        ;   XREF to: 00591749 (CONDITIONAL_JUMP)  ; LAB_00591749
    MOV dword ptr [EBX + 0x2000c],0x1   ; 0059173f
    PUSH 0x0                            ; 00591749
        ;   Label: LAB_00591749
    PUSH EBX                            ; 0059174b
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 0059174c
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    MOV EAX,dword ptr [EBX + 0x20004]   ; 00591751
    MOV ECX,dword ptr [EAX + 0x2dc]     ; 00591757
    ADD ESP,0x8                         ; 0059175d
    CMP ECX,0x2                         ; 00591760
    JNZ 0x005915f7                      ; 00591763
        ;   XREF to: 005915f7 (CONDITIONAL_JUMP)  ; LAB_005915f7
    MOV dword ptr [EBX + 0x2c9c],0x0    ; 00591769
    MOV dword ptr [EBX + 0x2c98],0x8    ; 00591773
    ADD ESP,0x4                         ; 0059177d
    POP EBP                             ; 00591780
    POP EDI                             ; 00591781
    POP ESI                             ; 00591782
    POP EBX                             ; 00591783
    RET                                 ; 00591784
    MOV EBP,dword ptr [EBX + 0x20008]   ; 00591785
        ;   Label: LAB_00591785
    PUSH EBP                            ; 0059178b
    PUSH EBX                            ; 0059178c
    CALL core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0 ; 0059178d
        ;   XREF to: 0058aeb0 (UNCONDITIONAL_CALL)  ; void core_stranger.cpp_CStranger_updateWeaponPosition_FUN_0058aeb0(CStranger * this_ptr, int hand_index)
    MOV EDX,dword ptr [EBX + 0x20008]   ; 00591792
    ADD ESP,0x8                         ; 00591798
    TEST EDX,EDX                        ; 0059179b
    SETZ AL                             ; 0059179d
    AND EAX,0xff                        ; 005917a0
    MOV dword ptr [EBX + 0x20008],EAX   ; 005917a5
    JMP 0x0059171b                      ; 005917ab
        ;   XREF to: 0059171b (UNCONDITIONAL_JUMP)  ; LAB_0059171b

