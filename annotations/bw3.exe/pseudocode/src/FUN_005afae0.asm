; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID FUN_005afae0(void)
;
;
; Referenced Globals:
;   void* PTR_TlsGetValue_005b3668 = 001b426c
;   TerminatedCString s_Thread_has_no_thread_spe_005dae48
;   undefined4 DAT_0060799c
;
; Called Functions:
;   FUN_005acde0
;   FUN_005adb48
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005afae0
        ;   Label: FUN_005afae0
    XOR EBX,EBX                         ; 005afae1
    PUSH EBX                            ; 005afae3
    CALL FUN_005adb48                   ; 005afae4
        ;   XREF to: 005adb48 (UNCONDITIONAL_CALL)  ; undefined FUN_005adb48()
    ADD ESP,0x4                         ; 005afae9
    TEST EAX,EAX                        ; 005afaec
    JZ 0x005afb00                       ; 005afaee
        ;   XREF to: 005afb00 (CONDITIONAL_JUMP)  ; LAB_005afb00
    MOV EDX,dword ptr [0x0060799c]      ; 005afaf0 | DAT_0060799c
    PUSH EDX                            ; 005afaf6
    CALL dword ptr CS:[0x5b3668]        ; 005afaf7 | PTR_TlsGetValue_005b3668
    MOV EBX,EAX                         ; 005afafe
    TEST EBX,EBX                        ; 005afb00
        ;   Label: LAB_005afb00
    JNZ 0x005afb13                      ; 005afb02
        ;   XREF to: 005afb13 (CONDITIONAL_JUMP)  ; LAB_005afb13
    PUSH 0x1                            ; 005afb04
    PUSH 0x5dae48                       ; 005afb06 | = "Thread has no thread-specific data\r\n"
    CALL FUN_005acde0                   ; 005afb0b
        ;   XREF to: 005acde0 (UNCONDITIONAL_CALL)  ; undefined FUN_005acde0()
    ADD ESP,0x8                         ; 005afb10
    MOV EAX,EBX                         ; 005afb13
        ;   Label: LAB_005afb13
    POP EBX                             ; 005afb15
    RET                                 ; 005afb16

