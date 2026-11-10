; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_flushPremiumRenderBuffer_FUN_00406f30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fba20
;   undefined4 DAT_005fba38
;   undefined4 DAT_00730478
;   undefined4 DAT_0073047c
;   undefined4 DAT_01c6b5cc
;   undefined4 DAT_01c6e2a0
;   undefined4 DAT_01c6e2ac
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01c6e2b8
;
; Called Functions:
;   crt_stdlib.c__qsort_FUN_005a29e8
;   engine_3d.c_setBlendMode_FUN_00406c40
;   engine_clipper.c_clipAndRasterize_FUN_0043a840
;   engine_texture.cpp_loadTextureAndGetData_FUN_0056aa90
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00406f30
        ;   Label: engine_3d.c_flushPremiumRenderBuffer_FUN_00406f30
    SUB ESP,0xc                         ; 00406f31
    CMP dword ptr [0x00730478],0x0      ; 00406f34 | DAT_00730478
    JZ 0x004070b6                       ; 00406f3b
        ;   XREF to: 004070b6 (CONDITIONAL_JUMP)  ; LAB_004070b6
    PUSH EDI                            ; 00406f41
    PUSH ESI                            ; 00406f42
    PUSH EBX                            ; 00406f43
    MOV ECX,dword ptr [0x0073047c]      ; 00406f44 | DAT_0073047c
    TEST ECX,ECX                        ; 00406f4a
    JLE 0x00406f70                      ; 00406f4c
        ;   XREF to: 00406f70 (CONDITIONAL_JUMP)  ; LAB_00406f70
    MOV EDX,0x730480                    ; 00406f4e
    LEA EBX,[ECX*0x4 + 0x0]             ; 00406f53
    XOR EAX,EAX                         ; 00406f5a
    MOV dword ptr [EAX + 0x7db2e0],EDX  ; 00406f5c
        ;   Label: LAB_00406f5c
    ADD EAX,0x4                         ; 00406f62
    ADD EDX,0x118                       ; 00406f65
    CMP EAX,EBX                         ; 00406f6b
    JL 0x00406f5c                       ; 00406f6d
        ;   XREF to: 00406f5c (CONDITIONAL_JUMP)  ; LAB_00406f5c
    NOP                                 ; 00406f6f
    PUSH 0x406ef0                       ; 00406f70
        ;   Label: LAB_00406f70
    PUSH 0x4                            ; 00406f75
    MOV EBX,dword ptr [0x0073047c]      ; 00406f77 | DAT_0073047c
    PUSH EBX                            ; 00406f7d
    PUSH 0x7db2e0                       ; 00406f7e
    CALL crt_stdlib.c__qsort_FUN_005a29e8 ; 00406f83
        ;   XREF to: 005a29e8 (UNCONDITIONAL_CALL)  ; undefined crt_stdlib.c__qsort_FUN_005a29e8()
    MOV ESI,dword ptr [0x01c6e2a0]      ; 00406f88 | DAT_01c6e2a0
    ADD ESP,0x10                        ; 00406f8e
    TEST ESI,ESI                        ; 00406f91
    JNZ 0x004070ca                      ; 00406f93
        ;   XREF to: 004070ca (CONDITIONAL_JUMP)  ; LAB_004070ca
    CMP dword ptr [0x005fba20],0x20     ; 00406f99 | DAT_005fba20
    JNZ 0x004070bb                      ; 00406fa0
        ;   XREF to: 004070bb (CONDITIONAL_JUMP)  ; LAB_004070bb
    MOV dword ptr [0x01c6b5cc],0x562c33 ; 00406fa6 | DAT_01c6b5cc
    MOV EDI,0x1                         ; 00406fb0
        ;   Label: LAB_00406fb0
    MOV ESI,0x1e7                       ; 00406fb5
    MOV EAX,[0x0073047c]                ; 00406fba | DAT_0073047c
    XOR EBP,EBP                         ; 00406fbf
    MOV dword ptr [0x01c6e2b8],EDI      ; 00406fc1 | DAT_01c6e2b8
    MOV dword ptr [ESP + 0x10],EBP      ; 00406fc7
    MOV dword ptr [0x01c6e2b4],ESI      ; 00406fcb | DAT_01c6e2b4
    TEST EAX,EAX                        ; 00406fd1
    JLE 0x0040709c                      ; 00406fd3
        ;   XREF to: 0040709c (CONDITIONAL_JUMP)  ; LAB_0040709c
    MOV dword ptr [ESP + 0xc],EBP       ; 00406fd9
    MOV EAX,dword ptr [ESP + 0xc]       ; 00406fdd
        ;   Label: LAB_00406fdd
    MOV EAX,dword ptr [EAX + 0x7db2e0]  ; 00406fe1
    MOV dword ptr [ESP + 0x14],EAX      ; 00406fe7
    MOV EDX,dword ptr [ESP + 0x14]      ; 00406feb
    MOV ECX,dword ptr [EDX]             ; 00406fef
    XOR EAX,EAX                         ; 00406ff1
    TEST ECX,ECX                        ; 00406ff3
    JLE 0x00407036                      ; 00406ff5
        ;   XREF to: 00407036 (CONDITIONAL_JUMP)  ; LAB_00407036
    MOV EBX,EDX                         ; 00406ff7
    XOR EBP,EBP                         ; 00406ff9
    IMUL EDX,EAX,0x30                   ; 00406ffb
        ;   Label: LAB_00406ffb
    MOV ECX,0xc                         ; 00406ffe
    LEA ESI,[EBX + 0x4]                 ; 00407003
    LEA EDI,[EDX + 0x60b014]            ; 00407006
    MOVSD.REP ES:EDI,ESI                ; 0040700c
    MOV CX,word ptr [EDX + 0x60b040]    ; 0040700e
    XOR ECX,0xffffffff                  ; 00407015
    ADD EBP,0x4                         ; 00407018
    MOV word ptr [EDX + 0x60b040],CX    ; 0040701b
    MOV EDX,dword ptr [ESP + 0x14]      ; 00407022
    MOV dword ptr [EBP + 0x730414],EAX  ; 00407026
    INC EAX                             ; 0040702c
    MOV ESI,dword ptr [EDX]             ; 0040702d
    ADD EBX,0x30                        ; 0040702f
    CMP EAX,ESI                         ; 00407032
    JL 0x00406ffb                       ; 00407034
        ;   XREF to: 00406ffb (CONDITIONAL_JUMP)  ; LAB_00406ffb
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407036
        ;   Label: LAB_00407036
    ADD EAX,0xc4                        ; 0040703a
    PUSH EAX                            ; 0040703f
    CALL engine_texture.cpp_loadTextureAndGetData_FUN_0056aa90 ; 00407040
        ;   XREF to: 0056aa90 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_loadTextureAndGetData_FUN_0056aa90()
    ADD ESP,0x4                         ; 00407045
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407048
    MOV EAX,dword ptr [EAX + 0x110]     ; 0040704c
    MOV [0x01c6e2ac],EAX                ; 00407052 | DAT_01c6e2ac
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407057
    MOV EAX,dword ptr [EAX + 0x10c]     ; 0040705b
    MOV [0x005fba38],EAX                ; 00407061 | DAT_005fba38
    MOV EAX,dword ptr [ESP + 0x14]      ; 00407066
    PUSH 0x730418                       ; 0040706a
    MOV EDX,dword ptr [EAX]             ; 0040706f
    PUSH EDX                            ; 00407071
    CALL engine_clipper.c_clipAndRasterize_FUN_0043a840 ; 00407072
        ;   XREF to: 0043a840 (UNCONDITIONAL_CALL)  ; void engine_clipper.c_clipAndRasterize_FUN_0043a840(int vertex_count, int * vertex_indices)
    ADD ESP,0x8                         ; 00407077
    MOV ESI,dword ptr [0x0073047c]      ; 0040707a | DAT_0073047c
    MOV ECX,dword ptr [ESP + 0xc]       ; 00407080
    MOV EBX,dword ptr [ESP + 0x10]      ; 00407084
    ADD ECX,0x4                         ; 00407088
    INC EBX                             ; 0040708b
    MOV dword ptr [ESP + 0xc],ECX       ; 0040708c
    MOV dword ptr [ESP + 0x10],EBX      ; 00407090
    CMP EBX,ESI                         ; 00407094
    JL 0x00406fdd                       ; 00407096
        ;   XREF to: 00406fdd (CONDITIONAL_JUMP)  ; LAB_00406fdd
    XOR EDI,EDI                         ; 0040709c
        ;   Label: LAB_0040709c
    PUSH EDI                            ; 0040709e
    MOV dword ptr [0x0073047c],EDI      ; 0040709f | DAT_0073047c
    MOV dword ptr [0x00730478],EDI      ; 004070a5 | DAT_00730478
    CALL engine_3d.c_setBlendMode_FUN_00406c40 ; 004070ab
        ;   XREF to: 00406c40 (UNCONDITIONAL_CALL)  ; void engine_3d.c_setBlendMode_FUN_00406c40(int blend_mode)
    ADD ESP,0x4                         ; 004070b0
    POP EBX                             ; 004070b3
    POP ESI                             ; 004070b4
    POP EDI                             ; 004070b5
    ADD ESP,0xc                         ; 004070b6
        ;   Label: LAB_004070b6
    POP EBP                             ; 004070b9
    RET                                 ; 004070ba
    MOV dword ptr [0x01c6b5cc],0x562e69 ; 004070bb | DAT_01c6b5cc
        ;   Label: LAB_004070bb
    JMP 0x00406fb0                      ; 004070c5
        ;   XREF to: 00406fb0 (UNCONDITIONAL_JUMP)  ; LAB_00406fb0
    CMP dword ptr [0x005fba20],0x20     ; 004070ca | DAT_005fba20
        ;   Label: LAB_004070ca
    JNZ 0x004070e2                      ; 004070d1
        ;   XREF to: 004070e2 (CONDITIONAL_JUMP)  ; LAB_004070e2
    MOV dword ptr [0x01c6b5cc],0x560f31 ; 004070d3 | DAT_01c6b5cc
    JMP 0x00406fb0                      ; 004070dd
        ;   XREF to: 00406fb0 (UNCONDITIONAL_JUMP)  ; LAB_00406fb0
    MOV dword ptr [0x01c6b5cc],0x561713 ; 004070e2 | DAT_01c6b5cc
        ;   Label: LAB_004070e2
    JMP 0x00406fb0                      ; 004070ec
        ;   XREF to: 00406fb0 (UNCONDITIONAL_JUMP)  ; LAB_00406fb0

