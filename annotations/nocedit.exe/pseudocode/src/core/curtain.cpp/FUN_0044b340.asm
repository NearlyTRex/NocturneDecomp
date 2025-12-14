; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_curtain.cpp_FUN_0044b340()
;
;
; Called Functions:
;   core_curtain.cpp_FUN_0044b060
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0044b340
        ;   Label: core_curtain.cpp_FUN_0044b340
    CMP dword ptr [EAX + 0x17c],0xfde8  ; 0044b344
    JG 0x0044b353                       ; 0044b34e
        ;   XREF to: 0044b353 (CONDITIONAL_JUMP)  ; LAB_0044b353
    XOR EAX,EAX                         ; 0044b350
    RET                                 ; 0044b352
    PUSH EAX                            ; 0044b353
        ;   Label: LAB_0044b353
    CALL core_curtain.cpp_FUN_0044b060  ; 0044b354
        ;   XREF to: 0044b060 (UNCONDITIONAL_CALL)  ; undefined core_curtain.cpp_FUN_0044b060()
    ADD ESP,0x4                         ; 0044b359
    RET                                 ; 0044b35c

