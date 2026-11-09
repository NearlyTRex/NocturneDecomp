; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombie_cpp_FUN_005cab28(uint param_1)
;
;
; XREF[1]:
;   unkafter_zombie.cpp_FUN_005cadb4 at 005cadbd
;
; Called Functions:
;   unkafter_zombie.cpp_FUN_005caac4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005cab28
        ;   Label: unkafter_zombie.cpp_FUN_005cab28
    AND EAX,0xf                         ; 005cab2c
    SHL EAX,0x4                         ; 005cab2f
    ADD EAX,0x2c9f820                   ; 005cab32
    PUSH EAX                            ; 005cab37
    CALL unkafter_zombie.cpp_FUN_005caac4 ; 005cab38
        ;   XREF to: 005caac4 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombie.cpp_FUN_005caac4()
    ADD ESP,0x4                         ; 005cab3d
    RET                                 ; 005cab40

