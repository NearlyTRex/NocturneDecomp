; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_clearZBuffer_FUN_00566210(void)
;
;
; XREF[2]:
;   core_dcamera.cpp_CDemonCamera_beginScene_FUN_00448ff0 at 0044922d
;   engine_mini3d.cpp_FUN_004ec96e at 004ec977
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6050
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00566210 | DAT_01c6cee8
        ;   Label: engine_special.cpp_clearZBuffer_FUN_00566210
    JNZ 0x0056621c                      ; 00566217
        ;   XREF to: 0056621c (CONDITIONAL_JUMP)  ; LAB_0056621c
    XOR EAX,EAX                         ; 00566219
    RET                                 ; 0056621b
    CALL dword ptr [0x02cf6050]         ; 0056621c | DAT_02cf6050
        ;   Label: LAB_0056621c
    RET                                 ; 00566222

