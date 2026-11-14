; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonPart * __cdecl core_dpart_cpp_CDemonPart_dtor_FUN_004614b0(CDemonPart *this_ptr,uint flags)
;
; Parameters:
; CDemonPart *     Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_dtrace.cpp_CDemonRaytrace_freeCubeList_FUN_004724c0 at 0047251b
;
; Called Functions:
;   core_dpart.cpp_FUN_004615d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004614b0
        ;   Label: core_dpart.cpp_CDemonPart_dtor_FUN_004614b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004614b1
    PUSH EBX                            ; 004614b5
    CALL core_dpart.cpp_FUN_004615d0    ; 004614b6
        ;   XREF to: 004615d0 (UNCONDITIONAL_CALL)  ; undefined core_dpart.cpp_FUN_004615d0()
    ADD ESP,0x4                         ; 004614bb
    MOV EAX,EBX                         ; 004614be
    POP EBX                             ; 004614c0
    RET                                 ; 004614c1

