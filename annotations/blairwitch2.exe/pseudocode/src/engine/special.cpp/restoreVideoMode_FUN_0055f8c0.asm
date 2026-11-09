; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_restoreVideoMode_FUN_0055f8c0(void)
;
;
; XREF[2]:
;   wincore_wddvmem.cpp_reinitializeGraphicsSystem_FUN_00588ff0 at 00589008
;   wincore_wddvmem.cpp_restoreVideoAndMinimizeWindow_FUN_005897b0 at 005897c4
;
; Referenced Globals:
;   undefined4 DAT_01c37788
;   undefined4 DAT_0264bbcc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055f8c0
        ;   Label: engine_special.cpp_restoreVideoMode_FUN_0055f8c0
    CMP dword ptr [0x01c37788],0x0      ; 0055f8c1 | DAT_01c37788
    JZ 0x0055f8dc                       ; 0055f8c8
        ;   XREF to: 0055f8dc (CONDITIONAL_JUMP)  ; LAB_0055f8dc
    XOR ECX,ECX                         ; 0055f8ca
    MOV EBX,dword ptr [0x0264bbcc]      ; 0055f8cc | DAT_0264bbcc
    MOV dword ptr [0x01c37788],ECX      ; 0055f8d2 | DAT_01c37788
    TEST EBX,EBX                        ; 0055f8d8
    JNZ 0x0055f8e0                      ; 0055f8da
        ;   XREF to: 0055f8e0 (CONDITIONAL_JUMP)  ; LAB_0055f8e0
    XOR EAX,EAX                         ; 0055f8dc
        ;   Label: LAB_0055f8dc
    POP EBX                             ; 0055f8de
    RET                                 ; 0055f8df
    CALL dword ptr [0x0264bbcc]         ; 0055f8e0 | DAT_0264bbcc
        ;   Label: LAB_0055f8e0
    POP EBX                             ; 0055f8e6
    RET                                 ; 0055f8e7

