; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_winfont_cpp_FUN_0058e0c0(CWinFont *param_1,char *param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; Called Functions:
;   engine_winfont.cpp_FUN_0058e110
;   engine_winfont.cpp_FUN_0058e450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e0c0
        ;   Label: engine_winfont.cpp_FUN_0058e0c0
    PUSH EBP                            ; 0058e0c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0058e0c2
    PUSH -0x1                           ; 0058e0c6
    PUSH -0x1                           ; 0058e0c8
    PUSH EBX                            ; 0058e0ca
    CALL engine_winfont.cpp_FUN_0058e450 ; 0058e0cb
        ;   XREF to: 0058e450 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_FUN_0058e450(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 0058e0d0
    TEST EAX,EAX                        ; 0058e0d3
    JNZ 0x0058e0da                      ; 0058e0d5
        ;   XREF to: 0058e0da (CONDITIONAL_JUMP)  ; LAB_0058e0da
    POP EBP                             ; 0058e0d7
    POP EBX                             ; 0058e0d8
    RET                                 ; 0058e0d9
    PUSH EDI                            ; 0058e0da
        ;   Label: LAB_0058e0da
    PUSH ESI                            ; 0058e0db
    MOV EDX,dword ptr [ESP + 0x28]      ; 0058e0dc
    PUSH EDX                            ; 0058e0e0
    MOV ECX,dword ptr [ESP + 0x28]      ; 0058e0e1
    PUSH ECX                            ; 0058e0e5
    MOV ESI,dword ptr [ESP + 0x28]      ; 0058e0e6
    PUSH ESI                            ; 0058e0ea
    MOV EDI,dword ptr [ESP + 0x28]      ; 0058e0eb
    PUSH EDI                            ; 0058e0ef
    MOV EBP,dword ptr [ESP + 0x28]      ; 0058e0f0
    PUSH EBP                            ; 0058e0f4
    MOV EAX,dword ptr [EBX + 0x6a48]    ; 0058e0f5
    PUSH EAX                            ; 0058e0fb
    PUSH EBX                            ; 0058e0fc
    CALL engine_winfont.cpp_FUN_0058e110 ; 0058e0fd
        ;   XREF to: 0058e110 (UNCONDITIONAL_CALL)  ; void engine_winfont.cpp_FUN_0058e110(CWinFont * this_ptr, HDC device_context, char * text_string, int x, ...)
    ADD ESP,0x1c                        ; 0058e102
    XOR EAX,EAX                         ; 0058e105
    POP ESI                             ; 0058e107
    POP EDI                             ; 0058e108
    POP EBP                             ; 0058e109
    POP EBX                             ; 0058e10a
    RET                                 ; 0058e10b

