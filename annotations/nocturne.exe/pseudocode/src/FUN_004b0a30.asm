; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b0a30(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_FUN_0059e4f4 = 004ef040
;
; Called Functions:
;   FUN_004ef010
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b0a30
        ;   Label: FUN_004b0a30
    PUSH EDX                            ; 004b0a34
    CALL FUN_004ef010                   ; 004b0a35
        ;   XREF to: 004ef010 (UNCONDITIONAL_CALL)  ; undefined FUN_004ef010()
    ADD ESP,0x4                         ; 004b0a3a
    MOV dword ptr [EAX + 0x34],0x59e4f4 ; 004b0a3d | PTR_FUN_0059e4f4
    RET                                 ; 004b0a44

