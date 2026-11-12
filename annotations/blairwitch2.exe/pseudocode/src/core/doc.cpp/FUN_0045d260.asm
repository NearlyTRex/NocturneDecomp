; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_doc_cpp_FUN_0045d260(int param_1)
;
;
; XREF[1]:
;   core_inv.cpp_FUN_004dc8c0 at 004dca46
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0045d260
        ;   Label: core_doc.cpp_FUN_0045d260
    MOV dword ptr [EAX + 0x2d08],0x0    ; 0045d264
    MOV dword ptr [EAX + 0x2d04],0xf    ; 0045d26e
    RET                                 ; 0045d278

