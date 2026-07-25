; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00552990(void)
;
;
; Referenced Globals:
;   undefined4 DAT_02ddf550
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf55c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552990
        ;   Label: FUN_00552990
    PUSH EDI                            ; 00552991
    PUSH EBP                            ; 00552992
    MOV EDX,dword ptr [0x02ddf55c]      ; 00552993 | DAT_02ddf55c
    TEST EDX,EDX                        ; 00552999
    JNZ 0x005529e1                      ; 0055299b
        ;   XREF to: 005529e1 (CONDITIONAL_JUMP)  ; LAB_005529e1
    MOV EBX,dword ptr [0x02ddf558]      ; 0055299d | DAT_02ddf558
        ;   Label: LAB_0055299d
    TEST EBX,EBX                        ; 005529a3
    JZ 0x005529b7                       ; 005529a5
        ;   XREF to: 005529b7 (CONDITIONAL_JUMP)  ; LAB_005529b7
    PUSH ESI                            ; 005529a7
    PUSH EBX                            ; 005529a8
    MOV EDX,dword ptr [EBX]             ; 005529a9
    XOR ESI,ESI                         ; 005529ab
    CALL dword ptr [EDX + 0x8]          ; 005529ad
    MOV dword ptr [0x02ddf558],ESI      ; 005529b0 | DAT_02ddf558
    POP ESI                             ; 005529b6
    MOV EDI,dword ptr [0x02ddf554]      ; 005529b7 | DAT_02ddf554
        ;   Label: LAB_005529b7
    TEST EDI,EDI                        ; 005529bd
    JZ 0x005529cf                       ; 005529bf
        ;   XREF to: 005529cf (CONDITIONAL_JUMP)  ; LAB_005529cf
    PUSH EDI                            ; 005529c1
    MOV EDX,dword ptr [EDI]             ; 005529c2
    XOR EBP,EBP                         ; 005529c4
    CALL dword ptr [EDX + 0x8]          ; 005529c6
    MOV dword ptr [0x02ddf554],EBP      ; 005529c9 | DAT_02ddf554
    MOV EAX,[0x02ddf550]                ; 005529cf | DAT_02ddf550
        ;   Label: LAB_005529cf
    TEST EAX,EAX                        ; 005529d4
    JNZ 0x005529f3                      ; 005529d6
        ;   XREF to: 005529f3 (CONDITIONAL_JUMP)  ; LAB_005529f3
    MOV EAX,0x1                         ; 005529d8
    POP EBP                             ; 005529dd
    POP EDI                             ; 005529de
    POP EBX                             ; 005529df
    RET                                 ; 005529e0
    MOV EAX,EDX                         ; 005529e1
        ;   Label: LAB_005529e1
    PUSH EAX                            ; 005529e3
    MOV EDX,dword ptr [EDX]             ; 005529e4
    CALL dword ptr [EDX + 0x8]          ; 005529e6
    XOR ECX,ECX                         ; 005529e9
    MOV dword ptr [0x02ddf55c],ECX      ; 005529eb | DAT_02ddf55c
    JMP 0x0055299d                      ; 005529f1
        ;   XREF to: 0055299d (UNCONDITIONAL_JUMP)  ; LAB_0055299d
    PUSH EAX                            ; 005529f3
        ;   Label: LAB_005529f3
    MOV EDX,dword ptr [EAX]             ; 005529f4
    CALL dword ptr [EDX + 0x4c]         ; 005529f6
    MOV EAX,[0x02ddf550]                ; 005529f9 | DAT_02ddf550
    PUSH EAX                            ; 005529fe
    MOV EDX,dword ptr [EAX]             ; 005529ff
    CALL dword ptr [EDX + 0x8]          ; 00552a01
    XOR EDX,EDX                         ; 00552a04
    MOV dword ptr [0x02ddf550],EDX      ; 00552a06 | DAT_02ddf550
    MOV EAX,0x1                         ; 00552a0c
    POP EBP                             ; 00552a11
    POP EDI                             ; 00552a12
    POP EBX                             ; 00552a13
    RET                                 ; 00552a14

