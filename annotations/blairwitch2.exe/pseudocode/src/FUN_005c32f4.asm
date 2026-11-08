; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c32f4(void)
;
;
; XREF[2]:
;   FUN_005bd0d0 at 005bd0f4
;   FUN_005c68a8 at 005c68ae
;
; Referenced Globals:
;   void* PTR_FUN_0061f2a4 = 005bcdfc
;
; Called Functions:
;   FUN_005bcdfc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x0061f2a4]         ; 005c32f4 | PTR_FUN_0061f2a4
        ;   Label: FUN_005c32f4
    MOV EAX,dword ptr [EAX + 0x54]      ; 005c32fa
    TEST EAX,EAX                        ; 005c32fd
    JZ 0x005c3308                       ; 005c32ff
        ;   XREF to: 005c3308 (CONDITIONAL_JUMP)  ; LAB_005c3308
    MOV EAX,dword ptr [EAX]             ; 005c3301
    XOR EDX,EDX                         ; 005c3303
    MOV dword ptr FS:[EDX],EAX          ; 005c3305
    CALL dword ptr [0x0061f2a4]         ; 005c3308 | PTR_FUN_0061f2a4
        ;   Label: LAB_005c3308
    MOV dword ptr [EAX + 0x54],0x0      ; 005c330e
    RET                                 ; 005c3315

