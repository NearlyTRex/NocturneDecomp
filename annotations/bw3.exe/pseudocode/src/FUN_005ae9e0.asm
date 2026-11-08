; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005ae9e0(uint param_1)
;
;
; XREF[1]:
;   FUN_005a9bc0 at 005a9cc1
;
; Referenced Globals:
;   void* PTR_FlushFileBuffers_005b3560 = 001b3d92
;   void* PTR_FUN_006079a4 = 005a7f44
;   void* PTR_FUN_006079a8 = 005a7f44
;   undefined4 DAT_00607b84
;   undefined4 DAT_00607bdc
;
; Called Functions:
;   FlushFileBuffers
;   FUN_005a7f44
;   FUN_005a92c0
;   FUN_005ab46c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae9e0
        ;   Label: FUN_005ae9e0
    PUSH ESI                            ; 005ae9e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ae9e2
    XOR ESI,ESI                         ; 005ae9e6
    TEST EBX,EBX                        ; 005ae9e8
    JL 0x005ae9f4                       ; 005ae9ea
        ;   XREF to: 005ae9f4 (CONDITIONAL_JUMP)  ; LAB_005ae9f4
    CMP EBX,dword ptr [0x00607b84]      ; 005ae9ec | DAT_00607b84
    JBE 0x005aea06                      ; 005ae9f2
        ;   XREF to: 005aea06 (CONDITIONAL_JUMP)  ; LAB_005aea06
    PUSH 0x4                            ; 005ae9f4
        ;   Label: LAB_005ae9f4
    CALL FUN_005a92c0                   ; 005ae9f6
        ;   XREF to: 005a92c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a92c0()
    MOV EAX,0xffffffff                  ; 005ae9fb
    ADD ESP,0x4                         ; 005aea00
    POP ESI                             ; 005aea03
    POP EBX                             ; 005aea04
    RET                                 ; 005aea05
    PUSH EBX                            ; 005aea06
        ;   Label: LAB_005aea06
    CALL dword ptr [0x006079a4]         ; 005aea07 | PTR_FUN_006079a4
    MOV EAX,[0x00607bdc]                ; 005aea0d | DAT_00607bdc
    ADD ESP,0x4                         ; 005aea12
    MOV EAX,dword ptr [EAX + EBX*0x4]   ; 005aea15
    PUSH EAX                            ; 005aea18
    CALL dword ptr CS:[0x5b3560]        ; 005aea19 | PTR_FlushFileBuffers_005b3560
    TEST EAX,EAX                        ; 005aea20
    JNZ 0x005aea2e                      ; 005aea22
        ;   XREF to: 005aea2e (CONDITIONAL_JUMP)  ; LAB_005aea2e
    CALL FUN_005ab46c                   ; 005aea24
        ;   XREF to: 005ab46c (UNCONDITIONAL_CALL)  ; undefined FUN_005ab46c()
    MOV ESI,0xffffffff                  ; 005aea29
    PUSH EBX                            ; 005aea2e
        ;   Label: LAB_005aea2e
    CALL dword ptr [0x006079a8]         ; 005aea2f | PTR_FUN_006079a8
    ADD ESP,0x4                         ; 005aea35
    MOV EAX,ESI                         ; 005aea38
    POP ESI                             ; 005aea3a
    POP EBX                             ; 005aea3b
    RET                                 ; 005aea3c

