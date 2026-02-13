; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_path_cpp_CPathMap_reset_FUN_00548510(CPathMap *this_ptr)
;
; Parameters:
; CPathMap *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_path.cpp_CPathMap_ctor_FUN_00546450 at 00546473
;   core_path.cpp_CPathMap_updateIfNeeded_FUN_00546a60 at 00546b8d
;   core_path.cpp_FUN_00548590 at 005485d7
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;   crt_stdlib.c_rand_FUN_005feb5c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00548510
        ;   Label: core_path.cpp_CPathMap_reset_FUN_00548510
    MOV EBX,dword ptr [ESP + 0x8]       ; 00548511
    PUSH 0x9c40                         ; 00548515
    PUSH 0x7f                           ; 0054851a
    LEA EAX,[EBX + 0x9c70]              ; 0054851c
    PUSH EAX                            ; 00548522
    CALL crt_memory.c_memset_FUN_005fde40 ; 00548523
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    LEA EAX,[EBX + 0x138c0]             ; 00548528
    MOV dword ptr [EBX + 0x138bc],0x0   ; 0054852e
    MOV dword ptr [EAX + 0x8],0x0       ; 00548538
    MOV EDX,dword ptr [EAX + 0x8]       ; 0054853f
    MOV dword ptr [EAX + 0x4],EDX       ; 00548542
    MOV EDX,dword ptr [EAX + 0x4]       ; 00548545
    MOV dword ptr [EAX],EDX             ; 00548548
    LEA EAX,[EBX + 0x138cc]             ; 0054854a
    MOV dword ptr [EBX + 0x138c0],0x7149f2ca ; 00548550
    MOV dword ptr [EAX + 0x8],0x0       ; 0054855a
    ADD ESP,0xc                         ; 00548561
    MOV EDX,dword ptr [EAX + 0x8]       ; 00548564
    MOV dword ptr [EAX + 0x4],EDX       ; 00548567
    MOV EDX,dword ptr [EAX + 0x4]       ; 0054856a
    MOV dword ptr [EAX],EDX             ; 0054856d
    CALL crt_stdlib.c_rand_FUN_005feb5c ; 0054856f
        ;   XREF to: 005feb5c (UNCONDITIONAL_CALL)  ; int crt_stdlib.c_rand_FUN_005feb5c()
    AND EAX,0x3fff                      ; 00548574
    MOV dword ptr [EBX + 0x138d8],EAX   ; 00548579
    POP EBX                             ; 0054857f
    RET                                 ; 00548580

