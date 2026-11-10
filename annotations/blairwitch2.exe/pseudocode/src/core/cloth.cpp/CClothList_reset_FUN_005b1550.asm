; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cloth_cpp_CClothList_reset_FUN_005b1550(CClothList *this_ptr)
;
; Parameters:
; CClothList *     Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_cloth.cpp_CClothList_dtor_FUN_005b1480 at 005b1486
;   core_doc.cpp_CDoc_renderOpaque_FUN_004599a0 at 00459cc3
;   core_stranger.cpp_CStranger_renderOpaque_FUN_0056b770 at 0056bb97
;
; Called Functions:
;   core_necklace.cpp_FUN_005ade00
;   crt_memory.c_memset_FUN_005b77c0
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b1550
        ;   Label: core_cloth.cpp_CClothList_reset_FUN_005b1550
    PUSH ESI                            ; 005b1551
    PUSH EDI                            ; 005b1552
    MOV EDI,dword ptr [ESP + 0x10]      ; 005b1553
    MOV EDX,dword ptr [EDI]             ; 005b1557
    XOR EBX,EBX                         ; 005b1559
    TEST EDX,EDX                        ; 005b155b
    JLE 0x005b1589                      ; 005b155d
        ;   XREF to: 005b1589 (CONDITIONAL_JUMP)  ; LAB_005b1589
    MOV ESI,EDI                         ; 005b155f
    MOV EAX,dword ptr [ESI + 0x194]     ; 005b1561
        ;   Label: LAB_005b1561
    TEST EAX,EAX                        ; 005b1567
    JZ 0x005b157f                       ; 005b1569
        ;   XREF to: 005b157f (CONDITIONAL_JUMP)  ; LAB_005b157f
    PUSH 0x0                            ; 005b156b
    PUSH EAX                            ; 005b156d
    CALL core_necklace.cpp_FUN_005ade00 ; 005b156e
        ;   XREF to: 005ade00 (UNCONDITIONAL_CALL)  ; undefined core_necklace.cpp_FUN_005ade00()
    ADD ESP,0x8                         ; 005b1573
    PUSH EAX                            ; 005b1576
    CALL crt_unknown.c_FUN_005b7fdc     ; 005b1577
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 005b157c
    INC EBX                             ; 005b157f
        ;   Label: LAB_005b157f
    MOV ECX,dword ptr [EDI]             ; 005b1580
    ADD ESI,0x4                         ; 005b1582
    CMP EBX,ECX                         ; 005b1585
    JL 0x005b1561                       ; 005b1587
        ;   XREF to: 005b1561 (CONDITIONAL_JUMP)  ; LAB_005b1561
    PUSH 0x190                          ; 005b1589
        ;   Label: LAB_005b1589
    PUSH 0x0                            ; 005b158e
    LEA EAX,[EDI + 0x4]                 ; 005b1590
    PUSH EAX                            ; 005b1593
    MOV dword ptr [EDI],0x0             ; 005b1594
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b159a
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b159f
    PUSH 0x28                           ; 005b15a2
    PUSH 0x0                            ; 005b15a4
    ADD EDI,0x194                       ; 005b15a6
    PUSH EDI                            ; 005b15ac
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005b15ad
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    ADD ESP,0xc                         ; 005b15b2
    POP EDI                             ; 005b15b5
    POP ESI                             ; 005b15b6
    POP EBX                             ; 005b15b7
    RET                                 ; 005b15b8

