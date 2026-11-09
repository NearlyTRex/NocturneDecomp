; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * core_fldnotes_cpp_PageResource_Bitmap_dtor_FUN_004baad0(SPageResourceBitmap *this_ptr,uint flags)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
; uint             Stack[0x8]:4   flags
;
; XREF[1]:
;   core_fldnotes.cpp_PageResource_TwanaCharacter_dtor_FUN_004babf0 at 004bac06
;
; Referenced Globals:
;   void* g_PageResource_BitmapVTable = 004baad0
;   WatcomTypeInfo g_PageResource_BitmapTypeInfo
;
; Called Functions:
;   crt_memory.c___vec_delete_FUN_005c030f
;   crt_unknown.c_FUN_005c0336
;   crt_unknown.c_FUN_005c0344
;   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0
;   engine_alphabit.cpp_FUN_0040d1c0
;   unkaddr_004b9ab0.cpp_FUN_004ba760
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baad0
        ;   Label: core_fldnotes.cpp_PageResource_Bitmap_dtor_FUN_004baad0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004baad1
    TEST byte ptr [ESP + 0xc],0x4       ; 004baad5
    JNZ 0x004bab17                      ; 004baada
        ;   XREF to: 004bab17 (CONDITIONAL_JUMP)  ; LAB_004bab17
    ADD EBX,0x18                        ; 004baadc
    PUSH EBX                            ; 004baadf
    MOV dword ptr [EBX + -0x4],0x600944 ; 004baae0 | g_PageResource_BitmapVTable
    CALL engine_alphabit.cpp_FUN_0040d1c0 ; 004baae7
        ;   XREF to: 0040d1c0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_FUN_0040d1c0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004baaec
    PUSH 0x0                            ; 004baaef
    PUSH EBX                            ; 004baaf1
    CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0 ; 004baaf2
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_0040d0c0(CAlphaBitmap * this_ptr, uint flags)
    ADD ESP,0x8                         ; 004baaf7
    PUSH 0x1                            ; 004baafa
    LEA EBX,[EAX + -0x18]               ; 004baafc
    PUSH EBX                            ; 004baaff
    CALL unkaddr_004b9ab0.cpp_FUN_004ba760 ; 004bab00
        ;   XREF to: 004ba760 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004b9ab0.cpp_FUN_004ba760()
    ADD ESP,0x8                         ; 004bab05
    MOV DL,byte ptr [ESP + 0xc]         ; 004bab08
    MOV EBX,EAX                         ; 004bab0c
    TEST DL,0x2                         ; 004bab0e
    JNZ 0x004bab32                      ; 004bab11
        ;   XREF to: 004bab32 (CONDITIONAL_JUMP)  ; LAB_004bab32
    MOV EAX,EBX                         ; 004bab13
    POP EBX                             ; 004bab15
    RET                                 ; 004bab16
    PUSH 0x600a00                       ; 004bab17 | g_PageResource_BitmapTypeInfo
        ;   Label: LAB_004bab17
    PUSH EBX                            ; 004bab1c
    CALL crt_memory.c___vec_delete_FUN_005c030f ; 004bab1d
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined crt_memory.c___vec_delete_FUN_005c030f()
    ADD ESP,0x8                         ; 004bab22
    PUSH EAX                            ; 004bab25
    CALL crt_unknown.c_FUN_005c0336     ; 004bab26
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; void crt_unknown.c_FUN_005c0336(void * ptr)
    ADD ESP,0x4                         ; 004bab2b
    MOV EAX,EBX                         ; 004bab2e
    POP EBX                             ; 004bab30
    RET                                 ; 004bab31
    PUSH EAX                            ; 004bab32
        ;   Label: LAB_004bab32
    CALL crt_unknown.c_FUN_005c0344     ; 004bab33
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0344()
    ADD ESP,0x4                         ; 004bab38
    MOV EAX,EBX                         ; 004bab3b
    POP EBX                             ; 004bab3d
    RET                                 ; 004bab3e

