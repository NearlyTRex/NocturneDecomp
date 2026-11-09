; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 support_trstream_cpp_FUN_00574280(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00574280
        ;   Label: support_trstream.cpp_FUN_00574280
    MOV EDX,dword ptr [ESP + 0x8]       ; 00574281
    MOV EAX,dword ptr [ESP + 0xc]       ; 00574285
    TEST EAX,EAX                        ; 00574289
    JL 0x005742b1                       ; 0057428b
        ;   XREF to: 005742b1 (CONDITIONAL_JUMP)  ; LAB_005742b1
    CMP EAX,0xff                        ; 0057428d
    JG 0x005742b1                       ; 00574292
        ;   XREF to: 005742b1 (CONDITIONAL_JUMP)  ; LAB_005742b1
    CMP dword ptr [EDX + 0x4],0x0       ; 00574294
    JZ 0x005742b1                       ; 00574298
        ;   XREF to: 005742b1 (CONDITIONAL_JUMP)  ; LAB_005742b1
    MOV EBX,dword ptr [EDX + 0xc]       ; 0057429a
    TEST EBX,EBX                        ; 0057429d
    JLE 0x005742b1                      ; 0057429f
        ;   XREF to: 005742b1 (CONDITIONAL_JUMP)  ; LAB_005742b1
    PUSH ESI                            ; 005742a1
    MOV EAX,0x1                         ; 005742a2
    MOV ESI,EBX                         ; 005742a7
    SUB ESI,EAX                         ; 005742a9
    MOV dword ptr [EDX + 0xc],ESI       ; 005742ab
    POP ESI                             ; 005742ae
    POP EBX                             ; 005742af
    RET                                 ; 005742b0
    XOR EAX,EAX                         ; 005742b1
        ;   Label: LAB_005742b1
    POP EBX                             ; 005742b3
    RET                                 ; 005742b4

