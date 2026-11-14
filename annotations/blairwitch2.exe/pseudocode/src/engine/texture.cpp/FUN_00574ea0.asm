; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574ea0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   engine_mini3d.cpp_loadTexture_FUN_004f33d0 at 004f33ec
;   engine_texture.cpp_FUN_00575150 at 005755c2
;
; Referenced Globals:
;   undefined4 DAT_0070ca74
;   undefined4 DAT_02652eac
;   undefined4 DAT_02652eb0
;
; Called Functions:
;   engine_texture.cpp_FUN_00574240
;   engine_texture.cpp_FUN_00574310
;   engine_texture.cpp_FUN_00574490
;   engine_texture.cpp_FUN_00574520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574ea0
        ;   Label: engine_texture.cpp_FUN_00574ea0
    PUSH EBP                            ; 00574ea1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00574ea2
    CMP dword ptr [0x0070ca74],0x0      ; 00574ea6 | DAT_0070ca74
    JNZ 0x00574eb5                      ; 00574ead
        ;   XREF to: 00574eb5 (CONDITIONAL_JUMP)  ; LAB_00574eb5
    CMP byte ptr [EBX + 0x8],0x0        ; 00574eaf
    JNZ 0x00574eb8                      ; 00574eb3
        ;   XREF to: 00574eb8 (CONDITIONAL_JUMP)  ; LAB_00574eb8
    POP EBP                             ; 00574eb5
        ;   Label: LAB_00574eb5
    POP EBX                             ; 00574eb6
    RET                                 ; 00574eb7
    PUSH EDI                            ; 00574eb8
        ;   Label: LAB_00574eb8
    PUSH ESI                            ; 00574eb9
    LEA EDI,[EBX + 0x8]                 ; 00574eba
    MOV ESI,dword ptr [EBX + 0x4]       ; 00574ebd
    PUSH EDI                            ; 00574ec0
    AND ESI,0xffff                      ; 00574ec1
    PUSH ESI                            ; 00574ec7
    MOV ECX,dword ptr [0x02652eb0]      ; 00574ec8 | DAT_02652eb0
    PUSH ECX                            ; 00574ece
    CALL engine_texture.cpp_FUN_00574490 ; 00574ecf
        ;   XREF to: 00574490 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574490()
    ADD ESP,0xc                         ; 00574ed4
    MOV ESI,EAX                         ; 00574ed7
    CMP EAX,-0x1                        ; 00574ed9
    JNZ 0x00574f28                      ; 00574edc
        ;   XREF to: 00574f28 (CONDITIONAL_JUMP)  ; LAB_00574f28
    MOV ESI,dword ptr [ESP + 0x24]      ; 00574ede
    PUSH ESI                            ; 00574ee2
    MOV EBP,dword ptr [ESP + 0x24]      ; 00574ee3
    PUSH EBP                            ; 00574ee7
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574ee8
    PUSH EAX                            ; 00574eec
    MOV EDX,dword ptr [ESP + 0x24]      ; 00574eed
    PUSH EDX                            ; 00574ef1
    PUSH EDI                            ; 00574ef2
    MOV ECX,dword ptr [0x02652eb0]      ; 00574ef3 | DAT_02652eb0
    PUSH ECX                            ; 00574ef9
    CALL engine_texture.cpp_FUN_00574240 ; 00574efa
        ;   XREF to: 00574240 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574240()
    ADD ESP,0x18                        ; 00574eff
    MOV ESI,EAX                         ; 00574f02
    MOV dword ptr [EBX + 0x4],EAX       ; 00574f04
    MOV EAX,0x1                         ; 00574f07
    PUSH EAX                            ; 00574f0c
        ;   Label: LAB_00574f0c
    PUSH EBX                            ; 00574f0d
    MOV EBX,dword ptr [0x02652eb0]      ; 00574f0e | DAT_02652eb0
    PUSH EBX                            ; 00574f14
    MOV dword ptr [0x02652eac],ESI      ; 00574f15 | DAT_02652eac
    CALL engine_texture.cpp_FUN_00574520 ; 00574f1b
        ;   XREF to: 00574520 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574520()
    ADD ESP,0xc                         ; 00574f20
    POP ESI                             ; 00574f23
    POP EDI                             ; 00574f24
    POP EBP                             ; 00574f25
    POP EBX                             ; 00574f26
    RET                                 ; 00574f27
    MOV EDI,dword ptr [ESP + 0x24]      ; 00574f28
        ;   Label: LAB_00574f28
    PUSH EDI                            ; 00574f2c
    MOV EBP,dword ptr [ESP + 0x24]      ; 00574f2d
    PUSH EBP                            ; 00574f31
    MOV dword ptr [EBX + 0x4],EAX       ; 00574f32
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574f35
    PUSH EAX                            ; 00574f39
    MOV EDX,dword ptr [ESP + 0x24]      ; 00574f3a
    PUSH EDX                            ; 00574f3e
    PUSH EBX                            ; 00574f3f
    MOV ECX,dword ptr [0x02652eb0]      ; 00574f40 | DAT_02652eb0
    PUSH ECX                            ; 00574f46
    CALL engine_texture.cpp_FUN_00574310 ; 00574f47
        ;   XREF to: 00574310 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00574310()
    MOV EAX,0x1                         ; 00574f4c
    ADD ESP,0x18                        ; 00574f51
    JMP 0x00574f0c                      ; 00574f54
        ;   XREF to: 00574f0c (UNCONDITIONAL_JUMP)  ; LAB_00574f0c

