; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005458d0(void)
;
;
; XREF[1]:
;   engine_3d.c_FUN_005458d0 at 00404490
;
; Referenced Globals:
;   undefined4 DAT_02dd0f84
;
; Called Functions:
;   crt_unknown.c_FUN_00564494
;   engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60
;   engine_texture.cpp_FUN_00544e50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005458d0
        ;   Label: engine_texture.cpp_FUN_005458d0
    MOV EDX,dword ptr [0x02dd0f84]      ; 005458d1 | DAT_02dd0f84
    PUSH EDX                            ; 005458d7
    CALL engine_texture.cpp_FUN_00544e50 ; 005458d8
        ;   XREF to: 00544e50 (UNCONDITIONAL_CALL)  ; undefined engine_texture.cpp_FUN_00544e50()
    MOV ECX,dword ptr [0x02dd0f84]      ; 005458dd | DAT_02dd0f84
    ADD ESP,0x4                         ; 005458e3
    TEST ECX,ECX                        ; 005458e6
    JNZ 0x005458f4                      ; 005458e8
        ;   XREF to: 005458f4 (CONDITIONAL_JUMP)  ; LAB_005458f4
    XOR EBX,EBX                         ; 005458ea
    MOV dword ptr [0x02dd0f84],EBX      ; 005458ec | DAT_02dd0f84
    POP EBX                             ; 005458f2
    RET                                 ; 005458f3
    PUSH ECX                            ; 005458f4
        ;   Label: LAB_005458f4
    MOV EBX,ECX                         ; 005458f5
    CALL engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60 ; 005458f7
        ;   XREF to: 00544e60 (UNCONDITIONAL_CALL)  ; void engine_texture.cpp_CTextureCache_freeTextures_FUN_00544e60(CTextureCache * this_ptr)
    ADD ESP,0x4                         ; 005458fc
    PUSH EBX                            ; 005458ff
    CALL crt_unknown.c_FUN_00564494     ; 00545900
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_00564494()
    ADD ESP,0x4                         ; 00545905
    XOR EBX,EBX                         ; 00545908
    MOV dword ptr [0x02dd0f84],EBX      ; 0054590a | DAT_02dd0f84
    POP EBX                             ; 00545910
    RET                                 ; 00545911

