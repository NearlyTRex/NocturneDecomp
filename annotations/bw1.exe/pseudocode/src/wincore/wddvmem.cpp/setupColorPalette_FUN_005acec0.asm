; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_wddvmem_cpp_setupColorPalette_FUN_005acec0(void)
;
;
; XREF[2]:
;   engine_2d.c_initGraphicsSystem_FUN_00401010 at 0040106f
;   wincore_wddvmem.cpp_FUN_005ac300 at 005ac6f0
;
; Referenced Globals:
;   TerminatedCString s_wincore_wddvmem_cpp_005f977d
;   TerminatedCString s_setpal_Unable_to_create_005f9794
;   TerminatedCString s_wincore_wddvmem_cpp_005f97bd
;   TerminatedCString s_setpal_Unable_to_set_fro_005f97d4
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c4e9f8
;   undefined4 DAT_01c4e9f9
;   undefined4 DAT_01c4e9fa
;   undefined4 DAT_01c50948
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_02c833fc
;   undefined4 DAT_02c99300
;   undefined4 DAT_02c99304
;   undefined4 DAT_02c9930c
;
; Called Functions:
;   core_main.c_FUN_005030e0
;   wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00
;   wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005acec0
        ;   Label: wincore_wddvmem.cpp_setupColorPalette_FUN_005acec0
    PUSH EDI                            ; 005acec1
    PUSH EBP                            ; 005acec2
    CMP dword ptr [0x01c50948],0x0      ; 005acec3 | DAT_01c50948
    JNZ 0x005acfb0                      ; 005aceca
        ;   XREF to: 005acfb0 (CONDITIONAL_JUMP)  ; LAB_005acfb0
    MOV ECX,dword ptr [0x02c9930c]      ; 005aced0 | DAT_02c9930c
    TEST ECX,ECX                        ; 005aced6
    JNZ 0x005acfcc                      ; 005aced8
        ;   XREF to: 005acfcc (CONDITIONAL_JUMP)  ; LAB_005acfcc
    CMP dword ptr [0x0061b4a0],0x8      ; 005acede | DAT_0061b4a0
        ;   Label: LAB_005acede
    JNZ 0x005acfa3                      ; 005acee5
        ;   XREF to: 005acfa3 (CONDITIONAL_JUMP)  ; LAB_005acfa3
    XOR EDX,EDX                         ; 005aceeb
    XOR EAX,EAX                         ; 005aceed
    ADD EAX,0x4                         ; 005aceef
        ;   Label: LAB_005aceef
    MOV BL,byte ptr [EDX + 0x1c4e9f8]   ; 005acef2 | DAT_01c4e9f8
    MOV byte ptr [EAX + 0x2c99334],BL   ; 005acef8
    MOV BL,byte ptr [EDX + 0x1c4e9f9]   ; 005acefe | DAT_01c4e9f9
    MOV byte ptr [EAX + 0x2c99335],BL   ; 005acf04
    MOV BL,byte ptr [EDX + 0x1c4e9fa]   ; 005acf0a | DAT_01c4e9fa
    MOV byte ptr [EAX + 0x2c99336],BL   ; 005acf10
    MOV BL,0x1                          ; 005acf16
    ADD EDX,0x3                         ; 005acf18
    MOV byte ptr [EAX + 0x2c99337],BL   ; 005acf1b
    CMP EAX,0x400                       ; 005acf21
    JNZ 0x005aceef                      ; 005acf26
        ;   XREF to: 005aceef (CONDITIONAL_JUMP)  ; LAB_005aceef
    PUSH 0x0                            ; 005acf28
    PUSH 0x2c9930c                      ; 005acf2a | DAT_02c9930c
    PUSH 0x2c99338                      ; 005acf2f
    MOV EAX,[0x02c99300]                ; 005acf34 | DAT_02c99300
    PUSH 0x4                            ; 005acf39
    MOV EDX,dword ptr [EAX]             ; 005acf3b
    PUSH EAX                            ; 005acf3d
    CALL dword ptr [EDX + 0x14]         ; 005acf3e
    TEST EAX,EAX                        ; 005acf41
    JZ 0x005acf68                       ; 005acf43
        ;   XREF to: 005acf68 (CONDITIONAL_JUMP)  ; LAB_005acf68
    MOV EDI,0x5f977d                    ; 005acf45 | = "..\\wincore\\wddvmem.cpp"
    MOV EBP,0x301                       ; 005acf4a
    PUSH 0x5f9794                       ; 005acf4f | = "setpal - Unable to create palette object"
    MOV dword ptr [0x01d1d400],EDI      ; 005acf54 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EBP      ; 005acf5a | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005acf60
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005acf65
    MOV ECX,dword ptr [0x02c9930c]      ; 005acf68 | DAT_02c9930c
        ;   Label: LAB_005acf68
    MOV EAX,[0x02c99304]                ; 005acf6e | DAT_02c99304
    PUSH ECX                            ; 005acf73
    MOV EDX,dword ptr [EAX]             ; 005acf74
    PUSH EAX                            ; 005acf76
    CALL dword ptr [EDX + 0x7c]         ; 005acf77
    TEST EAX,EAX                        ; 005acf7a
    JZ 0x005acfa3                       ; 005acf7c
        ;   XREF to: 005acfa3 (CONDITIONAL_JUMP)  ; LAB_005acfa3
    PUSH ESI                            ; 005acf7e
    MOV EBX,0x5f97bd                    ; 005acf7f | = "..\\wincore\\wddvmem.cpp"
    MOV ESI,0x307                       ; 005acf84
    PUSH 0x5f97d4                       ; 005acf89 | = "setpal - Unable to set front buffer p..."
    MOV dword ptr [0x01d1d400],EBX      ; 005acf8e | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 005acf94 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 005acf9a
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 005acf9f
    POP ESI                             ; 005acfa2
    CMP dword ptr [0x0061b4a0],0x8      ; 005acfa3 | DAT_0061b4a0
        ;   Label: LAB_005acfa3
    JG 0x005acfdf                       ; 005acfaa
        ;   XREF to: 005acfdf (CONDITIONAL_JUMP)  ; LAB_005acfdf
    POP EBP                             ; 005acfac
    POP EDI                             ; 005acfad
    POP EBX                             ; 005acfae
    RET                                 ; 005acfaf
    PUSH 0x1c4dad0                      ; 005acfb0
        ;   Label: LAB_005acfb0
    PUSH 0x1c4e9f8                      ; 005acfb5 | DAT_01c4e9f8
    CALL dword ptr [0x02c833fc]         ; 005acfba | DAT_02c833fc
    ADD ESP,0x8                         ; 005acfc0
    CALL wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70 ; 005acfc3
        ;   XREF to: 004ecf70 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_convertPaletteToDirectColor_FUN_004ecf70()
    POP EBP                             ; 005acfc8
    POP EDI                             ; 005acfc9
    POP EBX                             ; 005acfca
    RET                                 ; 005acfcb
    PUSH ECX                            ; 005acfcc
        ;   Label: LAB_005acfcc
    MOV EDX,dword ptr [ECX]             ; 005acfcd
    XOR EBX,EBX                         ; 005acfcf
    CALL dword ptr [EDX + 0x8]          ; 005acfd1
    MOV dword ptr [0x02c9930c],EBX      ; 005acfd4 | DAT_02c9930c
    JMP 0x005acede                      ; 005acfda
        ;   XREF to: 005acede (UNCONDITIONAL_JUMP)  ; LAB_005acede
    CALL wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00 ; 005acfdf
        ;   XREF to: 005acd00 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_analyzePixelFormat_FUN_005acd00()
        ;   Label: LAB_005acfdf
    POP EBP                             ; 005acfe4
    POP EDI                             ; 005acfe5
    POP EBX                             ; 005acfe6
    RET                                 ; 005acfe7

