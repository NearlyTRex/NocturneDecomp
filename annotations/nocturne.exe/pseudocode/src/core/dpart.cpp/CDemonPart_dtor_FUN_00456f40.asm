; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_00456f40(CDemonPart *this_ptr,uint flags)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004672a0 at 004672fb
;
; Called Functions:
;   core_dpart.cpp_CDemonPart_free_FUN_00457060
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00456f40
        ;   Label: core_dpart.cpp_CDemonPart_dtor_FUN_00456f40
    MOV EBX,dword ptr [ESP + 0x8]       ; 00456f41
    PUSH EBX                            ; 00456f45
    CALL core_dpart.cpp_CDemonPart_free_FUN_00457060 ; 00456f46
        ;   XREF to: 00457060 (UNCONDITIONAL_CALL)  ; void core_dpart.cpp_CDemonPart_free_FUN_00457060(CDemonPart * this_ptr)
    ADD ESP,0x4                         ; 00456f4b
    MOV EAX,EBX                         ; 00456f4e
    POP EBX                             ; 00456f50
    RET                                 ; 00456f51

