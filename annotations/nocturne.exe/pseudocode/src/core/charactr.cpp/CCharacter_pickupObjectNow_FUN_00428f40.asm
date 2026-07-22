; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(int param_1,int param_2,int param_3,undefined4 param_4)
;
;
; XREF[8]:
;   FUN_00418a00 at 00418dc5
;   FUN_004da790 at 004daa4e
;   FUN_0053f310 at 0053f5b6
;   FUN_0054dd50 at 0054df2f
;   core_hero.cpp_CHero_executeObjectPickup_FUN_004b5c30 at 004b5c4e
;   core_icepick.cpp_CIcePick_processMotionEvents_FUN_004bb2d0 at 004bb38c
;   core_vehicle.cpp_CVehicle_process_FUN_0054eae0 at 0054f1c8
;   core_zombie.cpp_FUN_0055ef50 at 0055f427
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_0057a14a
;   string s_CCharacter::pickupObjectNow_-_in_0057a15f
;   string s_..\\core\\charactr.cpp_0057a190
;   string s_CCharacter::pickupObjectNow_-_in_0057a1a5
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computePickup_FUN_00429010
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428f40
        ;   Label: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428f40
    PUSH ESI                            ; 00428f41
    PUSH EDI                            ; 00428f42
    PUSH EBP                            ; 00428f43
    MOV EBX,dword ptr [ESP + 0x14]      ; 00428f44
    MOV EDI,dword ptr [ESP + 0x18]      ; 00428f48
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00428f4c
    TEST EDI,EDI                        ; 00428f50
    JL 0x00428f59                       ; 00428f52
        ;   XREF to: 00428f59 (CONDITIONAL_JUMP)  ; LAB_00428f59
    CMP EDI,0x2                         ; 00428f54
    JL 0x00428f7c                       ; 00428f57
        ;   XREF to: 00428f7c (CONDITIONAL_JUMP)  ; LAB_00428f7c
    MOV EDX,0x57a14a                    ; 00428f59 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_00428f59
    MOV ECX,0xbe7                       ; 00428f5e
    PUSH 0x57a15f                       ; 00428f63 | = "CCharacter::pickupObjectNow - invalid..."
    MOV dword ptr [0x01cc4800],EDX      ; 00428f68 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 00428f6e | DAT_01cc4804
    CALL FUN_004c8440                   ; 00428f74
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00428f79
    TEST EBP,EBP                        ; 00428f7c
        ;   Label: LAB_00428f7c
    JNZ 0x00428f85                      ; 00428f7e
        ;   XREF to: 00428f85 (CONDITIONAL_JUMP)  ; LAB_00428f85
    POP EBP                             ; 00428f80
        ;   Label: LAB_00428f80
    POP EDI                             ; 00428f81
    POP ESI                             ; 00428f82
    POP EBX                             ; 00428f83
    RET                                 ; 00428f84
    PUSH 0x0                            ; 00428f85
        ;   Label: LAB_00428f85
    PUSH EDI                            ; 00428f87
    MOV EAX,dword ptr [EBX + 0x14c]     ; 00428f88
    PUSH EBX                            ; 00428f8e
    CALL dword ptr [EAX + 0x120]        ; 00428f8f
    MOV EAX,EDI                         ; 00428f95
    SHL EAX,0x4                         ; 00428f97
    ADD EAX,EDI                         ; 00428f9a
    LEA ESI,[EBX + 0x24a4]              ; 00428f9c
    SHL EAX,0x2                         ; 00428fa2
    ADD ESI,EAX                         ; 00428fa5
    MOV EAX,dword ptr [ESI + 0x4]       ; 00428fa7
    ADD ESP,0xc                         ; 00428faa
    TEST EAX,EAX                        ; 00428fad
    JL 0x00428fbb                       ; 00428faf
        ;   XREF to: 00428fbb (CONDITIONAL_JUMP)  ; LAB_00428fbb
    CMP dword ptr [EBX + EAX*0x4 + 0x2290],0x0 ; 00428fb1
    JZ 0x00428f80                       ; 00428fb9
        ;   XREF to: 00428f80 (CONDITIONAL_JUMP)  ; LAB_00428f80
    CMP dword ptr [ESI],0x0             ; 00428fbb
        ;   Label: LAB_00428fbb
    JGE 0x00428fe2                      ; 00428fbe
        ;   XREF to: 00428fe2 (CONDITIONAL_JUMP)  ; LAB_00428fe2
    MOV EAX,0x57a190                    ; 00428fc0 | = "..\\core\\charactr.cpp"
    MOV EDX,0xbff                       ; 00428fc5
    PUSH 0x57a1a5                       ; 00428fca | = "CCharacter::pickupObjectNow - invalid..."
    MOV [0x01cc4800],EAX                ; 00428fcf | DAT_01cc4800
    MOV dword ptr [0x01cc4804],EDX      ; 00428fd4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 00428fda
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00428fdf
    PUSH EBX                            ; 00428fe2
        ;   Label: LAB_00428fe2
    MOV EAX,dword ptr [EBP + 0x14c]     ; 00428fe3
    PUSH EBP                            ; 00428fe9
    CALL dword ptr [EAX + 0x80]         ; 00428fea
    ADD ESP,0x8                         ; 00428ff0
    PUSH dword ptr [ESP + 0x20]         ; 00428ff3
    PUSH EDI                            ; 00428ff7
    PUSH EBX                            ; 00428ff8
    MOV dword ptr [ESI + 0x8],EBP       ; 00428ff9
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_00429010 ; 00428ffc
        ;   XREF to: 00429010 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_computePickup_FUN_00429010()
    ADD ESP,0xc                         ; 00429001
    POP EBP                             ; 00429004
    POP EDI                             ; 00429005
    POP ESI                             ; 00429006
    POP EBX                             ; 00429007
    RET                                 ; 00429008

