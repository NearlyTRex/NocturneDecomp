; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f10(void)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_0061b4b8
;   undefined4 DAT_00713af8
;   undefined4 DAT_00713afc
;   undefined4 DAT_01c4f02c
;   undefined4 DAT_01c51d00
;   undefined4 DAT_01c51d0c
;   undefined4 DAT_01c51d14
;   undefined4 DAT_01c51d18
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005bfc68
;   engine_3d.c_setBlendMode_FUN_00406c20
;   engine_clipper.c_clipAndRasterize_FUN_0043cbf0
;   engine_texture.cpp_loadTextureAndGetData_FUN_00597aa0
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00406f10
        ;   Label: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f10
    SUB ESP,0xc                         ; 00406f11
    CMP dword ptr [0x00713af8],0x0      ; 00406f14 | DAT_00713af8
    JZ 0x00407096                       ; 00406f1b
        ;   XREF to: 00407096 (CONDITIONAL_JUMP)  ; LAB_00407096
    PUSH EDI                            ; 00406f21
    PUSH ESI                            ; 00406f22
    PUSH EBX                            ; 00406f23
    MOV ECX,dword ptr [0x00713afc]      ; 00406f24 | DAT_00713afc
    TEST ECX,ECX                        ; 00406f2a
    JLE 0x00406f50                      ; 00406f2c
        ;   XREF to: 00406f50 (CONDITIONAL_JUMP)  ; LAB_00406f50
    MOV EDX,0x713b00                    ; 00406f2e
    LEA EBX,[ECX*0x4 + 0x0]             ; 00406f33
    XOR EAX,EAX                         ; 00406f3a
    MOV dword ptr [EAX + 0x7be960],EDX  ; 00406f3c
        ;   Label: LAB_00406f3c
    ADD EAX,0x4                         ; 00406f42
    ADD EDX,0x118                       ; 00406f45
    CMP EAX,EBX                         ; 00406f4b
    JL 0x00406f3c                       ; 00406f4d
        ;   XREF to: 00406f3c (CONDITIONAL_JUMP)  ; LAB_00406f3c
    NOP                                 ; 00406f4f
    PUSH 0x406ed0                       ; 00406f50
        ;   Label: LAB_00406f50
    PUSH 0x4                            ; 00406f55
    MOV EBX,dword ptr [0x00713afc]      ; 00406f57 | DAT_00713afc
    PUSH EBX                            ; 00406f5d
    PUSH 0x7be960                       ; 00406f5e
    CALL crt_stdlib.c__qsort_FUN_005bfc68 ; 00406f63
        ;   XREF to: 005bfc68 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005bfc68()
    MOV ESI,dword ptr [0x01c51d00]      ; 00406f68 | DAT_01c51d00
    ADD ESP,0x10                        ; 00406f6e
    TEST ESI,ESI                        ; 00406f71
    JNZ 0x004070aa                      ; 00406f73
        ;   XREF to: 004070aa (CONDITIONAL_JUMP)  ; LAB_004070aa
    CMP dword ptr [0x0061b4a0],0x20     ; 00406f79 | DAT_0061b4a0
    JNZ 0x0040709b                      ; 00406f80
        ;   XREF to: 0040709b (CONDITIONAL_JUMP)  ; LAB_0040709b
    MOV dword ptr [0x01c4f02c],0x57fb03 ; 00406f86 | DAT_01c4f02c
    MOV EDI,0x1                         ; 00406f90
        ;   Label: LAB_00406f90
    MOV ESI,0x1e7                       ; 00406f95
    MOV EAX,[0x00713afc]                ; 00406f9a | DAT_00713afc
    XOR EBP,EBP                         ; 00406f9f
    MOV dword ptr [0x01c51d18],EDI      ; 00406fa1 | DAT_01c51d18
    MOV dword ptr [ESP + 0x10],EBP      ; 00406fa7
    MOV dword ptr [0x01c51d14],ESI      ; 00406fab | DAT_01c51d14
    TEST EAX,EAX                        ; 00406fb1
    JLE 0x0040707c                      ; 00406fb3
        ;   XREF to: 0040707c (CONDITIONAL_JUMP)  ; LAB_0040707c
    MOV dword ptr [ESP + 0xc],EBP       ; 00406fb9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00406fbd
        ;   Label: LAB_00406fbd
    MOV EAX,dword ptr [EAX + 0x7be960]  ; 00406fc1
    MOV dword ptr [ESP + 0x14],EAX      ; 00406fc7
    MOV EDX,dword ptr [ESP + 0x14]      ; 00406fcb
    MOV ECX,dword ptr [EDX]             ; 00406fcf
    XOR EAX,EAX                         ; 00406fd1
    TEST ECX,ECX                        ; 00406fd3
    JLE 0x00407016                      ; 00406fd5
        ;   XREF to: 00407016 (CONDITIONAL_JUMP)  ; LAB_00407016
    MOV EBX,EDX                         ; 00406fd7
    XOR EBP,EBP                         ; 00406fd9
    IMUL EDX,EAX,0x30                   ; 00406fdb
        ;   Label: LAB_00406fdb
    MOV ECX,0xc                         ; 00406fde
    LEA ESI,[EBX + 0x4]                 ; 00406fe3
    LEA EDI,[EDX + 0x629014]            ; 00406fe6
    MOVSD.REP ES:EDI,ESI                ; 00406fec
    MOV CX,word ptr [EDX + 0x629040]    ; 00406fee
    XOR ECX,0xffffffff                  ; 00406ff5
    ADD EBP,0x4                         ; 00406ff8
    MOV word ptr [EDX + 0x629040],CX    ; 00406ffb
    MOV EDX,dword ptr [ESP + 0x14]      ; 00407002
    MOV dword ptr [EBP + 0x713a94],EAX  ; 00407006
    INC EAX                             ; 0040700c
    MOV ESI,dword ptr [EDX]             ; 0040700d
    ADD EBX,0x30                        ; 0040700f
    CMP EAX,ESI                         ; 00407012
    JL 0x00406fdb                       ; 00407014
        ;   XREF to: 00406fdb (CONDITIONAL_JUMP)  ; LAB_00406fdb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407016
        ;   Label: LAB_00407016
    ADD EAX,0xc4                        ; 0040701a
    PUSH EAX                            ; 0040701f
    CALL engine_texture.cpp_loadTextureAndGetData_FUN_00597aa0 ; 00407020
        ;   XREF to: 00597aa0 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_loadTextureAndGetData_FUN_00597aa0()
    ADD ESP,0x4                         ; 00407025
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407028
    MOV EAX,dword ptr [EAX + 0x110]     ; 0040702c
    MOV [0x01c51d0c],EAX                ; 00407032 | DAT_01c51d0c
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407037
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0040703b
    MOV [0x0061b4b8],EAX                ; 00407041 | DAT_0061b4b8
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407046
    PUSH 0x713a98                       ; 0040704a
    MOV EDX,dword ptr [EAX]             ; 0040704f
    PUSH EDX                            ; 00407051
    CALL engine_clipper.c_clipAndRasterize_FUN_0043cbf0 ; 00407052
        ;   XREF to: 0043cbf0 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043cbf0(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407057
    MOV ESI,dword ptr [0x00713afc]      ; 0040705a | DAT_00713afc
    MOV ECX,dword ptr [ESP + 0xc]       ; 00407060
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407064
    ADD ECX,0x4                         ; 00407068
    INC EBX                             ; 0040706b
    MOV dword ptr [ESP + 0xc],ECX       ; 0040706c
    MOV dword ptr [ESP + 0x10],EBX      ; 00407070
    CMP EBX,ESI                         ; 00407074
    JL 0x00406fbd                       ; 00407076
        ;   XREF to: 00406fbd (CONDITIONAL_JUMP)  ; LAB_00406fbd
    XOR EDI,EDI                         ; 0040707c
        ;   Label: LAB_0040707c
    PUSH EDI                            ; 0040707e
    MOV dword ptr [0x00713afc],EDI      ; 0040707f | DAT_00713afc
    MOV dword ptr [0x00713af8],EDI      ; 00407085 | DAT_00713af8
    CALL engine_3d.c_setBlendMode_FUN_00406c20 ; 0040708b
        ;   XREF to: 00406c20 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c20(int blend_mode)
    ADD ESP,0x4                         ; 00407090
    POP EBX                             ; 00407093
    POP ESI                             ; 00407094
    POP EDI                             ; 00407095
    ADD ESP,0xc                         ; 00407096
        ;   Label: LAB_00407096
    POP EBP                             ; 00407099
    RET                                 ; 0040709a
    MOV dword ptr [0x01c4f02c],0x57fd39 ; 0040709b | DAT_01c4f02c
        ;   Label: LAB_0040709b
    JMP 0x00406f90                      ; 004070a5
        ;   XREF to: 00406f90 (UNCONDITIONAL_JUMP)  ; LAB_00406f90
    CMP dword ptr [0x0061b4a0],0x20     ; 004070aa | DAT_0061b4a0
        ;   Label: LAB_004070aa
    JNZ 0x004070c2                      ; 004070b1
        ;   XREF to: 004070c2 (CONDITIONAL_JUMP)  ; LAB_004070c2
    MOV dword ptr [0x01c4f02c],0x57de01 ; 004070b3 | DAT_01c4f02c
    JMP 0x00406f90                      ; 004070bd
        ;   XREF to: 00406f90 (UNCONDITIONAL_JUMP)  ; LAB_00406f90
    MOV dword ptr [0x01c4f02c],0x57e5e3 ; 004070c2 | DAT_01c4f02c
        ;   Label: LAB_004070c2
    JMP 0x00406f90                      ; 004070cc
        ;   XREF to: 00406f90 (UNCONDITIONAL_JUMP)  ; LAB_00406f90

