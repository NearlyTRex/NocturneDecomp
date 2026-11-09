; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMini3D * unkafter_minecar_cpp_CMini3D_ctor_FUN_004ec730(CMini3D *this_ptr)
;
; Parameters:
; CMini3D *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_minecar.cpp_staticInit_FUN_004ec6f0 at 004ec6f5
;
; Referenced Globals:
;   undefined4 DAT_01d76c38
;   undefined4 DAT_01d76c3c
;   undefined4 DAT_01d76c40
;   undefined4 DAT_01d76c44
;   undefined4 DAT_01d76c48
;   undefined4 DAT_01d76cbc
;   undefined4 DAT_01d76cc0
;   undefined4 DAT_01d76cc4
;   undefined4 DAT_01d76cc8
;   undefined4 DAT_01d76ccc
;   undefined4 DAT_01d76cd4
;   undefined4 DAT_01d76cf0
;   undefined4 DAT_01d76cf4
;   undefined4 DAT_01d76cf8
;   undefined4 DAT_01d76cfc
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ec730
        ;   Label: unkafter_minecar.cpp_CMini3D_ctor_FUN_004ec730
    PUSH ESI                            ; 004ec731
    PUSH EBP                            ; 004ec732
    MOV EAX,dword ptr [ESP + 0x10]      ; 004ec733
    MOV ESI,0x3f800000                  ; 004ec737
    MOV EBP,0x3f000000                  ; 004ec73c
    MOV EBX,0x1d76d04                   ; 004ec741
    XOR ECX,ECX                         ; 004ec746
    MOV EDX,0xc0                        ; 004ec748
    MOV dword ptr [0x01d76c3c],ECX      ; 004ec74d | DAT_01d76c3c
    MOV dword ptr [0x01d76d00],ECX      ; 004ec753 | DAT_01d76d00
    MOV dword ptr [0x01d76cc8],ESI      ; 004ec759 | DAT_01d76cc8
    MOV dword ptr [0x01d76ccc],ESI      ; 004ec75f | DAT_01d76ccc
    MOV dword ptr [0x01d76cd4],EBP      ; 004ec765 | DAT_01d76cd4
    MOV dword ptr [0x01d7977c],ECX      ; 004ec76b | DAT_01d7977c
    MOV dword ptr [0x01d76c44],ECX      ; 004ec771 | DAT_01d76c44
    MOV dword ptr [0x01d76c48],ECX      ; 004ec777 | DAT_01d76c48
    MOV dword ptr [0x01d76f60],ECX      ; 004ec77d | DAT_01d76f60
    MOV dword ptr [0x01d76f64],ECX      ; 004ec783 | DAT_01d76f64
    MOV dword ptr [0x01d76f5c],ECX      ; 004ec789 | DAT_01d76f5c
    MOV dword ptr [0x01d76c40],ESI      ; 004ec78f | DAT_01d76c40
    MOV dword ptr [0x01d7a694],ECX      ; 004ec795 | DAT_01d7a694
    MOV dword ptr [0x01d7a6ac],ECX      ; 004ec79b | DAT_01d7a6ac
    MOV dword ptr [0x01d7a6b0],ECX      ; 004ec7a1 | DAT_01d7a6b0
    MOV dword ptr [0x01d76cbc],ESI      ; 004ec7a7 | DAT_01d76cbc
    MOV dword ptr [0x01d76cf0],ECX      ; 004ec7ad | DAT_01d76cf0
    MOV dword ptr [0x01d76cfc],EBX      ; 004ec7b3 | DAT_01d76cfc
    MOV dword ptr [0x01d7f4f4],ECX      ; 004ec7b9 | DAT_01d7f4f4
    MOV dword ptr [0x01d79780],ECX      ; 004ec7bf | DAT_01d79780
    MOV dword ptr [0x01d76cf8],ECX      ; 004ec7c5 | DAT_01d76cf8
    MOV dword ptr [0x01d76cc4],ESI      ; 004ec7cb | DAT_01d76cc4
    MOV EBP,0x44c80000                  ; 004ec7d1
    MOV dword ptr [0x01d76c38],EDX      ; 004ec7d6 | DAT_01d76c38
    MOV dword ptr [0x01d76cc0],EBP      ; 004ec7dc | DAT_01d76cc0
    MOV dword ptr [0x01d76cf4],EBP      ; 004ec7e2 | DAT_01d76cf4
    POP EBP                             ; 004ec7e8
    POP ESI                             ; 004ec7e9
    POP EBX                             ; 004ec7ea
    RET                                 ; 004ec7eb

