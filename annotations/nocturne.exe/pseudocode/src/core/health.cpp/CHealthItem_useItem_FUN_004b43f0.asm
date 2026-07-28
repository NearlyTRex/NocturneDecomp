; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004b43f0(CHealthItem *this_ptr,CCharacter *user)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   user
;
; XREF[1]:
;   core_inv.cpp_CInventory_select_FUN_004c1580 at 004c176a
;
; Referenced Globals:
;   double DOUBLE_0058567b = 100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b43f0
        ;   Label: core_health.cpp_CHealthItem_useItem_FUN_004b43f0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004b43f4
    CMP dword ptr [EDX + 0x2cc],0x0     ; 004b43f8
    JLE 0x004b442e                      ; 004b43ff
        ;   XREF to: 004b442e (CONDITIONAL_JUMP)  ; LAB_004b442e
    FLD float ptr [EDX + 0x2d0]         ; 004b4401
    FADD float ptr [ECX + 0x2434]       ; 004b4407
    FST float ptr [ECX + 0x2434]        ; 004b440d
    FCOMP double ptr [0x0058567b]       ; 004b4413 | DOUBLE_0058567b
    FNSTSW AX                           ; 004b4419
    SAHF                                ; 004b441b
    JBE 0x004b4428                      ; 004b441c
        ;   XREF to: 004b4428 (CONDITIONAL_JUMP)  ; LAB_004b4428
    MOV dword ptr [ECX + 0x2434],0x42c80000 ; 004b441e
    DEC dword ptr [EDX + 0x2cc]         ; 004b4428
        ;   Label: LAB_004b4428
    MOV EAX,dword ptr [EDX + 0x2cc]     ; 004b442e
        ;   Label: LAB_004b442e
    RET                                 ; 004b4434

