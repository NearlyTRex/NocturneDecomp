; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_winrun_cpp_FUN_005908c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_02665a44
;
; Called Functions:
;   unkafter_winrun.cpp_FUN_00590910
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005908c0
        ;   Label: unkafter_winrun.cpp_FUN_005908c0
    PUSH ESI                            ; 005908c1
    PUSH EDI                            ; 005908c2
    MOV ECX,dword ptr [ESP + 0x10]      ; 005908c3
    MOV EBX,0x7fffffff                  ; 005908c7
    LEA EAX,[ECX*0x4 + 0x0]             ; 005908cc
    MOV ESI,0x80000001                  ; 005908d3
    SUB EAX,ECX                         ; 005908d8
    XOR EDX,EDX                         ; 005908da
    SHL EAX,0x4                         ; 005908dc
    MOV dword ptr [0x02665a44],EDX      ; 005908df | DAT_02665a44
    LEA EDX,[EAX + 0x30]                ; 005908e5
    ADD EAX,0xc                         ; 005908e8
        ;   Label: LAB_005908e8
    MOV dword ptr [EAX + 0x266597c],ESI ; 005908eb
    XOR EDI,EDI                         ; 005908f1
    MOV dword ptr [EAX + 0x2665978],EBX ; 005908f3
    MOV dword ptr [EAX + 0x2665980],EDI ; 005908f9
    CMP EAX,EDX                         ; 005908ff
    JNZ 0x005908e8                      ; 00590901
        ;   XREF to: 005908e8 (CONDITIONAL_JUMP)  ; LAB_005908e8
    PUSH ECX                            ; 00590903
    CALL unkafter_winrun.cpp_FUN_00590910 ; 00590904
        ;   XREF to: 00590910 (UNCONDITIONAL_CALL)  ; undefined unkafter_winrun.cpp_FUN_00590910()
    ADD ESP,0x4                         ; 00590909
    POP EDI                             ; 0059090c
    POP ESI                             ; 0059090d
    POP EBX                             ; 0059090e
    RET                                 ; 0059090f

