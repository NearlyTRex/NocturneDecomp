; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c32f4(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005bd0d0 at 005bd0f4
;   crt_unknown.c_FUN_005c68a8 at 005c68ae
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005c32f4 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: crt_unknown.c_FUN_005c32f4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005c32fa
    TEST EAX,EAX                        ; 005c32fd
    JZ 0x005c3308                       ; 005c32ff
        ;   XREF to: 005c3308 (CONDITIONAL_JUMP)  ; LAB_005c3308
    MOV EAX,dword ptr [EAX]             ; 005c3301
    XOR EDX,EDX                         ; 005c3303
    MOV dword ptr FS:[EDX],EAX          ; 005c3305
    CALL dword ptr [0x0061f2a4]         ; 005c3308 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
        ;   Label: LAB_005c3308
    MOV dword ptr [EAX + 0x54],0x0      ; 005c330e
    RET                                 ; 005c3315

