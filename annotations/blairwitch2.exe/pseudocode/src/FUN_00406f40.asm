; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00406f40(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c35e68
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c37788
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_004057d0
;   FUN_00405980
;   FUN_00431d90
;   FUN_00433000
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00406f40
        ;   Label: FUN_00406f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00406f41
    CMP dword ptr [0x01c37788],0x0      ; 00406f45 | DAT_01c37788
    JZ 0x00407065                       ; 00406f4c
        ;   XREF to: 00407065 (CONDITIONAL_JUMP)  ; LAB_00407065
    PUSH ESI                            ; 00406f52
    LEA ESI,[EBX + 0x18]                ; 00406f53
    LEA EAX,[EBX + 0x8]                 ; 00406f56
    PUSH EAX                            ; 00406f59
    CALL FUN_00403970                   ; 00406f5a
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00406f5f
    TEST EAX,EAX                        ; 00406f62
    JZ 0x00406fb1                       ; 00406f64
        ;   XREF to: 00406fb1 (CONDITIONAL_JUMP)  ; LAB_00406fb1
    CMP dword ptr [0x01c35e68],0x0      ; 00406f66 | DAT_01c35e68
    JZ 0x00406fec                       ; 00406f6d
        ;   XREF to: 00406fec (CONDITIONAL_JUMP)  ; LAB_00406fec
    CMP dword ptr [0x01c38b40],0x0      ; 00406f73 | DAT_01c38b40
    JNZ 0x00406fcb                      ; 00406f7a
        ;   XREF to: 00406fcb (CONDITIONAL_JUMP)  ; LAB_00406fcb
    CMP dword ptr [0x006141c0],0x20     ; 00406f7c | DAT_006141c0
    JNZ 0x00406fbf                      ; 00406f83
        ;   XREF to: 00406fbf (CONDITIONAL_JUMP)  ; LAB_00406fbf
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406f85 | DAT_01c35e6c
    MOV EAX,0x8d                        ; 00406f8f
        ;   Label: LAB_00406f8f
    PUSH ESI                            ; 00406f94
    MOV ECX,dword ptr [EBX + 0x4]       ; 00406f95
    MOV EDX,0x5                         ; 00406f98
    PUSH ECX                            ; 00406f9d
    MOV [0x01c38b54],EAX                ; 00406f9e | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 00406fa3 | DAT_01c38b58
    CALL FUN_00431d90                   ; 00406fa9
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00406fae
    MOV ESI,dword ptr [EBX + 0x4]       ; 00406fb1
        ;   Label: LAB_00406fb1
    LEA EAX,[EBX + 0x18]                ; 00406fb4
    SHL ESI,0x2                         ; 00406fb7
    ADD EAX,ESI                         ; 00406fba
    POP ESI                             ; 00406fbc
    POP EBX                             ; 00406fbd
    RET                                 ; 00406fbe
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00406fbf | DAT_01c35e6c
        ;   Label: LAB_00406fbf
    JMP 0x00406f8f                      ; 00406fc9
        ;   XREF to: 00406f8f (UNCONDITIONAL_JUMP)  ; LAB_00406f8f
    CMP dword ptr [0x006141c0],0x20     ; 00406fcb | DAT_006141c0
        ;   Label: LAB_00406fcb
    JNZ 0x00406fe0                      ; 00406fd2
        ;   XREF to: 00406fe0 (CONDITIONAL_JUMP)  ; LAB_00406fe0
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00406fd4 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00406f8f                      ; 00406fde
        ;   XREF to: 00406f8f (UNCONDITIONAL_JUMP)  ; LAB_00406f8f
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00406fe0 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00406fe0
    JMP 0x00406f8f                      ; 00406fea
        ;   XREF to: 00406f8f (UNCONDITIONAL_JUMP)  ; LAB_00406f8f
    CMP dword ptr [0x01c38b40],0x0      ; 00406fec | DAT_01c38b40
        ;   Label: LAB_00406fec
    JNZ 0x00407044                      ; 00406ff3
        ;   XREF to: 00407044 (CONDITIONAL_JUMP)  ; LAB_00407044
    CMP dword ptr [0x006141c0],0x20     ; 00406ff5 | DAT_006141c0
    JNZ 0x00407038                      ; 00406ffc
        ;   XREF to: 00407038 (CONDITIONAL_JUMP)  ; LAB_00407038
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00406ffe | DAT_01c35e6c
    MOV EAX,0x28d                       ; 00407008
        ;   Label: LAB_00407008
    PUSH ESI                            ; 0040700d
    MOV ECX,dword ptr [EBX + 0x4]       ; 0040700e
    MOV EDX,0x5                         ; 00407011
    PUSH ECX                            ; 00407016
    MOV [0x01c38b54],EAX                ; 00407017 | DAT_01c38b54
    MOV dword ptr [0x01c38b58],EDX      ; 0040701c | DAT_01c38b58
    CALL FUN_00433000                   ; 00407022
        ;   XREF to: 00433000 (UNCONDITIONAL_CALL)  ; undefined FUN_00433000()
    ADD ESP,0x8                         ; 00407027
    MOV ESI,dword ptr [EBX + 0x4]       ; 0040702a
    LEA EAX,[EBX + 0x18]                ; 0040702d
    SHL ESI,0x2                         ; 00407030
    ADD EAX,ESI                         ; 00407033
    POP ESI                             ; 00407035
    POP EBX                             ; 00407036
    RET                                 ; 00407037
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00407038 | DAT_01c35e6c
        ;   Label: LAB_00407038
    JMP 0x00407008                      ; 00407042
        ;   XREF to: 00407008 (UNCONDITIONAL_JUMP)  ; LAB_00407008
    CMP dword ptr [0x006141c0],0x20     ; 00407044 | DAT_006141c0
        ;   Label: LAB_00407044
    JNZ 0x00407059                      ; 0040704b
        ;   XREF to: 00407059 (CONDITIONAL_JUMP)  ; LAB_00407059
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 0040704d | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00407008                      ; 00407057
        ;   XREF to: 00407008 (UNCONDITIONAL_JUMP)  ; LAB_00407008
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00407059 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00407059
    JMP 0x00407008                      ; 00407063
        ;   XREF to: 00407008 (UNCONDITIONAL_JUMP)  ; LAB_00407008
    PUSH EBX                            ; 00407065
        ;   Label: LAB_00407065
    CALL FUN_00405980                   ; 00407066
        ;   XREF to: 00405980 (UNCONDITIONAL_CALL)  ; undefined FUN_00405980()
    ADD ESP,0x4                         ; 0040706b
    PUSH EBX                            ; 0040706e
    CALL FUN_004057d0                   ; 0040706f
        ;   XREF to: 004057d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004057d0()
    ADD ESP,0x4                         ; 00407074
    POP EBX                             ; 00407077
    RET                                 ; 00407078

