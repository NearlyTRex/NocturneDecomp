; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_FUN_005739b0(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   engine_texture.cpp_CTextureCache_reset_FUN_005739a0 at 005739a5
;   engine_texture.cpp_FUN_00575010 at 00575017
;   engine_texture.cpp_freeTextureCache_FUN_00574db0 at 00574dd7
;
; Referenced Globals:
;   undefined4 DAT_0264bcbc
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005739b0
        ;   Label: engine_texture.cpp_FUN_005739b0
    PUSH ESI                            ; 005739b1
    PUSH EDI                            ; 005739b2
    PUSH EBP                            ; 005739b3
    MOV EBP,dword ptr [ESP + 0x14]      ; 005739b4
    MOV dword ptr [EBP + 0x18008],0x0   ; 005739b8
    LEA EDI,[EBP + 0x4]                 ; 005739c2
    MOV dword ptr [EBP + 0x18004],0x0   ; 005739c5
    MOV ESI,EDI                         ; 005739cf
    ADD EDI,0x18000                     ; 005739d1
    MOV EDX,dword ptr [ESI + 0x44]      ; 005739d7
        ;   Label: LAB_005739d7
    MOV EBX,ESI                         ; 005739da
    TEST EDX,EDX                        ; 005739dc
    JNZ 0x00573a40                      ; 005739de
        ;   XREF to: 00573a40 (CONDITIONAL_JUMP)  ; LAB_00573a40
    MOV EAX,dword ptr [EBX + 0x48]      ; 005739e0
        ;   Label: LAB_005739e0
    TEST EAX,EAX                        ; 005739e3
    JZ 0x005739f0                       ; 005739e5
        ;   XREF to: 005739f0 (CONDITIONAL_JUMP)  ; LAB_005739f0
    PUSH EAX                            ; 005739e7
    CALL crt_unknown.c_FUN_005b86a0     ; 005739e8
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005739ed
    MOV ECX,dword ptr [EBX + 0x4c]      ; 005739f0
        ;   Label: LAB_005739f0
    TEST ECX,ECX                        ; 005739f3
    JZ 0x00573a00                       ; 005739f5
        ;   XREF to: 00573a00 (CONDITIONAL_JUMP)  ; LAB_00573a00
    PUSH ECX                            ; 005739f7
    CALL crt_unknown.c_FUN_005b86a0     ; 005739f8
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 005739fd
    MOV EDX,dword ptr [EBX + 0x50]      ; 00573a00
        ;   Label: LAB_00573a00
    TEST EDX,EDX                        ; 00573a03
    JZ 0x00573a10                       ; 00573a05
        ;   XREF to: 00573a10 (CONDITIONAL_JUMP)  ; LAB_00573a10
    PUSH EDX                            ; 00573a07
    CALL crt_unknown.c_FUN_005b86a0     ; 00573a08
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00573a0d
    ADD ESI,0x60                        ; 00573a10
        ;   Label: LAB_00573a10
    CMP ESI,EDI                         ; 00573a13
    JNZ 0x005739d7                      ; 00573a15
        ;   XREF to: 005739d7 (CONDITIONAL_JUMP)  ; LAB_005739d7
    PUSH 0x18000                        ; 00573a17
    PUSH 0x0                            ; 00573a1c
    LEA EBX,[EBP + 0x4]                 ; 00573a1e
    PUSH EBX                            ; 00573a21
    CALL crt_memory.c_memset_FUN_005b77c0 ; 00573a22
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV EBX,dword ptr [0x0264bcbc]      ; 00573a27 | DAT_0264bcbc
    ADD ESP,0xc                         ; 00573a2d
    MOV dword ptr [EBP],0x0             ; 00573a30
    TEST EBX,EBX                        ; 00573a37
    JNZ 0x00573a4b                      ; 00573a39
        ;   XREF to: 00573a4b (CONDITIONAL_JUMP)  ; LAB_00573a4b
    POP EBP                             ; 00573a3b
    POP EDI                             ; 00573a3c
    POP ESI                             ; 00573a3d
    POP EBX                             ; 00573a3e
    RET                                 ; 00573a3f
    PUSH EDX                            ; 00573a40
        ;   Label: LAB_00573a40
    CALL crt_unknown.c_FUN_005b86a0     ; 00573a41
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b86a0()
    ADD ESP,0x4                         ; 00573a46
    JMP 0x005739e0                      ; 00573a49
        ;   XREF to: 005739e0 (UNCONDITIONAL_JUMP)  ; LAB_005739e0
    CALL dword ptr [0x0264bcbc]         ; 00573a4b | DAT_0264bcbc
        ;   Label: LAB_00573a4b
    POP EBP                             ; 00573a51
    POP EDI                             ; 00573a52
    POP ESI                             ; 00573a53
    POP EBX                             ; 00573a54
    RET                                 ; 00573a55

