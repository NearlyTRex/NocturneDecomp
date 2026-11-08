; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054d370(int param_1)
;
;
; XREF[2]:
;   FUN_0054d340 at 0054d346
;   FUN_0054d3c0 at 0054d3f5
;
; Referenced Globals:
;   undefined4 DAT_00625bc0
;
; Called Functions:
;   FUN_00467160
;   FUN_0055c0a0
;   FUN_0055c100
;   FUN_0059f3c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054d370
        ;   Label: FUN_0054d370
    PUSH ESI                            ; 0054d371
    PUSH 0x1fe5fac                      ; 0054d372
    CALL FUN_00467160                   ; 0054d377
        ;   XREF to: 00467160 (UNCONDITIONAL_CALL)  ; undefined FUN_00467160()
    ADD ESP,0x4                         ; 0054d37c
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054d37f
    ADD ESI,0x4                         ; 0054d383
    MOV EBX,ESI                         ; 0054d386
    ADD ESI,0x19a28                     ; 0054d388
    PUSH EBX                            ; 0054d38e
        ;   Label: LAB_0054d38e
    CALL FUN_0055c100                   ; 0054d38f
        ;   XREF to: 0055c100 (UNCONDITIONAL_CALL)  ; undefined FUN_0055c100()
    ADD EBX,0x1a4                       ; 0054d394
    ADD ESP,0x4                         ; 0054d39a
    CMP EBX,ESI                         ; 0054d39d
    JNZ 0x0054d38e                      ; 0054d39f
        ;   XREF to: 0054d38e (CONDITIONAL_JUMP)  ; LAB_0054d38e
    MOV EDX,dword ptr [0x00625bc0]      ; 0054d3a1 | DAT_00625bc0
    PUSH EDX                            ; 0054d3a7
    CALL FUN_0059f3c0                   ; 0054d3a8
        ;   XREF to: 0059f3c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059f3c0()
    ADD ESP,0x4                         ; 0054d3ad
    MOV ECX,dword ptr [ESP + 0xc]       ; 0054d3b0
    PUSH ECX                            ; 0054d3b4
    CALL FUN_0055c0a0                   ; 0054d3b5
        ;   XREF to: 0055c0a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0055c0a0()
    ADD ESP,0x4                         ; 0054d3ba
    POP ESI                             ; 0054d3bd
    POP EBX                             ; 0054d3be
    RET                                 ; 0054d3bf

