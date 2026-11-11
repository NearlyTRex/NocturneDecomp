; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * __cdecl core_fldnotes_cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40(SPageResourceBitmap *this_ptr,char *param_2,int param_3,int param_4)
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
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bb867
;
; Referenced Globals:
;   void* g_SPageResourceBitmapVTable = 004baad0
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;   engine_dosio.cpp_splitPath_FUN_00479580
;   unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004baa40
        ;   Label: core_fldnotes.cpp_SPageResourceBitmap_ctorFromFile_FUN_004baa40
    PUSH ESI                            ; 004baa41
    SUB ESP,0x100                       ; 004baa42
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004baa48
    PUSH EBX                            ; 004baa4f
    CALL unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730 ; 004baa50
        ;   XREF to: 004ba730 (UNCONDITIONAL_CALL)  ; void unkaddr_004b9ab0.cpp_SPageResource_ctor_FUN_004ba730(SPageResource * this_ptr)
    ADD ESP,0x4                         ; 004baa55
    ADD EAX,0x18                        ; 004baa58
    PUSH EAX                            ; 004baa5b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0 ; 004baa5c
        ;   XREF to: 0040d0a0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d0a0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004baa61
    LEA EBX,[EAX + -0x18]               ; 004baa64
    PUSH 0x0                            ; 004baa67
    LEA EAX,[ESP + 0x4]                 ; 004baa69
    PUSH EAX                            ; 004baa6d
    PUSH 0x0                            ; 004baa6e
    PUSH 0x0                            ; 004baa70
    MOV EDX,dword ptr [ESP + 0x120]     ; 004baa72
    PUSH EDX                            ; 004baa79
    MOV dword ptr [EBX + 0x14],0x600944 ; 004baa7a | g_SPageResourceBitmapVTable
    CALL engine_dosio.cpp_splitPath_FUN_00479580 ; 004baa81
        ;   XREF to: 00479580 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_splitPath_FUN_00479580(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004baa86
    MOV ECX,dword ptr [ESP + 0x118]     ; 004baa89
    PUSH ECX                            ; 004baa90
    MOV ESI,dword ptr [ESP + 0x118]     ; 004baa91
    PUSH ESI                            ; 004baa98
    LEA EAX,[ESP + 0x8]                 ; 004baa99
    PUSH EAX                            ; 004baa9d
    LEA EAX,[EBX + 0x18]                ; 004baa9e
    PUSH EAX                            ; 004baaa1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004baaa2
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,dword ptr [EBX + 0x24]      ; 004baaa7
    MOV dword ptr [EBX + 0x8],EAX       ; 004baaaa
    MOV EAX,dword ptr [EBX + 0x28]      ; 004baaad
    ADD ESP,0x10                        ; 004baab0
    MOV dword ptr [EBX + 0xc],EAX       ; 004baab3
    MOV EAX,EBX                         ; 004baab6
    ADD ESP,0x100                       ; 004baab8
    POP ESI                             ; 004baabe
    POP EBX                             ; 004baabf
    RET                                 ; 004baac0

