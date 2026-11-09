; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_setColorTable16_FUN_005822e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833fc
;
; Called Functions:
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c50948],0x0      ; 005822e0 | DAT_01c50948
        ;   Label: engine_special.cpp_setColorTable16_FUN_005822e0
    JNZ 0x005822ec                      ; 005822e7
        ;   XREF to: 005822ec (CONDITIONAL_JUMP)  ; LAB_005822ec
    XOR EAX,EAX                         ; 005822e9
    RET                                 ; 005822eb
    PUSH EBX                            ; 005822ec
        ;   Label: LAB_005822ec
    PUSH 0x1c4dad0                      ; 005822ed
    PUSH 0x1c4e9f8                      ; 005822f2
    CALL dword ptr [0x02c833fc]         ; 005822f7 | DAT_02c833fc
    ADD ESP,0x8                         ; 005822fd
    MOV EBX,EAX                         ; 00582300
    TEST EAX,EAX                        ; 00582302
    JZ 0x0058230b                       ; 00582304
        ;   XREF to: 0058230b (CONDITIONAL_JUMP)  ; LAB_0058230b
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70 ; 00582306
        ;   XREF to: 004ecf70 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70()
    MOV EAX,EBX                         ; 0058230b
        ;   Label: LAB_0058230b
    POP EBX                             ; 0058230d
    RET                                 ; 0058230e

