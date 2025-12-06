; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined crt_unknown.c_FUN_0060a394()
;
;
; XREF[1]:
;   crt_unknown.c_staticFinal_FUN_0060a4cc at 0060a552
;
; Referenced Globals:
;   TlsFree* PTR_TlsFree_00611650 = 00212254
;   DWORD g_TLSIndex = 0xffffffff
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00684ee0]      ; 0060a394 | DWORD g_TLSIndex
        ;   Label: crt_unknown.c_FUN_0060a394
    CMP EDX,-0x1                        ; 0060a39a
    JZ 0x0060a3b1                       ; 0060a39d | LAB_0060a3b1
        ;   XREF to: 0060a3b1 (CONDITIONAL_JUMP)
    PUSH EDX                            ; 0060a39f
    CALL dword ptr CS:[0x611650]        ; 0060a3a0 | TlsFree * PTR_TlsFree_00611650
    MOV dword ptr [0x00684ee0],0xffffffff ; 0060a3a7 | DWORD g_TLSIndex
    RET                                 ; 0060a3b1
        ;   Label: LAB_0060a3b1

