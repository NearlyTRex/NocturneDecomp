; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_meshlod_cpp_CLodMesh_init_FUN_00515880(CLodMesh *this_ptr)
;
; Parameters:
; CLodMesh *       Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   shape_meshlod.cpp_CLodMesh_copy_FUN_00515860 at 00515866
;   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840 at 00515846
;   shape_meshlod.cpp_CLodMesh_free_FUN_00515970 at 00515aa8
;
; Called Functions:
;   crt_memory.c_memset_FUN_005fde40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00515880
        ;   Label: shape_meshlod.cpp_CLodMesh_init_FUN_00515880
    MOV EBX,dword ptr [ESP + 0x8]       ; 00515881
    MOV dword ptr [EBX],0x0             ; 00515885
    MOV dword ptr [EBX + 0x3c],0x0      ; 0051588b
    MOV dword ptr [EBX + 0x4],0x0       ; 00515892
    MOV dword ptr [EBX + 0x8],0x0       ; 00515899
    MOV dword ptr [EBX + 0x40],0x0      ; 005158a0
    MOV dword ptr [EBX + 0xc],0x0       ; 005158a7
    MOV dword ptr [EBX + 0x34],0x0      ; 005158ae
    MOV dword ptr [EBX + 0x5c],0x0      ; 005158b5
    MOV dword ptr [EBX + 0x60],0x0      ; 005158bc
    MOV dword ptr [EBX + 0x44],0x0      ; 005158c3
    MOV dword ptr [EBX + 0x48],0x0      ; 005158ca
    PUSH 0x10                           ; 005158d1
    MOV dword ptr [EBX + 0x4c],0x0      ; 005158d3
    PUSH 0x0                            ; 005158da
    LEA EAX,[EBX + 0x24]                ; 005158dc
    MOV dword ptr [EBX + 0x50],0x0      ; 005158df
    PUSH EAX                            ; 005158e6
    MOV dword ptr [EBX + 0x18],0x0      ; 005158e7
    CALL crt_memory.c_memset_FUN_005fde40 ; 005158ee
        ;   XREF to: 005fde40 (UNCONDITIONAL_CALL)  ; void * crt_memory.c_memset_FUN_005fde40(void * dest, int value, ulong count)
    MOV dword ptr [EBX + 0x1c],0x0      ; 005158f3
    MOV dword ptr [EBX + 0x20],0x0      ; 005158fa
    MOV dword ptr [EBX + 0x10],0x0      ; 00515901
    MOV dword ptr [EBX + 0x14],0x0      ; 00515908
    MOV dword ptr [EBX + 0x54],0x0      ; 0051590f
    MOV dword ptr [EBX + 0x58],0x0      ; 00515916
    LEA EAX,[EBX + 0x64]                ; 0051591d
    MOV dword ptr [EBX + 0x70],0x3f800000 ; 00515920
    MOV dword ptr [EAX + 0x8],0x0       ; 00515927
    ADD ESP,0xc                         ; 0051592e
    MOV EDX,dword ptr [EAX + 0x8]       ; 00515931
    MOV dword ptr [EAX + 0x4],EDX       ; 00515934
    MOV EDX,dword ptr [EAX + 0x4]       ; 00515937
    MOV dword ptr [EAX],EDX             ; 0051593a
    MOV dword ptr [EBX + 0x38],0x0      ; 0051593c
    POP EBX                             ; 00515943
    RET                                 ; 00515944

