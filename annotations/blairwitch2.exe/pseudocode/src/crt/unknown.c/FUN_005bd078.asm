; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bd078(undefined4 param_1,undefined4 param_2)
;
;
; XREF[1]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005c2020 at 005c2061
;
; Referenced Globals:
;   void* PTR_GetModuleHandleA_005c85b0 = 001c8f24
;   undefined4 DAT_0061f264
;   void* PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4 = 005bcdfc
;   void* PTR_crt_unknown.c_FUN_005bce28_0061f2e4 = 005bce28
;
; Called Functions:
;   crt_unknown.c_FUN_005bcdfc
;   crt_unknown.c_FUN_005bce28
;   crt_unknown.c_FUN_005bce2c
;   crt_unknown.c_FUN_005c2da0
;   crt_unknown.c_FUN_005c32a8
;   crt_unknown.c_FUN_005c3330
;   GetModuleHandleA
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bd078
        ;   Label: crt_unknown.c_FUN_005bd078
    PUSH 0x0                            ; 005bd079
    CALL dword ptr CS:[0x5c85b0]        ; 005bd07b | PTR_GetModuleHandleA_005c85b0
    PUSH EAX                            ; 005bd082
    MOV EDX,dword ptr [ESP + 0x10]      ; 005bd083
    PUSH EDX                            ; 005bd087
    PUSH 0x0                            ; 005bd088
    CALL crt_unknown.c_FUN_005bce2c     ; 005bd08a
        ;   XREF to: 005bce2c (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005bce2c()
    ADD ESP,0xc                         ; 005bd08f
    PUSH 0x61f264                       ; 005bd092 | DAT_0061f264
    CALL dword ptr [0x0061f2a4]         ; 005bd097 | PTR_crt_unknown.c_FUN_005bcdfc_0061f2a4
    PUSH EAX                            ; 005bd09d
    CALL crt_unknown.c_FUN_005c2da0     ; 005bd09e
        ;   XREF to: 005c2da0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c2da0()
    ADD ESP,0x8                         ; 005bd0a3
    MOV EBX,dword ptr [ESP + 0x8]       ; 005bd0a6
    PUSH EBX                            ; 005bd0aa
    CALL crt_unknown.c_FUN_005c32a8     ; 005bd0ab
        ;   XREF to: 005c32a8 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c32a8()
    ADD ESP,0x4                         ; 005bd0b0
    MOV EAX,0x21                        ; 005bd0b3
    CALL crt_unknown.c_FUN_005c3330     ; 005bd0b8
        ;   XREF to: 005c3330 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3330()
    CALL dword ptr [0x0061f2e4]         ; 005bd0bd | PTR_crt_unknown.c_FUN_005bce28_0061f2e4
    MOV EAX,0xff                        ; 005bd0c3
    CALL crt_unknown.c_FUN_005c3330     ; 005bd0c8
        ;   XREF to: 005c3330 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c3330()
    POP EBX                             ; 005bd0cd
    RET                                 ; 005bd0ce

