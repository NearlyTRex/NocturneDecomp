; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_charactr_cpp_FUN_00428ac0(int param_1)
;
;
; Called Functions:
;   core_door.cpp_FUN_0045efc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428ac0
        ;   Label: core_charactr.cpp_FUN_00428ac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00428ac1
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 00428ac5
    TEST EDX,EDX                        ; 00428acb
    JNZ 0x00428ad1                      ; 00428acd
        ;   XREF to: 00428ad1 (CONDITIONAL_JUMP)  ; LAB_00428ad1
    POP EBX                             ; 00428acf
    RET                                 ; 00428ad0
    PUSH EDX                            ; 00428ad1
        ;   Label: LAB_00428ad1
    CALL core_door.cpp_FUN_0045efc0     ; 00428ad2
        ;   XREF to: 0045efc0 (UNCONDITIONAL_CALL)  ; void core_door.cpp_FUN_0045efc0(CDoor * this_ptr)
    ADD ESP,0x4                         ; 00428ad7
    MOV dword ptr [EBX + 0x27b0],0x0    ; 00428ada
    POP EBX                             ; 00428ae4
    RET                                 ; 00428ae5

