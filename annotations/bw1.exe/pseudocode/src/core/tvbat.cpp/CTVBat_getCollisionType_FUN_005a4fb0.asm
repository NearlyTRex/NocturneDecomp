; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; ECollisionType __cdecl core_tvbat_cpp_CTVBat_getCollisionType_FUN_005a4fb0(CTVBat *this_ptr,SCollisionInfo *collision_info)
;
; Parameters:
; CTVBat *         Stack[0x4]:4   this_ptr
; SCollisionInfo * Stack[0x8]:4   collision_info
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4fb0
        ;   Label: core_tvbat.cpp_CTVBat_getCollisionType_FUN_005a4fb0
    FLD float ptr [EDX + 0x2538]        ; 005a4fb4
    FLDZ                                ; 005a4fba
    FCOMPP                              ; 005a4fbc
    FNSTSW AX                           ; 005a4fbe
    SAHF                                ; 005a4fc0
    JNC 0x005a4fd0                      ; 005a4fc1
        ;   XREF to: 005a4fd0 (CONDITIONAL_JUMP)
    CMP dword ptr [EDX + 0xc424],0x3    ; 005a4fc3
    JNZ 0x005a4fd3                      ; 005a4fca
        ;   XREF to: 005a4fd3 (CONDITIONAL_JUMP)  ; LAB_005a4fd3
    LEA EAX,[EAX]                       ; 005a4fcc
    MOV EAX,0x1                         ; 005a4fd3
        ;   Label: LAB_005a4fd3
    RET                                 ; 005a4fd8

