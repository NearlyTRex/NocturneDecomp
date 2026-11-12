; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bwgrndma_cpp_CGrandma_processStates_FUN_005a7c20(CGrandma *this_ptr,float delta_time,int mode)
;
; Parameters:
; CGrandma *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_bwgrndma.cpp_CGrandma_ctor_FUN_005a7b10 at 005a7ba8
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a7c20
        ;   Label: core_bwgrndma.cpp_CGrandma_processStates_FUN_005a7c20
    TEST EAX,EAX                        ; 005a7c24
    JNZ 0x005a7c29                      ; 005a7c26
        ;   XREF to: 005a7c29 (CONDITIONAL_JUMP)  ; LAB_005a7c29
    RET                                 ; 005a7c28
    PUSH EAX                            ; 005a7c29
        ;   Label: LAB_005a7c29
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a7c2a
    PUSH dword ptr [ESP + 0xc]          ; 005a7c2e
    PUSH EDX                            ; 005a7c32
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a7c33
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a7c38
    RET                                 ; 005a7c3b

