; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setColorTable16_FUN_00565bb0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6058
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 00565bb0 | DAT_01c6cee8
        ;   Label: engine_special.cpp_setColorTable16_FUN_00565bb0
    JNZ 0x00565bbc                      ; 00565bb7
        ;   XREF to: 00565bbc (CONDITIONAL_JUMP)  ; LAB_00565bbc
    XOR EAX,EAX                         ; 00565bb9
    RET                                 ; 00565bbb
    PUSH EBX                            ; 00565bbc
        ;   Label: LAB_00565bbc
    PUSH 0x1c6a070                      ; 00565bbd
    PUSH 0x1c6af98                      ; 00565bc2
    CALL dword ptr [0x02cf6058]         ; 00565bc7 | DAT_02cf6058
    ADD ESP,0x8                         ; 00565bcd
    MOV EBX,EAX                         ; 00565bd0
    TEST EAX,EAX                        ; 00565bd2
    JZ 0x00565bdb                       ; 00565bd4
        ;   XREF to: 00565bdb (CONDITIONAL_JUMP)  ; LAB_00565bdb
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0 ; 00565bd6
        ;   XREF to: 004d4eb0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004d4eb0()
    MOV EAX,EBX                         ; 00565bdb
        ;   Label: LAB_00565bdb
    POP EBX                             ; 00565bdd
    RET                                 ; 00565bde

