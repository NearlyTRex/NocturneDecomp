; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_00492690(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_doc.cpp_FUN_00474400 at 004745c8
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_005907a0 at 005908ac
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00492690
        ;   Label: core_dynamite.cpp_CDynamite_isFuseLit_FUN_00492690
    FLD float ptr [EAX + 0x578]         ; 00492694
    FLDZ                                ; 0049269a
    FCOMPP                              ; 0049269c
    FNSTSW AX                           ; 0049269e
    SAHF                                ; 004926a0
    JNC 0x004926a9                      ; 004926a1
        ;   XREF to: 004926a9 (CONDITIONAL_JUMP)  ; LAB_004926a9
    MOV EAX,0x1                         ; 004926a3
    RET                                 ; 004926a8
    XOR EAX,EAX                         ; 004926a9
        ;   Label: LAB_004926a9
    RET                                 ; 004926ab

