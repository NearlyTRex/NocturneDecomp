; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tbplayer_cpp_CDrummer_processDamage_FUN_00572030(CDrummer *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDrummer *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00572030
        ;   Label: core_tbplayer.cpp_CDrummer_processDamage_FUN_00572030
    MOV ECX,dword ptr [EDX + 0x281c]    ; 00572034
    TEST ECX,ECX                        ; 0057203a
    JNZ 0x0057205e                      ; 0057203c
        ;   XREF to: 0057205e (CONDITIONAL_JUMP)  ; LAB_0057205e
    MOV EAX,dword ptr [ESP + 0x8]       ; 0057203e
    FLD float ptr [EAX + 0x4]           ; 00572042
    FSUBR float ptr [EDX + 0x25a8]      ; 00572045
    FST float ptr [EDX + 0x25a8]        ; 0057204b
    FLDZ                                ; 00572051
    FCOMPP                              ; 00572053
    FNSTSW AX                           ; 00572055
    SAHF                                ; 00572057
    JNC 0x00571d5b                      ; 00572058
        ;   XREF to: 00571d5b (CONDITIONAL_JUMP)  ; LAB_00571d5b
    RET                                 ; 0057205e
        ;   Label: LAB_0057205e

