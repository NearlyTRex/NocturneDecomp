; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SPageResourceTwanaCharacter * __cdecl core_fldnotes_cpp_SPageResourceTwanaCharacter_ctor_FUN_004a87a0(SPageResourceTwanaCharacter *this_ptr,char *character)
;
; Parameters:
; SPageResourceTwanaCharacter * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   character
; Local Variables:
; undefined        Stack[-0x10c]:1  local_10c
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a9330 at 004a958d
;
; Referenced Globals:
;   undefined4 DAT_005c0d9a
;   void* g_SPageResourceTwanaCharacterVTable = 004a8830
;
; Called Functions:
;   core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650
;   crt_unknown.c_sprintf_FUN_005a28c0
;   engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a87a0
        ;   Label: core_fldnotes.cpp_SPageResourceTwanaCharacter_ctor_FUN_004a87a0
    PUSH ESI                            ; 004a87a1
    PUSH EDI                            ; 004a87a2
    SUB ESP,0x100                       ; 004a87a3
    MOV EDX,dword ptr [ESP + 0x110]     ; 004a87a9
    PUSH EDX                            ; 004a87b0
    CALL core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650 ; 004a87b1
        ;   XREF to: 004a8650 (UNCONDITIONAL_CALL)  ; SPageResourceBitmap * core_fldnotes.cpp_SPageResourceBitmap_ctor_FUN_004a8650(SPageResourceBitmap * this_ptr)
    MOV EBX,EAX                         ; 004a87b6
    ADD ESP,0x4                         ; 004a87b8
    LEA EDX,[EAX + 0x2c]                ; 004a87bb
    MOV ESI,dword ptr [ESP + 0x114]     ; 004a87be
    MOV EDI,EDX                         ; 004a87c5
    MOV dword ptr [EAX + 0x14],0x5e02b4 ; 004a87c7 | g_SPageResourceTwanaCharacterVTable
    PUSH EDI                            ; 004a87ce
    MOV AL,byte ptr [ESI]               ; 004a87cf
        ;   Label: LAB_004a87cf
    MOV byte ptr [EDI],AL               ; 004a87d1
    CMP AL,0x0                          ; 004a87d3
    JZ 0x004a87e7                       ; 004a87d5
        ;   XREF to: 004a87e7 (CONDITIONAL_JUMP)  ; LAB_004a87e7
    MOV AL,byte ptr [ESI + 0x1]         ; 004a87d7
    ADD ESI,0x2                         ; 004a87da
    MOV byte ptr [EDI + 0x1],AL         ; 004a87dd
    ADD EDI,0x2                         ; 004a87e0
    CMP AL,0x0                          ; 004a87e3
    JNZ 0x004a87cf                      ; 004a87e5
        ;   XREF to: 004a87cf (CONDITIONAL_JUMP)  ; LAB_004a87cf
    POP EDI                             ; 004a87e7
        ;   Label: LAB_004a87e7
    PUSH EDX                            ; 004a87e8
    PUSH 0x5c0d9a                       ; 004a87e9 | DAT_005c0d9a
    LEA EDX,[ESP + 0x8]                 ; 004a87ee
    PUSH EDX                            ; 004a87f2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 004a87f3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    MOV dword ptr [EBX + 0xc],0x4b      ; 004a87f8
    ADD ESP,0xc                         ; 004a87ff
    MOV ECX,dword ptr [EBX + 0xc]       ; 004a8802
    MOV dword ptr [EBX + 0x8],0x38      ; 004a8805
    PUSH ECX                            ; 004a880c
    MOV ESI,dword ptr [EBX + 0x8]       ; 004a880d
    PUSH ESI                            ; 004a8810
    LEA EDX,[ESP + 0x8]                 ; 004a8811
    PUSH EDX                            ; 004a8815
    LEA EDX,[EBX + 0x18]                ; 004a8816
    PUSH EDX                            ; 004a8819
    CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460 ; 004a881a
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; void engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040d460(CAlphaBitmap * this_ptr, char * filename, int width, int height)
    ADD ESP,0x10                        ; 004a881f
    MOV EAX,EBX                         ; 004a8822
    ADD ESP,0x100                       ; 004a8824
    POP EDI                             ; 004a882a
    POP ESI                             ; 004a882b
    POP EBX                             ; 004a882c
    RET                                 ; 004a882d

