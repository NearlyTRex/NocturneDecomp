; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00581f50(void)
;
;
; XREF[9]:
;   FUN_00451e20 at 00451e2e
;   FUN_00494030 at 00494080
;   FUN_00494110 at 00494150
;   FUN_004ce580 at 004ce8eb
;   FUN_004d77d0 at 004d7994
;   FUN_0051b8d0 at 0051b9e5
;   FUN_005821c0 at 00582262
;   FUN_00582990 at 00582a04
;   thunk_FUN_00581f50 at 00511160
;
; Referenced Globals:
;   undefined4 DAT_0061b4a0
;   undefined4 DAT_01c50948
;   undefined4 DAT_02c833a8
;   undefined4 DAT_02c834c4
;   undefined4 DAT_02c834cc
;   undefined4 DAT_02c834d0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01c50948]      ; 00581f50 | DAT_01c50948
        ;   Label: FUN_00581f50
    TEST EDX,EDX                        ; 00581f56
    JNZ 0x00581f63                      ; 00581f58
        ;   XREF to: 00581f63 (CONDITIONAL_JUMP)  ; LAB_00581f63
    MOV dword ptr [0x02c834d0],EDX      ; 00581f5a | DAT_02c834d0
    XOR EAX,EAX                         ; 00581f60
        ;   Label: LAB_00581f60
    RET                                 ; 00581f62
        ;   Label: LAB_00581f62
    CALL dword ptr [0x02c833a8]         ; 00581f63 | DAT_02c833a8
        ;   Label: LAB_00581f63
    TEST EAX,EAX                        ; 00581f69
    JZ 0x00581f62                       ; 00581f6b
        ;   XREF to: 00581f62 (CONDITIONAL_JUMP)  ; LAB_00581f62
    PUSH EBX                            ; 00581f6d
    MOV ECX,0x1                         ; 00581f6e
    MOV EAX,[0x0061b4a0]                ; 00581f73 | DAT_0061b4a0
    XOR EBX,EBX                         ; 00581f78
    MOV [0x02c834cc],EAX                ; 00581f7a | DAT_02c834cc
    MOV dword ptr [0x02c834d0],ECX      ; 00581f7f | DAT_02c834d0
    MOV EAX,[0x02c834c4]                ; 00581f85 | DAT_02c834c4
    MOV dword ptr [0x01c50948],EBX      ; 00581f8a | DAT_01c50948
    MOV [0x0061b4a0],EAX                ; 00581f90 | DAT_0061b4a0
    MOV EAX,ECX                         ; 00581f95
    POP EBX                             ; 00581f97
    RET                                 ; 00581f98

