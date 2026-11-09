; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_FUN_005a8db0(undefined4 param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   core_searpart.cpp_CSearchParty_ctor_FUN_005a8cf0 at 005a8d74
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a8db0
        ;   Label: core_searpart.cpp_FUN_005a8db0
    TEST EAX,EAX                        ; 005a8db4
    JNZ 0x005a8db9                      ; 005a8db6
        ;   XREF to: 005a8db9 (CONDITIONAL_JUMP)  ; LAB_005a8db9
    RET                                 ; 005a8db8
    PUSH EAX                            ; 005a8db9
        ;   Label: LAB_005a8db9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8dba
    PUSH dword ptr [ESP + 0xc]          ; 005a8dbe
    PUSH EDX                            ; 005a8dc2
    CALL unkafter_basicene.cpp_FUN_0059e8c0 ; 005a8dc3
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a8dc8
    RET                                 ; 005a8dcb

