; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ba274(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_005ba2b4 at 005ba2c4
;
; Called Functions:
;   FUN_005ba242
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005ba274
        ;   Label: FUN_005ba274
    TEST EAX,EAX                        ; 005ba278
    JNZ 0x005ba27d                      ; 005ba27a
        ;   XREF to: 005ba27d (CONDITIONAL_JUMP)  ; LAB_005ba27d
    RET                                 ; 005ba27c
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ba27d
        ;   Label: LAB_005ba27d
    MOV dword ptr [EAX],EDX             ; 005ba281
    MOV EDX,dword ptr [ESP + 0xc]       ; 005ba283
    PUSH EDX                            ; 005ba287
    MOV ECX,dword ptr [ESP + 0xc]       ; 005ba288
    PUSH ECX                            ; 005ba28c
    ADD EAX,0x4                         ; 005ba28d
    PUSH EAX                            ; 005ba290
    CALL FUN_005ba242                   ; 005ba291
        ;   XREF to: 005ba242 (UNCONDITIONAL_CALL)  ; undefined FUN_005ba242()
    ADD ESP,0xc                         ; 005ba296
    RET                                 ; 005ba299

