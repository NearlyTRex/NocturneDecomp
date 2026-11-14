; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_roundFloat_FUN_004f1810(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830 at 004f1b97
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f1810
        ;   Label: engine_mini3d.cpp_roundFloat_FUN_004f1810
    PUSH ESI                            ; 004f1811
    PUSH EDI                            ; 004f1812
    PUSH EBP                            ; 004f1813
    MOV EBP,ESP                         ; 004f1814
    SUB ESP,0x4                         ; 004f1816
    FLD float ptr [EBP + 0x14]          ; 004f1819
    FISTP dword ptr [EBP + 0xfffffffc]  ; 004f181f
    MOV EAX,dword ptr [EBP + -0x4]      ; 004f1825
    MOV ESP,EBP                         ; 004f1828
    POP EBP                             ; 004f182a
    POP EDI                             ; 004f182b
    POP ESI                             ; 004f182c
    POP EBX                             ; 004f182d
    RET                                 ; 004f182e

