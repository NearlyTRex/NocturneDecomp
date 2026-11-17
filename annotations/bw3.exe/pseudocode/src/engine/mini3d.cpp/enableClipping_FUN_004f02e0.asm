; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_enableClipping_FUN_004f02e0(void)
;
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   int g_INT_01d79780
;   void* g_PTR_02cf60f0
;
; *****************************************************************************

section .text

    MOV EDX,0x1                         ; 004f02e0
        ;   Label: engine_mini3d.cpp_enableClipping_FUN_004f02e0
    MOV ECX,dword ptr [0x02cf60f0]      ; 004f02e5 | g_PTR_02cf60f0
    MOV dword ptr [0x01d79780],EDX      ; 004f02eb | g_INT_01d79780
    TEST ECX,ECX                        ; 004f02f1
    JZ 0x004f02fe                       ; 004f02f3
        ;   XREF to: 004f02fe (CONDITIONAL_JUMP)  ; LAB_004f02fe
    CMP dword ptr [0x01c6cee8],0x0      ; 004f02f5 | g_INT_01c6cee8
    JNZ 0x004f02cc                      ; 004f02fc
        ;   XREF to: 004f02cc (CONDITIONAL_JUMP)  ; LAB_004f02cc
    RET                                 ; 004f02fe
        ;   Label: LAB_004f02fe

