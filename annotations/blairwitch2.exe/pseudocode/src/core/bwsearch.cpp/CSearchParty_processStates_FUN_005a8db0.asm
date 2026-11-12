; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bwsearch_cpp_CSearchParty_processStates_FUN_005a8db0(CSearchParty *this_ptr,float delta_time,int mode)
;
; Parameters:
; CSearchParty *   Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_bwsearch.cpp_CSearchParty_ctor_FUN_005a8cf0 at 005a8d74
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a8db0
        ;   Label: core_bwsearch.cpp_CSearchParty_processStates_FUN_005a8db0
    TEST EAX,EAX                        ; 005a8db4
    JNZ 0x005a8db9                      ; 005a8db6
        ;   XREF to: 005a8db9 (CONDITIONAL_JUMP)  ; LAB_005a8db9
    RET                                 ; 005a8db8
    PUSH EAX                            ; 005a8db9
        ;   Label: LAB_005a8db9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a8dba
    PUSH dword ptr [ESP + 0xc]          ; 005a8dbe
    PUSH EDX                            ; 005a8dc2
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a8dc3
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a8dc8
    RET                                 ; 005a8dcb

