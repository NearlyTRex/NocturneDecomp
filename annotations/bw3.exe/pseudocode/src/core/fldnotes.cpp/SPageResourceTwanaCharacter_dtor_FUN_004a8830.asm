; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaCharacter * core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830(SPageResourceTwanaCharacter *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaCharacterVTable = 004a8830
;   WatcomTypeInfo g_PageResource_TwanaCharacterTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8830
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8831
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8835
    JNZ 0x004a885d                      ; 004a883a
        ;   XREF to: 004a885d (CONDITIONAL_JUMP)  ; LAB_004a885d
    PUSH 0x1                            ; 004a883c
    PUSH EBX                            ; 004a883e
    MOV dword ptr [EBX + 0x14],0x5e02b4 ; 004a883f | g_SPageResourceTwanaCharacterVTable
    CALL core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710 ; 004a8846
        ;   XREF to: 004a8710 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710(SPageResourceBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a884b
    MOV DL,byte ptr [ESP + 0xc]         ; 004a884e
    MOV EBX,EAX                         ; 004a8852
    TEST DL,0x2                         ; 004a8854
    JNZ 0x004a8878                      ; 004a8857
        ;   XREF to: 004a8878 (CONDITIONAL_JUMP)  ; LAB_004a8878
    MOV EAX,EBX                         ; 004a8859
    POP EBX                             ; 004a885b
    RET                                 ; 004a885c
    PUSH 0x5e0380                       ; 004a885d | g_PageResource_TwanaCharacterTypeInfo
        ;   Label: LAB_004a885d
    PUSH EBX                            ; 004a8862
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a8863
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a8868
    PUSH EAX                            ; 004a886b
    CALL crt_unknown.c_FUN_005a30b6     ; 004a886c
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a8871
    MOV EAX,EBX                         ; 004a8874
    POP EBX                             ; 004a8876
    RET                                 ; 004a8877
    PUSH EAX                            ; 004a8878
        ;   Label: LAB_004a8878
    CALL crt_unknown.c_FUN_005a30c4     ; 004a8879
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a887e
    MOV EAX,EBX                         ; 004a8881
    POP EBX                             ; 004a8883
    RET                                 ; 004a8884

