; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_set_cpp_CDemonSet_findCameraByName_FUN_005090a0(int *param_1,undefined4 param_2)
;
;
; XREF[3]:
;   core_event.cpp_CEventList_executeCommand_FUN_0047ac50 at 0047c6b3
;   core_platfrm.cpp_FUN_004f6170 at 004f626f
;   core_script.cpp_CScript_step_FUN_004ff2c0 at 005016a9
;
; Called Functions:
;   crt_string.c__stricmp_FUN_00564520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005090a0
        ;   Label: core_set.cpp_CDemonSet_findCameraByName_FUN_005090a0
    PUSH ESI                            ; 005090a1
    PUSH EDI                            ; 005090a2
    PUSH EBP                            ; 005090a3
    MOV EDI,dword ptr [ESP + 0x14]      ; 005090a4
    MOV EBP,dword ptr [ESP + 0x18]      ; 005090a8
    MOV EDX,dword ptr [EDI]             ; 005090ac
    XOR EBX,EBX                         ; 005090ae
    TEST EDX,EDX                        ; 005090b0
    JLE 0x005090d2                      ; 005090b2
        ;   XREF to: 005090d2 (CONDITIONAL_JUMP)  ; LAB_005090d2
    LEA ESI,[EDI + 0x4]                 ; 005090b4
    PUSH EBP                            ; 005090b7
        ;   Label: LAB_005090b7
    PUSH ESI                            ; 005090b8
    CALL crt_string.c__stricmp_FUN_00564520 ; 005090b9
        ;   XREF to: 00564520 (UNCONDITIONAL_CALL)  ; undefined crt_string.c__stricmp_FUN_00564520()
    ADD ESP,0x8                         ; 005090be
    TEST EAX,EAX                        ; 005090c1
    JZ 0x005090dc                       ; 005090c3
        ;   XREF to: 005090dc (CONDITIONAL_JUMP)  ; LAB_005090dc
    INC EBX                             ; 005090c5
    MOV ECX,dword ptr [EDI]             ; 005090c6
    ADD ESI,0x1a0                       ; 005090c8
    CMP EBX,ECX                         ; 005090ce
    JL 0x005090b7                       ; 005090d0
        ;   XREF to: 005090b7 (CONDITIONAL_JUMP)  ; LAB_005090b7
    MOV EAX,0xffffffff                  ; 005090d2
        ;   Label: LAB_005090d2
    POP EBP                             ; 005090d7
    POP EDI                             ; 005090d8
    POP ESI                             ; 005090d9
    POP EBX                             ; 005090da
    RET                                 ; 005090db
    MOV EAX,EBX                         ; 005090dc
        ;   Label: LAB_005090dc
    POP EBP                             ; 005090de
    POP EDI                             ; 005090df
    POP ESI                             ; 005090e0
    POP EBX                             ; 005090e1
    RET                                 ; 005090e2

