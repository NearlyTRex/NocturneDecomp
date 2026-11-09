; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_FUN_004cdf90(CHealthItem *this_ptr,CCharacter *user)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   user
;
; XREF[1]:
;   core_inv.cpp_FUN_004dc8c0 at 004dcbe7
;
; Referenced Globals:
;   undefined4 DAT_005d99f4
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004cdf90
        ;   Label: core_health.cpp_FUN_004cdf90
    MOV ECX,dword ptr [ESP + 0x8]       ; 004cdf94
    CMP dword ptr [EDX + 0x430],0x0     ; 004cdf98
    JLE 0x004cdfce                      ; 004cdf9f
        ;   XREF to: 004cdfce (CONDITIONAL_JUMP)  ; LAB_004cdfce
    FLD float ptr [EDX + 0x434]         ; 004cdfa1
    FADD float ptr [ECX + 0x25a8]       ; 004cdfa7
    FST float ptr [ECX + 0x25a8]        ; 004cdfad
    FCOMP double ptr [0x005d99f4]       ; 004cdfb3 | DAT_005d99f4
    FNSTSW AX                           ; 004cdfb9
    SAHF                                ; 004cdfbb
    JBE 0x004cdfc8                      ; 004cdfbc
        ;   XREF to: 004cdfc8 (CONDITIONAL_JUMP)  ; LAB_004cdfc8
    MOV dword ptr [ECX + 0x25a8],0x42c80000 ; 004cdfbe
    DEC dword ptr [EDX + 0x430]         ; 004cdfc8
        ;   Label: LAB_004cdfc8
    MOV EAX,dword ptr [EDX + 0x430]     ; 004cdfce
        ;   Label: LAB_004cdfce
    RET                                 ; 004cdfd4

