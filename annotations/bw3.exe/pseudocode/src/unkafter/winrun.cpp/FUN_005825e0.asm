; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005825e0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02d22fa4
;
; Called Functions:
;   unkafter_winrun.cpp_FUN_00582630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005825e0
        ;   Label: unkafter_winrun.cpp_FUN_005825e0
    PUSH ESI                            ; 005825e1
    PUSH EDI                            ; 005825e2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005825e3
    MOV EBX,0x7fffffff                  ; 005825e7
    LEA EAX,[ECX*0x4 + 0x0]             ; 005825ec
    MOV ESI,0x80000001                  ; 005825f3
    SUB EAX,ECX                         ; 005825f8
    XOR EDX,EDX                         ; 005825fa
    SHL EAX,0x4                         ; 005825fc
    MOV dword ptr [0x02d22fa4],EDX      ; 005825ff | DAT_02d22fa4
    LEA EDX,[EAX + 0x30]                ; 00582605
    ADD EAX,0xc                         ; 00582608
        ;   Label: LAB_00582608
    MOV dword ptr [EAX + 0x2d22edc],ESI ; 0058260b
    XOR EDI,EDI                         ; 00582611
    MOV dword ptr [EAX + 0x2d22ed8],EBX ; 00582613
    MOV dword ptr [EAX + 0x2d22ee0],EDI ; 00582619
    CMP EAX,EDX                         ; 0058261f
    JNZ 0x00582608                      ; 00582621
        ;   XREF to: 00582608 (CONDITIONAL_JUMP)  ; LAB_00582608
    PUSH ECX                            ; 00582623
    CALL unkafter_winrun.cpp_FUN_00582630 ; 00582624
        ;   XREF to: 00582630 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_00582630()
    ADD ESP,0x4                         ; 00582629
    POP EDI                             ; 0058262c
    POP ESI                             ; 0058262d
    POP EBX                             ; 0058262e
    RET                                 ; 0058262f

