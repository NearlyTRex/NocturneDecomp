; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055ae50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)
;
;
; XREF[28]:
;   FUN_00408e50 at 00408e66
;   FUN_0040cb60 at 0040cdd3
;   FUN_0043a7a0 at 0043a9fb
;   FUN_0045bdc0 at 0045c749
;   FUN_0045d2c0 at 0045d513
;   FUN_00485b40 at 00485edd
;   FUN_0049b890 at 0049b964
;   FUN_0049e360 at 0049e3bb
;   FUN_004cbdc0 at 004cc07b
;   FUN_004e2e70 at 004e3887
;   ... and 18 more
;
; Called Functions:
;   FUN_005594c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x10]      ; 0055ae50
        ;   Label: FUN_0055ae50
    PUSH 0x0                            ; 0055ae54
    PUSH 0x0                            ; 0055ae56
    PUSH dword ptr [EAX + 0x8]          ; 0055ae58
    PUSH dword ptr [EAX + 0x4]          ; 0055ae5b
    MOV EDX,dword ptr [ESP + 0x1c]      ; 0055ae5e
    PUSH dword ptr [EAX]                ; 0055ae62
    PUSH EDX                            ; 0055ae64
    MOV ECX,dword ptr [ESP + 0x20]      ; 0055ae65
    PUSH ECX                            ; 0055ae69
    CALL FUN_005594c0                   ; 0055ae6a
        ;   XREF to: 005594c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005594c0()
    ADD ESP,0x1c                        ; 0055ae6f
    RET                                 ; 0055ae72

