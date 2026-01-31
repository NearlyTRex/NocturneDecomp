; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_boneguy_cpp_freeBoneGuyBoxes_FUN_0041db30(SBoneGuyBox **objs)
;
; Parameters:
; SBoneGuyBox * *  Stack[0x4]:4   objs
;
; XREF[1]:
;   core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40 at 0041da59
;
; Referenced Globals:
;   WatcomTypeInfo g_SBoneGuyBoxTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x65b0e0                       ; 0041db30 | g_SBoneGuyBoxTypeInfo
        ;   Label: core_boneguy.cpp_freeBoneGuyBoxes_FUN_0041db30
    PUSH 0x14                           ; 0041db35
    MOV EDX,dword ptr [ESP + 0xc]       ; 0041db37
    PUSH EDX                            ; 0041db3b
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0041db3c
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 0041db41
    RET                                 ; 0041db44

