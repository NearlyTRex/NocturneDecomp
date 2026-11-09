; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_sound_cpp_FUN_00560bdc(undefined4 param_1,int param_2)
;
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00560bdc
        ;   Label: core_sound.cpp_FUN_00560bdc
    MOV EAX,dword ptr [ESP + 0x8]       ; 00560be0
    TEST EAX,EAX                        ; 00560be4
    JL 0x00560bed                       ; 00560be6
        ;   XREF to: 00560bed (CONDITIONAL_JUMP)  ; LAB_00560bed
    CMP EAX,0x1b                        ; 00560be8
    JL 0x00560bf3                       ; 00560beb
        ;   XREF to: 00560bf3 (CONDITIONAL_JUMP)  ; LAB_00560bf3
    MOV EAX,0x5d5376                    ; 00560bed
        ;   Label: LAB_00560bed
    RET                                 ; 00560bf2
    SHL EAX,0x4                         ; 00560bf3
        ;   Label: LAB_00560bf3
    MOV EAX,dword ptr [EAX + 0x6045fc]  ; 00560bf6
    RET                                 ; 00560bfc

