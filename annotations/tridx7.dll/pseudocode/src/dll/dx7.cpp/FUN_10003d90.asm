; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void dll_dx7_cpp_FUN_10003d90(ushort *param_1,uint param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   dll_dx7.cpp_uploadCurrentTexture_FUN_10003a80 at 10003b94
;
; Referenced Globals:
;   int g_HWRedShift = 0x0
;   int g_HWBlueShift = 0x0
;   int g_HWGreenShift = 0x0
;
; Called Functions:
;   dll_dx7.cpp_FUN_10003a30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 10003d90
        ;   Label: dll_dx7.cpp_FUN_10003d90
    SUB ESP,0x8                         ; 10003d94
    PUSH EBX                            ; 10003d97
    PUSH ESI                            ; 10003d98
    PUSH EDI                            ; 10003d99
    PUSH EBP                            ; 10003d9a
    PUSH EAX                            ; 10003d9b
    CALL dll_dx7.cpp_FUN_10003a30       ; 10003d9c
        ;   XREF to: 10003a30 (UNCONDITIONAL_CALL)  ; undefined dll_dx7.cpp_FUN_10003a30()
    ADD ESP,0x4                         ; 10003da1
    CMP dword ptr [ESP + 0x24],0x0      ; 10003da4
    JLE 0x10003e34                      ; 10003da9
        ;   XREF to: 10003e34 (CONDITIONAL_JUMP)  ; LAB_10003e34
    MOV ECX,dword ptr [ESP + 0x20]      ; 10003daf
    MOV EDX,dword ptr [ESP + 0x24]      ; 10003db3
    AND ECX,0xfffffffe                  ; 10003db7
    MOV dword ptr [ESP + 0x14],EDX      ; 10003dba
    MOV dword ptr [ESP + 0x10],ECX      ; 10003dbe
    CMP dword ptr [ESP + 0x24],0x0      ; 10003dc2
        ;   Label: LAB_10003dc2
    MOV ESI,dword ptr [ESP + 0x1c]      ; 10003dc7
    JLE 0x10003e26                      ; 10003dcb
        ;   XREF to: 10003e26 (CONDITIONAL_JUMP)  ; LAB_10003e26
    MOV EDI,dword ptr [ESP + 0x24]      ; 10003dcd
    MOV EDX,dword ptr [EAX]             ; 10003dd1
        ;   Label: LAB_10003dd1
    MOV CL,byte ptr [0x101386a8]        ; 10003dd3 | g_HWRedShift
    MOV EBX,EDX                         ; 10003dd9
    MOV EBP,EDX                         ; 10003ddb
    SHR EBX,0x14                        ; 10003ddd
    ADD EAX,0x4                         ; 10003de0
    AND BX,0xf                          ; 10003de3
    ADD ESI,0x2                         ; 10003de7
    SHL BX,CL                           ; 10003dea
    SHR EBP,0x4                         ; 10003ded
    MOV CL,byte ptr [0x10226e80]        ; 10003df0 | g_HWBlueShift
    AND BP,0xf                          ; 10003df6
    SHL BP,CL                           ; 10003dfa
    OR BX,BP                            ; 10003dfd
    MOV CL,byte ptr [0x10240620]        ; 10003e00 | g_HWGreenShift
    MOV EBP,EDX                         ; 10003e06
    SHR EBP,0xc                         ; 10003e08
    SHR EDX,0x1c                        ; 10003e0b
    AND BP,0xf                          ; 10003e0e
    SHL BP,CL                           ; 10003e12
    OR BX,BP                            ; 10003e15
    SHL DX,0xc                          ; 10003e18
    OR BX,DX                            ; 10003e1c
    DEC EDI                             ; 10003e1f
    MOV word ptr [ESI + -0x2],BX        ; 10003e20
    JNZ 0x10003dd1                      ; 10003e24
        ;   XREF to: 10003dd1 (CONDITIONAL_JUMP)  ; LAB_10003dd1
    MOV ECX,dword ptr [ESP + 0x10]      ; 10003e26
        ;   Label: LAB_10003e26
    ADD dword ptr [ESP + 0x1c],ECX      ; 10003e2a
    DEC dword ptr [ESP + 0x14]          ; 10003e2e
    JNZ 0x10003dc2                      ; 10003e32
        ;   XREF to: 10003dc2 (CONDITIONAL_JUMP)  ; LAB_10003dc2
    POP EBP                             ; 10003e34
        ;   Label: LAB_10003e34
    POP EDI                             ; 10003e35
    POP ESI                             ; 10003e36
    POP EBX                             ; 10003e37
    ADD ESP,0x8                         ; 10003e38
    RET                                 ; 10003e3b

