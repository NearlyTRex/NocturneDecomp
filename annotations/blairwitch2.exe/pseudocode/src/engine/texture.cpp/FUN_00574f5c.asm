; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574f5c(int param_1,undefined4 param_2,undefined4 param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;   undefined4 DAT_02652eac
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_FUN_005742b0
;   engine_texture.cpp_FUN_005743e0
;   engine_texture.cpp_FUN_00574490
;   engine_texture.cpp_FUN_00574520
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 00574f5c
        ;   Label: engine_texture.cpp_FUN_00574f5c
    PUSH EBX                            ; 00574f60
    PUSH EBP                            ; 00574f61
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574f62
    CMP dword ptr [0x0070ca74],0x0      ; 00574f66 | DAT_0070ca74
    JNZ 0x00574f75                      ; 00574f6d
        ;   XREF to: 00574f75 (CONDITIONAL_JUMP)  ; LAB_00574f75
    CMP byte ptr [EBX + 0x8],0x0        ; 00574f6f
    JNZ 0x00574f78                      ; 00574f73
        ;   XREF to: 00574f78 (CONDITIONAL_JUMP)  ; LAB_00574f78
    POP EBP                             ; 00574f75
        ;   Label: LAB_00574f75
    POP EBX                             ; 00574f76
    RET                                 ; 00574f77
    PUSH EDI                            ; 00574f78
        ;   Label: LAB_00574f78
    PUSH ESI                            ; 00574f79
    LEA EDI,[EBX + 0x8]                 ; 00574f7a
    MOV ESI,dword ptr [EBX + 0x4]       ; 00574f7d
    PUSH EDI                            ; 00574f80
    AND ESI,0xffff                      ; 00574f81
    PUSH ESI                            ; 00574f87
    MOV ECX,dword ptr [0x02652eb0]      ; 00574f88 | DAT_02652eb0
    PUSH ECX                            ; 00574f8e
    CALL engine_texture.cpp_FUN_00574490 ; 00574f8f
        ;   XREF to: 00574490 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574490()
    ADD ESP,0xc                         ; 00574f94
    MOV ESI,EAX                         ; 00574f97
    CMP EAX,-0x1                        ; 00574f99
    JNZ 0x00574fde                      ; 00574f9c
        ;   XREF to: 00574fde (CONDITIONAL_JUMP)  ; LAB_00574fde
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00574f9e
    PUSH EDX                            ; 00574fa2
    MOV ECX,dword ptr [ESP + 0x1c]      ; 00574fa3
    PUSH ECX                            ; 00574fa7
    PUSH EDI                            ; 00574fa8
    MOV ESI,dword ptr [0x02652eb0]      ; 00574fa9 | DAT_02652eb0
    PUSH ESI                            ; 00574faf
    CALL engine_texture.cpp_FUN_005742b0 ; 00574fb0
        ;   XREF to: 005742b0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005742b0()
    ADD ESP,0x10                        ; 00574fb5
    MOV ESI,EAX                         ; 00574fb8
    MOV dword ptr [EBX + 0x4],EAX       ; 00574fba
    MOV EAX,0x2                         ; 00574fbd
    PUSH EAX                            ; 00574fc2
        ;   Label: LAB_00574fc2
    PUSH EBX                            ; 00574fc3
    MOV EDI,dword ptr [0x02652eb0]      ; 00574fc4 | DAT_02652eb0
    PUSH EDI                            ; 00574fca
    MOV dword ptr [0x02652eac],ESI      ; 00574fcb | DAT_02652eac
    CALL engine_texture.cpp_FUN_00574520 ; 00574fd1
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574520()
    ADD ESP,0xc                         ; 00574fd6
    POP ESI                             ; 00574fd9
    POP EDI                             ; 00574fda
    POP EBP                             ; 00574fdb
    POP EBX                             ; 00574fdc
    RET                                 ; 00574fdd
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00574fde
        ;   Label: LAB_00574fde
    PUSH EDI                            ; 00574fe2
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00574fe3
    PUSH EBP                            ; 00574fe7
    PUSH EBX                            ; 00574fe8
    MOV dword ptr [EBX + 0x4],EAX       ; 00574fe9
    MOV EAX,[0x02652eb0]                ; 00574fec | DAT_02652eb0
    PUSH EAX                            ; 00574ff1
    CALL engine_texture.cpp_FUN_005743e0 ; 00574ff2
        ;   XREF to: 005743e0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_005743e0()
    MOV EAX,0x2                         ; 00574ff7
    ADD ESP,0x10                        ; 00574ffc
    JMP 0x00574fc2                      ; 00574fff
        ;   XREF to: 00574fc2 (UNCONDITIONAL_JUMP)  ; LAB_00574fc2

