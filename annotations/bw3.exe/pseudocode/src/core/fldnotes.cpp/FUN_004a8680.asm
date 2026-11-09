; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * core_fldnotes_cpp_FUN_004a8680(undefined4 param_1,char *param_2,int param_3,int param_4)
;
; Local Variables:
; undefined        Stack[-0x108]:1  local_108
;
; XREF[1]:
;   core_fldnotes.cpp_FUN_004a9330 at 004a94a7
;
; Referenced Globals:
;   void* g_PageResource_BitmapVTable = 004a8710
;
; Called Functions:
;   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;   engine_dosio.cpp_FUN_00465e50
;   unkaddr_004a76f0.cpp_FUN_004a8370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8680
        ;   Label: core_fldnotes.cpp_FUN_004a8680
    PUSH ESI                            ; 004a8681
    SUB ESP,0x100                       ; 004a8682
    MOV EBX,dword ptr [ESP + 0x10c]     ; 004a8688
    PUSH EBX                            ; 004a868f
    CALL unkaddr_004a76f0.cpp_FUN_004a8370 ; 004a8690
        ;   XREF to: 004a8370 (UNCONDITIONAL_CALL)  ; undefined unkaddr_004a76f0.cpp_FUN_004a8370()
    ADD ESP,0x4                         ; 004a8695
    ADD EAX,0x18                        ; 004a8698
    PUSH EAX                            ; 004a869b
    CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0 ; 004a869c
        ;   XREF to: 0040d2e0 (UNCONDITIONAL_CALL)  ; CAlphaBitmap * engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_0040d2e0(CAlphaBitmap * this_ptr)
    ADD ESP,0x4                         ; 004a86a1
    LEA EBX,[EAX + -0x18]               ; 004a86a4
    PUSH 0x0                            ; 004a86a7
    LEA EAX,[ESP + 0x4]                 ; 004a86a9
    PUSH EAX                            ; 004a86ad
    PUSH 0x0                            ; 004a86ae
    PUSH 0x0                            ; 004a86b0
    MOV EDX,dword ptr [ESP + 0x120]     ; 004a86b2
    PUSH EDX                            ; 004a86b9
    MOV dword ptr [EBX + 0x14],0x5e02a4 ; 004a86ba | g_PageResource_BitmapVTable
    CALL engine_dosio.cpp_FUN_00465e50  ; 004a86c1
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; void engine_dosio.cpp_FUN_00465e50(char * full_path, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 004a86c6
    MOV ECX,dword ptr [ESP + 0x118]     ; 004a86c9
    PUSH ECX                            ; 004a86d0
    MOV ESI,dword ptr [ESP + 0x118]     ; 004a86d1
    PUSH ESI                            ; 004a86d8
    LEA EAX,[ESP + 0x8]                 ; 004a86d9
    PUSH EAX                            ; 004a86dd
    LEA EAX,[EBX + 0x18]                ; 004a86de
    PUSH EAX                            ; 004a86e1
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004a86e2
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    MOV EAX,dword ptr [EBX + 0x24]      ; 004a86e7
    MOV dword ptr [EBX + 0x8],EAX       ; 004a86ea
    MOV EAX,dword ptr [EBX + 0x28]      ; 004a86ed
    ADD ESP,0x10                        ; 004a86f0
    MOV dword ptr [EBX + 0xc],EAX       ; 004a86f3
    MOV EAX,EBX                         ; 004a86f6
    ADD ESP,0x100                       ; 004a86f8
    POP ESI                             ; 004a86fe
    POP EBX                             ; 004a86ff
    RET                                 ; 004a8700

