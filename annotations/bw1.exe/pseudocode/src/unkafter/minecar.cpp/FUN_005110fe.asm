; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_minecar_cpp_FUN_005110fe(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00603c94
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d25f34
;
; Called Functions:
;   engine_special.cpp_presentToExternalRenderer_FUN_00582990
;   wincore_wddvmem.cpp_swapBuffers_FUN_005acff0
;   wincore_winrun.cpp_FUN_005b2cf0
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 005110fe
        ;   Label: unkafter_minecar.cpp_FUN_005110fe
    CMP dword ptr [0x01c50948],0x0      ; 00511100 | DAT_01c50948
    JZ 0x00511123                       ; 00511107
        ;   XREF to: 00511123 (CONDITIONAL_JUMP)  ; LAB_00511123
    PUSH 0x1                            ; 00511109
    CALL engine_special.cpp_presentToExternalRenderer_FUN_00582990 ; 0051110b
        ;   XREF to: 00582990 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_00582990(int skip_buffer_copy)
    ADD ESP,0x4                         ; 00511110
    CALL wincore_winrun.cpp_FUN_005b2cf0 ; 00511113
        ;   XREF to: 005b2cf0 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_FUN_005b2cf0()
    MOV EAX,[0x00603c94]                ; 00511118 | DAT_00603c94
    MOV [0x01d25f34],EAX                ; 0051111d | DAT_01d25f34
    RET                                 ; 00511122
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_005acff0 ; 00511123
        ;   XREF to: 005acff0 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_005acff0()
        ;   Label: LAB_00511123
    MOV EAX,[0x00603c94]                ; 00511128 | DAT_00603c94
    MOV [0x01d25f34],EAX                ; 0051112d | DAT_01d25f34
    RET                                 ; 00511132

