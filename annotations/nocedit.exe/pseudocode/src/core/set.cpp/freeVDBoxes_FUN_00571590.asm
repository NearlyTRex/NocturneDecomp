; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_set_cpp_freeVDBoxes_FUN_00571590(SVDBox **array)
;
; Parameters:
; SVDBox * *       Stack[0x4]:4   array
;
; XREF[1]:
;   core_set.cpp_CDemonSet_dtor_FUN_00569350 at 00569367
;
; Referenced Globals:
;   WatcomTypeInfo g_SVDBoxTypeInfo
;
; Called Functions:
;   crt_memory.c___arrfini_FUN_005feee9
;
; *****************************************************************************

section .text

    PUSH 0x662910                       ; 00571590 | g_SVDBoxTypeInfo
        ;   Label: core_set.cpp_freeVDBoxes_FUN_00571590
    PUSH 0xfa                           ; 00571595
    MOV EDX,dword ptr [ESP + 0xc]       ; 0057159a
    PUSH EDX                            ; 0057159e
    CALL crt_memory.c___arrfini_FUN_005feee9 ; 0057159f
        ;   XREF to: 005feee9 (UNCONDITIONAL_CALL)  ; int crt_memory.c___arrfini_FUN_005feee9(void * * obj_array, int obj_count, WatcomTypeInfo * type_info)
    ADD ESP,0xc                         ; 005715a4
    RET                                 ; 005715a7

