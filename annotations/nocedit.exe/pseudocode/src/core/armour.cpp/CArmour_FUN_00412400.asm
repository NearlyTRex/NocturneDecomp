; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_armour.cpp_CArmour_FUN_00412400(CArmour * this_ptr)
;
; Parameters:
; CArmour *        Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_armour_wav_00614e0c
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042b9e0
;   core_enemy.cpp_FUN_004a9f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412400
        ;   Label: core_armour.cpp_CArmour_FUN_00412400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00412401
    PUSH 0x1                            ; 00412405
    PUSH 0xbf800000                     ; 00412407
    PUSH 0x0                            ; 0041240c
    PUSH EBX                            ; 0041240e
    CALL core_charactr.cpp_CCharacter_FUN_0042b9e0 ; 0041240f
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b9e0(CCharacter * this_ptr)
    ADD ESP,0x10                        ; 00412414
    PUSH 0x614e0c                       ; 00412417 | = "armour.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041241c
    PUSH EBX                            ; 00412422
    CALL dword ptr [EAX + 0x24]         ; 00412423
    ADD ESP,0x8                         ; 00412426
    MOV EDX,dword ptr [ESP + 0xc]       ; 00412429
    PUSH EDX                            ; 0041242d
    PUSH EBX                            ; 0041242e
    CALL core_enemy.cpp_FUN_004a9f10    ; 0041242f
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00412434
    POP EBX                             ; 00412437
    RET                                 ; 00412438

