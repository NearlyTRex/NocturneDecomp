; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ace0(int param_1)
;
;
; XREF[1]:
;   FUN_0048a930 at 0048a93f
;
; Called Functions:
;   FUN_005c0336
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ace0
        ;   Label: FUN_0048ace0
    PUSH ESI                            ; 0048ace1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048ace2
    MOV EDX,dword ptr [EBX + 0x8]       ; 0048ace6
    TEST EDX,EDX                        ; 0048ace9
    JNZ 0x0048ad0c                      ; 0048aceb
        ;   XREF to: 0048ad0c (CONDITIONAL_JUMP)  ; LAB_0048ad0c
    MOV ESI,dword ptr [EBX + 0xc]       ; 0048aced
        ;   Label: LAB_0048aced
    TEST ESI,ESI                        ; 0048acf0
    JNZ 0x0048ad17                      ; 0048acf2
        ;   XREF to: 0048ad17 (CONDITIONAL_JUMP)  ; LAB_0048ad17
    MOV dword ptr [EBX + 0xc],0x0       ; 0048acf4
        ;   Label: LAB_0048acf4
    MOV dword ptr [EBX + 0x4],0x0       ; 0048acfb
    MOV dword ptr [EBX + 0x8],0x0       ; 0048ad02
    POP ESI                             ; 0048ad09
    POP EBX                             ; 0048ad0a
    RET                                 ; 0048ad0b
    PUSH EDX                            ; 0048ad0c
        ;   Label: LAB_0048ad0c
    CALL FUN_005c0336                   ; 0048ad0d
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0048ad12
    JMP 0x0048aced                      ; 0048ad15
        ;   XREF to: 0048aced (UNCONDITIONAL_JUMP)  ; LAB_0048aced
    PUSH ESI                            ; 0048ad17
        ;   Label: LAB_0048ad17
    CALL FUN_005c0336                   ; 0048ad18
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0048ad1d
    JMP 0x0048acf4                      ; 0048ad20
        ;   XREF to: 0048acf4 (UNCONDITIONAL_JUMP)  ; LAB_0048acf4

