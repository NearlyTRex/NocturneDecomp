; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_2d_cpp_FUN_005cda60(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   unkafter_2d.cpp_FUN_005cdaad at 005cdacd
;
; Referenced Globals:
;   undefined4 DAT_005fb299
;   undefined4 DAT_00626b50
;
; Called Functions:
;   crt_stdio.c_fputc_FUN_005c2f00
;   unkafter_2d.cpp_FUN_005ce120
;   unkafter_2d.cpp_FUN_005ce150
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005cda60
        ;   Label: unkafter_2d.cpp_FUN_005cda60
    MOV EBP,ESP                         ; 005cda61
    PUSH EBX                            ; 005cda63
    PUSH 0x2                            ; 005cda64
    CALL unkafter_2d.cpp_FUN_005ce120   ; 005cda66
        ;   XREF to: 005ce120 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce120()
    ADD ESP,0x4                         ; 005cda6b
    MOV EBX,EAX                         ; 005cda6e
    PUSH EAX                            ; 005cda70
    MOV EAX,dword ptr [EBP + 0x8]       ; 005cda71
    MOV EDX,dword ptr [EAX*0x4 + 0x626b50] ; 005cda74 | DAT_00626b50
    PUSH EDX                            ; 005cda7b
    CALL unkafter_2d.cpp_FUN_005ce150   ; 005cda7c
        ;   XREF to: 005ce150 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce150()
    ADD ESP,0x8                         ; 005cda81
    PUSH EBX                            ; 005cda84
    PUSH 0x5fb299                       ; 005cda85 | DAT_005fb299
    CALL unkafter_2d.cpp_FUN_005ce150   ; 005cda8a
        ;   XREF to: 005ce150 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce150()
    ADD ESP,0x8                         ; 005cda8f
    PUSH EBX                            ; 005cda92
    MOV ECX,dword ptr [EBP + 0xc]       ; 005cda93
    PUSH ECX                            ; 005cda96
    CALL unkafter_2d.cpp_FUN_005ce150   ; 005cda97
        ;   XREF to: 005ce150 (UNCONDITIONAL_CALL)  ; undefined unkafter_2d.cpp_FUN_005ce150()
    ADD ESP,0x8                         ; 005cda9c
    PUSH EBX                            ; 005cda9f
    PUSH 0xa                            ; 005cdaa0
    CALL crt_stdio.c_fputc_FUN_005c2f00 ; 005cdaa2
        ;   XREF to: 005c2f00 (UNCONDITIONAL_CALL)  ; undefined crt_stdio.c_fputc_FUN_005c2f00()
    ADD ESP,0x8                         ; 005cdaa7
    POP EBX                             ; 005cdaaa
    POP EBP                             ; 005cdaab
    RET                                 ; 005cdaac

