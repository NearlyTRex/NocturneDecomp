; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004e0b10(int light_level)
;
; Parameters:
; int              Stack[0x4]:4   light_level
;
; XREF[1]:
;   engine_matrix.c_FUN_0046d0d0 at 0046d0e9
;
; Referenced Globals:
;   undefined4 DAT_006002c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0b10
        ;   Label: engine_light.cpp_setAmbientLightLevel_FUN_004e0b10
    TEST EAX,EAX                        ; 004e0b14
    JL 0x004e0b2a                       ; 004e0b16
        ;   XREF to: 004e0b2a (CONDITIONAL_JUMP)  ; LAB_004e0b2a
    CMP EAX,0xffff                      ; 004e0b18
    JLE 0x004e0b24                      ; 004e0b1d
        ;   XREF to: 004e0b24 (CONDITIONAL_JUMP)  ; LAB_004e0b24
    MOV EAX,0xffff                      ; 004e0b1f
    MOV [0x006002c4],EAX                ; 004e0b24 | DAT_006002c4
        ;   Label: LAB_004e0b24
    RET                                 ; 004e0b29
    XOR EAX,EAX                         ; 004e0b2a
        ;   Label: LAB_004e0b2a
    MOV [0x006002c4],EAX                ; 004e0b2c | DAT_006002c4
    RET                                 ; 004e0b31

