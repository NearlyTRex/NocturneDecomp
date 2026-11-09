; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType core_vampboss_cpp_FUN_005a73c0(CCharacter *param_1,SCollisionInfo *param_2)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a73c0
        ;   Label: core_vampboss.cpp_FUN_005a73c0
    PUSH ESI                            ; 005a73c1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a73c2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005a73c6
    CMP dword ptr [EBX],0x2             ; 005a73ca
    JNZ 0x005a73d4                      ; 005a73cd
        ;   XREF to: 005a73d4 (CONDITIONAL_JUMP)  ; LAB_005a73d4
    XOR EAX,EAX                         ; 005a73cf
        ;   Label: LAB_005a73cf
    POP ESI                             ; 005a73d1
    POP EBX                             ; 005a73d2
    RET                                 ; 005a73d3
    PUSH ESI                            ; 005a73d4
        ;   Label: LAB_005a73d4
    MOV EAX,dword ptr [ESI + 0x154]     ; 005a73d5
    CALL dword ptr [EAX + 0x10c]        ; 005a73db
    ADD ESP,0x4                         ; 005a73e1
    CMP EAX,0x1                         ; 005a73e4
    JG 0x005a73cf                       ; 005a73e7
        ;   XREF to: 005a73cf (CONDITIONAL_JUMP)  ; LAB_005a73cf
    MOV ECX,dword ptr [EBX]             ; 005a73e9
    CMP ECX,0x1                         ; 005a73eb
    JNZ 0x005a740a                      ; 005a73ee
        ;   XREF to: 005a740a (CONDITIONAL_JUMP)  ; LAB_005a740a
    CMP dword ptr [ESI + 0xbe79c],0x2   ; 005a73f0
        ;   Label: LAB_005a73f0
    JNZ 0x005a740f                      ; 005a73f7
        ;   XREF to: 005a740f (CONDITIONAL_JUMP)  ; LAB_005a740f
    ADD ESI,0xc268                      ; 005a73f9
    MOV EAX,0x1                         ; 005a73ff
    MOV dword ptr [EBX + 0x20],ESI      ; 005a7404
    POP ESI                             ; 005a7407
    POP EBX                             ; 005a7408
    RET                                 ; 005a7409
    CMP ECX,0x3                         ; 005a740a
        ;   Label: LAB_005a740a
    JZ 0x005a73f0                       ; 005a740d
        ;   XREF to: 005a73f0 (CONDITIONAL_JUMP)  ; LAB_005a73f0
    PUSH EBX                            ; 005a740f
        ;   Label: LAB_005a740f
    PUSH ESI                            ; 005a7410
    CALL core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0 ; 005a7411
        ;   XREF to: 004310b0 (UNCONDITIONAL_CALL)  ; ECollisionType core_charactr.cpp_CCharacter_getCollisionType_FUN_004310b0(CCharacter * this_ptr, SCollisionInfo * collision_info)
    ADD ESP,0x8                         ; 005a7416
    POP ESI                             ; 005a7419
    POP EBX                             ; 005a741a
    RET                                 ; 005a741b

