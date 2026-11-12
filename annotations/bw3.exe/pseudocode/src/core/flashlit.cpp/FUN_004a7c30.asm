; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_flashlit_cpp_FUN_004a7c30(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe370
;   undefined4 DAT_005fe3a8
;   undefined4 DAT_01d19f78
;   undefined4 DAT_01d19f90
;   undefined4 DAT_01d1a058
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7c30
        ;   Label: core_flashlit.cpp_FUN_004a7c30
    PUSH ESI                            ; 004a7c31
    PUSH 0x1d19bac                      ; 004a7c32
    MOV EBX,0x1d19bc0                   ; 004a7c37
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c3c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c41
    LEA ESI,[EBX + 0x78]                ; 004a7c44
    PUSH EBX                            ; 004a7c47
        ;   Label: LAB_004a7c47
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c48
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a7c4d
    ADD ESP,0x4                         ; 004a7c50
    CMP EBX,ESI                         ; 004a7c53
    JNZ 0x004a7c47                      ; 004a7c55
        ;   XREF to: 004a7c47 (CONDITIONAL_JUMP)  ; LAB_004a7c47
    PUSH 0x1d19c38                      ; 004a7c57
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c5c
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c61
    PUSH 0x1d19c4c                      ; 004a7c64
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c69
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c6e
    PUSH 0x1d19c60                      ; 004a7c71
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c76
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c7b
    PUSH 0x1d19c74                      ; 004a7c7e
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c83
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c88
    PUSH 0x1d19c9c                      ; 004a7c8b
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c90
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7c95
    PUSH 0x1d19cb0                      ; 004a7c98
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7c9d
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7ca2
    PUSH 0x1d19cc4                      ; 004a7ca5
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7caa
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a7caf
    PUSH 0x1d19cd8                      ; 004a7cb2
    MOV EBX,0xffffffff                  ; 004a7cb7
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a7cbc
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    MOV EDX,0x1                         ; 004a7cc1
    ADD ESP,0x4                         ; 004a7cc6
    MOV dword ptr [0x005fe3a8],EBX      ; 004a7cc9 | DAT_005fe3a8
    XOR ECX,ECX                         ; 004a7ccf
    XOR AH,AH                           ; 004a7cd1
    MOV dword ptr [0x005fe370],EDX      ; 004a7cd3 | DAT_005fe370
    MOV dword ptr [0x01d19f78],ECX      ; 004a7cd9 | DAT_01d19f78
    MOV byte ptr [0x01d19f90],AH        ; 004a7cdf | DAT_01d19f90
    MOV dword ptr [0x01d1a058],ECX      ; 004a7ce5 | DAT_01d1a058
    POP ESI                             ; 004a7ceb
    POP EBX                             ; 004a7cec
    RET                                 ; 004a7ced

