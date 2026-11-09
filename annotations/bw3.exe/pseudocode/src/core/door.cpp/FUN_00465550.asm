; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl core_door_cpp_FUN_00465550(CDoor *this_ptr)
;
; Parameters:
; CDoor *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_door.cpp_CDoor_getMoveType_FUN_00465380 at 00465439
;   core_hero.cpp_FUN_004d3250 at 004d32b1
;
; Referenced Globals:
;   undefined4 DAT_01b8513c
;
; Called Functions:
;   sound_sndmain.cpp_FUN_00556700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00465550
        ;   Label: core_door.cpp_FUN_00465550
    MOV EBX,dword ptr [ESP + 0x8]       ; 00465551
    MOV EDX,dword ptr [0x01b8513c]      ; 00465555 | DAT_01b8513c
    PUSH EDX                            ; 0046555b
    CALL sound_sndmain.cpp_FUN_00556700 ; 0046555c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00465561
    TEST EAX,EAX                        ; 00465564
    JZ 0x0046556a                       ; 00465566
        ;   XREF to: 0046556a (CONDITIONAL_JUMP)  ; LAB_0046556a
    POP EBX                             ; 00465568
    RET                                 ; 00465569
    LEA EDX,[EBX + 0x92c]               ; 0046556a
        ;   Label: LAB_0046556a
    PUSH EDX                            ; 00465570
    MOV EAX,dword ptr [EBX + 0x154]     ; 00465571
    PUSH EBX                            ; 00465577
    CALL dword ptr [EAX + 0x2c]         ; 00465578
    ADD ESP,0x8                         ; 0046557b
    MOV [0x01b8513c],EAX                ; 0046557e | DAT_01b8513c
    POP EBX                             ; 00465583
    RET                                 ; 00465584

