; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_004799c0(CDemonPart *this_ptr,uint flags)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_0048a9b0 at 0048aa0b
;
; Called Functions:
;   core_dpart.cpp_FUN_00479ae0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004799c0
        ;   Label: core_dpart.cpp_CDemonPart_dtor_FUN_004799c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004799c1
    PUSH EBX                            ; 004799c5
    CALL core_dpart.cpp_FUN_00479ae0    ; 004799c6
        ;   XREF to: 00479ae0 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_FUN_00479ae0()
    ADD ESP,0x4                         ; 004799cb
    MOV EAX,EBX                         ; 004799ce
    POP EBX                             ; 004799d0
    RET                                 ; 004799d1

