; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00479560(undefined4 param_1)
;
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[26]:
;   FUN_00412100 at 00412106
;   FUN_00415050 at 00415056
;   FUN_00418630 at 0041863b
;   FUN_0041fbb0 at 0041fbb6
;   FUN_0043bbe0 at 0043bbe6
;   FUN_00454660 at 00454666
;   FUN_004bb760 at 004bb766
;   FUN_00505920 at 00505926
;   FUN_00540b40 at 00540b48
;   FUN_00543b60 at 00543b66
;   ... and 16 more
;
; Referenced Globals:
;   undefined1 DAT_0057f2be
;   undefined1 DAT_0057f2bf
;   undefined1 DAT_0057f2c0
;   undefined1 DAT_0057f2c1
;   void* PTR_core_enemy.cpp_CEnemy_setup_FUN_004796b0_0059cdb4 = 004796b0
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_charactr.cpp_CCharacter_ctor_FUN_00423f40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00479560
        ;   Label: core_enemy.cpp_CEnemy_ctor_FUN_00479560
    PUSH ESI                            ; 00479561
    PUSH EDI                            ; 00479562
    SUB ESP,0x4                         ; 00479563
    MOV EDX,dword ptr [ESP + 0x14]      ; 00479566
    PUSH EDX                            ; 0047956a
    CALL core_charactr.cpp_CCharacter_ctor_FUN_00423f40 ; 0047956b
        ;   XREF to: 00423f40 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_ctor_FUN_00423f40()
    ADD ESP,0x4                         ; 00479570
    PUSH 0x3f8ccccd                     ; 00479573
    MOV EBX,EAX                         ; 00479578
    PUSH 0x3f666666                     ; 0047957a
    MOV dword ptr [EAX + 0x14c],0x59cdb4 ; 0047957f | PTR_core_enemy.cpp_CEnemy_setup_FUN_004796b0_0059cdb4
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0 ; 00479589
        ;   XREF to: 0040dda0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomFloatFromRange_FUN_0040dda0()
    MOV dword ptr [EBX + 0xbc90],0x0    ; 0047958e
    MOV dword ptr [EBX + 0xbd14],0x0    ; 00479598
    MOV dword ptr [EBX + 0xbca4],0x0    ; 004795a2
    MOV dword ptr [EBX + 0xbca8],0x0    ; 004795ac
    MOV dword ptr [EBX + 0xbcac],0x42480000 ; 004795b6
    MOV dword ptr [EBX + 0xbc94],0x1    ; 004795c0
    MOV dword ptr [EBX + 0xbd1c],0x0    ; 004795ca
    MOV dword ptr [EBX + 0xbc98],0x0    ; 004795d4
    MOV byte ptr [EBX + 0xbcb0],0x0     ; 004795de
    MOV dword ptr [EBX + 0xbc9c],0x42c80000 ; 004795e5
    MOV dword ptr [ESP + 0x8],EAX       ; 004795ef
    MOV dword ptr [EBX + 0xbca0],0x0    ; 004795f3
    FLD float ptr [ESP + 0x8]           ; 004795fd
    ADD ESP,0x8                         ; 00479601
    MOV dword ptr [EBX + 0xbd18],0x40c00000 ; 00479604
    PUSH 0x1fff                         ; 0047960e
    MOV dword ptr [EBX + 0xbd20],0x1    ; 00479613
    PUSH 0xffffe001                     ; 0047961d
    FSTP float ptr [EBX + 0xbc8c]       ; 00479622
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479628
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0047962d
    PUSH 0x1fff                         ; 00479630
    ADD EAX,0x10000                     ; 00479635
    PUSH 0xffffe001                     ; 0047963a
    MOV dword ptr [EBX + 0x108],EAX     ; 0047963f
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479645
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0047964a
    PUSH 0x1fff                         ; 0047964d
    ADD EAX,0x10000                     ; 00479652
    PUSH 0xffffe001                     ; 00479657
    MOV ESI,0x57f2be                    ; 0047965c | DAT_0057f2be
    MOV dword ptr [EBX + 0x10c],EAX     ; 00479661
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 00479667
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getRandomInt_FUN_0040de00()
    ADD ESP,0x8                         ; 0047966c
    ADD EAX,0x10000                     ; 0047966f
    LEA EDI,[EBX + 0x11c]               ; 00479674
    MOV dword ptr [EBX + 0x110],EAX     ; 0047967a
    PUSH EDI                            ; 00479680
    MOV AL,byte ptr [ESI]               ; 00479681 | DAT_0057f2be | DAT_0057f2c0
        ;   Label: LAB_00479681
    MOV byte ptr [EDI],AL               ; 00479683
    CMP AL,0x0                          ; 00479685
    JZ 0x00479699                       ; 00479687
        ;   XREF to: 00479699 (CONDITIONAL_JUMP)  ; LAB_00479699
    MOV AL,byte ptr [ESI + 0x1]         ; 00479689 | DAT_0057f2bf | DAT_0057f2c1
    ADD ESI,0x2                         ; 0047968c
    MOV byte ptr [EDI + 0x1],AL         ; 0047968f
    ADD EDI,0x2                         ; 00479692
    CMP AL,0x0                          ; 00479695
    JNZ 0x00479681                      ; 00479697
        ;   XREF to: 00479681 (CONDITIONAL_JUMP)  ; LAB_00479681
    POP EDI                             ; 00479699
        ;   Label: LAB_00479699
    MOV EAX,EBX                         ; 0047969a
    ADD ESP,0x4                         ; 0047969c
    POP EDI                             ; 0047969f
    POP ESI                             ; 004796a0
    POP EBX                             ; 004796a1
    RET                                 ; 004796a2

