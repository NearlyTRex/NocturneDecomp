; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; HANDLE crt_unknown_c_FUN_005c8db8(void)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c7280 at 005c731b
;   crt_unknown.c_FUN_005c8d50 at 005c8d64
;
; Referenced Globals:
;   void* PTR_CreateEventA_005d0524 = 001d0c7c
;   undefined4 DAT_00626840
;
; Called Functions:
;   CreateEventA
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005c8db8
        ;   Label: crt_unknown.c_FUN_005c8db8
    PUSH 0x0                            ; 005c8dba
    PUSH 0x0                            ; 005c8dbc
    PUSH 0x0                            ; 005c8dbe
    CALL dword ptr CS:[0x5d0524]        ; 005c8dc0 | PTR_CreateEventA_005d0524
    MOV EDX,EAX                         ; 005c8dc7
    TEST EAX,EAX                        ; 005c8dc9
    JNZ 0x005c8dda                      ; 005c8dcb
        ;   XREF to: 005c8dda (CONDITIONAL_JUMP)  ; LAB_005c8dda
    MOV EDX,dword ptr [0x00626840]      ; 005c8dcd | DAT_00626840
    INC EDX                             ; 005c8dd3
    MOV dword ptr [0x00626840],EDX      ; 005c8dd4 | DAT_00626840
    MOV EAX,EDX                         ; 005c8dda
        ;   Label: LAB_005c8dda
    RET                                 ; 005c8ddc

