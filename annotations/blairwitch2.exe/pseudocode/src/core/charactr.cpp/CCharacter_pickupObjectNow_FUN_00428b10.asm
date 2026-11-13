; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter *this_ptr,int param_2,int param_3,float param_4,int *param_5)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; undefined4       Stack[0x10]:4   param_4
; undefined4       Stack[0x14]:4   param_5
;
; XREF[10]:
;   core_boneguy.cpp_CBoneGuy_process_FUN_004186c0 at 00418ac7
;   core_doc.cpp_FUN_0045bdc0 at 0045c889
;   core_event.cpp_FUN_00489670 at 0048a20d
;   core_hero.cpp_FUN_004cff50 at 004cff70
;   core_icepick.cpp_CIcePick_processMotionEvents_FUN_004d6140 at 004d61fe
;   core_mobster.cpp_CMobster_process_FUN_004fde80 at 004fe144
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056dd68
;   core_vampboss.cpp_CVampireBoss_processDamage_FUN_00583160 at 00583369
;   core_vehicle.cpp_CVehicle_process_FUN_00583f20 at 0058470b
;   core_zombie.cpp_CZombie_process_FUN_00595f30 at 0059646d
;
; Referenced Globals:
;   TerminatedCString s_core_charactr_cpp_005ccf20
;   TerminatedCString s_CCharacter_pickupObjectN_005ccf35
;   TerminatedCString s_core_charactr_cpp_005ccf66
;   TerminatedCString s_CCharacter_pickupObjectN_005ccf7b
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428b10
        ;   Label: core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
    PUSH ESI                            ; 00428b11
    PUSH EDI                            ; 00428b12
    PUSH EBP                            ; 00428b13
    MOV EBP,dword ptr [ESP + 0x14]      ; 00428b14
    MOV EDI,dword ptr [ESP + 0x18]      ; 00428b18
    MOV ESI,dword ptr [ESP + 0x1c]      ; 00428b1c
    TEST EDI,EDI                        ; 00428b20
    JL 0x00428b29                       ; 00428b22
        ;   XREF to: 00428b29 (CONDITIONAL_JUMP)  ; LAB_00428b29
    CMP EDI,0x2                         ; 00428b24
    JL 0x00428b4c                       ; 00428b27
        ;   XREF to: 00428b4c (CONDITIONAL_JUMP)  ; LAB_00428b4c
    MOV EDX,0x5ccf20                    ; 00428b29 | = "..\\core\\charactr.cpp"
        ;   Label: LAB_00428b29
    MOV ECX,0xdfd                       ; 00428b2e
    PUSH 0x5ccf35                       ; 00428b33 | = "CCharacter::pickupObjectNow - invalid..."
    MOV dword ptr [0x01d046a0],EDX      ; 00428b38 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00428b3e | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00428b44
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00428b49
    TEST ESI,ESI                        ; 00428b4c
        ;   Label: LAB_00428b4c
    JZ 0x00428bc9                       ; 00428b4e
        ;   XREF to: 00428bc9 (CONDITIONAL_JUMP)  ; LAB_00428bc9
    LEA EAX,[EDI*0x8 + 0x0]             ; 00428b54
    MOV EBX,EAX                         ; 00428b5b
    SHL EAX,0x4                         ; 00428b5d
    SUB EAX,EBX                         ; 00428b60
    LEA EBX,[EBP + 0x2618]              ; 00428b62
    ADD EBX,EAX                         ; 00428b68
    MOV EAX,dword ptr [EBX + 0x4]       ; 00428b6a
    TEST EAX,EAX                        ; 00428b6d
    JL 0x00428b7b                       ; 00428b6f
        ;   XREF to: 00428b7b (CONDITIONAL_JUMP)  ; LAB_00428b7b
    CMP dword ptr [EBP + EAX*0x4 + 0x23f4],0x0 ; 00428b71
    JZ 0x00428bc9                       ; 00428b79
        ;   XREF to: 00428bc9 (CONDITIONAL_JUMP)  ; LAB_00428bc9
    CMP dword ptr [EBX],0x0             ; 00428b7b
        ;   Label: LAB_00428b7b
    JGE 0x00428ba2                      ; 00428b7e
        ;   XREF to: 00428ba2 (CONDITIONAL_JUMP)  ; LAB_00428ba2
    MOV EAX,0x5ccf66                    ; 00428b80 | = "..\\core\\charactr.cpp"
    MOV EDX,0xe15                       ; 00428b85
    PUSH 0x5ccf7b                       ; 00428b8a | = "CCharacter::pickupObjectNow - invalid..."
    MOV [0x01d046a0],EAX                ; 00428b8f | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00428b94 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00428b9a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00428b9f
    PUSH EBP                            ; 00428ba2
        ;   Label: LAB_00428ba2
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00428ba3
    PUSH ESI                            ; 00428ba9
    CALL dword ptr [EAX + 0x90]         ; 00428baa
    ADD ESP,0x8                         ; 00428bb0
    MOV ECX,dword ptr [ESP + 0x24]      ; 00428bb3
    PUSH ECX                            ; 00428bb7
    PUSH dword ptr [ESP + 0x24]         ; 00428bb8
    PUSH EDI                            ; 00428bbc
    PUSH EBP                            ; 00428bbd
    MOV dword ptr [EBX + 0x8],ESI       ; 00428bbe
    CALL core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0 ; 00428bc1
        ;   XREF to: 00428bd0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_computePickup_FUN_00428bd0(CCharacter * this_ptr, int param_2, float param_3, int * param_4)
    ADD ESP,0x10                        ; 00428bc6
    POP EBP                             ; 00428bc9
        ;   Label: LAB_00428bc9
    POP EDI                             ; 00428bca
    POP ESI                             ; 00428bcb
    POP EBX                             ; 00428bcc
    RET                                 ; 00428bcd

