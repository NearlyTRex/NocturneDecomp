; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_cpp.c_handlePureVirtualCall_FUN_006015f1()
;
;
; Referenced Globals:
;   TerminatedCString s_pure_virtual_function_ca_00658f78
;   short g_PureVirtualCallFlag = 0x0
;
; Called Functions:
;   crt_cpp.c_reportPureVirtualError_FUN_00605b23
;
; *****************************************************************************

section .text

    CMP word ptr [0x00685278],0x0       ; 006015f1 | g_PureVirtualCallFlag
        ;   Label: crt_cpp.c_handlePureVirtualCall_FUN_006015f1
    JZ 0x006015fc                       ; 006015f9
        ;   XREF to: 006015fc (CONDITIONAL_JUMP)  ; LAB_006015fc
    RET                                 ; 006015fb
    PUSH EBX                            ; 006015fc
        ;   Label: LAB_006015fc
    PUSH 0x1                            ; 006015fd
    MOV EBX,0x1                         ; 006015ff
    PUSH 0x658f78                       ; 00601604 | = "pure virtual function called!"
    MOV word ptr [0x00685278],BX        ; 00601609 | g_PureVirtualCallFlag
    CALL crt_cpp.c_reportPureVirtualError_FUN_00605b23 ; 00601610
        ;   XREF to: 00605b23 (UNCONDITIONAL_CALL)  ; void crt_cpp.c_reportPureVirtualError_FUN_00605b23(char * error_message, int exit_code)
    ADD ESP,0x8                         ; 00601615
    POP EBX                             ; 00601618
    RET                                 ; 00601619

