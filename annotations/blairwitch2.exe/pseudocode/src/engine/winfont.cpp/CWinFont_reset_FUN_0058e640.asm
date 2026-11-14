; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_winfont_cpp_CWinFont_reset_FUN_0058e640(CWinFont *this_ptr)
;
; Parameters:
; CWinFont *       Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   engine_winfont.cpp_CWinFont_createTextBackground_FUN_0058e450 at 0058e4cb
;   engine_winfont.cpp_CWinFont_dtor_FUN_0058e050 at 0058e067
;
; Referenced Globals:
;   void* PTR_DeleteDC_005c8404 = 001c880a
;   void* PTR_SelectObject_005c8418 = 001c885c
;
; Called Functions:
;   DeleteDC
;   SelectObject
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058e640
        ;   Label: engine_winfont.cpp_CWinFont_reset_FUN_0058e640
    MOV EBX,dword ptr [ESP + 0x8]       ; 0058e641
    MOV EDX,dword ptr [EBX + 0x6a48]    ; 0058e645
    TEST EDX,EDX                        ; 0058e64b
    JNZ 0x0058e66d                      ; 0058e64d
        ;   XREF to: 0058e66d (CONDITIONAL_JUMP)  ; LAB_0058e66d
    MOV dword ptr [EBX + 0x6b6c],0x0    ; 0058e64f
        ;   Label: LAB_0058e64f
    MOV EAX,dword ptr [EBX + 0x6b6c]    ; 0058e659
    MOV dword ptr [EBX + 0x6b68],EAX    ; 0058e65f
    MOV dword ptr [EBX + 0x6b64],EAX    ; 0058e665
    POP EBX                             ; 0058e66b
    RET                                 ; 0058e66c
    PUSH EDI                            ; 0058e66d
        ;   Label: LAB_0058e66d
    MOV ECX,dword ptr [EBX + 0x6a54]    ; 0058e66e
    PUSH ECX                            ; 0058e674
    PUSH EDX                            ; 0058e675
    CALL dword ptr CS:[0x5c8418]        ; 0058e676 | PTR_SelectObject_005c8418
    MOV EDI,dword ptr [EBX + 0x6a48]    ; 0058e67d
    PUSH EDI                            ; 0058e683
    MOV dword ptr [EBX + 0x6a54],0x0    ; 0058e684
    CALL dword ptr CS:[0x5c8404]        ; 0058e68e | PTR_DeleteDC_005c8404
    MOV dword ptr [EBX + 0x6a48],0x0    ; 0058e695
    MOV dword ptr [EBX + 0x6a4c],0x0    ; 0058e69f
    MOV dword ptr [EBX + 0x6a58],0x0    ; 0058e6a9
    POP EDI                             ; 0058e6b3
    JMP 0x0058e64f                      ; 0058e6b4
        ;   XREF to: 0058e64f (UNCONDITIONAL_JUMP)  ; LAB_0058e64f

