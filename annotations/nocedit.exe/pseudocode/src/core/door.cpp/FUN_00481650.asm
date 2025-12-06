; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_door.cpp_FUN_00481650()
;
;
; Called Functions:
;   core_event.cpp_FUN_004b1670
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00481650
        ;   Label: core_door.cpp_FUN_00481650
    MOV EBX,dword ptr [ESP + 0x8]       ; 00481651
    PUSH EBX                            ; 00481655
    CALL core_event.cpp_FUN_004b1670    ; 00481656 | undefined core_event.cpp_FUN_004b1670()
        ;   XREF to: 004b1670 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0048165b
    MOV EAX,EBX                         ; 0048165e
    POP EBX                             ; 00481660
    RET                                 ; 00481661

