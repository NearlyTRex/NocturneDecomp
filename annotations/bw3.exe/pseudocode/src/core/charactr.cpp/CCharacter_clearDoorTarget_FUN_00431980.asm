; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_charactr_cpp_CCharacter_clearDoorTarget_FUN_00431980(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_door.cpp_CDoor_onOpened_FUN_00463d10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00431980
        ;   Label: core_charactr.cpp_CCharacter_clearDoorTarget_FUN_00431980
    MOV EBX,dword ptr [ESP + 0x8]       ; 00431981
    MOV EDX,dword ptr [EBX + 0x2740]    ; 00431985
    TEST EDX,EDX                        ; 0043198b
    JNZ 0x00431991                      ; 0043198d
        ;   XREF to: 00431991 (CONDITIONAL_JUMP)  ; LAB_00431991
    POP EBX                             ; 0043198f
    RET                                 ; 00431990
    PUSH EDX                            ; 00431991
        ;   Label: LAB_00431991
    CALL core_door.cpp_CDoor_onOpened_FUN_00463d10 ; 00431992
        ;   XREF to: 00463d10 (UNCONDITIONAL_CALL)  ; void core_door.cpp_CDoor_onOpened_FUN_00463d10(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00431997
    MOV dword ptr [EBX + 0x2740],0x0    ; 0043199a
    POP EBX                             ; 004319a4
    RET                                 ; 004319a5

