; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CLodFace * __cdecl shape_meshlod_cpp_CLodFace_arrdtor_FUN_0051f0c0(CLodFace *this_ptr,uint flags)
;
; Parameters:
; CLodFace *       Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   WatcomTypeInfo g_LodFaceTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x661390                       ; 0051f0c0 | g_LodFaceTypeInfo
        ;   Label: shape_meshlod.cpp_CLodFace_arrdtor_FUN_0051f0c0
    PUSH 0xc8                           ; 0051f0c5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051f0ca
    PUSH EDX                            ; 0051f0ce
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0051f0cf
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_005feee9(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0051f0d4
    RET                                 ; 0051f0d7

