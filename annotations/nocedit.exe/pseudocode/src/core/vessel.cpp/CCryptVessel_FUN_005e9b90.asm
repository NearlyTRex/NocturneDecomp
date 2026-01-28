; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_vessel_cpp_CCryptVessel_FUN_005e9b90(CCryptVessel *this_ptr)
;
; Parameters:
; CCryptVessel *   Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005e9b90
        ;   Label: core_vessel.cpp_CCryptVessel_FUN_005e9b90
    MOV EDX,dword ptr [EAX + 0x70]      ; 005e9b94
    CMP EDX,0x1                         ; 005e9b97
    JNZ 0x005e9ba5                      ; 005e9b9a
        ;   XREF to: 005e9ba5 (CONDITIONAL_JUMP)  ; LAB_005e9ba5
    CMP dword ptr [EAX + 0x2d4],0x0     ; 005e9b9c
    JZ 0x005e9ba8                       ; 005e9ba3
        ;   XREF to: 005e9ba8 (CONDITIONAL_JUMP)  ; LAB_005e9ba8
    XOR EAX,EAX                         ; 005e9ba5
        ;   Label: LAB_005e9ba5
    RET                                 ; 005e9ba7
    MOV EAX,EDX                         ; 005e9ba8
        ;   Label: LAB_005e9ba8
    RET                                 ; 005e9baa

