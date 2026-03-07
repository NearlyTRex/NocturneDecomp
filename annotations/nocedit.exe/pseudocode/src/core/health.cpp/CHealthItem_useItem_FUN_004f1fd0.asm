; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_health_cpp_CHealthItem_useItem_FUN_004f1fd0(CHealthItem *this_ptr,CCharacter *user)
;
; Parameters:
; CHealthItem *    Stack[0x4]:4   this_ptr
; CCharacter *     Stack[0x8]:4   user
;
; XREF[1]:
;   core_inv.cpp_CInventory_select_FUN_004ff800 at 004ff9ea
;
; Referenced Globals:
;   double DOUBLE_0062ea31 = 100
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1fd0
        ;   Label: core_health.cpp_CHealthItem_useItem_FUN_004f1fd0
    MOV ECX,dword ptr [ESP + 0x8]       ; 004f1fd4
    CMP dword ptr [EDX + 0x2d4],0x0     ; 004f1fd8
    JLE 0x004f200e                      ; 004f1fdf
        ;   XREF to: 004f200e (CONDITIONAL_JUMP)  ; LAB_004f200e
    FLD float ptr [EDX + 0x2d8]         ; 004f1fe1
    FADD float ptr [ECX + 0x243c]       ; 004f1fe7
    FST float ptr [ECX + 0x243c]        ; 004f1fed
    FCOMP double ptr [0x0062ea31]       ; 004f1ff3 | DOUBLE_0062ea31
    FNSTSW AX                           ; 004f1ff9
    SAHF                                ; 004f1ffb
    JBE 0x004f2008                      ; 004f1ffc
        ;   XREF to: 004f2008 (CONDITIONAL_JUMP)  ; LAB_004f2008
    MOV dword ptr [ECX + 0x243c],0x42c80000 ; 004f1ffe
    DEC dword ptr [EDX + 0x2d4]         ; 004f2008
        ;   Label: LAB_004f2008
    MOV EAX,dword ptr [EDX + 0x2d4]     ; 004f200e
        ;   Label: LAB_004f200e
    RET                                 ; 004f2014

