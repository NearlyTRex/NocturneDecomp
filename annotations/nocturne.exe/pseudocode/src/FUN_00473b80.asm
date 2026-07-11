; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00473b80(int param_1,byte param_2)
;
;
; XREF[1]:
;   FUN_00474cf0 at 00474d26
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059ca74 = 00473b80
;   undefined4 DAT_0059caf0
;
; Called Functions:
;   FUN_00473c50
;   FUN_0056445f
;   FUN_00564486
;   FUN_00564494
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473b80
        ;   Label: FUN_00473b80
    MOV EBX,dword ptr [ESP + 0x8]       ; 00473b81
    TEST byte ptr [ESP + 0xc],0x4       ; 00473b85
    JNZ 0x00473ba7                      ; 00473b8a
        ;   XREF to: 00473ba7 (CONDITIONAL_JUMP)  ; LAB_00473ba7
    PUSH EBX                            ; 00473b8c
    MOV dword ptr [EBX + 0xc],0x59ca74  ; 00473b8d | PTR_FUN_0059ca74
    CALL FUN_00473c50                   ; 00473b94
        ;   XREF to: 00473c50 (UNCONDITIONAL_CALL)  ; undefined FUN_00473c50()
    ADD ESP,0x4                         ; 00473b99
    TEST byte ptr [ESP + 0xc],0x2       ; 00473b9c
    JNZ 0x00473bc2                      ; 00473ba1
        ;   XREF to: 00473bc2 (CONDITIONAL_JUMP)  ; LAB_00473bc2
    MOV EAX,EBX                         ; 00473ba3
    POP EBX                             ; 00473ba5
    RET                                 ; 00473ba6
    PUSH 0x59caf0                       ; 00473ba7 | DAT_0059caf0
        ;   Label: LAB_00473ba7
    PUSH EBX                            ; 00473bac
    CALL FUN_0056445f                   ; 00473bad
        ;   XREF to: 0056445f (UNCONDITIONAL_CALL)  ; undefined FUN_0056445f()
    ADD ESP,0x8                         ; 00473bb2
    PUSH EAX                            ; 00473bb5
    CALL FUN_00564486                   ; 00473bb6
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 00473bbb
    MOV EAX,EBX                         ; 00473bbe
    POP EBX                             ; 00473bc0
    RET                                 ; 00473bc1
    PUSH EBX                            ; 00473bc2
        ;   Label: LAB_00473bc2
    CALL FUN_00564494                   ; 00473bc3
        ;   XREF to: 00564494 (UNCONDITIONAL_CALL)  ; undefined FUN_00564494()
    ADD ESP,0x4                         ; 00473bc8
    MOV EAX,EBX                         ; 00473bcb
    POP EBX                             ; 00473bcd
    RET                                 ; 00473bce

