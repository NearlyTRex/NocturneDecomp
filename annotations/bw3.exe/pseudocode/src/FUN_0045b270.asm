; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0045b270(int param_1)
;
;
; XREF[1]:
;   FUN_0045b1f0 at 0045b1f6
;
; Called Functions:
;   FUN_005a3770
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045b270
        ;   Label: FUN_0045b270
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045b271
    MOV EDX,dword ptr [EBX + 0x300]     ; 0045b275
    TEST EDX,EDX                        ; 0045b27b
    JNZ 0x0045b281                      ; 0045b27d
        ;   XREF to: 0045b281 (CONDITIONAL_JUMP)  ; LAB_0045b281
    POP EBX                             ; 0045b27f
    RET                                 ; 0045b280
    PUSH EDX                            ; 0045b281
        ;   Label: LAB_0045b281
    CALL FUN_005a3770                   ; 0045b282
        ;   XREF to: 005a3770 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3770()
    ADD ESP,0x4                         ; 0045b287
    MOV dword ptr [EBX + 0x300],0x0     ; 0045b28a
    POP EBX                             ; 0045b294
    RET                                 ; 0045b295

