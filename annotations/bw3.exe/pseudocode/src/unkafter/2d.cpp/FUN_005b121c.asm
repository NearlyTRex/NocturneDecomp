; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005b121c(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005b0a70 at 005b0ad8
;
; Called Functions:
;   unkafter_2d.cpp_FUN_005b1090
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b121c
        ;   Label: unkafter_2d.cpp_FUN_005b121c
    PUSH 0x1                            ; 005b121d
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b121f
    PUSH EDX                            ; 005b1223
    MOV EBX,dword ptr [ESP + 0x14]      ; 005b1224
    PUSH EBX                            ; 005b1228
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b1229
    PUSH ECX                            ; 005b122d
    CALL unkafter_2d.cpp_FUN_005b1090   ; 005b122e
        ;   XREF to: 005b1090 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005b1090()
    ADD ESP,0x10                        ; 005b1233
    POP EBX                             ; 005b1236
    RET                                 ; 005b1237

