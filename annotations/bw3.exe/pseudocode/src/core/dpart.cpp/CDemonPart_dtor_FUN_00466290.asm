; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00466290(CDemonPart *this_ptr,uint flags)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_00473530 at 0047358b
;
; Called Functions:
;   core_dpart.cpp_FUN_004663b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466290
        ;   Label: core_dpart.cpp_CDemonPart_dtor_FUN_00466290
    MOV EBX,dword ptr [ESP + 0x8]       ; 00466291
    PUSH EBX                            ; 00466295
    CALL core_dpart.cpp_FUN_004663b0    ; 00466296
        ;   XREF to: 004663b0 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_FUN_004663b0()
    ADD ESP,0x4                         ; 0046629b
    MOV EAX,EBX                         ; 0046629e
    POP EBX                             ; 004662a0
    RET                                 ; 004662a1

