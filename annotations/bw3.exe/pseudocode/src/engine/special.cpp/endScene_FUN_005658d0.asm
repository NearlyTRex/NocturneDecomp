; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl engine_special_cpp_endScene_FUN_005658d0(void)
;
;
; XREF[1]:
;   core_dcamera.cpp_CDemonCamera_endScene_FUN_00449750 at 00449777
;
; Referenced Globals:
;   int g_INT_01c6cee8
;   void* g_PTR_02cf6000
;
; *****************************************************************************

section .text

    CMP dword ptr [0x01c6cee8],0x0      ; 005658d0 | g_INT_01c6cee8
        ;   Label: engine_special.cpp_endScene_FUN_005658d0
    JNZ 0x005658dc                      ; 005658d7
        ;   XREF to: 005658dc (CONDITIONAL_JUMP)  ; LAB_005658dc
    XOR EAX,EAX                         ; 005658d9
    RET                                 ; 005658db
    CALL dword ptr [0x02cf6000]         ; 005658dc | g_PTR_02cf6000
        ;   Label: LAB_005658dc
    RET                                 ; 005658e2

