; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_005435f0(CDrummer *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005435f0
        ;   Label: core_tbplayer.cpp_CDrummer_processDamage_FUN_005435f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005435f4
    FLD float ptr [EAX + 0x4]           ; 005435f8
    FSUBR float ptr [EDX + 0x2434]      ; 005435fb
    FST float ptr [EDX + 0x2434]        ; 00543601
    FLDZ                                ; 00543607
    FCOMPP                              ; 00543609
    FNSTSW AX                           ; 0054360b
    SAHF                                ; 0054360d
    JNC 0x00543351                      ; 0054360e
        ;   XREF to: 00543351 (CONDITIONAL_JUMP)  ; LAB_00543351
    RET                                 ; 00543614

