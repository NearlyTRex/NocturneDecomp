; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_mini3d_cpp_roundFloat_FUN_00516040(float value)
;
; Parameters:
; float            Stack[0x4]:4   value
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   engine_mini3d.cpp_rasterizeTriangle_FUN_00516060 at 005163c7
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00516040
        ;   Label: engine_mini3d.cpp_roundFloat_FUN_00516040
    PUSH ESI                            ; 00516041
    PUSH EDI                            ; 00516042
    PUSH EBP                            ; 00516043
    MOV EBP,ESP                         ; 00516044
    SUB ESP,0x4                         ; 00516046
    FLD float ptr [EBP + 0x14]          ; 00516049
    FISTP dword ptr [EBP + 0xfffffffc]  ; 0051604f
    MOV EAX,dword ptr [EBP + -0x4]      ; 00516055
    MOV ESP,EBP                         ; 00516058
    POP EBP                             ; 0051605a
    POP EDI                             ; 0051605b
    POP ESI                             ; 0051605c
    POP EBX                             ; 0051605d
    RET                                 ; 0051605e

