; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcube_cpp_FUN_00446f4e(char *param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141bc
;
; Called Functions:
;   crt_stdio.c_fclose_FUN_005b89c0
;   crt_stdio.c_fgets_FUN_005b9600
;   engine_2d.c_clearInputAndWait_FUN_004032b0
;   engine_2d.c_drawText_FUN_00401fe0
;   engine_dosio.cpp_FUN_00460c70
;   engine_special.cpp_clearScreen_FUN_0055b1f0
;   wincore_wddvmem.cpp_swapBuffers_FUN_00589560
;   wincore_winrun.cpp_getNextKeypress_FUN_0058ead0
;
; *****************************************************************************

section .text

    MOV EAX,EAX                         ; 00446f4e
        ;   Label: core_dcube.cpp_FUN_00446f4e
    PUSH EBX                            ; 00446f50
    PUSH ESI                            ; 00446f51
    PUSH EDI                            ; 00446f52
    PUSH EBP                            ; 00446f53
    MOV EBP,ESP                         ; 00446f54
    SUB ESP,0x58                        ; 00446f56
    MOV dword ptr [EBP + -0x4],0x0      ; 00446f5c
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00446f63
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    MOV EAX,0x5cea3a                    ; 00446f68
    PUSH EAX                            ; 00446f6d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00446f6e
    PUSH EAX                            ; 00446f71
    MOV EAX,0x5cea3d                    ; 00446f72
    PUSH EAX                            ; 00446f77
    CALL engine_dosio.cpp_FUN_00460c70  ; 00446f78
        ;   XREF to: 00460c70 (UNCONDITIONAL_CALL)  ; _FILE * engine_dosio.cpp_FUN_00460c70(char * directory, char * filename, char * mode)
    ADD ESP,0xc                         ; 00446f7d
    MOV dword ptr [EBP + -0x8],EAX      ; 00446f80
    CMP dword ptr [EBP + -0x8],0x0      ; 00446f83
    JZ 0x00446ffa                       ; 00446f87
        ;   XREF to: 00446ffa (CONDITIONAL_JUMP)  ; LAB_00446ffa
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 00446f89
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    MOV EAX,dword ptr [EBP + -0x8]      ; 00446f8e
        ;   Label: LAB_00446f8e
    PUSH EAX                            ; 00446f91
    PUSH 0x4f                           ; 00446f92
    LEA EAX,[EBP + -0x58]               ; 00446f94
    PUSH EAX                            ; 00446f97
    CALL crt_stdio.c_fgets_FUN_005b9600 ; 00446f98
        ;   XREF to: 005b9600 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fgets_FUN_005b9600()
    ADD ESP,0xc                         ; 00446f9d
    TEST EAX,EAX                        ; 00446fa0
    JZ 0x00446fe4                       ; 00446fa2
        ;   XREF to: 00446fe4 (CONDITIONAL_JUMP)  ; LAB_00446fe4
    MOV EAX,dword ptr [EBP + -0x4]      ; 00446fa4
    PUSH EAX                            ; 00446fa7
    PUSH 0x0                            ; 00446fa8
    LEA EAX,[EBP + -0x58]               ; 00446faa
    PUSH EAX                            ; 00446fad
    CALL engine_2d.c_drawText_FUN_00401fe0 ; 00446fae
        ;   XREF to: 00401fe0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawText_FUN_00401fe0(char * text, int x, int y)
    ADD ESP,0xc                         ; 00446fb3
    ADD dword ptr [EBP + -0x4],0xb      ; 00446fb6
    MOV EAX,[0x006141bc]                ; 00446fba | DAT_006141bc
    SUB EAX,0xb                         ; 00446fbf
    CMP EAX,dword ptr [EBP + -0x4]      ; 00446fc2
    JGE 0x00446fe2                      ; 00446fc5
        ;   XREF to: 00446fe2 (CONDITIONAL_JUMP)  ; LAB_00446fe2
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 00446fc7
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 00446fcc
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00446fd1
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
    CALL engine_special.cpp_clearScreen_FUN_0055b1f0 ; 00446fd6
        ;   XREF to: 0055b1f0 (UNCONDITIONAL_CALL)  ; void engine_special.cpp_clearScreen_FUN_0055b1f0()
    MOV dword ptr [EBP + -0x4],0x0      ; 00446fdb
    JMP 0x00446f8e                      ; 00446fe2
        ;   XREF to: 00446f8e (UNCONDITIONAL_JUMP)  ; LAB_00446f8e
        ;   Label: LAB_00446fe2
    MOV EAX,dword ptr [EBP + -0x8]      ; 00446fe4
        ;   Label: LAB_00446fe4
    PUSH EAX                            ; 00446fe7
    CALL crt_stdio.c_fclose_FUN_005b89c0 ; 00446fe8
        ;   XREF to: 005b89c0 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fclose_FUN_005b89c0()
    ADD ESP,0x4                         ; 00446fed
    CALL wincore_wddvmem.cpp_swapBuffers_FUN_00589560 ; 00446ff0
        ;   XREF to: 00589560 (UNCONDITIONAL_CALL)  ; void wincore_wddvmem.cpp_swapBuffers_FUN_00589560()
    CALL wincore_winrun.cpp_getNextKeypress_FUN_0058ead0 ; 00446ff5
        ;   XREF to: 0058ead0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getNextKeypress_FUN_0058ead0()
    CALL engine_2d.c_clearInputAndWait_FUN_004032b0 ; 00446ffa
        ;   XREF to: 004032b0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_004032b0()
        ;   Label: LAB_00446ffa
    MOV ESP,EBP                         ; 00446fff
    POP EBP                             ; 00447001
    POP EDI                             ; 00447002
    POP ESI                             ; 00447003
    POP EBX                             ; 00447004
    RET                                 ; 00447005

