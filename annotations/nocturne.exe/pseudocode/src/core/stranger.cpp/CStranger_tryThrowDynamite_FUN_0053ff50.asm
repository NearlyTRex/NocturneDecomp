; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_CStranger_tryThrowDynamite_FUN_0053ff50(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_0053fc60 at 0053fc84
;
; Referenced Globals:
;   float FLOAT_005a2704 = 10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053ff50
        ;   Label: core_stranger.cpp_CStranger_tryThrowDynamite_FUN_0053ff50
    PUSH ESI                            ; 0053ff51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0053ff52
    MOV EDX,dword ptr [EBX + 0x24f0]    ; 0053ff56
    XOR ESI,ESI                         ; 0053ff5c
    TEST EDX,EDX                        ; 0053ff5e
    JNZ 0x0053ff93                      ; 0053ff60
        ;   XREF to: 0053ff93 (CONDITIONAL_JUMP)  ; LAB_0053ff93
    MOV ECX,dword ptr [EBX + 0x1fa94]   ; 0053ff62
        ;   Label: LAB_0053ff62
    TEST ECX,ECX                        ; 0053ff68
    JZ 0x0053ffa8                       ; 0053ff6a
        ;   XREF to: 0053ffa8 (CONDITIONAL_JUMP)  ; LAB_0053ffa8
    CMP dword ptr [ECX + 0x2d8],0x3     ; 0053ff6c
    JNZ 0x0053ffa8                      ; 0053ff73
        ;   XREF to: 0053ffa8 (CONDITIONAL_JUMP)  ; LAB_0053ffa8
    FLD float ptr [0x005a2704]          ; 0053ff75 | FLOAT_005a2704
        ;   Label: LAB_0053ff75
    MOV dword ptr [EBX + 0x1faa0],0x3   ; 0053ff7b
    MOV EAX,0x1                         ; 0053ff85
    FSTP float ptr [EBX + 0x1fa4c]      ; 0053ff8a
    POP ESI                             ; 0053ff90
    POP EBX                             ; 0053ff91
    RET                                 ; 0053ff92
    MOV EAX,EDX                         ; 0053ff93
        ;   Label: LAB_0053ff93
    PUSH EAX                            ; 0053ff95
    MOV EDX,dword ptr [EDX + 0x14c]     ; 0053ff96
    CALL dword ptr [EDX + 0x6c]         ; 0053ff9c
    ADD ESP,0x4                         ; 0053ff9f
    TEST AL,0x4                         ; 0053ffa2
    JZ 0x0053ff62                       ; 0053ffa4
        ;   XREF to: 0053ff62 (CONDITIONAL_JUMP)  ; LAB_0053ff62
    JMP 0x0053ff75                      ; 0053ffa6
        ;   XREF to: 0053ff75 (UNCONDITIONAL_JUMP)  ; LAB_0053ff75
    TEST ESI,ESI                        ; 0053ffa8
        ;   Label: LAB_0053ffa8
    JNZ 0x0053ff75                      ; 0053ffaa
        ;   XREF to: 0053ff75 (CONDITIONAL_JUMP)  ; LAB_0053ff75
    XOR EAX,EAX                         ; 0053ffac
    POP ESI                             ; 0053ffae
    POP EBX                             ; 0053ffaf
    RET                                 ; 0053ffb0

