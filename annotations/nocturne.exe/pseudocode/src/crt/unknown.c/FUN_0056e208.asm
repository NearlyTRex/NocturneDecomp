; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE crt_unknown_c_FUN_0056e208(void)
;
;
; XREF[2]:
;   crt_stdio.c_CreateFileImpl_FUN_0056b960 at 0056b9fb
;   crt_unknown.c_FUN_0056e1a0 at 0056e1b4
;
; Referenced Globals:
;   void* PTR_CreateEventA_00575494 = 00175af6
;   undefined4 DAT_005c1f5c
;
; Called Functions:
;   CreateEventA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 0056e208
        ;   Label: crt_unknown.c_FUN_0056e208
    PUSH 0x0                            ; 0056e20a
    PUSH 0x0                            ; 0056e20c
    PUSH 0x0                            ; 0056e20e
    CALL dword ptr CS:[0x575494]        ; 0056e210 | PTR_CreateEventA_00575494
    MOV EDX,EAX                         ; 0056e217
    TEST EAX,EAX                        ; 0056e219
    JNZ 0x0056e22a                      ; 0056e21b
        ;   XREF to: 0056e22a (CONDITIONAL_JUMP)  ; LAB_0056e22a
    MOV EDX,dword ptr [0x005c1f5c]      ; 0056e21d | DAT_005c1f5c
    INC EDX                             ; 0056e223
    MOV dword ptr [0x005c1f5c],EDX      ; 0056e224 | DAT_005c1f5c
    MOV EAX,EDX                         ; 0056e22a
        ;   Label: LAB_0056e22a
    RET                                 ; 0056e22c

