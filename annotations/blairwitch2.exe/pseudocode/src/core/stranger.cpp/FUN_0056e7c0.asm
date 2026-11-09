; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_stranger_cpp_FUN_0056e7c0(CStranger *this_ptr)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_stranger.cpp_FUN_0056e4d0 at 0056e4f4
;
; Referenced Globals:
;   undefined4 DAT_005fc1d4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056e7c0
        ;   Label: core_stranger.cpp_FUN_0056e7c0
    PUSH ESI                            ; 0056e7c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0056e7c2
    MOV EDX,dword ptr [EBX + 0x2698]    ; 0056e7c6
    XOR ESI,ESI                         ; 0056e7cc
    TEST EDX,EDX                        ; 0056e7ce
    JNZ 0x0056e803                      ; 0056e7d0
        ;   XREF to: 0056e803 (CONDITIONAL_JUMP)  ; LAB_0056e803
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0056e7d2
        ;   Label: LAB_0056e7d2
    TEST ECX,ECX                        ; 0056e7d8
    JZ 0x0056e818                       ; 0056e7da
        ;   XREF to: 0056e818 (CONDITIONAL_JUMP)  ; LAB_0056e818
    CMP dword ptr [ECX + 0x43c],0x3     ; 0056e7dc
    JNZ 0x0056e818                      ; 0056e7e3
        ;   XREF to: 0056e818 (CONDITIONAL_JUMP)  ; LAB_0056e818
    FLD float ptr [0x005fc1d4]          ; 0056e7e5 | DAT_005fc1d4
        ;   Label: LAB_0056e7e5
    MOV dword ptr [EBX + 0x256a4],0x3   ; 0056e7eb
    MOV EAX,0x1                         ; 0056e7f5
    FSTP float ptr [EBX + 0x25650]      ; 0056e7fa
    POP ESI                             ; 0056e800
    POP EBX                             ; 0056e801
    RET                                 ; 0056e802
    MOV EAX,EDX                         ; 0056e803
        ;   Label: LAB_0056e803
    PUSH EAX                            ; 0056e805
    MOV EDX,dword ptr [EDX + 0x2b0]     ; 0056e806
    CALL dword ptr [EDX + 0x7c]         ; 0056e80c
    ADD ESP,0x4                         ; 0056e80f
    TEST AL,0x4                         ; 0056e812
    JZ 0x0056e7d2                       ; 0056e814
        ;   XREF to: 0056e7d2 (CONDITIONAL_JUMP)  ; LAB_0056e7d2
    JMP 0x0056e7e5                      ; 0056e816
        ;   XREF to: 0056e7e5 (UNCONDITIONAL_JUMP)  ; LAB_0056e7e5
    TEST ESI,ESI                        ; 0056e818
        ;   Label: LAB_0056e818
    JNZ 0x0056e7e5                      ; 0056e81a
        ;   XREF to: 0056e7e5 (CONDITIONAL_JUMP)  ; LAB_0056e7e5
    XOR EAX,EAX                         ; 0056e81c
    POP ESI                             ; 0056e81e
    POP EBX                             ; 0056e81f
    RET                                 ; 0056e820

