; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_FUN_0046ed80(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0053f310 at 0053f4a6
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0046ed80
        ;   Label: core_dynamite.cpp_FUN_0046ed80
    FLD float ptr [EAX + 0x570]         ; 0046ed84
    FLDZ                                ; 0046ed8a
    FCOMPP                              ; 0046ed8c
    FNSTSW AX                           ; 0046ed8e
    SAHF                                ; 0046ed90
    JNC 0x0046ed99                      ; 0046ed91
        ;   XREF to: 0046ed99 (CONDITIONAL_JUMP)  ; LAB_0046ed99
    MOV EAX,0x1                         ; 0046ed93
    RET                                 ; 0046ed98
    XOR EAX,EAX                         ; 0046ed99
        ;   Label: LAB_0046ed99
    RET                                 ; 0046ed9b

