; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceBitmap_dtor_FUN_004a2200(SPageResourceBitmap *this_ptr,uint flags)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_fldnotes.cpp_SPageResourceTwanaCharacter_dtor_FUN_004a2320 at 004a2336
;
; Referenced Globals:
;   void* g_SPageResourceBitmapVTable = 004a2200
;   WatcomTypeInfo g_PageResource_BitmapTypeInfo
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90
;   crt_memory.c___vec_delete_FUN_005b7fa7
;   crt_unknown.c_FUN_005b7fce
;   crt_unknown.c_FUN_005b7fdc
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440
;   engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2200
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_dtor_FUN_004a2200
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2201
    TEST byte ptr [ESP + 0xc],0x4       ; 004a2205
    JNZ 0x004a2247                      ; 004a220a
        ;   XREF to: 004a2247 (CONDITIONAL_JUMP)  ; LAB_004a2247
    ADD EBX,0x18                        ; 004a220c
    PUSH EBX                            ; 004a220f
    MOV dword ptr [EBX + -0x4],0x5f6ee4 ; 004a2210 | g_SPageResourceBitmapVTable
    CALL engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540 ; 004a2217
        ;   XREF to: 0040d540 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a221c
    PUSH 0x0                            ; 004a221f
    PUSH EBX                            ; 004a2221
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440 ; 004a2222
        ;   XREF to: 0040d440 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d440(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004a2227
    PUSH 0x1                            ; 004a222a
    LEA EBX,[EAX + -0x18]               ; 004a222c
    PUSH EBX                            ; 004a222f
    CALL core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90 ; 004a2230
        ;   XREF to: 004a1e90 (UNCONDITIONAL_CALL)  ; int core_fldnotes.cpp_SPageResource_dtor_FUN_004a1e90(SPageResource * this_ptr)
    ADD ESP,0x8                         ; 004a2235
    MOV DL,byte ptr [ESP + 0xc]         ; 004a2238
    MOV EBX,EAX                         ; 004a223c
    TEST DL,0x2                         ; 004a223e
    JNZ 0x004a2262                      ; 004a2241
        ;   XREF to: 004a2262 (CONDITIONAL_JUMP)  ; LAB_004a2262
    MOV EAX,EBX                         ; 004a2243
    POP EBX                             ; 004a2245
    RET                                 ; 004a2246
    PUSH 0x5f6fc0                       ; 004a2247 | g_PageResource_BitmapTypeInfo
        ;   Label: LAB_004a2247
    PUSH EBX                            ; 004a224c
    CALL crt_memory.c___vec_delete_FUN_005b7fa7 ; 004a224d
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; void * crt_memory.c___vec_delete_FUN_005b7fa7(void * object_ptr, WatcomTypeInfo * type_info)
    ADD ESP,0x8                         ; 004a2252
    PUSH EAX                            ; 004a2255
    CALL crt_unknown.c_FUN_005b7fce     ; 004a2256
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005b7fce(void * ptr)
    ADD ESP,0x4                         ; 004a225b
    MOV EAX,EBX                         ; 004a225e
    POP EBX                             ; 004a2260
    RET                                 ; 004a2261
    PUSH EAX                            ; 004a2262
        ;   Label: LAB_004a2262
    CALL crt_unknown.c_FUN_005b7fdc     ; 004a2263
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7fdc()
    ADD ESP,0x4                         ; 004a2268
    MOV EAX,EBX                         ; 004a226b
    POP EBX                             ; 004a226d
    RET                                 ; 004a226e

