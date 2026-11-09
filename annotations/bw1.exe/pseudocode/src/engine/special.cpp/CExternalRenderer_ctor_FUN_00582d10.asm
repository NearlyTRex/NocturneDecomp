; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_00582d10(CExternalRenderer *this_ptr)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_special.cpp_FUN_00581310 at 005813a0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005bfb70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00582d10
        ;   Label: engine_special.cpp_CExternalRenderer_ctor_FUN_00582d10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00582d11
    PUSH 0x1dc8                         ; 00582d15
    PUSH 0x0                            ; 00582d1a
    PUSH EBX                            ; 00582d1c
    CALL crt_memory.c_memset_FUN_005bfb70 ; 00582d1d
        ;   XREF to: 005bfb70 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005bfb70(void * dest, int value, ulong count)
    MOV word ptr [EBX + 0x200],0x100    ; 00582d22
    MOV dword ptr [EBX + 0x208],0x0     ; 00582d2b
    MOV AH,byte ptr [EBX + 0x208]       ; 00582d35
    MOV word ptr [EBX + 0x204],0x1      ; 00582d3b
    OR AH,0x1                           ; 00582d44
    ADD ESP,0xc                         ; 00582d47
    MOV byte ptr [EBX + 0x208],AH       ; 00582d4a
    POP EBX                             ; 00582d50
    RET                                 ; 00582d51

