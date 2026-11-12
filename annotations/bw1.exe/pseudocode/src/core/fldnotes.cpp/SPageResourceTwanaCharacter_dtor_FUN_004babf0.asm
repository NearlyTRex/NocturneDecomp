; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaCharacter * core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004babf0(SPageResourceTwanaCharacter *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaCharacterVTable = 004babf0
;   WatcomTypeInfo g_PageResource_TwanaCharacterTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004babf0
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004babf0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004babf1
    TEST byte ptr [ESP + 0xc],0x4       ; 004babf5
    JNZ 0x004bac1d                      ; 004babfa
        ;   XREF to: 004bac1d (CONDITIONAL_JUMP)  ; LAB_004bac1d
    PUSH 0x1                            ; 004babfc
    PUSH EBX                            ; 004babfe
    MOV dword ptr [EBX + 0x14],0x600954 ; 004babff | g_SPageResourceTwanaCharacterVTable
    CALL core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0 ; 004bac06
        ;   XREF to: 004baad0 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004baad0(SPageResourceBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004bac0b
    MOV DL,byte ptr [ESP + 0xc]         ; 004bac0e
    MOV EBX,EAX                         ; 004bac12
    TEST DL,0x2                         ; 004bac14
    JNZ 0x004bac38                      ; 004bac17
        ;   XREF to: 004bac38 (CONDITIONAL_JUMP)  ; LAB_004bac38
    MOV EAX,EBX                         ; 004bac19
    POP EBX                             ; 004bac1b
    RET                                 ; 004bac1c
    PUSH 0x600a20                       ; 004bac1d | g_PageResource_TwanaCharacterTypeInfo
        ;   Label: LAB_004bac1d
    PUSH EBX                            ; 004bac22
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004bac23
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005c030f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004bac28
    PUSH EAX                            ; 004bac2b
    CALL crt_unknown.c_FUN_005c0336     ; 004bac2c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004bac31
    MOV EAX,EBX                         ; 004bac34
    POP EBX                             ; 004bac36
    RET                                 ; 004bac37
    PUSH EAX                            ; 004bac38
        ;   Label: LAB_004bac38
    CALL crt_unknown.c_FUN_005c0344     ; 004bac39
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004bac3e
    MOV EAX,EBX                         ; 004bac41
    POP EBX                             ; 004bac43
    RET                                 ; 004bac44

