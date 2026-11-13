; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setCameraOrigin_FUN_004f2430(CVector3f *origin)
;
; Parameters:
; CVector3f *      Stack[0x4]:4   origin
;
; Referenced Globals:
;   undefined4 DAT_01d098b0
;   undefined4 DAT_01d098b4
;   undefined4 DAT_01d098b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f2430
        ;   Label: engine_mini3d.cpp_setCameraOrigin_FUN_004f2430
    FLD float ptr [EAX]                 ; 004f2434
    FLD float ptr [EAX + 0x8]           ; 004f2436
    MOV EDX,dword ptr [EAX + 0x4]       ; 004f2439
    MOV dword ptr [0x01d098b4],EDX      ; 004f243c | DAT_01d098b4
    FSTP float ptr [0x01d098b8]         ; 004f2442 | DAT_01d098b8
    FSTP float ptr [0x01d098b0]         ; 004f2448 | DAT_01d098b0
    RET                                 ; 004f244e

