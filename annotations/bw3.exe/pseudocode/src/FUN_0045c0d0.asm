; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045c0d0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_004a4340
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0045c0d0
        ;   Label: FUN_0045c0d0
    PUSH EDX                            ; 0045c0d4
    CALL FUN_0057af40                   ; 0045c0d5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 0045c0da
    PUSH 0x5bb1d9                       ; 0045c0dd
    CALL FUN_00556230                   ; 0045c0e2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0045c0e7
    PUSH 0x5bb1e7                       ; 0045c0ea
    CALL FUN_00556230                   ; 0045c0ef
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0045c0f4
    PUSH 0x2                            ; 0045c0f7
    MOV ECX,dword ptr [0x005fc5a0]      ; 0045c0f9 | DAT_005fc5a0
    PUSH ECX                            ; 0045c0ff
    CALL FUN_004a4340                   ; 0045c100
        ;   XREF to: 004a4340 (UNCONDITIONAL_CALL)  ; undefined FUN_004a4340()
    ADD ESP,0x8                         ; 0045c105
    RET                                 ; 0045c108

