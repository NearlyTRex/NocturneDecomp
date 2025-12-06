; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_dest.cpp_FUN_0046fd50()
;
;
; XREF[3]:
;   core_dest.cpp_FUN_0046f9b0 at 0046fa45
;   core_hero.cpp_FUN_004f35b0 at 004f3650
;   core_stranger.cpp_CStranger_FUN_005c2850 at 005c29f7
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0046fd50
        ;   Label: core_dest.cpp_FUN_0046fd50
    PUSH ESI                            ; 0046fd51
    MOV EBX,dword ptr [ESP + 0xc]       ; 0046fd52
    MOV ESI,dword ptr [ESP + 0x10]      ; 0046fd56
    CMP dword ptr [EBX + 0x184],0x0     ; 0046fd5a
    JNZ 0x0046fd7c                      ; 0046fd61 | LAB_0046fd7c
        ;   XREF to: 0046fd7c (CONDITIONAL_JUMP)
    CMP byte ptr [EBX + 0x15c],0x0      ; 0046fd63
    JNZ 0x0046fd81                      ; 0046fd6a | LAB_0046fd81
        ;   XREF to: 0046fd81 (CONDITIONAL_JUMP)
    CMP ESI,dword ptr [EBX + 0x158]     ; 0046fd6c
    JNZ 0x0046fd7c                      ; 0046fd72 | LAB_0046fd7c
        ;   XREF to: 0046fd7c (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0046fd74
    POP ESI                             ; 0046fd79
    POP EBX                             ; 0046fd7a
    RET                                 ; 0046fd7b
    XOR EAX,EAX                         ; 0046fd7c
        ;   Label: LAB_0046fd7c
    POP ESI                             ; 0046fd7e
    POP EBX                             ; 0046fd7f
    RET                                 ; 0046fd80
    LEA EAX,[EBX + 0x15c]               ; 0046fd81
        ;   Label: LAB_0046fd81
    PUSH EAX                            ; 0046fd87
    PUSH ESI                            ; 0046fd88
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 0046fd89 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0046fd8e
    TEST EAX,EAX                        ; 0046fd91
    JZ 0x0046fd7c                       ; 0046fd93 | LAB_0046fd7c
        ;   XREF to: 0046fd7c (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0046fd95
    MOV dword ptr [EBX + 0x158],ESI     ; 0046fd9a
    POP ESI                             ; 0046fda0
    POP EBX                             ; 0046fda1
    RET                                 ; 0046fda2

