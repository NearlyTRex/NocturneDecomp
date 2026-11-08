; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a69bc(int param_1)
;
;
; XREF[1]:
;   FUN_005a6a78 at 005a6d15
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a69bc
        ;   Label: FUN_005a69bc
    PUSH ESI                            ; 005a69bd
    PUSH EDI                            ; 005a69be
    PUSH EBP                            ; 005a69bf
    MOV EAX,dword ptr [ESP + 0x14]      ; 005a69c0
    TEST byte ptr [EAX + 0x1e],0x8      ; 005a69c4
    JNZ 0x005a69fa                      ; 005a69c8
        ;   XREF to: 005a69fa (CONDITIONAL_JUMP)  ; LAB_005a69fa
    CMP byte ptr [EAX + 0x16],0x30      ; 005a69ca
    JNZ 0x005a69fa                      ; 005a69ce
        ;   XREF to: 005a69fa (CONDITIONAL_JUMP)  ; LAB_005a69fa
    MOV EDX,dword ptr [EAX + 0x4]       ; 005a69d0
    MOV EBX,dword ptr [EAX + 0x20]      ; 005a69d3
    MOV ECX,dword ptr [EAX + 0x24]      ; 005a69d6
    SUB EDX,EBX                         ; 005a69d9
    MOV ESI,dword ptr [EAX + 0x28]      ; 005a69db
    SUB EDX,ECX                         ; 005a69de
    MOV EDI,dword ptr [EAX + 0x2c]      ; 005a69e0
    SUB EDX,ESI                         ; 005a69e3
    MOV EBP,dword ptr [EAX + 0x30]      ; 005a69e5
    SUB EDX,EDI                         ; 005a69e8
    MOV EBX,dword ptr [EAX + 0x34]      ; 005a69ea
    SUB EDX,EBP                         ; 005a69ed
    SUB EDX,EBX                         ; 005a69ef
    TEST EDX,EDX                        ; 005a69f1
    JLE 0x005a69fa                      ; 005a69f3
        ;   XREF to: 005a69fa (CONDITIONAL_JUMP)  ; LAB_005a69fa
    ADD ECX,EDX                         ; 005a69f5
    MOV dword ptr [EAX + 0x24],ECX      ; 005a69f7
    POP EBP                             ; 005a69fa
        ;   Label: LAB_005a69fa
    POP EDI                             ; 005a69fb
    POP ESI                             ; 005a69fc
    POP EBX                             ; 005a69fd
    RET                                 ; 005a69fe

