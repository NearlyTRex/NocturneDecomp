; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl wincore_winrun_cpp_getNextKeypress_FUN_0058ead0(void)
;
;
; XREF[10]:
;   core_game.cpp_FUN_004b6170 at 004b6dc3
;   core_game.cpp_FUN_004bdfb0 at 004be40a
;   core_main.c_FUN_004e45e0 at 004e4631
;   core_menu.cpp_showCalibrationTestPattern_FUN_004ebce0 at 004ebe16
;   core_set.cpp_CDemonSet_load_FUN_0052c0e0 at 0052d0c0
;   engine_2d.c_FUN_0040330e at 00403368
;   engine_keys.cpp_CKeys_getInputKey_FUN_004dfe90 at 004dfe90
;   engine_keys.cpp_CKeys_getUppercasedInputKey_FUN_004dfea0 at 004dfea0
;   unkafter_dcube.cpp_FUN_00446f4e at 00446fcc
;   wincore_wddvmem.cpp_resetGraphicsSystem_FUN_00588de0 at 00588fc8
;
; Referenced Globals:
;   undefined4 DAT_02662dd8
;   undefined4 DAT_02662ddc
;   undefined4 DAT_02664630
;
; Called Functions:
;   wincore_wddvmem.cpp_FUN_00589560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058ead0
        ;   Label: wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
    PUSH EDI                            ; 0058ead1
    PUSH EBP                            ; 0058ead2
    MOV EAX,[0x02662dd8]                ; 0058ead3 | DAT_02662dd8
    MOV EDX,dword ptr [0x02662ddc]      ; 0058ead8 | DAT_02662ddc
    XOR EBX,EBX                         ; 0058eade
    CMP EAX,EDX                         ; 0058eae0
    JNZ 0x0058eaff                      ; 0058eae2
        ;   XREF to: 0058eaff (CONDITIONAL_JUMP)  ; LAB_0058eaff
    CMP dword ptr [0x02664630],0x0      ; 0058eae4 | DAT_02664630
        ;   Label: LAB_0058eae4
    JNZ 0x0058eaff                      ; 0058eaeb
        ;   XREF to: 0058eaff (CONDITIONAL_JUMP)  ; LAB_0058eaff
    CALL wincore_wddvmem.cpp_FUN_00589560 ; 0058eaed
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_FUN_00589560()
    MOV EAX,[0x02662dd8]                ; 0058eaf2 | DAT_02662dd8
    CMP EAX,dword ptr [0x02662ddc]      ; 0058eaf7 | DAT_02662ddc
    JZ 0x0058eae4                       ; 0058eafd
        ;   XREF to: 0058eae4 (CONDITIONAL_JUMP)  ; LAB_0058eae4
    MOV EDI,dword ptr [0x02662ddc]      ; 0058eaff | DAT_02662ddc
        ;   Label: LAB_0058eaff
    MOV EAX,[0x02662dd8]                ; 0058eb05 | DAT_02662dd8
    CMP EAX,EDI                         ; 0058eb0a
    JZ 0x0058eb23                       ; 0058eb0c
        ;   XREF to: 0058eb23 (CONDITIONAL_JUMP)  ; LAB_0058eb23
    LEA EBP,[EAX + 0x1]                 ; 0058eb0e
    MOV EBX,dword ptr [EAX*0x4 + 0x2662d88] ; 0058eb11
    MOV dword ptr [0x02662dd8],EBP      ; 0058eb18 | DAT_02662dd8
    CMP EBP,0x14                        ; 0058eb1e
    JGE 0x0058eb29                      ; 0058eb21
        ;   XREF to: 0058eb29 (CONDITIONAL_JUMP)  ; LAB_0058eb29
    MOV AL,BL                           ; 0058eb23
        ;   Label: LAB_0058eb23
    POP EBP                             ; 0058eb25
    POP EDI                             ; 0058eb26
    POP EBX                             ; 0058eb27
    RET                                 ; 0058eb28
    XOR EDX,EDX                         ; 0058eb29
        ;   Label: LAB_0058eb29
    MOV dword ptr [0x02662dd8],EDX      ; 0058eb2b | DAT_02662dd8
    MOV AL,BL                           ; 0058eb31
    POP EBP                             ; 0058eb33
    POP EDI                             ; 0058eb34
    POP EBX                             ; 0058eb35
    RET                                 ; 0058eb36

