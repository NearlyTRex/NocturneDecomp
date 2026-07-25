; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 shape_edittool_cpp_CEditorTools_ctor_FUN_0046f9f0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_0046ef80 at 0046ef85
;
; Referenced Globals:
;   undefined4 DAT_01bcd07c
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;   FUN_0046fa80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046f9f0
        ;   Label: shape_edittool.cpp_CEditorTools_ctor_FUN_0046f9f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0046f9f1
    PUSH 0x938                          ; 0046f9f5
    XOR EDX,EDX                         ; 0046f9fa
    PUSH EDX                            ; 0046f9fc
    PUSH 0x1bcd080                      ; 0046f9fd
    MOV dword ptr [0x01bcd07c],EDX      ; 0046fa02 | DAT_01bcd07c
    CALL crt_memory.c_memset_FUN_00563cc0 ; 0046fa08
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; undefined crt_memory.c_memset_FUN_00563cc0()
    ADD ESP,0xc                         ; 0046fa0d
    PUSH EBX                            ; 0046fa10
    CALL FUN_0046fa80                   ; 0046fa11
        ;   XREF to: 0046fa80 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fa80()
    ADD ESP,0x4                         ; 0046fa16
    MOV EAX,EBX                         ; 0046fa19
    POP EBX                             ; 0046fa1b
    RET                                 ; 0046fa1c

