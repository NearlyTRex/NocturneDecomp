; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceBitmap * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60(SPageResourceTwanaCharacter *this_ptr,char *param_2)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bb94d
;
; Referenced Globals:
;   undefined4 DAT_005df8ad
;   void* g_SPageResourceTwanaCharacterVTable = 004babf0
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10
;   crt_unknown.c_sprintf_FUN_005bfb40
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bab60
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004bab60
    PUSH ESI                            ; 004bab61
    PUSH EDI                            ; 004bab62
    SUB ESP,0x100                       ; 004bab63
    MOV EDX,dword ptr [ESP + 0x110]     ; 004bab69
    PUSH EDX                            ; 004bab70
    CALL core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10 ; 004bab71
        ;   XREF to: 004baa10 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004baa10(SPageResourceBitmap * this_ptr)
    MOV EBX,EAX                         ; 004bab76
    ADD ESP,0x4                         ; 004bab78
    LEA EDX,[EAX + 0x2c]                ; 004bab7b
    MOV ESI,dword ptr [ESP + 0x114]     ; 004bab7e
    MOV EDI,EDX                         ; 004bab85
    MOV dword ptr [EAX + 0x14],0x600954 ; 004bab87 | g_SPageResourceTwanaCharacterVTable
    PUSH EDI                            ; 004bab8e
    MOV AL,byte ptr [ESI]               ; 004bab8f
        ;   Label: LAB_004bab8f
    MOV byte ptr [EDI],AL               ; 004bab91
    CMP AL,0x0                          ; 004bab93
    JZ 0x004baba7                       ; 004bab95
        ;   XREF to: 004baba7 (CONDITIONAL_JUMP)  ; LAB_004baba7
    MOV AL,byte ptr [ESI + 0x1]         ; 004bab97
    ADD ESI,0x2                         ; 004bab9a
    MOV byte ptr [EDI + 0x1],AL         ; 004bab9d
    ADD EDI,0x2                         ; 004baba0
    CMP AL,0x0                          ; 004baba3
    JNZ 0x004bab8f                      ; 004baba5
        ;   XREF to: 004bab8f (CONDITIONAL_JUMP)  ; LAB_004bab8f
    POP EDI                             ; 004baba7
        ;   Label: LAB_004baba7
    PUSH EDX                            ; 004baba8
    PUSH 0x5df8ad                       ; 004baba9 | DAT_005df8ad
    LEA EDX,[ESP + 0x8]                 ; 004babae
    PUSH EDX                            ; 004babb2
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 004babb3
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    MOV dword ptr [EBX + 0xc],0x4b      ; 004babb8
    ADD ESP,0xc                         ; 004babbf
    MOV ECX,dword ptr [EBX + 0xc]       ; 004babc2
    MOV dword ptr [EBX + 0x8],0x38      ; 004babc5
    PUSH ECX                            ; 004babcc
    MOV ESI,dword ptr [EBX + 0x8]       ; 004babcd
    PUSH ESI                            ; 004babd0
    LEA EDX,[ESP + 0x8]                 ; 004babd1
    PUSH EDX                            ; 004babd5
    LEA EDX,[EBX + 0x18]                ; 004babd6
    PUSH EDX                            ; 004babd9
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220 ; 004babda
        ;   XREF to: 0040d220 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d220(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004babdf
    MOV EAX,EBX                         ; 004babe2
    ADD ESP,0x100                       ; 004babe4
    POP EDI                             ; 004babea
    POP ESI                             ; 004babeb
    POP EBX                             ; 004babec
    RET                                 ; 004babed

