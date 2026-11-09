; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_setdir_cpp_FUN_00539840(CDemonSet *this_ptr)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_mission.cpp_FUN_004fce00 at 004fcef6
;   core_platfrm.cpp_FUN_005184c0 at 00518651
;   core_script.cpp_FUN_00522350 at 005242ed
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00539840
        ;   Label: core_setdir.cpp_FUN_00539840
    FLD float ptr [EDX + 0x15aec8]      ; 00539844
    FLDZ                                ; 0053984a
    FCOMPP                              ; 0053984c
    FNSTSW AX                           ; 0053984e
    SAHF                                ; 00539850
    JC 0x00539854                       ; 00539851
        ;   XREF to: 00539854 (CONDITIONAL_JUMP)  ; LAB_00539854
    RET                                 ; 00539853
    MOV dword ptr [EDX + 0x15aec8],0x1e3ce508 ; 00539854
        ;   Label: LAB_00539854
    RET                                 ; 0053985e

