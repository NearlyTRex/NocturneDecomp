; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; LPVOID crt_unknown_c_FUN_005ada6c(void)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005adc24 at 005add25
;
; Referenced Globals:
;   void* PTR_GetLastError_005b35b0 = 001b3f06
;   void* PTR_SetLastError_005b3648 = 001b41e4
;   void* PTR_TlsGetValue_005b3668 = 001b426c
;   undefined4 DAT_0060799c
;
; Called Functions:
;   crt_unknown.c_FUN_005afae0
;   crt_unknown.c_FUN_005afb18
;   GetLastError
;   SetLastError
;   TlsGetValue
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ada6c
        ;   Label: crt_unknown.c_FUN_005ada6c
    PUSH ESI                            ; 005ada6d
    CALL dword ptr CS:[0x5b35b0]        ; 005ada6e | PTR_GetLastError_005b35b0
    MOV EDX,dword ptr [0x0060799c]      ; 005ada75 | DAT_0060799c
    PUSH EDX                            ; 005ada7b
    MOV ESI,EAX                         ; 005ada7c
    CALL dword ptr CS:[0x5b3668]        ; 005ada7e | PTR_TlsGetValue_005b3668
    MOV EBX,EAX                         ; 005ada85
    TEST EAX,EAX                        ; 005ada87
    JNZ 0x005ada92                      ; 005ada89
        ;   XREF to: 005ada92 (CONDITIONAL_JUMP)  ; LAB_005ada92
    CALL crt_unknown.c_FUN_005afae0     ; 005ada8b
        ;   XREF to: 005afae0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afae0()
    JMP 0x005ada9d                      ; 005ada90
        ;   XREF to: 005ada9d (UNCONDITIONAL_JUMP)  ; LAB_005ada9d
    CMP byte ptr [EAX + 0x53],0x0       ; 005ada92
        ;   Label: LAB_005ada92
    JZ 0x005ada9f                       ; 005ada96
        ;   XREF to: 005ada9f (CONDITIONAL_JUMP)  ; LAB_005ada9f
    CALL crt_unknown.c_FUN_005afb18     ; 005ada98
        ;   XREF to: 005afb18 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005afb18()
    MOV EBX,EAX                         ; 005ada9d
        ;   Label: LAB_005ada9d
    PUSH ESI                            ; 005ada9f
        ;   Label: LAB_005ada9f
    CALL dword ptr CS:[0x5b3648]        ; 005adaa0 | PTR_SetLastError_005b3648
    MOV EAX,EBX                         ; 005adaa7
    POP ESI                             ; 005adaa9
    POP EBX                             ; 005adaaa
    RET                                 ; 005adaab

