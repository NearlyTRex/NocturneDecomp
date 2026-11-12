; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_SPageResourceText_ctor_FUN_004a1f80(SPageResourceText *this_ptr,char *param_2,undefined4 param_3)
;
; Parameters:
; SPageResourceText * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; undefined4       Stack[0xc]:4   param_3
;
; XREF[1]:
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a2b30 at 004a2b58
;
; Referenced Globals:
;   void* g_SPageResourceTextVTable = 004a2000
;
; Called Functions:
;   core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60
;   engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560
;   engine_font.cpp_FUN_004aaf00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a1f80
        ;   Label: core_fldnotes.cpp_SPageResourceText_ctor_FUN_004a1f80
    PUSH ESI                            ; 004a1f81
    PUSH EDI                            ; 004a1f82
    MOV EDX,dword ptr [ESP + 0x10]      ; 004a1f83
    PUSH EDX                            ; 004a1f87
    CALL core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60 ; 004a1f88
        ;   XREF to: 004a1e60 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_SPageResource_ctor_FUN_004a1e60(SPageResource * this_ptr)
    MOV EBX,EAX                         ; 004a1f8d
    ADD ESP,0x4                         ; 004a1f8f
    MOV dword ptr [EAX + 0x14],0x5f6ed4 ; 004a1f92 | g_SPageResourceTextVTable
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a1f99
    LEA EDX,[EBX + 0x1c]                ; 004a1f9d
    MOV ESI,dword ptr [ESP + 0x14]      ; 004a1fa0
    MOV EDI,EDX                         ; 004a1fa4
    MOV dword ptr [EBX + 0x11c],EAX     ; 004a1fa6
    PUSH EDI                            ; 004a1fac
    MOV AL,byte ptr [ESI]               ; 004a1fad
        ;   Label: LAB_004a1fad
    MOV byte ptr [EDI],AL               ; 004a1faf
    CMP AL,0x0                          ; 004a1fb1
    JZ 0x004a1fc5                       ; 004a1fb3
        ;   XREF to: 004a1fc5 (CONDITIONAL_JUMP)  ; LAB_004a1fc5
    MOV AL,byte ptr [ESI + 0x1]         ; 004a1fb5
    ADD ESI,0x2                         ; 004a1fb8
    MOV byte ptr [EDI + 0x1],AL         ; 004a1fbb
    ADD EDI,0x2                         ; 004a1fbe
    CMP AL,0x0                          ; 004a1fc1
    JNZ 0x004a1fad                      ; 004a1fc3
        ;   XREF to: 004a1fad (CONDITIONAL_JUMP)  ; LAB_004a1fad
    POP EDI                             ; 004a1fc5
        ;   Label: LAB_004a1fc5
    PUSH EDX                            ; 004a1fc6
    MOV ECX,dword ptr [EBX + 0x11c]     ; 004a1fc7
    PUSH ECX                            ; 004a1fcd
    MOV dword ptr [EBX + 0x18],0x0      ; 004a1fce
    CALL engine_font.cpp_FUN_004aaf00   ; 004a1fd5
        ;   XREF to: 004aaf00 (UNCONDITIONAL_CALL)  ; undefined engine_font.cpp_FUN_004aaf00()
    ADD ESP,0x8                         ; 004a1fda
    PUSH 0x6a                           ; 004a1fdd
    MOV ESI,dword ptr [EBX + 0x11c]     ; 004a1fdf
    PUSH ESI                            ; 004a1fe5
    MOV dword ptr [EBX + 0x8],EAX       ; 004a1fe6
    CALL engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560 ; 004a1fe9
        ;   XREF to: 004ab560 (UNCONDITIONAL_CALL)  ; int engine_font.cpp_CBitFont_getCharHeight_FUN_004ab560(CBitFont * this_ptr, int char_code)
    ADD ESP,0x8                         ; 004a1fee
    MOV dword ptr [EBX + 0xc],EAX       ; 004a1ff1
    MOV EAX,EBX                         ; 004a1ff4
    POP EDI                             ; 004a1ff6
    POP ESI                             ; 004a1ff7
    POP EBX                             ; 004a1ff8
    RET                                 ; 004a1ff9

