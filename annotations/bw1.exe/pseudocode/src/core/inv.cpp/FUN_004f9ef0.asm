; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_inv_cpp_FUN_004f9ef0(int param_1)
;
;
; XREF[1]:
;   core_doc.cpp_FUN_00474400 at 0047446b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9ef0
        ;   Label: core_inv.cpp_FUN_004f9ef0
    MOV EDX,dword ptr [EAX + 0x460]     ; 004f9ef4
    TEST EDX,EDX                        ; 004f9efa
    JZ 0x004f9eeb                       ; 004f9efc
        ;   XREF to: 004f9eeb (CONDITIONAL_JUMP)  ; LAB_004f9eeb
    MOV ECX,dword ptr [EDX + 0x2d4]     ; 004f9efe
    MOV EAX,EDX                         ; 004f9f04
    TEST ECX,ECX                        ; 004f9f06
    JZ 0x004f9eeb                       ; 004f9f08
        ;   XREF to: 004f9eeb (CONDITIONAL_JUMP)  ; LAB_004f9eeb
    RET                                 ; 004f9f0a

