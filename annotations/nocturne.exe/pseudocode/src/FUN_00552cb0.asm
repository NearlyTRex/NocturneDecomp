; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00552cb0(void)
;
;
; XREF[1]:
;   FUN_004012a0 at 004012a8
;
; Referenced Globals:
;   undefined4 DAT_005c5010
;   undefined4 DAT_006af62c
;   undefined4 DAT_02ddf550
;   undefined4 DAT_02ddf554
;   undefined4 DAT_02ddf558
;   undefined4 DAT_02ddf55c
;   undefined4 DAT_02ddf560
;
; Called Functions:
;   FUN_005638d0
;   wincore_windll.cpp_kill_FUN_005322b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00552cb0
        ;   Label: FUN_00552cb0
    PUSH ESI                            ; 00552cb1
    PUSH EBP                            ; 00552cb2
    MOV EDX,dword ptr [0x005c5010]      ; 00552cb3 | DAT_005c5010
    TEST EDX,EDX                        ; 00552cb9
    JNZ 0x00552d38                      ; 00552cbb
        ;   XREF to: 00552d38 (CONDITIONAL_JUMP)  ; LAB_00552d38
    MOV ESI,dword ptr [0x02ddf560]      ; 00552cc1 | DAT_02ddf560
        ;   Label: LAB_00552cc1
    TEST ESI,ESI                        ; 00552cc7
    JZ 0x00552cdc                       ; 00552cc9
        ;   XREF to: 00552cdc (CONDITIONAL_JUMP)  ; LAB_00552cdc
    PUSH ESI                            ; 00552ccb
    CALL FUN_005638d0                   ; 00552ccc
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    XOR EBP,EBP                         ; 00552cd1
    ADD ESP,0x4                         ; 00552cd3
    MOV dword ptr [0x006af62c],EBP      ; 00552cd6 | DAT_006af62c
    CALL wincore_windll.cpp_kill_FUN_005322b0 ; 00552cdc
        ;   XREF to: 005322b0 (UNCONDITIONAL_CALL)  ; undefined wincore_windll.cpp_kill_FUN_005322b0()
        ;   Label: LAB_00552cdc
    MOV EAX,[0x02ddf55c]                ; 00552ce1 | DAT_02ddf55c
    TEST EAX,EAX                        ; 00552ce6
    JZ 0x00552cf8                       ; 00552ce8
        ;   XREF to: 00552cf8 (CONDITIONAL_JUMP)  ; LAB_00552cf8
    PUSH EAX                            ; 00552cea
    MOV EDX,dword ptr [EAX]             ; 00552ceb
    CALL dword ptr [EDX + 0x8]          ; 00552ced
    XOR EDX,EDX                         ; 00552cf0
    MOV dword ptr [0x02ddf55c],EDX      ; 00552cf2 | DAT_02ddf55c
    MOV ECX,dword ptr [0x02ddf558]      ; 00552cf8 | DAT_02ddf558
        ;   Label: LAB_00552cf8
    TEST ECX,ECX                        ; 00552cfe
    JZ 0x00552d10                       ; 00552d00
        ;   XREF to: 00552d10 (CONDITIONAL_JUMP)  ; LAB_00552d10
    PUSH ECX                            ; 00552d02
    MOV EDX,dword ptr [ECX]             ; 00552d03
    XOR EBX,EBX                         ; 00552d05
    CALL dword ptr [EDX + 0x8]          ; 00552d07
    MOV dword ptr [0x02ddf558],EBX      ; 00552d0a | DAT_02ddf558
    MOV ESI,dword ptr [0x02ddf554]      ; 00552d10 | DAT_02ddf554
        ;   Label: LAB_00552d10
    TEST ESI,ESI                        ; 00552d16
    JZ 0x00552d2a                       ; 00552d18
        ;   XREF to: 00552d2a (CONDITIONAL_JUMP)  ; LAB_00552d2a
    PUSH EDI                            ; 00552d1a
    PUSH ESI                            ; 00552d1b
    MOV EDX,dword ptr [ESI]             ; 00552d1c
    XOR EDI,EDI                         ; 00552d1e
    CALL dword ptr [EDX + 0x8]          ; 00552d20
    MOV dword ptr [0x02ddf554],EDI      ; 00552d23 | DAT_02ddf554
    POP EDI                             ; 00552d29
    MOV EBP,dword ptr [0x02ddf550]      ; 00552d2a | DAT_02ddf550
        ;   Label: LAB_00552d2a
    TEST EBP,EBP                        ; 00552d30
    JNZ 0x00552d4e                      ; 00552d32
        ;   XREF to: 00552d4e (CONDITIONAL_JUMP)  ; LAB_00552d4e
    POP EBP                             ; 00552d34
    POP ESI                             ; 00552d35
    POP EBX                             ; 00552d36
    RET                                 ; 00552d37
    PUSH EDX                            ; 00552d38
        ;   Label: LAB_00552d38
    CALL FUN_005638d0                   ; 00552d39
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005638d0()
    XOR EBX,EBX                         ; 00552d3e
    ADD ESP,0x4                         ; 00552d40
    MOV dword ptr [0x005c5010],EBX      ; 00552d43 | DAT_005c5010
    JMP 0x00552cc1                      ; 00552d49
        ;   XREF to: 00552cc1 (UNCONDITIONAL_JUMP)  ; LAB_00552cc1
    PUSH EBP                            ; 00552d4e
        ;   Label: LAB_00552d4e
    MOV EDX,dword ptr [EBP]             ; 00552d4f
    CALL dword ptr [EDX + 0x4c]         ; 00552d52
    MOV EAX,[0x02ddf550]                ; 00552d55 | DAT_02ddf550
    PUSH EAX                            ; 00552d5a
    MOV EDX,dword ptr [EAX]             ; 00552d5b
    CALL dword ptr [EDX + 0x8]          ; 00552d5d
    XOR EAX,EAX                         ; 00552d60
    MOV [0x02ddf550],EAX                ; 00552d62 | DAT_02ddf550
    POP EBP                             ; 00552d67
    POP ESI                             ; 00552d68
    POP EBX                             ; 00552d69
    RET                                 ; 00552d6a

