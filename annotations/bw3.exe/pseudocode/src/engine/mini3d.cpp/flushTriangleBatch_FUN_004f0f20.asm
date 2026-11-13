; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_flushTriangleBatch_FUN_004f0f20(void)
;
;
; XREF[2]:
;   engine_mini3d.cpp_addBatchTriangle_FUN_004f0dc0 at 004f0e54
;   engine_mini3d.cpp_drawTransformedList_FUN_004f12b0 at 004f1390
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_01c6e2b4
;   undefined4 DAT_01d76f60
;   undefined4 DAT_01d7a6c8
;   undefined4 DAT_01d7a6cc
;   undefined4 DAT_01d7a6d0
;   undefined4 DAT_02cf60cc
;
; Called Functions:
;   engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830
;
; *****************************************************************************

section .text

    PUSH EDI                            ; 004f0f20
        ;   Label: engine_mini3d.cpp_flushTriangleBatch_FUN_004f0f20
    PUSH EBP                            ; 004f0f21
    MOV EDI,dword ptr [0x01d7a6c8]      ; 004f0f22 | DAT_01d7a6c8
    MOV EDX,dword ptr [0x01d7a6d0]      ; 004f0f28 | DAT_01d7a6d0
    CMP EDX,0x3                         ; 004f0f2e
    JL 0x004f0fa0                       ; 004f0f31
        ;   XREF to: 004f0fa0 (CONDITIONAL_JUMP)  ; LAB_004f0fa0
    MOV ECX,dword ptr [0x01d7a6cc]      ; 004f0f37 | DAT_01d7a6cc
    CMP ECX,0x3                         ; 004f0f3d
    JL 0x004f0fa0                       ; 004f0f40
        ;   XREF to: 004f0fa0 (CONDITIONAL_JUMP)  ; LAB_004f0fa0
    PUSH ESI                            ; 004f0f42
    PUSH EBX                            ; 004f0f43
    CMP dword ptr [0x02cf60cc],0x0      ; 004f0f44 | DAT_02cf60cc
    JZ 0x004f0fa9                       ; 004f0f4b
        ;   XREF to: 004f0fa9 (CONDITIONAL_JUMP)  ; LAB_004f0fa9
    CMP dword ptr [0x01c6cee8],0x0      ; 004f0f4d | DAT_01c6cee8
    JZ 0x004f0fa9                       ; 004f0f54
        ;   XREF to: 004f0fa9 (CONDITIONAL_JUMP)  ; LAB_004f0fa9
    MOV EAX,[0x01c6e2b4]                ; 004f0f56 | DAT_01c6e2b4
    MOV EBX,0x3                         ; 004f0f5b
    PUSH EAX                            ; 004f0f60
    MOV EAX,EDX                         ; 004f0f61
    SAR EDX,0x1f                        ; 004f0f63
    IDIV EBX                            ; 004f0f66
    PUSH EAX                            ; 004f0f68
    MOV EDX,EDI                         ; 004f0f69
    PUSH 0x1d7a6d4                      ; 004f0f6b
    MOV EAX,[0x01d76f60]                ; 004f0f70 | DAT_01d76f60
    SHL EDX,0x6                         ; 004f0f75
    PUSH ECX                            ; 004f0f78
    ADD EAX,EDX                         ; 004f0f79
    PUSH EAX                            ; 004f0f7b
    CALL dword ptr [0x02cf60cc]         ; 004f0f7c | DAT_02cf60cc
    MOV EDI,dword ptr [0x01d7a6c8]      ; 004f0f82 | DAT_01d7a6c8
    ADD ESP,0x14                        ; 004f0f88
    LEA EAX,[EAX]                       ; 004f0f8b
    MOV ECX,ECX                         ; 004f0f8e
    XOR EBX,EBX                         ; 004f0f90
        ;   Label: LAB_004f0f90
    MOV dword ptr [0x01d7a6d0],EBX      ; 004f0f92 | DAT_01d7a6d0
    MOV dword ptr [0x01d7a6cc],EBX      ; 004f0f98 | DAT_01d7a6cc
    POP EBX                             ; 004f0f9e
    POP ESI                             ; 004f0f9f
    MOV dword ptr [0x01d7a6c8],EDI      ; 004f0fa0 | DAT_01d7a6c8
        ;   Label: LAB_004f0fa0
    POP EBP                             ; 004f0fa6
    POP EDI                             ; 004f0fa7
    RET                                 ; 004f0fa8
    MOV EBP,dword ptr [0x01d7a6d0]      ; 004f0fa9 | DAT_01d7a6d0
        ;   Label: LAB_004f0fa9
    XOR ESI,ESI                         ; 004f0faf
    TEST EBP,EBP                        ; 004f0fb1
    JLE 0x004f0f90                      ; 004f0fb3
        ;   XREF to: 004f0f90 (CONDITIONAL_JUMP)  ; LAB_004f0f90
    XOR EBX,EBX                         ; 004f0fb5
    XOR EAX,EAX                         ; 004f0fb7
        ;   Label: LAB_004f0fb7
    MOV AX,word ptr [EBX + 0x1d7a6d8]   ; 004f0fb9
    LEA EDX,[EAX + EDI*0x1]             ; 004f0fc0
    MOV EAX,[0x01d76f60]                ; 004f0fc3 | DAT_01d76f60
    SHL EDX,0x6                         ; 004f0fc8
    ADD EDX,EAX                         ; 004f0fcb
    PUSH EDX                            ; 004f0fcd
    XOR EDX,EDX                         ; 004f0fce
    MOV DX,word ptr [EBX + 0x1d7a6d6]   ; 004f0fd0
    ADD EDX,EDI                         ; 004f0fd7
    SHL EDX,0x6                         ; 004f0fd9
    ADD EDX,EAX                         ; 004f0fdc
    PUSH EDX                            ; 004f0fde
    XOR EDX,EDX                         ; 004f0fdf
    MOV DX,word ptr [EBX + 0x1d7a6d4]   ; 004f0fe1
    ADD EDX,EDI                         ; 004f0fe8
    SHL EDX,0x6                         ; 004f0fea
    ADD EAX,EDX                         ; 004f0fed
    MOV dword ptr [0x01d7a6c8],EDI      ; 004f0fef | DAT_01d7a6c8
    PUSH EAX                            ; 004f0ff5
    ADD EBX,0x6                         ; 004f0ff6
    ADD ESI,0x3                         ; 004f0ff9
    CALL engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830 ; 004f0ffc
        ;   XREF to: 004f1830 (UNCONDITIONAL_CALL)  ; void engine_mini3d.cpp_rasterizeTriangle_FUN_004f1830(float * v0, float * v1, float * v2)
    MOV EDI,dword ptr [0x01d7a6c8]      ; 004f1001 | DAT_01d7a6c8
    MOV ECX,dword ptr [0x01d7a6d0]      ; 004f1007 | DAT_01d7a6d0
    ADD ESP,0xc                         ; 004f100d
    CMP ESI,ECX                         ; 004f1010
    JL 0x004f0fb7                       ; 004f1012
        ;   XREF to: 004f0fb7 (CONDITIONAL_JUMP)  ; LAB_004f0fb7
    JMP 0x004f0f90                      ; 004f1014
        ;   XREF to: 004f0f90 (UNCONDITIONAL_JUMP)  ; LAB_004f0f90

