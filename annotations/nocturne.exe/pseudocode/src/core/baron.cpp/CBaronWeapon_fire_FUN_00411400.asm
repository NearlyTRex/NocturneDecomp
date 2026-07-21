; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_baron_cpp_CBaronWeapon_fire_FUN_00411400(int param_1)
;
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00411400
        ;   Label: core_baron.cpp_CBaronWeapon_fire_FUN_00411400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00411401
    PUSH EBX                            ; 00411405
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 ; 00411406
        ;   XREF to: 00411530 (UNCONDITIONAL_CALL)  ; undefined core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530()
    MOV EDX,dword ptr [EBX + 0x570]     ; 0041140b
    ADD ESP,0x4                         ; 00411411
    TEST EDX,EDX                        ; 00411414
    JNZ 0x0041141c                      ; 00411416
        ;   XREF to: 0041141c (CONDITIONAL_JUMP)  ; LAB_0041141c
    XOR EAX,EAX                         ; 00411418
    POP EBX                             ; 0041141a
    RET                                 ; 0041141b
    MOV EAX,0x1                         ; 0041141c
        ;   Label: LAB_0041141c
    MOV dword ptr [EDX + 0xbca0],0x1    ; 00411421
    POP EBX                             ; 0041142b
    RET                                 ; 0041142c

