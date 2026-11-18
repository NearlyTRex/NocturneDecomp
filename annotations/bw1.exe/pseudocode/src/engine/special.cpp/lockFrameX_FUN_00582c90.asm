; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_lockFrameX_FUN_00582c90(void)
;
;
; Referenced Globals:
;   int g_INT_0061b4a0 = 0x8
;   void* g_PTR_02c83438
;   int g_INT_02c834cc
;   int g_INT_02c834d4
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83438],0x0      ; 00582c90 | g_PTR_02c83438
        ;   Label: engine_special.cpp_lockFrameX_FUN_00582c90
    JNZ 0x00582c9c                      ; 00582c97
        ;   XREF to: 00582c9c (CONDITIONAL_JUMP)  ; LAB_00582c9c
    XOR EAX,EAX                         ; 00582c99
    RET                                 ; 00582c9b
        ;   Label: LAB_00582c9b
    CALL dword ptr [0x02c83438]         ; 00582c9c | g_PTR_02c83438
        ;   Label: LAB_00582c9c
    TEST EAX,EAX                        ; 00582ca2
    JZ 0x00582c9b                       ; 00582ca4
        ;   XREF to: 00582c9b (CONDITIONAL_JUMP)  ; LAB_00582c9b
    MOV EAX,[0x0061b4a0]                ; 00582ca6 | g_INT_0061b4a0
    MOV [0x02c834cc],EAX                ; 00582cab | g_INT_02c834cc
    MOV EAX,[0x02c834d4]                ; 00582cb0 | g_INT_02c834d4
    MOV [0x0061b4a0],EAX                ; 00582cb5 | g_INT_0061b4a0
    MOV EAX,0x1                         ; 00582cba
    RET                                 ; 00582cbf

