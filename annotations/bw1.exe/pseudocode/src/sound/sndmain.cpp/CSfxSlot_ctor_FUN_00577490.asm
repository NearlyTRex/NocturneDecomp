; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CSfxSlot * __cdecl sound_sndmain_cpp_CSfxSlot_ctor_FUN_00577490(CSfxSlot *this_ptr)
;
; Parameters:
; CSfxSlot *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   sound_sndmain.cpp_FUN_005726e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577490
        ;   Label: sound_sndmain.cpp_CSfxSlot_ctor_FUN_00577490
    MOV EBX,dword ptr [ESP + 0x8]       ; 00577491
    PUSH EBX                            ; 00577495
    CALL sound_sndmain.cpp_FUN_005726e0 ; 00577496
        ;   XREF to: 005726e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_FUN_005726e0(CSfxOptions * this_ptr)
    ADD ESP,0x4                         ; 0057749b
    MOV EAX,EBX                         ; 0057749e
    POP EBX                             ; 005774a0
    RET                                 ; 005774a1

