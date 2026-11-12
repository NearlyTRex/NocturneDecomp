; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaCharacter * core_fldnotes_cpp_SPageResourceTwanaCharacter_dtor_FUN_004a2320(SPageResourceTwanaCharacter *this_ptr,uint flags)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; Referenced Globals:
;   void* g_SPageResourceTwanaCharacterVTable = 004a2320
;   WatcomTypeInfo g_PageResource_TwanaCharacterTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2320
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a2320
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2321
    TEST byte ptr [ESP + 0xc],0x4       ; 004a2325
    JNZ 0x004a234d                      ; 004a232a
        ;   XREF to: 004a234d (CONDITIONAL_JUMP)  ; LAB_004a234d
    PUSH 0x1                            ; 004a232c
    PUSH EBX                            ; 004a232e
    MOV dword ptr [EBX + 0x14],0x5f6ef4 ; 004a232f | g_SPageResourceTwanaCharacterVTable
    CALL core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200 ; 004a2336
        ;   XREF to: 004a2200 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200(SPageResourceBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a233b
    MOV DL,byte ptr [ESP + 0xc]         ; 004a233e
    MOV EBX,EAX                         ; 004a2342
    TEST DL,0x2                         ; 004a2344
    JNZ 0x004a2368                      ; 004a2347
        ;   XREF to: 004a2368 (CONDITIONAL_JUMP)  ; LAB_004a2368
    MOV EAX,EBX                         ; 004a2349
    POP EBX                             ; 004a234b
    RET                                 ; 004a234c
    PUSH 0x5f6fe0                       ; 004a234d | g_PageResource_TwanaCharacterTypeInfo
        ;   Label: LAB_004a234d
    PUSH EBX                            ; 004a2352
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a2353
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a2358
    PUSH EAX                            ; 004a235b
    CALL crt_unknown.c_FUN_005b7fce     ; 004a235c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a2361
    MOV EAX,EBX                         ; 004a2364
    POP EBX                             ; 004a2366
    RET                                 ; 004a2367
    PUSH EAX                            ; 004a2368
        ;   Label: LAB_004a2368
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a2369
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a236e
    MOV EAX,EBX                         ; 004a2371
    POP EBX                             ; 004a2373
    RET                                 ; 004a2374

