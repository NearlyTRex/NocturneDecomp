; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005c9e48(int param_1,undefined1 *param_2,int param_3)
;
;
; XREF[4]:
;   crt_time.c__strftime_FUN_005c2784 at 005c29e4
;   crt_unknown.c_FUN_005c39c8 at 005c39d8
;   crt_unknown.c_FUN_005c3a2c at 005c3a69
;   unkafter_2d.cpp_FUN_005ceab0 at 005ceb22
;
; Called Functions:
;   crt_unknown.c_FUN_005c9df0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c9e48
        ;   Label: crt_unknown.c_FUN_005c9e48
    MOV EAX,dword ptr [ESP + 0x8]       ; 005c9e49
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c9e4d
    MOV ECX,dword ptr [ESP + 0x10]      ; 005c9e51
    MOV EDX,EBX                         ; 005c9e55
    CMP ECX,0xa                         ; 005c9e57
    JNZ 0x005c9e68                      ; 005c9e5a
        ;   XREF to: 005c9e68 (CONDITIONAL_JUMP)  ; LAB_005c9e68
    TEST EAX,EAX                        ; 005c9e5c
    JGE 0x005c9e68                      ; 005c9e5e
        ;   XREF to: 005c9e68 (CONDITIONAL_JUMP)  ; LAB_005c9e68
    NEG EAX                             ; 005c9e60
    LEA EDX,[EBX + 0x1]                 ; 005c9e62
    MOV byte ptr [EBX],0x2d             ; 005c9e65
    PUSH ECX                            ; 005c9e68
        ;   Label: LAB_005c9e68
    PUSH EDX                            ; 005c9e69
    PUSH EAX                            ; 005c9e6a
    CALL crt_unknown.c_FUN_005c9df0     ; 005c9e6b
        ;   XREF to: 005c9df0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c9df0()
    ADD ESP,0xc                         ; 005c9e70
    MOV EAX,EBX                         ; 005c9e73
    POP EBX                             ; 005c9e75
    RET                                 ; 005c9e76

