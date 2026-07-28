; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_texture_cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache *this_ptr)
;
; Parameters:
; CTextureCache *  Stack[0x4]:4   this_ptr
;
; XREF[4]:
;   engine_texture.cpp_CTextureCache_free_FUN_00544e30 at 00544e35
;   engine_texture.cpp_FUN_00544e50 at 00544e55
;   engine_texture.cpp_FUN_005458d0 at 005458f7
;   engine_texture.cpp_FUN_005459f0 at 005459f7
;
; Called Functions:
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00544e60
        ;   Label: engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
    PUSH ESI                            ; 00544e61
    PUSH EDI                            ; 00544e62
    PUSH EBP                            ; 00544e63
    MOV EBP,dword ptr [ESP + 0x14]      ; 00544e64
    MOV EDX,dword ptr [EBP + 0x4]       ; 00544e68
    MOV dword ptr [EBP + 0xd3008],0x0   ; 00544e6b
    XOR ESI,ESI                         ; 00544e75
    TEST EDX,EDX                        ; 00544e77
    JLE 0x00544ec2                      ; 00544e79
        ;   XREF to: 00544ec2 (CONDITIONAL_JUMP)  ; LAB_00544ec2
    MOV EBX,EBP                         ; 00544e7b
    MOV EDI,EBP                         ; 00544e7d
    MOV byte ptr [EDI + 0x3008],0x0     ; 00544e7f
        ;   Label: LAB_00544e7f
    MOV EAX,dword ptr [EBX + 0x1008]    ; 00544e86
    MOV dword ptr [EBX + 0x8],0x0       ; 00544e8c
    TEST EAX,EAX                        ; 00544e93
    JNZ 0x00544ece                      ; 00544e95
        ;   XREF to: 00544ece (CONDITIONAL_JUMP)  ; LAB_00544ece
    MOV ECX,dword ptr [EBX + 0x2008]    ; 00544e97
        ;   Label: LAB_00544e97
    TEST ECX,ECX                        ; 00544e9d
    JZ 0x00544eb4                       ; 00544e9f
        ;   XREF to: 00544eb4 (CONDITIONAL_JUMP)  ; LAB_00544eb4
    PUSH ECX                            ; 00544ea1
    CALL crt_unknown.c_FUN_005638d0     ; 00544ea2
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00544ea7
    MOV dword ptr [EBX + 0x2008],0x0    ; 00544eaa
    ADD EDI,0x40                        ; 00544eb4
        ;   Label: LAB_00544eb4
    INC ESI                             ; 00544eb7
    MOV ECX,dword ptr [EBP + 0x4]       ; 00544eb8
    ADD EBX,0x4                         ; 00544ebb
    CMP ESI,ECX                         ; 00544ebe
    JL 0x00544e7f                       ; 00544ec0
        ;   XREF to: 00544e7f (CONDITIONAL_JUMP)  ; LAB_00544e7f
    MOV dword ptr [EBP],0x0             ; 00544ec2
        ;   Label: LAB_00544ec2
    POP EBP                             ; 00544ec9
    POP EDI                             ; 00544eca
    POP ESI                             ; 00544ecb
    POP EBX                             ; 00544ecc
    RET                                 ; 00544ecd
    PUSH EAX                            ; 00544ece
        ;   Label: LAB_00544ece
    CALL crt_unknown.c_FUN_005638d0     ; 00544ecf
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00544ed4
    MOV dword ptr [EBX + 0x1008],0x0    ; 00544ed7
    JMP 0x00544e97                      ; 00544ee1
        ;   XREF to: 00544e97 (UNCONDITIONAL_JUMP)  ; LAB_00544e97

