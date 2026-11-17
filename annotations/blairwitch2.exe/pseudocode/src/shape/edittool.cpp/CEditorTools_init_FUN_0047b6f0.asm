; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CEditorTools_init_FUN_0047b6f0(CEditorTools *this_ptr)
;
; Parameters:
; CEditorTools *   Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660 at 0047b681
;
; Referenced Globals:
;   int g_INT_01c26388
;   int g_INT_01c2638c
;   int g_INT_01c26390
;   int g_INT_01c26394
;   int g_INT_01c26398
;   int g_INT_01c2639c
;   int g_INT_01c263a0
;   int g_INT_01c263a4
;   int g_INT_01c263a8
;   int g_INT_01c263ac
;   int g_INT_01c263b0
;   int g_INT_01c263b4
;   int g_INT_01c263b8
;   int g_INT_01c263bc
;   int g_INT_01c263c0
;   ... and 17 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047b6f0
        ;   Label: shape_edittool.cpp_CEditorTools_init_FUN_0047b6f0
    PUSH ESI                            ; 0047b6f1
    PUSH EDI                            ; 0047b6f2
    PUSH EBP                            ; 0047b6f3
    MOV ECX,0x7                         ; 0047b6f4
    MOV ESI,0xfb                        ; 0047b6f9
    MOV EBP,0xff                        ; 0047b6fe
    MOV EBX,0x4                         ; 0047b703
    XOR EDX,EDX                         ; 0047b708
    MOV dword ptr [0x01c2638c],ECX      ; 0047b70a | g_INT_01c2638c
    MOV dword ptr [0x01c26390],ECX      ; 0047b710 | g_INT_01c26390
    MOV dword ptr [0x01c26398],EDX      ; 0047b716 | g_INT_01c26398
    MOV dword ptr [0x01c26388],EDX      ; 0047b71c | g_INT_01c26388
    MOV dword ptr [0x01c26394],ESI      ; 0047b722 | g_INT_01c26394
    MOV dword ptr [0x01c2639c],EBP      ; 0047b728 | g_INT_01c2639c
    MOV dword ptr [0x01c263a0],EBP      ; 0047b72e | g_INT_01c263a0
    MOV dword ptr [0x01c263a4],EBP      ; 0047b734 | g_INT_01c263a4
    MOV dword ptr [0x01c263ac],EBP      ; 0047b73a | g_INT_01c263ac
    MOV dword ptr [0x01c263b0],EBP      ; 0047b740 | g_INT_01c263b0
    MOV EDI,EBP                         ; 0047b746
    MOV dword ptr [0x01c263b4],EBP      ; 0047b748 | g_INT_01c263b4
    MOV dword ptr [0x01c263b8],EBP      ; 0047b74e | g_INT_01c263b8
    MOV dword ptr [0x01c263bc],EBP      ; 0047b754 | g_INT_01c263bc
    MOV dword ptr [0x01c263c8],EBX      ; 0047b75a | g_INT_01c263c8
    MOV dword ptr [0x01c263cc],EBP      ; 0047b760 | g_INT_01c263cc
    MOV dword ptr [0x01c263d0],EBP      ; 0047b766 | g_INT_01c263d0
    MOV dword ptr [0x01c263d4],EBP      ; 0047b76c | g_INT_01c263d4
    MOV dword ptr [0x01c263d8],EBP      ; 0047b772 | g_INT_01c263d8
    MOV dword ptr [0x01c26400],EBP      ; 0047b778 | g_INT_01c26400
    MOV ECX,0x4                         ; 0047b77e
    MOV EDX,0xfa                        ; 0047b783
    MOV EBX,0xfa                        ; 0047b788
    MOV ESI,0x7                         ; 0047b78d
    XOR EDI,EBP                         ; 0047b792
    MOV dword ptr [0x01c263a8],ECX      ; 0047b794 | g_INT_01c263a8
    MOV dword ptr [0x01c263c0],EDX      ; 0047b79a | g_INT_01c263c0
    MOV dword ptr [0x01c263e4],EBX      ; 0047b7a0 | g_INT_01c263e4
    MOV dword ptr [0x01c263e8],ESI      ; 0047b7a6 | g_INT_01c263e8
    MOV dword ptr [0x01c263ec],EDI      ; 0047b7ac | g_INT_01c263ec
    MOV dword ptr [0x01c263f0],ESI      ; 0047b7b2 | g_INT_01c263f0
    MOV dword ptr [0x01c263f4],ESI      ; 0047b7b8 | g_INT_01c263f4
    MOV EDX,0xf8                        ; 0047b7be
    XOR ECX,ECX                         ; 0047b7c3
    MOV ESI,0xf8                        ; 0047b7c5
    MOV dword ptr [0x01c263c4],ECX      ; 0047b7ca | g_INT_01c263c4
    MOV dword ptr [0x01c263dc],EDX      ; 0047b7d0 | g_INT_01c263dc
    MOV dword ptr [0x01c26404],ESI      ; 0047b7d6 | g_INT_01c26404
    MOV ECX,0x2                         ; 0047b7dc
    XOR EDX,EDX                         ; 0047b7e1
    MOV dword ptr [0x01c263e0],ECX      ; 0047b7e3 | g_INT_01c263e0
    MOV dword ptr [0x01c263f8],EDX      ; 0047b7e9 | g_INT_01c263f8
    MOV dword ptr [0x01c263fc],EDX      ; 0047b7ef | g_INT_01c263fc
    POP EBP                             ; 0047b7f5
    POP EDI                             ; 0047b7f6
    POP ESI                             ; 0047b7f7
    POP EBX                             ; 0047b7f8
    RET                                 ; 0047b7f9

