; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566370(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[2]:
;   FUN_00449350 at 00449419
;   FUN_00449430 at 00449684
;
; Referenced Globals:
;   undefined4 DAT_01c6cee8
;   undefined4 DAT_02cf6068
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 00566370
        ;   Label: FUN_00566370
    CMP dword ptr [0x01c6cee8],0x0      ; 00566371 | DAT_01c6cee8
    JNZ 0x0056637e                      ; 00566378
        ;   XREF to: 0056637e (CONDITIONAL_JUMP)  ; LAB_0056637e
    XOR EAX,EAX                         ; 0056637a
    POP EBP                             ; 0056637c
    RET                                 ; 0056637d
    PUSH EDI                            ; 0056637e
        ;   Label: LAB_0056637e
    PUSH ESI                            ; 0056637f
    PUSH EBX                            ; 00566380
    MOV ECX,dword ptr [ESP + 0x24]      ; 00566381
    PUSH ECX                            ; 00566385
    MOV EBX,dword ptr [ESP + 0x24]      ; 00566386
    PUSH EBX                            ; 0056638a
    MOV ESI,dword ptr [ESP + 0x24]      ; 0056638b
    PUSH ESI                            ; 0056638f
    MOV EDI,dword ptr [ESP + 0x24]      ; 00566390
    PUSH EDI                            ; 00566394
    MOV EBP,dword ptr [ESP + 0x24]      ; 00566395
    PUSH EBP                            ; 00566399
    CALL dword ptr [0x02cf6068]         ; 0056639a | DAT_02cf6068
    ADD ESP,0x14                        ; 005663a0
    POP EBX                             ; 005663a3
    POP ESI                             ; 005663a4
    POP EDI                             ; 005663a5
    POP EBP                             ; 005663a6
    RET                                 ; 005663a7

