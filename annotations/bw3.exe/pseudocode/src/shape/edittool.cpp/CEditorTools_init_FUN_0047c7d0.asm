; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0047c7d0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740 at 0047c761
;
; Referenced Globals:
;   int g_INT_01c5baf0
;   int g_INT_01c5baf4
;   int g_INT_01c5baf8
;   int g_INT_01c5bafc
;   int g_INT_01c5bb00
;   int g_INT_01c5bb04
;   int g_INT_01c5bb08
;   int g_INT_01c5bb0c
;   int g_INT_01c5bb10
;   int g_INT_01c5bb14
;   int g_INT_01c5bb18
;   int g_INT_01c5bb1c
;   int g_INT_01c5bb20
;   int g_INT_01c5bb24
;   int g_INT_01c5bb28
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047c7d0
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_0047c7d0
    PUSH ESI                            ; 0047c7d1
    PUSH EDI                            ; 0047c7d2
    PUSH EBP                            ; 0047c7d3
    MOV ECX,0x7                         ; 0047c7d4
    MOV ESI,0xfb                        ; 0047c7d9
    MOV EBP,0xff                        ; 0047c7de
    MOV EBX,0x4                         ; 0047c7e3
    XOR EDX,EDX                         ; 0047c7e8
    MOV dword ptr [0x01c5baf4],ECX      ; 0047c7ea | g_INT_01c5baf4
    MOV dword ptr [0x01c5baf8],ECX      ; 0047c7f0 | g_INT_01c5baf8
    MOV dword ptr [0x01c5bb00],EDX      ; 0047c7f6 | g_INT_01c5bb00
    MOV dword ptr [0x01c5baf0],EDX      ; 0047c7fc | g_INT_01c5baf0
    MOV dword ptr [0x01c5bafc],ESI      ; 0047c802 | g_INT_01c5bafc
    MOV dword ptr [0x01c5bb04],EBP      ; 0047c808 | g_INT_01c5bb04
    MOV dword ptr [0x01c5bb08],EBP      ; 0047c80e | g_INT_01c5bb08
    MOV dword ptr [0x01c5bb0c],EBP      ; 0047c814 | g_INT_01c5bb0c
    MOV dword ptr [0x01c5bb14],EBP      ; 0047c81a | g_INT_01c5bb14
    MOV dword ptr [0x01c5bb18],EBP      ; 0047c820 | g_INT_01c5bb18
    MOV EDI,EBP                         ; 0047c826
    MOV dword ptr [0x01c5bb1c],EBP      ; 0047c828 | g_INT_01c5bb1c
    MOV dword ptr [0x01c5bb20],EBP      ; 0047c82e | g_INT_01c5bb20
    MOV dword ptr [0x01c5bb24],EBP      ; 0047c834 | g_INT_01c5bb24
    MOV dword ptr [0x01c5bb30],EBX      ; 0047c83a | g_INT_01c5bb30
    MOV dword ptr [0x01c5bb34],EBP      ; 0047c840 | g_INT_01c5bb34
    MOV dword ptr [0x01c5bb38],EBP      ; 0047c846 | g_INT_01c5bb38
    MOV dword ptr [0x01c5bb3c],EBP      ; 0047c84c | g_INT_01c5bb3c
    MOV dword ptr [0x01c5bb40],EBP      ; 0047c852 | g_INT_01c5bb40
    MOV dword ptr [0x01c5bb68],EBP      ; 0047c858 | g_INT_01c5bb68
    MOV ECX,0x4                         ; 0047c85e
    MOV EDX,0xfa                        ; 0047c863
    MOV EBX,0xfa                        ; 0047c868
    MOV ESI,0x7                         ; 0047c86d
    XOR EDI,EBP                         ; 0047c872
    MOV dword ptr [0x01c5bb10],ECX      ; 0047c874 | g_INT_01c5bb10
    MOV dword ptr [0x01c5bb28],EDX      ; 0047c87a | g_INT_01c5bb28
    MOV dword ptr [0x01c5bb4c],EBX      ; 0047c880 | g_INT_01c5bb4c
    MOV dword ptr [0x01c5bb50],ESI      ; 0047c886 | g_INT_01c5bb50
    MOV dword ptr [0x01c5bb54],EDI      ; 0047c88c | g_INT_01c5bb54
    MOV dword ptr [0x01c5bb58],ESI      ; 0047c892 | g_INT_01c5bb58
    MOV dword ptr [0x01c5bb5c],ESI      ; 0047c898 | g_INT_01c5bb5c
    MOV EDX,0xf8                        ; 0047c89e
    XOR ECX,ECX                         ; 0047c8a3
    MOV ESI,0xf8                        ; 0047c8a5
    MOV dword ptr [0x01c5bb2c],ECX      ; 0047c8aa | g_INT_01c5bb2c
    MOV dword ptr [0x01c5bb44],EDX      ; 0047c8b0 | g_INT_01c5bb44
    MOV dword ptr [0x01c5bb6c],ESI      ; 0047c8b6 | g_INT_01c5bb6c
    MOV ECX,0x2                         ; 0047c8bc
    XOR EDX,EDX                         ; 0047c8c1
    MOV dword ptr [0x01c5bb48],ECX      ; 0047c8c3 | g_INT_01c5bb48
    MOV dword ptr [0x01c5bb60],EDX      ; 0047c8c9 | g_INT_01c5bb60
    MOV dword ptr [0x01c5bb64],EDX      ; 0047c8cf | g_INT_01c5bb64
    POP EBP                             ; 0047c8d5
    POP EDI                             ; 0047c8d6
    POP ESI                             ; 0047c8d7
    POP EBX                             ; 0047c8d8
    RET                                 ; 0047c8d9

