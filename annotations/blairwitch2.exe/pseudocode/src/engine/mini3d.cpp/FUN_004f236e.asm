; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f236e(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fa164
;   undefined4 DAT_01c37788
;   undefined4 DAT_01d0d2d4
;
; Called Functions:
;   engine_special.cpp_presentToExternalRenderer_FUN_0055ff40
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;   wincore_winrun.cpp_processWindowMessages_FUN_0058f270
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 004f236e
        ;   Label: engine_mini3d.cpp_FUN_004f236e
    CMP dword ptr [0x01c37788],0x0      ; 004f2370 | DAT_01c37788
    JZ 0x004f2393                       ; 004f2377
        ;   XREF to: 004f2393 (CONDITIONAL_JUMP)  ; LAB_004f2393
    PUSH 0x1                            ; 004f2379
    CALL engine_special.cpp_presentToExternalRenderer_FUN_0055ff40 ; 004f237b
        ;   XREF to: 0055ff40 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_presentToExternalRenderer_FUN_0055ff40(int skip_buffer_copy)
    ADD ESP,0x4                         ; 004f2380
    CALL wincore_winrun.cpp_processWindowMessages_FUN_0058f270 ; 004f2383
        ;   XREF to: 0058f270 (UNCONDITIONAL_CALL)  ; void wincore_winrun.cpp_processWindowMessages_FUN_0058f270()
    MOV EAX,[0x005fa164]                ; 004f2388 | DAT_005fa164
    MOV [0x01d0d2d4],EAX                ; 004f238d | DAT_01d0d2d4
    RET                                 ; 004f2392
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 004f2393
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
        ;   Label: LAB_004f2393
    MOV EAX,[0x005fa164]                ; 004f2398 | DAT_005fa164
    MOV [0x01d0d2d4],EAX                ; 004f239d | DAT_01d0d2d4
    RET                                 ; 004f23a2

