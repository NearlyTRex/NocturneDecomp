; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00432560(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_door.cpp_CDoor_onOpened_FUN_004774d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432560
        ;   Label: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00432560
    MOV EBX,dword ptr [ESP + 0x8]       ; 00432561
    MOV EDX,dword ptr [EBX + 0x2740]    ; 00432565
    TEST EDX,EDX                        ; 0043256b
    JNZ 0x00432571                      ; 0043256d
        ;   XREF to: 00432571 (CONDITIONAL_JUMP)  ; LAB_00432571
    POP EBX                             ; 0043256f
    RET                                 ; 00432570
    PUSH EDX                            ; 00432571
        ;   Label: LAB_00432571
    CALL core_door.cpp_CDoor_onOpened_FUN_004774d0 ; 00432572
        ;   XREF to: 004774d0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_004774d0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00432577
    MOV dword ptr [EBX + 0x2740],0x0    ; 0043257a
    POP EBX                             ; 00432584
    RET                                 ; 00432585

