; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053a830(int param_1)
;
;
; XREF[3]:
;   FUN_0052c090 at 0052c0af
;   FUN_0053a810 at 0053a816
;   FUN_0053a870 at 0053a876
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053a830
        ;   Label: FUN_0053a830
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053a831
    MOV EDX,dword ptr [EBX + 0x198]     ; 0053a835
    TEST EDX,EDX                        ; 0053a83b
    JNZ 0x0053a84b                      ; 0053a83d
        ;   XREF to: 0053a84b (CONDITIONAL_JUMP)  ; LAB_0053a84b
    MOV dword ptr [EBX + 0x194],0x0     ; 0053a83f
    POP EBX                             ; 0053a849
    RET                                 ; 0053a84a
    PUSH EDX                            ; 0053a84b
        ;   Label: LAB_0053a84b
    CALL FUN_005b86a0                   ; 0053a84c
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 0053a851
    MOV dword ptr [EBX + 0x198],0x0     ; 0053a854
    MOV dword ptr [EBX + 0x194],0x0     ; 0053a85e
    POP EBX                             ; 0053a868
    RET                                 ; 0053a869

