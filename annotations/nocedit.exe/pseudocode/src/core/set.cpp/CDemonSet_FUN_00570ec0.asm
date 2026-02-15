; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_00570ec0(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055cd9e
;
; Called Functions:
;   core_set.cpp_CDemonSet_FUN_00570ea0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570ec0
        ;   Label: core_set.cpp_CDemonSet_FUN_00570ec0
    PUSH ESI                            ; 00570ec1
    PUSH EDI                            ; 00570ec2
    PUSH EBP                            ; 00570ec3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00570ec4
    MOV EBP,dword ptr [ESP + 0x18]      ; 00570ec8
    MOV EDX,dword ptr [EDI]             ; 00570ecc
    XOR EBX,EBX                         ; 00570ece
    TEST EDX,EDX                        ; 00570ed0
    JLE 0x00570eeb                      ; 00570ed2
        ;   XREF to: 00570eeb (CONDITIONAL_JUMP)  ; LAB_00570eeb
    MOV ESI,EDI                         ; 00570ed4
    CMP EBP,dword ptr [ESI + 0x150]     ; 00570ed6
        ;   Label: LAB_00570ed6
    JZ 0x00570ef0                       ; 00570edc
        ;   XREF to: 00570ef0 (CONDITIONAL_JUMP)  ; LAB_00570ef0
    INC EBX                             ; 00570ede
        ;   Label: LAB_00570ede
    MOV ECX,dword ptr [EDI]             ; 00570edf
    ADD ESI,0x1a4                       ; 00570ee1
    CMP EBX,ECX                         ; 00570ee7
    JL 0x00570ed6                       ; 00570ee9
        ;   XREF to: 00570ed6 (CONDITIONAL_JUMP)  ; LAB_00570ed6
    POP EBP                             ; 00570eeb
        ;   Label: LAB_00570eeb
    POP EDI                             ; 00570eec
    POP ESI                             ; 00570eed
    POP EBX                             ; 00570eee
    RET                                 ; 00570eef
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00570ef0
        ;   Label: LAB_00570ef0
    PUSH EDX                            ; 00570ef4
    PUSH EBX                            ; 00570ef5
    PUSH EDI                            ; 00570ef6
    CALL core_set.cpp_CDemonSet_FUN_00570ea0 ; 00570ef7
        ;   XREF to: 00570ea0 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_FUN_00570ea0(CDemonSet * this_ptr)
    ADD ESP,0xc                         ; 00570efc
    JMP 0x00570ede                      ; 00570eff
        ;   XREF to: 00570ede (UNCONDITIONAL_JUMP)  ; LAB_00570ede

