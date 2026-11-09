; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void support_trstream_cpp_FUN_005743f0(int param_1)
;
;
; XREF[1]:
;   support_trstream.cpp_CInStreamMemory_dtor_FUN_005741d0 at 005741e3
;
; Called Functions:
;   crt_unknown.c_FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005743f0
        ;   Label: support_trstream.cpp_FUN_005743f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005743f1
    MOV EDX,dword ptr [EBX + 0x4]       ; 005743f5
    TEST EDX,EDX                        ; 005743f8
    JZ 0x00574409                       ; 005743fa
        ;   XREF to: 00574409 (CONDITIONAL_JUMP)  ; LAB_00574409
    CMP dword ptr [EBX + 0x10],0x0      ; 005743fc
    JNZ 0x00574427                      ; 00574400
        ;   XREF to: 00574427 (CONDITIONAL_JUMP)  ; LAB_00574427
    MOV dword ptr [EBX + 0x4],0x0       ; 00574402
        ;   Label: LAB_00574402
    MOV dword ptr [EBX + 0x8],0x0       ; 00574409
        ;   Label: LAB_00574409
    MOV dword ptr [EBX + 0xc],0x0       ; 00574410
    MOV dword ptr [EBX + 0x10],0x0      ; 00574417
    MOV dword ptr [EBX + 0x4],0x0       ; 0057441e
    POP EBX                             ; 00574425
    RET                                 ; 00574426
    PUSH EDX                            ; 00574427
        ;   Label: LAB_00574427
    CALL crt_unknown.c_FUN_005a3770     ; 00574428
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a3770()
    ADD ESP,0x4                         ; 0057442d
    JMP 0x00574402                      ; 00574430
        ;   XREF to: 00574402 (UNCONDITIONAL_JUMP)  ; LAB_00574402

