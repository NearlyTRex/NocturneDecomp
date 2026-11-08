; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ccd0(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00496a60 at 00496a86
;
; Referenced Globals:
;   undefined4 DAT_00614d30
;
; Called Functions:
;   FUN_0049d230
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 0049ccd0
        ;   Label: FUN_0049ccd0
    PUSH 0x0                            ; 0049ccd5
    MOV EDX,dword ptr [ESP + 0x10]      ; 0049ccd7
    PUSH 0x3f19999a                     ; 0049ccdb
    PUSH EDX                            ; 0049cce0
    MOV ECX,dword ptr [0x00614d30]      ; 0049cce1 | DAT_00614d30
    PUSH ECX                            ; 0049cce7
    CALL FUN_0049d230                   ; 0049cce8
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    ADD ESP,0x14                        ; 0049cced
    RET                                 ; 0049ccf0

