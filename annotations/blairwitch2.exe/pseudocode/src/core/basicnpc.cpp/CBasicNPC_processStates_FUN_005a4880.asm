; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_basicnpc_cpp_CBasicNPC_processStates_FUN_005a4880(CBasicNPC *this_ptr,float delta_time,int mode)
;
; Parameters:
; CBasicNPC *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; int              Stack[0xc]:4   mode
;
; XREF[1]:
;   core_basicnpc.cpp_CBasicNPC_ctor_FUN_005a47b0 at 005a4840
;
; Called Functions:
;   core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0xc]       ; 005a4880
        ;   Label: core_basicnpc.cpp_CBasicNPC_processStates_FUN_005a4880
    TEST EAX,EAX                        ; 005a4884
    JNZ 0x005a4889                      ; 005a4886
        ;   XREF to: 005a4889 (CONDITIONAL_JUMP)  ; LAB_005a4889
    RET                                 ; 005a4888
    PUSH EAX                            ; 005a4889
        ;   Label: LAB_005a4889
    MOV EDX,dword ptr [ESP + 0x8]       ; 005a488a
    PUSH dword ptr [ESP + 0xc]          ; 005a488e
    PUSH EDX                            ; 005a4892
    CALL core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0 ; 005a4893
        ;   XREF to: 0059e8c0 (UNCONDITIONAL_CALL)  ; void core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0(CBasicEnemy * this_ptr, undefined4 param_2, int param_3)
    ADD ESP,0xc                         ; 005a4898
    RET                                 ; 005a489b

