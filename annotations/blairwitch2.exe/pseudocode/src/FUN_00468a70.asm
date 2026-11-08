; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00468a70(int *param_1,undefined4 param_2)
;
;
; XREF[2]:
;   FUN_00468a90 at 00468ad6
;   FUN_00521af0 at 00521cdd
;
; Called Functions:
;   FUN_00468810
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00468a70
        ;   Label: FUN_00468a70
    MOV EAX,dword ptr [EDX + 0x4]       ; 00468a74
    DEC EAX                             ; 00468a77
    PUSH EAX                            ; 00468a78
    MOV EAX,dword ptr [EDX]             ; 00468a79
    PUSH 0x0                            ; 00468a7b
    DEC EAX                             ; 00468a7d
    PUSH EAX                            ; 00468a7e
    PUSH 0x0                            ; 00468a7f
    MOV ECX,dword ptr [ESP + 0x18]      ; 00468a81
    PUSH ECX                            ; 00468a85
    PUSH EDX                            ; 00468a86
    CALL FUN_00468810                   ; 00468a87
        ;   XREF to: 00468810 (UNCONDITIONAL_CALL)  ; undefined FUN_00468810()
    ADD ESP,0x18                        ; 00468a8c
    RET                                 ; 00468a8f

