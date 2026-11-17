; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_toggleX_FUN_00582cf0(void)
;
;
; Referenced Globals:
;   void* g_PTR_02c83440
;
; *****************************************************************************

section .text

    CMP dword ptr [0x02c83440],0x0      ; 00582cf0 | g_PTR_02c83440
        ;   Label: engine_special.cpp_toggleX_FUN_00582cf0
    JNZ 0x00582cfc                      ; 00582cf7
        ;   XREF to: 00582cfc (CONDITIONAL_JUMP)  ; LAB_00582cfc
    XOR EAX,EAX                         ; 00582cf9
    RET                                 ; 00582cfb
    CALL dword ptr [0x02c83440]         ; 00582cfc | g_PTR_02c83440
        ;   Label: LAB_00582cfc
    RET                                 ; 00582d02

