; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005828e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004542a0 at 004542ea
;   FUN_00454830 at 004548dd
;
; Referenced Globals:
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833ec
;   undefined4 DAT_02c834b4
;   undefined4 DAT_02c834b8
;   undefined4 DAT_02c834bc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005828e0
        ;   Label: FUN_005828e0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005828e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005828e5
    MOV ECX,dword ptr [ESP + 0x10]      ; 005828e9
    MOV EBX,dword ptr [0x01c50948]      ; 005828ed | DAT_01c50948
    MOV dword ptr [0x02c834b8],EDX      ; 005828f3 | DAT_02c834b8
    MOV dword ptr [0x02c834bc],ECX      ; 005828f9 | DAT_02c834bc
    MOV [0x02c834b4],EAX                ; 005828ff | DAT_02c834b4
    TEST EBX,EBX                        ; 00582904
    JNZ 0x0058290c                      ; 00582906
        ;   XREF to: 0058290c (CONDITIONAL_JUMP)  ; LAB_0058290c
    XOR EAX,EAX                         ; 00582908
    POP EBX                             ; 0058290a
    RET                                 ; 0058290b
    PUSH ECX                            ; 0058290c
        ;   Label: LAB_0058290c
    PUSH EDX                            ; 0058290d
    PUSH EAX                            ; 0058290e
    CALL dword ptr [0x02c833ec]         ; 0058290f | DAT_02c833ec
    ADD ESP,0xc                         ; 00582915
    POP EBX                             ; 00582918
    RET                                 ; 00582919

