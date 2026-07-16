; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLsetFogColor_FUN_100049f0(int red,int green,int blue)
;
; Parameters:
; int              Stack[0x4]:4   red
; int              Stack[0x8]:4   green
; int              Stack[0xc]:4   blue
;
; Referenced Globals:
;   undefined4 DAT_100141bc
;   undefined4 DAT_100141c0
;   undefined4 DAT_100141c4
;   int g_InScene = 0x0
;
; Called Functions:
;   dll_dx7.cpp_APIDLLbeginScene_FUN_10002ce0
;   dll_dx7.cpp_APIDLLendScene_FUN_10002d10
;   dll_dx7.cpp_FUN_100037e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100049f0
        ;   Label: dll_dx7.cpp_APIDLLsetFogColor_FUN_100049f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 100049f4
    MOV EDX,dword ptr [ESP + 0xc]       ; 100049f8
    MOV [0x100141bc],EAX                ; 100049fc | DAT_100141bc
    MOV dword ptr [0x100141c0],ECX      ; 10004a01 | DAT_100141c0
    MOV dword ptr [0x100141c4],EDX      ; 10004a07 | DAT_100141c4
    CMP dword ptr [0x10014204],0x0      ; 10004a0d | g_InScene
    JNZ 0x10004a1b                      ; 10004a14
        ;   XREF to: 10004a1b (CONDITIONAL_JUMP)  ; LAB_10004a1b
    CALL dll_dx7.cpp_APIDLLbeginScene_FUN_10002ce0 ; 10004a16
        ;   XREF to: 10002ce0 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_APIDLLbeginScene_FUN_10002ce0() | Ordinal_6
    MOV EAX,[0x100141bc]                ; 10004a1b | DAT_100141bc
        ;   Label: LAB_10004a1b
    MOV ECX,dword ptr [0x100141c0]      ; 10004a20 | DAT_100141c0
    SHL EAX,0x10                        ; 10004a26
    SHL ECX,0x8                         ; 10004a29
    OR EAX,ECX                          ; 10004a2c
    OR EAX,dword ptr [0x100141c4]       ; 10004a2e | DAT_100141c4
    PUSH EAX                            ; 10004a34
    PUSH 0x22                           ; 10004a35
    CALL dll_dx7.cpp_FUN_100037e0       ; 10004a37
        ;   XREF to: 100037e0 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_100037e0()
    ADD ESP,0x8                         ; 10004a3c
    CMP dword ptr [0x10014204],0x0      ; 10004a3f | g_InScene
    JZ 0x10004a4d                       ; 10004a46
        ;   XREF to: 10004a4d (CONDITIONAL_JUMP)  ; LAB_10004a4d
    CALL dll_dx7.cpp_APIDLLendScene_FUN_10002d10 ; 10004a48
        ;   XREF to: 10002d10 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_APIDLLendScene_FUN_10002d10() | Ordinal_15
    MOV EAX,0x1                         ; 10004a4d
        ;   Label: LAB_10004a4d
    RET                                 ; 10004a52

