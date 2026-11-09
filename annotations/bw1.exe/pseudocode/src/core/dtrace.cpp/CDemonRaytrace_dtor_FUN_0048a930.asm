; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonRaytrace * __cdecl core_dtrace_cpp_CDemonRaytrace_dtor_FUN_0048a930(CDemonRaytrace *this_ptr,uint flags)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Called Functions:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0
;   core_dtrace.cpp_FUN_0048aab0
;   core_dtrace.cpp_FUN_0048ace0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048a930
        ;   Label: core_dtrace.cpp_CDemonRaytrace_dtor_FUN_0048a930
    MOV EBX,dword ptr [ESP + 0x8]       ; 0048a931
    PUSH EBX                            ; 0048a935
    CALL core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0 ; 0048a936
        ;   XREF to: 0048a9b0 (UNCONDITIONAL_CALL)  ; void core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0(CDemonRaytrace * this_ptr)
    ADD ESP,0x4                         ; 0048a93b
    PUSH EBX                            ; 0048a93e
    CALL core_dtrace.cpp_FUN_0048ace0   ; 0048a93f
        ;   XREF to: 0048ace0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048ace0()
    ADD ESP,0x4                         ; 0048a944
    PUSH EBX                            ; 0048a947
    CALL core_dtrace.cpp_FUN_0048aab0   ; 0048a948
        ;   XREF to: 0048aab0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_0048aab0()
    ADD ESP,0x4                         ; 0048a94d
    MOV EAX,EBX                         ; 0048a950
    POP EBX                             ; 0048a952
    RET                                 ; 0048a953

