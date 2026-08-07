; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_special_cpp_FUN_005325c0(void)
;
;
; Referenced Globals:
;   ushort[256] g_ColorTable16
;   uchar[768] g_SourcePaletteData
;   int g_UseExternalRenderer
;   undefined4 DAT_02dc9ddc
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c02594],0x0      ; 005325c0 | g_UseExternalRenderer
        ;   Label: engine_special.cpp_FUN_005325c0
    JNZ 0x005325cc                      ; 005325c7
        ;   XREF to: 005325cc (CONDITIONAL_JUMP)  ; LAB_005325cc
    XOR EAX,EAX                         ; 005325c9
    RET                                 ; 005325cb
    PUSH EBX                            ; 005325cc
        ;   Label: LAB_005325cc
    PUSH 0x1bff720                      ; 005325cd | g_ColorTable16
    PUSH 0x1c00648                      ; 005325d2 | g_SourcePaletteData
    CALL dword ptr [0x02dc9ddc]         ; 005325d7 | DAT_02dc9ddc
    ADD ESP,0x8                         ; 005325dd
    MOV EBX,EAX                         ; 005325e0
    TEST EAX,EAX                        ; 005325e2
    JZ 0x005325eb                       ; 005325e4
        ;   XREF to: 005325eb (CONDITIONAL_JUMP)  ; LAB_005325eb
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0 ; 005325e6
        ;   XREF to: 004b63f0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004b63f0()
    MOV EAX,EBX                         ; 005325eb
        ;   Label: LAB_005325eb
    POP EBX                             ; 005325ed
    RET                                 ; 005325ee

