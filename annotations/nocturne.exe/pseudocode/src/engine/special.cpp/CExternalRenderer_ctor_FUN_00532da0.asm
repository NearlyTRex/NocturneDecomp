; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_00532da0(CExternalRenderer *this_ptr)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_special.cpp_FUN_00530e60 at 00530ebb
;   engine_special.cpp_loadExternalRenderer_FUN_00531780 at 00531810
;
; Called Functions:
;   crt_memory.c_memset_FUN_00563cc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00532da0
        ;   Label: engine_special.cpp_CExternalRenderer_ctor_FUN_00532da0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00532da1
    PUSH 0x1dc8                         ; 00532da5
    PUSH 0x0                            ; 00532daa
    PUSH EBX                            ; 00532dac
    CALL crt_memory.c_memset_FUN_00563cc0 ; 00532dad
        ;   XREF to: 00563cc0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_00563cc0(void * dest, int value, ulong count)
    MOV word ptr [EBX + 0x200],0x100    ; 00532db2
    MOV dword ptr [EBX + 0x208],0x0     ; 00532dbb
    MOV AH,byte ptr [EBX + 0x208]       ; 00532dc5
    MOV word ptr [EBX + 0x204],0x1      ; 00532dcb
    OR AH,0x1                           ; 00532dd4
    ADD ESP,0xc                         ; 00532dd7
    MOV byte ptr [EBX + 0x208],AH       ; 00532dda
    POP EBX                             ; 00532de0
    RET                                 ; 00532de1

