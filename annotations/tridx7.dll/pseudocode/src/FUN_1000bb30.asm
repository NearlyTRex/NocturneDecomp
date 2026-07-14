; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000bb30(int param_1)
;
;
; XREF[1]:
;   FUN_1000b950 at 1000ba4a
;
; Referenced Globals:
;   undefined4 DAT_100178f8
;   undefined4 DAT_100178fc
;
; Called Functions:
;   __lock
;   FUN_10005a10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000bb30
        ;   Label: FUN_1000bb30
    PUSH EDI                            ; 1000bb31
    PUSH 0x1                            ; 1000bb32
    CALL __lock                         ; 1000bb34
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 1000bb39
    CMP dword ptr [ESP + 0xc],0x0       ; 1000bb3c
    JNZ 0x1000bb55                      ; 1000bb41
        ;   XREF to: 1000bb55 (CONDITIONAL_JUMP)  ; LAB_1000bb55
    MOV EAX,0x100178f8                  ; 1000bb43 | DAT_100178f8
    MOV ESI,dword ptr [0x100178f8]      ; 1000bb48 | DAT_100178f8
    MOV EDI,0x2                         ; 1000bb4e
    JMP 0x1000bb65                      ; 1000bb53
        ;   XREF to: 1000bb65 (UNCONDITIONAL_JUMP)  ; LAB_1000bb65
    MOV EAX,0x100178fc                  ; 1000bb55 | DAT_100178fc
        ;   Label: LAB_1000bb55
    MOV ESI,dword ptr [0x100178fc]      ; 1000bb5a | DAT_100178fc
    MOV EDI,0x15                        ; 1000bb60
    TEST ESI,ESI                        ; 1000bb65
        ;   Label: LAB_1000bb65
    JNZ 0x1000bb7a                      ; 1000bb67
        ;   XREF to: 1000bb7a (CONDITIONAL_JUMP)  ; LAB_1000bb7a
    PUSH 0x1                            ; 1000bb69
    CALL FUN_10005a10                   ; 1000bb6b
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bb70
    XOR EAX,EAX                         ; 1000bb73
    POP EDI                             ; 1000bb75
    POP ESI                             ; 1000bb76
    RET 0x4                             ; 1000bb77
    CMP ESI,0x1                         ; 1000bb7a
        ;   Label: LAB_1000bb7a
    JZ 0x1000bb9f                       ; 1000bb7d
        ;   XREF to: 1000bb9f (CONDITIONAL_JUMP)  ; LAB_1000bb9f
    PUSH 0x1                            ; 1000bb7f
    MOV dword ptr [EAX],0x0             ; 1000bb81 | DAT_100178f8
    CALL FUN_10005a10                   ; 1000bb87
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bb8c
    PUSH EDI                            ; 1000bb8f
    CALL ESI                            ; 1000bb90
    ADD ESP,0x4                         ; 1000bb92
    MOV EAX,0x1                         ; 1000bb95
    POP EDI                             ; 1000bb9a
    POP ESI                             ; 1000bb9b
    RET 0x4                             ; 1000bb9c
    PUSH 0x1                            ; 1000bb9f
        ;   Label: LAB_1000bb9f
    CALL FUN_10005a10                   ; 1000bba1
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 1000bba6
    MOV EAX,0x1                         ; 1000bba9
    POP EDI                             ; 1000bbae
    POP ESI                             ; 1000bbaf
    RET 0x4                             ; 1000bbb0

