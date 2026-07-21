; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_ammo_cpp_CAmmo_ctor_FUN_0040eb70(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_0040f1a0 at 0040f1f5
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a1b25
;
; Referenced Globals:
;   string s_bullet.kfm_005781eb
;   undefined1 DAT_005781f6
;   undefined1 DAT_005781f7
;   undefined1 DAT_005781f8
;   undefined1 DAT_005781f9
;   undefined1* PTR_LAB_00599454 = 0040ec00
;
; Called Functions:
;   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490
;   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
;   FUN_00409d30
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040eb70
        ;   Label: core_ammo.cpp_CAmmo_ctor_FUN_0040eb70
    PUSH ESI                            ; 0040eb71
    PUSH EDI                            ; 0040eb72
    MOV EBX,dword ptr [ESP + 0x10]      ; 0040eb73
    PUSH EBX                            ; 0040eb77
    CALL FUN_00409d30                   ; 0040eb78
        ;   XREF to: 00409d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00409d30()
    ADD ESP,0x4                         ; 0040eb7d
    ADD EAX,0x150                       ; 0040eb80
    PUSH EAX                            ; 0040eb85
    CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490 ; 0040eb86
        ;   XREF to: 00454490 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00454490()
    ADD ESP,0x4                         ; 0040eb8b
    LEA EBX,[EAX + 0xfffffeb0]          ; 0040eb8e
    PUSH 0x5781eb                       ; 0040eb94 | = "bullet.kfm"
    LEA EAX,[EBX + 0x150]               ; 0040eb99
    PUSH EAX                            ; 0040eb9f
    MOV dword ptr [EBX + 0x14c],0x599454 ; 0040eba0 | PTR_LAB_00599454
    CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580 ; 0040ebaa
        ;   XREF to: 00454580 (UNCONDITIONAL_CALL)  ; undefined core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00454580()
    ADD ESP,0x8                         ; 0040ebaf
    MOV ESI,0x5781f6                    ; 0040ebb2 | DAT_005781f6
    LEA EDI,[EBX + 0x2cc]               ; 0040ebb7
    PUSH EDI                            ; 0040ebbd
    MOV AL,byte ptr [ESI]               ; 0040ebbe | DAT_005781f6 | DAT_005781f8
        ;   Label: LAB_0040ebbe
    MOV byte ptr [EDI],AL               ; 0040ebc0
    CMP AL,0x0                          ; 0040ebc2
    JZ 0x0040ebd6                       ; 0040ebc4
        ;   XREF to: 0040ebd6 (CONDITIONAL_JUMP)  ; LAB_0040ebd6
    MOV AL,byte ptr [ESI + 0x1]         ; 0040ebc6 | DAT_005781f7 | DAT_005781f9
    ADD ESI,0x2                         ; 0040ebc9
    MOV byte ptr [EDI + 0x1],AL         ; 0040ebcc
    ADD EDI,0x2                         ; 0040ebcf
    CMP AL,0x0                          ; 0040ebd2
    JNZ 0x0040ebbe                      ; 0040ebd4
        ;   XREF to: 0040ebbe (CONDITIONAL_JUMP)  ; LAB_0040ebbe
    POP EDI                             ; 0040ebd6
        ;   Label: LAB_0040ebd6
    MOV dword ptr [EBX + 0x30c],0x14    ; 0040ebd7
    MOV EAX,EBX                         ; 0040ebe1
    MOV dword ptr [EBX + 0x310],0x0     ; 0040ebe3
    POP EDI                             ; 0040ebed
    POP ESI                             ; 0040ebee
    POP EBX                             ; 0040ebef
    RET                                 ; 0040ebf0

