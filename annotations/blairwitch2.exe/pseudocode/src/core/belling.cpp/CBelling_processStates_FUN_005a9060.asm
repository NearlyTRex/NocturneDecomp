; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_belling_cpp_CBelling_processStates_FUN_005a9060(CBelling *this_ptr,float delta_time,int mode)
;
; Parameters:
; CBelling *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_belling.cpp_CBelling_ctor_FUN_005a8f80 at 005a9018
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a9060
        ;   Label: core_belling.cpp_CBelling_processStates_FUN_005a9060
    TEST EAX,EAX                        ; 005a9064
    JNZ 0x005a9069                      ; 005a9066
        ;   XREF to: 005a9069 (CONDITIONAL_JUMP)  ; LAB_005a9069
    RET                                 ; 005a9068
    PUSH EAX                            ; 005a9069
        ;   Label: LAB_005a9069
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a906a
    PUSH dword ptr [ESP + 0xc]          ; 005a906e
    PUSH EDX                            ; 005a9072
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a9073
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a9078
    RET                                 ; 005a907b

