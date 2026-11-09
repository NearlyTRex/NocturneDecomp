; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setAmbientLightLevel_FUN_004ffa50(int light_level)
;
; Parameters:
; int              Stack[0x4]:4   light_level
;
; XREF[1]:
;   engine_matrix.c_FUN_004839f0 at 00483a09
;
; Referenced Globals:
;   undefined4 DAT_0061f310
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ffa50
        ;   Label: engine_light.cpp_setAmbientLightLevel_FUN_004ffa50
    TEST EAX,EAX                        ; 004ffa54
    JL 0x004ffa6a                       ; 004ffa56
        ;   XREF to: 004ffa6a (CONDITIONAL_JUMP)  ; LAB_004ffa6a
    CMP EAX,0xffff                      ; 004ffa58
    JLE 0x004ffa64                      ; 004ffa5d
        ;   XREF to: 004ffa64 (CONDITIONAL_JUMP)  ; LAB_004ffa64
    MOV EAX,0xffff                      ; 004ffa5f
    MOV [0x0061f310],EAX                ; 004ffa64 | DAT_0061f310
        ;   Label: LAB_004ffa64
    RET                                 ; 004ffa69
    XOR EAX,EAX                         ; 004ffa6a
        ;   Label: LAB_004ffa6a
    MOV [0x0061f310],EAX                ; 004ffa6c | DAT_0061f310
    RET                                 ; 004ffa71

