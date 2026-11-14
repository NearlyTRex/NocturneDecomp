; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720(CDemonSet *this_ptr,int group_id,int enabled)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   group_id
; int              Stack[0xc]:4   enabled
;
; XREF[1]:
;   core_script.cpp_CScript_step_FUN_00522350 at 00525193
;
; Called Functions:
;   core_set.cpp_CDemonSet_setCameraEnabled_FUN_00534700
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00534720
        ;   Label: core_set.cpp_CDemonSet_setCameraEnabledByGroup_FUN_00534720
    PUSH ESI                            ; 00534721
    PUSH EDI                            ; 00534722
    PUSH EBP                            ; 00534723
    MOV EDI,dword ptr [ESP + 0x14]      ; 00534724
    MOV EBP,dword ptr [ESP + 0x18]      ; 00534728
    MOV EDX,dword ptr [EDI]             ; 0053472c
    XOR EBX,EBX                         ; 0053472e
    TEST EDX,EDX                        ; 00534730
    JLE 0x0053474b                      ; 00534732
        ;   XREF to: 0053474b (CONDITIONAL_JUMP)  ; LAB_0053474b
    MOV ESI,EDI                         ; 00534734
    CMP EBP,dword ptr [ESI + 0x150]     ; 00534736
        ;   Label: LAB_00534736
    JZ 0x00534750                       ; 0053473c
        ;   XREF to: 00534750 (CONDITIONAL_JUMP)  ; LAB_00534750
    INC EBX                             ; 0053473e
        ;   Label: LAB_0053473e
    MOV ECX,dword ptr [EDI]             ; 0053473f
    ADD ESI,0x1a4                       ; 00534741
    CMP EBX,ECX                         ; 00534747
    JL 0x00534736                       ; 00534749
        ;   XREF to: 00534736 (CONDITIONAL_JUMP)  ; LAB_00534736
    POP EBP                             ; 0053474b
        ;   Label: LAB_0053474b
    POP EDI                             ; 0053474c
    POP ESI                             ; 0053474d
    POP EBX                             ; 0053474e
    RET                                 ; 0053474f
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00534750
        ;   Label: LAB_00534750
    PUSH EDX                            ; 00534754
    PUSH EBX                            ; 00534755
    PUSH EDI                            ; 00534756
    CALL core_set.cpp_CDemonSet_setCameraEnabled_FUN_00534700 ; 00534757
        ;   XREF to: 00534700 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_setCameraEnabled_FUN_00534700(CDemonSet * this_ptr, int camera_index, int enabled)
    ADD ESP,0xc                         ; 0053475c
    JMP 0x0053473e                      ; 0053475f
        ;   XREF to: 0053473e (UNCONDITIONAL_JUMP)  ; LAB_0053473e

