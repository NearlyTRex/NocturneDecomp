; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a1200_cpp_FUN_004a1730(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616010
;   undefined4 DAT_00616040
;   undefined4 DAT_01caf488
;   undefined4 DAT_01caf4a0
;   undefined4 DAT_01caf568
;
; Called Functions:
;   engine_alphabit.cpp_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1730
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1730
    PUSH ESI                            ; 004a1731
    PUSH 0x1caf114                      ; 004a1732
    MOV EBX,0x1caf128                   ; 004a1737
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a173c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1741
    LEA ESI,[EBX + 0x78]                ; 004a1744
    PUSH EBX                            ; 004a1747
        ;   Label: LAB_004a1747
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1748
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD EBX,0x14                        ; 004a174d
    ADD ESP,0x4                         ; 004a1750
    CMP EBX,ESI                         ; 004a1753
    JNZ 0x004a1747                      ; 004a1755
        ;   XREF to: 004a1747 (CONDITIONAL_JUMP)  ; LAB_004a1747
    PUSH 0x1caf1a0                      ; 004a1757
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a175c
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1761
    PUSH 0x1caf1b4                      ; 004a1764
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1769
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a176e
    PUSH 0x1caf1c8                      ; 004a1771
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1776
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a177b
    PUSH 0x1caf1dc                      ; 004a177e
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1783
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1788
    PUSH 0x1caf1f0                      ; 004a178b
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a1790
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a1795
    PUSH 0x1caf204                      ; 004a1798
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a179d
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a17a2
    PUSH 0x1caf218                      ; 004a17a5
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a17aa
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a17af
    PUSH 0x1caf22c                      ; 004a17b2
    MOV EBX,0xffffffff                  ; 004a17b7
    CALL engine_alphabit.cpp_FUN_0040d540 ; 004a17bc
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d540(CAlphaBitmap * this_ptr)
    MOV EDX,0x1                         ; 004a17c1
    ADD ESP,0x4                         ; 004a17c6
    MOV dword ptr [0x00616040],EBX      ; 004a17c9 | DAT_00616040
    XOR ECX,ECX                         ; 004a17cf
    XOR AH,AH                           ; 004a17d1
    MOV dword ptr [0x00616010],EDX      ; 004a17d3 | DAT_00616010
    MOV dword ptr [0x01caf488],ECX      ; 004a17d9 | DAT_01caf488
    MOV byte ptr [0x01caf4a0],AH        ; 004a17df | DAT_01caf4a0
    MOV dword ptr [0x01caf568],ECX      ; 004a17e5 | DAT_01caf568
    POP ESI                             ; 004a17eb
    POP EBX                             ; 004a17ec
    RET                                 ; 004a17ed

