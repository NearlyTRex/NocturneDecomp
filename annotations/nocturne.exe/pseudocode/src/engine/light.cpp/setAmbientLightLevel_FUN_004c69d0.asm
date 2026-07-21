; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004c69d0(int param_1)
;
;
; XREF[1]:
;   engine_drender.cpp_CDemonRenderer_setLightIntensity_FUN_00460c40 at 00460c59
;
; Referenced Globals:
;   undefined4 DAT_005bacd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004c69d0
        ;   Label: engine_light.cpp_setAmbientLightLevel_FUN_004c69d0
    TEST EAX,EAX                        ; 004c69d4
    JL 0x004c69ea                       ; 004c69d6
        ;   XREF to: 004c69ea (CONDITIONAL_JUMP)  ; LAB_004c69ea
    CMP EAX,0xffff                      ; 004c69d8
    JLE 0x004c69e4                      ; 004c69dd
        ;   XREF to: 004c69e4 (CONDITIONAL_JUMP)  ; LAB_004c69e4
    MOV EAX,0xffff                      ; 004c69df
    MOV [0x005bacd0],EAX                ; 004c69e4 | DAT_005bacd0
        ;   Label: LAB_004c69e4
    RET                                 ; 004c69e9
    XOR EAX,EAX                         ; 004c69ea
        ;   Label: LAB_004c69ea
    MOV [0x005bacd0],EAX                ; 004c69ec | DAT_005bacd0
    RET                                 ; 004c69f1

