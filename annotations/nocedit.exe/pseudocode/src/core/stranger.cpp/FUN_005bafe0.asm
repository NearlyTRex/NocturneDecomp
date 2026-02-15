; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool __cdecl core_stranger_cpp_FUN_005bafe0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 005bafe0
        ;   Label: core_stranger.cpp_FUN_005bafe0
    TEST EDX,EDX                        ; 005bafe4
    JNZ 0x005bafeb                      ; 005bafe6
        ;   XREF to: 005bafeb (CONDITIONAL_JUMP)  ; LAB_005bafeb
    XOR EAX,EAX                         ; 005bafe8
    RET                                 ; 005bafea
    MOV ECX,dword ptr [ESP + 0x4]       ; 005bafeb
        ;   Label: LAB_005bafeb
    PUSH ECX                            ; 005bafef
    MOV EAX,dword ptr [EDX + 0x154]     ; 005baff0
    PUSH EDX                            ; 005baff6
    CALL dword ptr [EAX + 0x7c]         ; 005baff7
    ADD ESP,0x8                         ; 005baffa
    CMP EAX,0x4                         ; 005baffd
    SETZ AL                             ; 005bb000
    AND EAX,0xff                        ; 005bb003
    RET                                 ; 005bb008

