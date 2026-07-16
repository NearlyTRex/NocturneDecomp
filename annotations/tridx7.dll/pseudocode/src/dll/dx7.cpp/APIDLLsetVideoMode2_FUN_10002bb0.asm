; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl dll_dx7_cpp_APIDLLsetVideoMode2_FUN_10002bb0(int width,int height,int bits_per_pixel,void **screen_buffer_array)
;
; Parameters:
; int              Stack[0x4]:4   width
; int              Stack[0x8]:4   height
; int              Stack[0xc]:4   bits_per_pixel
; void * *         Stack[0x10]:4   screen_buffer_array
;
; Referenced Globals:
;   undefined4 DAT_10014174
;   undefined4 DAT_10014178
;   undefined4 DAT_1001417c
;
; Called Functions:
;   dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 10002bb0
        ;   Label: dll_dx7.cpp_APIDLLsetVideoMode2_FUN_10002bb0
    MOV ECX,dword ptr [ESP + 0x8]       ; 10002bb4
    MOV EDX,dword ptr [ESP + 0xc]       ; 10002bb8
    MOV [0x10014174],EAX                ; 10002bbc | DAT_10014174
    MOV EAX,dword ptr [ESP + 0x10]      ; 10002bc1
    MOV dword ptr [0x10014178],ECX      ; 10002bc5 | DAT_10014178
    PUSH EAX                            ; 10002bcb
    MOV dword ptr [0x1001417c],EDX      ; 10002bcc | DAT_1001417c
    CALL dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500 ; 10002bd2
        ;   XREF to: 10002500 (UNCONDITIONAL_CALL)  ; int dll_dx7.cpp_APIDLLsetVideoMode_FUN_10002500(void * * scanline_ptrs) | Ordinal_31
    ADD ESP,0x4                         ; 10002bd7
    RET                                 ; 10002bda

