; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005760d0(CTVBat *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005760d0
        ;   Label: core_tvbat.cpp_CTVBat_getCollisionType_FUN_005760d0
    FLD float ptr [EDX + 0x2538]        ; 005760d4
    FLDZ                                ; 005760da
    FCOMPP                              ; 005760dc
    FNSTSW AX                           ; 005760de
    SAHF                                ; 005760e0
    JNC 0x005760f0                      ; 005760e1
        ;   XREF to: 005760f0 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0xd210],0x3    ; 005760e3
    JNZ 0x005760f3                      ; 005760ea
        ;   XREF to: 005760f3 (CONDITIONAL_JUMP)  ; LAB_005760f3
    LEA EAX,[EAX]                       ; 005760ec
    MOV EAX,0x1                         ; 005760f3
        ;   Label: LAB_005760f3
    RET                                 ; 005760f8

