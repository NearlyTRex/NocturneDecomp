; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_djien_cpp_CDjien_getTargetPoints_FUN_00461590(CDjien *this_ptr,CVector3f *out_points_array)
;
; Parameters:
; CDjien *         Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   out_points_array
;
; Called Functions:
;   core_djien.cpp_FUN_004615b0
;
; *****************************************************************************

section .text

    SUB ESP,0x28                        ; 00461590
        ;   Label: core_djien.cpp_CDjien_getTargetPoints_FUN_00461590
    MOV EAX,ESP                         ; 00461593
    PUSH EAX                            ; 00461595
    MOV EDX,dword ptr [ESP + 0x34]      ; 00461596
    PUSH EDX                            ; 0046159a
    MOV ECX,dword ptr [ESP + 0x34]      ; 0046159b
    PUSH ECX                            ; 0046159f
    CALL core_djien.cpp_FUN_004615b0    ; 004615a0
        ;   XREF to: 004615b0 (UNCONDITIONAL_CALL)  ; undefined core_djien.cpp_FUN_004615b0()
    ADD ESP,0xc                         ; 004615a5
    ADD ESP,0x28                        ; 004615a8
    RET                                 ; 004615ab

