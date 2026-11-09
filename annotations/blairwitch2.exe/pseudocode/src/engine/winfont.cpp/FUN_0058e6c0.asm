; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_winfont_cpp_FUN_0058e6c0(CWinFont *param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005c8410 = 001c8838
;
; Called Functions:
;   engine_winfont.cpp_FUN_0058e450
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e6c0
        ;   Label: engine_winfont.cpp_FUN_0058e6c0
    SUB ESP,0x8                         ; 0058e6c1
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058e6c4
    PUSH -0x1                           ; 0058e6c8
    PUSH -0x1                           ; 0058e6ca
    MOV EDX,dword ptr [ESP + 0x18]      ; 0058e6cc
    PUSH EDX                            ; 0058e6d0
    CALL engine_winfont.cpp_FUN_0058e450 ; 0058e6d1
        ;   XREF to: 0058e450 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_FUN_0058e450(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 0058e6d6
    TEST EAX,EAX                        ; 0058e6d9
    JNZ 0x0058e6e2                      ; 0058e6db
        ;   XREF to: 0058e6e2 (CONDITIONAL_JUMP)  ; LAB_0058e6e2
    ADD ESP,0x8                         ; 0058e6dd
    POP EBX                             ; 0058e6e0
    RET                                 ; 0058e6e1
    PUSH EDI                            ; 0058e6e2
        ;   Label: LAB_0058e6e2
    MOV EDI,EBX                         ; 0058e6e3
    SUB ECX,ECX                         ; 0058e6e5
    DEC ECX                             ; 0058e6e7
    XOR EAX,EAX                         ; 0058e6e8
    SCASB.REPNE ES:EDI                  ; 0058e6ea
    NOT ECX                             ; 0058e6ec
    DEC ECX                             ; 0058e6ee
    LEA EAX,[ESP + 0x4]                 ; 0058e6ef
    PUSH EAX                            ; 0058e6f3
    PUSH ECX                            ; 0058e6f4
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0058e6f5
    PUSH EBX                            ; 0058e6f9
    MOV ECX,dword ptr [EAX + 0x6a48]    ; 0058e6fa
    PUSH ECX                            ; 0058e700
    CALL dword ptr CS:[0x5c8410]        ; 0058e701 | PTR_GetTextExtentPoint32A_005c8410
    TEST EAX,EAX                        ; 0058e708
    JNZ 0x0058e710                      ; 0058e70a
        ;   XREF to: 0058e710 (CONDITIONAL_JUMP)  ; LAB_0058e710
    MOV dword ptr [ESP + 0x4],EAX       ; 0058e70c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0058e710
        ;   Label: LAB_0058e710
    POP EDI                             ; 0058e714
    ADD ESP,0x8                         ; 0058e715
    POP EBX                             ; 0058e718
    RET                                 ; 0058e719

