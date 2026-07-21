; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_bugs_cpp_CBugs_getDeathState_FUN_004219b0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004219b0
        ;   Label: core_bugs.cpp_CBugs_getDeathState_FUN_004219b0
    MOV EDX,dword ptr [EAX + 0x70]      ; 004219b4
    CMP EDX,0x2                         ; 004219b7
    JZ 0x004219cb                       ; 004219ba
        ;   XREF to: 004219cb (CONDITIONAL_JUMP)  ; LAB_004219cb
    CMP dword ptr [EAX + 0xbd24],0x3    ; 004219bc
    JNZ 0x004219a0                      ; 004219c3
        ;   XREF to: 004219a0 (CONDITIONAL_JUMP)
    MOV EAX,0x2                         ; 004219c5
    RET                                 ; 004219ca
    MOV EAX,EDX                         ; 004219cb
        ;   Label: LAB_004219cb
    RET                                 ; 004219cd

