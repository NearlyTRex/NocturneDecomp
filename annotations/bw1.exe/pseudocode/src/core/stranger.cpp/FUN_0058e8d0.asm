; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_stranger_cpp_FUN_0058e8d0(int param_1)
;
;
; Called Functions:
;   core_charactr.cpp_FUN_004301e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e8d0
        ;   Label: core_stranger.cpp_FUN_0058e8d0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058e8d1
    PUSH EBX                            ; 0058e8d5
    CALL core_charactr.cpp_FUN_004301e0 ; 0058e8d6
        ;   XREF to: 004301e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004301e0()
    MOV EDX,dword ptr [EBX + 0x20004]   ; 0058e8db
    ADD ESP,0x4                         ; 0058e8e1
    TEST EDX,EDX                        ; 0058e8e4
    JNZ 0x0058e8ef                      ; 0058e8e6
        ;   XREF to: 0058e8ef (CONDITIONAL_JUMP)  ; LAB_0058e8ef
    MOV EAX,0x1                         ; 0058e8e8
    POP EBX                             ; 0058e8ed
    RET                                 ; 0058e8ee
    MOV EAX,EDX                         ; 0058e8ef
        ;   Label: LAB_0058e8ef
    PUSH EAX                            ; 0058e8f1
    MOV EDX,dword ptr [EDX + 0x154]     ; 0058e8f2
    CALL dword ptr [EDX + 0x14]         ; 0058e8f8
    ADD ESP,0x4                         ; 0058e8fb
    MOV EAX,0x1                         ; 0058e8fe
    POP EBX                             ; 0058e903
    RET                                 ; 0058e904

