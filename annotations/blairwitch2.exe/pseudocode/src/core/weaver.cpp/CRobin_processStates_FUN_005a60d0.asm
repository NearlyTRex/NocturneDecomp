; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weaver_cpp_CRobin_processStates_FUN_005a60d0(CRobin *this_ptr,float delta_time,int mode)
;
; Parameters:
; CRobin *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_weaver.cpp_CRobin_ctor_FUN_005a5e70 at 005a5f08
;
; Referenced Globals:
;   TerminatedCString s_MeleeAttack_005f0673
;   TerminatedCString s_MeleeAttack_005f067f
;
; Called Functions:
;   core_basicene.cpp_FUN_0059e8c0
;   core_muzzle.cpp_FUN_0059d650
;   core_muzzle.cpp_FUN_0059daa0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a60d0
        ;   Label: core_weaver.cpp_CRobin_processStates_FUN_005a60d0
    PUSH ESI                            ; 005a60d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 005a60d2
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a60d6
    TEST EBX,EBX                        ; 005a60da
    JNZ 0x005a60f0                      ; 005a60dc
        ;   XREF to: 005a60f0 (CONDITIONAL_JUMP)  ; LAB_005a60f0
    LEA EAX,[ESI + 0x10af8]             ; 005a60de
        ;   Label: LAB_005a60de
    TEST EBX,EBX                        ; 005a60e4
    JBE 0x005a6100                      ; 005a60e6
        ;   XREF to: 005a6100 (CONDITIONAL_JUMP)  ; LAB_005a6100
    CMP EBX,0x1                         ; 005a60e8
    JZ 0x005a6111                       ; 005a60eb
        ;   XREF to: 005a6111 (CONDITIONAL_JUMP)  ; LAB_005a6111
    POP ESI                             ; 005a60ed
        ;   Label: LAB_005a60ed
    POP EBX                             ; 005a60ee
    RET                                 ; 005a60ef
    PUSH EBX                            ; 005a60f0
        ;   Label: LAB_005a60f0
    PUSH dword ptr [ESP + 0x14]         ; 005a60f1
    PUSH ESI                            ; 005a60f5
    CALL core_basicene.cpp_FUN_0059e8c0 ; 005a60f6
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; undefined core_basicene.cpp_FUN_0059e8c0()
    ADD ESP,0xc                         ; 005a60fb
    JMP 0x005a60de                      ; 005a60fe
        ;   XREF to: 005a60de (UNCONDITIONAL_JUMP)  ; LAB_005a60de
    PUSH 0x5f0673                       ; 005a6100 | = "MeleeAttack"
        ;   Label: LAB_005a6100
    PUSH EAX                            ; 005a6105
    CALL core_muzzle.cpp_FUN_0059d650   ; 005a6106
        ;   XREF to: 0059d650 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059d650()
    ADD ESP,0x8                         ; 005a610b
    POP ESI                             ; 005a610e
    POP EBX                             ; 005a610f
    RET                                 ; 005a6110
    PUSH 0x5f067f                       ; 005a6111 | = "MeleeAttack"
        ;   Label: LAB_005a6111
    PUSH EAX                            ; 005a6116
    CALL core_muzzle.cpp_FUN_0059daa0   ; 005a6117
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined core_muzzle.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005a611c
    TEST EAX,EAX                        ; 005a611f
    JZ 0x005a60ed                       ; 005a6121
        ;   XREF to: 005a60ed (CONDITIONAL_JUMP)  ; LAB_005a60ed
    PUSH dword ptr [ESP + 0x10]         ; 005a6123
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 005a6127
    PUSH ESI                            ; 005a612d
    CALL dword ptr [EAX + 0x180]        ; 005a612e
    ADD ESP,0x8                         ; 005a6134
    POP ESI                             ; 005a6137
    POP EBX                             ; 005a6138
    RET                                 ; 005a6139

