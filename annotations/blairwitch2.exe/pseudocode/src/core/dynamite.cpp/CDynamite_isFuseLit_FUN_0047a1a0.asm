; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_dynamite_cpp_CDynamite_isFuseLit_FUN_0047a1a0(CDynamite *this_ptr)
;
; Parameters:
; CDynamite *      Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_stranger.cpp_CStranger_updateWeaponLayerActions_FUN_0056db50 at 0056dc5c
;   unkafter_stranger.cpp_FUN_0045bdc0 at 0045c570
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047a1a0
        ;   Label: core_dynamite.cpp_CDynamite_isFuseLit_FUN_0047a1a0
    FLD float ptr [EAX + 0x6d4]         ; 0047a1a4
    FLDZ                                ; 0047a1aa
    FCOMPP                              ; 0047a1ac
    FNSTSW AX                           ; 0047a1ae
    SAHF                                ; 0047a1b0
    JNC 0x0047a1b9                      ; 0047a1b1
        ;   XREF to: 0047a1b9 (CONDITIONAL_JUMP)  ; LAB_0047a1b9
    MOV EAX,0x1                         ; 0047a1b3
    RET                                 ; 0047a1b8
    XOR EAX,EAX                         ; 0047a1b9
        ;   Label: LAB_0047a1b9
    RET                                 ; 0047a1bb

