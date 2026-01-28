; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown bool core_gabriela_cpp_FUN_004d7590(void)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d7590
        ;   Label: core_gabriela.cpp_FUN_004d7590
    CMP dword ptr [EAX + 0x1fbd4],0x0   ; 004d7594
    SETNZ AL                            ; 004d759b
    AND EAX,0xff                        ; 004d759e
    RET                                 ; 004d75a3

