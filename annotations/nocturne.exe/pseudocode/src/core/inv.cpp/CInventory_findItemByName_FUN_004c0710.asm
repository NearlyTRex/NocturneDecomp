; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_inv_cpp_CInventory_findItemByName_FUN_004c0710(int param_1,undefined4 param_2)
;
;
; XREF[4]:
;   FUN_0054dd50 at 0054defe
;   core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0 at 0047e9d6
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a10de
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 00502ef0
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c0710
        ;   Label: core_inv.cpp_CInventory_findItemByName_FUN_004c0710
    PUSH ESI                            ; 004c0711
    PUSH EDI                            ; 004c0712
    PUSH EBP                            ; 004c0713
    MOV EDI,dword ptr [ESP + 0x14]      ; 004c0714
    MOV EBP,dword ptr [ESP + 0x18]      ; 004c0718
    MOV EDX,dword ptr [EDI + 0x8]       ; 004c071c
    XOR ESI,ESI                         ; 004c071f
    TEST EDX,EDX                        ; 004c0721
    JLE 0x004c0743                      ; 004c0723
        ;   XREF to: 004c0743 (CONDITIONAL_JUMP)  ; LAB_004c0743
    MOV EBX,EDI                         ; 004c0725
    PUSH EBP                            ; 004c0727
        ;   Label: LAB_004c0727
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c0728
    PUSH EAX                            ; 004c072b
    CALL crt_string.c__stricmp_FUN_00564520 ; 004c072c
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 004c0731
    TEST EAX,EAX                        ; 004c0734
    JZ 0x004c074a                       ; 004c0736
        ;   XREF to: 004c074a (CONDITIONAL_JUMP)  ; LAB_004c074a
    INC ESI                             ; 004c0738
    MOV ECX,dword ptr [EDI + 0x8]       ; 004c0739
    ADD EBX,0x4                         ; 004c073c
    CMP ESI,ECX                         ; 004c073f
    JL 0x004c0727                       ; 004c0741
        ;   XREF to: 004c0727 (CONDITIONAL_JUMP)  ; LAB_004c0727
    XOR EAX,EAX                         ; 004c0743
        ;   Label: LAB_004c0743
    POP EBP                             ; 004c0745
    POP EDI                             ; 004c0746
    POP ESI                             ; 004c0747
    POP EBX                             ; 004c0748
    RET                                 ; 004c0749
    MOV EAX,dword ptr [EBX + 0xc]       ; 004c074a
        ;   Label: LAB_004c074a
    POP EBP                             ; 004c074d
    POP EDI                             ; 004c074e
    POP ESI                             ; 004c074f
    POP EBX                             ; 004c0750
    RET                                 ; 004c0751

