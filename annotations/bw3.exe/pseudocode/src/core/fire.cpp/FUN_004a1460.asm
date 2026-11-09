; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CFireEffect * __cdecl core_fire_cpp_FUN_004a1460(CFireEffect *this_ptr)
;
; Parameters:
; CFireEffect *    Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_fire.cpp_staticInit_FUN_00496930 at 00496935
;
; Called Functions:
;   core_fire.cpp_FUN_004a1480
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1460
        ;   Label: core_fire.cpp_FUN_004a1460
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a1461
    PUSH EBX                            ; 004a1465
    CALL core_fire.cpp_FUN_004a1480     ; 004a1466
        ;   XREF to: 004a1480 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_004a1480()
    ADD ESP,0x4                         ; 004a146b
    MOV EAX,EBX                         ; 004a146e
    POP EBX                             ; 004a1470
    RET                                 ; 004a1471

