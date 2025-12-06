; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90(CExternalRenderer * this_ptr)
;
; Parameters:
; CExternalRenderer * Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   wincore_windll.cpp_initializeExternalRenderer_FUN_005b5ec0 at 005b5f1f
;   wincore_windll.cpp_loadExternalRenderer_FUN_005b6750 at 005b67e0
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005b7f90
        ;   Label: wincore_windll.cpp_CExternalRenderer_ctor_FUN_005b7f90
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b7f91
    PUSH 0x1dc8                         ; 005b7f95
    PUSH 0x0                            ; 005b7f9a
    PUSH EBX                            ; 005b7f9c
    CALL crt_memory.c_memset_FUN_005fde40 ; 005b7f9d | void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)
    MOV word ptr [EBX + 0x200],0x100    ; 005b7fa2
    MOV dword ptr [EBX + 0x208],0x0     ; 005b7fab
    MOV AH,byte ptr [EBX + 0x208]       ; 005b7fb5
    MOV word ptr [EBX + 0x204],0x1      ; 005b7fbb
    OR AH,0x1                           ; 005b7fc4
    ADD ESP,0xc                         ; 005b7fc7
    MOV byte ptr [EBX + 0x208],AH       ; 005b7fca
    POP EBX                             ; 005b7fd0
    RET                                 ; 005b7fd1

