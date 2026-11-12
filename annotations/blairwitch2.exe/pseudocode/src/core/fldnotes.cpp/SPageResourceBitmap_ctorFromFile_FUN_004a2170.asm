; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170(SPageResourceBitmap *this_ptr,char *param_2,int param_3,int param_4)
;
; Parameters:
; SPageResourceBitmap * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2e37
;
; Referenced Globals:
;   void* g_SPageResourceBitmapVTable = 004a2200
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;   engine_dosio.cpp_splitPath_FUN_00461070
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2170
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004a2170
    PUSH ESI                            ; 004a2171
    SUB ESP,0x100                       ; 004a2172
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004a2178
    PUSH EBX                            ; 004a217f
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60 ; 004a2180
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004a2185
    ADD EAX,0x18                        ; 004a2188
    PUSH EAX                            ; 004a218b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420 ; 004a218c
        ;   XREF to: 0040d420 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d420(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a2191
    LEA EBX,[EAX + -0x18]               ; 004a2194
    PUSH 0x0                            ; 004a2197
    LEA EAX,[ESP + 0x4]                 ; 004a2199
    PUSH EAX                            ; 004a219d
    PUSH 0x0                            ; 004a219e
    PUSH 0x0                            ; 004a21a0
    MOV EDX,dword ptr [ESP + 0x120]     ; 004a21a2
    PUSH EDX                            ; 004a21a9
    MOV dword ptr [EBX + 0x14],0x5f6ee4 ; 004a21aa | g_SPageResourceBitmapVTable
    CALL engine_dosio.cpp_splitPath_FUN_00461070 ; 004a21b1
        ;   XREF to: 00461070 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00461070(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a21b6
    MOV ECX,dword ptr [ESP + 0x118]     ; 004a21b9
    PUSH ECX                            ; 004a21c0
    MOV ESI,dword ptr [ESP + 0x118]     ; 004a21c1
    PUSH ESI                            ; 004a21c8
    LEA EAX,[ESP + 0x8]                 ; 004a21c9
    PUSH EAX                            ; 004a21cd
    LEA EAX,[EBX + 0x18]                ; 004a21ce
    PUSH EAX                            ; 004a21d1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a21d2
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a21d7
    MOV dword ptr [EBX + 0x8],EAX       ; 004a21da
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a21dd
    ADD ESP,0x10                        ; 004a21e0
    MOV dword ptr [EBX + 0xc],EAX       ; 004a21e3
    MOV EAX,EBX                         ; 004a21e6
    ADD ESP,0x100                       ; 004a21e8
    POP ESI                             ; 004a21ee
    POP EBX                             ; 004a21ef
    RET                                 ; 004a21f0

