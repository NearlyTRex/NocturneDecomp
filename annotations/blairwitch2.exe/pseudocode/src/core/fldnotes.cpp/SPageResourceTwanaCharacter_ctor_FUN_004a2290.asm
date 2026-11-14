; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290(SPageResourceTwanaCharacter *this_ptr,char *character)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   character
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a2cc0 at 004a2f1d
;
; Referenced Globals:
;   undefined4 DAT_005d5a62
;   void* g_SPageResourceTwanaCharacterVTable = 004a2320
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140
;   crt_unknown.c_sprintf_FUN_005b7790
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2290
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004a2290
    PUSH ESI                            ; 004a2291
    PUSH EDI                            ; 004a2292
    SUB ESP,0x100                       ; 004a2293
    MOV EDX,dword ptr [ESP + 0x110]     ; 004a2299
    PUSH EDX                            ; 004a22a0
    CALL core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140 ; 004a22a1
        ;   XREF to: 004a2140 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a2140(SPageResourceBitmap * this_ptr)
    MOV EBX,EAX                         ; 004a22a6
    ADD ESP,0x4                         ; 004a22a8
    LEA EDX,[EAX + 0x2c]                ; 004a22ab
    MOV ESI,dword ptr [ESP + 0x114]     ; 004a22ae
    MOV EDI,EDX                         ; 004a22b5
    MOV dword ptr [EAX + 0x14],0x5f6ef4 ; 004a22b7 | g_SPageResourceTwanaCharacterVTable
    PUSH EDI                            ; 004a22be
    MOV AL,byte ptr [ESI]               ; 004a22bf
        ;   Label: LAB_004a22bf
    MOV byte ptr [EDI],AL               ; 004a22c1
    CMP AL,0x0                          ; 004a22c3
    JZ 0x004a22d7                       ; 004a22c5
        ;   XREF to: 004a22d7 (CONDITIONAL_JUMP)  ; LAB_004a22d7
    MOV AL,byte ptr [ESI + 0x1]         ; 004a22c7
    ADD ESI,0x2                         ; 004a22ca
    MOV byte ptr [EDI + 0x1],AL         ; 004a22cd
    ADD EDI,0x2                         ; 004a22d0
    CMP AL,0x0                          ; 004a22d3
    JNZ 0x004a22bf                      ; 004a22d5
        ;   XREF to: 004a22bf (CONDITIONAL_JUMP)  ; LAB_004a22bf
    POP EDI                             ; 004a22d7
        ;   Label: LAB_004a22d7
    PUSH EDX                            ; 004a22d8
    PUSH 0x5d5a62                       ; 004a22d9 | DAT_005d5a62
    LEA EDX,[ESP + 0x8]                 ; 004a22de
    PUSH EDX                            ; 004a22e2
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a22e3
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    MOV dword ptr [EBX + 0xc],0x4b      ; 004a22e8
    ADD ESP,0xc                         ; 004a22ef
    MOV ECX,dword ptr [EBX + 0xc]       ; 004a22f2
    MOV dword ptr [EBX + 0x8],0x38      ; 004a22f5
    PUSH ECX                            ; 004a22fc
    MOV ESI,dword ptr [EBX + 0x8]       ; 004a22fd
    PUSH ESI                            ; 004a2300
    LEA EDX,[ESP + 0x8]                 ; 004a2301
    PUSH EDX                            ; 004a2305
    LEA EDX,[EBX + 0x18]                ; 004a2306
    PUSH EDX                            ; 004a2309
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0 ; 004a230a
        ;   XREF to: 0040d5a0 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d5a0(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a230f
    MOV EAX,EBX                         ; 004a2312
    ADD ESP,0x100                       ; 004a2314
    POP EDI                             ; 004a231a
    POP ESI                             ; 004a231b
    POP EBX                             ; 004a231c
    RET                                 ; 004a231d

