; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_baron_cpp_CBaronWeapon_fire_FUN_00410510(CBaronWeapon *this_ptr)
;
; Parameters:
; CBaronWeapon *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00410510
        ;   Label: core_baron.cpp_CBaronWeapon_fire_FUN_00410510
    MOV EBX,dword ptr [ESP + 0x8]       ; 00410511
    PUSH EBX                            ; 00410515
    CALL core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640 ; 00410516
        ;   XREF to: 00410640 (UNCONDITIONAL_CALL)  ; void core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00410640(CBaronWeapon * this_ptr)
    MOV EDX,dword ptr [EBX + 0x578]     ; 0041051b
    ADD ESP,0x4                         ; 00410521
    TEST EDX,EDX                        ; 00410524
    JNZ 0x0041052c                      ; 00410526
        ;   XREF to: 0041052c (CONDITIONAL_JUMP)  ; LAB_0041052c
    XOR EAX,EAX                         ; 00410528
    POP EBX                             ; 0041052a
    RET                                 ; 0041052b
    MOV EAX,0x1                         ; 0041052c
        ;   Label: LAB_0041052c
    MOV dword ptr [EDX + 0xc1e4],0x1    ; 00410531
    POP EBX                             ; 0041053b
    RET                                 ; 0041053c

