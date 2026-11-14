; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a8710(SPageResourceBitmap *this_ptr,uint flags)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a8830 at 004a8846
;
; Referenced Globals:
;   void* g_SPageResourceBitmapVTable = 004a8710
;   WatcomTypeInfo g_PageResource_BitmapTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0
;   crt_memory.c___vec_delete_FUN_005a308f
;   crt_unknown.c_FUN_005a30b6
;   crt_unknown.c_FUN_005a30c4
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8710
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a8710
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a8711
    TEST byte ptr [ESP + 0xc],0x4       ; 004a8715
    JNZ 0x004a8757                      ; 004a871a
        ;   XREF to: 004a8757 (CONDITIONAL_JUMP)  ; LAB_004a8757
    ADD EBX,0x18                        ; 004a871c
    PUSH EBX                            ; 004a871f
    MOV dword ptr [EBX + -0x4],0x5e02a4 ; 004a8720 | g_SPageResourceBitmapVTable
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400 ; 004a8727
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d400(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a872c
    PUSH 0x0                            ; 004a872f
    PUSH EBX                            ; 004a8731
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300 ; 004a8732
        ;   XREF to: 0040d300 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d300(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a8737
    PUSH 0x1                            ; 004a873a
    LEA EBX,[EAX + -0x18]               ; 004a873c
    PUSH EBX                            ; 004a873f
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0 ; 004a8740
        ;   XREF to: 004a83a0 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a83a0(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a8745
    MOV DL,byte ptr [ESP + 0xc]         ; 004a8748
    MOV EBX,EAX                         ; 004a874c
    TEST DL,0x2                         ; 004a874e
    JNZ 0x004a8772                      ; 004a8751
        ;   XREF to: 004a8772 (CONDITIONAL_JUMP)  ; LAB_004a8772
    MOV EAX,EBX                         ; 004a8753
    POP EBX                             ; 004a8755
    RET                                 ; 004a8756
    PUSH 0x5e0360                       ; 004a8757 | g_PageResource_BitmapTypeInfo
        ;   Label: LAB_004a8757
    PUSH EBX                            ; 004a875c
    CALL crt_memory.c___vec_delete_FUN_005a308f ; 004a875d
        ;   XREF to: 005a308f (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005a308f(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a8762
    PUSH EAX                            ; 004a8765
    CALL crt_unknown.c_FUN_005a30b6     ; 004a8766
        ;   XREF to: 005a30b6 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005a30b6(void * ptr)
    ADD ESP,0x4                         ; 004a876b
    MOV EAX,EBX                         ; 004a876e
    POP EBX                             ; 004a8770
    RET                                 ; 004a8771
    PUSH EAX                            ; 004a8772
        ;   Label: LAB_004a8772
    CALL crt_unknown.c_FUN_005a30c4     ; 004a8773
        ;   XREF to: 005a30c4 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005a30c4()
    ADD ESP,0x4                         ; 004a8778
    MOV EAX,EBX                         ; 004a877b
    POP EBX                             ; 004a877d
    RET                                 ; 004a877e

