; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_FUN_0058af40(void)
;
; Local Variables:
; undefined1       Stack[-0x40]:1  local_40
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   core_skeledit.cpp_CSkeleton_FUN_00592690 at 005954fc
;
; Called Functions:
;   core_skeledit.cpp_CBoneStructure_FUN_0058ac80
;   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
;   crt_stack.c___STK_FUN_005ff9f3
;
; *****************************************************************************

section .text

    PUSH 0x4c                           ; 0058af40
        ;   Label: core_skeledit.cpp_FUN_0058af40
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058af45
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058af4a
    PUSH EBP                            ; 0058af4b
    SUB ESP,0x38                        ; 0058af4c
    MOV EBX,dword ptr [ESP + 0x44]      ; 0058af4f
    XOR EDX,EDX                         ; 0058af53
    MOV ECX,dword ptr [EBX]             ; 0058af55
    MOV dword ptr [ESP + 0x30],EDX      ; 0058af57
    TEST ECX,ECX                        ; 0058af5b
    JLE 0x0058afbe                      ; 0058af5d
        ;   XREF to: 0058afbe (CONDITIONAL_JUMP)  ; LAB_0058afbe
    PUSH EDI                            ; 0058af5f
    PUSH ESI                            ; 0058af60
    MOV EBP,dword ptr [ESP + 0x4c]      ; 0058af61
    MOV dword ptr [ESP + 0x3c],EBX      ; 0058af65
    MOV EBX,dword ptr [ESP + 0x50]      ; 0058af69
    ADD EBP,0x58                        ; 0058af6d
    PUSH EBP                            ; 0058af70
        ;   Label: LAB_0058af70
    PUSH EBX                            ; 0058af71
    LEA ESI,[ESP + 0x10]                ; 0058af72
    CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10 ; 0058af76
        ;   XREF to: 005f4f10 (UNCONDITIONAL_CALL)  ; CMatrix3x4f * core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10(CMatrix3x4f * matrix_a, CMatrix3x4f * matrix_b, CMatrix3x4f * matrix_out)
    ADD ESP,0x8                         ; 0058af7b
    MOV EDI,dword ptr [ESP + 0x3c]      ; 0058af7e
    MOV ECX,0xc                         ; 0058af82
    LEA ESI,[ESP + 0x8]                 ; 0058af87
    LEA EDI,[EDI + 0x58]                ; 0058af8b
    MOVSD.REP ES:EDI,ESI                ; 0058af8e
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0058af90
    MOV EDI,dword ptr [ESP + 0x38]      ; 0058af94
    ADD ESI,0x84                        ; 0058af98
    INC EDI                             ; 0058af9e
    MOV dword ptr [ESP + 0x3c],ESI      ; 0058af9f
    MOV dword ptr [ESP + 0x38],EDI      ; 0058afa3
    MOV ESI,EDI                         ; 0058afa7
    MOV EDI,dword ptr [ESP + 0x4c]      ; 0058afa9
    ADD EBP,0x84                        ; 0058afad
    MOV EAX,dword ptr [EDI]             ; 0058afb3
    ADD EBX,0x30                        ; 0058afb5
    CMP ESI,EAX                         ; 0058afb8
    JL 0x0058af70                       ; 0058afba
        ;   XREF to: 0058af70 (CONDITIONAL_JUMP)  ; LAB_0058af70
    POP ESI                             ; 0058afbc
    POP EDI                             ; 0058afbd
    MOV EDX,dword ptr [ESP + 0x44]      ; 0058afbe
        ;   Label: LAB_0058afbe
    PUSH EDX                            ; 0058afc2
    CALL core_skeledit.cpp_CBoneStructure_FUN_0058ac80 ; 0058afc3
        ;   XREF to: 0058ac80 (UNCONDITIONAL_CALL)  ; void core_skeledit.cpp_CBoneStructure_FUN_0058ac80(CBoneStructure * this_ptr)
    ADD ESP,0x4                         ; 0058afc8
    ADD ESP,0x38                        ; 0058afcb
    POP EBP                             ; 0058afce
    POP EBX                             ; 0058afcf
    RET                                 ; 0058afd0

