; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SBoneGuyBox * __cdecl core_boneguy_cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0(SBoneGuyBox *this_ptr,uint flags)
;
; Parameters:
; SBoneGuyBox *    Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041a400 at 0041a419
;
; Referenced Globals:
;   WatcomTypeInfo g_SBoneGuyBoxTypeInfo_0059aa00
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_0056494f
;
; *****************************************************************************

section .text

    PUSH 0x59aa00                       ; 0041a4f0 | g_SBoneGuyBoxTypeInfo_0059aa00
        ;   Label: core_boneguy.cpp_SBoneGuyBox_arrdtor_FUN_0041a4f0
    PUSH 0x14                           ; 0041a4f5
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041a4f7
    PUSH EDX                            ; 0041a4fb
    CALL crt_memory.c___arrfini_FUN_0056494f ; 0041a4fc
        ;   XREF to: 0056494f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___arrfini_FUN_0056494f(void * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041a501
    RET                                 ; 0041a504

