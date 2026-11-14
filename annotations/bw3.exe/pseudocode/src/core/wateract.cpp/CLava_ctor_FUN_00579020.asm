; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLava * __cdecl core_wateract_cpp_CLava_ctor_FUN_00579020(CLava *this_ptr)
;
; Parameters:
; CLava *          Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_wateract.cpp_FUN_00578ff0 at 00579003
;
; Called Functions:
;   core_wateract.cpp_CWaterActor_ctor_FUN_00577d90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00579020
        ;   Label: core_wateract.cpp_CLava_ctor_FUN_00579020
    PUSH EDX                            ; 00579024
    CALL core_wateract.cpp_CWaterActor_ctor_FUN_00577d90 ; 00579025
        ;   XREF to: 00577d90 (UNCONDITIONAL_CALL)  ; CWaterActor * core_wateract.cpp_CWaterActor_ctor_FUN_00577d90(CWaterActor * this_ptr)
    MOV dword ptr [EAX + 0x154],0x5e5fc4 ; 0057902a
    ADD ESP,0x4                         ; 00579034
    MOV dword ptr [EAX + 0x298],0x1     ; 00579037
    RET                                 ; 00579041

