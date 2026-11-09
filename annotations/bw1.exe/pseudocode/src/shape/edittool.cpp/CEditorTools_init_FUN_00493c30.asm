; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_00493c30(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_00493ba0 at 00493bc1
;
; Referenced Globals:
;   undefined4 DAT_01c3f548
;   undefined4 DAT_01c3f54c
;   undefined4 DAT_01c3f550
;   undefined4 DAT_01c3f554
;   undefined4 DAT_01c3f558
;   undefined4 DAT_01c3f55c
;   undefined4 DAT_01c3f560
;   undefined4 DAT_01c3f564
;   undefined4 DAT_01c3f568
;   undefined4 DAT_01c3f56c
;   undefined4 DAT_01c3f570
;   undefined4 DAT_01c3f574
;   undefined4 DAT_01c3f578
;   undefined4 DAT_01c3f57c
;   undefined4 DAT_01c3f580
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00493c30
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_00493c30
    PUSH ESI                            ; 00493c31
    PUSH EDI                            ; 00493c32
    PUSH EBP                            ; 00493c33
    MOV ECX,0x7                         ; 00493c34
    MOV ESI,0xfb                        ; 00493c39
    MOV EBP,0xff                        ; 00493c3e
    MOV EBX,0x4                         ; 00493c43
    XOR EDX,EDX                         ; 00493c48
    MOV dword ptr [0x01c3f54c],ECX      ; 00493c4a | DAT_01c3f54c
    MOV dword ptr [0x01c3f550],ECX      ; 00493c50 | DAT_01c3f550
    MOV dword ptr [0x01c3f558],EDX      ; 00493c56 | DAT_01c3f558
    MOV dword ptr [0x01c3f548],EDX      ; 00493c5c | DAT_01c3f548
    MOV dword ptr [0x01c3f554],ESI      ; 00493c62 | DAT_01c3f554
    MOV dword ptr [0x01c3f55c],EBP      ; 00493c68 | DAT_01c3f55c
    MOV dword ptr [0x01c3f560],EBP      ; 00493c6e | DAT_01c3f560
    MOV dword ptr [0x01c3f564],EBP      ; 00493c74 | DAT_01c3f564
    MOV dword ptr [0x01c3f56c],EBP      ; 00493c7a | DAT_01c3f56c
    MOV dword ptr [0x01c3f570],EBP      ; 00493c80 | DAT_01c3f570
    MOV EDI,EBP                         ; 00493c86
    MOV dword ptr [0x01c3f574],EBP      ; 00493c88 | DAT_01c3f574
    MOV dword ptr [0x01c3f578],EBP      ; 00493c8e | DAT_01c3f578
    MOV dword ptr [0x01c3f57c],EBP      ; 00493c94 | DAT_01c3f57c
    MOV dword ptr [0x01c3f588],EBX      ; 00493c9a | DAT_01c3f588
    MOV dword ptr [0x01c3f58c],EBP      ; 00493ca0 | DAT_01c3f58c
    MOV dword ptr [0x01c3f590],EBP      ; 00493ca6 | DAT_01c3f590
    MOV dword ptr [0x01c3f594],EBP      ; 00493cac | DAT_01c3f594
    MOV dword ptr [0x01c3f598],EBP      ; 00493cb2 | DAT_01c3f598
    MOV dword ptr [0x01c3f5c0],EBP      ; 00493cb8 | DAT_01c3f5c0
    MOV ECX,0x4                         ; 00493cbe
    MOV EDX,0xfa                        ; 00493cc3
    MOV EBX,0xfa                        ; 00493cc8
    MOV ESI,0x7                         ; 00493ccd
    XOR EDI,EBP                         ; 00493cd2
    MOV dword ptr [0x01c3f568],ECX      ; 00493cd4 | DAT_01c3f568
    MOV dword ptr [0x01c3f580],EDX      ; 00493cda | DAT_01c3f580
    MOV dword ptr [0x01c3f5a4],EBX      ; 00493ce0 | DAT_01c3f5a4
    MOV dword ptr [0x01c3f5a8],ESI      ; 00493ce6 | DAT_01c3f5a8
    MOV dword ptr [0x01c3f5ac],EDI      ; 00493cec | DAT_01c3f5ac
    MOV dword ptr [0x01c3f5b0],ESI      ; 00493cf2 | DAT_01c3f5b0
    MOV dword ptr [0x01c3f5b4],ESI      ; 00493cf8 | DAT_01c3f5b4
    MOV EDX,0xf8                        ; 00493cfe
    XOR ECX,ECX                         ; 00493d03
    MOV ESI,0xf8                        ; 00493d05
    MOV dword ptr [0x01c3f584],ECX      ; 00493d0a | DAT_01c3f584
    MOV dword ptr [0x01c3f59c],EDX      ; 00493d10 | DAT_01c3f59c
    MOV dword ptr [0x01c3f5c4],ESI      ; 00493d16 | DAT_01c3f5c4
    MOV ECX,0x2                         ; 00493d1c
    XOR EDX,EDX                         ; 00493d21
    MOV dword ptr [0x01c3f5a0],ECX      ; 00493d23 | DAT_01c3f5a0
    MOV dword ptr [0x01c3f5b8],EDX      ; 00493d29 | DAT_01c3f5b8
    MOV dword ptr [0x01c3f5bc],EDX      ; 00493d2f | DAT_01c3f5bc
    POP EBP                             ; 00493d35
    POP EDI                             ; 00493d36
    POP ESI                             ; 00493d37
    POP EBX                             ; 00493d38
    RET                                 ; 00493d39

