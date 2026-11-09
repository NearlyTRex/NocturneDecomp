; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_morph_cpp_FUN_005c2a94(void)
;
;
; XREF[1]:
;   unkafter_morph.cpp_FUN_005c2bcc at 005c2c52
;
; Referenced Globals:
;   void* PTR_TlsFree_005c8650 = 001c9220
;   undefined4 DAT_0061f2a0
;
; Called Functions:
;   TlsFree
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x0061f2a0]      ; 005c2a94 | DAT_0061f2a0
        ;   Label: unkafter_morph.cpp_FUN_005c2a94
    CMP EDX,-0x1                        ; 005c2a9a
    JZ 0x005c2ab1                       ; 005c2a9d
        ;   XREF to: 005c2ab1 (CONDITIONAL_JUMP)  ; LAB_005c2ab1
    PUSH EDX                            ; 005c2a9f
    CALL dword ptr CS:[0x5c8650]        ; 005c2aa0 | PTR_TlsFree_005c8650
    MOV dword ptr [0x0061f2a0],0xffffffff ; 005c2aa7 | DAT_0061f2a0
    RET                                 ; 005c2ab1
        ;   Label: LAB_005c2ab1

