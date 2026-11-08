; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0052e910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[2]:
;   FUN_004b82e0 at 004b84bd
;   FUN_004b90d0 at 004b957c
;
; Called Functions:
;   FUN_0043b570
;   FUN_0052ddf0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x10]      ; 0052e910
        ;   Label: FUN_0052e910
    PUSH EDX                            ; 0052e914
    PUSH 0x1fc7838                      ; 0052e915
    CALL FUN_0043b570                   ; 0052e91a
        ;   XREF to: 0043b570 (UNCONDITIONAL_CALL)  ; undefined FUN_0043b570()
    ADD ESP,0x8                         ; 0052e91f
    MOV EAX,dword ptr [ESP + 0x4]       ; 0052e922
    MOV ECX,dword ptr [EAX + 0x15aeb8]  ; 0052e926
    PUSH ECX                            ; 0052e92c
    PUSH EAX                            ; 0052e92d
    CALL FUN_0052ddf0                   ; 0052e92e
        ;   XREF to: 0052ddf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0052ddf0()
    ADD ESP,0x8                         ; 0052e933
    RET                                 ; 0052e936

