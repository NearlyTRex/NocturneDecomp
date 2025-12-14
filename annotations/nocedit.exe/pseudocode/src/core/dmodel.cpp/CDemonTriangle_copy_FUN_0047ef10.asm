; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10(CDemonTriangle * this_ptr, CDemonTriangle * other)
;
; Parameters:
; CDemonTriangle * Stack[0x4]:4   this_ptr
; CDemonTriangle * Stack[0x8]:4   other
;
; Referenced Globals:
;   WatcomTypeInfo g_RA4HQPointTypeInfo
;
; Called Functions:
;   crt_memory.c_copyObjectArray_FUN_00600bc2
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047ef10
        ;   Label: core_dmodel.cpp_CDemonTriangle_copy_FUN_0047ef10
    MOV EDX,dword ptr [ESP + 0x8]       ; 0047ef14
    MOV ECX,dword ptr [EDX]             ; 0047ef18
    MOV dword ptr [EAX],ECX             ; 0047ef1a
    MOV ECX,dword ptr [EDX + 0x4]       ; 0047ef1c
    MOV dword ptr [EAX + 0x4],ECX       ; 0047ef1f
    MOV ECX,dword ptr [EDX + 0x8]       ; 0047ef22
    MOV dword ptr [EAX + 0x8],ECX       ; 0047ef25
    PUSH 0x65c9f0                       ; 0047ef28 | g_RA4HQPointTypeInfo
    MOV ECX,dword ptr [EDX + 0xc]       ; 0047ef2d
    ADD EDX,0x18                        ; 0047ef30
    MOV dword ptr [EAX + 0xc],ECX       ; 0047ef33
    PUSH 0x4                            ; 0047ef36
    MOV ECX,dword ptr [EDX + -0x8]      ; 0047ef38
    PUSH EDX                            ; 0047ef3b
    MOV dword ptr [EAX + 0x10],ECX      ; 0047ef3c
    ADD EAX,0x18                        ; 0047ef3f
    MOV ECX,dword ptr [EDX + -0x4]      ; 0047ef42
    PUSH EAX                            ; 0047ef45
    MOV dword ptr [EAX + -0x4],ECX      ; 0047ef46
    CALL crt_memory.c_copyObjectArray_FUN_00600bc2 ; 0047ef49
        ;   XREF to: 00600bc2 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_copyObjectArray_FUN_00600bc2(void * dest, void * source, int count, WatcomTypeInfo * type_info)
    ADD ESP,0x10                        ; 0047ef4e
    SUB EAX,0x18                        ; 0047ef51
    RET                                 ; 0047ef54

