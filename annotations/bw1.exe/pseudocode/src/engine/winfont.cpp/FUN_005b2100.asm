; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 engine_winfont_cpp_FUN_005b2100(CWinFont *param_1,LPCSTR param_2)
;
;
; Referenced Globals:
;   void* PTR_GetTextExtentPoint32A_005d041c = 001d0850
;
; Called Functions:
;   engine_winfont.cpp_FUN_005b1e90
;   GetTextExtentPoint32A
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b2100
        ;   Label: engine_winfont.cpp_FUN_005b2100
    SUB ESP,0x8                         ; 005b2101
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b2104
    PUSH -0x1                           ; 005b2108
    PUSH -0x1                           ; 005b210a
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b210c
    PUSH EDX                            ; 005b2110
    CALL engine_winfont.cpp_FUN_005b1e90 ; 005b2111
        ;   XREF to: 005b1e90 (UNCONDITIONAL_CALL)  ; int engine_winfont.cpp_FUN_005b1e90(CWinFont * this_ptr, int width, int height)
    ADD ESP,0xc                         ; 005b2116
    TEST EAX,EAX                        ; 005b2119
    JNZ 0x005b2122                      ; 005b211b
        ;   XREF to: 005b2122 (CONDITIONAL_JUMP)  ; LAB_005b2122
    ADD ESP,0x8                         ; 005b211d
    POP EBX                             ; 005b2120
    RET                                 ; 005b2121
    PUSH EDI                            ; 005b2122
        ;   Label: LAB_005b2122
    MOV EDI,EBX                         ; 005b2123
    SUB ECX,ECX                         ; 005b2125
    DEC ECX                             ; 005b2127
    XOR EAX,EAX                         ; 005b2128
    SCASB.REPNE ES:EDI                  ; 005b212a
    NOT ECX                             ; 005b212c
    DEC ECX                             ; 005b212e
    LEA EAX,[ESP + 0x4]                 ; 005b212f
    PUSH EAX                            ; 005b2133
    PUSH ECX                            ; 005b2134
    MOV EAX,dword ptr [ESP + 0x1c]      ; 005b2135
    PUSH EBX                            ; 005b2139
    MOV ECX,dword ptr [EAX + 0x6a48]    ; 005b213a
    PUSH ECX                            ; 005b2140
    CALL dword ptr CS:[0x5d041c]        ; 005b2141 | PTR_GetTextExtentPoint32A_005d041c
    TEST EAX,EAX                        ; 005b2148
    JNZ 0x005b2150                      ; 005b214a
        ;   XREF to: 005b2150 (CONDITIONAL_JUMP)  ; LAB_005b2150
    MOV dword ptr [ESP + 0x4],EAX       ; 005b214c
    MOV EAX,dword ptr [ESP + 0x4]       ; 005b2150
        ;   Label: LAB_005b2150
    POP EDI                             ; 005b2154
    ADD ESP,0x8                         ; 005b2155
    POP EBX                             ; 005b2158
    RET                                 ; 005b2159

