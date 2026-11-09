; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c4c80(int param_1)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c293c at 005c296d
;
; Referenced Globals:
;   void* PTR_GetCurrentThreadId_005c8580 = 001c8e42
;
; Called Functions:
;   GetCurrentThreadId
;   unkafter_morph.cpp_FUN_005c2da0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4c80
        ;   Label: unkafter_morph.cpp_FUN_005c4c80
    MOV EBX,dword ptr [ESP + 0x8]       ; 005c4c81
    TEST EBX,EBX                        ; 005c4c85
    JZ 0x005c4ca8                       ; 005c4c87
        ;   XREF to: 005c4ca8 (CONDITIONAL_JUMP)  ; LAB_005c4ca8
    PUSH 0x0                            ; 005c4c89
    PUSH EBX                            ; 005c4c8b
    MOV dword ptr [EBX + 0xc],0x1       ; 005c4c8c
    CALL unkafter_morph.cpp_FUN_005c2da0 ; 005c4c93
        ;   XREF to: 005c2da0 (UNCONDITIONAL_CALL)  ; undefined unkafter_morph.cpp_FUN_005c2da0()
    ADD ESP,0x8                         ; 005c4c98
    CALL dword ptr CS:[0x5c8580]        ; 005c4c9b | PTR_GetCurrentThreadId_005c8580
    MOV dword ptr [EBX + 0xda],EAX      ; 005c4ca2
    POP EBX                             ; 005c4ca8
        ;   Label: LAB_005c4ca8
    RET                                 ; 005c4ca9

