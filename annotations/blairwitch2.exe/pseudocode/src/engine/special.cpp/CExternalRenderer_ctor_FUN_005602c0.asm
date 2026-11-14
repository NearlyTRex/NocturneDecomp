; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_special_cpp_CExternalRenderer_ctor_FUN_005602c0(CExternalRenderer *this_ptr)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_special.cpp_loadExternalRenderer_FUN_0055e8c0 at 0055e950
;
; Called Functions:
;   crt_memory.c_memset_FUN_005b77c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005602c0
        ;   Label: engine_special.cpp_CExternalRenderer_ctor_FUN_005602c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005602c1
    PUSH 0x1dc8                         ; 005602c5
    PUSH 0x0                            ; 005602ca
    PUSH EBX                            ; 005602cc
    CALL crt_memory.c_memset_FUN_005b77c0 ; 005602cd
        ;   XREF to: 005b77c0 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005b77c0(void * dest, int value, ulong count)
    MOV word ptr [EBX + 0x200],0x100    ; 005602d2
    MOV dword ptr [EBX + 0x208],0x0     ; 005602db
    MOV AH,byte ptr [EBX + 0x208]       ; 005602e5
    MOV word ptr [EBX + 0x204],0x1      ; 005602eb
    OR AH,0x1                           ; 005602f4
    ADD ESP,0xc                         ; 005602f7
    MOV byte ptr [EBX + 0x208],AH       ; 005602fa
    POP EBX                             ; 00560300
    RET                                 ; 00560301

