; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_set_cpp_CDemonSet_dtor_FUN_00506e50(int param_1)
;
;
; Called Functions:
;   core_set.cpp_CDemonSet_clear_FUN_00506ec0
;   FUN_0050eb00
;   FUN_0050eb20
;   FUN_0050eb40
;   FUN_0050eb60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506e50
        ;   Label: core_set.cpp_CDemonSet_dtor_FUN_00506e50
    MOV EBX,dword ptr [ESP + 0x8]       ; 00506e51
    PUSH EBX                            ; 00506e55
    CALL core_set.cpp_CDemonSet_clear_FUN_00506ec0 ; 00506e56
        ;   XREF to: 00506ec0 (UNCONDITIONAL_CALL)  ; undefined core_set.cpp_CDemonSet_clear_FUN_00506ec0()
    ADD ESP,0x4                         ; 00506e5b
    PUSH 0x0                            ; 00506e5e
    ADD EBX,0x15b02c                    ; 00506e60
    PUSH EBX                            ; 00506e66
    CALL FUN_0050eb60                   ; 00506e67
        ;   XREF to: 0050eb60 (UNCONDITIONAL_CALL)  ; undefined FUN_0050eb60()
    ADD ESP,0x8                         ; 00506e6c
    PUSH 0x0                            ; 00506e6f
    SUB EAX,0x554                       ; 00506e71
    PUSH EAX                            ; 00506e76
    CALL FUN_0050eb40                   ; 00506e77
        ;   XREF to: 0050eb40 (UNCONDITIONAL_CALL)  ; undefined FUN_0050eb40()
    ADD ESP,0x8                         ; 00506e7c
    PUSH 0x0                            ; 00506e7f
    SUB EAX,0x141490                    ; 00506e81
    PUSH EAX                            ; 00506e86
    CALL FUN_0050eb20                   ; 00506e87
        ;   XREF to: 0050eb20 (UNCONDITIONAL_CALL)  ; undefined FUN_0050eb20()
    ADD ESP,0x8                         ; 00506e8c
    PUSH 0x0                            ; 00506e8f
    SUB EAX,0x19644                     ; 00506e91
    PUSH EAX                            ; 00506e96
    CALL FUN_0050eb00                   ; 00506e97
        ;   XREF to: 0050eb00 (UNCONDITIONAL_CALL)  ; undefined FUN_0050eb00()
    ADD ESP,0x8                         ; 00506e9c
    SUB EAX,0x4                         ; 00506e9f
    POP EBX                             ; 00506ea2
    LEA EAX,[EAX]                       ; 00506ea3
    LEA EDX,[EDX]                       ; 00506ea9
    NOP                                 ; 00506eaf
    RET                                 ; 00506eb0

