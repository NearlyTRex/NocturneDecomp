; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c8b38(int param_1,uint param_2)
;
;
; XREF[5]:
;   crt_unknown.c_FUN_005c6e80 at 005c6ec9
;   crt_unknown.c_FUN_005c6f10 at 005c6fa2
;   crt_unknown.c_FUN_005c7280 at 005c74af
;   crt_unknown.c_FUN_005c8640 at 005c8692
;   unkafter_2d.cpp_FUN_005cdce0 at 005cddfa
;
; Referenced Globals:
;   undefined4 DAT_006267e4
;   void* PTR_DAT_00626834 = 006267e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c8b38
        ;   Label: crt_unknown.c_FUN_005c8b38
    MOV EDX,dword ptr [ESP + 0xc]       ; 005c8b39
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c8b3d
    SHL EAX,0x2                         ; 005c8b41
    TEST EDX,EDX                        ; 005c8b44
    JZ 0x005c8b56                       ; 005c8b46
        ;   XREF to: 005c8b56 (CONDITIONAL_JUMP)  ; LAB_005c8b56
    MOV EBX,dword ptr [0x00626834]      ; 005c8b48 | PTR_DAT_00626834
    OR DH,0x40                          ; 005c8b4e
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005c8b51 | DAT_006267e4
    POP EBX                             ; 005c8b54
    RET                                 ; 005c8b55
    MOV EBX,dword ptr [0x00626834]      ; 005c8b56 | PTR_DAT_00626834
        ;   Label: LAB_005c8b56
    MOV dword ptr [EBX + EAX*0x1],EDX   ; 005c8b5c | DAT_006267e4
    POP EBX                             ; 005c8b5f
    RET                                 ; 005c8b60

