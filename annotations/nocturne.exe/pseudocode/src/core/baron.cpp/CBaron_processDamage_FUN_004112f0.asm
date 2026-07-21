; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_baron_cpp_CBaron_processDamage_FUN_004112f0(undefined4 param_1,int param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00428510
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004112f0
        ;   Label: core_baron.cpp_CBaron_processDamage_FUN_004112f0
    PUSH EAX                            ; 004112f4
    MOV EDX,dword ptr [ESP + 0x8]       ; 004112f5
    PUSH EDX                            ; 004112f9
    MOV dword ptr [EAX + 0x4],0x0       ; 004112fa
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00428510 ; 00411301
        ;   XREF to: 00428510 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_processDamage_FUN_00428510()
    ADD ESP,0x8                         ; 00411306
    LEA EAX,[EAX]                       ; 00411309
    NOP                                 ; 0041130f

