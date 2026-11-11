; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; uint __cdecl support_trstream_cpp_COutStreamFile_putChar_FUN_005a18c0(COutStreamFile *this_ptr,byte param_2)
;
; Parameters:
; COutStreamFile * Stack[0x4]:4   this_ptr
; byte             Stack[0x8]:1   param_2
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005c2f00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a18c0
        ;   Label: support_trstream.cpp_COutStreamFile_putChar_FUN_005a18c0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005a18c1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a18c5
    TEST EDX,EDX                        ; 005a18c8
    JNZ 0x005a18d3                      ; 005a18ca
        ;   XREF to: 005a18d3 (CONDITIONAL_JUMP)  ; LAB_005a18d3
    MOV EAX,0xfffffffe                  ; 005a18cc
        ;   Label: LAB_005a18cc
    POP EBX                             ; 005a18d1
    RET                                 ; 005a18d2
    XOR EBX,EBX                         ; 005a18d3
        ;   Label: LAB_005a18d3
    PUSH EDX                            ; 005a18d5
    MOV BL,byte ptr [ESP + 0x10]        ; 005a18d6
    PUSH EBX                            ; 005a18da
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 005a18db
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 005a18e0
    CMP EAX,EBX                         ; 005a18e3
    JNZ 0x005a18cc                      ; 005a18e5
        ;   XREF to: 005a18cc (CONDITIONAL_JUMP)  ; LAB_005a18cc
    XOR EAX,EBX                         ; 005a18e7
    POP EBX                             ; 005a18e9
    RET                                 ; 005a18ea

