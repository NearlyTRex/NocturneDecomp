; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_minecar_cpp_FUN_004f2070(CPlatform *param_1,int param_2)
;
;
; Called Functions:
;   core_platfrm.cpp_FUN_00518280
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2070
        ;   Label: core_minecar.cpp_FUN_004f2070
    PUSH EDX                            ; 004f2074
    CALL core_platfrm.cpp_FUN_00518280  ; 004f2075
        ;   XREF to: 00518280 (UNCONDITIONAL_CALL)  ; void core_platfrm.cpp_FUN_00518280(CPlatform * this_ptr)
    ADD ESP,0x4                         ; 004f207a
    MOV EAX,dword ptr [ESP + 0x4]       ; 004f207d
    MOV dword ptr [EAX + 0x884],0x0     ; 004f2081
    RET                                 ; 004f208b

