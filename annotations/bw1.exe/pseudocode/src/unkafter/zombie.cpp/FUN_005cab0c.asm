; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cab0c(uint param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cadb8
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caa60
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cab0c
        ;   Label: unkafter_zombie.cpp_FUN_005cab0c
    AND EAX,0xf                         ; 005cab10
    SHL EAX,0x4                         ; 005cab13
    ADD EAX,0x2c9f820                   ; 005cab16
    PUSH EAX                            ; 005cab1b
    CALL unkafter_zombie.cpp_FUN_005caa60 ; 005cab1c
        ;   XREF to: 005caa60 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caa60()
    ADD ESP,0x4                         ; 005cab21
    RET                                 ; 005cab24

